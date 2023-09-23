// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PINGPONG_Second_PlayerController_generated_h
#error "Second_PlayerController.generated.h already included, missing '#pragma once' in Second_PlayerController.h"
#endif
#define PINGPONG_Second_PlayerController_generated_h

#define PingPong_Source_PingPong_Second_PlayerController_h_15_SPARSE_DATA
#define PingPong_Source_PingPong_Second_PlayerController_h_15_RPC_WRAPPERS
#define PingPong_Source_PingPong_Second_PlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define PingPong_Source_PingPong_Second_PlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASecond_PlayerController(); \
	friend struct Z_Construct_UClass_ASecond_PlayerController_Statics; \
public: \
	DECLARE_CLASS(ASecond_PlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PingPong"), NO_API) \
	DECLARE_SERIALIZER(ASecond_PlayerController)


#define PingPong_Source_PingPong_Second_PlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASecond_PlayerController(); \
	friend struct Z_Construct_UClass_ASecond_PlayerController_Statics; \
public: \
	DECLARE_CLASS(ASecond_PlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PingPong"), NO_API) \
	DECLARE_SERIALIZER(ASecond_PlayerController)


#define PingPong_Source_PingPong_Second_PlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASecond_PlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASecond_PlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASecond_PlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASecond_PlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASecond_PlayerController(ASecond_PlayerController&&); \
	NO_API ASecond_PlayerController(const ASecond_PlayerController&); \
public:


#define PingPong_Source_PingPong_Second_PlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASecond_PlayerController(ASecond_PlayerController&&); \
	NO_API ASecond_PlayerController(const ASecond_PlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASecond_PlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASecond_PlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASecond_PlayerController)


#define PingPong_Source_PingPong_Second_PlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SceneComponent() { return STRUCT_OFFSET(ASecond_PlayerController, SceneComponent); } \
	FORCEINLINE static uint32 __PPO__Velocity() { return STRUCT_OFFSET(ASecond_PlayerController, Velocity); }


#define PingPong_Source_PingPong_Second_PlayerController_h_12_PROLOG
#define PingPong_Source_PingPong_Second_PlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PingPong_Source_PingPong_Second_PlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	PingPong_Source_PingPong_Second_PlayerController_h_15_SPARSE_DATA \
	PingPong_Source_PingPong_Second_PlayerController_h_15_RPC_WRAPPERS \
	PingPong_Source_PingPong_Second_PlayerController_h_15_INCLASS \
	PingPong_Source_PingPong_Second_PlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PingPong_Source_PingPong_Second_PlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PingPong_Source_PingPong_Second_PlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	PingPong_Source_PingPong_Second_PlayerController_h_15_SPARSE_DATA \
	PingPong_Source_PingPong_Second_PlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PingPong_Source_PingPong_Second_PlayerController_h_15_INCLASS_NO_PURE_DECLS \
	PingPong_Source_PingPong_Second_PlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PINGPONG_API UClass* StaticClass<class ASecond_PlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PingPong_Source_PingPong_Second_PlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
