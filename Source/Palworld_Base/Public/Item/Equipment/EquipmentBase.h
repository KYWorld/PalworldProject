// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item/ItemBase.h"
#include "GameplayAbilitySpecHandle.h"
#include "BaseLibrary/BaseStructType.h"
#include "EquipmentBase.generated.h"

/**
 * 
 */
UCLASS()
class PALWORLD_BASE_API AEquipmentBase : public AItemBase
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AEquipmentBase();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Item")
	USkeletalMeshComponent* EquipmentItemMesh;

public:
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "WeaponData")
    FPlayerEquipmentData PlayerEquipmentData;

    UFUNCTION(BlueprintCallable)
    void AssignGrantedAbilitySpecHandles(const TArray<FGameplayAbilitySpecHandle>& SpecHandles);

    UFUNCTION(BlueprintPure)
    TArray<FGameplayAbilitySpecHandle> GetGrantedAbilitySpecHandles() const;

private:

    TArray<FGameplayAbilitySpecHandle> GrantedAbilitySpecHandles;
};
