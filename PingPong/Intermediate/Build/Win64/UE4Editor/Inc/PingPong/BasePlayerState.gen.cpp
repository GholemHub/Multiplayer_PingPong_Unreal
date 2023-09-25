// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PingPong/BasePlayerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasePlayerState() {}
// Cross Module References
	PINGPONG_API UClass* Z_Construct_UClass_ABasePlayerState_NoRegister();
	PINGPONG_API UClass* Z_Construct_UClass_ABasePlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_PingPong();
// End Cross Module References
	DEFINE_FUNCTION(ABasePlayerState::execGetSecondScore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSecondScore();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABasePlayerState::execAddSecondScore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddSecondScore();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABasePlayerState::execGetFirstScore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetFirstScore();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABasePlayerState::execAddFirstScore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFirstScore();
		P_NATIVE_END;
	}
	void ABasePlayerState::StaticRegisterNativesABasePlayerState()
	{
		UClass* Class = ABasePlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddFirstScore", &ABasePlayerState::execAddFirstScore },
			{ "AddSecondScore", &ABasePlayerState::execAddSecondScore },
			{ "GetFirstScore", &ABasePlayerState::execGetFirstScore },
			{ "GetSecondScore", &ABasePlayerState::execGetSecondScore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABasePlayerState_AddFirstScore_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasePlayerState_AddFirstScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerScore" },
		{ "ModuleRelativePath", "BasePlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasePlayerState_AddFirstScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasePlayerState, nullptr, "AddFirstScore", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasePlayerState_AddFirstScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlayerState_AddFirstScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasePlayerState_AddFirstScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABasePlayerState_AddFirstScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABasePlayerState_AddSecondScore_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasePlayerState_AddSecondScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerScore" },
		{ "ModuleRelativePath", "BasePlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasePlayerState_AddSecondScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasePlayerState, nullptr, "AddSecondScore", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasePlayerState_AddSecondScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlayerState_AddSecondScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasePlayerState_AddSecondScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABasePlayerState_AddSecondScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABasePlayerState_GetFirstScore_Statics
	{
		struct BasePlayerState_eventGetFirstScore_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABasePlayerState_GetFirstScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BasePlayerState_eventGetFirstScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasePlayerState_GetFirstScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasePlayerState_GetFirstScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasePlayerState_GetFirstScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerScore" },
		{ "ModuleRelativePath", "BasePlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasePlayerState_GetFirstScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasePlayerState, nullptr, "GetFirstScore", nullptr, nullptr, sizeof(BasePlayerState_eventGetFirstScore_Parms), Z_Construct_UFunction_ABasePlayerState_GetFirstScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlayerState_GetFirstScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasePlayerState_GetFirstScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlayerState_GetFirstScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasePlayerState_GetFirstScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABasePlayerState_GetFirstScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABasePlayerState_GetSecondScore_Statics
	{
		struct BasePlayerState_eventGetSecondScore_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABasePlayerState_GetSecondScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BasePlayerState_eventGetSecondScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasePlayerState_GetSecondScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasePlayerState_GetSecondScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasePlayerState_GetSecondScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerScore" },
		{ "ModuleRelativePath", "BasePlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasePlayerState_GetSecondScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasePlayerState, nullptr, "GetSecondScore", nullptr, nullptr, sizeof(BasePlayerState_eventGetSecondScore_Parms), Z_Construct_UFunction_ABasePlayerState_GetSecondScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlayerState_GetSecondScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasePlayerState_GetSecondScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlayerState_GetSecondScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasePlayerState_GetSecondScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABasePlayerState_GetSecondScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABasePlayerState_NoRegister()
	{
		return ABasePlayerState::StaticClass();
	}
	struct Z_Construct_UClass_ABasePlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABasePlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_PingPong,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABasePlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABasePlayerState_AddFirstScore, "AddFirstScore" }, // 3889084900
		{ &Z_Construct_UFunction_ABasePlayerState_AddSecondScore, "AddSecondScore" }, // 3756027865
		{ &Z_Construct_UFunction_ABasePlayerState_GetFirstScore, "GetFirstScore" }, // 2028047859
		{ &Z_Construct_UFunction_ABasePlayerState_GetSecondScore, "GetSecondScore" }, // 2046561429
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePlayerState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BasePlayerState.h" },
		{ "ModuleRelativePath", "BasePlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasePlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasePlayerState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABasePlayerState_Statics::ClassParams = {
		&ABasePlayerState::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABasePlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABasePlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABasePlayerState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABasePlayerState, 869954456);
	template<> PINGPONG_API UClass* StaticClass<ABasePlayerState>()
	{
		return ABasePlayerState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABasePlayerState(Z_Construct_UClass_ABasePlayerState, &ABasePlayerState::StaticClass, TEXT("/Script/PingPong"), TEXT("ABasePlayerState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasePlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
