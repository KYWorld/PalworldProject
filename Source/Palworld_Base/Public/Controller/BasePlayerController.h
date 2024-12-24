// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GenericTeamAgentInterface.h"
#include "BasePlayerController.generated.h"

/**
 * 
 */
UCLASS()
class PALWORLD_BASE_API ABasePlayerController : public APlayerController, public IGenericTeamAgentInterface
{
	GENERATED_BODY()

public:
	ABasePlayerController();

	virtual FGenericTeamId GetGenericTeamId() const override;

private:
	FGenericTeamId PlayerTeamId;

};
