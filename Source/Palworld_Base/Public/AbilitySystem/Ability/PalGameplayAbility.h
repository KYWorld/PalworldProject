// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Ability/BaseGameplayAbility.h"
#include "PalGameplayAbility.generated.h"

class APalCharacterBase;
/**
 * 
 */
UCLASS()
class PALWORLD_BASE_API UPalGameplayAbility : public UBaseGameplayAbility
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, Category = "Ability")
	APalCharacterBase* GetPalCharacterFromActorInfo();

private:
	TWeakObjectPtr<APalCharacterBase> CachedPalCharacter;
};
