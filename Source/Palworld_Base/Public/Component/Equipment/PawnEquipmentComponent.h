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
   //생성된 무기 등록
   UFUNCTION(BlueprintCallable, Category = "Player")
   void RegisterSpawnedEquipment(FGameplayTag EquipmentTag, AEquipmentBase* Equipment, bool bRegisterAsEquippedEquipment = false);

   //캐릭터가 휴대하는 무기
   UFUNCTION(BlueprintCallable, Category = "Player")
   AEquipmentBase* GetCharacterCarriedEquipmentByTag(FGameplayTag EquipmentTag) const;

    //캐릭터가 소유한 무기의 태그
    UPROPERTY(BlueprintReadWrite, Category = "Player")
    FGameplayTag CurrentEquippedEquipmentTag;

    //캐릭터가 장착한 무기
    UFUNCTION(BlueprintCallable, Category = "Player")
    AEquipmentBase* GetCharacterCurrentEquippedEquipment() const;

    //캐릭터가 장착한 무기
    UFUNCTION(BlueprintCallable, Category = "Equipment")
    void ToggleEquipmentCollsion(bool bUse, EToggleDamageType ToggleDamageType = EToggleDamageType::CurrentEquippedEquipment);

    //HitDetection
    virtual void OnHitTargetActor(AActor* HitActor);
    virtual void OnEquipmentPulledFromTargetActor(AActor* InterectedActor);

    //캐릭터가 투사체를 던지기 전 무기의 태그
    UPROPERTY(BlueprintReadWrite, Category = "Player")
    FGameplayTag CurrentCachedEquippedEquipmentTag;
    UFUNCTION(BlueprintCallable, Category = "Player")
    void SetCachedEquippedEquipmentTag(FGameplayTag CachedTag);

    //스폰한 장비
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
    //캐릭터는 여러 장비를 소유할 수 있다.
    TMap<FGameplayTag, AEquipmentBase*> CharacterCarriedEquipmentMap;
	
};
