/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*******************************************************************************
 *
 * Filename:
 * ---------
 * spc_drv.h
 *
 * Project:
 * --------
 * MAUI
 *
 * Description:
 * ------------
 * MD speech control interfaces 
 *
 * Author:
 * -------
 * 
 *
 *==============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#ifndef _SPC_DRV_H
#define _SPC_DRV_H

#include "sp_drv.h"

typedef struct spcBufInfoStruct 
{
   uint16 syncWord;
   uint16 type;
   uint16 length;
} spcBufInfo;

typedef struct spcEncInfoStruct 
{
   uint8 network;
   uint8 count;
} spcEnCInfo;
typedef struct spcExtendedBufInfoStruct 
{
   uint16 syncWord;
   uint16 type;
   uint16 length;
   uint16 curIdx;
   uint16 totalIdx;      
} spcExtendedBufInfo;
typedef enum {
	Set_2G_Encrypt = 0, 
	Set_3G_Encrypt, 
	Set_4G_AMR_Encrypt,  
	Set_4G_EVS_Encrypt,  
	Set_4G_G_Encrypt,  
	Set_C2K_Encrypt, 
	Set_2G_Decrypt, 
	Set_3G_Decrypt, 
	Set_4G_AMR_Decrypt, 
	Set_4G_EVS_Decrypt, 
	Set_4G_G_Decrypt, 
	Set_C2K_Decrypt,
} SPC_NETWOEK_TYPE;
typedef enum {
	Set_Network_2G = 0, 
	Set_Network_3G, 
	Set_Network_4G_AMR,  
	Set_Network_4G_G,  
	Set_Network_4G_EVS,  
	Set_Network_C2K,
} SPC_NETWOEK_INFO;
#define UL_3G_ENC_MAX_DATA_SIZE  64 // frame_type, UL : len / DL : FQI_flag , DATA(23.85=>60) 62+2
#define DL_3G_DEC_MAX_DATA_SIZE  68 // frame_type, UL : len / DL : FQI_flag , CFN(4 bytes),  DATA(23.85=>60) 66+2
#define MAX_UL_3G_ENC_BUFFER_NUM  2
#define MAX_DL_3G_ENC_BUFFER_NUM  2
typedef struct SP_ENC_Struct{
   bool     Is_Voice_Encryption;
   uint8    UL_3G_befor_Enc_buffer[UL_3G_ENC_MAX_DATA_SIZE];
   uint8    DL_3G_befor_Dec_buffer[DL_3G_DEC_MAX_DATA_SIZE];
   uint8    UL_3G_after_Enc_buffer[MAX_UL_3G_ENC_BUFFER_NUM][UL_3G_ENC_MAX_DATA_SIZE];
   uint8    DL_3G_after_DEC_buffer[MAX_DL_3G_ENC_BUFFER_NUM][DL_3G_DEC_MAX_DATA_SIZE];
   uint8    DL_3G_after_DEC_buffer2[MAX_DL_3G_ENC_BUFFER_NUM][DL_3G_DEC_MAX_DATA_SIZE];
   uint8    UL_3G_after_Enc_buffer_write_index;
   uint8    UL_3G_after_Enc_buffer_read_index;
   uint8    UL_3G_after_Enc_buffer_count;
   uint8    DL_3G_after_Dec_buffer_write_index;
   uint8    DL_3G_after_Dec_buffer_read_index;
   uint8    DL_3G_after_Dec_buffer_count;
   uint8    UL_3G_Delay_Count;
   uint8    DL_3G_Delay_Count;
   
   bool     Is_3G_Hisr_Tri;
   uint8    Spc_3G_UL_Dbg_Count;
   uint8    Spc_3G_DL_Dbg_Count;
   uint32   Enc_curr_frc;
   uint32 	Enc_latest_us;
   uint32   Enc_deley_time;
} _SP_ENC; // voice encryption structure

// ----------------------------------------------------------------------------
// Datacard
// ----------------------------------------------------------------------------
void spc_daca_sendDlData(void);
void spc_daca_requestUlData(void);

// ----------------------------------------------------------------------------
// PCMNWAY
// ----------------------------------------------------------------------------
#if defined(__ENABLE_SPEECH_DVT__)
void spc_pcmNWay_sendUlData(uint16 bufLen);
void spc_pcmNWay_requestDlData(uint16 bufLen);
#else // defined(__ENABLE_SPEECH_DVT__)
void spc_pcmNWay_sendUlData(void);
void spc_pcmNWay_requestDlData(void);
#endif // defined(__ENABLE_SPEECH_DVT__)

// ----------------------------------------------------------------------------
// Background Sound
// ----------------------------------------------------------------------------
void spc_bgSnd_requestData(void);
void spc_BgSndClose(void);

// ----------------------------------------------------------------------------
// Recording
// ----------------------------------------------------------------------------
void spc_record_sendPcmData(void);
void spc_record_sendVmData(void);
void spc_record_sendRAWPcmData(void);


// ----------------------------------------------------------------------------
// CTM
// ----------------------------------------------------------------------------
void spc_ctm_sendDumpDebugData(void);
// ----------------------------------------------------------------------------
// ECALL
// ----------------------------------------------------------------------------
#if defined(__ECALL_SUPPORT__)	
void spc_eCall_Msd_Data(kal_uint16 offset, kal_int16 length);
#endif
// ----------------------------------------------------------------------------
// AUDL running functions Related
// ----------------------------------------------------------------------------
void Spc_Init(void); 
void spc_A2M_MsgHandler(kal_uint32 ccciMsg, kal_uint32 ccciResv);
void spc_AP_Command_Handler(kal_uint32 ccciMsg, kal_uint32 ccciMsgRev); //#ifdef SPC_MSG_ORG_VER	

void spc_setAcLoopbackState(bool b);
bool spc_isAcLoopback();
// ----------------------------------------------------------------------------
// Voice Encryption
// ----------------------------------------------------------------------------
void Spc_SetVoiceEncryptionHandler(SPC_NETWOEK_TYPE network);
void Spc_SetVoiceDecryptionHandler(SPC_NETWOEK_TYPE network);
void Spc_GetVoiceEncryptionHandler(kal_uint16 offset, kal_uint16 length);
void Spc_GetVoiceDecryptionHandler(kal_uint16 offset, kal_uint16 length);

#endif // _SPC_DRV_H
