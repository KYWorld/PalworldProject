// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Ability/PalGameplayAbility.h"
#include "Character/Pal/PalCharacterBase.h"
#include "AbilitySystem/BaseAbilitySystemComponent.h"
#include "Controller/BaseAIController.h"
#include "BaseLibrary/BaseGameplayTag.h"

APalCharacterBase* UPalGameplayAbility::GetPalCharacterFromActorInfo()
{
    if (!CachedPalCharacter.IsValid())
    {
        CachedPalCharacter = Cast<APalCharacterBase>(CurrentActorInfo->AvatarActor);
    }

    return CachedPalCharacter.IsValid() ? CachedPalCharacter.Get() : nullptr;
}

ABaseAIController* UPalGameplayAbility::GetPalAIControllerFromActorInfo()
{
    if (!CachedPalAIController.IsValid())
    {
        CachedPalAIController = Cast<ABaseAIController>(CurrentActorInfo->PlayerController);
    }

    return CachedPalAIController.IsValid() ? CachedPalAIController.Get() : nullptr;
}
