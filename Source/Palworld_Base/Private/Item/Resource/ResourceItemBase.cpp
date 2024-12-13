// Fill out your copyright notice in the Description page of Project Settings.


#include "Item/Resource/ResourceItemBase.h"

AResourceItemBase::AResourceItemBase()
{
    ResourceItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ResourceItemMesh"));
    RootComponent = ResourceItemMesh;
}
