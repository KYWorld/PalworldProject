// Fill out your copyright notice in the Description page of Project Settings.


#include "Item/Equipment/EquipmentBase.h"

AEquipmentBase::AEquipmentBase()
{
    EquipmentItemMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("EquipmentItemMesh"));
    RootComponent = EquipmentItemMesh;

}

void AEquipmentBase::AssignGrantedAbilitySpecHandles(const TArray<FGameplayAbilitySpecHandle>& SpecHandles)
{
    GrantedAbilitySpecHandles = SpecHandles;
}

TArray<FGameplayAbilitySpecHandle> AEquipmentBase::GetGrantedAbilitySpecHandles() const
{
    return GrantedAbilitySpecHandles;
}
