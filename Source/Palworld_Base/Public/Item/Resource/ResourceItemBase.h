// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item/ItemBase.h"
#include "ResourceItemBase.generated.h"

/**
 * 
 */
UCLASS()
class PALWORLD_BASE_API AResourceItemBase : public AItemBase
{
	GENERATED_BODY()
	
public:
	AResourceItemBase();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Item")
	UStaticMeshComponent* ResourceItemMesh;
};
