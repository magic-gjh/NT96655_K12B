//This source code is generated by UI Designer Studio.

#include "UIFramework.h"
#include "UIFrameworkExt.h"
#include "UIGraphics.h"
#include "NVTToolCommand.h"
#include "MenuCommonEffectRes.c"
#include "MenuCommonEffect.h"
#include "PrjCfg.h"

//---------------------MenuCommonEffectCtrl Debug Definition -----------------------------
#define _MENUCOMMONEFFECT_ERROR_MSG        1
#define _MENUCOMMONEFFECT_TRACE_MSG        0

#if (_MENUCOMMONEFFECT_ERROR_MSG&(PRJ_DBG_LVL>=PRJ_DBG_LVL_ERR))
#define MenuCommonEffectErrMsg(...)            debug_msg ("^R MenuCommonEffect: "__VA_ARGS__)
#else
#define MenuCommonEffectErrMsg(...)
#endif

#if (_MENUCOMMONEFFECT_TRACE_MSG&(PRJ_DBG_LVL>=PRJ_DBG_LVL_TRC))
#define MenuCommonEffectTraceMsg(...)          debug_msg ("^B MenuCommonEffect: "__VA_ARGS__)
#else
#define MenuCommonEffectTraceMsg(...)
#endif

//---------------------MenuCommonEffectCtrl Global Variables -----------------------------

//---------------------MenuCommonEffectCtrl Prototype Declaration  -----------------------

//---------------------MenuCommonEffectCtrl Public API  ----------------------------------

//---------------------MenuCommonEffectCtrl Private API  ---------------------------------
//---------------------MenuCommonEffectCtrl Control List---------------------------
CTRL_LIST_BEGIN(MenuCommonEffect)
CTRL_LIST_ITEM(MenuCommonEffect_Panel)
CTRL_LIST_END

//----------------------MenuCommonEffectCtrl Event---------------------------
INT32 MenuCommonEffect_OnOpen(VControl *, UINT32, UINT32 *);
INT32 MenuCommonEffect_OnClose(VControl *, UINT32, UINT32 *);
INT32 MenuCommonEffect_OnKeyLeft(VControl *, UINT32, UINT32 *);
INT32 MenuCommonEffect_OnKeyMenu(VControl *, UINT32, UINT32 *);
INT32 MenuCommonEffect_OnKeyMode(VControl *, UINT32, UINT32 *);
INT32 MenuCommonEffect_OnKeyShutter2(VControl *, UINT32, UINT32 *);
EVENT_BEGIN(MenuCommonEffect)
EVENT_ITEM(NVTEVT_OPEN_WINDOW,MenuCommonEffect_OnOpen)
EVENT_ITEM(NVTEVT_CLOSE_WINDOW,MenuCommonEffect_OnClose)
EVENT_ITEM(NVTEVT_KEY_LEFT,MenuCommonEffect_OnKeyLeft)
EVENT_ITEM(NVTEVT_KEY_MENU,MenuCommonEffect_OnKeyMenu)
EVENT_ITEM(NVTEVT_KEY_MODE,MenuCommonEffect_OnKeyMode)
EVENT_ITEM(NVTEVT_KEY_SHUTTER2,MenuCommonEffect_OnKeyShutter2)
EVENT_END

INT32 MenuCommonEffect_OnOpen(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_DefaultEvent(pCtrl,NVTEVT_OPEN_WINDOW,paramNum,paramArray);
    return NVTEVT_CONSUME;
}
INT32 MenuCommonEffect_OnClose(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_DefaultEvent(pCtrl,NVTEVT_CLOSE_WINDOW,paramNum,paramArray);
    return NVTEVT_CONSUME;
}
INT32 MenuCommonEffect_OnKeyLeft(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    return NVTEVT_CONSUME;
}
INT32 MenuCommonEffect_OnKeyMenu(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    return NVTEVT_CONSUME;
}
INT32 MenuCommonEffect_OnKeyMode(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    return NVTEVT_CONSUME;
}
INT32 MenuCommonEffect_OnKeyShutter2(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    return NVTEVT_CONSUME;
}
//---------------------MenuCommonEffect_PanelCtrl Control List---------------------------
CTRL_LIST_BEGIN(MenuCommonEffect_Panel)
CTRL_LIST_ITEM(MenuCommonEffect_Menu)
CTRL_LIST_END

//----------------------MenuCommonEffect_PanelCtrl Event---------------------------
EVENT_BEGIN(MenuCommonEffect_Panel)
EVENT_END

//----------------------MenuCommonEffect_MenuCtrl Event---------------------------
INT32 MenuCommonEffect_Menu_OnKeyUp(VControl *, UINT32, UINT32 *);
INT32 MenuCommonEffect_Menu_OnKeyDown(VControl *, UINT32, UINT32 *);
INT32 MenuCommonEffect_Menu_OnKeyEnter(VControl *, UINT32, UINT32 *);
EVENT_BEGIN(MenuCommonEffect_Menu)
EVENT_ITEM(NVTEVT_KEY_UP,MenuCommonEffect_Menu_OnKeyUp)
EVENT_ITEM(NVTEVT_KEY_DOWN,MenuCommonEffect_Menu_OnKeyDown)
EVENT_ITEM(NVTEVT_KEY_ENTER,MenuCommonEffect_Menu_OnKeyEnter)
EVENT_END

INT32 MenuCommonEffect_Menu_OnKeyUp(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_SendEvent(pCtrl,NVTEVT_PREVIOUS_ITEM,0);
    return NVTEVT_CONSUME;
}
INT32 MenuCommonEffect_Menu_OnKeyDown(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_SendEvent(pCtrl,NVTEVT_NEXT_ITEM,0);
    return NVTEVT_CONSUME;
}
INT32 MenuCommonEffect_Menu_OnKeyEnter(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    return NVTEVT_CONSUME;
}