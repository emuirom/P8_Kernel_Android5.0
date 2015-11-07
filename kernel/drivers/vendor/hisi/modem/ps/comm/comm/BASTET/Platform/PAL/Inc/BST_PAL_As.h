
#ifndef __BST_PAL_AS_H__
#define __BST_PAL_AS_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

#if (BST_OS_VER == BST_HISI_VOS)
#pragma pack(4)
#elif(BST_OS_VER == BST_WIN32)
#pragma pack(push, 4)
#endif

/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include "BST_Platform.h"
#include "BST_SRV_Define.h"
#include "BST_DRV_Common.h"
#include "BST_DRV_As.h"
/*****************************************************************************
  2 宏定义
*****************************************************************************/
#define BST_PalAsEventRcvCb( AsEvent, len, pdata )  \
                    if( BST_NULL_PTR != g_BstPalAsEventRcvCb )\
                    {\
                        g_BstPalAsEventRcvCb( AsEvent, len, pdata );\
                    }
/*****************************************************************************
  3 Massage Declare
*****************************************************************************/

/*****************************************************************************
  4 枚举定义
*****************************************************************************/

/*****************************************************************************
  5 类/结构定义
*****************************************************************************/
typedef BST_VOID (* BST_DRV_RCV_AS_EVENT_T)( BST_AS_EVT_ENUM_UINT32   enAsEvent,
                                               BST_UINT32               ulLength,
                                               BST_VOID                *pvData );
typedef struct{
    BST_AS_RAT_MODE_UINT32              enRatMode;     /*modem对应的接入制式*/
    BST_BOOL                            bCsInService;  /*CS域是否注册成功*/
    BST_BOOL                            bPsInService;  /*PS域是否注册成功*/
    BST_BOOL                            bCsConnected;  /*是否存在CS业务*/
}BST_PAL_AS_MODEMINFO_STRU;

typedef struct{
    BST_BOOL                            bRatReported;               /*开机是否已经上报过制式*/
    BST_MODEM_ID_ENUM_UINT32            enPsModemId;                /*当前PS业务所在的modem*/                
    BST_PAL_AS_MODEMINFO_STRU           stModemInfo[BST_MODEM_MAX]; /*modem相关信息*/
    BST_UINT16                          usDsdsRfShareSupportFlg;    /*是否支持dsds*/
    BST_UINT16                          usReverse;  
}BST_PAL_AS_INFO_STRU;

/*****************************************************************************
  6 UNION定义
*****************************************************************************/

/*****************************************************************************
  7 全局变量声明
*****************************************************************************/
extern  BST_DRV_RCV_AS_EVENT_T  g_BstPalAsEventRcvCb;
/*****************************************************************************
  8 函数声明
*****************************************************************************/
BST_ERR_ENUM_UINT8              BST_PAL_AsApiInitial(
    BST_DRV_RCV_AS_EVENT_T      pfRcvCallBack );

BST_ERR_ENUM_UINT8              BST_PAL_AsApiReleaseRrcConn( BST_VOID );

BST_AS_RAT_MODE_UINT32          BST_PAL_AsApiGetModemRat(
    BST_MODEM_ID_ENUM_UINT32    enModemId );

BST_MODEM_ID_ENUM_UINT32        BST_PAL_AsApiGetPsModemId( BST_VOID );

BST_VOID                        BST_PAL_AsApiReadRfCfgNvim(BST_VOID);

BST_VOID                        BST_PAL_AsMsgSetRatModeInfo(
    BST_MODEM_ID_ENUM_UINT32    enModemId, 
    BST_AS_RAT_MODE_UINT32      enRatMode
);

BST_VOID                        BST_PAL_AsApiSndRptFlag ( 
    BST_MODEM_ID_ENUM_UINT32    enPsModemId,
    BST_UINT8                   ucReportFlg );

BST_VOID                        BST_PAL_SetPsRrcStatus(
    BST_MODEM_ID_ENUM_UINT32    enModemId,
    BST_BOOL                    bExist);

BST_VOID                        BST_PAL_SetCsRrcStatus(
    BST_MODEM_ID_ENUM_UINT32    enModemId,
    BST_BOOL                    bExist);

BST_VOID                        BST_PAL_AsMsgSetCsUsingInfo(
    BST_MODEM_ID_ENUM_UINT32    enModemId,
    BST_BOOL                    bExist);

BST_VOID                        BST_PAL_AsMsgModemIdChanged(
    BST_MODEM_ID_ENUM_UINT32    enNEwModemId );

BST_VOID                        BST_PAL_AsMsgSetServiceStatus(
    BST_MODEM_ID_ENUM_UINT32 enModemId,
    BST_BOOL                    bCsInservice,
    BST_BOOL                    bPsInservice
);

/*****************************************************************************
  9 OTHERS定义
*****************************************************************************/


#if (BST_OS_VER == BST_HISI_VOS)
#pragma pack()
#elif(BST_OS_VER == BST_WIN32)
#pragma pack(pop)
#endif


#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif


#endif
