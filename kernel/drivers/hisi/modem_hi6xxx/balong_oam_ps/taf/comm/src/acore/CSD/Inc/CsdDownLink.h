

#ifndef __CSDDOWNLINK_H__
#define __CSDDOWNLINK_H__

/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include  "CsdCtx.h"
#include  "CsdCstInterface.h"


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


#pragma pack(4)

#if( FEATURE_ON == FEATURE_CSD )
/*****************************************************************************
  2 宏定义
*****************************************************************************/

/*****************************************************************************
  3 枚举定义
*****************************************************************************/


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
VOS_VOID CSD_DL_ProcDataTask(VOS_VOID);
VOS_VOID CSD_DL_SendData(VOS_VOID);
VOS_VOID CSD_DL_ProcIsr(VOS_VOID);
VOS_VOID CSD_DL_ClearData(VOS_VOID);



#endif/*FEATURE_CSD*/

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

#endif /* end of CsdDlDataProc.h */
