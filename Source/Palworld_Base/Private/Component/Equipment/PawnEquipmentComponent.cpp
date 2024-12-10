// Fill out your copyright notice in the Description page of Project Settings.


#include "Component/Equipment/PawnEquipmentComponent.h"
#include "Item/Equipment/EquipmentBase.h"
#include "Components/BoxComponent.h"

void UPawnEquipmentComponent::RegisterSpawnedEquipment(FGameplayTag EquipmentTag, AEquipmentBase* Equipment, bool bRegisterAsEquippedEquipment)
{
    checkf(!CharacterCarriedEquipmentMap.Contains(EquipmentTag), TEXT("%s has already been as carried Equipment"), *EquipmentTag.ToString());
    check(Equipment);

    if (!CharacterCarriedEquipmentMap.Contains(EquipmentTag))
    {
        CharacterCarriedEquipmentMap.Emplace(EquipmentTag, Equipment);

    }

    // ���� ��������Ʈ ���
    // Equipment->OnItemHitTarget.BindUObject(this, &UPawnEquipmentComponent::OnHitTargetActor);
    //Equipment->OnEquipmentPulledFromTarget.BindUObject(this, &UPawnEquipmentComponent::OnWeaponPulledFromTargetActor);

    //������ ����� ����� �Ǹ� �����������⸦ ����
    if (bRegisterAsEquippedEquipment)
    {
        // �����ؾ���
        CurrentEquippedEquipmentTag = EquipmentTag;
    }
}

AEquipmentBase* UPawnEquipmentComponent::GetCharacterCarriedEquipmentByTag(FGameplayTag EquipmentTag) const
{
    //Map �����̳ʿ� WeaponTag�� �����Ͱ� ������ AWeaponBase ��ȯ
    if (CharacterCarriedEquipmentMap.Contains(EquipmentTag))
    {
        if (AEquipmentBase* const* FoundEquipment = CharacterCarriedEquipmentMap.Find(EquipmentTag))
        {
            return *FoundEquipment;
        }
    }

    return nullptr;
}

AEquipmentBase* UPawnEquipmentComponent::GetCharacterCurrentEquippedEquipment() const
{
    // ���� ������ ����
   if (!CurrentEquippedEquipmentTag.IsValid())
    {
        return nullptr;
    }

    return GetCharacterCarriedEquipmentByTag(CurrentEquippedEquipmentTag);
}

void UPawnEquipmentComponent::ToggleEquipmentCollsion(bool bUse, EToggleDamageType ToggleDamageType)
{
    // ���� ������ ����
    //if (ToggleDamageType == EToggleDamageType::CurrentEquippedWeapon)
    //{
    //    AWeaponBase* Weapon = GetCharacterCurrentEquippedWeapon();

    //    check(Weapon);

    //    if (bUse)
    //    {
    //        Weapon->GetWeaponCollisionBox()->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    //        //Debug::Print(Weapon->GetName() + TEXT("Collsion Enabled"), FColor::Green);
    //    }
    //    else
    //    {
    //        Weapon->GetWeaponCollisionBox()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    //        OverlappedActors.Empty();
    //        //Debug::Print(Weapon->GetName() + TEXT("NoCollision"), FColor::Red);
    //    }
    //}
}

void UPawnEquipmentComponent::OnHitTargetActor(AActor* HitActor)
{
}

void UPawnEquipmentComponent::OnEquipmentPulledFromTargetActor(AActor* InterectedActor)
{
}
