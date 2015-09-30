//This source code is generated by UI Designer Studio.

#include "UIFramework.h"
#include "UIFrameworkExt.h"
#include "UIGraphics.h"
#include "NVTToolCommand.h"
#include "UIFlowWndTouchTestRes.c"
#include "UIFlowWndTouchTest.h"
#include "PrjCfg.h"

//---------------------UIFlowWndTouchTestCtrl Debug Definition -----------------------------
#define _UIFLOWWNDTOUCHTEST_ERROR_MSG        1
#define _UIFLOWWNDTOUCHTEST_TRACE_MSG        0

#if (_UIFLOWWNDTOUCHTEST_ERROR_MSG&(PRJ_DBG_LVL>=PRJ_DBG_LVL_ERR))
#define UIFlowWndTouchTestErrMsg(...)            debug_msg ("^R UIFlowWndTouchTest: "__VA_ARGS__)
#else
#define UIFlowWndTouchTestErrMsg(...)
#endif

#if (_UIFLOWWNDTOUCHTEST_TRACE_MSG&(PRJ_DBG_LVL>=PRJ_DBG_LVL_TRC))
#define UIFlowWndTouchTestTraceMsg(...)          debug_msg ("^B UIFlowWndTouchTest: "__VA_ARGS__)
#else
#define UIFlowWndTouchTestTraceMsg(...)
#endif

//---------------------UIFlowWndTouchTestCtrl Global Variables -----------------------------

//---------------------UIFlowWndTouchTestCtrl Prototype Declaration  -----------------------

//---------------------UIFlowWndTouchTestCtrl Public API  ----------------------------------

//---------------------UIFlowWndTouchTestCtrl Private API  ---------------------------------
//---------------------UIFlowWndTouchTestCtrl Control List---------------------------
CTRL_LIST_BEGIN(UIFlowWndTouchTest)
CTRL_LIST_ITEM(UIFlowTouchTest_Panel)
CTRL_LIST_ITEM(UIFlowTouchTest_Menu)
CTRL_LIST_ITEM(UIFlowTouchTest_Status_Menu)
CTRL_LIST_ITEM(UIFlowTouchTest_Button_Up)
CTRL_LIST_ITEM(UIFlowTouchTest_Button_Down)
CTRL_LIST_ITEM(UIFlowTouchTest_Status)
CTRL_LIST_ITEM(UIFlowTouchTest_ScrollBar)
CTRL_LIST_END

//----------------------UIFlowWndTouchTestCtrl Event---------------------------
INT32 UIFlowWndTouchTest_OnOpen(VControl *, UINT32, UINT32 *);
INT32 UIFlowWndTouchTest_OnClose(VControl *, UINT32, UINT32 *);
EVENT_BEGIN(UIFlowWndTouchTest)
EVENT_ITEM(NVTEVT_OPEN_WINDOW,UIFlowWndTouchTest_OnOpen)
EVENT_ITEM(NVTEVT_CLOSE_WINDOW,UIFlowWndTouchTest_OnClose)
EVENT_END

INT32 UIFlowWndTouchTest_OnOpen(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_DefaultEvent(pCtrl,NVTEVT_OPEN_WINDOW,paramNum,paramArray);
    return NVTEVT_CONSUME;
}
INT32 UIFlowWndTouchTest_OnClose(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_DefaultEvent(pCtrl,NVTEVT_CLOSE_WINDOW,paramNum,paramArray);
    return NVTEVT_CONSUME;
}
//---------------------UIFlowTouchTest_PanelCtrl Control List---------------------------
CTRL_LIST_BEGIN(UIFlowTouchTest_Panel)
CTRL_LIST_END

//----------------------UIFlowTouchTest_PanelCtrl Event---------------------------
EVENT_BEGIN(UIFlowTouchTest_Panel)
EVENT_END

//----------------------UIFlowTouchTest_MenuCtrl Event---------------------------
INT32 UIFlowTouchTest_Menu_OnTouchPanelDoubleClick(VControl *, UINT32, UINT32 *);
EVENT_BEGIN(UIFlowTouchTest_Menu)
EVENT_ITEM(NVTEVT_DOUBLECLICK,UIFlowTouchTest_Menu_OnTouchPanelDoubleClick)
EVENT_END

INT32 UIFlowTouchTest_Menu_OnTouchPanelDoubleClick(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    return NVTEVT_CONSUME;
}
//----------------------UIFlowTouchTest_Status_MenuCtrl Event---------------------------
INT32 UIFlowTouchTest_Status_Menu_OnTouchPanelClick(VControl *, UINT32, UINT32 *);
EVENT_BEGIN(UIFlowTouchTest_Status_Menu)
EVENT_ITEM(NVTEVT_CLICK,UIFlowTouchTest_Status_Menu_OnTouchPanelClick)
EVENT_END

INT32 UIFlowTouchTest_Status_Menu_OnTouchPanelClick(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_SendEvent(pCtrl,NVTEVT_NEXT_ITEM,0);
    return NVTEVT_CONSUME;
}
//----------------------UIFlowTouchTest_Button_UpCtrl Event---------------------------
INT32 UIFlowTouchTest_Button_Up_OnTouchPanelPress(VControl *, UINT32, UINT32 *);
INT32 UIFlowTouchTest_Button_Up_OnTouchPanelMove(VControl *, UINT32, UINT32 *);
EVENT_BEGIN(UIFlowTouchTest_Button_Up)
EVENT_ITEM(NVTEVT_PRESS,UIFlowTouchTest_Button_Up_OnTouchPanelPress)
EVENT_ITEM(NVTEVT_MOVE,UIFlowTouchTest_Button_Up_OnTouchPanelMove)
EVENT_END

INT32 UIFlowTouchTest_Button_Up_OnTouchPanelPress(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_DefaultEvent(pCtrl,NVTEVT_PRESS,paramNum,paramArray);
    return NVTEVT_CONSUME;
}
INT32 UIFlowTouchTest_Button_Up_OnTouchPanelMove(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_DefaultEvent(pCtrl,NVTEVT_MOVE,paramNum,paramArray);
    return NVTEVT_CONSUME;
}
//----------------------UIFlowTouchTest_Button_DownCtrl Event---------------------------
INT32 UIFlowTouchTest_Button_Down_OnTouchPanelPress(VControl *, UINT32, UINT32 *);
INT32 UIFlowTouchTest_Button_Down_OnTouchPanelMove(VControl *, UINT32, UINT32 *);
EVENT_BEGIN(UIFlowTouchTest_Button_Down)
EVENT_ITEM(NVTEVT_PRESS,UIFlowTouchTest_Button_Down_OnTouchPanelPress)
EVENT_ITEM(NVTEVT_MOVE,UIFlowTouchTest_Button_Down_OnTouchPanelMove)
EVENT_END

INT32 UIFlowTouchTest_Button_Down_OnTouchPanelPress(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_DefaultEvent(pCtrl,NVTEVT_PRESS,paramNum,paramArray);
    return NVTEVT_CONSUME;
}
INT32 UIFlowTouchTest_Button_Down_OnTouchPanelMove(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_DefaultEvent(pCtrl,NVTEVT_MOVE,paramNum,paramArray);
    return NVTEVT_CONSUME;
}
//----------------------UIFlowTouchTest_StatusCtrl Event---------------------------
EVENT_BEGIN(UIFlowTouchTest_Status)
EVENT_END

//----------------------UIFlowTouchTest_ScrollBarCtrl Event---------------------------
INT32 UIFlowTouchTest_ScrollBar_OnTouchPanelPress(VControl *, UINT32, UINT32 *);
INT32 UIFlowTouchTest_ScrollBar_OnTouchPanelRelease(VControl *, UINT32, UINT32 *);
INT32 UIFlowTouchTest_ScrollBar_OnTouchPanelMove(VControl *, UINT32, UINT32 *);
EVENT_BEGIN(UIFlowTouchTest_ScrollBar)
EVENT_ITEM(NVTEVT_PRESS,UIFlowTouchTest_ScrollBar_OnTouchPanelPress)
EVENT_ITEM(NVTEVT_RELEASE,UIFlowTouchTest_ScrollBar_OnTouchPanelRelease)
EVENT_ITEM(NVTEVT_MOVE,UIFlowTouchTest_ScrollBar_OnTouchPanelMove)
EVENT_END

INT32 UIFlowTouchTest_ScrollBar_OnTouchPanelPress(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_DefaultEvent(pCtrl,NVTEVT_PRESS,paramNum,paramArray);
    return NVTEVT_CONSUME;
}
INT32 UIFlowTouchTest_ScrollBar_OnTouchPanelRelease(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_DefaultEvent(pCtrl,NVTEVT_RELEASE,paramNum,paramArray);
    return NVTEVT_CONSUME;
}
INT32 UIFlowTouchTest_ScrollBar_OnTouchPanelMove(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_DefaultEvent(pCtrl,NVTEVT_MOVE,paramNum,paramArray);
    return NVTEVT_CONSUME;
}