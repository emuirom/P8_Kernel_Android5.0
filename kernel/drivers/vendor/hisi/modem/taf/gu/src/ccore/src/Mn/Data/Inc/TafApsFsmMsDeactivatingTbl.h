

#ifndef __TAF_APS_FSM_DEACTIVATING_TBL_H__
#define __TAF_APS_FSM_DEACTIVATING_TBL_H__

/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include "vos.h"
#include "TafFsm.h"


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


#pragma pack(4)

/*****************************************************************************
  2 宏定义
*****************************************************************************/
extern TAF_STA_STRU                             g_astTafApsMsDeactivatingStaTbl[];
#define TAF_APS_GetMsDeactivatingStaTbl()       (g_astTafApsMsDeactivatingStaTbl)


/*****************************************************************************
  3 枚举定义
*****************************************************************************/

enum TAF_APS_MS_DEACTIVATING_SUBSTA_ENUM
{
    TAF_APS_MS_DEACTIVATING_SUBSTA_INIT,                                        /* MS DEACTIVATING状态机的初始状态 */
    TAF_APS_MS_DEACTIVATING_SUBSTA_SUSPEND,                                     /* MS DEACTIVATING状态机的挂起状态 */
    TAF_APS_MS_DEACTIVATING_SUBSTA_WAIT_SM_DEACTIVATE_CNF,                      /* APS向SM发起了PDP去激活请求，等待SM响应 */
    TAF_APS_MS_DEACTIVATING_SUBSTA_WAIT_SM_DEACTIVATE_CNF_SUSPEND,              /* APS向SM发起了PDP去激活请求，等待SM响应时被挂起 */
    TAF_APS_MS_DEACTIVATING_SUBSTA_WAIT_SNDCP_DEACTIVATE_CNF,                   /* APS向SNDCP发起去激活SNDCP请求，等待SNDCP响应 */
    TAF_APS_MS_DEACTIVATING_SUBSTA_WAIT_SNDCP_DEACTIVATE_CNF_SUSPEND,           /* APS向SNDCP发起去激活SNDCP请求，等待SNDCP响应时被挂起 */
#if (FEATURE_ON == FEATURE_LTE)
    TAF_APS_MS_DEACTIVATING_SUBSTA_WAIT_L4A_DEACTIVATE_CNF,                     /* APS向L4A发起了PDP激活请求，等待L4A响应 */
    TAF_APS_MS_DEACTIVATING_SUBSTA_WAIT_L4A_DEACTIVATE_CNF_SUSPEND,             /* APS向ESM发起了PDP去激活请求，等待ESM响应时挂起 */
#endif
    TAF_APS_MS_DEACTIVATING_SUBSTA_BUTT
} ;
typedef VOS_UINT32 TAF_APS_MS_DEACTIVATING_SUBSTA_ENUM_UINT32;




/*****************************************************************************
  4 全局变量声明
*****************************************************************************/


/*****************************************************************************
  5 消息头定义
*****************************************************************************/


/*****************************************************************************
  6 消息定义
*****************************************************************************/


/*****************************************************************************
  7 STRUCT定义
*****************************************************************************/


/*****************************************************************************
  8 UNION定义
*****************************************************************************/


/*****************************************************************************
  9 OTHERS定义
*****************************************************************************/


/*****************************************************************************
  10 函数声明
*****************************************************************************/
VOS_UINT32 TAF_APS_GetMsDeactivatingStaTblSize( VOS_VOID );
TAF_FSM_DESC_STRU * TAF_APS_GetMsDeactivatingFsmDescAddr( VOS_VOID );









#if (VOS_OS_VER == VOS_WIN32)
#pragma pack()
#else
#pragma pack(0)
#endif




#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of TafApsFsmDeactivating.h */
