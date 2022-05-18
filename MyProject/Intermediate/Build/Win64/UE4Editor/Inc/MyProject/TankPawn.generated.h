// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_TankPawn_generated_h
#error "TankPawn.generated.h already included, missing '#pragma once' in TankPawn.h"
#endif
#define MYPROJECT_TankPawn_generated_h

#define MyProject_Source_MyProject_TankPawn_h_15_SPARSE_DATA
#define MyProject_Source_MyProject_TankPawn_h_15_RPC_WRAPPERS
#define MyProject_Source_MyProject_TankPawn_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject_Source_MyProject_TankPawn_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATankPawn(); \
	friend struct Z_Construct_UClass_ATankPawn_Statics; \
public: \
	DECLARE_CLASS(ATankPawn, ABasePawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(ATankPawn)


#define MyProject_Source_MyProject_TankPawn_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATankPawn(); \
	friend struct Z_Construct_UClass_ATankPawn_Statics; \
public: \
	DECLARE_CLASS(ATankPawn, ABasePawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(ATankPawn)


#define MyProject_Source_MyProject_TankPawn_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankPawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankPawn(ATankPawn&&); \
	NO_API ATankPawn(const ATankPawn&); \
public:


#define MyProject_Source_MyProject_TankPawn_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankPawn() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankPawn(ATankPawn&&); \
	NO_API ATankPawn(const ATankPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATankPawn)


#define MyProject_Source_MyProject_TankPawn_h_15_PRIVATE_PROPERTY_OFFSET
#define MyProject_Source_MyProject_TankPawn_h_12_PROLOG
#define MyProject_Source_MyProject_TankPawn_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_TankPawn_h_15_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_TankPawn_h_15_SPARSE_DATA \
	MyProject_Source_MyProject_TankPawn_h_15_RPC_WRAPPERS \
	MyProject_Source_MyProject_TankPawn_h_15_INCLASS \
	MyProject_Source_MyProject_TankPawn_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_TankPawn_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_TankPawn_h_15_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_TankPawn_h_15_SPARSE_DATA \
	MyProject_Source_MyProject_TankPawn_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_TankPawn_h_15_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_TankPawn_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class ATankPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_TankPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
