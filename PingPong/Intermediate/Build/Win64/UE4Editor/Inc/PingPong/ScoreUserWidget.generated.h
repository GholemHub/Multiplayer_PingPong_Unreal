// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PINGPONG_ScoreUserWidget_generated_h
#error "ScoreUserWidget.generated.h already included, missing '#pragma once' in ScoreUserWidget.h"
#endif
#define PINGPONG_ScoreUserWidget_generated_h

#define PingPong_Source_PingPong_UI_ScoreUserWidget_h_17_SPARSE_DATA
#define PingPong_Source_PingPong_UI_ScoreUserWidget_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetScoreSecondUI); \
	DECLARE_FUNCTION(execGetScoreFirstUI);


#define PingPong_Source_PingPong_UI_ScoreUserWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetScoreSecondUI); \
	DECLARE_FUNCTION(execGetScoreFirstUI);


#define PingPong_Source_PingPong_UI_ScoreUserWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScoreUserWidget(); \
	friend struct Z_Construct_UClass_UScoreUserWidget_Statics; \
public: \
	DECLARE_CLASS(UScoreUserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PingPong"), NO_API) \
	DECLARE_SERIALIZER(UScoreUserWidget)


#define PingPong_Source_PingPong_UI_ScoreUserWidget_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUScoreUserWidget(); \
	friend struct Z_Construct_UClass_UScoreUserWidget_Statics; \
public: \
	DECLARE_CLASS(UScoreUserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PingPong"), NO_API) \
	DECLARE_SERIALIZER(UScoreUserWidget)


#define PingPong_Source_PingPong_UI_ScoreUserWidget_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScoreUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScoreUserWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScoreUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScoreUserWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScoreUserWidget(UScoreUserWidget&&); \
	NO_API UScoreUserWidget(const UScoreUserWidget&); \
public:


#define PingPong_Source_PingPong_UI_ScoreUserWidget_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScoreUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScoreUserWidget(UScoreUserWidget&&); \
	NO_API UScoreUserWidget(const UScoreUserWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScoreUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScoreUserWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScoreUserWidget)


#define PingPong_Source_PingPong_UI_ScoreUserWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LevelNameTextBlock() { return STRUCT_OFFSET(UScoreUserWidget, LevelNameTextBlock); }


#define PingPong_Source_PingPong_UI_ScoreUserWidget_h_14_PROLOG
#define PingPong_Source_PingPong_UI_ScoreUserWidget_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PingPong_Source_PingPong_UI_ScoreUserWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	PingPong_Source_PingPong_UI_ScoreUserWidget_h_17_SPARSE_DATA \
	PingPong_Source_PingPong_UI_ScoreUserWidget_h_17_RPC_WRAPPERS \
	PingPong_Source_PingPong_UI_ScoreUserWidget_h_17_INCLASS \
	PingPong_Source_PingPong_UI_ScoreUserWidget_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PingPong_Source_PingPong_UI_ScoreUserWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PingPong_Source_PingPong_UI_ScoreUserWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	PingPong_Source_PingPong_UI_ScoreUserWidget_h_17_SPARSE_DATA \
	PingPong_Source_PingPong_UI_ScoreUserWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	PingPong_Source_PingPong_UI_ScoreUserWidget_h_17_INCLASS_NO_PURE_DECLS \
	PingPong_Source_PingPong_UI_ScoreUserWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PINGPONG_API UClass* StaticClass<class UScoreUserWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PingPong_Source_PingPong_UI_ScoreUserWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
