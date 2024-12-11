// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GameplayTagContainer.h"
#include "BaseAnimInstance.generated.h"

class ABaseCharacter;
class UCharacterMovementComponent;

/**
 * 
 */
UCLASS()
class PALWORLD_BASE_API UBaseAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	virtual void NativeInitializeAnimation() override; //초기값 설정된
	virtual void NativeThreadSafeUpdateAnimation(float DeltaSeconds); //업데이트시 최적화 시킬수 있는 함수

protected:
	UPROPERTY()
	ABaseCharacter* OwningCharacter;
	
	UPROPERTY()
	UCharacterMovementComponent* OwningMovementComponent;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Locomotion")
	float GroundSpeed;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Locomotion")
	bool bHasAcceleration;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Locomotion")
	bool bIsRun;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Locomotion")
	bool bIsFalling;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Locomotion")
	bool bIsCrouching;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Locomotion")
	FVector Velocity;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Locomotion")
	float LocomotionDirection;

protected:
	UFUNCTION(BlueprintPure, meta = (BlueprintThreadSafe))
	bool OwnerHasTag(FGameplayTag Tag) const;
};
