// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/BaseCharacter.h"
#include "GameplayTagContainer.h"
#include "PlayerCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class USceneCaptureComponent2D;
class UPaperSpriteComponent;
class UDataAsset_InputConfig;
class UPawnEquipmentComponent;
class AEquipmentBase;
class UInputMappingContext;
class UInputAction;
class APalCharacterBase;

struct FInputActionValue;

UENUM(BlueprintType)
enum class EPlayerEquipmentType : uint8
{
	Weapon,
	BackWeapon1,
	BackWeapon2,
	BackWeapon3,
	Head,
	Hair,
	HeadEquip,
	Outfit,
	Null
};



/**
 *
 */
UCLASS()
class PALWORLD_BASE_API APlayerCharacter : public ABaseCharacter
{
	GENERATED_BODY()

public:
	APlayerCharacter();

private:
	virtual void BeginPlay() override;


public:
#pragma region Mesh

	UPROPERTY(VisibleAnyWhere, BlueprintReadWrite, category = "Mesh", meta = (AllowPrivateAccess = "true"))
	TMap<EPlayerEquipmentType, USkeletalMeshComponent*> CharacterEquipmentMap;

#pragma endregion

private:
#pragma region Components
	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly, category = "Camera", meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly, category = "Camera", meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;

	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly, category = "Equipment", meta = (AllowPrivateAccess = "true"))
	UPawnEquipmentComponent* PlayerEquipmentComponent;

    UPROPERTY(VisibleAnyWhere, BlueprintReadOnly, category = "MiniMap", meta = (AllowPrivateAccess = "true"))
    USpringArmComponent* MiniMapSpringArm;

    UPROPERTY(VisibleAnyWhere, BlueprintReadOnly, category = "MiniMap", meta = (AllowPrivateAccess = "true"))
    USceneCaptureComponent2D* MiniMapSceneCaptureComponent2D;

    UPROPERTY(VisibleAnyWhere, BlueprintReadOnly, category = "Sprite", meta = (AllowPrivateAccess = "true"))
    UPaperSpriteComponent* PlayerIndicatorSprite;

#pragma endregion

#pragma region Inputs
private:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, category = "CharacterData", meta = (AllowPrivateAccess = "true"))
	UDataAsset_InputConfig* InputConfigDataAsset;

protected:
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void Input_Move(const FInputActionValue& InputActionValue);
	void Input_Look(const FInputActionValue& InputActionValue);

	void Input_AbilityInputPressed(FGameplayTag InputTag);
	void Input_AbilityInputReleased(FGameplayTag InputTag);
#pragma endregion

protected:
	virtual void PossessedBy(AController* NewController) override;

public:
	//UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, category = "Movement", meta = (AllowPrivateAccess = "true"))
	//bool bIsAiming;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Movement")
	void SetCompass();

	UFUNCTION(BlueprintCallable, Category = "Movement")
	void SetPlayerRotateToMovement(bool Value);


	UFUNCTION(BlueprintCallable, Category = "Mesh")
	USkeletalMeshComponent* FindMeshComponent(EPlayerEquipmentType EquipmentType);

	UFUNCTION(BlueprintCallable, Category = "Mesh")
	void SetMeshComponent(EPlayerEquipmentType EquipmentType, USkeletalMesh* SkeletalMesh);

    UFUNCTION(BlueprintCallable, Category = "Building")
    void DestroyBuildComponent(UActorComponent* Component);

public:
	FORCEINLINE UPawnEquipmentComponent* GetPlayerEquipmentComponent() const { return PlayerEquipmentComponent; }


	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, category = "Movement", meta = (AllowPrivateAccess = "true"))
	bool bIsGliding;

	UPROPERTY(VisibleAnyWhere, BlueprintReadWrite, category = "Ability", meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* RecentInputMappingContext;


	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, category = "Movement", meta = (AllowPrivateAccess = "true"))
	bool bIsGunAiming;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, category = "Movement", meta = (AllowPrivateAccess = "true"))
	bool bIsAttachToRiding = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, category = "Ammo", meta = (AllowPrivateAccess = "true"))
	int32 CurrentMag;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, category = "Ammo", meta = (AllowPrivateAccess = "true"))
	int32 MaxMag;

	//UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, category = "Input", meta = (AllowPrivateAccess = "true"))
	//UInputAction* FlyMoveAction;


	UFUNCTION(BlueprintCallable, Category = "Movement")
	void Input_FlyMove(const FInputActionValue& InputActionValue);

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, category = "Pal", meta = (AllowPrivateAccess = "true"))
	APalCharacterBase* CurrentPalCharacter;


	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, category = "Movement", meta = (AllowPrivateAccess = "true"))
	bool bIsOverWeight;

};
