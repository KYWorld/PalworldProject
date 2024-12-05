// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Palworld_Base/Public/AbilitySystem/BaseAbilitySystemComponent.h"
#include "GameplayAbilities/Public/GameplayAbilitySpecHandle.h"
#include "Palworld_Base/Public/BaseLibrary/BaseStructType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseAbilitySystemComponent() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
PALWORLD_BASE_API UClass* Z_Construct_UClass_UBaseAbilitySystemComponent();
PALWORLD_BASE_API UClass* Z_Construct_UClass_UBaseAbilitySystemComponent_NoRegister();
PALWORLD_BASE_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerAbilitySet();
UPackage* Z_Construct_UPackage__Script_Palworld_Base();
// End Cross Module References

// Begin Class UBaseAbilitySystemComponent Function GrantPlayerWeaponAbilities
struct Z_Construct_UFunction_UBaseAbilitySystemComponent_GrantPlayerWeaponAbilities_Statics
{
	struct BaseAbilitySystemComponent_eventGrantPlayerWeaponAbilities_Parms
	{
		TArray<FPlayerAbilitySet> WeaponAbilities;
		int32 Level;
		TArray<FGameplayAbilitySpecHandle> OutGrantedAbilitySpecHandles;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Level", "1" },
		{ "ModuleRelativePath", "Public/AbilitySystem/BaseAbilitySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponAbilities_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WeaponAbilities;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutGrantedAbilitySpecHandles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutGrantedAbilitySpecHandles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAbilitySystemComponent_GrantPlayerWeaponAbilities_Statics::NewProp_WeaponAbilities_Inner = { "WeaponAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPlayerAbilitySet, METADATA_PARAMS(0, nullptr) }; // 3794354411
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseAbilitySystemComponent_GrantPlayerWeaponAbilities_Statics::NewProp_WeaponAbilities = { "WeaponAbilities", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAbilitySystemComponent_eventGrantPlayerWeaponAbilities_Parms, WeaponAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponAbilities_MetaData), NewProp_WeaponAbilities_MetaData) }; // 3794354411
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseAbilitySystemComponent_GrantPlayerWeaponAbilities_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAbilitySystemComponent_eventGrantPlayerWeaponAbilities_Parms, Level), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAbilitySystemComponent_GrantPlayerWeaponAbilities_Statics::NewProp_OutGrantedAbilitySpecHandles_Inner = { "OutGrantedAbilitySpecHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 3490030742
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseAbilitySystemComponent_GrantPlayerWeaponAbilities_Statics::NewProp_OutGrantedAbilitySpecHandles = { "OutGrantedAbilitySpecHandles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAbilitySystemComponent_eventGrantPlayerWeaponAbilities_Parms, OutGrantedAbilitySpecHandles), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3490030742
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAbilitySystemComponent_GrantPlayerWeaponAbilities_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAbilitySystemComponent_GrantPlayerWeaponAbilities_Statics::NewProp_WeaponAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAbilitySystemComponent_GrantPlayerWeaponAbilities_Statics::NewProp_WeaponAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAbilitySystemComponent_GrantPlayerWeaponAbilities_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAbilitySystemComponent_GrantPlayerWeaponAbilities_Statics::NewProp_OutGrantedAbilitySpecHandles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAbilitySystemComponent_GrantPlayerWeaponAbilities_Statics::NewProp_OutGrantedAbilitySpecHandles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAbilitySystemComponent_GrantPlayerWeaponAbilities_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAbilitySystemComponent_GrantPlayerWeaponAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseAbilitySystemComponent, nullptr, "GrantPlayerWeaponAbilities", nullptr, nullptr, Z_Construct_UFunction_UBaseAbilitySystemComponent_GrantPlayerWeaponAbilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAbilitySystemComponent_GrantPlayerWeaponAbilities_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseAbilitySystemComponent_GrantPlayerWeaponAbilities_Statics::BaseAbilitySystemComponent_eventGrantPlayerWeaponAbilities_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAbilitySystemComponent_GrantPlayerWeaponAbilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseAbilitySystemComponent_GrantPlayerWeaponAbilities_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseAbilitySystemComponent_GrantPlayerWeaponAbilities_Statics::BaseAbilitySystemComponent_eventGrantPlayerWeaponAbilities_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseAbilitySystemComponent_GrantPlayerWeaponAbilities()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseAbilitySystemComponent_GrantPlayerWeaponAbilities_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseAbilitySystemComponent::execGrantPlayerWeaponAbilities)
{
	P_GET_TARRAY_REF(FPlayerAbilitySet,Z_Param_Out_WeaponAbilities);
	P_GET_PROPERTY(FIntProperty,Z_Param_Level);
	P_GET_TARRAY_REF(FGameplayAbilitySpecHandle,Z_Param_Out_OutGrantedAbilitySpecHandles);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GrantPlayerWeaponAbilities(Z_Param_Out_WeaponAbilities,Z_Param_Level,Z_Param_Out_OutGrantedAbilitySpecHandles);
	P_NATIVE_END;
}
// End Class UBaseAbilitySystemComponent Function GrantPlayerWeaponAbilities

// Begin Class UBaseAbilitySystemComponent Function RemoveGrantedPlayerWeaponAbilities
struct Z_Construct_UFunction_UBaseAbilitySystemComponent_RemoveGrantedPlayerWeaponAbilities_Statics
{
	struct BaseAbilitySystemComponent_eventRemoveGrantedPlayerWeaponAbilities_Parms
	{
		TArray<FGameplayAbilitySpecHandle> SpecHandlesToRemove;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/AbilitySystem/BaseAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpecHandlesToRemove_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpecHandlesToRemove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAbilitySystemComponent_RemoveGrantedPlayerWeaponAbilities_Statics::NewProp_SpecHandlesToRemove_Inner = { "SpecHandlesToRemove", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 3490030742
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseAbilitySystemComponent_RemoveGrantedPlayerWeaponAbilities_Statics::NewProp_SpecHandlesToRemove = { "SpecHandlesToRemove", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAbilitySystemComponent_eventRemoveGrantedPlayerWeaponAbilities_Parms, SpecHandlesToRemove), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3490030742
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAbilitySystemComponent_RemoveGrantedPlayerWeaponAbilities_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAbilitySystemComponent_RemoveGrantedPlayerWeaponAbilities_Statics::NewProp_SpecHandlesToRemove_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAbilitySystemComponent_RemoveGrantedPlayerWeaponAbilities_Statics::NewProp_SpecHandlesToRemove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAbilitySystemComponent_RemoveGrantedPlayerWeaponAbilities_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAbilitySystemComponent_RemoveGrantedPlayerWeaponAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseAbilitySystemComponent, nullptr, "RemoveGrantedPlayerWeaponAbilities", nullptr, nullptr, Z_Construct_UFunction_UBaseAbilitySystemComponent_RemoveGrantedPlayerWeaponAbilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAbilitySystemComponent_RemoveGrantedPlayerWeaponAbilities_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseAbilitySystemComponent_RemoveGrantedPlayerWeaponAbilities_Statics::BaseAbilitySystemComponent_eventRemoveGrantedPlayerWeaponAbilities_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAbilitySystemComponent_RemoveGrantedPlayerWeaponAbilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseAbilitySystemComponent_RemoveGrantedPlayerWeaponAbilities_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseAbilitySystemComponent_RemoveGrantedPlayerWeaponAbilities_Statics::BaseAbilitySystemComponent_eventRemoveGrantedPlayerWeaponAbilities_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseAbilitySystemComponent_RemoveGrantedPlayerWeaponAbilities()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseAbilitySystemComponent_RemoveGrantedPlayerWeaponAbilities_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseAbilitySystemComponent::execRemoveGrantedPlayerWeaponAbilities)
{
	P_GET_TARRAY_REF(FGameplayAbilitySpecHandle,Z_Param_Out_SpecHandlesToRemove);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveGrantedPlayerWeaponAbilities(Z_Param_Out_SpecHandlesToRemove);
	P_NATIVE_END;
}
// End Class UBaseAbilitySystemComponent Function RemoveGrantedPlayerWeaponAbilities

// Begin Class UBaseAbilitySystemComponent
void UBaseAbilitySystemComponent::StaticRegisterNativesUBaseAbilitySystemComponent()
{
	UClass* Class = UBaseAbilitySystemComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GrantPlayerWeaponAbilities", &UBaseAbilitySystemComponent::execGrantPlayerWeaponAbilities },
		{ "RemoveGrantedPlayerWeaponAbilities", &UBaseAbilitySystemComponent::execRemoveGrantedPlayerWeaponAbilities },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseAbilitySystemComponent);
UClass* Z_Construct_UClass_UBaseAbilitySystemComponent_NoRegister()
{
	return UBaseAbilitySystemComponent::StaticClass();
}
struct Z_Construct_UClass_UBaseAbilitySystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "AbilitySystem/BaseAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/BaseAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseAbilitySystemComponent_GrantPlayerWeaponAbilities, "GrantPlayerWeaponAbilities" }, // 771416181
		{ &Z_Construct_UFunction_UBaseAbilitySystemComponent_RemoveGrantedPlayerWeaponAbilities, "RemoveGrantedPlayerWeaponAbilities" }, // 1512424824
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseAbilitySystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBaseAbilitySystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Palworld_Base,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAbilitySystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseAbilitySystemComponent_Statics::ClassParams = {
	&UBaseAbilitySystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseAbilitySystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseAbilitySystemComponent()
{
	if (!Z_Registration_Info_UClass_UBaseAbilitySystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_UBaseAbilitySystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseAbilitySystemComponent.OuterSingleton;
}
template<> PALWORLD_BASE_API UClass* StaticClass<UBaseAbilitySystemComponent>()
{
	return UBaseAbilitySystemComponent::StaticClass();
}
UBaseAbilitySystemComponent::UBaseAbilitySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseAbilitySystemComponent);
UBaseAbilitySystemComponent::~UBaseAbilitySystemComponent() {}
// End Class UBaseAbilitySystemComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProject_Palworld_Base_Source_Palworld_Base_Public_AbilitySystem_BaseAbilitySystemComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseAbilitySystemComponent, UBaseAbilitySystemComponent::StaticClass, TEXT("UBaseAbilitySystemComponent"), &Z_Registration_Info_UClass_UBaseAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseAbilitySystemComponent), 1159276681U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_Palworld_Base_Source_Palworld_Base_Public_AbilitySystem_BaseAbilitySystemComponent_h_4188423263(TEXT("/Script/Palworld_Base"),
	Z_CompiledInDeferFile_FID_UnrealProject_Palworld_Base_Source_Palworld_Base_Public_AbilitySystem_BaseAbilitySystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_Palworld_Base_Source_Palworld_Base_Public_AbilitySystem_BaseAbilitySystemComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
