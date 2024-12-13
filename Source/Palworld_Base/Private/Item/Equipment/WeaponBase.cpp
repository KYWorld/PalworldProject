// Fill out your copyright notice in the Description page of Project Settings.


#include "Item/Equipment/WeaponBase.h"


void AWeaponBase::AssignGrantedAbilitySpecHandles(const TArray<FGameplayAbilitySpecHandle>& SpecHandles)
{
    GrantedAbilitySpecHandles = SpecHandles;
}

TArray<FGameplayAbilitySpecHandle> AWeaponBase::GetGrantedAbilitySpecHandles() const
{
    return GrantedAbilitySpecHandles;
}
