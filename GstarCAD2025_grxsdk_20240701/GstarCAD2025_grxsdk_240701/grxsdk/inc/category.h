/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#ifndef OPM_CATEGORY_H
#define OPM_CATEGORY_H

#pragma once
#include "category-properties.h"

#ifdef _GSOFT_WINDOWS_
DEFINE_GUID(IID_ICategorizeProperties, 0xd7d55c01, 0x92c4, 0x4f45, 0xbd, 0x27, 0x29, 0x73, 0x5a, 0xd7, 0x0b, 0x00);

typedef int PROPCAT;

#undef  INTERFACE
#define INTERFACE  ICategorizeProperties
interface DECLSPEC_UUID("D7D55C01-92C4-4F45-BD27-29735AD70B00") ICategorizeProperties : public IUnknown
{
  BEGIN_INTERFACE
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
  STDMETHOD_(ULONG, AddRef)(THIS) PURE;
  STDMETHOD_(ULONG, Release)(THIS) PURE;

  STDMETHOD(MapPropertyToCategory)(THIS_
    DISPID dispid,
    PROPCAT* ppropcat) PURE;
  STDMETHOD(GetCategoryName)(THIS_
    PROPCAT propcat,
    LCID lcid,
    BSTR* pbstrName) PURE;
};

typedef ICategorizeProperties FAR* LPCATEGORIZEPROPERTIES;
#endif
#endif