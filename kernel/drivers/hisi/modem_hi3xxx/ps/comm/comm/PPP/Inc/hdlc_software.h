 /******************************************************************************

                   版权所有 (C), 2001-2012, 华为技术有限公司

  ******************************************************************************
   文 件 名   : hdlc_software.h
   版 本 号   : 初稿
   作    者   : 吕存排
   生成日期   : 2012年4月10日
   最近修改   :
   功能描述   : 软件HDLC模块头文件
   函数列表   :
   修改历史   :
   1.日    期   : 2012年4月10日
     作    者   : 吕存排
     修改内容   : 创建文件

 ******************************************************************************/

#ifndef __HDLC_SOFTWARE_H__
#define __HDLC_SOFTWARE_H__

/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include "vos.h"
#if(FEATURE_ON == FEATURE_PPP)
#include "hdlc_interface.h"

#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif

#pragma pack(4)

/*****************************************************************************
  2 宏定义
*****************************************************************************/


/*******************************************************************************
  3 枚举定义
*******************************************************************************/


/*****************************************************************************
  4 全局变量声明
*****************************************************************************/



/*****************************************************************************
  5 消息头和消息类型定义
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
extern PPP_HDLC_RESULT_TYPE_ENUM_UINT32 PPP_HDLC_SOFT_ProcData
(
    PPP_ID usPppId,
    struct link *pstLink,
    PPP_ZC_QUEUE_STRU *pstDataQ
);

extern VOS_VOID PPP_HDLC_SOFT_ProcProtocolPacket
(
    struct link     *l,
    struct ppp_mbuf *bp,
    VOS_INT32       pri,
    VOS_UINT16      proto
);

#if ((VOS_OS_VER == VOS_WIN32) || (VOS_OS_VER == VOS_NUCLEUS))
#pragma pack()
#else
#pragma pack(0)
#endif

#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif  /* FEATURE_PPP */
#endif /* end of hdlc_software.h */

