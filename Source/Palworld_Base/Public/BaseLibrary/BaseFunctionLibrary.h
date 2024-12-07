// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "BaseLibrary/BaseEnumType.h"
#include "BaseFunctionLibrary.generated.h"

class UBaseAbilitySystemComponent;
class UPawnEquipmentComponent;

/**
 * 
 */
UCLASS()
class PALWORLD_BASE_API UBaseFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()


public:
	//UBlueprintFunctionLibrary
	static UBaseAbilitySystemComponent* NativeGetBaseAbilitySystemComponentFromActor(AActor* Actor);

	UFUNCTION(BlueprintCallable, Category = "FuntionLibary")
	static void AddPlaygameTagToActor(AActor* Actor, FGameplayTag Tag);


	UFUNCTION(BlueprintCallable, Category = "FuntionLibary")
	static void RemovePlaygameTagFromActor(AActor* Actor, FGameplayTag Tag);

	static bool NativeActorHasTag(AActor* Actor, FGameplayTag Tag);

	UFUNCTION(BlueprintCallable, Category = "FunctionLibary", meta = (Display = "Does Actor Has Tag", ExpandEnumAsExecs = "OutType"))
	static void BP_HasTag(AActor* Actor, FGameplayTag Tag, EBaseConfirmType& OutType);

	static UPawnEquipmentComponent* NativeGetUPawnEquipmentComponentFromActor(AActor* Actor);

	UFUNCTION(BlueprintCallable, Category = "FunctionLibary", meta = (Display = "Get UPawnEquipmentComponent From Actor", ExpandEnumAsExecs = "OutValidType"))
	static UPawnEquipmentComponent* BP_GetUPawnEquipmentComponentFromActor(AActor* Actor, EBaseValidType& OutValidType);
};
