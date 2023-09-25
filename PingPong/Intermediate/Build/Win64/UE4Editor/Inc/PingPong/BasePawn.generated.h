// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PINGPONG_BasePawn_generated_h
#error "BasePawn.generated.h already included, missing '#pragma once' in BasePawn.h"
#endif
#define PINGPONG_BasePawn_generated_h

#define PingPong_Source_PingPong_BasePawn_h_14_SPARSE_DATA
#define PingPong_Source_PingPong_BasePawn_h_14_RPC_WRAPPERS \
	virtual bool Server_MoveYaw_Validate(float ); \
	virtual void Server_MoveYaw_Implementation(float Amount); \
 \
	DECLARE_FUNCTION(execServer_MoveYaw);


#define PingPong_Source_PingPong_BasePawn_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execServer_MoveYaw);


#define PingPong_Source_PingPong_BasePawn_h_14_EVENT_PARMS \
	struct BasePawn_eventServer_MoveYaw_Parms \
	{ \
		float Amount; \
	};


#define PingPong_Source_PingPong_BasePawn_h_14_CALLBACK_WRAPPERS
#define PingPong_Source_PingPong_BasePawn_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasePawn(); \
	friend struct Z_Construct_UClass_ABasePawn_Statics; \
public: \
	DECLARE_CLASS(ABasePawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PingPong"), NO_API) \
	DECLARE_SERIALIZER(ABasePawn) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		VelocityVector=NETFIELD_REP_START, \
		NETFIELD_REP_END=VelocityVector	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PingPong_Source_PingPong_BasePawn_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABasePawn(); \
	friend struct Z_Construct_UClass_ABasePawn_Statics; \
public: \
	DECLARE_CLASS(ABasePawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PingPong"), NO_API) \
	DECLARE_SERIALIZER(ABasePawn) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		VelocityVector=NETFIELD_REP_START, \
		NETFIELD_REP_END=VelocityVector	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PingPong_Source_PingPong_BasePawn_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasePawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasePawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasePawn(ABasePawn&&); \
	NO_API ABasePawn(const ABasePawn&); \
public:


#define PingPong_Source_PingPong_BasePawn_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasePawn(ABasePawn&&); \
	NO_API ABasePawn(const ABasePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABasePawn)


#define PingPong_Source_PingPong_BasePawn_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__VelocityVector() { return STRUCT_OFFSET(ABasePawn, VelocityVector); }


#define PingPong_Source_PingPong_BasePawn_h_11_PROLOG \
	PingPong_Source_PingPong_BasePawn_h_14_EVENT_PARMS


#define PingPong_Source_PingPong_BasePawn_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PingPong_Source_PingPong_BasePawn_h_14_PRIVATE_PROPERTY_OFFSET \
	PingPong_Source_PingPong_BasePawn_h_14_SPARSE_DATA \
	PingPong_Source_PingPong_BasePawn_h_14_RPC_WRAPPERS \
	PingPong_Source_PingPong_BasePawn_h_14_CALLBACK_WRAPPERS \
	PingPong_Source_PingPong_BasePawn_h_14_INCLASS \
	PingPong_Source_PingPong_BasePawn_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PingPong_Source_PingPong_BasePawn_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PingPong_Source_PingPong_BasePawn_h_14_PRIVATE_PROPERTY_OFFSET \
	PingPong_Source_PingPong_BasePawn_h_14_SPARSE_DATA \
	PingPong_Source_PingPong_BasePawn_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PingPong_Source_PingPong_BasePawn_h_14_CALLBACK_WRAPPERS \
	PingPong_Source_PingPong_BasePawn_h_14_INCLASS_NO_PURE_DECLS \
	PingPong_Source_PingPong_BasePawn_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PINGPONG_API UClass* StaticClass<class ABasePawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PingPong_Source_PingPong_BasePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
