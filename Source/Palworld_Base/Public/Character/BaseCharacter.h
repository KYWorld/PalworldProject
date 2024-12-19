// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "AbilitySystemInterface.h"

#include "BaseCharacter.generated.h"

class UBaseAbilitySystemComponent;
class UBaseAttributeSet;
class UDataAsset_StartupBase;

UCLASS()
class PALWORLD_BASE_API ABaseCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
    // Sets default values for this character's properties
    ABaseCharacter();

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AbilitySystem")
    UBaseAbilitySystemComponent* BaseAbilitySystemComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AbilitySystem")
    UBaseAttributeSet* BaseAttributeSet;

    //��������� �����͸� �ҷ��´�
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, category = "StartupData")
    TSoftObjectPtr<UDataAsset_StartupBase> StartupData;


    virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

    virtual void PossessedBy(AController* NewController) override;

public:
    FORCEINLINE UBaseAbilitySystemComponent* GetBaseAbilitySystemComponent() const { return BaseAbilitySystemComponent; }
    FORCEINLINE UBaseAttributeSet* GetBaseAttributeSet() const { return BaseAttributeSet; }

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, category = "Movement", meta = (AllowPrivateAccess = "true"))
    bool bIsAiming;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, category = "Activate", meta = (AllowPrivateAccess = "true"))
    bool bIsActivate = true;

    UFUNCTION(BlueprintCallable, Category = "Activate")
    void SetActivate(bool IsActivate);
};
