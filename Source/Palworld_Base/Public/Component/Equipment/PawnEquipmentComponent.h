// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Component/PawnExtensionComponent.h"
#include "GameplayTagContainer.h"
#include "PawnEquipmentComponent.generated.h"

UENUM(BlueprintType)
enum class EToggleDamageType : uint8
{
    CurrentEquippedEquipment,
    LeftHand,
    RightHand,
};

class AEquipmentBase;
class AWeaponBase;
/**
 * 
 */
UCLASS()
class PALWORLD_BASE_API UPawnEquipmentComponent : public UPawnExtensionComponent
{
    GENERATED_BODY()

public:
   //������ ���� ���
   UFUNCTION(BlueprintCallable, Category = "Player")
   void RegisterSpawnedEquipment(FGameplayTag EquipmentTag, AEquipmentBase* Equipment, bool bRegisterAsEquippedEquipment = false);

   //ĳ���Ͱ� �޴��ϴ� ����
   UFUNCTION(BlueprintCallable, Category = "Player")
   AEquipmentBase* GetCharacterCarriedEquipmentByTag(FGameplayTag EquipmentTag) const;

    //ĳ���Ͱ� ������ ������ �±�
    UPROPERTY(BlueprintReadWrite, Category = "Player")
    FGameplayTag CurrentEquippedEquipmentTag;

    //ĳ���Ͱ� ������ ����
    UFUNCTION(BlueprintCallable, Category = "Player")
    AEquipmentBase* GetCharacterCurrentEquippedEquipment() const;

    //ĳ���Ͱ� ������ ����
    UFUNCTION(BlueprintCallable, Category = "Equipment")
    void ToggleEquipmentCollsion(bool bUse, EToggleDamageType ToggleDamageType = EToggleDamageType::CurrentEquippedEquipment);

    //HitDetection
    virtual void OnHitTargetActor(AActor* HitActor);
    virtual void OnEquipmentPulledFromTargetActor(AActor* InterectedActor);

    //ĳ���Ͱ� ����ü�� ������ �� ������ �±�
    UPROPERTY(BlueprintReadWrite, Category = "Player")
    FGameplayTag CurrentCachedEquippedEquipmentTag;
    UFUNCTION(BlueprintCallable, Category = "Player")
    void SetCachedEquippedEquipmentTag(FGameplayTag CachedTag);

    //������ ���
    UPROPERTY(BlueprintReadWrite, Category = "Player")
    AEquipmentBase* SpawnedEquipment;

    UFUNCTION(BlueprintCallable, Category = "Player")
    void SetSpawnedEquipment(AEquipmentBase* _SpawnedEquipment);

    UPROPERTY(BlueprintReadWrite, Category = "Player")
    TArray<FGameplayAbilitySpecHandle> SpecHandles;


    UPROPERTY(BlueprintReadWrite, Category = "Player")
    AWeaponBase* CurrentWeapon;


protected:
    TArray<AActor*> OverlappedActors;

private:
    //ĳ���ʹ� ���� ��� ������ �� �ִ�.
    TMap<FGameplayTag, AEquipmentBase*> CharacterCarriedEquipmentMap;
	
};
