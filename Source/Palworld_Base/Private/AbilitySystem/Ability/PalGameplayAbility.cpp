// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Ability/PalGameplayAbility.h"
#include "Character/Pal/PalCharacterBase.h"
#include "AbilitySystem/BaseAbilitySystemComponent.h"
#include "BaseLibrary/BaseGameplayTag.h"

APalCharacterBase* UPalGameplayAbility::GetPalCharacterFromActorInfo()
{
    if (!CachedPalCharacter.IsValid())
    {
        CachedPalCharacter = Cast<APalCharacterBase>(CurrentActorInfo->AvatarActor);
    }

    return CachedPalCharacter.IsValid() ? CachedPalCharacter.Get() : nullptr;
}
