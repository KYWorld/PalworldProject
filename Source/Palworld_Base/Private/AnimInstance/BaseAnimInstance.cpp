// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimInstance/BaseAnimInstance.h"
#include "Character/BaseCharacter.h"
#include "BaseLibrary/BaseFunctionLibrary.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "KismetAnimationLibrary.h"
#include "Kismet/KismetMathLibrary.h"
void UBaseAnimInstance::NativeInitializeAnimation()
{
    //TryGetPawnOwner 소유자의 Pawn 반환
    OwningCharacter = Cast<ABaseCharacter>(TryGetPawnOwner());
    if (OwningCharacter)
    {
        OwningMovementComponent = OwningCharacter->GetCharacterMovement();
    }
}

void UBaseAnimInstance::NativeThreadSafeUpdateAnimation(float DeltaSeconds)
{
    //소유한 캐릭터와 소유한 무브먼트중 하나라도 nullptr이면
	if (!OwningCharacter || !OwningMovementComponent)
	{
		return;
	}

	//소유한 캐릭터의 속도
	GroundSpeed = OwningCharacter->GetVelocity().Size2D();
    Velocity = OwningCharacter->GetVelocity();

	//소유한 캐릭터무브먼트의 움직임
	bHasAcceleration = OwningMovementComponent->GetCurrentAcceleration().SizeSquared2D() > 0.f;

    //속도가 빠르면 달리기
	bIsRun = OwningMovementComponent->GetCurrentAcceleration().SizeSquared2D() > 250.f;

    bIsFalling = OwningMovementComponent->IsFalling();
    bIsCrouching = OwningMovementComponent->IsCrouching();

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

