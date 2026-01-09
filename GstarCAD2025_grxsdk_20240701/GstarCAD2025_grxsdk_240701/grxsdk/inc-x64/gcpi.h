

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for ..\..\..\..\..\Drawing\Extensions\win\gcpi\gcpi.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __gcpi_h__
#define __gcpi_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IGcPiPropertyDisplay_FWD_DEFINED__
#define __IGcPiPropertyDisplay_FWD_DEFINED__
typedef interface IGcPiPropertyDisplay IGcPiPropertyDisplay;

#endif 	/* __IGcPiPropertyDisplay_FWD_DEFINED__ */


#ifndef __IGcPiPropertyEditControl_FWD_DEFINED__
#define __IGcPiPropertyEditControl_FWD_DEFINED__
typedef interface IGcPiPropertyEditControl IGcPiPropertyEditControl;

#endif 	/* __IGcPiPropertyEditControl_FWD_DEFINED__ */


#ifndef __IGcPiPropertyEditEventsSink_FWD_DEFINED__
#define __IGcPiPropertyEditEventsSink_FWD_DEFINED__
typedef interface IGcPiPropertyEditEventsSink IGcPiPropertyEditEventsSink;

#endif 	/* __IGcPiPropertyEditEventsSink_FWD_DEFINED__ */


#ifndef __IGcPiCommandButton_FWD_DEFINED__
#define __IGcPiCommandButton_FWD_DEFINED__
typedef interface IGcPiCommandButton IGcPiCommandButton;

#endif 	/* __IGcPiCommandButton_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_gcpi_0000_0000 */
/* [local] */ 

typedef __int64 LONG_PTR;

typedef __int64 *PLONG_PTR;

typedef unsigned __int64 UINT_PTR;

typedef unsigned __int64 *PUINT_PTR;

#define IPerPropertyDisplay IGcPiPropertyDisplay
#define IID_IPerPropertyDisplay IID_IGcPiPropertyDisplay


extern RPC_IF_HANDLE __MIDL_itf_gcpi_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_gcpi_0000_0000_v0_0_s_ifspec;

#ifndef __IGcPiPropertyDisplay_INTERFACE_DEFINED__
#define __IGcPiPropertyDisplay_INTERFACE_DEFINED__

/* interface IGcPiPropertyDisplay */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IGcPiPropertyDisplay;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3F3D2407-1A17-4919-8D63-B168D09A4C37")
    IGcPiPropertyDisplay : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetCustomPropertyCtrl( 
            /* [in] */ VARIANT Id,
            /* [in] */ LCID lcid,
            /* [retval][out] */ BSTR *pProgId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPropertyIcon( 
            /* [in] */ VARIANT Id,
            /* [retval][out] */ IUnknown **pIcon) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPropertyWeight( 
            /* [in] */ VARIANT Id,
            /* [retval][out] */ long *pPropertyWeight) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPropTextColor( 
            /* [in] */ VARIANT Id,
            /* [retval][out] */ OLE_COLOR *pTextColor) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsFullView( 
            /* [in] */ VARIANT Id,
            /* [out] */ VARIANT_BOOL *pbVisible,
            /* [retval][out] */ DWORD *pIntegralHeight) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IGcPiPropertyDisplayVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGcPiPropertyDisplay * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGcPiPropertyDisplay * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGcPiPropertyDisplay * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCustomPropertyCtrl )( 
            IGcPiPropertyDisplay * This,
            /* [in] */ VARIANT Id,
            /* [in] */ LCID lcid,
            /* [retval][out] */ BSTR *pProgId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPropertyIcon )( 
            IGcPiPropertyDisplay * This,
            /* [in] */ VARIANT Id,
            /* [retval][out] */ IUnknown **pIcon);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPropertyWeight )( 
            IGcPiPropertyDisplay * This,
            /* [in] */ VARIANT Id,
            /* [retval][out] */ long *pPropertyWeight);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPropTextColor )( 
            IGcPiPropertyDisplay * This,
            /* [in] */ VARIANT Id,
            /* [retval][out] */ OLE_COLOR *pTextColor);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsFullView )( 
            IGcPiPropertyDisplay * This,
            /* [in] */ VARIANT Id,
            /* [out] */ VARIANT_BOOL *pbVisible,
            /* [retval][out] */ DWORD *pIntegralHeight);
        
        END_INTERFACE
    } IGcPiPropertyDisplayVtbl;

    interface IGcPiPropertyDisplay
    {
        CONST_VTBL struct IGcPiPropertyDisplayVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGcPiPropertyDisplay_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGcPiPropertyDisplay_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGcPiPropertyDisplay_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IGcPiPropertyDisplay_GetCustomPropertyCtrl(This,Id,lcid,pProgId)	\
    ( (This)->lpVtbl -> GetCustomPropertyCtrl(This,Id,lcid,pProgId) ) 

#define IGcPiPropertyDisplay_GetPropertyIcon(This,Id,pIcon)	\
    ( (This)->lpVtbl -> GetPropertyIcon(This,Id,pIcon) ) 

#define IGcPiPropertyDisplay_GetPropertyWeight(This,Id,pPropertyWeight)	\
    ( (This)->lpVtbl -> GetPropertyWeight(This,Id,pPropertyWeight) ) 

#define IGcPiPropertyDisplay_GetPropTextColor(This,Id,pTextColor)	\
    ( (This)->lpVtbl -> GetPropTextColor(This,Id,pTextColor) ) 

#define IGcPiPropertyDisplay_IsFullView(This,Id,pbVisible,pIntegralHeight)	\
    ( (This)->lpVtbl -> IsFullView(This,Id,pbVisible,pIntegralHeight) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IGcPiPropertyDisplay_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_gcpi_0000_0001 */
/* [local] */ 

#define IPropertyEditControl IGcPiPropertyEditControl
#define IID_IPropertyEditControl IID_IGcPiPropertyEditControl


extern RPC_IF_HANDLE __MIDL_itf_gcpi_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_gcpi_0000_0001_v0_0_s_ifspec;

#ifndef __IGcPiPropertyEditControl_INTERFACE_DEFINED__
#define __IGcPiPropertyEditControl_INTERFACE_DEFINED__

/* interface IGcPiPropertyEditControl */
/* [oleautomation][dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IGcPiPropertyEditControl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CFE1F8E2-CC05-4EF0-AA73-8F2DD3B7D433")
    IGcPiPropertyEditControl : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InitEditControl( 
            /* [in] */ VARIANT *pVarObjDispArray,
            /* [in] */ VARIANT *pVarDynPropArray,
            /* [in] */ VARIANT *pDispidArray,
            /* [in] */ VARIANT_BOOL bReadOnly) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Refresh( 
            /* [in] */ unsigned long dwFlags) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_KeepFocus( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][requestedit][bindable][propput][id] */ HRESULT STDMETHODCALLTYPE put_BackColor( 
            /* [in] */ OLE_COLOR pclr) = 0;
        
        virtual /* [helpstring][requestedit][bindable][propget][id] */ HRESULT STDMETHODCALLTYPE get_BackColor( 
            /* [retval][out] */ OLE_COLOR *pclr) = 0;
        
        virtual /* [helpstring][requestedit][bindable][propput][id] */ HRESULT STDMETHODCALLTYPE put_ForeColor( 
            /* [in] */ OLE_COLOR pclr) = 0;
        
        virtual /* [helpstring][requestedit][bindable][propget][id] */ HRESULT STDMETHODCALLTYPE get_ForeColor( 
            /* [retval][out] */ OLE_COLOR *pclr) = 0;
        
        virtual /* [helpstring][requestedit][bindable][propput][id] */ HRESULT STDMETHODCALLTYPE put_ReadOnlyBackColor( 
            /* [in] */ OLE_COLOR pclr) = 0;
        
        virtual /* [helpstring][requestedit][bindable][propget][id] */ HRESULT STDMETHODCALLTYPE get_ReadOnlyBackColor( 
            /* [retval][out] */ OLE_COLOR *pclr) = 0;
        
        virtual /* [helpstring][requestedit][bindable][propput][id] */ HRESULT STDMETHODCALLTYPE put_ReadOnlyForeColor( 
            /* [in] */ OLE_COLOR pclr) = 0;
        
        virtual /* [helpstring][requestedit][bindable][propget][id] */ HRESULT STDMETHODCALLTYPE get_ReadOnlyForeColor( 
            /* [retval][out] */ OLE_COLOR *pclr) = 0;
        
        virtual /* [helpstring][requestedit][bindable][propput][id] */ HRESULT STDMETHODCALLTYPE put_Font( 
            /* [in] */ IUnknown *pIFont) = 0;
        
        virtual /* [helpstring][requestedit][bindable][propget][id] */ HRESULT STDMETHODCALLTYPE get_Font( 
            /* [retval][out] */ IUnknown **pIFont) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IGcPiPropertyEditControlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGcPiPropertyEditControl * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGcPiPropertyEditControl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGcPiPropertyEditControl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IGcPiPropertyEditControl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IGcPiPropertyEditControl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IGcPiPropertyEditControl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IGcPiPropertyEditControl * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InitEditControl )( 
            IGcPiPropertyEditControl * This,
            /* [in] */ VARIANT *pVarObjDispArray,
            /* [in] */ VARIANT *pVarDynPropArray,
            /* [in] */ VARIANT *pDispidArray,
            /* [in] */ VARIANT_BOOL bReadOnly);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Refresh )( 
            IGcPiPropertyEditControl * This,
            /* [in] */ unsigned long dwFlags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KeepFocus )( 
            IGcPiPropertyEditControl * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][requestedit][bindable][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BackColor )( 
            IGcPiPropertyEditControl * This,
            /* [in] */ OLE_COLOR pclr);
        
        /* [helpstring][requestedit][bindable][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BackColor )( 
            IGcPiPropertyEditControl * This,
            /* [retval][out] */ OLE_COLOR *pclr);
        
        /* [helpstring][requestedit][bindable][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ForeColor )( 
            IGcPiPropertyEditControl * This,
            /* [in] */ OLE_COLOR pclr);
        
        /* [helpstring][requestedit][bindable][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ForeColor )( 
            IGcPiPropertyEditControl * This,
            /* [retval][out] */ OLE_COLOR *pclr);
        
        /* [helpstring][requestedit][bindable][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ReadOnlyBackColor )( 
            IGcPiPropertyEditControl * This,
            /* [in] */ OLE_COLOR pclr);
        
        /* [helpstring][requestedit][bindable][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ReadOnlyBackColor )( 
            IGcPiPropertyEditControl * This,
            /* [retval][out] */ OLE_COLOR *pclr);
        
        /* [helpstring][requestedit][bindable][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ReadOnlyForeColor )( 
            IGcPiPropertyEditControl * This,
            /* [in] */ OLE_COLOR pclr);
        
        /* [helpstring][requestedit][bindable][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ReadOnlyForeColor )( 
            IGcPiPropertyEditControl * This,
            /* [retval][out] */ OLE_COLOR *pclr);
        
        /* [helpstring][requestedit][bindable][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Font )( 
            IGcPiPropertyEditControl * This,
            /* [in] */ IUnknown *pIFont);
        
        /* [helpstring][requestedit][bindable][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Font )( 
            IGcPiPropertyEditControl * This,
            /* [retval][out] */ IUnknown **pIFont);
        
        END_INTERFACE
    } IGcPiPropertyEditControlVtbl;

    interface IGcPiPropertyEditControl
    {
        CONST_VTBL struct IGcPiPropertyEditControlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGcPiPropertyEditControl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGcPiPropertyEditControl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGcPiPropertyEditControl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IGcPiPropertyEditControl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IGcPiPropertyEditControl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IGcPiPropertyEditControl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IGcPiPropertyEditControl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IGcPiPropertyEditControl_InitEditControl(This,pVarObjDispArray,pVarDynPropArray,pDispidArray,bReadOnly)	\
    ( (This)->lpVtbl -> InitEditControl(This,pVarObjDispArray,pVarDynPropArray,pDispidArray,bReadOnly) ) 

#define IGcPiPropertyEditControl_Refresh(This,dwFlags)	\
    ( (This)->lpVtbl -> Refresh(This,dwFlags) ) 

#define IGcPiPropertyEditControl_get_KeepFocus(This,pVal)	\
    ( (This)->lpVtbl -> get_KeepFocus(This,pVal) ) 

#define IGcPiPropertyEditControl_put_BackColor(This,pclr)	\
    ( (This)->lpVtbl -> put_BackColor(This,pclr) ) 

#define IGcPiPropertyEditControl_get_BackColor(This,pclr)	\
    ( (This)->lpVtbl -> get_BackColor(This,pclr) ) 

#define IGcPiPropertyEditControl_put_ForeColor(This,pclr)	\
    ( (This)->lpVtbl -> put_ForeColor(This,pclr) ) 

#define IGcPiPropertyEditControl_get_ForeColor(This,pclr)	\
    ( (This)->lpVtbl -> get_ForeColor(This,pclr) ) 

#define IGcPiPropertyEditControl_put_ReadOnlyBackColor(This,pclr)	\
    ( (This)->lpVtbl -> put_ReadOnlyBackColor(This,pclr) ) 

#define IGcPiPropertyEditControl_get_ReadOnlyBackColor(This,pclr)	\
    ( (This)->lpVtbl -> get_ReadOnlyBackColor(This,pclr) ) 

#define IGcPiPropertyEditControl_put_ReadOnlyForeColor(This,pclr)	\
    ( (This)->lpVtbl -> put_ReadOnlyForeColor(This,pclr) ) 

#define IGcPiPropertyEditControl_get_ReadOnlyForeColor(This,pclr)	\
    ( (This)->lpVtbl -> get_ReadOnlyForeColor(This,pclr) ) 

#define IGcPiPropertyEditControl_put_Font(This,pIFont)	\
    ( (This)->lpVtbl -> put_Font(This,pIFont) ) 

#define IGcPiPropertyEditControl_get_Font(This,pIFont)	\
    ( (This)->lpVtbl -> get_Font(This,pIFont) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IGcPiPropertyEditControl_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_gcpi_0000_0002 */
/* [local] */ 

#define IPropEditUIEventsSink IGcPiPropertyEditEventsSink
#define IID_IPropEditUIEventsSink IID_IGcPiPropertyEditEventsSink


extern RPC_IF_HANDLE __MIDL_itf_gcpi_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_gcpi_0000_0002_v0_0_s_ifspec;

#ifndef __IGcPiPropertyEditEventsSink_INTERFACE_DEFINED__
#define __IGcPiPropertyEditEventsSink_INTERFACE_DEFINED__

/* interface IGcPiPropertyEditEventsSink */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IGcPiPropertyEditEventsSink;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("98EE9B87-7102-4590-8C41-B0768743564F")
    IGcPiPropertyEditEventsSink : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnClick( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnDblClick( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnKeyDown( 
            /* [in] */ LONG_PTR pnChar,
            /* [in] */ LONG_PTR keyData) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnKeyUp( 
            /* [in] */ LONG_PTR pnChar,
            /* [in] */ LONG_PTR keyData) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnRButtonDown( 
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnMButtonDown( 
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnBeginPropertyUpdate( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnEndPropertyUpdate( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IGcPiPropertyEditEventsSinkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGcPiPropertyEditEventsSink * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGcPiPropertyEditEventsSink * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGcPiPropertyEditEventsSink * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnClick )( 
            IGcPiPropertyEditEventsSink * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnDblClick )( 
            IGcPiPropertyEditEventsSink * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnKeyDown )( 
            IGcPiPropertyEditEventsSink * This,
            /* [in] */ LONG_PTR pnChar,
            /* [in] */ LONG_PTR keyData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnKeyUp )( 
            IGcPiPropertyEditEventsSink * This,
            /* [in] */ LONG_PTR pnChar,
            /* [in] */ LONG_PTR keyData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnRButtonDown )( 
            IGcPiPropertyEditEventsSink * This,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnMButtonDown )( 
            IGcPiPropertyEditEventsSink * This,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnBeginPropertyUpdate )( 
            IGcPiPropertyEditEventsSink * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnEndPropertyUpdate )( 
            IGcPiPropertyEditEventsSink * This);
        
        END_INTERFACE
    } IGcPiPropertyEditEventsSinkVtbl;

    interface IGcPiPropertyEditEventsSink
    {
        CONST_VTBL struct IGcPiPropertyEditEventsSinkVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGcPiPropertyEditEventsSink_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGcPiPropertyEditEventsSink_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGcPiPropertyEditEventsSink_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IGcPiPropertyEditEventsSink_OnClick(This)	\
    ( (This)->lpVtbl -> OnClick(This) ) 

#define IGcPiPropertyEditEventsSink_OnDblClick(This)	\
    ( (This)->lpVtbl -> OnDblClick(This) ) 

#define IGcPiPropertyEditEventsSink_OnKeyDown(This,pnChar,keyData)	\
    ( (This)->lpVtbl -> OnKeyDown(This,pnChar,keyData) ) 

#define IGcPiPropertyEditEventsSink_OnKeyUp(This,pnChar,keyData)	\
    ( (This)->lpVtbl -> OnKeyUp(This,pnChar,keyData) ) 

#define IGcPiPropertyEditEventsSink_OnRButtonDown(This,wParam,lParam)	\
    ( (This)->lpVtbl -> OnRButtonDown(This,wParam,lParam) ) 

#define IGcPiPropertyEditEventsSink_OnMButtonDown(This,wParam,lParam)	\
    ( (This)->lpVtbl -> OnMButtonDown(This,wParam,lParam) ) 

#define IGcPiPropertyEditEventsSink_OnBeginPropertyUpdate(This)	\
    ( (This)->lpVtbl -> OnBeginPropertyUpdate(This) ) 

#define IGcPiPropertyEditEventsSink_OnEndPropertyUpdate(This)	\
    ( (This)->lpVtbl -> OnEndPropertyUpdate(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IGcPiPropertyEditEventsSink_INTERFACE_DEFINED__ */


#ifndef __IGcPiCommandButton_INTERFACE_DEFINED__
#define __IGcPiCommandButton_INTERFACE_DEFINED__

/* interface IGcPiCommandButton */
/* [unique][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IGcPiCommandButton;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("35CFD71A-ABDF-4096-A806-C3DB578F2C93")
    IGcPiCommandButton : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetName( 
            /* [in] */ LCID lcid,
            /* [retval][out] */ BSTR *name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE get_EnabledPicture( 
            /* [retval][out] */ IUnknown **pPicture) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE get_DisabledPicture( 
            /* [retval][out] */ IUnknown **pPicture) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *bEnabled) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL bEnabled) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE get_Checked( 
            /* [retval][out] */ VARIANT_BOOL *bChecked) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE put_Checked( 
            /* [in] */ VARIANT_BOOL bChecked) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE get_ButtonStyle( 
            /* [retval][out] */ long *style) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Execute( 
            /* [in] */ VARIANT Objects) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IGcPiCommandButtonVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGcPiCommandButton * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGcPiCommandButton * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGcPiCommandButton * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IGcPiCommandButton * This,
            /* [in] */ LCID lcid,
            /* [retval][out] */ BSTR *name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_EnabledPicture )( 
            IGcPiCommandButton * This,
            /* [retval][out] */ IUnknown **pPicture);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisabledPicture )( 
            IGcPiCommandButton * This,
            /* [retval][out] */ IUnknown **pPicture);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IGcPiCommandButton * This,
            /* [retval][out] */ VARIANT_BOOL *bEnabled);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IGcPiCommandButton * This,
            /* [in] */ VARIANT_BOOL bEnabled);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_Checked )( 
            IGcPiCommandButton * This,
            /* [retval][out] */ VARIANT_BOOL *bChecked);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_Checked )( 
            IGcPiCommandButton * This,
            /* [in] */ VARIANT_BOOL bChecked);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_ButtonStyle )( 
            IGcPiCommandButton * This,
            /* [retval][out] */ long *style);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Execute )( 
            IGcPiCommandButton * This,
            /* [in] */ VARIANT Objects);
        
        END_INTERFACE
    } IGcPiCommandButtonVtbl;

    interface IGcPiCommandButton
    {
        CONST_VTBL struct IGcPiCommandButtonVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGcPiCommandButton_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGcPiCommandButton_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGcPiCommandButton_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IGcPiCommandButton_GetName(This,lcid,name)	\
    ( (This)->lpVtbl -> GetName(This,lcid,name) ) 

#define IGcPiCommandButton_get_EnabledPicture(This,pPicture)	\
    ( (This)->lpVtbl -> get_EnabledPicture(This,pPicture) ) 

#define IGcPiCommandButton_get_DisabledPicture(This,pPicture)	\
    ( (This)->lpVtbl -> get_DisabledPicture(This,pPicture) ) 

#define IGcPiCommandButton_get_Enabled(This,bEnabled)	\
    ( (This)->lpVtbl -> get_Enabled(This,bEnabled) ) 

#define IGcPiCommandButton_put_Enabled(This,bEnabled)	\
    ( (This)->lpVtbl -> put_Enabled(This,bEnabled) ) 

#define IGcPiCommandButton_get_Checked(This,bChecked)	\
    ( (This)->lpVtbl -> get_Checked(This,bChecked) ) 

#define IGcPiCommandButton_put_Checked(This,bChecked)	\
    ( (This)->lpVtbl -> put_Checked(This,bChecked) ) 

#define IGcPiCommandButton_get_ButtonStyle(This,style)	\
    ( (This)->lpVtbl -> get_ButtonStyle(This,style) ) 

#define IGcPiCommandButton_Execute(This,Objects)	\
    ( (This)->lpVtbl -> Execute(This,Objects) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IGcPiCommandButton_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

unsigned long             __RPC_USER  BSTR_UserSize64(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal64(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree64(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize64(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal64(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree64(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


