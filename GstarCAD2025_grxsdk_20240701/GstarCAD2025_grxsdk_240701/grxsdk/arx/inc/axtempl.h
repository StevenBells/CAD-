/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#pragma once
#include "../../inc/gxtempl.h"
#include "adesk.h"
#include "axobjref.h"
#include "axboiler.h"
#include "oleaprot.h"

#ifdef _ADESK_WINDOWS_
#include "opmext.h"
#include "opmimp.h"
#endif

#include "dbobjptr.h"

#ifdef _ADESK_WINDOWS_
#include "rxregsvc.h"
#include "PAL/api/AcLocale.h"
#endif

#ifndef ACAX_VARIANT_TRUE
#define ACAX_VARIANT_TRUE GCAX_VARIANT_TRUE
#endif

#ifndef ACAX_VARIANT_FALSE
#define ACAX_VARIANT_FALSE GCAX_VARIANT_FALSE
#endif

#ifndef CProxy_AcadObjectEvents
#define CProxy_AcadObjectEvents CProxy_GcadObjectEvents
#endif

#ifndef IAcadBaseObjectImpl
#define IAcadBaseObjectImpl IGcadBaseObjectImpl
#endif

#ifndef IAcadBaseObject
#define IAcadBaseObject IGcadBaseObject
#endif

#ifndef IAcadBaseObject2Impl
#define IAcadBaseObject2Impl IGcadBaseObject2Impl
#endif

#ifndef IAcadBaseObject2
#define IAcadBaseObject2 IGcadBaseObject2
#endif

#ifndef IAcadEntityDispatchImpl
#define IAcadEntityDispatchImpl IGcadEntityDispatchImpl
#endif

#ifndef IAcadObjectDispatchImpl
#define IAcadObjectDispatchImpl IGcadObjectDispatchImpl
#endif

#ifndef IAcadBaseDatabase
#define IAcadBaseDatabase IGcadBaseDatabase
#endif

#ifndef IAcadBaseSubEntityImpl
#define IAcadBaseSubEntityImpl IGcadBaseSubEntityImpl
#endif

#ifndef IAcadBaseSubEntity
#define IAcadBaseSubEntity IGcadBaseSubEntity
#endif

#ifndef IAcadShadowDisplayImpl
#define IAcadShadowDisplayImpl IGcadShadowDisplayImpl
#endif

#ifndef IAcadSurfaceDispatchImpl
#define IAcadSurfaceDispatchImpl IGcadSurfaceDispatchImpl
#endif

#ifndef IAcadBaseDatabaseImpl
#define IAcadBaseDatabaseImpl IGcadBaseDatabaseImpl
#endif

#ifndef IAcPiPropCommandButtonsImpl
#define IAcPiPropCommandButtonsImpl IGcPiPropCommandButtonsImpl
#endif

#ifndef IAcPiPropertyDisplayImpl
#define IAcPiPropertyDisplayImpl IGcPiPropertyDisplayImpl
#endif

#ifndef IAcPiCategorizePropertiesImpl
#define IAcPiCategorizePropertiesImpl IGcPiCategorizePropertiesImpl
#endif
