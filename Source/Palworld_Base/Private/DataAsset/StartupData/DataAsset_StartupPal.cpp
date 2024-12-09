// Fill out your copyright notice in the Description page of Project Settings.


#include "DataAsset/StartupData/DataAsset_StartupPal.h"
#include "AbilitySystem/BaseAbilitySystemComponent.h"
#include "AbilitySystem/Ability/PalGameplayAbility.h"

void UDataAsset_StartupPal::GiveToAbilitySystemComponent(UBaseAbilitySystemComponent* ASC, int32 Level)
{
	Super::GiveToAbilitySystemComponent(ASC, Level);

	if (!PalAbilities.IsEmpty())
	{
		for (const TSubclassOf<UPalGameplayAbility>& AbilityClass : PalAbilities)
		{
			if (!AbilityClass) continue;
			FGameplayAbilitySpec AbilitySpec(AbilityClass);
			AbilitySpec.SourceObject = ASC->GetAvatarActor();
			AbilitySpec.Level = Level;
			ASC->GiveAbility(AbilitySpec);
		}
	}
}
