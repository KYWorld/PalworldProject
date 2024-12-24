// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/BaseCharacter.h"
#include "PalCharacterBase.generated.h"


/**
 * 
 */
UCLASS()
class PALWORLD_BASE_API APalCharacterBase : public ABaseCharacter
{
	GENERATED_BODY()

public:
	APalCharacterBase();


protected:
	virtual void PossessedBy(AController* NewController) override;
	virtual void BeginPlay() override;

private:
	void InitEnemyStartUpData();
};
