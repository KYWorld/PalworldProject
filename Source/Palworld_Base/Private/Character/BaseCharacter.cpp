// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/BaseCharacter.h"
#include "AbilitySystem/BaseAbilitySystemComponent.h"
#include "AbilitySystem/BaseAttributeSet.h"

ABaseCharacter::ABaseCharacter()
{
	// ƽ���� ��� ��Ȱ��ȭ
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	//VFX ���� ��Į ���� ������ ��
	GetMesh()->bReceivesDecals = false;

	BaseAbilitySystemComponent = CreateDefaultSubobject<UBaseAbilitySystemComponent>(TEXT("BaseAbilitySystemComponent"));
	BaseAttributeSet = CreateDefaultSubobject<UBaseAttributeSet>(TEXT("BaseAttributeSet"));
}

UAbilitySystemComponent* ABaseCharacter::GetAbilitySystemComponent() const
{
	return GetBaseAbilitySystemComponent();
}

void ABaseCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	if (BaseAbilitySystemComponent)
	{
		//AbilitySystemComponent�� ���� �����Ƽ ���� �ʱⰪ �ο�
		BaseAbilitySystemComponent->InitAbilityActorInfo(this, this);
	}

	//ù��° ���ڰ��� false�� ����� ��忡�� �ߴ����� �߻��ϸ�, ���ӿ��� �α׵� �߻�
	ensureMsgf(!StartupData.IsNull(), TEXT("Forgot to assigned startup data to %s"), *GetName());
}
