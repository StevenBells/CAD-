

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for ..\..\..\..\..\Drawing\Extensions\win\gcpexctl\gcpexctl.idl:
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


#ifndef __gcpexctl_h__
#define __gcpexctl_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IGcPeNumericEditor_FWD_DEFINED__
#define __IGcPeNumericEditor_FWD_DEFINED__
typedef interface IGcPeNumericEditor IGcPeNumericEditor;

#endif 	/* __IGcPeNumericEditor_FWD_DEFINED__ */


#ifndef __IGcPeVariantCtrl_FWD_DEFINED__
#define __IGcPeVariantCtrl_FWD_DEFINED__
typedef interface IGcPeVariantCtrl IGcPeVariantCtrl;

#endif 	/* __IGcPeVariantCtrl_FWD_DEFINED__ */


#ifndef __IGcPeColorCtrl_FWD_DEFINED__
#define __IGcPeColorCtrl_FWD_DEFINED__
typedef interface IGcPeColorCtrl IGcPeColorCtrl;

#endif 	/* __IGcPeColorCtrl_FWD_DEFINED__ */


#ifndef __IGcPeSpinCtrl_FWD_DEFINED__
#define __IGcPeSpinCtrl_FWD_DEFINED__
typedef interface IGcPeSpinCtrl IGcPeSpinCtrl;

#endif 	/* __IGcPeSpinCtrl_FWD_DEFINED__ */


#ifndef __IGcPeNoPickVariantRW_FWD_DEFINED__
#define __IGcPeNoPickVariantRW_FWD_DEFINED__
typedef interface IGcPeNoPickVariantRW IGcPeNoPickVariantRW;

#endif 	/* __IGcPeNoPickVariantRW_FWD_DEFINED__ */


#ifndef __IGcPeButtonEditCtrl_FWD_DEFINED__
#define __IGcPeButtonEditCtrl_FWD_DEFINED__
typedef interface IGcPeButtonEditCtrl IGcPeButtonEditCtrl;

#endif 	/* __IGcPeButtonEditCtrl_FWD_DEFINED__ */


#ifndef __IGcPeButtonPicture_FWD_DEFINED__
#define __IGcPeButtonPicture_FWD_DEFINED__
typedef interface IGcPeButtonPicture IGcPeButtonPicture;

#endif 	/* __IGcPeButtonPicture_FWD_DEFINED__ */


#ifndef __IGcPePick2PointsCtrl_FWD_DEFINED__
#define __IGcPePick2PointsCtrl_FWD_DEFINED__
typedef interface IGcPePick2PointsCtrl IGcPePick2PointsCtrl;

#endif 	/* __IGcPePick2PointsCtrl_FWD_DEFINED__ */


#ifndef __IGcPeCalculatorCtrl_FWD_DEFINED__
#define __IGcPeCalculatorCtrl_FWD_DEFINED__
typedef interface IGcPeCalculatorCtrl IGcPeCalculatorCtrl;

#endif 	/* __IGcPeCalculatorCtrl_FWD_DEFINED__ */


#ifndef __GcPePropertyEditorText_FWD_DEFINED__
#define __GcPePropertyEditorText_FWD_DEFINED__

#ifdef __cplusplus
typedef class GcPePropertyEditorText GcPePropertyEditorText;
#else
typedef struct GcPePropertyEditorText GcPePropertyEditorText;
#endif /* __cplusplus */

#endif 	/* __GcPePropertyEditorText_FWD_DEFINED__ */


#ifndef __GcPePropertyEditorLWeight_FWD_DEFINED__
#define __GcPePropertyEditorLWeight_FWD_DEFINED__

#ifdef __cplusplus
typedef class GcPePropertyEditorLWeight GcPePropertyEditorLWeight;
#else
typedef struct GcPePropertyEditorLWeight GcPePropertyEditorLWeight;
#endif /* __cplusplus */

#endif 	/* __GcPePropertyEditorLWeight_FWD_DEFINED__ */


#ifndef __GcPePropertyEditorLayer_FWD_DEFINED__
#define __GcPePropertyEditorLayer_FWD_DEFINED__

#ifdef __cplusplus
typedef class GcPePropertyEditorLayer GcPePropertyEditorLayer;
#else
typedef struct GcPePropertyEditorLayer GcPePropertyEditorLayer;
#endif /* __cplusplus */

#endif 	/* __GcPePropertyEditorLayer_FWD_DEFINED__ */


#ifndef __GcPePropertyEditorMaterial_FWD_DEFINED__
#define __GcPePropertyEditorMaterial_FWD_DEFINED__

#ifdef __cplusplus
typedef class GcPePropertyEditorMaterial GcPePropertyEditorMaterial;
#else
typedef struct GcPePropertyEditorMaterial GcPePropertyEditorMaterial;
#endif /* __cplusplus */

#endif 	/* __GcPePropertyEditorMaterial_FWD_DEFINED__ */


#ifndef __GcPePropertyEditorColor_FWD_DEFINED__
#define __GcPePropertyEditorColor_FWD_DEFINED__

#ifdef __cplusplus
typedef class GcPePropertyEditorColor GcPePropertyEditorColor;
#else
typedef struct GcPePropertyEditorColor GcPePropertyEditorColor;
#endif /* __cplusplus */

#endif 	/* __GcPePropertyEditorColor_FWD_DEFINED__ */


#ifndef __GcPePropertyEditorLType_FWD_DEFINED__
#define __GcPePropertyEditorLType_FWD_DEFINED__

#ifdef __cplusplus
typedef class GcPePropertyEditorLType GcPePropertyEditorLType;
#else
typedef struct GcPePropertyEditorLType GcPePropertyEditorLType;
#endif /* __cplusplus */

#endif 	/* __GcPePropertyEditorLType_FWD_DEFINED__ */


#ifndef __GcPePropertyEditorNumeric_FWD_DEFINED__
#define __GcPePropertyEditorNumeric_FWD_DEFINED__

#ifdef __cplusplus
typedef class GcPePropertyEditorNumeric GcPePropertyEditorNumeric;
#else
typedef struct GcPePropertyEditorNumeric GcPePropertyEditorNumeric;
#endif /* __cplusplus */

#endif 	/* __GcPePropertyEditorNumeric_FWD_DEFINED__ */


#ifndef __GcPePropertyEditorBool_FWD_DEFINED__
#define __GcPePropertyEditorBool_FWD_DEFINED__

#ifdef __cplusplus
typedef class GcPePropertyEditorBool GcPePropertyEditorBool;
#else
typedef struct GcPePropertyEditorBool GcPePropertyEditorBool;
#endif /* __cplusplus */

#endif 	/* __GcPePropertyEditorBool_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "gcpi.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_gcpexctl_0000_0000 */
/* [local] */ 

typedef /* [v1_enum][uuid] */  DECLSPEC_UUID("1D535D74-D7D7-4B47-91E0-96DE29BFDB28") 
enum GcPeNumericType
    {
        PE_ACAD_DISTANCE	= 0,
        PE_ACAD_ANGLE	= 1,
        PE_ACAD_NOUNITS	= 2,
        PE_ACAD_OTHER	= 3,
        PE_ACAD_ANGLEPLUS360	= 4,
        PE_ACAD_RELATIVE_ANGLE	= 5,
        PE_ACAD_RAW_ANGLE	= 6,
        PE_GCAD_DISTANCE	= 0,
        PE_GCAD_ANGLE	= 1,
        PE_GCAD_NOUNITS	= 2,
        PE_GCAD_OTHER	= 3,
        PE_GCAD_ANGLEPLUS360	= 4,
        PE_GCAD_RELATIVE_ANGLE	= 5,
        PE_GCAD_RAW_ANGLE	= 6
    } 	GcPeNumericType;

#define CLSID_PropertyEditorText CLSID_GcPePropertyEditorText
#define CLSID_PropertyEditorLWeight CLSID_GcPePropertyEditorLWeight
#define CLSID_PropertyEditorLayer CLSID_GcPePropertyEditorLayer
#define CLSID_PropertyEditorMaterial CLSID_GcPePropertyEditorMaterial
#define CLSID_PropertyEditorColor CLSID_GcPePropertyEditorColor
#define CLSID_PropertyEditorLType CLSID_GcPePropertyEditorLType
#define CLSID_PropertyEditorNumeric CLSID_GcPePropertyEditorNumeric
#define CLSID_PropertyEditorBool CLSID_GcPePropertyEditorBool


extern RPC_IF_HANDLE __MIDL_itf_gcpexctl_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_gcpexctl_0000_0000_v0_0_s_ifspec;


#ifndef __GcPEXCtlLib_LIBRARY_DEFINED__
#define __GcPEXCtlLib_LIBRARY_DEFINED__

/* library GcPEXCtlLib */
/* [helpstring][lcid][version][uuid] */ 


EXTERN_C const IID LIBID_GcPEXCtlLib;

#ifndef __IGcPeNumericEditor_INTERFACE_DEFINED__
#define __IGcPeNumericEditor_INTERFACE_DEFINED__

/* interface IGcPeNumericEditor */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IGcPeNumericEditor;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CAAC1FA9-D23B-4D56-837C-5802677F0AE8")
    IGcPeNumericEditor : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetNumericDataType( 
            /* [in] */ GcPeNumericType dataType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IGcPeNumericEditorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGcPeNumericEditor * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGcPeNumericEditor * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGcPeNumericEditor * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetNumericDataType )( 
            IGcPeNumericEditor * This,
            /* [in] */ GcPeNumericType dataType);
        
        END_INTERFACE
    } IGcPeNumericEditorVtbl;

    interface IGcPeNumericEditor
    {
        CONST_VTBL struct IGcPeNumericEditorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGcPeNumericEditor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGcPeNumericEditor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGcPeNumericEditor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IGcPeNumericEditor_SetNumericDataType(This,dataType)	\
    ( (This)->lpVtbl -> SetNumericDataType(This,dataType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IGcPeNumericEditor_INTERFACE_DEFINED__ */


#ifndef __IGcPeVariantCtrl_INTERFACE_DEFINED__
#define __IGcPeVariantCtrl_INTERFACE_DEFINED__

/* interface IGcPeVariantCtrl */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IGcPeVariantCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1BF2F866-38B3-485E-A74E-4008204C28AD")
    IGcPeVariantCtrl : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetDwCookies( 
            /* [in] */ VARIANT cookieArray) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetGroupOffset( 
            /* [in] */ unsigned long dwOffset) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetElementCount( 
            /* [in] */ unsigned long elemCount) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IGcPeVariantCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGcPeVariantCtrl * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGcPeVariantCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGcPeVariantCtrl * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetDwCookies )( 
            IGcPeVariantCtrl * This,
            /* [in] */ VARIANT cookieArray);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetGroupOffset )( 
            IGcPeVariantCtrl * This,
            /* [in] */ unsigned long dwOffset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetElementCount )( 
            IGcPeVariantCtrl * This,
            /* [in] */ unsigned long elemCount);
        
        END_INTERFACE
    } IGcPeVariantCtrlVtbl;

    interface IGcPeVariantCtrl
    {
        CONST_VTBL struct IGcPeVariantCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGcPeVariantCtrl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGcPeVariantCtrl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGcPeVariantCtrl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IGcPeVariantCtrl_SetDwCookies(This,cookieArray)	\
    ( (This)->lpVtbl -> SetDwCookies(This,cookieArray) ) 

#define IGcPeVariantCtrl_SetGroupOffset(This,dwOffset)	\
    ( (This)->lpVtbl -> SetGroupOffset(This,dwOffset) ) 

#define IGcPeVariantCtrl_SetElementCount(This,elemCount)	\
    ( (This)->lpVtbl -> SetElementCount(This,elemCount) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IGcPeVariantCtrl_INTERFACE_DEFINED__ */


#ifndef __IGcPeColorCtrl_INTERFACE_DEFINED__
#define __IGcPeColorCtrl_INTERFACE_DEFINED__

/* interface IGcPeColorCtrl */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IGcPeColorCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FF47FAA5-7FDE-4868-8A4A-11BB32155D72")
    IGcPeColorCtrl : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetNoMetaColor( 
            /* [in] */ VARIANT_BOOL bNoMetaColors) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetAllowNoneColor( 
            /* [in] */ VARIANT_BOOL bAllowNone) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetFixedForeground( 
            /* [in] */ VARIANT_BOOL bFixedForeground) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IGcPeColorCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGcPeColorCtrl * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGcPeColorCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGcPeColorCtrl * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetNoMetaColor )( 
            IGcPeColorCtrl * This,
            /* [in] */ VARIANT_BOOL bNoMetaColors);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetAllowNoneColor )( 
            IGcPeColorCtrl * This,
            /* [in] */ VARIANT_BOOL bAllowNone);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetFixedForeground )( 
            IGcPeColorCtrl * This,
            /* [in] */ VARIANT_BOOL bFixedForeground);
        
        END_INTERFACE
    } IGcPeColorCtrlVtbl;

    interface IGcPeColorCtrl
    {
        CONST_VTBL struct IGcPeColorCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGcPeColorCtrl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGcPeColorCtrl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGcPeColorCtrl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IGcPeColorCtrl_SetNoMetaColor(This,bNoMetaColors)	\
    ( (This)->lpVtbl -> SetNoMetaColor(This,bNoMetaColors) ) 

#define IGcPeColorCtrl_SetAllowNoneColor(This,bAllowNone)	\
    ( (This)->lpVtbl -> SetAllowNoneColor(This,bAllowNone) ) 

#define IGcPeColorCtrl_SetFixedForeground(This,bFixedForeground)	\
    ( (This)->lpVtbl -> SetFixedForeground(This,bFixedForeground) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IGcPeColorCtrl_INTERFACE_DEFINED__ */


#ifndef __IGcPeSpinCtrl_INTERFACE_DEFINED__
#define __IGcPeSpinCtrl_INTERFACE_DEFINED__

/* interface IGcPeSpinCtrl */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IGcPeSpinCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6E0F4C85-DEF7-42EE-97E8-2A155E770E34")
    IGcPeSpinCtrl : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetControls( 
            /* [in] */ VARIANT varControlsIUnkArray) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IGcPeSpinCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGcPeSpinCtrl * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGcPeSpinCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGcPeSpinCtrl * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetControls )( 
            IGcPeSpinCtrl * This,
            /* [in] */ VARIANT varControlsIUnkArray);
        
        END_INTERFACE
    } IGcPeSpinCtrlVtbl;

    interface IGcPeSpinCtrl
    {
        CONST_VTBL struct IGcPeSpinCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGcPeSpinCtrl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGcPeSpinCtrl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGcPeSpinCtrl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IGcPeSpinCtrl_SetControls(This,varControlsIUnkArray)	\
    ( (This)->lpVtbl -> SetControls(This,varControlsIUnkArray) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IGcPeSpinCtrl_INTERFACE_DEFINED__ */


#ifndef __IGcPeNoPickVariantRW_INTERFACE_DEFINED__
#define __IGcPeNoPickVariantRW_INTERFACE_DEFINED__

/* interface IGcPeNoPickVariantRW */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IGcPeNoPickVariantRW;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9FA50A67-2106-43F2-A2C7-EC1880768F4B")
    IGcPeNoPickVariantRW : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetAlwaysRW( 
            /* [in] */ VARIANT_BOOL bIsAlwaysRW) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IGcPeNoPickVariantRWVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGcPeNoPickVariantRW * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGcPeNoPickVariantRW * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGcPeNoPickVariantRW * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetAlwaysRW )( 
            IGcPeNoPickVariantRW * This,
            /* [in] */ VARIANT_BOOL bIsAlwaysRW);
        
        END_INTERFACE
    } IGcPeNoPickVariantRWVtbl;

    interface IGcPeNoPickVariantRW
    {
        CONST_VTBL struct IGcPeNoPickVariantRWVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGcPeNoPickVariantRW_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGcPeNoPickVariantRW_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGcPeNoPickVariantRW_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IGcPeNoPickVariantRW_SetAlwaysRW(This,bIsAlwaysRW)	\
    ( (This)->lpVtbl -> SetAlwaysRW(This,bIsAlwaysRW) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IGcPeNoPickVariantRW_INTERFACE_DEFINED__ */


#ifndef __IGcPeButtonEditCtrl_INTERFACE_DEFINED__
#define __IGcPeButtonEditCtrl_INTERFACE_DEFINED__

/* interface IGcPeButtonEditCtrl */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IGcPeButtonEditCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9FC3E27E-3DB3-4E6A-B207-EFA78B5FB2EE")
    IGcPeButtonEditCtrl : public IUnknown
    {
    public:
        virtual /* [helpstring][requestedit][bindable][propput][id] */ HRESULT STDMETHODCALLTYPE put_DefaultPicture( 
            /* [in] */ IUnknown *pIPicture) = 0;
        
        virtual /* [helpstring][requestedit][bindable][propget][id] */ HRESULT STDMETHODCALLTYPE get_DefaultPicture( 
            /* [retval][out] */ IUnknown **pIPicture) = 0;
        
        virtual /* [helpstring][requestedit][bindable][propput][id] */ HRESULT STDMETHODCALLTYPE put_DisabledPicture( 
            /* [in] */ IUnknown *pIPicture) = 0;
        
        virtual /* [helpstring][requestedit][bindable][propget][id] */ HRESULT STDMETHODCALLTYPE get_DisabledPicture( 
            /* [retval][out] */ IUnknown **pIPicture) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IGcPeButtonEditCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGcPeButtonEditCtrl * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGcPeButtonEditCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGcPeButtonEditCtrl * This);
        
        /* [helpstring][requestedit][bindable][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DefaultPicture )( 
            IGcPeButtonEditCtrl * This,
            /* [in] */ IUnknown *pIPicture);
        
        /* [helpstring][requestedit][bindable][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DefaultPicture )( 
            IGcPeButtonEditCtrl * This,
            /* [retval][out] */ IUnknown **pIPicture);
        
        /* [helpstring][requestedit][bindable][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DisabledPicture )( 
            IGcPeButtonEditCtrl * This,
            /* [in] */ IUnknown *pIPicture);
        
        /* [helpstring][requestedit][bindable][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisabledPicture )( 
            IGcPeButtonEditCtrl * This,
            /* [retval][out] */ IUnknown **pIPicture);
        
        END_INTERFACE
    } IGcPeButtonEditCtrlVtbl;

    interface IGcPeButtonEditCtrl
    {
        CONST_VTBL struct IGcPeButtonEditCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGcPeButtonEditCtrl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGcPeButtonEditCtrl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGcPeButtonEditCtrl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IGcPeButtonEditCtrl_put_DefaultPicture(This,pIPicture)	\
    ( (This)->lpVtbl -> put_DefaultPicture(This,pIPicture) ) 

#define IGcPeButtonEditCtrl_get_DefaultPicture(This,pIPicture)	\
    ( (This)->lpVtbl -> get_DefaultPicture(This,pIPicture) ) 

#define IGcPeButtonEditCtrl_put_DisabledPicture(This,pIPicture)	\
    ( (This)->lpVtbl -> put_DisabledPicture(This,pIPicture) ) 

#define IGcPeButtonEditCtrl_get_DisabledPicture(This,pIPicture)	\
    ( (This)->lpVtbl -> get_DisabledPicture(This,pIPicture) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IGcPeButtonEditCtrl_INTERFACE_DEFINED__ */


#ifndef __IGcPeButtonPicture_INTERFACE_DEFINED__
#define __IGcPeButtonPicture_INTERFACE_DEFINED__

/* interface IGcPeButtonPicture */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IGcPeButtonPicture;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F5A191EF-C9A2-41DA-8352-1BFB8A17B27E")
    IGcPeButtonPicture : public IUnknown
    {
    public:
        virtual /* [helpstring][requestedit][bindable][propput][id] */ HRESULT STDMETHODCALLTYPE put_DefaultPicture( 
            /* [in] */ IUnknown *pIPicture) = 0;
        
        virtual /* [helpstring][requestedit][bindable][propget][id] */ HRESULT STDMETHODCALLTYPE get_DefaultPicture( 
            /* [retval][out] */ IUnknown **pIPicture) = 0;
        
        virtual /* [helpstring][requestedit][bindable][propput][id] */ HRESULT STDMETHODCALLTYPE put_DisabledPicture( 
            /* [in] */ IUnknown *pIPicture) = 0;
        
        virtual /* [helpstring][requestedit][bindable][propget][id] */ HRESULT STDMETHODCALLTYPE get_DisabledPicture( 
            /* [retval][out] */ IUnknown **pIPicture) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IGcPeButtonPictureVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGcPeButtonPicture * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGcPeButtonPicture * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGcPeButtonPicture * This);
        
        /* [helpstring][requestedit][bindable][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DefaultPicture )( 
            IGcPeButtonPicture * This,
            /* [in] */ IUnknown *pIPicture);
        
        /* [helpstring][requestedit][bindable][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DefaultPicture )( 
            IGcPeButtonPicture * This,
            /* [retval][out] */ IUnknown **pIPicture);
        
        /* [helpstring][requestedit][bindable][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DisabledPicture )( 
            IGcPeButtonPicture * This,
            /* [in] */ IUnknown *pIPicture);
        
        /* [helpstring][requestedit][bindable][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisabledPicture )( 
            IGcPeButtonPicture * This,
            /* [retval][out] */ IUnknown **pIPicture);
        
        END_INTERFACE
    } IGcPeButtonPictureVtbl;

    interface IGcPeButtonPicture
    {
        CONST_VTBL struct IGcPeButtonPictureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGcPeButtonPicture_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGcPeButtonPicture_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGcPeButtonPicture_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IGcPeButtonPicture_put_DefaultPicture(This,pIPicture)	\
    ( (This)->lpVtbl -> put_DefaultPicture(This,pIPicture) ) 

#define IGcPeButtonPicture_get_DefaultPicture(This,pIPicture)	\
    ( (This)->lpVtbl -> get_DefaultPicture(This,pIPicture) ) 

#define IGcPeButtonPicture_put_DisabledPicture(This,pIPicture)	\
    ( (This)->lpVtbl -> put_DisabledPicture(This,pIPicture) ) 

#define IGcPeButtonPicture_get_DisabledPicture(This,pIPicture)	\
    ( (This)->lpVtbl -> get_DisabledPicture(This,pIPicture) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IGcPeButtonPicture_INTERFACE_DEFINED__ */


#ifndef __IGcPePick2PointsCtrl_INTERFACE_DEFINED__
#define __IGcPePick2PointsCtrl_INTERFACE_DEFINED__

/* interface IGcPePick2PointsCtrl */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IGcPePick2PointsCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B4E3C323-7520-4B5A-9E81-F6B72464482D")
    IGcPePick2PointsCtrl : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetPrompts( 
            /* [in] */ BSTR prompt1,
            /* [in] */ BSTR prompt2) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IGcPePick2PointsCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGcPePick2PointsCtrl * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGcPePick2PointsCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGcPePick2PointsCtrl * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetPrompts )( 
            IGcPePick2PointsCtrl * This,
            /* [in] */ BSTR prompt1,
            /* [in] */ BSTR prompt2);
        
        END_INTERFACE
    } IGcPePick2PointsCtrlVtbl;

    interface IGcPePick2PointsCtrl
    {
        CONST_VTBL struct IGcPePick2PointsCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGcPePick2PointsCtrl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGcPePick2PointsCtrl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGcPePick2PointsCtrl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IGcPePick2PointsCtrl_SetPrompts(This,prompt1,prompt2)	\
    ( (This)->lpVtbl -> SetPrompts(This,prompt1,prompt2) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IGcPePick2PointsCtrl_INTERFACE_DEFINED__ */


#ifndef __IGcPeCalculatorCtrl_INTERFACE_DEFINED__
#define __IGcPeCalculatorCtrl_INTERFACE_DEFINED__

/* interface IGcPeCalculatorCtrl */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IGcPeCalculatorCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2A8791F4-87D7-46FD-BADF-AA55B107FA8C")
    IGcPeCalculatorCtrl : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetCalculatorMode( 
            /* [in] */ VARIANT_BOOL mode) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IGcPeCalculatorCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGcPeCalculatorCtrl * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGcPeCalculatorCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGcPeCalculatorCtrl * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetCalculatorMode )( 
            IGcPeCalculatorCtrl * This,
            /* [in] */ VARIANT_BOOL mode);
        
        END_INTERFACE
    } IGcPeCalculatorCtrlVtbl;

    interface IGcPeCalculatorCtrl
    {
        CONST_VTBL struct IGcPeCalculatorCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGcPeCalculatorCtrl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGcPeCalculatorCtrl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGcPeCalculatorCtrl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IGcPeCalculatorCtrl_SetCalculatorMode(This,mode)	\
    ( (This)->lpVtbl -> SetCalculatorMode(This,mode) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IGcPeCalculatorCtrl_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_GcPePropertyEditorText;

#ifdef __cplusplus

class DECLSPEC_UUID("F5199604-9405-409A-BA59-E5D33F1E606E")
GcPePropertyEditorText;
#endif

EXTERN_C const CLSID CLSID_GcPePropertyEditorLWeight;

#ifdef __cplusplus

class DECLSPEC_UUID("3C0EDFBD-3D66-4E7A-94B3-40FCBFF32E30")
GcPePropertyEditorLWeight;
#endif

EXTERN_C const CLSID CLSID_GcPePropertyEditorLayer;

#ifdef __cplusplus

class DECLSPEC_UUID("D2FE9FA5-7CB6-472C-960F-78865CD0B8D5")
GcPePropertyEditorLayer;
#endif

EXTERN_C const CLSID CLSID_GcPePropertyEditorMaterial;

#ifdef __cplusplus

class DECLSPEC_UUID("53818BC1-645B-4F28-B571-B1EC773ED4EF")
GcPePropertyEditorMaterial;
#endif

EXTERN_C const CLSID CLSID_GcPePropertyEditorColor;

#ifdef __cplusplus

class DECLSPEC_UUID("3338C6B1-3305-4F2D-B46E-D05901EA22B7")
GcPePropertyEditorColor;
#endif

EXTERN_C const CLSID CLSID_GcPePropertyEditorLType;

#ifdef __cplusplus

class DECLSPEC_UUID("19006494-0631-4052-B77B-896154F06770")
GcPePropertyEditorLType;
#endif

EXTERN_C const CLSID CLSID_GcPePropertyEditorNumeric;

#ifdef __cplusplus

class DECLSPEC_UUID("DA9EE693-FECA-470B-8791-05CE3C76813E")
GcPePropertyEditorNumeric;
#endif

EXTERN_C const CLSID CLSID_GcPePropertyEditorBool;

#ifdef __cplusplus

class DECLSPEC_UUID("16E5FE6C-0C90-418B-AD8F-B66ACDB91D58")
GcPePropertyEditorBool;
#endif
#endif /* __GcPEXCtlLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


