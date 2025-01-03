// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/BaseAbilitySystemComponent.h"
#include "AbilitySystem/Ability/PlayerGameplayAbility.h"
#include "BaseLibrary/BaseStructType.h"
#include "GameplayAbilitySpec.h"

void UBaseAbilitySystemComponent::OnAbilityInputPressed(const FGameplayTag& InputTag)
{
    if (!InputTag.IsValid())
    {
        return;
    }

    //������ �������� �Է� ����
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

    //������ �������� �Է� ����
    if (bCancelInputReleased == true)
    {
        for (const FGameplayAbilitySpec& Spec : GetActivatableAbilities())
        {
            if (Spec.DynamicAbilityTags.HasTagExact(InputTag))
            {
                CancelAbilityHandle(Spec.Handle);
            }
        }
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

bool UBaseAbilitySystemComponent::TryActivateAbilityByTag(FGameplayTag Tag)
{
    check(Tag.IsValid());

    TArray<FGameplayAbilitySpec*> AbilitySpecs;
    //�� �Լ��� Ȱ��ȭ ������ ��� ���� ����Ƽ ������ �����´�.
    GetActivatableGameplayAbilitySpecsByAllMatchingTags(Tag.GetSingleTagContainer(), AbilitySpecs);

    //AbilitySpecs �迭�� ���� �����Ͱ� ������
    if (!AbilitySpecs.IsEmpty())
    {
        const int32 RandomAbilityIndex = FMath::RandRange(0, AbilitySpecs.Num() - 1);
        FGameplayAbilitySpec* AbilitySpec = AbilitySpecs[RandomAbilityIndex];

        check(AbilitySpec);

        if (!AbilitySpec->IsActive())
        {
            return TryActivateAbility(AbilitySpec->Handle);
        }
    }

    return false;
}

void UBaseAbilitySystemComponent::TryCancelAbilityByTag(FGameplayTag Tag)
{
    check(Tag.IsValid());
    FGameplayTagContainer GameplayTagContainer = Tag.GetSingleTagContainer();
    CancelAbilities(&GameplayTagContainer);
}

void UBaseAbilitySystemComponent::SetbCancelInputReleased(bool _bCancelInputReleased)
{
    bCancelInputReleased = _bCancelInputReleased;
}

void UBaseAbilitySystemComponent::GrantAbility(TSubclassOf<UPlayerGameplayAbility> AbilityToGrant, int32 Level, FGameplayAbilitySpecHandle& OutGrantedAbilitySpecHandles)
{
    //        FGameplayAbilitySpec Spec(WeaponAbilitySet.AbilityToGrant);
    FGameplayAbilitySpec Spec(AbilityToGrant);
    Spec.SourceObject = GetAvatarActor();
    Spec.Level = Level;
    OutGrantedAbilitySpecHandles = GiveAbility(Spec);
}
