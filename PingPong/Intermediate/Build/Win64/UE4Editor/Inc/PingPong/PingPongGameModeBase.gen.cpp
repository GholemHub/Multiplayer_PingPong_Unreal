// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PingPong/PingPongGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePingPongGameModeBase() {}
// Cross Module References
	PINGPONG_API UClass* Z_Construct_UClass_APingPongGameModeBase_NoRegister();
	PINGPONG_API UClass* Z_Construct_UClass_APingPongGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PingPong();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PINGPONG_API UClass* Z_Construct_UClass_ASecondPlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	void APingPongGameModeBase::StaticRegisterNativesAPingPongGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_APingPongGameModeBase_NoRegister()
	{
		return APingPongGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_APingPongGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondPlayerCharacterClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SecondPlayerCharacterClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondPlayerControllerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SecondPlayerControllerClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APingPongGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PingPong,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APingPongGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PingPongGameModeBase.h" },
		{ "ModuleRelativePath", "PingPongGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APingPongGameModeBase_Statics::NewProp_SecondPlayerCharacterClass_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "PingPongGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APingPongGameModeBase_Statics::NewProp_SecondPlayerCharacterClass = { "SecondPlayerCharacterClass", nullptr, (EPropertyFlags)0x0024080000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APingPongGameModeBase, SecondPlayerCharacterClass), Z_Construct_UClass_ASecondPlayerController_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APingPongGameModeBase_Statics::NewProp_SecondPlayerCharacterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APingPongGameModeBase_Statics::NewProp_SecondPlayerCharacterClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APingPongGameModeBase_Statics::NewProp_SecondPlayerControllerClass_MetaData[] = {
		{ "Category", "Player" },
		{ "Comment", "// Reference to the second player controller class\n" },
		{ "ModuleRelativePath", "PingPongGameModeBase.h" },
		{ "ToolTip", "Reference to the second player controller class" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APingPongGameModeBase_Statics::NewProp_SecondPlayerControllerClass = { "SecondPlayerControllerClass", nullptr, (EPropertyFlags)0x0024080000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APingPongGameModeBase, SecondPlayerControllerClass), Z_Construct_UClass_APlayerController_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APingPongGameModeBase_Statics::NewProp_SecondPlayerControllerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APingPongGameModeBase_Statics::NewProp_SecondPlayerControllerClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APingPongGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APingPongGameModeBase_Statics::NewProp_SecondPlayerCharacterClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APingPongGameModeBase_Statics::NewProp_SecondPlayerControllerClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APingPongGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APingPongGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APingPongGameModeBase_Statics::ClassParams = {
		&APingPongGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APingPongGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APingPongGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APingPongGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APingPongGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APingPongGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APingPongGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APingPongGameModeBase, 4164038468);
	template<> PINGPONG_API UClass* StaticClass<APingPongGameModeBase>()
	{
		return APingPongGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APingPongGameModeBase(Z_Construct_UClass_APingPongGameModeBase, &APingPongGameModeBase::StaticClass, TEXT("/Script/PingPong"), TEXT("APingPongGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APingPongGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
