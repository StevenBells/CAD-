/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#pragma once
#include "../../inc/GcCFileWrappers.h"
#include "AdCharFmt.h"
#include "adesk.h"

#ifndef AcCFile_Assert
#define AcCFile_Assert GcCFile_Assert
#endif

#ifndef AcOutputBufMgr
#define AcOutputBufMgr GcOutputBufMgr
#endif

#ifndef AcCFile
#define AcCFile GcCFile
#endif

#ifndef AcCStdioFile
#define AcCStdioFile GcCStdioFile
#endif

#ifndef acCheckCFileCharFormat
#define acCheckCFileCharFormat gcCheckCFileCharFormat
#endif

#ifndef acWriteWCharToCFile
#define acWriteWCharToCFile gcWriteWCharToCFile
#endif

#ifndef acByteSwap
#define acByteSwap gcByteSwap
#endif

#ifndef acReadCIFFromCFile
#define acReadCIFFromCFile gcReadCIFFromCFile
#endif

#ifndef acReadAnsiCharFromCFile
#define acReadAnsiCharFromCFile gcReadAnsiCharFromCFile
#endif

#ifndef acReadUtf8CharFromCFile
#define acReadUtf8CharFromCFile gcReadUtf8CharFromCFile
#endif

#ifndef acReadUtf16CharFromCFile
#define acReadUtf16CharFromCFile gcReadUtf16CharFromCFile
#endif
