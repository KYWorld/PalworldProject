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
class APalCharacterBase;
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

    //������ ���
    UPROPERTY(BlueprintReadWrite, Category = "Player")
    AActor* SpawnedActor;


    UFUNCTION(BlueprintCallable, Category = "Player")
    void SetSpawnedEquipment(AEquipmentBase* _SpawnedEquipment);

    UPROPERTY(BlueprintReadWrite, Category = "Player")
    TArray<FGameplayAbilitySpecHandle> SpecHandles;


    UFUNCTION(BlueprintCallable, Category = "Player")
    void DisableActor(AActor* Actor);


    UFUNCTION(BlueprintCallable, Category = "Player")
    void AbleActor(AActor* Actor);

    //UFUNCTION(BlueprintCallable, Category = "Ability")
    //void GrantAbility(TSubclassOf<UPlayerGameplayAbility> AbilityToGrant, int32 Level, FGameplayAbilitySpecHandle& OutGrantedAbilitySpecHandles);

    UPROPERTY(BlueprintReadWrite, Category = "Player")
    TSubclassOf<UPlayerGameplayAbility> CachedGA;

    UPROPERTY(BlueprintReadWrite, Category = "Player")
    FGameplayAbilitySpecHandle CachedSpecHandle;


    UPROPERTY(VisibleAnyWhere, BlueprintReadWrite, category = "Ability", meta = (AllowPrivateAccess = "true"))
    TArray<FGameplayAbilitySpecHandle> GliderSpecHandles;

protected:
    TArray<AActor*> OverlappedActors;

private:
    //ĳ���ʹ� ���� ��� ������ �� �ִ�.
    TMap<FGameplayTag, AEquipmentBase*> CharacterCarriedEquipmentMap;
	
};
