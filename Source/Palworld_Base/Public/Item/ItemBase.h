// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemBase.generated.h"

class UBoxComponent;

UCLASS()
class PALWORLD_BASE_API AItemBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItemBase();

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Weapon")
    UStaticMeshComponent* ItemMesh;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Weapon")
    UBoxComponent* ItemCollsionBox;

public:
    UFUNCTION()
    virtual void OnCollsionBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
        int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    UFUNCTION()
    virtual void OnCollsionEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
        UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

    FORCEINLINE UBoxComponent* GetItemCollisionBox() const { return ItemCollsionBox; }
};
