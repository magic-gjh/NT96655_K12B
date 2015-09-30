//This source code is generated by UI Designer Studio.

#ifndef UIMENUWNDWIFIMODULELINKRES_H
#define UIMENUWNDWIFIMODULELINKRES_H

#include "UIFramework.h"
#include "UIFrameworkExt.h"
#include "UIGraphics.h"
#include "NVTToolCommand.h"
#include "UIDisplayUtil.h"
//------------------------------------------------------------

SHOW_ITEM_RECT(CMD_Rectangle,Skin1Rect,0,0,319,239,0,0,1,1,0,0,0)
SHOW_MAP_BEGIN(Skin1)
SHOW_MAP_BODY(Skin1Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin1,0,0,319,239)

SHOW_MAP_BEGIN(Skin3)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin3,0,0,27,27)

SHOW_ITEM_IMAGE(CMD_Image|CMD_ITEM,Icon4, 0, 0, 27,27, ICONID_NULL,0,0,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Normal2)
SHOW_MAP_BODY(Skin3)
SHOW_MAP_BODY(Icon4)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal2,0,0,27,27)

SHOW_MAP_BEGIN(UIMenuWndWiFiModuleLink_StaticICN_WiFi)
SHOW_MAP_BODY(Normal2)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndWiFiModuleLink_StaticICN_WiFi)
CREATE_STATIC_DATA(UIMenuWndWiFiModuleLink_StaticICN_WiFi,ICON_WIFI)
CREATE_STATIC_CTRL(UIMenuWndWiFiModuleLink_StaticICN_WiFi,0,0,0,27,27)

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(Skin7)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin7,0,0,319,23)

SHOW_ITEM_IMAGE(CMD_Image|CMD_ITEM,Icon8, 0, 0, 319,23, ICONID_NULL,0,0,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Normal6)
SHOW_MAP_BODY(Skin7)
SHOW_MAP_BODY(Icon8)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal6,0,28,319,51)

SHOW_MAP_BEGIN(UIMenuWndWiFiModuleLink_StaticICN_TitleBar)
SHOW_MAP_BODY(Normal6)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndWiFiModuleLink_StaticICN_TitleBar)
CREATE_STATIC_DATA(UIMenuWndWiFiModuleLink_StaticICN_TitleBar,ICON_TITLE_WIFI_BAR)
CREATE_STATIC_CTRL(UIMenuWndWiFiModuleLink_StaticICN_TitleBar,0,0,28,319,51)

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_ITEM_RECT(CMD_Rectangle,Skin11Rect,0,0,239,27,0,0,1,1,0,0,0)
SHOW_MAP_BEGIN(Skin11)
SHOW_MAP_BODY(Skin11Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin11,0,0,239,27)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text13,0,0,239,27,STRID_NULL,1,0,0,0,2,1,1,256,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Normal10)
SHOW_MAP_BODY(Skin11)
SHOW_MAP_BODY(Text13)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal10,28,0,267,27)

CREATE_STATE_ITEM_DATA(STRID_WIFI_AP_MODE14,STRID_WIFI_AP_MODE,ICONID_NULL,NULL) 
CREATE_STATE_ITEM_DATA(STRID_WIFI_CLIENT_MODE15,STRID_WIFI_CLIENT_MODE,ICONID_NULL,NULL) 
SHOW_MAP_BEGIN(UIMenuWndWiFiModuleLink_StatusTXT_WiFiMode)
SHOW_MAP_BODY(Normal10)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndWiFiModuleLink_StatusTXT_WiFiMode)
STATE_LIST_BEGIN(UIMenuWndWiFiModuleLink_StatusTXT_WiFiMode)
STATE_LIST_ITEM(STRID_WIFI_AP_MODE14)
STATE_LIST_ITEM(STRID_WIFI_CLIENT_MODE15)
STATE_LIST_END

CREATE_STATE_DATA(UIMenuWndWiFiModuleLink_StatusTXT_WiFiMode,0)
CREATE_STATE_CTRL(UIMenuWndWiFiModuleLink_StatusTXT_WiFiMode,0,28,0,267,27)

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_ITEM_RECT(CMD_Rectangle,Skin17Rect,0,0,239,27,0,0,1,1,0,0,0)
SHOW_MAP_BEGIN(Skin17)
SHOW_MAP_BODY(Skin17Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin17,0,0,239,27)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text19,0,0,239,27,STRID_NULL,0,0,0,0,2,1,1,0,0,16,0,0,0,0)
SHOW_MAP_BEGIN(Normal16)
SHOW_MAP_BODY(Skin17)
SHOW_MAP_BODY(Text19)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal16,38,65,277,92)

SHOW_MAP_BEGIN(UIMenuWndWiFiModuleLink_StaticTXT_SSID)
SHOW_MAP_BODY(Normal16)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndWiFiModuleLink_StaticTXT_SSID)
CREATE_STATIC_DATA(UIMenuWndWiFiModuleLink_StaticTXT_SSID,STRID_NULL_)
CREATE_STATIC_CTRL(UIMenuWndWiFiModuleLink_StaticTXT_SSID,0,38,65,277,92)

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_ITEM_RECT(CMD_Rectangle,Skin22Rect,0,0,239,27,0,0,1,1,0,0,0)
SHOW_MAP_BEGIN(Skin22)
SHOW_MAP_BODY(Skin22Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin22,0,0,239,27)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text24,0,0,239,27,STRID_NULL,0,0,0,0,2,1,1,0,0,16,0,0,0,0)
SHOW_MAP_BEGIN(Normal21)
SHOW_MAP_BODY(Skin22)
SHOW_MAP_BODY(Text24)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal21,39,111,278,138)

SHOW_MAP_BEGIN(UIMenuWndWiFiModuleLink_StaticTXT_Key)
SHOW_MAP_BODY(Normal21)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndWiFiModuleLink_StaticTXT_Key)
CREATE_STATIC_DATA(UIMenuWndWiFiModuleLink_StaticTXT_Key,STRID_NULL_)
CREATE_STATIC_CTRL(UIMenuWndWiFiModuleLink_StaticTXT_Key,0,39,111,278,138)

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_ITEM_RECT(CMD_Rectangle,Skin26Rect,0,0,104,79,0,0,1,1,0,0,0)
SHOW_MAP_BEGIN(Skin26)
SHOW_MAP_BODY(Skin26Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin26,0,0,104,79)

SHOW_ITEM_RECT(CMD_Rectangle,Skin28Rect,0,0,97,58,0,0,1,1,0,0,0)
SHOW_MAP_BEGIN(Skin28)
SHOW_MAP_BODY(Skin28Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin28,0,0,97,58)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text30,0,0,97,58,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Normal27)
SHOW_MAP_BODY(Skin28)
SHOW_MAP_BODY(Text30)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal27,40,158,137,216)

SHOW_MAP_BEGIN(Skin32)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin32,0,0,97,58)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text34,0,0,97,58,STRID_NULL,0,0,0,0,7,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Focused31)
SHOW_MAP_BODY(Skin32)
SHOW_MAP_BODY(Text34)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Focused31,40,158,137,216)

SHOW_MAP_BEGIN(Skin36)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin36,0,0,97,58)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text38,0,0,97,58,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Normal_Disable35)
SHOW_MAP_BODY(Skin36)
SHOW_MAP_BODY(Text38)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal_Disable35,40,158,137,216)

SHOW_MAP_BEGIN(Skin40)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin40,0,0,97,58)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text42,0,0,97,58,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Focused_Disable39)
SHOW_MAP_BODY(Skin40)
SHOW_MAP_BODY(Text42)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Focused_Disable39,40,158,137,216)

SHOW_MAP_BEGIN(Skin44)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin44,0,0,97,58)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text46,0,0,97,58,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Pressed43)
SHOW_MAP_BODY(Skin44)
SHOW_MAP_BODY(Text46)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Pressed43,40,158,137,216)

CREATE_BUTTON_ITEM_DATA(STRID_REFRESH47,STRID_REFRESH,ICONID_NULL,STATUS_ENABLE,NULL) 
SHOW_MAP_BEGIN(Button_Refresh)
SHOW_MAP_BODY(Normal27)
SHOW_MAP_BODY(Focused31)
SHOW_MAP_BODY(Normal_Disable35)
SHOW_MAP_BODY(Focused_Disable39)
SHOW_MAP_BODY(Pressed43)
SHOW_MAP_END

DECLARE_EVENT(Button_Refresh)
BUTTON_LIST_BEGIN(Button_Refresh)
BUTTON_LIST_ITEM(STRID_REFRESH47)
BUTTON_LIST_END

CREATE_BUTTON_DATA(Button_Refresh,BTN_DRAW_IMAGE)

CREATE_BUTTON_CTRL(Button_Refresh,Button_Refresh,0,0,26,97,84)
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_ITEM_RECT(CMD_Rectangle,Skin49Rect,0,0,103,59,0,0,1,1,0,0,0)
SHOW_MAP_BEGIN(Skin49)
SHOW_MAP_BODY(Skin49Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin49,0,0,103,59)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text51,0,0,103,59,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Normal48)
SHOW_MAP_BODY(Skin49)
SHOW_MAP_BODY(Text51)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal48,174,158,277,217)

SHOW_MAP_BEGIN(Skin53)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin53,0,0,103,59)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text55,0,0,103,59,STRID_NULL,0,0,0,0,7,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Focused52)
SHOW_MAP_BODY(Skin53)
SHOW_MAP_BODY(Text55)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Focused52,174,158,277,217)

SHOW_MAP_BEGIN(Skin57)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin57,0,0,103,59)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text59,0,0,103,59,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Normal_Disable56)
SHOW_MAP_BODY(Skin57)
SHOW_MAP_BODY(Text59)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal_Disable56,174,158,277,217)

SHOW_MAP_BEGIN(Skin61)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin61,0,0,103,59)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text63,0,0,103,59,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Focused_Disable60)
SHOW_MAP_BODY(Skin61)
SHOW_MAP_BODY(Text63)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Focused_Disable60,174,158,277,217)

SHOW_MAP_BEGIN(Skin65)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin65,0,0,103,59)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text67,0,0,103,59,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Pressed64)
SHOW_MAP_BODY(Skin65)
SHOW_MAP_BODY(Text67)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Pressed64,174,158,277,217)

CREATE_BUTTON_ITEM_DATA(STRID_WIFI_OFF68,STRID_WIFI_OFF,ICONID_NULL,STATUS_ENABLE,NULL) 
SHOW_MAP_BEGIN(Button_WiFiOff)
SHOW_MAP_BODY(Normal48)
SHOW_MAP_BODY(Focused52)
SHOW_MAP_BODY(Normal_Disable56)
SHOW_MAP_BODY(Focused_Disable60)
SHOW_MAP_BODY(Pressed64)
SHOW_MAP_END

DECLARE_EVENT(Button_WiFiOff)
BUTTON_LIST_BEGIN(Button_WiFiOff)
BUTTON_LIST_ITEM(STRID_WIFI_OFF68)
BUTTON_LIST_END

CREATE_BUTTON_DATA(Button_WiFiOff,BTN_DRAW_IMAGE)

CREATE_BUTTON_CTRL(Button_WiFiOff,Button_WiFiOff,0,134,26,237,85)
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(UIMenuWndWiFiModeLink_Tab_RefreshAndWiFiOff)
SHOW_MAP_BODY(Skin26)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndWiFiModeLink_Tab_RefreshAndWiFiOff)
CTRL_LIST_BEGIN(UIMenuWndWiFiModeLink_Tab_RefreshAndWiFiOff)
CTRL_LIST_ITEM(Button_Refresh)
CTRL_LIST_ITEM(Button_WiFiOff)
CTRL_LIST_END

CREATE_TAB_DATA(UIMenuWndWiFiModeLink_Tab_RefreshAndWiFiOff,0)

CREATE_TAB_CTRL(UIMenuWndWiFiModeLink_Tab_RefreshAndWiFiOff,UIMenuWndWiFiModeLink_Tab_RefreshAndWiFiOff,0,40,132,144,211)
SHOW_MAP_BEGIN(UIMenuWndWiFiModuleLink)
SHOW_MAP_BODY(Skin1)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndWiFiModuleLink)
DECLARE_CTRL_LIST(UIMenuWndWiFiModuleLink)
CREATE_CTRL(UIMenuWndWiFiModuleLink,UIMenuWndWiFiModuleLink,CTRL_WND,NULL,0 ,0,0,319,239)
#endif