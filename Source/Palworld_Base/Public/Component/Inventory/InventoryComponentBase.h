// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Component/PawnExtensionComponent.h"
#include "InventoryComponentBase.generated.h"

class AItemBase;
/**
 * 
 */
UCLASS(ClassGroup = (Common), meta = (BlueprintSpawnableComponent))
class PALWORLD_BASE_API UInventoryComponentBase : public UPawnExtensionComponent
{
	GENERATED_BODY()	
};
