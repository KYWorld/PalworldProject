// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Ability/BaseGameplayAbility.h"
#include "PlayerGameplayAbility.generated.h"

class APlayerCharacter;
class ABasePlayerController;

/**
 * 
 */
UCLASS()
class PALWORLD_BASE_API UPlayerGameplayAbility : public UBaseGameplayAbility
{
	GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category = "Ability")
    APlayerCharacter* GetPlayerCharacterFromActorInfo();

    UFUNCTION(BlueprintPure, Category = "Ability")
    ABasePlayerController* GetPlayerControllerFromActorInfo();


private:
    //�����ɸ����� ������ ������ �ִٸ� ĳ�� TWeakObjectPtr�� ���� ������ �������� ���� �� ��ü�� �ڵ����� �����մϴ�. (���� ������)
    TWeakObjectPtr<APlayerCharacter> CachedPlayerCharacter;
    TWeakObjectPtr<ABasePlayerController> CachedPlayerController;
};
