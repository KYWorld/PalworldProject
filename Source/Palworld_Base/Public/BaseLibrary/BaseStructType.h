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

    //�ο������� �ɷ�
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    TSubclassOf<UPlayerGameplayAbility> AbilityToGrant;

    bool IsValid() const;
};

USTRUCT(BlueprintType)
struct FArmorStatus
{
    GENERATED_BODY()

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (Categories = "Status"))
    float Defence = 0.0f;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (Categories = "Status"))
    float Hp = 0.0f;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (Categories = "Status"))
    float Durability = 0.0f;
};

USTRUCT(BlueprintType)
struct FWeaponStatus
{
    GENERATED_BODY()

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (Categories = "Status"))
    float Attack = 0.0f;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (Categories = "Status"))
    float Durability = 0.0f;
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
    UAnimMontage* EquipAnimMontage = nullptr;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    UInputMappingContext* WeaponInputMappingContext = nullptr;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (TitleProperty = "InputTag"))
    TArray<FPlayerAbilitySet> WeaponAbilities;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    FWeaponStatus WeaponStatus;
};