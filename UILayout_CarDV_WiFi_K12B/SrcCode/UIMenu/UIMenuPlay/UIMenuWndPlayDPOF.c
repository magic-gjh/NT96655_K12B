//This source code is generated by UI Designer Studio.

#include "UIFramework.h"
#include "UIFrameworkExt.h"
#include "UIGraphics.h"
#include "NVTToolCommand.h"
#include "UIMenuWndPlayDPOFRes.c"
#include "UIMenuWndPlayDPOF.h"
#include "PrjCfg.h"

//---------------------UIMenuWndPlayDPOFCtrl Debug Definition -----------------------------
#define _UIMENUWNDPLAYDPOF_ERROR_MSG        1
#define _UIMENUWNDPLAYDPOF_TRACE_MSG        0

#if (_UIMENUWNDPLAYDPOF_ERROR_MSG&(PRJ_DBG_LVL>=PRJ_DBG_LVL_ERR))
#define UIMenuWndPlayDPOFErrMsg(...)            debug_msg ("^R UIMenuWndPlayDPOF: "__VA_ARGS__)
#else
#define UIMenuWndPlayDPOFErrMsg(...)
#endif

#if (_UIMENUWNDPLAYDPOF_TRACE_MSG&(PRJ_DBG_LVL>=PRJ_DBG_LVL_TRC))
#define UIMenuWndPlayDPOFTraceMsg(...)          debug_msg ("^B UIMenuWndPlayDPOF: "__VA_ARGS__)
#else
#define UIMenuWndPlayDPOFTraceMsg(...)
#endif

//---------------------UIMenuWndPlayDPOFCtrl Global Variables -----------------------------

//---------------------UIMenuWndPlayDPOFCtrl Prototype Declaration  -----------------------

//---------------------UIMenuWndPlayDPOFCtrl Public API  ----------------------------------

//---------------------UIMenuWndPlayDPOFCtrl Private API  ---------------------------------
//---------------------UIMenuWndPlayDPOFCtrl Control List---------------------------
CTRL_LIST_BEGIN(UIMenuWndPlayDPOF)
CTRL_LIST_ITEM(UIMenuWndPlayDPOF_Panel)
CTRL_LIST_END

//----------------------UIMenuWndPlayDPOFCtrl Event---------------------------
INT32 UIMenuWndPlayDPOF_OnOpen(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndPlayDPOF_OnClose(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndPlayDPOF_OnKeyLeft(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndPlayDPOF_OnKeyMenu(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndPlayDPOF_OnKeyMode(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndPlayDPOF_OnKeyShutter2(VControl *, UINT32, UINT32 *);
EVENT_BEGIN(UIMenuWndPlayDPOF)
EVENT_ITEM(NVTEVT_OPEN_WINDOW,UIMenuWndPlayDPOF_OnOpen)
EVENT_ITEM(NVTEVT_CLOSE_WINDOW,UIMenuWndPlayDPOF_OnClose)
EVENT_ITEM(NVTEVT_KEY_LEFT,UIMenuWndPlayDPOF_OnKeyLeft)
EVENT_ITEM(NVTEVT_KEY_MENU,UIMenuWndPlayDPOF_OnKeyMenu)
EVENT_ITEM(NVTEVT_KEY_MODE,UIMenuWndPlayDPOF_OnKeyMode)
EVENT_ITEM(NVTEVT_KEY_SHUTTER2,UIMenuWndPlayDPOF_OnKeyShutter2)
EVENT_END

INT32 UIMenuWndPlayDPOF_OnOpen(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_DefaultEvent(pCtrl,NVTEVT_OPEN_WINDOW,paramNum,paramArray);
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndPlayDPOF_OnClose(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_DefaultEvent(pCtrl,NVTEVT_CLOSE_WINDOW,paramNum,paramArray);
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndPlayDPOF_OnKeyLeft(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndPlayDPOF_OnKeyMenu(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndPlayDPOF_OnKeyMode(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndPlayDPOF_OnKeyShutter2(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    return NVTEVT_CONSUME;
}
//---------------------UIMenuWndPlayDPOF_PanelCtrl Control List---------------------------
CTRL_LIST_BEGIN(UIMenuWndPlayDPOF_Panel)
CTRL_LIST_ITEM(UIMenuWndPlayDPOF_Menu)
CTRL_LIST_END

//----------------------UIMenuWndPlayDPOF_PanelCtrl Event---------------------------
EVENT_BEGIN(UIMenuWndPlayDPOF_Panel)
EVENT_END

//----------------------UIMenuWndPlayDPOF_MenuCtrl Event---------------------------
INT32 UIMenuWndPlayDPOF_Menu_OnKeyUp(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndPlayDPOF_Menu_OnKeyDown(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndPlayDPOF_Menu_OnKeyEnter(VControl *, UINT32, UINT32 *);
EVENT_BEGIN(UIMenuWndPlayDPOF_Menu)
EVENT_ITEM(NVTEVT_KEY_UP,UIMenuWndPlayDPOF_Menu_OnKeyUp)
EVENT_ITEM(NVTEVT_KEY_DOWN,UIMenuWndPlayDPOF_Menu_OnKeyDown)
EVENT_ITEM(NVTEVT_KEY_ENTER,UIMenuWndPlayDPOF_Menu_OnKeyEnter)
EVENT_END

INT32 UIMenuWndPlayDPOF_Menu_OnKeyUp(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_SendEvent(pCtrl,NVTEVT_PREVIOUS_ITEM,0);
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndPlayDPOF_Menu_OnKeyDown(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_SendEvent(pCtrl,NVTEVT_NEXT_ITEM,0);
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndPlayDPOF_Menu_OnKeyEnter(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    return NVTEVT_CONSUME;
}
