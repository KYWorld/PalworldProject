// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Pal/PalCharacterBase.h"

#include "GameFramework/CharacterMovementComponent.h"
#include "DataAsset/StartupData/DataAsset_StartupBase.h"

#include "Engine/AssetManager.h"

#include "BaseLibrary/BaseDebugHelper.h"

APalCharacterBase::APalCharacterBase()
{
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;

	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;

	GetCharacterMovement()->bUseControllerDesiredRotation = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 180.f, 0.f);
	GetCharacterMovement()->MaxWalkSpeed = 300.0f;
	GetCharacterMovement()->BrakingDecelerationWalking = 1000.0f;
}

void APalCharacterBase::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	InitEnemyStartUpData();
}

void APalCharacterBase::BeginPlay()
{
	Super::BeginPlay();
}

void APalCharacterBase::InitEnemyStartUpData()
{
	if (StartupData.IsNull())
	{
		return;
	}

	//비동기 로딩
	UAssetManager::GetStreamableManager().RequestAsyncLoad(
		StartupData.ToSoftObjectPath(),
		FStreamableDelegate::CreateLambda(
			[this]()
			{
				if (UDataAsset_StartupBase* LoadedData = StartupData.Get())
				{
					LoadedData->GiveToAbilitySystemComponent(BaseAbilitySystemComponent);
					//Debug::Print(TEXT("Enemy Start Up Data Loaded"), FColor::Green);
				}
			}
		)
	);
}
