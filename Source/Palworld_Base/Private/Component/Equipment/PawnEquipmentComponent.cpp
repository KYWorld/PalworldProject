// Fill out your copyright notice in the Description page of Project Settings.


#include "Component/Equipment/PawnEquipmentComponent.h"
#include "Item/Equipment/EquipmentBase.h"
#include "Components/BoxComponent.h"
#include "Character/Pal/PalCharacterBase.h"


void UPawnEquipmentComponent::RegisterSpawnedEquipment(FGameplayTag EquipmentTag, AEquipmentBase* Equipment, bool bRegisterAsEquippedEquipment)
{
    //checkf(!CharacterCarriedEquipmentMap.Contains(EquipmentTag), TEXT("%s has already been as carried Equipment"), *EquipmentTag.ToString());
    //check(Equipment);

    if (!CharacterCarriedEquipmentMap.Contains(EquipmentTag))
    {
        CharacterCarriedEquipmentMap.Emplace(EquipmentTag, Equipment);
    }

    // 무기 델리게이트 등록
    // Equipment->OnItemHitTarget.BindUObject(this, &UPawnEquipmentComponent::OnHitTargetActor);
    //Equipment->OnEquipmentPulledFromTarget.BindUObject(this, &UPawnEquipmentComponent::OnWeaponPulledFromTargetActor);

    //장착한 무기로 등록이 되면 현재장착무기를 변경
    if (bRegisterAsEquippedEquipment)
    {
        // 구현해야함
        CurrentEquippedEquipmentTag = EquipmentTag;
    }
}

AEquipmentBase* UPawnEquipmentComponent::GetCharacterCarriedEquipmentByTag(FGameplayTag EquipmentTag) const
{
    //Map 컨테이너에 WeaponTag의 데이터가 있으면 AWeaponBase 반환
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
    // 무기 구현시 생성
   if (!CurrentEquippedEquipmentTag.IsValid())
    {
        return nullptr;
    }

    return GetCharacterCarriedEquipmentByTag(CurrentEquippedEquipmentTag);
}

void UPawnEquipmentComponent::ToggleEquipmentCollsion(bool bUse, EToggleDamageType ToggleDamageType)
{
    // 무기 구현시 생성
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

void UPawnEquipmentComponent::SetCachedEquippedEquipmentTag(FGameplayTag CachedTag)
{
    CurrentCachedEquippedEquipmentTag = CachedTag;
}

void UPawnEquipmentComponent::SetSpawnedEquipment(AEquipmentBase* _SpawnedEquipment)
{
    SpawnedEquipment = _SpawnedEquipment;
}

void UPawnEquipmentComponent::DisableActor(AActor* Actor)
{
    if (!Actor) return;

    // 1. 콜리전 비활성화
    Actor->SetActorEnableCollision(false);

    // 2. Tick 비활성화
    Actor->SetActorTickEnabled(false);

    // 4. 모든 컴포넌트의 콜리전 비활성화 및 물리 활성화
    TSet<UActorComponent*> Components = Actor->GetComponents();
    for (UActorComponent* Component : Components)
    {
        if (UPrimitiveComponent* PrimitiveComponent = Cast<UPrimitiveComponent>(Component))
        {
            PrimitiveComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
            PrimitiveComponent->SetSimulatePhysics(false);
        }
    }
}

void UPawnEquipmentComponent::AbleActor(AActor* Actor)
{
    if (!Actor) return;

    // 1. 콜리전 활성화
    Actor->SetActorEnableCollision(true);

    // 2. Tick 비활성화
    Actor->SetActorTickEnabled(false);

    // 4. 모든 컴포넌트의 콜리전 활성화 및 물리 비활성화
    TSet<UActorComponent*> Components = Actor->GetComponents();
    for (UActorComponent* Component : Components)
    {
        if (UPrimitiveComponent* PrimitiveComponent = Cast<UPrimitiveComponent>(Component))
        {
            PrimitiveComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
            PrimitiveComponent->SetSimulatePhysics(false);
        }
    }

}
