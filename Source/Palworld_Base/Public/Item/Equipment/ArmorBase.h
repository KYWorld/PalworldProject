// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item/Equipment/EquipmentBase.h"
#include "ArmorBase.generated.h"

/**
 * 
 */
UCLASS()
class PALWORLD_BASE_API AArmorBase : public AEquipmentBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "WeaponData")
	FPlayerEquipmentData PlayerEquipmentData;
};
