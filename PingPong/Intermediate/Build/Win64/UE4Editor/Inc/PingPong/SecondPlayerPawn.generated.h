// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PINGPONG_SecondPlayerPawn_generated_h
#error "SecondPlayerPawn.generated.h already included, missing '#pragma once' in SecondPlayerPawn.h"
#endif
#define PINGPONG_SecondPlayerPawn_generated_h

#define PingPong_Source_PingPong_SecondPlayerPawn_h_16_SPARSE_DATA
#define PingPong_Source_PingPong_SecondPlayerPawn_h_16_RPC_WRAPPERS
#define PingPong_Source_PingPong_SecondPlayerPawn_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define PingPong_Source_PingPong_SecondPlayerPawn_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASecondPlayerController(); \
	friend struct Z_Construct_UClass_ASecondPlayerController_Statics; \
public: \
	DECLARE_CLASS(ASecondPlayerController, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PingPong"), NO_API) \
	DECLARE_SERIALIZER(ASecondPlayerController)


#define PingPong_Source_PingPong_SecondPlayerPawn_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASecondPlayerController(); \
	friend struct Z_Construct_UClass_ASecondPlayerController_Statics; \
public: \
	DECLARE_CLASS(ASecondPlayerController, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PingPong"), NO_API) \
	DECLARE_SERIALIZER(ASecondPlayerController)


#define PingPong_Source_PingPong_SecondPlayerPawn_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASecondPlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASecondPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASecondPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASecondPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASecondPlayerController(ASecondPlayerController&&); \
	NO_API ASecondPlayerController(const ASecondPlayerController&); \
public:


#define PingPong_Source_PingPong_SecondPlayerPawn_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASecondPlayerController(ASecondPlayerController&&); \
	NO_API ASecondPlayerController(const ASecondPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASecondPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASecondPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASecondPlayerController)


#define PingPong_Source_PingPong_SecondPlayerPawn_h_16_PRIVATE_PROPERTY_OFFSET
#define PingPong_Source_PingPong_SecondPlayerPawn_h_13_PROLOG
#define PingPong_Source_PingPong_SecondPlayerPawn_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PingPong_Source_PingPong_SecondPlayerPawn_h_16_PRIVATE_PROPERTY_OFFSET \
	PingPong_Source_PingPong_SecondPlayerPawn_h_16_SPARSE_DATA \
	PingPong_Source_PingPong_SecondPlayerPawn_h_16_RPC_WRAPPERS \
	PingPong_Source_PingPong_SecondPlayerPawn_h_16_INCLASS \
	PingPong_Source_PingPong_SecondPlayerPawn_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PingPong_Source_PingPong_SecondPlayerPawn_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PingPong_Source_PingPong_SecondPlayerPawn_h_16_PRIVATE_PROPERTY_OFFSET \
	PingPong_Source_PingPong_SecondPlayerPawn_h_16_SPARSE_DATA \
	PingPong_Source_PingPong_SecondPlayerPawn_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PingPong_Source_PingPong_SecondPlayerPawn_h_16_INCLASS_NO_PURE_DECLS \
	PingPong_Source_PingPong_SecondPlayerPawn_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PINGPONG_API UClass* StaticClass<class ASecondPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PingPong_Source_PingPong_SecondPlayerPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
