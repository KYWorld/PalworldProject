// Fill out your copyright notice in the Description page of Project Settings.


#include "Item/ItemBase.h"
#include "Components/BoxComponent.h"

// Sets default values
AItemBase::AItemBase()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = false;

    ItemCollsionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("ItemCollsionBox"));
    ItemCollsionBox->SetupAttachment(RootComponent);
    ItemCollsionBox->SetBoxExtent(FVector(20.0f));
    ItemCollsionBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    
    ItemCollsionBox->OnComponentBeginOverlap.AddUniqueDynamic(this, &AItemBase::OnCollsionBeginOverlap);
    ItemCollsionBox->OnComponentEndOverlap.AddUniqueDynamic(this, &AItemBase::OnCollsionEndOverlap);

}

void AItemBase::OnCollsionBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{  
 
}

void AItemBase::OnCollsionEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{

}


