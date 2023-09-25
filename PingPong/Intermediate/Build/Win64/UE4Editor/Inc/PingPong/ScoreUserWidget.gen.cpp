// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PingPong/UI/ScoreUserWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScoreUserWidget() {}
// Cross Module References
	PINGPONG_API UClass* Z_Construct_UClass_UScoreUserWidget_NoRegister();
	PINGPONG_API UClass* Z_Construct_UClass_UScoreUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_PingPong();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UScoreUserWidget::execGetScoreSecondUI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetScoreSecondUI();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScoreUserWidget::execGetScoreFirstUI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetScoreFirstUI();
		P_NATIVE_END;
	}
	void UScoreUserWidget::StaticRegisterNativesUScoreUserWidget()
	{
		UClass* Class = UScoreUserWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetScoreFirstUI", &UScoreUserWidget::execGetScoreFirstUI },
			{ "GetScoreSecondUI", &UScoreUserWidget::execGetScoreSecondUI },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UScoreUserWidget_GetScoreFirstUI_Statics
	{
		struct ScoreUserWidget_eventGetScoreFirstUI_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UScoreUserWidget_GetScoreFirstUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScoreUserWidget_eventGetScoreFirstUI_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScoreUserWidget_GetScoreFirstUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScoreUserWidget_GetScoreFirstUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScoreUserWidget_GetScoreFirstUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/ScoreUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScoreUserWidget_GetScoreFirstUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScoreUserWidget, nullptr, "GetScoreFirstUI", nullptr, nullptr, sizeof(ScoreUserWidget_eventGetScoreFirstUI_Parms), Z_Construct_UFunction_UScoreUserWidget_GetScoreFirstUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScoreUserWidget_GetScoreFirstUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScoreUserWidget_GetScoreFirstUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScoreUserWidget_GetScoreFirstUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScoreUserWidget_GetScoreFirstUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScoreUserWidget_GetScoreFirstUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScoreUserWidget_GetScoreSecondUI_Statics
	{
		struct ScoreUserWidget_eventGetScoreSecondUI_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UScoreUserWidget_GetScoreSecondUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScoreUserWidget_eventGetScoreSecondUI_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScoreUserWidget_GetScoreSecondUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScoreUserWidget_GetScoreSecondUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScoreUserWidget_GetScoreSecondUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/ScoreUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScoreUserWidget_GetScoreSecondUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScoreUserWidget, nullptr, "GetScoreSecondUI", nullptr, nullptr, sizeof(ScoreUserWidget_eventGetScoreSecondUI_Parms), Z_Construct_UFunction_UScoreUserWidget_GetScoreSecondUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScoreUserWidget_GetScoreSecondUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScoreUserWidget_GetScoreSecondUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScoreUserWidget_GetScoreSecondUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScoreUserWidget_GetScoreSecondUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScoreUserWidget_GetScoreSecondUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UScoreUserWidget_NoRegister()
	{
		return UScoreUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UScoreUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelNameTextBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LevelNameTextBlock;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScoreUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_PingPong,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UScoreUserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UScoreUserWidget_GetScoreFirstUI, "GetScoreFirstUI" }, // 3296037210
		{ &Z_Construct_UFunction_UScoreUserWidget_GetScoreSecondUI, "GetScoreSecondUI" }, // 1473639569
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScoreUserWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/ScoreUserWidget.h" },
		{ "ModuleRelativePath", "UI/ScoreUserWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScoreUserWidget_Statics::NewProp_LevelNameTextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/ScoreUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScoreUserWidget_Statics::NewProp_LevelNameTextBlock = { "LevelNameTextBlock", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScoreUserWidget, LevelNameTextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UScoreUserWidget_Statics::NewProp_LevelNameTextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScoreUserWidget_Statics::NewProp_LevelNameTextBlock_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScoreUserWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScoreUserWidget_Statics::NewProp_LevelNameTextBlock,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScoreUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScoreUserWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UScoreUserWidget_Statics::ClassParams = {
		&UScoreUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UScoreUserWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UScoreUserWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UScoreUserWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScoreUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScoreUserWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UScoreUserWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UScoreUserWidget, 250551820);
	template<> PINGPONG_API UClass* StaticClass<UScoreUserWidget>()
	{
		return UScoreUserWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScoreUserWidget(Z_Construct_UClass_UScoreUserWidget, &UScoreUserWidget::StaticClass, TEXT("/Script/PingPong"), TEXT("UScoreUserWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScoreUserWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
