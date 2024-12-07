// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseLibrary/BaseFunctionLibrary.h"
#include "AbilitySystem/BaseAbilitySystemComponent.h"
#include "AbilitySystemBlueprintLibrary.h"
//#include "Interfaces/PawnCombatInterface.h" 
// �����ؾ���

UBaseAbilitySystemComponent* UBaseFunctionLibrary::NativeGetBaseAbilitySystemComponentFromActor(AActor* Actor)
{
	check(Actor);
	return CastChecked<UBaseAbilitySystemComponent>(UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(Actor));
}

void UBaseFunctionLibrary::AddPlaygameTagToActor(AActor* Actor, FGameplayTag Tag)
{
	UBaseAbilitySystemComponent* ASC = NativeGetBaseAbilitySystemComponentFromActor(Actor);
	if (!ASC->HasMatchingGameplayTag(Tag))
	{
		ASC->AddLooseGameplayTag(Tag);
	}
}

void UBaseFunctionLibrary::RemovePlaygameTagFromActor(AActor* Actor, FGameplayTag Tag)
{
	UBaseAbilitySystemComponent* ASC = NativeGetBaseAbilitySystemComponentFromActor(Actor);
	if (ASC->HasMatchingGameplayTag(Tag))
	{
		ASC->RemoveLooseGameplayTag(Tag);
	}
}

bool UBaseFunctionLibrary::NativeActorHasTag(AActor* Actor, FGameplayTag Tag)
{
	UBaseAbilitySystemComponent* ASC = NativeGetBaseAbilitySystemComponentFromActor(Actor);
	return ASC->HasMatchingGameplayTag(Tag);
}

void UBaseFunctionLibrary::BP_HasTag(AActor* Actor, FGameplayTag Tag, EBaseConfirmType& OutType)
{
	OutType = NativeActorHasTag(Actor, Tag) ? EBaseConfirmType::Yes : EBaseConfirmType::No;
}

UPawnEquipmentComponent* UBaseFunctionLibrary::NativeGetUPawnEquipmentComponentFromActor(AActor* Actor)
{
	return nullptr;
}

UPawnEquipmentComponent* UBaseFunctionLibrary::BP_GetUPawnEquipmentComponentFromActor(AActor* Actor, EBaseValidType& OutValidType)
{
	return nullptr;
}
