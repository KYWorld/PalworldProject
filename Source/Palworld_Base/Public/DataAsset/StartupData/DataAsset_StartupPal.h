// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DataAsset/StartupData/DataAsset_StartupBase.h"
#include "DataAsset_StartupPal.generated.h"

class UPalGameplayAbility;
/**
 * 
 */
UCLASS()
class PALWORLD_BASE_API UDataAsset_StartupPal : public UDataAsset_StartupBase
{
	GENERATED_BODY()

public:
	virtual void GiveToAbilitySystemComponent(UBaseAbilitySystemComponent* ASC, int32 Level = 1) override;
private:
	UPROPERTY(EditDefaultsOnly, Category = "StartUpData")
	TArray<TSubclassOf<UPalGameplayAbility>> PalAbilities;
	
};
