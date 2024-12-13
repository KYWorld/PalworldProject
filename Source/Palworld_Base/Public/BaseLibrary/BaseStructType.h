// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "GameplayTagContainer.h"
#include "ScalableFloat.h"
#include "BaseStructType.generated.h"

class UInputMappingContext;
class UPlayerGameplayAbility;
class UPlayerAnimInstance;

USTRUCT(BlueprintType)
struct FPlayerAbilitySet
{
    GENERATED_BODY()

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (Categories = "InputTag"))
    FGameplayTag InputTag;

    //부여가능한 능력
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    TSubclassOf<UPlayerGameplayAbility> AbilityToGrant;

    bool IsValid() const;
};

USTRUCT(BlueprintType)
struct FArmorStatus
{
    GENERATED_BODY()

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (Categories = "Status"))
    float Defence;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (Categories = "Status"))
    float Hp;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (Categories = "Status"))
    float Durability;
};

USTRUCT(BlueprintType)
struct FWeaponStatus
{
    GENERATED_BODY()

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (Categories = "Status"))
    float Attack;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (Categories = "Status"))
    float Durability;
};

USTRUCT(BlueprintType)
struct FPlayerEquipmentData
{
    GENERATED_BODY()

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (TitleProperty = "Status"))
    FArmorStatus ArmorStatus;
};

USTRUCT(BlueprintType)
struct FPlayerWeaponData
{
    GENERATED_BODY()


    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    TSubclassOf<UPlayerAnimInstance> WeaponAnimLayerToLink;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    UInputMappingContext* WeaponInputMappingContext;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (TitleProperty = "InputTag"))
    TArray<FPlayerAbilitySet> WeaponAbilities;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    FWeaponStatus WeaponStatus;
};