/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#pragma once
#include "../../inc/gcarray.h"
#include "PAL/api/c11_Annex_K.h"
#include "adesk.h"
#include "acarrayhelper.h"

#ifndef AC_ARRAY_ASSERT
#define AC_ARRAY_ASSERT GC_ARRAY_ASSERT
#endif

#ifndef ACARRAY_GROWTH_THRESHOLD
#define ACARRAY_GROWTH_THRESHOLD GCARRAY_GROWTH_THRESHOLD
#endif

#ifndef AcArrayValidateParams
#define AcArrayValidateParams GcArrayValidateParams
#endif

#ifndef AcArrayMemCopyReallocator
#define AcArrayMemCopyReallocator GcArrayMemCopyReallocator
#endif

#ifndef AcArrayObjectCopyReallocator
#define AcArrayObjectCopyReallocator GcArrayObjectCopyReallocator
#endif

#ifndef AcArrayItemCopierSelector
#define AcArrayItemCopierSelector GcArrayItemCopierSelector
#endif

#ifndef AcArray
#define AcArray GcArray
#endif

#ifndef AcStringArray
#define AcStringArray GcStringArray
#endif
