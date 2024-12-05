// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimInstance/BaseAnimInstance.h"
#include "Character/BaseCharacter.h"
#include "BaseLibrary/BaseFunctionLibrary.h"
#include "GameFramework/CharacterMovementComponent.h"

void UBaseAnimInstance::NativeInitializeAnimation()
{
    //TryGetPawnOwner �������� Pawn ��ȯ
    OwningCharacter = Cast<ABaseCharacter>(TryGetPawnOwner());
    if (OwningCharacter)
    {
        OwningMovementComponent = OwningCharacter->GetCharacterMovement();
    }
}

void UBaseAnimInstance::NativeThreadSafeUpdateAnimation(float DeltaSeconds)
{
    //������ ĳ���Ϳ� ������ �����Ʈ�� �ϳ��� nullptr�̸�
	if (!OwningCharacter || !OwningMovementComponent)
	{
		return;
	}

	//������ ĳ������ �ӵ�
	GroundSpeed = OwningCharacter->GetVelocity().Size2D();

	//������ ĳ���͹����Ʈ�� ������
	bHasAcceleration = OwningMovementComponent->GetCurrentAcceleration().SizeSquared2D() > 0.f;

    //�ӵ��� ������ �޸���
	bIsRun = OwningMovementComponent->GetCurrentAcceleration().SizeSquared2D() > 250.f;
}

bool UBaseAnimInstance::OwnerHasTag(FGameplayTag Tag) const
{
    if (APawn* OwningPawn = TryGetPawnOwner())
    {
        return UBaseFunctionLibrary::NativeActorHasTag(OwningPawn, Tag);
    }
    return false;
}

