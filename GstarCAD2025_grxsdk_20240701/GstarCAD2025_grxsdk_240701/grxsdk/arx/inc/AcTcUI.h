/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#pragma once
#include "../../inc/GcTcUI.h"
#include "adui.h"
#include "AdAChar.h"

#ifndef AcTcCatalogItemArray
#define AcTcCatalogItemArray GcTcCatalogItemArray
#endif

#ifndef AcTcStockToolArray
#define AcTcStockToolArray GcTcStockToolArray
#endif

#ifndef AcTcCatalogArray
#define AcTcCatalogArray GcTcCatalogArray
#endif

#ifndef AcTcUiToolPaletteSetArray
#define AcTcUiToolPaletteSetArray GcTcUiToolPaletteSetArray
#endif

#ifndef AcTcUiToolPaletteArray
#define AcTcUiToolPaletteArray GcTcUiToolPaletteArray
#endif

#ifndef AcTcUiCatalogViewArray
#define AcTcUiCatalogViewArray GcTcUiCatalogViewArray
#endif

#ifndef ACTCUI_DRAGFORMAT_CUSTOM
#define ACTCUI_DRAGFORMAT_CUSTOM GCTCUI_DRAGFORMAT_CUSTOM
#endif

#ifndef ACTCUI_DRAGFORMAT_IDROP
#define ACTCUI_DRAGFORMAT_IDROP GCTCUI_DRAGFORMAT_IDROP
#endif

#ifndef ACTCUI_DRAGFORMAT_HDROP
#define ACTCUI_DRAGFORMAT_HDROP GCTCUI_DRAGFORMAT_HDROP
#endif

#ifndef ACTCUI_CNPS_NOCREATEWINDOW
#define ACTCUI_CNPS_NOCREATEWINDOW GCTCUI_CNPS_NOCREATEWINDOW
#endif

#ifndef ACTCUI_CNPS_NOADD
#define ACTCUI_CNPS_NOADD GCTCUI_CNPS_NOADD
#endif

#ifndef ACTCUI_CNPS_CREATEHIDDEN
#define ACTCUI_CNPS_CREATEHIDDEN GCTCUI_CNPS_CREATEHIDDEN
#endif

#ifndef ACTCUI_PI_SHOW_PROGRESS
#define ACTCUI_PI_SHOW_PROGRESS GCTCUI_PI_SHOW_PROGRESS
#endif

#ifndef ACTCUI_PI_USE_NEW_IDS
#define ACTCUI_PI_USE_NEW_IDS GCTCUI_PI_USE_NEW_IDS
#endif

#ifndef ACTCUI_PI_BREAK_SOURCE_LINK
#define ACTCUI_PI_BREAK_SOURCE_LINK GCTCUI_PI_BREAK_SOURCE_LINK
#endif

#ifndef ACTCUI_PI_NOTIFY_TOOLS
#define ACTCUI_PI_NOTIFY_TOOLS GCTCUI_PI_NOTIFY_TOOLS
#endif

#ifndef ACTCUI_DRAG_HEADER
#define ACTCUI_DRAG_HEADER GCTCUI_DRAG_HEADER
#endif

#ifndef AcTcUiInitialize
#define AcTcUiInitialize GcTcUiInitialize
#endif

#ifndef AcTcUiGetManager
#define AcTcUiGetManager GcTcUiGetManager
#endif

#ifndef AcTcUiCopyItems
#define AcTcUiCopyItems GcTcUiCopyItems
#endif

#ifndef AcTcUiGetDragInfo
#define AcTcUiGetDragInfo GcTcUiGetDragInfo
#endif

#ifndef AcTcUiPasteItems
#define AcTcUiPasteItems GcTcUiPasteItems
#endif

#ifndef AcTcUiGetToolPaletteWindow
#define AcTcUiGetToolPaletteWindow GcTcUiGetToolPaletteWindow
#endif

#ifndef AcTcUiFilterShapesDialog
#define AcTcUiFilterShapesDialog GcTcUiFilterShapesDialog
#endif

#ifndef CF_ACTC_CATALOG_ITEM_17_11
#define CF_ACTC_CATALOG_ITEM_17_11 CF_GCTC_CATALOG_ITEM_17_11
#endif

#ifndef CF_ACTCUI_CATALOG_ITEM_HEADER_17_11
#define CF_ACTCUI_CATALOG_ITEM_HEADER_17_11 CF_GCTCUI_CATALOG_ITEM_HEADER_17_11
#endif

#ifndef CF_ACTC_CATALOG_ITEM_17_1
#define CF_ACTC_CATALOG_ITEM_17_1 CF_GCTC_CATALOG_ITEM_17_1
#endif

#ifndef CF_ACTCUI_CATALOG_ITEM_HEADER_17_1
#define CF_ACTCUI_CATALOG_ITEM_HEADER_17_1 CF_GCTCUI_CATALOG_ITEM_HEADER_17_1
#endif

#ifndef CF_ACTC_CATALOG_ITEM_16_1
#define CF_ACTC_CATALOG_ITEM_16_1 CF_GCTC_CATALOG_ITEM_16_1
#endif

#ifndef CF_ACTCUI_CATALOG_ITEM_HEADER_16_1
#define CF_ACTCUI_CATALOG_ITEM_HEADER_16_1 CF_GCTCUI_CATALOG_ITEM_HEADER_16_1
#endif

#ifndef CF_ACTCUI_CATALOG_ITEM
#define CF_ACTCUI_CATALOG_ITEM CF_GCTCUI_CATALOG_ITEM
#endif

#ifndef CF_ACTCUI_CATALOG_ITEM_HEADER
#define CF_ACTCUI_CATALOG_ITEM_HEADER CF_GCTCUI_CATALOG_ITEM_HEADER
#endif

#ifndef CF_IDROP_ACTCUI_TOOL
#define CF_IDROP_ACTCUI_TOOL CF_IDROP_GCTCUI_TOOL
#endif

#ifndef CF_IDROP_ACTCUI_PALETTE
#define CF_IDROP_ACTCUI_PALETTE CF_IDROP_GCTCUI_PALETTE
#endif

#ifndef CF_IDROP_ACTCUI_PACKAGE
#define CF_IDROP_ACTCUI_PACKAGE CF_IDROP_GCTCUI_PACKAGE
#endif

#ifndef CF_IDROP_ACTCUI_CATEGORY
#define CF_IDROP_ACTCUI_CATEGORY CF_IDROP_GCTCUI_CATEGORY
#endif

#ifndef CF_IDROP_ACTCUI_CATALOG
#define CF_IDROP_ACTCUI_CATALOG CF_IDROP_GCTCUI_CATALOG
#endif

#ifndef CF_IDROP_ACTCUI_STOCKTOOL
#define CF_IDROP_ACTCUI_STOCKTOOL CF_IDROP_GCTCUI_STOCKTOOL
#endif

#ifndef CF_ACTCUI_TOOLBAR_ITEM
#define CF_ACTCUI_TOOLBAR_ITEM CF_GCTCUI_TOOLBAR_ITEM
#endif

#ifndef AcTcCatalogItem
#define AcTcCatalogItem GcTcCatalogItem
#endif

#ifndef mbAutoCADSource
#define mbAutoCADSource mbGscadSource
#endif

#ifndef AcTcTool
#define AcTcTool GcTcTool
#endif

#ifndef CAcTcUiManager
#define CAcTcUiManager CGcTcUiManager
#endif

#ifndef CAcTcUiToolPaletteSet
#define CAcTcUiToolPaletteSet CGcTcUiToolPaletteSet
#endif

#ifndef CAcTcUiCatalogView
#define CAcTcUiCatalogView CGcTcUiCatalogView
#endif
