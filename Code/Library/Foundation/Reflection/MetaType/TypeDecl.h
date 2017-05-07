// TypeDecl.h
// Type declaration
//------------------------------------------------------------------------------
#pragma once
#ifndef FOUNDATION_REFLECTION_TYPEDECL_H
#define FOUNDATION_REFLECTION_TYPEDECL_H


// Includes
//------------------------------------------------------------------------------
#include "Foundation/Reflection/MetaType/TypeDeclMacro.h"

namespace TReflection
{
#define REFLECTION_META_INIT_LIST \
	REFLECTION_DECLARE_META(bool)		\
	REFLECTION_DECLARE_META(float)		\
	REFLECTION_DECLARE_META(double)		\
	REFLECTION_DECLARE_META(uint8)		\
	REFLECTION_DECLARE_META(uint16)		\
	REFLECTION_DECLARE_META(uint32)		\
	REFLECTION_DECLARE_META(uint64)		\
	REFLECTION_DECLARE_META(int8)		\
	REFLECTION_DECLARE_META(int16)		\
	REFLECTION_DECLARE_META(int32)		\
	REFLECTION_DECLARE_META(int64)		\
	REFLECTION_DECLARE_META(AString)	\
	REFLECTION_DECLARE_META(WString)


#undef REFLECTION_DECLARE_META
#define REFLECTION_DECLARE_META REFLECTION_DECLARE_METATYPE

REFLECTION_DECLARE_META_BEGIN
	REFLECTION_META_INIT_LIST
REFLECTION_DECLARE_META_END

#undef REFLECTION_DECLARE_META
#define REFLECTION_DECLARE_META REFLECTION_REGISTER_METATYPE

REFLECTION_REGISTER_META_BEGIN
	REFLECTION_META_INIT_LIST
REFLECTION_REGISTER_META_END
}

#endif // FOUNDATION_REFLECTION_TYPEDECL_H
