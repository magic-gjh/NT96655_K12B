//This source code is generated by UI Designer Studio.

#include "UIFramework.h"
#include "UIFrameworkExt.h"
#include "UIGraphics.h"
#include "NVTToolCommand.h"
#include "UIMenuWndPrint_CropRes.c"
#include "UIMenuWndPrint_Crop.h"
#include "PrjCfg.h"

//---------------------UIMenuWndPrint_CropCtrl Debug Definition -----------------------------
#define _UIMENUWNDPRINT_CROP_ERROR_MSG        1
#define _UIMENUWNDPRINT_CROP_TRACE_MSG        0

#if (_UIMENUWNDPRINT_CROP_ERROR_MSG&(PRJ_DBG_LVL>=PRJ_DBG_LVL_ERR))
#define UIMenuWndPrint_CropErrMsg(...)            debug_msg ("^R UIMenuWndPrint_Crop: "__VA_ARGS__)
#else
#define UIMenuWndPrint_CropErrMsg(...)
#endif

#if (_UIMENUWNDPRINT_CROP_TRACE_MSG&(PRJ_DBG_LVL>=PRJ_DBG_LVL_TRC))
#define UIMenuWndPrint_CropTraceMsg(...)          debug_msg ("^B UIMenuWndPrint_Crop: "__VA_ARGS__)
#else
#define UIMenuWndPrint_CropTraceMsg(...)
#endif

//---------------------UIMenuWndPrint_CropCtrl Global Variables -----------------------------

//---------------------UIMenuWndPrint_CropCtrl Prototype Declaration  -----------------------

//---------------------UIMenuWndPrint_CropCtrl Public API  ----------------------------------

//---------------------UIMenuWndPrint_CropCtrl Private API  ---------------------------------
//---------------------UIMenuWndPrint_CropCtrl Control List---------------------------
CTRL_LIST_BEGIN(UIMenuWndPrint_Crop)
CTRL_LIST_ITEM(UIMenuWndPrint_Crop_Title_Text_Status)
CTRL_LIST_ITEM(UIMenuWndPrint_Crop_End_Dir_Menu_Panel)
CTRL_LIST_END

//----------------------UIMenuWndPrint_CropCtrl Event---------------------------
INT32 UIMenuWndPrint_Crop_OnOpen(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndPrint_Crop_OnClose(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndPrint_Crop_OnKeyLeft(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndPrint_Crop_OnKeyRight(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndPrint_Crop_OnKeyUp(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndPrint_Crop_OnKeyDown(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndPrint_Crop_OnKeyEnter(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndPrint_Crop_OnKeyMenu(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndPrint_Crop_OnPrintDpsEvent(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndPrint_Crop_OnKeyZoomout(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndPrint_Crop_OnKeyZoomin(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndPrint_Crop_OnKeyShutter2(VControl *, UINT32, UINT32 *);
EVENT_BEGIN(UIMenuWndPrint_Crop)
EVENT_ITEM(NVTEVT_OPEN_WINDOW,UIMenuWndPrint_Crop_OnOpen)
EVENT_ITEM(NVTEVT_CLOSE_WINDOW,UIMenuWndPrint_Crop_OnClose)
EVENT_ITEM(NVTEVT_KEY_LEFT,UIMenuWndPrint_Crop_OnKeyLeft)
EVENT_ITEM(NVTEVT_KEY_RIGHT,UIMenuWndPrint_Crop_OnKeyRight)
EVENT_ITEM(NVTEVT_KEY_UP,UIMenuWndPrint_Crop_OnKeyUp)
EVENT_ITEM(NVTEVT_KEY_DOWN,UIMenuWndPrint_Crop_OnKeyDown)
EVENT_ITEM(NVTEVT_KEY_ENTER,UIMenuWndPrint_Crop_OnKeyEnter)
EVENT_ITEM(NVTEVT_KEY_MENU,UIMenuWndPrint_Crop_OnKeyMenu)
EVENT_ITEM(NVTEVT_CB_PRINT_DPS_EVENT,UIMenuWndPrint_Crop_OnPrintDpsEvent)
EVENT_ITEM(NVTEVT_KEY_ZOOMOUT,UIMenuWndPrint_Crop_OnKeyZoomout)
EVENT_ITEM(NVTEVT_KEY_ZOOMIN,UIMenuWndPrint_Crop_OnKeyZoomin)
EVENT_ITEM(NVTEVT_KEY_SHUTTER2,UIMenuWndPrint_Crop_OnKeyShutter2)
EVENT_END

INT32 UIMenuWndPrint_Crop_OnOpen(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_DefaultEvent(pCtrl,NVTEVT_OPEN_WINDOW,paramNum,paramArray);
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndPrint_Crop_OnClose(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_DefaultEvent(pCtrl,NVTEVT_CLOSE_WINDOW,paramNum,paramArray);
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndPrint_Crop_OnKeyLeft(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_DefaultEvent(pCtrl,NVTEVT_KEY_LEFT,paramNum,paramArray);
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndPrint_Crop_OnKeyRight(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_DefaultEvent(pCtrl,NVTEVT_KEY_RIGHT,paramNum,paramArray);
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndPrint_Crop_OnKeyUp(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_DefaultEvent(pCtrl,NVTEVT_KEY_UP,paramNum,paramArray);
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndPrint_Crop_OnKeyDown(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_DefaultEvent(pCtrl,NVTEVT_KEY_DOWN,paramNum,paramArray);
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndPrint_Crop_OnKeyEnter(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_DefaultEvent(pCtrl,NVTEVT_KEY_ENTER,paramNum,paramArray);
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndPrint_Crop_OnKeyMenu(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_DefaultEvent(pCtrl,NVTEVT_KEY_MENU,paramNum,paramArray);
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndPrint_Crop_OnPrintDpsEvent(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndPrint_Crop_OnKeyZoomout(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndPrint_Crop_OnKeyZoomin(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndPrint_Crop_OnKeyShutter2(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    return NVTEVT_CONSUME;
}
//----------------------UIMenuWndPrint_Crop_Title_Text_StatusCtrl Event---------------------------
EVENT_BEGIN(UIMenuWndPrint_Crop_Title_Text_Status)
EVENT_END

//---------------------UIMenuWndPrint_Crop_End_Dir_Menu_PanelCtrl Control List---------------------------
CTRL_LIST_BEGIN(UIMenuWndPrint_Crop_End_Dir_Menu_Panel)
CTRL_LIST_END

//----------------------UIMenuWndPrint_Crop_End_Dir_Menu_PanelCtrl Event---------------------------
EVENT_BEGIN(UIMenuWndPrint_Crop_End_Dir_Menu_Panel)
EVENT_END
