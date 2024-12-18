// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimInstance/BaseAnimInstance.h"
#include "Character/BaseCharacter.h"
#include "BaseLibrary/BaseFunctionLibrary.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "KismetAnimationLibrary.h"
#include "Kismet/KismetMathLibrary.h"
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
    Velocity = OwningCharacter->GetVelocity();

	//������ ĳ���͹����Ʈ�� ������
	bHasAcceleration = OwningMovementComponent->GetCurrentAcceleration().SizeSquared2D() > 0.f;

    //�ӵ��� ������ �޸���
	bIsRun = OwningMovementComponent->GetCurrentAcceleration().SizeSquared2D() > 250.f;

    bIsFalling = OwningMovementComponent->IsFalling();
    bIsCrouching = OwningMovementComponent->IsCrouching();
    bIsSwimming = OwningMovementComponent->IsSwimming();

    //OwningMovementComponent->GetMovementBase

    MovementMode = OwningMovementComponent->MovementMode;

    LocomotionDirection = UKismetAnimationLibrary::CalculateDirection(OwningCharacter->GetVelocity(), OwningCharacter->GetActorRotation());

    
    FRotator DeltaRotator = UKismetMathLibrary::NormalizedDeltaRotator(OwningCharacter->GetActorRotation(), OwningCharacter->GetBaseAimRotation());
    Pitch = DeltaRotator.Pitch;

    bIsAiming = OwningCharacter->bIsAiming;
}

bool UBaseAnimInstance::OwnerHasTag(FGameplayTag Tag) const
{
    if (APawn* OwningPawn = TryGetPawnOwner())
    {
        return UBaseFunctionLibrary::NativeActorHasTag(OwningPawn, Tag);
    }
    return false;
}

