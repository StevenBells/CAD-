/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#pragma once
#include "../../inc/gcmem.h"
#include "AdAChar.h"
#include "accoredefs.h"


#ifndef acad_malloc
#define acad_malloc gcad_malloc
#endif

#ifndef acad_free
#define acad_free gcad_free
#endif

#ifndef acad__msize
#define acad__msize gcad__msize
#endif

#ifndef acad_realloc
#define acad_realloc gcad_realloc
#endif

#ifndef acad_calloc
#define acad_calloc gcad_calloc
#endif

#ifndef acad__strdup
#define acad__strdup gcad__strdup
#endif

