/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#pragma once
#include "../../inc/dbmaterial.h"
#include "dbmain.h"
#include "acgimaterial.h"

#ifndef AcDbMaterial
#define AcDbMaterial GcDbMaterial
#endif

#ifndef setAdskMaterialData
#define setAdskMaterialData setGsftMaterialData
#endif

#ifndef getAdskMaterialData
#define getAdskMaterialData getGsftMaterialData
#endif

#ifndef clearAdskMaterialCache
#define clearAdskMaterialCache clearGsftMaterialCache
#endif

#ifndef setAdskMaterialFlags
#define setAdskMaterialFlags setGsftMaterialFlags
#endif

#ifndef getAdskMaterialFlags
#define getAdskMaterialFlags getGsftMaterialFlags
#endif
