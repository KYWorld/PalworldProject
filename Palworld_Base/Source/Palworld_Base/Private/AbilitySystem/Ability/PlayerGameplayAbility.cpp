// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Ability/PlayerGameplayAbility.h"
//#include "Character/PlayerCharacter.h"

#include "AbilitySystem/BaseAbilitySystemComponent.h"
//#include "BaseGamePlayTags.h"

#include "Controller/BasePlayerController.h"
//
//APlayerCharacter* UPlayerGameplayAbility::GetPlayerCharacterFromActorInfo()
//{
//    if (!CachedPlayerCharacter.IsValid())
//    {
//        CachedPlayerCharacter = Cast<APlayerCharacter>(CurrentActorInfo->AvatarActor);
//    }
//
//    return CachedPlayerCharacter.IsValid() ? CachedPlayerCharacter.Get() : nullptr;
//}
//
//ABasePlayerController* UPlayerGameplayAbility::GetPlayerControllerFromActorInfo()
//{
//    if (!CachedPlayerController.IsValid())
//    {
//        CachedPlayerController = Cast<ABasePlayerController>(CurrentActorInfo->PlayerController);
//
//    }
//    return CachedPlayerController.IsValid() ? CachedPlayerController.Get() : nullptr;
//}
//
//UPlayerEquipmentComponent* UPlayerGameplayAbility::GetPlayerEquipmentComponentFromActorInfo()
//{
//    //return GetPlayerCharacterFromActorInfo()->;
//}
//
//FGameplayEffectSpecHandle UPlayerGameplayAbility::MakePlayerDamageEffectSpecHandle(TSubclassOf<UGameplayEffect> Effect, float WeaponBaseDamage, FGameplayTag AttackTypeTag, int32 ComboCount)
//{
//	return FGameplayEffectSpecHandle();
//}
