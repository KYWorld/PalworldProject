// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Player/PlayerCharacter.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"

#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

#include "GameFramework/CharacterMovementComponent.h"
#include "Component/Input/BaseInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "DataAsset/Input/DataAsset_InputConfig.h"

#include "BaseLibrary/BaseGamePlayTag.h"
#include "AbilitySystem/BaseAbilitySystemComponent.h"
#include "DataAsset/StartupData/DataAsset_StartupBase.h"
#include "Component/Equipment/PawnEquipmentComponent.h"

#include "Item/Equipment/EquipmentBase.h"

#include "BaseLibrary/BaseDebugHelper.h"

APlayerCharacter::APlayerCharacter()
{
	//캡슐컴포넌트 초기사이즈 세팅
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.f);

	//회전 사용 비활성화
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;

	//스프링암 초기세팅
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(GetRootComponent());
	CameraBoom->TargetArmLength = 200.0f;
	CameraBoom->SocketOffset = FVector(0.f, 55.f, 65.f);
	CameraBoom->bUsePawnControlRotation = true;

	//카메라 초기세팅
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;

	//캐릭터 메쉬 세팅
	//USkeletalMeshComponent* Outfit; //= CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Outfit"));
	//Outfit = GetMesh();
	CharacterEquipmentMap.Add(EPlayerEquipmentType::Outfit, GetMesh());

	USkeletalMeshComponent* Hair = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Hair"));
	Hair->SetupAttachment(GetMesh());
	CharacterEquipmentMap.Add(EPlayerEquipmentType::Hair, Hair);

	USkeletalMeshComponent* Head = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Head"));
	Head->SetupAttachment(GetMesh());
	CharacterEquipmentMap.Add(EPlayerEquipmentType::Head, Head);

	USkeletalMeshComponent* HeadEquip = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("HeadEquip"));
	HeadEquip->SetupAttachment(GetMesh());
	CharacterEquipmentMap.Add(EPlayerEquipmentType::HeadEquip, HeadEquip);

	USkeletalMeshComponent* Weapon = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Weapon"));
	Weapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("Socket_Weapon_R"));
	CharacterEquipmentMap.Add(EPlayerEquipmentType::Weapon, Weapon);

	USkeletalMeshComponent* BackWeapon1 = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BackWeapon1"));
	BackWeapon1->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("Socket_BackWeapon_R"));
	CharacterEquipmentMap.Add(EPlayerEquipmentType::BackWeapon1, BackWeapon1);

	USkeletalMeshComponent* BackWeapon2 = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BackWeapon2"));
	BackWeapon2->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("Socket_BackWeapon_L"));
	CharacterEquipmentMap.Add(EPlayerEquipmentType::BackWeapon2, BackWeapon2);

	USkeletalMeshComponent* BackWeapon3 = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BackWeapon3"));
	BackWeapon3->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("Socket_BackWeapon_L"));
	CharacterEquipmentMap.Add(EPlayerEquipmentType::BackWeapon3, BackWeapon3);


	//케릭터움직임 초기세팅
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 500.f, 0.f);
	GetCharacterMovement()->MaxWalkSpeed = 400.0f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.0f;
	GetCharacterMovement()->JumpZVelocity = 500.0f; // 점프 높이.
	//GetCharacterMovement()->bCanCrouch = True; // 점프 높이.
	JumpMaxCount = 1; // 한번에 점프 가능한 횟수. 1이 기본 값

	//CombatComponent 세팅
	PlayerEquipmentComponent = CreateDefaultSubobject<UPawnEquipmentComponent>(TEXT("PlayerEquipmentComponent"));
}

void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

}

void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	checkf(InputConfigDataAsset, TEXT("Forgot to assign a valid data asset as input config"));

	ULocalPlayer* LocalPlayer = GetController<APlayerController>()->GetLocalPlayer();
	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(LocalPlayer);
	check(Subsystem);
	Subsystem->AddMappingContext(InputConfigDataAsset->DefaultMappingContext, 0);

	UBaseInputComponent* BaseInputComponent = CastChecked<UBaseInputComponent>(PlayerInputComponent);
	BaseInputComponent->BindNativeInputAction(InputConfigDataAsset, BaseGamePlayTag::InputTag_Move, ETriggerEvent::Triggered, this, &APlayerCharacter::Input_Move);
	BaseInputComponent->BindNativeInputAction(InputConfigDataAsset, BaseGamePlayTag::InputTag_Look, ETriggerEvent::Triggered, this, &APlayerCharacter::Input_Look);

	BaseInputComponent->BindAbilityInputAction(InputConfigDataAsset, this, &APlayerCharacter::Input_AbilityInputPressed, &APlayerCharacter::Input_AbilityInputReleased);
}

void APlayerCharacter::Input_Move(const FInputActionValue& InputActionValue)
{
	const FVector2D MovementVector = InputActionValue.Get<FVector2D>();
	const FRotator MovementRotation(0.f, Controller->GetControlRotation().Yaw, 0.f);
	if (MovementVector.Y != 0.f)
	{
		const FVector ForwardDirection = MovementRotation.RotateVector(FVector::ForwardVector);
		AddMovementInput(ForwardDirection, MovementVector.Y);
	}
	if (MovementVector.X != 0.f)
	{
		const FVector RightDirection = MovementRotation.RotateVector(FVector::RightVector);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void APlayerCharacter::Input_Look(const FInputActionValue& InputActionValue)
{
	const FVector2D LookAxisVector = InputActionValue.Get<FVector2D>();

	if (LookAxisVector.X != 0.f)
	{
		AddControllerYawInput(LookAxisVector.X);
	}
	if (LookAxisVector.Y != 0.f)
	{
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

void APlayerCharacter::Input_AbilityInputPressed(FGameplayTag InputTag)
{
	BaseAbilitySystemComponent->OnAbilityInputPressed(InputTag);
}

void APlayerCharacter::Input_AbilityInputReleased(FGameplayTag InputTag)
{
	BaseAbilitySystemComponent->OnAbilityInputReleased(InputTag);
}

void APlayerCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	/*if (BaseAbilitySystemComponent && BaseAttributeSet)
	{
		const FString AppendString = FString::Printf(TEXT("Owner Actor: %s, AvatarActor: %s"), *BaseAbilitySystemComponent->GetOwnerActor()->GetActorLabel(), *BaseAbilitySystemComponent->GetAvatarActor()->GetActorLabel());

		Debug::Print(TEXT("Ability system component and AttributeSet valid. ") + AppendString, FColor::Green);
	}*/

	if (!StartupData.IsNull())
	{
		if (UDataAsset_StartupBase* LoadedData = StartupData.LoadSynchronous())
		{
			//Startup데이터가 Null이 아닌경우 StartupData는 동기화로드를 거쳐서 최종적으로 게임어빌리티시스템이 발동된다. GA_HeroSpawnAxe
			LoadedData->GiveToAbilitySystemComponent(GetBaseAbilitySystemComponent());
		}
	}
}

void APlayerCharacter::SetPlayerRotateToMovement(bool Value)
{
	GetCharacterMovement()->bOrientRotationToMovement = !Value;
	GetCharacterMovement()->bUseControllerDesiredRotation = Value;
	bIsAiming = Value;
}

USkeletalMeshComponent* APlayerCharacter::FindMeshComponent(EPlayerEquipmentType EquipmentType)
{
	return  *CharacterEquipmentMap.Find(EquipmentType);
}

void APlayerCharacter::SetMeshComponent(EPlayerEquipmentType EquipmentType, USkeletalMesh* SkeletalMesh)
{
	FindMeshComponent(EquipmentType)->SetSkeletalMesh(SkeletalMesh);
}
