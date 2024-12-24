// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BaseAIController.generated.h"

class UAIPerceptionComponent;
class UAISenseConfig_Sight;

struct FAIStimulus;

/**
 * 
 */
UCLASS()
class PALWORLD_BASE_API ABaseAIController : public AAIController
{
	GENERATED_BODY()

public:
	ABaseAIController(const FObjectInitializer& ObjectInitializer);

protected:

	virtual ETeamAttitude::Type GetTeamAttitudeTowards(const AActor& Other) const override;

	virtual void BeginPlay() override;
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UAIPerceptionComponent* AIPerceptionComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UAISenseConfig_Sight* AISenseConfig_Sight;

private:
	UPROPERTY(EditDefaultsOnly, Category = "AI")
	bool bDetourCrowdAvoidence = true;

	UPROPERTY(EditDefaultsOnly, Category = "AI", meta = (EditCondition = "bDetourCrowdAvoidence", UIMin = "1", UIMax = "4"))
	int32 bDetourCrowdAvoidenceQuality = 4;

	UPROPERTY(EditDefaultsOnly, Category = "AI", meta = (EditCondition = "bDetourCrowdAvoidence"))
	float CollsionQueryRange = 600.f;	


	UFUNCTION(BlueprintCallable)
	void SetTeamId(const FGenericTeamId& NewTeamID);

	UFUNCTION(BlueprintCallable)
	FGenericTeamId GetTeamId();

};
