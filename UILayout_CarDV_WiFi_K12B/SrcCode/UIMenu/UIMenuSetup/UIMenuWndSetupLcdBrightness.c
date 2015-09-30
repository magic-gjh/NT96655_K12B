//This source code is generated by UI Designer Studio.

#include "UIFramework.h"
#include "UIFrameworkExt.h"
#include "UIGraphics.h"
#include "NVTToolCommand.h"
#include "UIMenuWndSetupLcdBrightnessRes.c"
#include "UIMenuWndSetupLcdBrightness.h"
#include "PrjCfg.h"

//---------------------UIMenuWndSetupLcdBrgihtnessCtrl Debug Definition -----------------------------
#define _UIMENUWNDSETUPLCDBRGIHTNESS_ERROR_MSG        1
#define _UIMENUWNDSETUPLCDBRGIHTNESS_TRACE_MSG        0

#if (_UIMENUWNDSETUPLCDBRGIHTNESS_ERROR_MSG&(PRJ_DBG_LVL>=PRJ_DBG_LVL_ERR))
#define UIMenuWndSetupLcdBrgihtnessErrMsg(...)            debug_msg ("^R UIMenuWndSetupLcdBrgihtness: "__VA_ARGS__)
#else
#define UIMenuWndSetupLcdBrgihtnessErrMsg(...)
#endif

#if (_UIMENUWNDSETUPLCDBRGIHTNESS_TRACE_MSG&(PRJ_DBG_LVL>=PRJ_DBG_LVL_TRC))
#define UIMenuWndSetupLcdBrgihtnessTraceMsg(...)          debug_msg ("^B UIMenuWndSetupLcdBrgihtness: "__VA_ARGS__)
#else
#define UIMenuWndSetupLcdBrgihtnessTraceMsg(...)
#endif

//---------------------UIMenuWndSetupLcdBrgihtnessCtrl Global Variables -----------------------------

//---------------------UIMenuWndSetupLcdBrgihtnessCtrl Prototype Declaration  -----------------------

//---------------------UIMenuWndSetupLcdBrgihtnessCtrl Public API  ----------------------------------

//---------------------UIMenuWndSetupLcdBrgihtnessCtrl Private API  ---------------------------------
//---------------------UIMenuWndSetupLcdBrgihtnessCtrl Control List---------------------------
CTRL_LIST_BEGIN(UIMenuWndSetupLcdBrgihtness)
CTRL_LIST_ITEM(UIMenuWndSetupLcdBrgihtness_SlideBar)
CTRL_LIST_ITEM(Arrow_Up)
CTRL_LIST_ITEM(Arrow_Down)
CTRL_LIST_END

//----------------------UIMenuWndSetupLcdBrgihtnessCtrl Event---------------------------
INT32 UIMenuWndSetupLcdBrgihtness_OnOpen(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndSetupLcdBrgihtness_OnClose(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndSetupLcdBrgihtness_OnKeyMenu(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndSetupLcdBrgihtness_OnKeyMode(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndSetupLcdBrgihtness_OnKeyShutter2(VControl *, UINT32, UINT32 *);
EVENT_BEGIN(UIMenuWndSetupLcdBrgihtness)
EVENT_ITEM(NVTEVT_OPEN_WINDOW,UIMenuWndSetupLcdBrgihtness_OnOpen)
EVENT_ITEM(NVTEVT_CLOSE_WINDOW,UIMenuWndSetupLcdBrgihtness_OnClose)
EVENT_ITEM(NVTEVT_KEY_MENU,UIMenuWndSetupLcdBrgihtness_OnKeyMenu)
EVENT_ITEM(NVTEVT_KEY_MODE,UIMenuWndSetupLcdBrgihtness_OnKeyMode)
EVENT_ITEM(NVTEVT_KEY_SHUTTER2,UIMenuWndSetupLcdBrgihtness_OnKeyShutter2)
EVENT_END

INT32 UIMenuWndSetupLcdBrgihtness_OnOpen(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_DefaultEvent(pCtrl,NVTEVT_OPEN_WINDOW,paramNum,paramArray);
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndSetupLcdBrgihtness_OnClose(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_DefaultEvent(pCtrl,NVTEVT_CLOSE_WINDOW,paramNum,paramArray);
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndSetupLcdBrgihtness_OnKeyMenu(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndSetupLcdBrgihtness_OnKeyMode(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndSetupLcdBrgihtness_OnKeyShutter2(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    return NVTEVT_CONSUME;
}
//----------------------UIMenuWndSetupLcdBrgihtness_SlideBarCtrl Event---------------------------
INT32 UIMenuWndSetupLcdBrgihtness_SlideBar_OnKeyLeft(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndSetupLcdBrgihtness_SlideBar_OnKeyRight(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndSetupLcdBrgihtness_SlideBar_OnKeyEnter(VControl *, UINT32, UINT32 *);
EVENT_BEGIN(UIMenuWndSetupLcdBrgihtness_SlideBar)
EVENT_ITEM(NVTEVT_KEY_LEFT,UIMenuWndSetupLcdBrgihtness_SlideBar_OnKeyLeft)
EVENT_ITEM(NVTEVT_KEY_RIGHT,UIMenuWndSetupLcdBrgihtness_SlideBar_OnKeyRight)
EVENT_ITEM(NVTEVT_KEY_ENTER,UIMenuWndSetupLcdBrgihtness_SlideBar_OnKeyEnter)
EVENT_END

INT32 UIMenuWndSetupLcdBrgihtness_SlideBar_OnKeyLeft(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_SendEvent(pCtrl,NVTEVT_PREVIOUS_STEP,0);
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndSetupLcdBrgihtness_SlideBar_OnKeyRight(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_SendEvent(pCtrl,NVTEVT_NEXT_STEP,0);
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndSetupLcdBrgihtness_SlideBar_OnKeyEnter(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    return NVTEVT_CONSUME;
}
//----------------------Arrow_UpCtrl Event---------------------------
EVENT_BEGIN(Arrow_Up)
EVENT_END

//----------------------Arrow_DownCtrl Event---------------------------
EVENT_BEGIN(Arrow_Down)
EVENT_END
