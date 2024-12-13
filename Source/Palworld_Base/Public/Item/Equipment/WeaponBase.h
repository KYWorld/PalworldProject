// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item/Equipment/EquipmentBase.h"
#include "GameplayAbilitySpecHandle.h"
#include "WeaponBase.generated.h"

/**
 * 
 */
UCLASS()
class PALWORLD_BASE_API AWeaponBase : public AEquipmentBase
{
	GENERATED_BODY()
	

public:
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "WeaponData")
    FPlayerWeaponData PlayerWeaponData;

    UFUNCTION(BlueprintCallable)
    void AssignGrantedAbilitySpecHandles(const TArray<FGameplayAbilitySpecHandle>& SpecHandles);

    UFUNCTION(BlueprintPure)
    TArray<FGameplayAbilitySpecHandle> GetGrantedAbilitySpecHandles() const;
    
private:

    TArray<FGameplayAbilitySpecHandle> GrantedAbilitySpecHandles;
};
