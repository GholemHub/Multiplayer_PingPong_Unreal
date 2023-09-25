// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PINGPONG_BasePlayerState_generated_h
#error "BasePlayerState.generated.h already included, missing '#pragma once' in BasePlayerState.h"
#endif
#define PINGPONG_BasePlayerState_generated_h

#define PingPong_Source_PingPong_BasePlayerState_h_15_SPARSE_DATA
#define PingPong_Source_PingPong_BasePlayerState_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSecondScore); \
	DECLARE_FUNCTION(execAddSecondScore); \
	DECLARE_FUNCTION(execGetFirstScore); \
	DECLARE_FUNCTION(execAddFirstScore);


#define PingPong_Source_PingPong_BasePlayerState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSecondScore); \
	DECLARE_FUNCTION(execAddSecondScore); \
	DECLARE_FUNCTION(execGetFirstScore); \
	DECLARE_FUNCTION(execAddFirstScore);


#define PingPong_Source_PingPong_BasePlayerState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasePlayerState(); \
	friend struct Z_Construct_UClass_ABasePlayerState_Statics; \
public: \
	DECLARE_CLASS(ABasePlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PingPong"), NO_API) \
	DECLARE_SERIALIZER(ABasePlayerState)


#define PingPong_Source_PingPong_BasePlayerState_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABasePlayerState(); \
	friend struct Z_Construct_UClass_ABasePlayerState_Statics; \
public: \
	DECLARE_CLASS(ABasePlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PingPong"), NO_API) \
	DECLARE_SERIALIZER(ABasePlayerState)


#define PingPong_Source_PingPong_BasePlayerState_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasePlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasePlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasePlayerState(ABasePlayerState&&); \
	NO_API ABasePlayerState(const ABasePlayerState&); \
public:


#define PingPong_Source_PingPong_BasePlayerState_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasePlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasePlayerState(ABasePlayerState&&); \
	NO_API ABasePlayerState(const ABasePlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasePlayerState)


#define PingPong_Source_PingPong_BasePlayerState_h_15_PRIVATE_PROPERTY_OFFSET
#define PingPong_Source_PingPong_BasePlayerState_h_12_PROLOG
#define PingPong_Source_PingPong_BasePlayerState_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PingPong_Source_PingPong_BasePlayerState_h_15_PRIVATE_PROPERTY_OFFSET \
	PingPong_Source_PingPong_BasePlayerState_h_15_SPARSE_DATA \
	PingPong_Source_PingPong_BasePlayerState_h_15_RPC_WRAPPERS \
	PingPong_Source_PingPong_BasePlayerState_h_15_INCLASS \
	PingPong_Source_PingPong_BasePlayerState_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PingPong_Source_PingPong_BasePlayerState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PingPong_Source_PingPong_BasePlayerState_h_15_PRIVATE_PROPERTY_OFFSET \
	PingPong_Source_PingPong_BasePlayerState_h_15_SPARSE_DATA \
	PingPong_Source_PingPong_BasePlayerState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PingPong_Source_PingPong_BasePlayerState_h_15_INCLASS_NO_PURE_DECLS \
	PingPong_Source_PingPong_BasePlayerState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PINGPONG_API UClass* StaticClass<class ABasePlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PingPong_Source_PingPong_BasePlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
