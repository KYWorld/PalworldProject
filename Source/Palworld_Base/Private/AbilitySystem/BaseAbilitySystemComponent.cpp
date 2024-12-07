// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/BaseAbilitySystemComponent.h"
#include "AbilitySystem/Ability/PlayerGameplayAbility.h"
#include "BaseLibrary/BaseStructType.h"

void UBaseAbilitySystemComponent::OnAbilityInputPressed(const FGameplayTag& InputTag)
{
    if (!InputTag.IsValid())
    {
        return;
    }

    //주입한 스펙으로 입력 실행
    for (const FGameplayAbilitySpec& Spec : GetActivatableAbilities())
    {
        if (!Spec.DynamicAbilityTags.HasTagExact(InputTag)) continue;

        TryActivateAbility(Spec.Handle);
    }
}

void UBaseAbilitySystemComponent::OnAbilityInputReleased(const FGameplayTag& InputTag)
{
    if (!InputTag.IsValid())
    {
        return;
    }

    //주입한 스펙으로 입력 실행
    for (const FGameplayAbilitySpec& Spec : GetActivatableAbilities())
    {
        CancelAbilityHandle(Spec.Handle);
    }
}

void UBaseAbilitySystemComponent::GrantPlayerWeaponAbilities(const TArray<FPlayerAbilitySet>& WeaponAbilities, int32 Level, TArray<FGameplayAbilitySpecHandle>& OutGrantedAbilitySpecHandles)
{
    if (WeaponAbilities.IsEmpty())
    {
        return;
    }

    for (const FPlayerAbilitySet& WeaponAbilitySet : WeaponAbilities)
    {
        if (!WeaponAbilitySet.IsValid()) continue;

        FGameplayAbilitySpec Spec(WeaponAbilitySet.AbilityToGrant);
        Spec.SourceObject = GetAvatarActor();
        Spec.Level = Level;
        Spec.DynamicAbilityTags.AddTag(WeaponAbilitySet.InputTag);
        OutGrantedAbilitySpecHandles.AddUnique(GiveAbility(Spec));

    }
}

void UBaseAbilitySystemComponent::RemoveGrantedPlayerWeaponAbilities(UPARAM(ref)TArray<FGameplayAbilitySpecHandle>& SpecHandlesToRemove)
{
    if (SpecHandlesToRemove.IsEmpty())
    {
        return;
    }

    for (FGameplayAbilitySpecHandle& SpecHandle : SpecHandlesToRemove)
    {
        if (SpecHandle.IsValid())
        {
            ClearAbility(SpecHandle);
        }
    }

    SpecHandlesToRemove.Empty();
}
