/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
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
*  LAWS PRINIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*******************************************************************************
 *
 * Filename:
 * ---------
 *   custom_imc_config.c
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   This file is used to define the IMS configuration.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
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
 *
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
 *
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
 *
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
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/
#include "custom_imc_config.h"

#ifdef __MOD_IMC__
static kal_bool set_conf_factory_uri_by_imsi(kal_uint8 *conf_factory_uri, kal_bool with_imsi_info, kal_uint8 imsi_mnc_len, kal_uint8 *mccmnc, kal_uint32 op_id)
{
    kal_uint8 len=128;
    switch(op_id)
    {
        case 1:   /* CMCC */
        case 9:   /* CT */
        case 18:  /* RJIL */
        case 107: /* SFR */
        case 110: /* FET */
        case 112: /* Telcel */
        case 113: /* Beeline */
        case 117: /* Smartfren */
        case 119: /* Natcom */
        case 120: /* Claro */
        case 126: /* Turkey Avea */
        case 127: /* MEGAFON */
        case 135: /* MTS */
        case 136: /* Entel */
        case 137: /* Tele2 */
        case 141: /* CellC */
        case 143: /* TurkCell */
        case 144: /* Smile */
        case 147: /* Airtel */
        case 150: /* Swisscom */
        case 0x6001: /* Sony GTE/Beijing */
        {
            if(!with_imsi_info){
                //dynacmic generate
            }
            else if(imsi_mnc_len == 2) {
                kal_snprintf((char *)conf_factory_uri, len-1, "sip:mmtel@conf-factory.ims.mnc0%c%c.mcc%c%c%c.3gppnetwork.org", mccmnc[3], mccmnc[4], mccmnc[0], mccmnc[1], mccmnc[2]);
            }
            else if(imsi_mnc_len == 3) {
                kal_snprintf((char *)conf_factory_uri, len-1, "sip:mmtel@conf-factory.ims.mnc%c%c%c.mcc%c%c%c.3gppnetwork.org", mccmnc[3], mccmnc[4], mccmnc[5], mccmnc[0], mccmnc[1], mccmnc[2]);
            }
            break;
        }
        case 3: /* Orange */
        {
            if(!with_imsi_info){
                //dynacmic generate
            }
            /* France */
            else if(strncmp((char *)&mccmnc[0], "208", 3) == 0){
                kal_snprintf((char *)conf_factory_uri, len-1, "sip:mmtel@conf-factory.ims.mnc001.mcc208.3gppnetwork.org");
            }
            /* Spain */
            else if(strncmp((char *)&mccmnc[0], "214", 3) == 0){
                kal_snprintf((char *)conf_factory_uri, len-1, "sip:mmtel@conf-factory.ims.mnc003.mcc214.3gppnetwork.org");
            }
            break;
        }
        case 6: /* VDF */
        {
            if(!with_imsi_info){
                //dynacmic generate
            }
            /* ltaly */
            else if(strncmp((char *)&mccmnc[0], "222", 3) == 0){
                if(imsi_mnc_len == 2) {
                    kal_snprintf((char *)conf_factory_uri, len-1, "sip:40770@ims.mnc0%c%c.mcc%c%c%c.3gppnetwork.org", mccmnc[3], mccmnc[4], mccmnc[0], mccmnc[1], mccmnc[2]);
                }
                else if(imsi_mnc_len == 3) {
                    kal_snprintf((char *)conf_factory_uri, len-1, "sip:40770@ims.mnc%c%c%c.mcc%c%c%c.3gppnetwork.org", mccmnc[3], mccmnc[4], mccmnc[5], mccmnc[0], mccmnc[1], mccmnc[2]);
                }
            }
            /* Netherlands */
            else if(strncmp((char *)&mccmnc[0], "204", 3) == 0){
                if(imsi_mnc_len == 2) {
                    kal_snprintf((char *)conf_factory_uri, len-1, "sip:conference@conference.ims.mnc0%c%c.mcc%c%c%c.3gppnetwork.org", mccmnc[3], mccmnc[4], mccmnc[0], mccmnc[1], mccmnc[2]);
                }
                else if(imsi_mnc_len == 3) {
                    kal_snprintf((char *)conf_factory_uri, len-1, "sip:conference@conference.ims.mnc%c%c%c.mcc%c%c%c.3gppnetwork.org", mccmnc[3], mccmnc[4], mccmnc[5], mccmnc[0], mccmnc[1], mccmnc[2]);
                }
            }
            /* South Africa */
            else if(strncmp((char *)&mccmnc[0], "655", 3) == 0){
                kal_snprintf((char *)conf_factory_uri, len-1, "sip:1428@ims.vodacom.co.za");
            }
            /* Default (Spain/Germany/Portugal/Romania/UK/Zambia...) */
            else {
                if(imsi_mnc_len == 2) {
                    kal_snprintf((char *)conf_factory_uri, len-1, "sip:mmtel@conf-factory.ims.mnc0%c%c.mcc%c%c%c.3gppnetwork.org", mccmnc[3], mccmnc[4], mccmnc[0], mccmnc[1], mccmnc[2]);
                }
                else if(imsi_mnc_len == 3) {
                    kal_snprintf((char *)conf_factory_uri, len-1, "sip:mmtel@conf-factory.ims.mnc%c%c%c.mcc%c%c%c.3gppnetwork.org", mccmnc[3], mccmnc[4], mccmnc[5], mccmnc[0], mccmnc[1], mccmnc[2]);
                }
            }
            break;
        }
        case 7: /* AT&T */
        {
            if(!with_imsi_info){
                //dynamic generate
            }
            /* US */
            else if(strncmp((char *)&mccmnc[0], "310", 3) == 0){
            kal_snprintf((char *)conf_factory_uri, len-1, "sip:n-way_voice@one.att.net");
            }
            /* Default (Mexico) */
            else {
                if(imsi_mnc_len == 2) {
                    kal_snprintf((char *)conf_factory_uri, len-1, "sip:mmtel@conf-factory.ims.mnc0%c%c.mcc%c%c%c.3gppnetwork.org", mccmnc[3], mccmnc[4], mccmnc[0], mccmnc[1], mccmnc[2]);
                }
                else if(imsi_mnc_len == 3) {
                    kal_snprintf((char *)conf_factory_uri, len-1, "sip:mmtel@conf-factory.ims.mnc%c%c%c.mcc%c%c%c.3gppnetwork.org", mccmnc[3], mccmnc[4], mccmnc[5], mccmnc[0], mccmnc[1], mccmnc[2]);
                }
            }
            break;
        }
        case 8: /* TMOUS */
        {
            kal_snprintf((char *)conf_factory_uri, len-1, "sip:+18881112663@msg.pc.t-mobile.com");
            break;
        }
        case 11: /* H3G */
        {
            kal_snprintf((char *)conf_factory_uri, len-1, "sip:Conf-Factory@three.co.uk");
            break;
        }
        case 15: /* Telefonica */
        {
            if(!with_imsi_info){
                //dynacmic generate
            }
            /* Germany */
            else if(strncmp((char *)&mccmnc[0], "262", 3) == 0){
            kal_snprintf((char *)conf_factory_uri, len-1, "sip:teleconferenceuri-factory@telefonica.de");
            }
            /* UK */
            else {
                if(imsi_mnc_len == 2) {
                    kal_snprintf((char *)conf_factory_uri, len-1, "sip:conference@conf-factory.ics.mnc0%c%c.mcc%c%c%c.3gppnetwork.org", mccmnc[3], mccmnc[4], mccmnc[0], mccmnc[1], mccmnc[2]);
                }
                else if(imsi_mnc_len == 3) {
                    kal_snprintf((char *)conf_factory_uri, len-1, "sip:conference@conf-factory.ics.mnc%c%c%c.mcc%c%c%c.3gppnetwork.org", mccmnc[3], mccmnc[4], mccmnc[5], mccmnc[0], mccmnc[1], mccmnc[2]);
                }
            }
            break;
        }
        case 16: /* EE */
        {
            if(!with_imsi_info){
                //dynacmic generate
            }
            else if(imsi_mnc_len == 2) {
                kal_snprintf((char *)conf_factory_uri, len-1, "sip:conf-factory.ims.mnc0%c%c.mcc%c%c%c.3gppnetwork.org", mccmnc[3], mccmnc[4], mccmnc[0], mccmnc[1], mccmnc[2]);
            }
            else if(imsi_mnc_len == 3) {
                kal_snprintf((char *)conf_factory_uri, len-1, "sip:conf-factory.ims.mnc%c%c%c.mcc%c%c%c.3gppnetwork.org", mccmnc[3], mccmnc[4], mccmnc[5], mccmnc[0], mccmnc[1], mccmnc[2]);
            }
            break;
        }
        case 19: /* Telstra */
        {
            kal_snprintf((char *)conf_factory_uri, len-1, "sip:mmtel@conf-factory.ims.mnc001.mcc505.3gppnetwork.org");
            break;
        }
        case 100: /* CSL */
        {
            if(!with_imsi_info){
                //dynacmic generate
            }
            else if(imsi_mnc_len == 2) {
                kal_snprintf((char *)conf_factory_uri, len-1, "sip:conference-factory@ims.mnc0%c%c.mcc%c%c%c.3gppnetwork.org", mccmnc[3], mccmnc[4], mccmnc[0], mccmnc[1], mccmnc[2]);
            }
            else if(imsi_mnc_len == 3) {
                kal_snprintf((char *)conf_factory_uri, len-1, "sip:conference-factory@ims.mnc%c%c%c.mcc%c%c%c.3gppnetwork.org", mccmnc[3], mccmnc[4], mccmnc[5], mccmnc[0], mccmnc[1], mccmnc[2]);
            }
            break;
        }
        case 101: /* PCCW */
        {
            if(!with_imsi_info){
                //dynacmic generate
            }
            else if(imsi_mnc_len == 2) {
                kal_snprintf((char *)conf_factory_uri, len-1, "sip:conf-factory.ics.mnc0%c%c.mcc%c%c%c.3gppnetwork.org", mccmnc[3], mccmnc[4], mccmnc[0], mccmnc[1], mccmnc[2]);
            }
            else if(imsi_mnc_len == 3) {
                kal_snprintf((char *)conf_factory_uri, len-1, "sip:conf-factory.ics.mnc%c%c%c.mcc%c%c%c.3gppnetwork.org", mccmnc[3], mccmnc[4], mccmnc[5], mccmnc[0], mccmnc[1], mccmnc[2]);
            }
            break;
        }
        case 131: /* TrueMove */
        {
            if(!with_imsi_info){
                //dynacmic generate
            }
            /* Thailand */
            else if(strncmp((char *)&mccmnc[0], "520", 3) == 0){
                kal_snprintf((char *)conf_factory_uri, len-1, "sip:conf-factory.ics.mnc004.mcc520.3gppnetwork.org");
            }
            else {
                if(imsi_mnc_len == 2) {
                    kal_snprintf((char *)conf_factory_uri, len-1, "sip:conf-factory.ics.mnc0%c%c.mcc%c%c%c.3gppnetwork.org", mccmnc[3], mccmnc[4], mccmnc[0], mccmnc[1], mccmnc[2]);
                }
                else if(imsi_mnc_len == 3) {
                    kal_snprintf((char *)conf_factory_uri, len-1, "sip:conf-factory.ics.mnc%c%c%c.mcc%c%c%c.3gppnetwork.org", mccmnc[3], mccmnc[4], mccmnc[5], mccmnc[0], mccmnc[1], mccmnc[2]);
                }
            }
            break;
        }
        case 102: /* SMT */
        {
            if(!with_imsi_info){
                //dynacmic generate
            }
            else if(imsi_mnc_len == 2) {
                kal_snprintf((char *)conf_factory_uri, len-1, "sip:conference@ims.mnc0%c%c.mcc%c%c%c.3gppnetwork.org", mccmnc[3], mccmnc[4], mccmnc[0], mccmnc[1], mccmnc[2]);
            }
            else if(imsi_mnc_len == 3) {
                kal_snprintf((char *)conf_factory_uri, len-1, "sip:conference@ims.mnc%c%c%c.mcc%c%c%c.3gppnetwork.org", mccmnc[3], mccmnc[4], mccmnc[5], mccmnc[0], mccmnc[1], mccmnc[2]);
            }
            break;
        }
        case 106: /* 3HK */
        {
            if(!with_imsi_info){
                //dynacmic generate
            }
            else if(imsi_mnc_len == 2) {
                kal_snprintf((char *)conf_factory_uri, len-1, "sip:19099@ims.mnc0%c%c.mcc%c%c%c.3gppnetwork.org", mccmnc[3], mccmnc[4], mccmnc[0], mccmnc[1], mccmnc[2]);
            }
            else if(imsi_mnc_len == 3) {
                kal_snprintf((char *)conf_factory_uri, len-1, "sip:19099@ims.mnc%c%c%c.mcc%c%c%c.3gppnetwork.org", mccmnc[3], mccmnc[4], mccmnc[5], mccmnc[0], mccmnc[1], mccmnc[2]);
            }
            break;
        }
        case 103: /* SingTel */
        {
            kal_snprintf((char *)conf_factory_uri, len-1, "sip:conference@conference.ims.singtel.com");
            break;
        }
        case 104: /* Starhub */
        {
            kal_snprintf((char *)conf_factory_uri, len-1, "sip:conf.starhub.com");
            break;
        }
        case 108: /* TWN */
        {
            kal_snprintf((char *)conf_factory_uri, len-1, "sip:conf-factory@ims.taiwanmobile.com");
            break;
        }
        case 118: /* YTL */
        {
            kal_snprintf((char *)conf_factory_uri, len-1, "sip:conference-factory@yes.my");
            break;
        }
        case 122: /* AIS */
        {
            kal_snprintf((char *)conf_factory_uri, len-1, "sip:conf@ims.mnc03.mcc520.3gppnetwork.org");
            break;
        }
        case 124: /* APTG */
        {
            kal_snprintf((char *)conf_factory_uri, len-1, "sip:APT_CONF@volte.aptg.com.tw");
            break;
        }
        case 125: /* DTAC */
        {
            kal_snprintf((char *)conf_factory_uri, len-1, "sip:mmtel@conf-factory.ims.mnc005.mcc520.3gppnetwork.org");
            break;
        }
        case 130: /* TIM */
        {
            if(!with_imsi_info){
                //dynacmic generate
            }
            /* Italy */
            else if(strncmp((char *)&mccmnc[0], "222", 3) == 0){
                kal_snprintf((char *)conf_factory_uri, len-1, "sip:mmtel@conf-factory.ics.mnc001.mcc222.3gppnetwork.org");
            }
            /* Brazil */
            else if(strncmp((char *)&mccmnc[0], "724", 3) == 0){
                kal_snprintf((char *)conf_factory_uri, len-1, "tel:1234");
            }
            /* Default */
            else {
                if(imsi_mnc_len == 2) {
                    kal_snprintf((char *)conf_factory_uri, len-1, "sip:mmtel@conf-factory.ims.mnc0%c%c.mcc%c%c%c.3gppnetwork.org", mccmnc[3], mccmnc[4], mccmnc[0], mccmnc[1], mccmnc[2]);
                }
                else if(imsi_mnc_len == 3) {
                    kal_snprintf((char *)conf_factory_uri, len-1, "sip:mmtel@conf-factory.ims.mnc%c%c%c.mcc%c%c%c.3gppnetwork.org", mccmnc[3], mccmnc[4], mccmnc[5], mccmnc[0], mccmnc[1], mccmnc[2]);
                }
            }
            break;
        }
		case 132: /* Movistar */
		{
            if(!with_imsi_info){
                //dynacmic generate
            }
            /* Colombia */
            else if(strncmp((char *)&mccmnc[0], "732", 3) == 0){
				kal_snprintf((char *)conf_factory_uri, len-1, "sip:conference@ims.mnc123.mcc732.3gppnetwork.org");
            }
            /* Mexico */
            else if(strncmp((char *)&mccmnc[0], "334", 3) == 0){
                kal_snprintf((char *)conf_factory_uri, len-1, "conference@factory.ims.movistar.mx");
            }
			/* other countries*/
            else if(imsi_mnc_len == 2) {
                kal_snprintf((char *)conf_factory_uri, len-1, "sip:mmtel@conf-factory.ims.mnc0%c%c.mcc%c%c%c.3gppnetwork.org", mccmnc[3], mccmnc[4], mccmnc[0], mccmnc[1], mccmnc[2]);
            }
            else if(imsi_mnc_len == 3) {
                kal_snprintf((char *)conf_factory_uri, len-1, "sip:mmtel@conf-factory.ims.mnc%c%c%c.mcc%c%c%c.3gppnetwork.org", mccmnc[3], mccmnc[4], mccmnc[5], mccmnc[0], mccmnc[1], mccmnc[2]);
            }
            break;
        }
        case 133: /* DU */
        {
            kal_snprintf((char *)conf_factory_uri, len-1, "sip:1234@ims.du.ae");
            break;
        }
        case 134: /* Elisa Finland */
        {
            kal_snprintf((char *)conf_factory_uri, len-1, "sip:7888@ims.mnc005.mcc244.3gppnetwork.org");
            break;
        }
        case 145: /* Cricket */
        {
            kal_snprintf((char *)conf_factory_uri, len-1, "sip:n-way_voice@smile.cricketwireless.net");
            break;
        }
        case 146: /* Etisalat */
        {
            if(!with_imsi_info){
                //dynacmic generate
            }
            /* United Arab Emirates */
            else if(strncmp((char *)&mccmnc[0], "424", 3) == 0){
                kal_snprintf((char *)conf_factory_uri, len-1, "atsconf@ims.mnc002.mcc424.3gppnetwork.org");
            }
            /* other countries*/
            else if(imsi_mnc_len == 2) {
                kal_snprintf((char *)conf_factory_uri, len-1, "sip:mmtel@conf-factory.ims.mnc0%c%c.mcc%c%c%c.3gppnetwork.org", mccmnc[3], mccmnc[4], mccmnc[0], mccmnc[1], mccmnc[2]);
            }
            else if(imsi_mnc_len == 3) {
                kal_snprintf((char *)conf_factory_uri, len-1, "sip:mmtel@conf-factory.ims.mnc%c%c%c.mcc%c%c%c.3gppnetwork.org", mccmnc[3], mccmnc[4], mccmnc[5], mccmnc[0], mccmnc[1], mccmnc[2]);
            }
            break;
        }
        case 1003: /* HQLAB ERICSSON */
        {
            if(!with_imsi_info){
                kal_snprintf((char *)conf_factory_uri, len-1, "sip:conf-factory@ims.mnc099.mcc240.3gppnetwork.org");
            }
            else if(imsi_mnc_len == 2) {
                kal_snprintf((char *)conf_factory_uri, len-1, "sip:conf-factory@ims.mnc0%c%c.mcc%c%c%c.3gppnetwork.org", mccmnc[3], mccmnc[4], mccmnc[0], mccmnc[1], mccmnc[2]);
            }
            else if(imsi_mnc_len == 3) {
                kal_snprintf((char *)conf_factory_uri, len-1, "sip:conf-factory@ims.mnc%c%c%c.mcc%c%c%c.3gppnetwork.org", mccmnc[3], mccmnc[4], mccmnc[5], mccmnc[0], mccmnc[1], mccmnc[2]);
            }
            break;
        }
        case 0x6000: /* Sony GTE/Lund */
        {
            kal_snprintf((char *)conf_factory_uri, len-1, "sip:conference@conference.gtec01.ims.se");
            break;
        }

        default: break;
    }

    return KAL_TRUE;
}

static void imc_reset_nvram_to_default(nvram_ef_ims_profile_record_struct *imc_nvram, sim_interface_enum sim_slot_id, kal_bool with_imsi_info)
{
    nvram_ef_ims_profile_record_struct* default_ims_profile_ptr = NULL; 
    kal_bool orig_video_support;
    kal_bool orig_voice_support;
    kal_bool orig_sms_support;
    kal_bool orig_ussd_support;

    if(NVRAM_DEFAULT_VALUE_POINT == nvram_get_default_value(NVRAM_EF_IMS_PROFILE_LID, sim_slot_id+1, (kal_uint8**)&default_ims_profile_ptr)){
        orig_video_support = imc_nvram->imc_config.video_over_ps_support;
        orig_voice_support = imc_nvram->imc_config.voice_support;
        orig_sms_support = imc_nvram->imc_config.sms_support;
        orig_ussd_support = imc_nvram->imc_config.ussd_support;
            
        kal_mem_cpy(imc_nvram, default_ims_profile_ptr, sizeof(nvram_ef_ims_profile_record_struct));
            
        /* For D-SBP, AP may set volte capabilities before sending at+esbp to modem, modem should save
            these volte capablility settings to avoid being reset.*/
        if (with_imsi_info) {
            imc_nvram->imc_config.video_over_ps_support = orig_video_support;
            imc_nvram->imc_config.voice_support = orig_voice_support;
            imc_nvram->imc_config.sms_support = orig_sms_support;
            imc_nvram->imc_config.ussd_support = orig_ussd_support;
        }
    }
    return;
}

kal_bool imc_nvram_customization(kal_uint16 op_id, sim_interface_enum sim_slot_id, kal_bool with_imsi_info, kal_uint8 imsi_mnc_len, kal_uint8 *mccmnc)
{
    kal_uint8* nvram_read_buf_ptr = NULL;
    nvram_ef_ims_profile_record_struct* nvram_ims_profile_ptr = NULL; 

    // Allocate buffer to read NVRAM setting
    nvram_read_buf_ptr = (kal_uint8*)get_ctrl_buffer(sizeof(kal_uint8) * NVRAM_EF_IMS_PROFILE_SIZE);

    nvram_external_read_data(NVRAM_EF_IMS_PROFILE_LID, 
                             sim_slot_id+1, 
                             nvram_read_buf_ptr, 
                             NVRAM_EF_IMS_PROFILE_SIZE);
    
    nvram_ims_profile_ptr = (nvram_ef_ims_profile_record_struct*)nvram_read_buf_ptr;

    /* No any customization is needed when setting to FREE TEST mode */
    /* Workaround for not reset PCT/CMW500/8475/ERICSSON/NSN operator_code */
    if((nvram_ims_profile_ptr->ua_config.operator_code == 0xFEE0) ||
       (nvram_ims_profile_ptr->ua_config.operator_code == 0x4000) ||    // MD8475
       (nvram_ims_profile_ptr->ua_config.operator_code == 0x4001) ||    // ERICSSON
       (nvram_ims_profile_ptr->ua_config.operator_code == 0x4002) ||    // CMW500
       (nvram_ims_profile_ptr->ua_config.operator_code == 0x4003) ||    // PCT
       (nvram_ims_profile_ptr->ua_config.operator_code == 0x5000)       // NSN
      ){
        free_ctrl_buffer(nvram_read_buf_ptr);
        nvram_read_buf_ptr = NULL;
        return KAL_FALSE;
    }

    /* 
       Due to DSBP mechanism will not reset NVRAM buffer to default value, 
       Our customization may cause accumulation to NVRAM buffer,
       ex. Operator A customize parameters a/b/c,
           Operator B customize parameters a'/d/e,
           insert A SIM card and plug-out, then insert B SIM card --> result=a'/b/c/d/e
           But we want to a'/d/e
           So we need to reset to the default value first 
    */
    /* compare op_id and operator_code, to keep the same operator's parameter which no need to customize,
       ex. parameter A no need to be customized but we adjust it when runtime,
           After power-down, parameter A will no be reset to default
    */
    if(op_id != nvram_ims_profile_ptr->ua_config.operator_code){
        imc_reset_nvram_to_default(nvram_ims_profile_ptr, sim_slot_id, with_imsi_info);
    }

    switch(op_id)
    {
        case 1: /* CMCC */
        {
            nvram_ims_profile_ptr->ua_config.operator_code             = 0x0001;      //operator_code = 1(CMCC)
            nvram_ims_profile_ptr->ua_config.UA_call_rej_by_user_code  = 603;
            nvram_ims_profile_ptr->ua_config.UA_call_no_resource_code  = 580;
            nvram_ims_profile_ptr->imc_config.resouce_retain_timer     = 0x00001770;  // 6000ms (6 seconds)
            nvram_ims_profile_ptr->imc_config.mncmcc_pass_flag         = 1;
            set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);

            strncpy ( (char *)nvram_ims_profile_ptr->imc_config.mncmcc_whitelist,
                    "2112003460202346020734602273460230346023134602333460201300130013001300030002083460",    //<num><mnc_len><MNC><mcc_len><MCC>
                    sizeof (nvram_ims_profile_ptr->imc_config.mncmcc_whitelist)
                    );

            /* IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.add_3gpp_ims_in_Accept         = 1;
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server         = 1;
            nvram_ims_profile_ptr->ua_config.when_stop_tcall                = 100;
            nvram_ims_profile_ptr->ua_config.check_contact_380              = 1;
            nvram_ims_profile_ptr->ua_config.conf_participant_not_subscribe = 1;
            nvram_ims_profile_ptr->ua_config.use_eps_prefix_in_phone_context= 0;
            nvram_ims_profile_ptr->ua_config.not_add_SDP_in_OPTIONS         = 1;
            nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout     = 120;
            nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout    = 120;
            nvram_ims_profile_ptr->ua_config.call_tcall_timer_timeout       = 6;
            nvram_ims_profile_ptr->ua_config.sip_dscp                       = 0x001A;
            nvram_ims_profile_ptr->ua_config.sip_priority                   = 0x0007;
            nvram_ims_profile_ptr->ua_config.audio_dscp                     = 0x0028;
            nvram_ims_profile_ptr->ua_config.audio_priority                 = 0x0005;
            nvram_ims_profile_ptr->ua_config.video_dscp                     = 0x0020;
            nvram_ims_profile_ptr->ua_config.video_priority                 = 0x0004;
            nvram_ims_profile_ptr->ua_config.call_id_with_host_inCall       = 1;
            nvram_ims_profile_ptr->ua_config.auto_unhold_when_rcv_recvonly  = 1;

            /* Reg/Stack */
            nvram_ims_profile_ptr->ua_config.contact_with_username          = 0;
            nvram_ims_profile_ptr->ua_config.de_subscribe                   = 0;
            nvram_ims_profile_ptr->ua_config.dereg_clear_ipsec              = 1;
            nvram_ims_profile_ptr->ua_config.dereg_reset_tcp_client         = 1;
            nvram_ims_profile_ptr->ua_config.treg                           = 64;
            nvram_ims_profile_ptr->ua_config.rereg_23g4                     = 1;
            nvram_ims_profile_ptr->ua_config.resub_23g4                     = 1;
            nvram_ims_profile_ptr->ua_config.not_auto_reg_403               = 1;
            nvram_ims_profile_ptr->ua_config.keep_alive_mode                = 2;
            nvram_ims_profile_ptr->ua_config.contact_with_accesstype        = 1;
            nvram_ims_profile_ptr->ua_config.attempt_reg_when_receive403    = 0;
            nvram_ims_profile_ptr->ua_config.tcp_connect_max_time_invite    = 4;
            nvram_ims_profile_ptr->ua_config.pend_dereg_in_initial_reg      = 1;
            nvram_ims_profile_ptr->ua_config.contact_with_transport         = 0;
            nvram_ims_profile_ptr->ua_config.call_id_with_host_inReg        = 1;

            /* IMCB */
            memset(&nvram_ims_profile_ptr->imc_config.pdn_rej_handle[0],0,64);              //CMCC: "N,33,16,0;N,*,0,1;E,*,0,1;"
            strncpy ( (char *)nvram_ims_profile_ptr->imc_config.pdn_rej_handle,
                    "N,33,16,0;N,*,0,1;E,*,0,1;",
                    sizeof (nvram_ims_profile_ptr->imc_config.pdn_rej_handle)-1
                    );
            nvram_ims_profile_ptr->imc_config.not_acquire_audio_rtcp        = 1;
            nvram_ims_profile_ptr->imc_config.not_acquire_video_rtcp        = 1;
            break;
        }
        case 2: /* CU */
        {
            nvram_ims_profile_ptr->ua_config.operator_code             = 0x0002;      //operator_code = 2(CU)
            nvram_ims_profile_ptr->ua_config.UA_call_rej_by_user_code  = 603;
            nvram_ims_profile_ptr->ua_config.UA_call_no_resource_code  = 580;
            nvram_ims_profile_ptr->imc_config.resouce_retain_timer     = 0x00001770;  // 6000ms (6 seconds)
            nvram_ims_profile_ptr->imc_config.mncmcc_pass_flag         = 0;
            set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);

            /* IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.add_3gpp_ims_in_Accept         = 1;
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server         = 1;
            nvram_ims_profile_ptr->ua_config.when_stop_tcall                = 100;
            nvram_ims_profile_ptr->ua_config.check_contact_380              = 1;
            nvram_ims_profile_ptr->ua_config.conf_participant_not_subscribe = 1;
            nvram_ims_profile_ptr->ua_config.use_eps_prefix_in_phone_context= 0;
            nvram_ims_profile_ptr->ua_config.not_add_SDP_in_OPTIONS         = 1;
            nvram_ims_profile_ptr->ua_config.call_id_with_host_inCall       = 1;

            /* Reg/Stack */
            nvram_ims_profile_ptr->ua_config.contact_with_username          = 0;
            nvram_ims_profile_ptr->ua_config.de_subscribe                   = 0;
            nvram_ims_profile_ptr->ua_config.dereg_clear_ipsec              = 1;
            nvram_ims_profile_ptr->ua_config.dereg_reset_tcp_client         = 1;
            nvram_ims_profile_ptr->ua_config.treg                           = 0;
            nvram_ims_profile_ptr->ua_config.rereg_23g4                     = 1;
            nvram_ims_profile_ptr->ua_config.resub_23g4                     = 1;
            nvram_ims_profile_ptr->ua_config.not_auto_reg_403               = 1;
            nvram_ims_profile_ptr->ua_config.keep_alive_mode                = 2;
            nvram_ims_profile_ptr->ua_config.contact_with_accesstype        = 1;
            nvram_ims_profile_ptr->ua_config.attempt_reg_when_receive403    = 0;
            nvram_ims_profile_ptr->ua_config.pend_dereg_in_initial_reg      = 1;
            nvram_ims_profile_ptr->ua_config.call_id_with_host_inReg        = 1;

            /*IMCB*/
            nvram_ims_profile_ptr->imc_config.not_acquire_audio_rtcp        = 1;
            nvram_ims_profile_ptr->imc_config.not_acquire_video_rtcp        = 1;
            break;
        }
        case 3: /* Orange */
        {
            nvram_ims_profile_ptr->ua_config.operator_code                  = 0x0003; //operator_code = 3(Orange)
            nvram_ims_profile_ptr->ua_config.VoLTE_Setting_SIP_TCP_MTU_Size = 1140;   //Orange France requirement (OGDR-VoLTE-VoWiFi-V7.0_IMS_20)
            nvram_ims_profile_ptr->ua_config.VoLTE_Setting_SIP_TCP_On_Demand= 0;
            set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);

            /* IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.sendrecv_before_prcd           = 0;
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server         = 1;
            nvram_ims_profile_ptr->ua_config.early_media_when_rtp_coming    = 1;
            nvram_ims_profile_ptr->ua_config.wfc_emerg_pidf_country         = 1;
            nvram_ims_profile_ptr->ua_config.merge_send_bye                 = 0;
            nvram_ims_profile_ptr->ua_config.add_3gpp_ims_in_Accept         = 1;

            /* Reg/Stack */
            nvram_ims_profile_ptr->ua_config.contact_with_transport         = 0;
            nvram_ims_profile_ptr->ua_config.tcp_connect_max_time_invite    = 3;
            nvram_ims_profile_ptr->ua_config.use_udp_on_tcp_fail            = 0;
            nvram_ims_profile_ptr->ua_config.wfc_refresh_23g                = 1;
            nvram_ims_profile_ptr->ua_config.pidf_country                   = 1;

            /* IMCB */
            memset(&nvram_ims_profile_ptr->imc_config.pdn_rej_handle[0],0,64);              //Orange: "N,33,18,0;N,27,18,0;N,*,0,1;E,*,0,1;"
            strncpy ( (char *)nvram_ims_profile_ptr->imc_config.pdn_rej_handle,
                    "N,33,18,0;N,27,18,0;N,*,0,1;E,*,0,1;",
                    sizeof (nvram_ims_profile_ptr->imc_config.pdn_rej_handle)-1
                    );
                    
            /* Country specific configurations */
            
            if(with_imsi_info){
                /* Spain */
                if(strncmp((char *)&mccmnc[0], "214", 3) == 0){
                    /* reset to default */
                    imc_reset_nvram_to_default(nvram_ims_profile_ptr, sim_slot_id, with_imsi_info);

                    nvram_ims_profile_ptr->ua_config.operator_code                      = 0x0003;   //operator_code = 3(Orange)
                    nvram_ims_profile_ptr->ua_config.VoLTE_Setting_SIP_TCP_MTU_Size     = 1400;
                    nvram_ims_profile_ptr->ua_config.register_expiry                    = 60000;
                    nvram_ims_profile_ptr->imc_config.ims_v4v6_preference               = 2;        //v4_prefer
                    
                    set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);
                    
                    /* IMCB, Reg/Stack, UA internal configurations */
                    /* Call */
                    nvram_ims_profile_ptr->ua_config.subscribe_dialog_to_server         = 1;
                    nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout         = 60;
                    nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout        = 60;
                    nvram_ims_profile_ptr->ua_config.merge_send_bye                     = 0;
                    nvram_ims_profile_ptr->ua_config.sendrecv_before_conf_call_prcd     = 1;

                    /* Reg/Stack */

                    /* IMCB */
                    memset(&nvram_ims_profile_ptr->imc_config.pdn_rej_handle[0],0,64);              //Orange: "N,33,18,0;N,27,18,0;N,*,0,1;E,*,0,1;"
                    strncpy ( (char *)nvram_ims_profile_ptr->imc_config.pdn_rej_handle,
                            "N,33,18,0;N,27,18,0;N,*,0,1;E,*,0,1;",
                            sizeof (nvram_ims_profile_ptr->imc_config.pdn_rej_handle)-1
                    );
                }
				else if(strncmp((char *)&mccmnc[0], "602", 3) == 0){ /*Egypt*/
                    /* reset to default */
                    imc_reset_nvram_to_default(nvram_ims_profile_ptr, sim_slot_id, with_imsi_info);
					nvram_ims_profile_ptr->ua_config.operator_code                      = 0x0003;   //operator_code = 3(Orange)
					nvram_ims_profile_ptr->imc_config.default_fallback_support          = 1;//support
					
					nvram_ims_profile_ptr->ua_config.VoLTE_Setting_SIP_TCP_On_Demand    = 0;
					nvram_ims_profile_ptr->ua_config.register_expiry                    = 3600;/*3600s*/
					nvram_ims_profile_ptr->ua_config.reg_gruu_support                   = 0;//disable
					nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout         = 120;//120s
					nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout        = 120;//120s
					/* need confirm,network will send BYE to host after to host after invatation complete*/	
					nvram_ims_profile_ptr->ua_config.merge_send_bye                     = 0;
					nvram_ims_profile_ptr->ua_config.sendrecv_before_prcd               = 1;
					
				}
            }
            break;
        }
        case 5: /* DTAG */
        {
            nvram_ims_profile_ptr->ua_config.operator_code                      = 0x0005; //operator_code = 5(DTAG)
            nvram_ims_profile_ptr->ua_config.VoLTE_Setting_SIP_TCP_On_Demand    = 0;
            nvram_ims_profile_ptr->ua_config.UA_call_rej_by_user_code           = 603;  //MTR-29648
            nvram_ims_profile_ptr->imc_config.ims_reg_allowed_at_23g            = 1;    // IMS registration allowed and maintained in 23G as well (MTR-29627)
            nvram_ims_profile_ptr->ua_config.VoLTE_Setting_SIP_TCP_MTU_Size     = 1100; // 3000_Dtac_Fundamental-Setting_0814_v2

            /* IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server             = 1;
            nvram_ims_profile_ptr->ua_config.follow_nw_ims_vops_support         = 1;
            nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout         = 130;
            nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout        = 130;
            nvram_ims_profile_ptr->ua_config.oos_end_reset_tcp_client           = 1;
            nvram_ims_profile_ptr->ua_config.merge_send_bye                     = 0;
            nvram_ims_profile_ptr->ua_config.histinfo_in_supported              = 1;

            /* Reg/Stack */
            nvram_ims_profile_ptr->ua_config.rereg_in_oos_end                   = 1;
            nvram_ims_profile_ptr->ua_config.de_subscribe                       = 0;
            nvram_ims_profile_ptr->ua_config.use_udp_on_tcp_fail                = 0;
            
            /* IMCB */
            memset(&nvram_ims_profile_ptr->imc_config.pdn_rej_handle[0],0,64);              //DTAG: "N,30,16,0;N,*,0,1;E,*,0,1;"
            strncpy ( (char *)nvram_ims_profile_ptr->imc_config.pdn_rej_handle,
                    "N,30,16,0;N,*,0,1;E,*,0,1;",
                    sizeof (nvram_ims_profile_ptr->imc_config.pdn_rej_handle)-1
                    );
            break;
        }
        case 6: /* Vodafone */
        {
            nvram_ims_profile_ptr->ua_config.operator_code                     = 0x0006;      //operator_code = 6(VDF)
            
            set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);

            /* There are parameters need mcc to customize,
               we customize in IMC source code now,
               It will phase out while dynamic SBP with mnc/mcc feature in
            */
            /* IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server                 = 1;
            nvram_ims_profile_ptr->ua_config.add_precondition_in_hold_unhold_sdp    = 0;
            nvram_ims_profile_ptr->ua_config.call_id_with_host_inCall               = 1;
            nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout             = 45;
            nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout            = 35;
            nvram_ims_profile_ptr->ua_config.merge_send_bye                         = 0;
            nvram_ims_profile_ptr->ua_config.no_auto_retry_for_mo_call              = 1;
            nvram_ims_profile_ptr->ua_config.reject_no_answer_resp_code             = 480;

            /* Reg/Stack */
            nvram_ims_profile_ptr->ua_config.initial_reg_without_pani               = 1;
            nvram_ims_profile_ptr->ua_config.not_auto_reg_403                       = 1;
            nvram_ims_profile_ptr->ua_config.de_subscribe                           = 0;
            nvram_ims_profile_ptr->ua_config.rereg_in_oos_end                       = 1;
            nvram_ims_profile_ptr->ua_config.call_id_with_host_inReg                = 1;
            nvram_ims_profile_ptr->ua_config.oos_end_reset_tcp_client               = 1;

            /* SMS */
            nvram_ims_profile_ptr->ua_config.update_call_id_with_host               = 1;

            /* IMCB */
            memset(&nvram_ims_profile_ptr->imc_config.pdn_rej_handle[0],0,64);              //VDF: "N,33,16,0;N,27,18,0;N,26,18,0;N,*,0,1;E,*,0,1;"
            strncpy ( (char *)nvram_ims_profile_ptr->imc_config.pdn_rej_handle,
                    "N,33,16,0;N,27,18,0;N,26,18,0;N,*,0,1;E,*,0,1;",
                    sizeof (nvram_ims_profile_ptr->imc_config.pdn_rej_handle)-1
                    );


            /* Spain */
            if(strncmp((char *)&mccmnc[0], "214", 3) == 0){
                nvram_ims_profile_ptr->ua_config.always_use_sip_uri_for_mo_call = 1;
                nvram_ims_profile_ptr->ua_config.subscribe_dialog_to_server = 1;
                nvram_ims_profile_ptr->ua_config.call_tcall_timer_timeout = 20;
                nvram_ims_profile_ptr->ua_config.join_send_bye = 0;
                nvram_ims_profile_ptr->ua_config.short_code_support = 1;
                nvram_ims_profile_ptr->ua_config.session_refresher_in_req = 1;
                nvram_ims_profile_ptr->ua_config.UA_call_session_timer = 1800;
            }
            /* Italy */
            else if(strncmp((char *)&mccmnc[0], "222", 3) == 0){
                nvram_ims_profile_ptr->ua_config.conf_participant_not_subscribe = 1;
                nvram_ims_profile_ptr->ua_config.check_conference_subscribe = 1;
                nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout = 120;
                nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout = 120;
                nvram_ims_profile_ptr->ua_config.UA_call_tel_evt_wb_pt = 102;
                nvram_ims_profile_ptr->ua_config.call_tcall_timer_timeout = 20;
                nvram_ims_profile_ptr->ua_config.UA_call_tel_evt_pt = 101;
                nvram_ims_profile_ptr->ua_config.UA_call_session_timer = 900;
                nvram_ims_profile_ptr->ua_config.UA_call_session_min_se = 90;
            }
            /* Germany */
            else if(strncmp((char *)&mccmnc[0], "262", 3) == 0){
                nvram_ims_profile_ptr->ua_config.call_tcall_timer_timeout = 20;
                nvram_ims_profile_ptr->ua_config.conf_participant_not_subscribe = 1;
                nvram_ims_profile_ptr->ua_config.UA_call_session_timer = 0;
                nvram_ims_profile_ptr->ua_config.UA_call_session_min_se = 90;
                nvram_ims_profile_ptr->ua_config.VoLTE_Setting_SIP_TCP_On_Demand = 1;
            }
            /* UK */
            else if(strncmp((char *)&mccmnc[0], "234", 3) == 0){
                nvram_ims_profile_ptr->ua_config.subscribe_dialog_to_server = 1;
                nvram_ims_profile_ptr->ua_config.call_tcall_timer_timeout = 20;
                nvram_ims_profile_ptr->ua_config.session_refresher_in_req = 1;
                nvram_ims_profile_ptr->ua_config.UA_call_amr_pt = 118;
                nvram_ims_profile_ptr->ua_config.UA_call_amr_wb_pt = 116;
                nvram_ims_profile_ptr->ua_config.UA_call_tel_evt_pt = 110;
            }
            /* Turkey */
            else if(strncmp((char *)&mccmnc[0], "286", 3) == 0){
                nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout = 120;
                nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout = 120;
                nvram_ims_profile_ptr->ua_config.use_org_sdp_for_invite_without_sdp = 1;
                nvram_ims_profile_ptr->ua_config.UA_call_tel_evt_wb_pt = 102;
                nvram_ims_profile_ptr->ua_config.conf_participant_not_subscribe = 1;
                nvram_ims_profile_ptr->ua_config.no_auto_retry_for_mo_call = 0;
                nvram_ims_profile_ptr->imc_config.default_fallback_support = 1;
                nvram_ims_profile_ptr->ua_config.UA_call_precondition = 0;
                nvram_ims_profile_ptr->ua_config.UA_call_amr_pt = 118;
                nvram_ims_profile_ptr->ua_config.UA_call_amr_wb_pt = 116;
                nvram_ims_profile_ptr->ua_config.UA_call_tel_evt_pt = 110;
            }
            /* Czech */
            else if(strncmp((char *)&mccmnc[0], "230", 3) == 0){
                nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout = 180;
                nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout = 180;
                nvram_ims_profile_ptr->ua_config.authorization_with_algo = 1;
                nvram_ims_profile_ptr->ua_config.contact_with_accesstype = 1;
                nvram_ims_profile_ptr->imc_config.not_acquire_audio_rtcp = 1;
                nvram_ims_profile_ptr->ua_config.subscribe_dialog_to_server = 1;
                nvram_ims_profile_ptr->ua_config.conf_participant_not_subscribe = 1;
                nvram_ims_profile_ptr->ua_config.attempt_reg_when_receive403 = 0;
            }
            /* Portugal */
            else if(strncmp((char *)&mccmnc[0], "268", 3) == 0){
                nvram_ims_profile_ptr->ua_config.early_media_when_rtp_coming = 1;
                nvram_ims_profile_ptr->ua_config.session_refresher_in_req = 1;
            }
            /* Netherlands */
            else if(strncmp((char *)&mccmnc[0], "204", 3) == 0){
                nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout = 180;
                nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout = 180;
                nvram_ims_profile_ptr->ua_config.subscribe_dialog_to_server = 1;
                nvram_ims_profile_ptr->ua_config.join_send_bye = 0;
                nvram_ims_profile_ptr->ua_config.always_use_sip_uri_for_mo_call = 1;
                nvram_ims_profile_ptr->ua_config.add_country_to_pani = 1;
                nvram_ims_profile_ptr->ua_config.call_tcall_timer_timeout = 20;
                nvram_ims_profile_ptr->ua_config.UA_call_tel_evt_wb_pt = 98;
                nvram_ims_profile_ptr->ua_config.UA_reg_t1_timer = 1000;
                nvram_ims_profile_ptr->ua_config.UA_reg_t2_timer = 4000;
                nvram_ims_profile_ptr->ua_config.UA_reg_t4_timer = 5000;
                nvram_ims_profile_ptr->ua_config.UA_call_amr_pt = 100;
                nvram_ims_profile_ptr->ua_config.UA_call_amr_wb_pt = 105;
                nvram_ims_profile_ptr->ua_config.UA_call_tel_evt_pt = 97;
            }
            /* South Africa */
            else if(strncmp((char *)&mccmnc[0], "655", 3) == 0){
                nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout = 120;
                nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout = 120;
                nvram_ims_profile_ptr->ua_config.set_rtcp_0 = 1;
                nvram_ims_profile_ptr->imc_config.ignore_media_qos_check = 1;
                nvram_ims_profile_ptr->imc_config.not_acquire_audio_rtcp = 1;
                nvram_ims_profile_ptr->ua_config.rtcp_interval = 0;
                nvram_ims_profile_ptr->ua_config.UA_reg_t2_timer = 32000;
                nvram_ims_profile_ptr->ua_config.UA_call_rej_code = 486;
            }


            /* need to reset to default NVRAM */
            if(with_imsi_info){
                /* Zambia */
                if(strncmp((char *)&mccmnc[0], "645", 3) == 0){
                    /* reset to default */
                    imc_reset_nvram_to_default(nvram_ims_profile_ptr, sim_slot_id, with_imsi_info);

                    nvram_ims_profile_ptr->ua_config.operator_code                      = 0x0006;   //operator_code = 6(VDF)
                    nvram_ims_profile_ptr->ua_config.VoLTE_Setting_SIP_TCP_MTU_Size     = 1400;
                    nvram_ims_profile_ptr->ua_config.register_expiry                    = 3600;
                    nvram_ims_profile_ptr->ua_config.UA_reg_t1_timer                    = 500;
                    nvram_ims_profile_ptr->ua_config.UA_reg_t2_timer                    = 4000;
                    nvram_ims_profile_ptr->ua_config.UA_reg_t4_timer                    = 5000;
                    nvram_ims_profile_ptr->imc_config.ims_v4v6_preference               = 2;        //v4_prefer
                    nvram_ims_profile_ptr->ua_config.UA_call_precondition               = 0;        //disable precondition
                    nvram_ims_profile_ptr->imc_config.resouce_retain_timer              = 0x00001F40;// 8000ms (8 seconds)
                    set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);
                    /* IMCB, Reg/Stack, UA internal configurations */
                    /* Call */
                    nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout         = 90;
                    nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout        = 90;
                    nvram_ims_profile_ptr->ua_config.use_eps_prefix_in_phone_context    = 0;                    
                    nvram_ims_profile_ptr->ua_config.refer_dialog_to_server             = 1;
                    nvram_ims_profile_ptr->ua_config.set_rtcp_0                         = 1;
                    nvram_ims_profile_ptr->ua_config.attempt_reg_when_receive403        = 0;
                    /* Reg/Stack */

                    /* IMCB */
                    memset(&nvram_ims_profile_ptr->imc_config.pcscf_home_policy_list[0],0,32);
                    strncpy ( (char *)nvram_ims_profile_ptr->imc_config.pcscf_home_policy_list,
                              "0,2,6,3,1,4,5,0",
                              sizeof (nvram_ims_profile_ptr->imc_config.pcscf_home_policy_list)-1   //set pcscf policy for home NW
                            );
                    memset(&nvram_ims_profile_ptr->imc_config.pcscf_visit_policy_list[0],0,32);
                    strncpy ( (char *)nvram_ims_profile_ptr->imc_config.pcscf_visit_policy_list,
                              "0,2,6,3,1,4,5,0",
                              sizeof (nvram_ims_profile_ptr->imc_config.pcscf_visit_policy_list)-1   //set pcscf policy for visit NW
                            );
                }
            }
            break;
        }
        case 7: /* AT&T */
        {
            nvram_ims_profile_ptr->ua_config.operator_code             = 0x0007;      //operator_code = 7(AT&T)
            nvram_ims_profile_ptr->imc_config.resouce_retain_timer     = 0x00001F40;  // 8000ms (8 seconds)
            nvram_ims_profile_ptr->imc_config.auto_re_reg_base_timer   = 120*1000;    // 120000s (120 seconds) CDR-LTE-1468
            nvram_ims_profile_ptr->imc_config.auto_re_reg_max_timer    = 7200*1000;   // 7200000ms (7200 seconds) CDR-LTE-1468 
            nvram_ims_profile_ptr->ua_config.VoLTE_Setting_SIP_TCP_On_Demand   = 0;
            nvram_ims_profile_ptr->ua_config.UA_call_no_resource_code = 580;   //AT&T TC LTE-BTR-5-5560
            nvram_ims_profile_ptr->imc_config.ims_reg_allowed_at_23g  = 1;     // IMS registration allowed and maintained in 23G as well (CDR-NWS-705)        
            set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);

            /* IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.always_use_sip_uri_for_mo_call     = 1;
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server             = 1;
            nvram_ims_profile_ptr->ua_config.oir_privacy_to_header              = 1;
            nvram_ims_profile_ptr->ua_config.register_cap_whenever              = 1;
            nvram_ims_profile_ptr->ua_config.no_auto_retry_for_mo_call          = 1;
            nvram_ims_profile_ptr->ua_config.use_eps_prefix_in_phone_context    = 0;
            nvram_ims_profile_ptr->ua_config.subscribe_dialog_to_server         = 1;
            nvram_ims_profile_ptr->ua_config.conference_subscribe_timing        = 1;
            nvram_ims_profile_ptr->ua_config.reject_mtcall_by_vops              = 1;
            nvram_ims_profile_ptr->ua_config.rel_conf_if_no_participant         = 1;
            nvram_ims_profile_ptr->ua_config.call_tcall_timer_timeout           = 60;
            nvram_ims_profile_ptr->ua_config.reject_code_in23G                  = 488;

            /* Reg/Stack */
            nvram_ims_profile_ptr->ua_config.initial_reg_without_pani           = 1;
            nvram_ims_profile_ptr->ua_config.not_auto_reg_403                   = 1;

            /* IMCB */
            nvram_ims_profile_ptr->imc_config.default_fallback_support          = 1;
            nvram_ims_profile_ptr->imc_config.ignore_media_qos_check            = 1;
            nvram_ims_profile_ptr->imc_config.enable_audio_precondition         = 1;
            nvram_ims_profile_ptr->imc_config.video_resource_retain_timer       = 8000;
            memset(&nvram_ims_profile_ptr->imc_config.pdn_rej_handle[0],0,64);              //ATT: "N,33,16,0;N,28,16,0;N,*,0,1;E,*,0,1;"
            strncpy ( (char *)nvram_ims_profile_ptr->imc_config.pdn_rej_handle,
                    "N,33,16,0;N,28,16,0;N,*,0,1;E,*,0,1;",
                    sizeof (nvram_ims_profile_ptr->imc_config.pdn_rej_handle)-1
                    );

            /* Country specific configurations */
            if(with_imsi_info){
                /* Mexico */
                if(strncmp((char *)&mccmnc[0], "334", 3) == 0){
                    /* reset to default */
                    imc_reset_nvram_to_default(nvram_ims_profile_ptr, sim_slot_id, with_imsi_info);

                    nvram_ims_profile_ptr->ua_config.operator_code                  = 0x0007;   //operator_code = 7 (AT&T Mexico)
                    nvram_ims_profile_ptr->imc_config.ims_reg_allowed_at_23g        = 1;

                    set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);
                    
                    /* IMCB, Reg/Stack, UA internal configurations */
                    /* Call */
                    nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout     = 20;
                    nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout    = 20;
                    nvram_ims_profile_ptr->ua_config.refer_dialog_to_server         = 1;
                    nvram_ims_profile_ptr->ua_config.subscribe_dialog_to_server     = 1;
                    nvram_ims_profile_ptr->ua_config.merge_send_bye                 = 0;
                    /* Reg/Stack */
                }
            }
            break;
        }
        case 8: /* TMOUS */
        {
            nvram_ims_profile_ptr->ua_config.operator_code           = 0x0008;      //operator_code = 8(TMOUS)
            nvram_ims_profile_ptr->ua_config.UA_call_session_timer   = 0x00000708;  // UA_call_session_timer = 1800
            nvram_ims_profile_ptr->ua_config.local_sip_protocol_type = 0x00;

            /* we want auto select TCP/UDP for TMO-us network */
            /* nvram_ims_profile_ptr->ua_config.VoLTE_Setting_SIP_Force_Use_UDP = 1;*/
            nvram_ims_profile_ptr->ua_config.VoLTE_Setting_SIP_Force_Use_UDP = 0;
            nvram_ims_profile_ptr->ua_config.VoLTE_Setting_SIP_TCP_On_Demand = 1;
            nvram_ims_profile_ptr->ua_config.VoLTE_Setting_SIP_TCP_MTU_Size  = 1200; /* we change to 1200 for TMO specific 1300;*/
            nvram_ims_profile_ptr->ua_config.UA_call_mo_invite_to_bw_cnf_time = 10;
            strncpy ( (char*)nvram_ims_profile_ptr->ua_config.user_agent,  
                      "T-Mobile VoLTE-ePDG MTK/2.0", 
                      sizeof (nvram_ims_profile_ptr->ua_config.user_agent)-1
                    );
            set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);

            nvram_ims_profile_ptr->imc_config.resouce_retain_timer   = 10*1000;  // resource_retain_timer = 10 000ms (10 seconds)

            nvram_ims_profile_ptr->ua_config.sip_dscp                   = 0x001A;
            nvram_ims_profile_ptr->ua_config.sip_priority               = 0x0007;
            nvram_ims_profile_ptr->ua_config.audio_dscp                 = 0x0028;
            nvram_ims_profile_ptr->ua_config.audio_priority             = 0x0005;
            nvram_ims_profile_ptr->ua_config.video_dscp                 = 0x0020;
            nvram_ims_profile_ptr->ua_config.video_priority             = 0x0004;

            /* IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.contact_with_username_inCall   = 0;
            nvram_ims_profile_ptr->ua_config.always_use_sip_uri_for_mo_call = 1;
            nvram_ims_profile_ptr->ua_config.send_refer_to_peer             = 1;
            nvram_ims_profile_ptr->ua_config.terminal_based_cw              = 0;
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server         = 1;
            nvram_ims_profile_ptr->ua_config.add_sdp_in_180_for_non_precond = 1;
            nvram_ims_profile_ptr->ua_config.attempt_reg_when_receive403    = 0;
            nvram_ims_profile_ptr->ua_config.waiting_487_for_cancel_timer_timeout   = 5;
            nvram_ims_profile_ptr->ua_config.bcsfb_feature_enable           = 1;
            nvram_ims_profile_ptr->ua_config.ecc_session_timer_enable       = 0;
            nvram_ims_profile_ptr->ua_config.TMO_specific_SDP               = 1;
            nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout     = 30;
            nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout    = 120;
            nvram_ims_profile_ptr->ua_config.call_tcall_timer_timeout       = 10;

            /* Reg/Stack */
            nvram_ims_profile_ptr->ua_config.contact_with_regid             = 1;
            nvram_ims_profile_ptr->ua_config.authorization_with_algo        = 1;
            nvram_ims_profile_ptr->ua_config.try_next_pcscf                 = 1;
            nvram_ims_profile_ptr->ua_config.not_auto_reg_403               = 1;
            nvram_ims_profile_ptr->ua_config.ems_mode_ind                   = 1;
            nvram_ims_profile_ptr->ua_config.wfc_with_plani                 = 1;
            nvram_ims_profile_ptr->ua_config.contact_with_video_feature_tag_in_subscribe    = 1;

            /* IMCB */
            nvram_ims_profile_ptr->imc_config.ignore_sgn_qci_check          = 1;
            nvram_ims_profile_ptr->imc_config.ignore_media_qos_check        = 1;
            break;
        }
        case 9: /*CT*/
        {
            nvram_ims_profile_ptr->ua_config.operator_code             = 0x0009;      //operator_code = 9(CT)
            nvram_ims_profile_ptr->ua_config.UA_call_rej_by_user_code  = 486;
            nvram_ims_profile_ptr->ua_config.UA_call_no_resource_code  = 580;
            nvram_ims_profile_ptr->imc_config.resouce_retain_timer     = 0x00001770;  // 6000ms (6 seconds)
            nvram_ims_profile_ptr->imc_config.mncmcc_pass_flag         = 0;

            /* IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.add_3gpp_ims_in_Accept         = 1;
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server         = 1;
            nvram_ims_profile_ptr->ua_config.when_stop_tcall                = 100;
            nvram_ims_profile_ptr->ua_config.check_contact_380              = 1;
            nvram_ims_profile_ptr->ua_config.conf_participant_not_subscribe = 1;
            nvram_ims_profile_ptr->ua_config.use_eps_prefix_in_phone_context= 0;
            nvram_ims_profile_ptr->ua_config.not_add_SDP_in_OPTIONS         = 1;
            nvram_ims_profile_ptr->ua_config.UA_call_amr_pt                 = 96;
            nvram_ims_profile_ptr->ua_config.UA_call_amr_fmt_variant        = 0x1111;
            nvram_ims_profile_ptr->ua_config.sip_dscp                       = 0x001A;
            nvram_ims_profile_ptr->ua_config.sip_priority                   = 0x0007;
            nvram_ims_profile_ptr->ua_config.audio_dscp                     = 0x0028;
            nvram_ims_profile_ptr->ua_config.audio_priority                 = 0x0005;
            nvram_ims_profile_ptr->ua_config.video_dscp                     = 0x0020;
            nvram_ims_profile_ptr->ua_config.video_priority                 = 0x0004;
            nvram_ims_profile_ptr->ua_config.call_id_with_host_inCall       = 1;
            nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout     = 55;
            nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout    = 60;

            /* Reg/Stack */
            nvram_ims_profile_ptr->ua_config.contact_with_username          = 0;
            nvram_ims_profile_ptr->ua_config.de_subscribe                   = 0;
            nvram_ims_profile_ptr->ua_config.dereg_clear_ipsec              = 1;
            nvram_ims_profile_ptr->ua_config.dereg_reset_tcp_client         = 1;
            nvram_ims_profile_ptr->ua_config.treg                           = 0;
            nvram_ims_profile_ptr->ua_config.rereg_23g4                     = 1;
            nvram_ims_profile_ptr->ua_config.resub_23g4                     = 1;
            nvram_ims_profile_ptr->ua_config.not_auto_reg_403               = 1;
            nvram_ims_profile_ptr->ua_config.keep_alive_mode                = 2;
            nvram_ims_profile_ptr->ua_config.contact_with_accesstype        = 1;
            nvram_ims_profile_ptr->ua_config.attempt_reg_when_receive403    = 1;
            nvram_ims_profile_ptr->ua_config.try_same_pcscf_rereg           = 1;
            nvram_ims_profile_ptr->ua_config.reg_try_all_pcscf_5626         = 1;
            nvram_ims_profile_ptr->ua_config.call_id_with_host_inReg        = 1;
            nvram_ims_profile_ptr->imc_config.auto_re_reg_base_timer        = 30*1000;
            nvram_ims_profile_ptr->imc_config.auto_re_reg_max_timer         = 1800*1000;

            /*IMCB*/
            nvram_ims_profile_ptr->imc_config.not_acquire_audio_rtcp        = 1;
            break;
        }
        case 11: /* H3G */
        {
            nvram_ims_profile_ptr->ua_config.operator_code                      = 0x000B; //operator_code = 11(H3G)
            nvram_ims_profile_ptr->ua_config.VoLTE_Setting_SIP_TCP_On_Demand    = 0;
            nvram_ims_profile_ptr->ua_config.register_expiry                    = 3600;
            nvram_ims_profile_ptr->ua_config.UA_reg_t1_timer                    = 500;
            nvram_ims_profile_ptr->ua_config.UA_reg_t2_timer                    = 4000;
            nvram_ims_profile_ptr->ua_config.UA_reg_t4_timer                    = 5000;
            set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);

            /* IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server             = 1;
            nvram_ims_profile_ptr->ua_config.merge_send_bye                     = 0;
            nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout         = 60;
            nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout        = 60;
            nvram_ims_profile_ptr->ua_config.join_send_bye                      = 0;
            nvram_ims_profile_ptr->ua_config.add_precondition_in_hold_unhold_sdp = 0;
            nvram_ims_profile_ptr->ua_config.session_refresher_in_resp          = 1;
            nvram_ims_profile_ptr->ua_config.UA_call_session_timer              = 250;
            nvram_ims_profile_ptr->ua_config.UA_call_session_min_se             = 90;

            /* Reg/Stack */
            nvram_ims_profile_ptr->ua_config.de_subscribe                       = 0;

            /* IMCB */
            nvram_ims_profile_ptr->imc_config.not_acquire_audio_rtcp            = 1;
            nvram_ims_profile_ptr->imc_config.dereg_defer_pdn_release_timer     = 270000; //4min 30seconds
            break;
        }
        case 12: /* VzW */
        {
            nvram_ims_profile_ptr->ua_config.operator_code             = 0x000C; //operator_code = 12(VzW)
            nvram_ims_profile_ptr->ua_config.UA_net_ipsec              = 0;      //NONE
            nvram_ims_profile_ptr->ua_config.UA_reg_http_digest        = 2;      //AKAv2_MD5
            nvram_ims_profile_ptr->ua_config.ipv6_zero_compression     = 1;
            nvram_ims_profile_ptr->ua_config.UA_reg_t1_timer           = 0x00000BB8;  //UA_reg_t1_timer = 3000
            nvram_ims_profile_ptr->ua_config.UA_reg_t2_timer           = 0x00003E80;  //UA_reg_t2_timer = 16000
            nvram_ims_profile_ptr->ua_config.UA_call_amr_pt            = 102;
            nvram_ims_profile_ptr->ua_config.UA_call_amr_wb_pt         = 104;
            nvram_ims_profile_ptr->imc_config.poweroff_ims_dereg_timer = 0x00000003;  //poweroff_ims_dereg_timer = 3

            memset(&nvram_ims_profile_ptr->ua_config.UA_call_amr_mode_set[0],0,16);
            memset(&nvram_ims_profile_ptr->ua_config.UA_call_amr_wb_mode_set[0],0,20);
            strncpy((char *)nvram_ims_profile_ptr->ua_config.UA_call_amr_wb_mode_set,  
                    "2", 
                    sizeof(nvram_ims_profile_ptr->ua_config.UA_call_amr_wb_mode_set)-1);
            strncpy((char *)nvram_ims_profile_ptr->ua_config.UA_call_amr_mode_set,  
                    "7", 
                    sizeof(nvram_ims_profile_ptr->ua_config.UA_call_amr_mode_set)-1);

            /* IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server             = 1;
            nvram_ims_profile_ptr->ua_config.check_reason_phrase                = 1;
            nvram_ims_profile_ptr->ua_config.conf_participant_not_subscribe     = 1;
            nvram_ims_profile_ptr->ua_config.use_eps_prefix_in_phone_context    = 0;
            nvram_ims_profile_ptr->ua_config.check_conference_subscribe         = 1;
            nvram_ims_profile_ptr->ua_config.conference_subscribe_timing        = 1;
            nvram_ims_profile_ptr->ua_config.general_amr_nb_wb                  = 1;
            nvram_ims_profile_ptr->ua_config.reject_1w_if_1A1H                  = 1;
            nvram_ims_profile_ptr->ua_config.call_refreshcall_timer_expire      = 5;
            nvram_ims_profile_ptr->ua_config.conf_user_count_includes_host      = 0;
            nvram_ims_profile_ptr->ua_config.timer_b_restore_reg                = 0;

            /* Reg/Stack */
            nvram_ims_profile_ptr->ua_config.keep_alive_mode                    = 2;
            nvram_ims_profile_ptr->ua_config.check_msisdn                       = 1;
            nvram_ims_profile_ptr->ua_config.support_throttling_algo            = 1;
            nvram_ims_profile_ptr->ua_config.reg_after_nw_dereg_60s             = 1;
            nvram_ims_profile_ptr->ua_config.sub_contact_with_sip_instance      = 1;
            nvram_ims_profile_ptr->ua_config.stop_reg_md_lower_layer_err        = 1;

            /* SMS */
            nvram_ims_profile_ptr->ua_config.add_no_fork_in_SMS                 = 1;

            /* IMCB */
            nvram_ims_profile_ptr->imc_config.default_fallback_support          = 1;
            nvram_ims_profile_ptr->imc_config.restore_pcscf                     = 1;
            memset(&nvram_ims_profile_ptr->imc_config.pdn_rej_handle[0],0,64);        //VZW: "N,210,20,0;N,211,20,0;N,212,20,0;N,*,0,1;E,*,0,1;"
            strncpy ( (char *)nvram_ims_profile_ptr->imc_config.pdn_rej_handle,
                    "N,210,20,0;N,211,20,0;N,212,20,0;N,*,0,1;E,*,0,1;",
                    sizeof (nvram_ims_profile_ptr->imc_config.pdn_rej_handle)-1
                    );
            break;
        }
        case 15: /* Telefonica */
        {
            nvram_ims_profile_ptr->ua_config.operator_code                     = 0x000F; //operator_code = 15(Telefonica)
            
            set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);

            /* IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server                 = 1;
            nvram_ims_profile_ptr->ua_config.merge_send_bye                         = 0;
            nvram_ims_profile_ptr->ua_config.add_precondition_in_hold_unhold_sdp    = 0;
            nvram_ims_profile_ptr->ua_config.disable_conf_call_prcd                 = 1;
            nvram_ims_profile_ptr->ua_config.early_media_when_rtp_coming            = 1;

            /* Reg/Stack */
            nvram_ims_profile_ptr->ua_config.use_udp_on_tcp_fail                    = 0;
            nvram_ims_profile_ptr->ua_config.ipsec_fail_allowed                     = 0;
            
            /* IMCB */
            memset(&nvram_ims_profile_ptr->imc_config.pdn_rej_handle[0],0,64);
            strncpy ( (char *)nvram_ims_profile_ptr->imc_config.pdn_rej_handle,
                    "N,33,16,0;N,*,0,1;E,*,0,1;",
                    sizeof (nvram_ims_profile_ptr->imc_config.pdn_rej_handle)-1
                    );

            /* UK */
            if(strncmp((char *)&mccmnc[0], "234", 3) == 0) {
                nvram_ims_profile_ptr->ua_config.register_expiry                    = 7190;
                nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout         = 90;
                nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout        = 90;
                nvram_ims_profile_ptr->ua_config.add_rtcp_port_into_sdp             = 1;
                nvram_ims_profile_ptr->ua_config.add_country_to_pani                = 1;
                nvram_ims_profile_ptr->ua_config.subscribe_dialog_to_server         = 1;
            }
            /* Germany */
            else if(strncmp((char *)&mccmnc[0], "262", 3) == 0){
                nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout         = 180;
                nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout        = 180;
                nvram_ims_profile_ptr->imc_config.not_acquire_audio_rtcp             = 1;
                nvram_ims_profile_ptr->imc_config.not_acquire_video_rtcp             = 1;
                nvram_ims_profile_ptr->ua_config.rtcp_interval                      = 0;
                nvram_ims_profile_ptr->ua_config.VoLTE_Setting_SIP_TCP_MTU_Size     = 1180;
            }
            break;
        }
        case 16: /* EE */
        {
            nvram_ims_profile_ptr->ua_config.operator_code                      = 0x0010; //operator_code = 16(EE)
            nvram_ims_profile_ptr->ua_config.VoLTE_Setting_SIP_TCP_MTU_Size     = 1200;   //tcp_mtu_size = 1200
            set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);

            /* IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server         = 1;
            nvram_ims_profile_ptr->ua_config.merge_send_bye                 = 0;
            nvram_ims_profile_ptr->ua_config.conf_participant_not_subscribe = 1;
            nvram_ims_profile_ptr->ua_config.join_send_bye                  = 0;
            nvram_ims_profile_ptr->ua_config.add_no_fork                    = 1;
            nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout     = 60;
            nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout    = 130;
            nvram_ims_profile_ptr->ua_config.call_tcall_timer_timeout       = 20;
            nvram_ims_profile_ptr->ua_config.add_country_to_pani            = 1;
            
            /* Reg/Stack */
            nvram_ims_profile_ptr->ua_config.not_auto_reg_403               = 1;
            break;
        }
        case 17: /* DoCoMo */
        {
            nvram_ims_profile_ptr->ua_config.operator_code              = 0x0011; //operator_code = 17(DoCoMo)
            nvram_ims_profile_ptr->ua_config.register_expiry            = 3600;
            nvram_ims_profile_ptr->ua_config.UA_call_rej_code           = 403;
            nvram_ims_profile_ptr->ua_config.UA_call_rej_by_user_code   = 403;
            nvram_ims_profile_ptr->ua_config.VoLTE_Setting_SIP_TCP_MSS  = 1400;
            nvram_ims_profile_ptr->ua_config.UA_reg_ipsec_algo          = 0x03; //NULL+MD5, NULL+SHA1

            /* IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.always_use_sip_uri_for_mo_call = 1;
            nvram_ims_profile_ptr->ua_config.set_rtcp_0                     = 1;
            nvram_ims_profile_ptr->ua_config.no_auto_retry_for_dcm_mo_call  = 1;
            nvram_ims_profile_ptr->ua_config.pcscf_error_when663            = 1;
            nvram_ims_profile_ptr->ua_config.call_tcall_timer_timeout       = 0;

            /* SMS */
            nvram_ims_profile_ptr->ua_config.mo_retry_after_504             = 1;
            nvram_ims_profile_ptr->ua_config.send_timerF_expiry             = 1;

            /* Reg/Stack */
            nvram_ims_profile_ptr->ua_config.de_subscribe                   = 0;
            nvram_ims_profile_ptr->ua_config.try_next_pcscf                 = 1;
            nvram_ims_profile_ptr->ua_config.via_without_rport              = 1;
            nvram_ims_profile_ptr->ua_config.reg_route_hdr                  = 1;
            nvram_ims_profile_ptr->ua_config.via_uri_with_default_port      = 1;
            nvram_ims_profile_ptr->ua_config.notify_sms_notify_done         = 1;
            nvram_ims_profile_ptr->ua_config.emergency_use_imsi             = 1;
            nvram_ims_profile_ptr->ua_config.retry_interval_after_403       = 240;

            /* IMCB */
            nvram_ims_profile_ptr->imc_config.timerF_expiry                 = 1;
            nvram_ims_profile_ptr->imc_config.timerB_expiry                 = 1;
            break;
        }
        case 18: /* RJIL */
        {
            nvram_ims_profile_ptr->ua_config.operator_code           = 0x0012; 
            nvram_ims_profile_ptr->imc_config.ims_signaling_qci      = 0xFF;   //remove QCI checking
            nvram_ims_profile_ptr->ua_config.UA_call_precondition    = 0;   //disable precondition
            nvram_ims_profile_ptr->ua_config.UA_call_session_timer   = 0x00000708;  // UA_call_session_timer = 1800

            set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);
            strncpy ( (char*)nvram_ims_profile_ptr->ua_config.user_agent,  
                      "MTK_IMSUA_000_LW", 
                      sizeof (nvram_ims_profile_ptr->ua_config.user_agent)-1
                    );

            /* IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server             = 1;
            nvram_ims_profile_ptr->ua_config.merge_send_bye                     = 0;
            nvram_ims_profile_ptr->ua_config.call_tcall_timer_timeout           = 20;
            nvram_ims_profile_ptr->ua_config.wait_second_invite_for_hold        = 1;
            nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout         = 45;
            nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout        = 90;
            nvram_ims_profile_ptr->ua_config.video_conf_if_one_is_video         = 1;
            nvram_ims_profile_ptr->ua_config.dereg_send_bye                     = 1;
            nvram_ims_profile_ptr->ua_config.use_org_sdp_for_invite_without_sdp = 1;
            nvram_ims_profile_ptr->ua_config.ipsec_local_port_range             = 100;

            /* Reg/Stack */
            nvram_ims_profile_ptr->ua_config.try_n_next_pcscf_5626              = 2;
            nvram_ims_profile_ptr->ua_config.try_same_pcscf_if_retry_after      = 1;
            nvram_ims_profile_ptr->ua_config.contact_wildcard_dereg             = 1;

            /* IMCB */
            memset(&nvram_ims_profile_ptr->imc_config.pcscf_home_policy_list[0],0,32);
            strncpy ( (char *)nvram_ims_profile_ptr->imc_config.pcscf_home_policy_list,  
                      "0,2,6,3,1,4,5,0", 
                      sizeof (nvram_ims_profile_ptr->imc_config.pcscf_home_policy_list)-1   //set pcscf policy for home NW 
                    );
            memset(&nvram_ims_profile_ptr->imc_config.pcscf_visit_policy_list[0],0,32);
            strncpy ( (char *)nvram_ims_profile_ptr->imc_config.pcscf_visit_policy_list,  
                      "0,2,6,3,1,4,5,0", 
                      sizeof (nvram_ims_profile_ptr->imc_config.pcscf_visit_policy_list)-1   //set pcscf policy for visit NW 
                    );
            break;
        }
        case 19: /* Telstra */
        {
            nvram_ims_profile_ptr->ua_config.operator_code           = 0x0013; //operator_code = 19(Telstra)
            set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);

            /* IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server            = 1;
            nvram_ims_profile_ptr->ua_config.use_eps_prefix_in_phone_context   = 0;
            nvram_ims_profile_ptr->ua_config.call_tcall_timer_timeout          = 20;
            break;
        }
        case 100: /* CSL */
        {
            nvram_ims_profile_ptr->ua_config.operator_code           = 0x0064; 
            nvram_ims_profile_ptr->ua_config.VoLTE_Setting_SIP_Force_Use_UDP = 1;
            nvram_ims_profile_ptr->ua_config.UA_net_ipsec                    = 0;
            nvram_ims_profile_ptr->ua_config.UA_call_session_timer   = 0x00000708;  // UA_call_session_timer = 1800
            nvram_ims_profile_ptr->ua_config.UA_call_precondition    = 0;
            nvram_ims_profile_ptr->imc_config.ims_v4v6_preference    = 2;      //v4_prefer

            memset(&nvram_ims_profile_ptr->ua_config.UA_call_amr_wb_mode_set[0],0,20);
            strncpy ( (char *)nvram_ims_profile_ptr->ua_config.UA_call_amr_wb_mode_set,  
                      "0,1,2", 
                      sizeof (nvram_ims_profile_ptr->ua_config.UA_call_amr_wb_mode_set)-1
                    );
            set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);

            /* IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.always_use_sip_uri_for_mo_call         = 1;
            nvram_ims_profile_ptr->ua_config.terminal_based_cw                      = 0;
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server                 = 1;
            nvram_ims_profile_ptr->ua_config.add_precondition_in_hold_unhold_sdp    = 1;
            nvram_ims_profile_ptr->ua_config.reject_1w_if_1A1H                      = 1;
            nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout             = 180;
            nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout            = 180;
            nvram_ims_profile_ptr->ua_config.call_tcall_timer_timeout               = 20;
            nvram_ims_profile_ptr->ua_config.use_eps_prefix_in_phone_context        = 0;
            nvram_ims_profile_ptr->ua_config.conf_participant_not_subscribe         = 1;

            /* Reg/Stack */
            nvram_ims_profile_ptr->ua_config.de_subscribe                           = 0;
            break;
        }
        case 101: /* PCCW */
        {
            nvram_ims_profile_ptr->ua_config.operator_code           = 0x0065; 
            nvram_ims_profile_ptr->ua_config.VoLTE_Setting_SIP_Force_Use_UDP = 1;
            nvram_ims_profile_ptr->ua_config.UA_net_ipsec                    = 0;
            nvram_ims_profile_ptr->ua_config.UA_call_session_timer   = 0x00000708;  // UA_call_session_timer = 1800
            nvram_ims_profile_ptr->ua_config.UA_call_precondition    = 0;
            nvram_ims_profile_ptr->imc_config.ims_v4v6_preference    = 2;      //v4_prefer

            memset(&nvram_ims_profile_ptr->ua_config.UA_call_amr_wb_mode_set[0],0,20);
            strncpy ( (char *)nvram_ims_profile_ptr->ua_config.UA_call_amr_wb_mode_set,  
                      "0,1,2", 
                      sizeof (nvram_ims_profile_ptr->ua_config.UA_call_amr_wb_mode_set)-1
                    );
            set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);

            /* IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.always_use_sip_uri_for_mo_call         = 1;
            nvram_ims_profile_ptr->ua_config.terminal_based_cw                      = 0;
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server                 = 1;
            nvram_ims_profile_ptr->ua_config.add_precondition_in_hold_unhold_sdp    = 1;
            nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout             = 180;
            nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout            = 180;
            nvram_ims_profile_ptr->ua_config.call_tcall_timer_timeout               = 20;
            nvram_ims_profile_ptr->ua_config.UA_call_session_min_se                 = 180;
            nvram_ims_profile_ptr->ua_config.use_eps_prefix_in_phone_context        = 0;
            nvram_ims_profile_ptr->ua_config.conf_participant_not_subscribe         = 1;

            /* Reg/Stack */
            nvram_ims_profile_ptr->ua_config.de_subscribe                           = 0;
            break;
        }
        case 102: /* SMT */
        {
            nvram_ims_profile_ptr->ua_config.operator_code                   = 0x0066; 
            nvram_ims_profile_ptr->ua_config.VoLTE_Setting_SIP_Force_Use_UDP = 1;
            nvram_ims_profile_ptr->ua_config.UA_call_precondition            = 0;
            nvram_ims_profile_ptr->ua_config.UA_call_session_timer           = 0x00000708;  // UA_call_session_timer = 1800
            set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);

            /* IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.always_use_sip_uri_for_mo_call = 1;
            nvram_ims_profile_ptr->ua_config.terminal_based_cw              = 0;
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server         = 1;
            nvram_ims_profile_ptr->ua_config.add_rtcp_port_into_sdp         = 1;
            nvram_ims_profile_ptr->ua_config.subscribe_dialog_to_server     = 1;
            nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout     = 180;
            nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout    = 180;
            nvram_ims_profile_ptr->ua_config.call_tcall_timer_timeout       = 20;
            break;
        }
        case 103: /* SingTel */
        {
            nvram_ims_profile_ptr->ua_config.operator_code           = 0x0067; 
            nvram_ims_profile_ptr->ua_config.UA_call_precondition = 0;
            nvram_ims_profile_ptr->ua_config.VoLTE_Setting_SIP_TCP_MTU_Size = 4;
            nvram_ims_profile_ptr->ua_config.UA_call_session_timer  = 0x00000708;  // UA_call_session_timer = 1800

            memset(&nvram_ims_profile_ptr->ua_config.UA_call_amr_wb_mode_set[0],0,20);
            strncpy ( (char *)nvram_ims_profile_ptr->ua_config.UA_call_amr_wb_mode_set,  
                      "0,1,2", 
                      sizeof (nvram_ims_profile_ptr->ua_config.UA_call_amr_wb_mode_set)-1
                    );
            set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);

            /* IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.always_use_sip_uri_for_mo_call = 1;
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server         = 1;
            nvram_ims_profile_ptr->ua_config.merge_send_bye                 = 0;
            nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout     = 180;
            nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout    = 180;
            nvram_ims_profile_ptr->ua_config.call_tcall_timer_timeout       = 20;
            nvram_ims_profile_ptr->ua_config.subscribe_dialog_to_server     = 1;
            break;
        }
        case 104: /* StarHub */
        {
            nvram_ims_profile_ptr->ua_config.operator_code           = 0x0068; 
            nvram_ims_profile_ptr->ua_config.VoLTE_Setting_SIP_TCP_On_Demand = 0;
            nvram_ims_profile_ptr->ua_config.UA_call_session_timer   = 0x00000708;  // UA_call_session_timer = 1800
            set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);
            
            /* IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.always_use_sip_uri_for_mo_call         = 1;
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server                 = 1;
            nvram_ims_profile_ptr->ua_config.merge_send_bye                         = 0;
            nvram_ims_profile_ptr->ua_config.add_precondition_in_hold_unhold_sdp    = 0;
            nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout             = 180;
            nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout            = 180;
            nvram_ims_profile_ptr->ua_config.call_tcall_timer_timeout               = 20;
            nvram_ims_profile_ptr->ua_config.subscribe_dialog_to_server             = 1;

            /* Reg/Stack */
            nvram_ims_profile_ptr->ua_config.contact_with_regid                     = 1;
            nvram_ims_profile_ptr->ua_config.de_subscribe                           = 0;
            break;
        }
        case 106: /* 3HK */
        {
            nvram_ims_profile_ptr->ua_config.operator_code           = 0x006A; 
            nvram_ims_profile_ptr->ua_config.VoLTE_Setting_SIP_Force_Use_UDP = 1;
            nvram_ims_profile_ptr->ua_config.UA_call_session_timer   = 0x00000708;  // UA_call_session_timer = 1800
            set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);

            /* IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.always_use_sip_uri_for_mo_call         = 1;
            nvram_ims_profile_ptr->ua_config.terminal_based_cw                      = 0;
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server                 = 1;
            nvram_ims_profile_ptr->ua_config.add_precondition_in_hold_unhold_sdp    = 0;
            nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout             = 180;
            nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout            = 180;
            nvram_ims_profile_ptr->ua_config.call_tcall_timer_timeout               = 20;

            /* Reg/Stack */
            nvram_ims_profile_ptr->ua_config.de_subscribe                           = 0;

            /* IMCB */
            nvram_ims_profile_ptr->imc_config.dedicated_fallback_support            = 1;
            nvram_ims_profile_ptr->imc_config.ignore_media_qos_check                = 1;
            break;
        }
        case 107: /* SFR */
        {
            nvram_ims_profile_ptr->ua_config.operator_code                      = 0x006B; //operator_code = 107(SFR)
            nvram_ims_profile_ptr->ua_config.VoLTE_Setting_SIP_TCP_On_Demand    = 0;
            nvram_ims_profile_ptr->ua_config.VoLTE_Setting_SIP_TCP_MTU_Size     = 1100;
            nvram_ims_profile_ptr->ua_config.UA_call_session_timer              = 0x00000384;  // UA_call_session_timer = 900
            nvram_ims_profile_ptr->ua_config.UA_call_session_min_se             = 90;
                      
            set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);

            /* IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server                 = 1;
            nvram_ims_profile_ptr->ua_config.add_precondition_in_hold_unhold_sdp    = 0;
            nvram_ims_profile_ptr->ua_config.check_conference_subscribe             = 1;
            nvram_ims_profile_ptr->ua_config.conf_participant_not_subscribe         = 1;
            nvram_ims_profile_ptr->ua_config.set_rtcp_0                             = 1;
            nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout             = 45;
            nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout            = 45;
            nvram_ims_profile_ptr->ua_config.set_des_strength_optional              = 1;
            
            memset(&nvram_ims_profile_ptr->ua_config.UA_call_conf_amr_wb_mode_set[0],0,20);
            strncpy ( (char *)nvram_ims_profile_ptr->ua_config.UA_call_conf_amr_wb_mode_set,  
                      "0,1,2", 
                      sizeof (nvram_ims_profile_ptr->ua_config.UA_call_conf_amr_wb_mode_set)-1
                    );
            
            /* Reg/Stack */
            nvram_ims_profile_ptr->ua_config.de_subscribe                           = 0;
            
            /* SMS */
            nvram_ims_profile_ptr->ua_config.sms_network_types                      = 0x02; // LTE = 0, WiFi =1 (SFR_v41_BEA-LTE-VOW-08)
            
            /* IMCB */
            nvram_ims_profile_ptr->imc_config.default_fallback_support              = 1;
            memset(&nvram_ims_profile_ptr->imc_config.pdn_rej_handle[0],0,64);              //SFR: "N,33,18,0;N,27,18,0;N,*,0,1;E,*,0,1;"
            strncpy ( (char *)nvram_ims_profile_ptr->imc_config.pdn_rej_handle,
                    "N,33,18,0;N,27,18,0;N,*,0,1;E,*,0,1;",
                    sizeof (nvram_ims_profile_ptr->imc_config.pdn_rej_handle)-1
                    );
            break;
        }
        case 108: /* TWN */
        {
            nvram_ims_profile_ptr->ua_config.operator_code = 0x006C; //operator_code = 108(TWN)
            nvram_ims_profile_ptr->ua_config.UA_call_session_timer   = 0x00000708;  // UA_call_session_timer = 1800
            set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);

            /* IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server = 1;
            nvram_ims_profile_ptr->ua_config.merge_send_bye         = 0;

            /* Reg/Stack */
            nvram_ims_profile_ptr->ua_config.contact_with_transport = 0;
            nvram_ims_profile_ptr->ua_config.contact_with_regid     = 1;
            nvram_ims_profile_ptr->ua_config.register_expiry        = 3600;
            /* IMCB */
            memset(&nvram_ims_profile_ptr->imc_config.pdn_rej_handle[0],0,64);              //TWN: "N,33,16,0;N,*,0,1;E,*,0,1;"
            strncpy ( (char *)nvram_ims_profile_ptr->imc_config.pdn_rej_handle,
                    "N,33,16,0;N,*,0,1;E,*,0,1;",
                    sizeof (nvram_ims_profile_ptr->imc_config.pdn_rej_handle)-1
                    );
            break;
        }
        case 109: /* CHT */
        {
            nvram_ims_profile_ptr->ua_config.operator_code = 0x006D; //operator_code = 109(CHT)
            set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);
            break;
        }
        case 110: /* FET */
        {
            nvram_ims_profile_ptr->ua_config.operator_code = 0x006E; //operator_code = 110(FET)
            set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);

            /* IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server                 = 1;
            nvram_ims_profile_ptr->ua_config.merge_send_bye                         = 0;
            nvram_ims_profile_ptr->ua_config.add_precondition_in_hold_unhold_sdp    = 0;
            break;
        }
        case 112: /* Telcel */
        {
            nvram_ims_profile_ptr->ua_config.operator_code           = 0x70; //operator_code = 112(Telcel)
            nvram_ims_profile_ptr->ua_config.UA_reg_ipsec_algo       = 0x20; //AES + SHA1
            nvram_ims_profile_ptr->imc_config.resouce_retain_timer   = 8*1000;
            set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);

            /* IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server                 = 1;
            nvram_ims_profile_ptr->ua_config.use_eps_prefix_in_phone_context        = 0;
            nvram_ims_profile_ptr->ua_config.disable_conf_call_prcd                 = 1;
            nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout             = 90;
            nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout            = 90;
            nvram_ims_profile_ptr->ua_config.add_precondition_in_hold_unhold_sdp    = 0;

            /* IMCB */
            memset(&nvram_ims_profile_ptr->imc_config.pcscf_home_policy_list[0],0,32);
            strncpy ( (char *)nvram_ims_profile_ptr->imc_config.pcscf_home_policy_list,  
                      "0,2,1,6,3,4,5,0", 
                      sizeof (nvram_ims_profile_ptr->imc_config.pcscf_home_policy_list)-1   //set pcscf policy for home NW 
                    );
            memset(&nvram_ims_profile_ptr->imc_config.pcscf_visit_policy_list[0],0,32);
            strncpy ( (char *)nvram_ims_profile_ptr->imc_config.pcscf_visit_policy_list,  
                      "0,2,1,6,3,4,5,0", 
                      sizeof (nvram_ims_profile_ptr->imc_config.pcscf_visit_policy_list)-1   //set pcscf policy for visit NW 
                    );

            /* Country specific configurations */
            if(with_imsi_info){
                /* Mexico */
                if(strncmp((char *)&mccmnc[0], "334", 3) == 0){
                    /* reset to default */
                    imc_reset_nvram_to_default(nvram_ims_profile_ptr, sim_slot_id, with_imsi_info);

                    nvram_ims_profile_ptr->ua_config.operator_code                  = 0x0070;   //operator_code = 112 (American Movil (Telcel) Mexico)
                    nvram_ims_profile_ptr->imc_config.ims_reg_allowed_at_23g        = 1;
                    nvram_ims_profile_ptr->ua_config.UA_reg_t1_timer                = 500;
                    nvram_ims_profile_ptr->ua_config.UA_reg_t2_timer                = 4000;  
                    nvram_ims_profile_ptr->ua_config.UA_reg_t4_timer                = 5000;  

                    set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);
                    
                    /* IMCB, Reg/Stack, UA internal configurations */
                    /* Call */
                    nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout     = 90;
                    nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout    = 90;
                    nvram_ims_profile_ptr->ua_config.refer_dialog_to_server         = 1;
                    nvram_ims_profile_ptr->ua_config.merge_send_bye                 = 0;
                    nvram_ims_profile_ptr->ua_config.early_media_when_rtp_coming    = 1;
                    nvram_ims_profile_ptr->ua_config.subscribe_dialog_to_server     = 1;
                    nvram_ims_profile_ptr->ua_config.always_use_sip_uri_for_mo_call = 1;
                    /* Reg/Stack */
                    nvram_ims_profile_ptr->ua_config.reg_gruu_support               = 0;
                    /* IMCB */
                    memset(&nvram_ims_profile_ptr->imc_config.pdn_rej_handle[0],0,64);              //Telcel Mexico: "N,33,18,0;N,29,18,0;N,*,0,1;E,*,0,1;"
                    strncpy ( (char *)nvram_ims_profile_ptr->imc_config.pdn_rej_handle,
                            "N,33,18,0;N,29,18,0;N,*,0,1;E,*,0,1;",
                            sizeof (nvram_ims_profile_ptr->imc_config.pdn_rej_handle)-1
                            ); 
                }
            }
            break;
        }
        case 113: /* Beeline */
        {
            nvram_ims_profile_ptr->ua_config.operator_code                   = 0x0071; //operator_code = 113(Beeline)
            nvram_ims_profile_ptr->ua_config.UA_call_precondition            = 0;      //disable precondition
            nvram_ims_profile_ptr->ua_config.UA_net_ipsec                    = 0;
            nvram_ims_profile_ptr->imc_config.ims_v4v6_preference            = 2;      //v4_prefer
            nvram_ims_profile_ptr->imc_config.resouce_retain_timer           = 0x00001770;  // 6000ms (6 seconds)
            nvram_ims_profile_ptr->ua_config.VoLTE_Setting_SIP_Force_Use_UDP = 1;
            set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);

            /* IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server         = 1;
            nvram_ims_profile_ptr->ua_config.merge_send_bye                 = 0;
            nvram_ims_profile_ptr->ua_config.conf_participant_not_subscribe = 1;
            
            /* Reg/Stack */
            nvram_ims_profile_ptr->ua_config.de_subscribe                   = 0;
            break;
        }
        case 117: /* Smartfren */
        {
            nvram_ims_profile_ptr->ua_config.operator_code                  = 0x0075; //operator_code = 117(Smartfren)
            nvram_ims_profile_ptr->ua_config.VoLTE_Setting_SIP_TCP_MTU_Size = 1240;
            nvram_ims_profile_ptr->ua_config.UA_call_precondition           = 0;      //disable precondition
            nvram_ims_profile_ptr->imc_config.ims_v4v6_preference           = 2;      //v4_prefer
            nvram_ims_profile_ptr->imc_config.resouce_retain_timer          = 10*1000;  // resource_retain_timer
            nvram_ims_profile_ptr->imc_config.ussd_support                  = 1;
            set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);

            /* IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout             = 90;
            nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout            = 90;
            nvram_ims_profile_ptr->ua_config.use_eps_prefix_in_phone_context        = 0;
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server                 = 1;
            nvram_ims_profile_ptr->ua_config.conference_subscribe_timing            = 1;
            nvram_ims_profile_ptr->ua_config.merge_send_bye                         = 0;
            nvram_ims_profile_ptr->ua_config.terminal_based_cw                      = 0;

            /* IMCB */
            nvram_ims_profile_ptr->imc_config.default_fallback_support              = 1;
            memset(&nvram_ims_profile_ptr->imc_config.pcscf_home_policy_list[0],0,32);
            strncpy ( (char *)nvram_ims_profile_ptr->imc_config.pcscf_home_policy_list,  
                      "0,2,6,1,3,4,5,0", 
                      sizeof (nvram_ims_profile_ptr->imc_config.pcscf_home_policy_list)-1   //set pcscf policy for home NW 
                    );
            memset(&nvram_ims_profile_ptr->imc_config.pcscf_visit_policy_list[0],0,32);
            strncpy ( (char *)nvram_ims_profile_ptr->imc_config.pcscf_visit_policy_list,  
                      "0,2,6,1,3,4,5,0", 
                      sizeof (nvram_ims_profile_ptr->imc_config.pcscf_visit_policy_list)-1   //set pcscf policy for visit NW 
                    );
            break;
        }
        case 118: /* YTL */
        {
            nvram_ims_profile_ptr->ua_config.operator_code             = 0x0076; //operator_code = 118(YTL)
            set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);

            /* IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server              = 1;
            nvram_ims_profile_ptr->ua_config.merge_send_bye                      = 0;
            nvram_ims_profile_ptr->ua_config.set_rtcp_0                          = 1;
            nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout          = 30;
            nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout         = 30;
            nvram_ims_profile_ptr->ua_config.add_precondition_in_hold_unhold_sdp = 0;
            break;
        }
        case 119: /* Natcom */
        {
            nvram_ims_profile_ptr->ua_config.operator_code             = 0x0077; //operator_code = 119(Natcom)
            nvram_ims_profile_ptr->ua_config.UA_reg_t2_timer           = 4000;
            nvram_ims_profile_ptr->ua_config.UA_reg_t4_timer           = 5000;
            nvram_ims_profile_ptr->ua_config.VoLTE_Setting_SIP_TCP_MTU_Size = 1500;
            nvram_ims_profile_ptr->imc_config.ims_v4v6_preference      = 2;      //v4_prefer
            set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);

            /* IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.always_use_sip_uri_for_mo_call     = 1;
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server             = 1;
            nvram_ims_profile_ptr->ua_config.subscribe_dialog_to_server         = 1;
            nvram_ims_profile_ptr->ua_config.merge_send_bye                     = 0;
            nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout         = 180;
            nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout        = 180;
            nvram_ims_profile_ptr->ua_config.add_precondition_in_hold_unhold_sdp= 0;
            nvram_ims_profile_ptr->ua_config.attempt_reg_when_receive403        = 0;
            nvram_ims_profile_ptr->ua_config.short_code_support                 = 1;
            break;
        }
        case 120: /* Claro */
        {
            nvram_ims_profile_ptr->ua_config.operator_code                  = 0x0078;   //operator_code = 120(Claro)
            nvram_ims_profile_ptr->imc_config.ussd_support                  = 1;
            nvram_ims_profile_ptr->ua_config.register_expiry                = 3600;
            nvram_ims_profile_ptr->ua_config.VoLTE_Setting_SIP_TCP_MTU_Size = 1080;
            nvram_ims_profile_ptr->imc_config.ims_v4v6_preference           = 2;        //v4_prefer
            nvram_ims_profile_ptr->imc_config.resouce_retain_timer          = 20*1000;  //resource_retain_timer = 20 000ms (20 seconds)
            nvram_ims_profile_ptr->imc_config.emergency_pdn_retain_timer    = 300*1000; //emergency_pdn_retain_timer = 300 000ms (300 seconds)
            nvram_ims_profile_ptr->ua_config.UA_reg_t1_timer                = 500;
            nvram_ims_profile_ptr->ua_config.UA_reg_t2_timer                = 4000;
            nvram_ims_profile_ptr->ua_config.UA_reg_t4_timer                = 5000;

            set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);

            /* IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.use_eps_prefix_in_phone_context        = 0;
            nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout             = 90;
            nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout            = 90;
            nvram_ims_profile_ptr->ua_config.subscribe_dialog_to_server             = 1;
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server                 = 1;
            nvram_ims_profile_ptr->ua_config.conf_participant_not_subscribe         = 1;
            nvram_ims_profile_ptr->ua_config.merge_send_bye                         = 0;

            /* Reg/Stack */
            nvram_ims_profile_ptr->ua_config.reg_gruu_support                       = 0;

            /* IMCB */
            memset(&nvram_ims_profile_ptr->imc_config.pcscf_home_policy_list[0],0,32);
            strncpy ( (char *)nvram_ims_profile_ptr->imc_config.pcscf_home_policy_list,  
                      "0,2,3,5,6,1,4,0", 
                      sizeof (nvram_ims_profile_ptr->imc_config.pcscf_home_policy_list)-1   //set pcscf policy for home NW 
                    );
            memset(&nvram_ims_profile_ptr->imc_config.pcscf_visit_policy_list[0],0,32);
            strncpy ( (char *)nvram_ims_profile_ptr->imc_config.pcscf_visit_policy_list,  
                      "0,2,3,5,6,1,4,0", 
                      sizeof (nvram_ims_profile_ptr->imc_config.pcscf_visit_policy_list)-1   //set pcscf policy for visit NW 
                    );

            /* Country specific configurations */
            if(with_imsi_info){
                /* PERU */
                if(strncmp((char *)&mccmnc[0], "716", 3) == 0){
                    /* reset to default */
                    imc_reset_nvram_to_default(nvram_ims_profile_ptr, sim_slot_id, with_imsi_info);

                    nvram_ims_profile_ptr->ua_config.operator_code                  = 0x0078;   //operator_code = 120(Claro)
                    nvram_ims_profile_ptr->imc_config.ims_reg_allowed_at_23g        = 1;
                    nvram_ims_profile_ptr->imc_config.ims_roaming_mode              = 1;
                    set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);
                    /* IMCB, Reg/Stack, UA internal configurations */
                    /* Call */
                    nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout     = 120;
                    nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout    = 120;
                    nvram_ims_profile_ptr->ua_config.call_tcall_timer_timeout       = 25;
                    nvram_ims_profile_ptr->ua_config.conf_participant_not_subscribe = 1;
                    nvram_ims_profile_ptr->ua_config.refer_dialog_to_server         = 1;
                    nvram_ims_profile_ptr->ua_config.merge_send_bye                 = 0;
                    nvram_ims_profile_ptr->ua_config.send_183_when_prcd_none        = 0;
                    /* Reg/Stack */
                    nvram_ims_profile_ptr->ua_config.reg_gruu_support               = 0;
                    }
                /* Brazil */
                if(strncmp((char *)&mccmnc[0], "724", 3) == 0){
                    /* reset to default */
                    imc_reset_nvram_to_default(nvram_ims_profile_ptr, sim_slot_id, with_imsi_info);

                    nvram_ims_profile_ptr->ua_config.operator_code                  = 0x0078;   //operator_code = 120(Claro)
                    nvram_ims_profile_ptr->ua_config.VoLTE_Setting_SIP_TCP_MTU_Size = 1080;
                    nvram_ims_profile_ptr->imc_config.ims_roaming_mode              = 1;
                    nvram_ims_profile_ptr->ua_config.UA_reg_t1_timer                = 500;
                    nvram_ims_profile_ptr->ua_config.UA_reg_t2_timer                = 4000;
                    nvram_ims_profile_ptr->ua_config.UA_reg_t4_timer                = 5000;
                    nvram_ims_profile_ptr->ua_config.UA_call_session_min_se         = 90;
                    nvram_ims_profile_ptr->ua_config.UA_call_session_timer          = 0x00000708;  // UA_call_session_timer = 1800
                    nvram_ims_profile_ptr->ua_config.UA_call_precondition           = 0;           // disable precondition
                    
                    set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);
                    
                    /* IMCB, Reg/Stack, UA internal configurations */
                    /* Call */
                    nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout     = 30;
                    nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout    = 30;
                    nvram_ims_profile_ptr->ua_config.wfc_emerg_pidf_country         = 1;
                    nvram_ims_profile_ptr->ua_config.merge_send_bye                 = 0;
                    nvram_ims_profile_ptr->ua_config.refer_dialog_to_server         = 1;
                    nvram_ims_profile_ptr->ua_config.early_media_when_rtp_coming    = 1;
                    nvram_ims_profile_ptr->ua_config.session_refresher_in_req       = 1;
                    nvram_ims_profile_ptr->ua_config.always_use_sip_uri_for_mo_call = 1;
                    nvram_ims_profile_ptr->ua_config.call_id_with_host_inCall       = 1;
            
                    /* Reg/Stack */
                    nvram_ims_profile_ptr->ua_config.pidf_country                   = 1;
                    nvram_ims_profile_ptr->ua_config.de_subscribe                   = 0;
                    nvram_ims_profile_ptr->ua_config.contact_with_accesstype        = 1;
                    nvram_ims_profile_ptr->ua_config.contact_with_expires           = 1;

                    /* IMCB */
                    nvram_ims_profile_ptr->imc_config.ignore_sgn_qci_check          = 1;
                }
                /* Argentina */
                if(strncmp((char *)&mccmnc[0], "722", 3) == 0){
                    /* reset to default */
                    imc_reset_nvram_to_default(nvram_ims_profile_ptr, sim_slot_id, with_imsi_info);

                    nvram_ims_profile_ptr->ua_config.operator_code                  = 0x0078;   //operator_code = 120(Claro)
                    nvram_ims_profile_ptr->ua_config.VoLTE_Setting_SIP_TCP_MTU_Size = 1280;
                    nvram_ims_profile_ptr->imc_config.ims_roaming_mode              = 1;
                    nvram_ims_profile_ptr->ua_config.UA_reg_t1_timer                = 500;
                    nvram_ims_profile_ptr->ua_config.UA_reg_t2_timer                = 4000;
                    nvram_ims_profile_ptr->ua_config.UA_reg_t4_timer                = 5000;
					nvram_ims_profile_ptr->ua_config.subscribe_dialog_to_server     = 1;
					nvram_ims_profile_ptr->ua_config.UA_call_session_timer          = 1800;
                    
                    set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);
                    
                    /* IMCB, Reg/Stack, UA internal configurations */
                    /* Call */
                    nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout     = 90;
                    nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout    = 90;
                    nvram_ims_profile_ptr->ua_config.wfc_emerg_pidf_country         = 1;
                    nvram_ims_profile_ptr->ua_config.merge_send_bye                 = 0;
                    nvram_ims_profile_ptr->ua_config.refer_dialog_to_server         = 1;
                    nvram_ims_profile_ptr->ua_config.conf_participant_not_subscribe = 1;
                    nvram_ims_profile_ptr->ua_config.early_media_when_rtp_coming    = 1;
                    nvram_ims_profile_ptr->imc_config.ims_v4v6_preference           = 2;    //v4_prefer
                    memset(&nvram_ims_profile_ptr->ua_config.UA_call_amr_mode_set[0],0,16);
                    memset(&nvram_ims_profile_ptr->ua_config.UA_call_amr_wb_mode_set[0],0,20);
                    strncpy((char *)nvram_ims_profile_ptr->ua_config.UA_call_amr_wb_mode_set,  
                    "0,1,2", sizeof(nvram_ims_profile_ptr->ua_config.UA_call_amr_wb_mode_set)-1);
                    strncpy((char *)nvram_ims_profile_ptr->ua_config.UA_call_amr_mode_set,  
                    "0,2,4,7", sizeof(nvram_ims_profile_ptr->ua_config.UA_call_amr_mode_set)-1);
                    /* Reg/Stack */
                    nvram_ims_profile_ptr->ua_config.pidf_country                   = 1;
                    }
            }
            break;
        }
        case 122: /* AIS */
        {
            nvram_ims_profile_ptr->ua_config.operator_code             = 0x007A; //operator_code = 122(AIS)
            nvram_ims_profile_ptr->ua_config.UA_call_precondition      = 0;      //disable precondition
            nvram_ims_profile_ptr->ua_config.VoLTE_Setting_SIP_TCP_MTU_Size = 1280;
            set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);

            /* IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server      = 1;
            nvram_ims_profile_ptr->ua_config.merge_send_bye              = 0;
            nvram_ims_profile_ptr->ua_config.subscribe_dialog_to_server  = 1;
            nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout  = 120;
            nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout = 120;
            nvram_ims_profile_ptr->ua_config.send_183_when_prcd_none     = 0;

            /* IMCB */
            memset(&nvram_ims_profile_ptr->imc_config.pdn_rej_handle[0],0,64);              //Ais: "N,33,16,0;N,*,0,1;E,*,0,1;"
            strncpy ( (char *)nvram_ims_profile_ptr->imc_config.pdn_rej_handle,
                    "N,33,16,0;N,*,0,1;E,*,0,1;",
                    sizeof (nvram_ims_profile_ptr->imc_config.pdn_rej_handle)-1
                    );
            break;
        }
        case 124: /* APTG */
        {
            nvram_ims_profile_ptr->ua_config.operator_code            = 0x007C; //operator_code = 124(APTG)
            nvram_ims_profile_ptr->ua_config.VoLTE_Setting_SIP_TCP_MTU_Size = 1500;
            nvram_ims_profile_ptr->imc_config.resouce_retain_timer      = 10*1000;
            nvram_ims_profile_ptr->ua_config.UA_reg_t1_timer           = 0x000001F4;  //UA_reg_t1_timer = 500
            nvram_ims_profile_ptr->ua_config.UA_reg_t2_timer           = 0x00000FA0;  //UA_reg_t2_timer = 4000
            nvram_ims_profile_ptr->ua_config.UA_reg_t4_timer           = 0x00001388;  //UA_reg_t2_timer = 5000
            nvram_ims_profile_ptr->ua_config.UA_call_precondition      = 0;      //disable precondition
            nvram_ims_profile_ptr->ua_config.UA_net_ipsec              = 0;
            nvram_ims_profile_ptr->imc_config.ims_v4v6_preference      = 2;      //v4_prefer
            strncpy ( (char*)nvram_ims_profile_ptr->ua_config.user_agent,  
                      "MTK IMS v1.0.1", 
                      sizeof (nvram_ims_profile_ptr->ua_config.user_agent)-1
                    );
            set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);

            /* IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server             = 1;
            nvram_ims_profile_ptr->ua_config.merge_send_bye                     = 0;
            nvram_ims_profile_ptr->ua_config.send_183_when_prcd_none            = 0;
            nvram_ims_profile_ptr->ua_config.subscribe_dialog_to_server         = 1;
            nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout         = 60;
            nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout        = 90;
            nvram_ims_profile_ptr->ua_config.use_eps_prefix_in_phone_context    = 0;
            nvram_ims_profile_ptr->ua_config.UA_call_amr_wb_pt                  = 99;
            nvram_ims_profile_ptr->ua_config.call_id_with_host_inCall           = 1;
            nvram_ims_profile_ptr->ua_config.use_org_sdp_for_invite_without_sdp = 1;

            /* Reg/Stack */
            nvram_ims_profile_ptr->ua_config.contact_with_transport             = 0;

            /* IMCB */
            memset(&nvram_ims_profile_ptr->imc_config.pdn_rej_handle[0],0,64);              //APTG: "N,33,16,0;N,*,0,1;E,*,0,1;"
            strncpy ( (char *)nvram_ims_profile_ptr->imc_config.pdn_rej_handle,
                    "N,33,16,0;N,*,0,1;E,*,0,1;",
                    sizeof (nvram_ims_profile_ptr->imc_config.pdn_rej_handle)-1
                    );
            break;
        }
        case 125: /* DTAC */
        {
            nvram_ims_profile_ptr->ua_config.operator_code                    = 0x007D; //operator_code = 125(DTAC)
            nvram_ims_profile_ptr->ua_config.UA_reg_t1_timer                  = 500;
            nvram_ims_profile_ptr->ua_config.UA_reg_t2_timer                  = 4000;
            nvram_ims_profile_ptr->ua_config.UA_reg_t4_timer                  = 5000;
            nvram_ims_profile_ptr->ua_config.register_expiry                  = 3600;
            set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);

            /* IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server          = 1;
            nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout      = 180;
            nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout     = 180;
			
            /* IMCB */
            nvram_ims_profile_ptr->imc_config.not_acquire_audio_rtcp                = 1;
            nvram_ims_profile_ptr->imc_config.not_acquire_video_rtcp                = 1;
            memset(&nvram_ims_profile_ptr->imc_config.pcscf_home_policy_list[0],0,32);
            strncpy ( (char *)nvram_ims_profile_ptr->imc_config.pcscf_home_policy_list,  
                      "0,2,3,6,1,4,5,0", 
                      sizeof (nvram_ims_profile_ptr->imc_config.pcscf_home_policy_list)-1   //set pcscf policy for home NW 
                    );
            memset(&nvram_ims_profile_ptr->imc_config.pcscf_visit_policy_list[0],0,32);
            strncpy ( (char *)nvram_ims_profile_ptr->imc_config.pcscf_visit_policy_list,  
                      "0,2,3,6,1,4,5,0", 
                      sizeof (nvram_ims_profile_ptr->imc_config.pcscf_visit_policy_list)-1   //set pcscf policy for visit NW 
                    );
            memset(&nvram_ims_profile_ptr->imc_config.pdn_rej_handle[0],0,64);               //DTAC: "N,33,18,0;N,*,0,1;E,*,0,1;"
            strncpy ( (char *)nvram_ims_profile_ptr->imc_config.pdn_rej_handle,
                    "N,33,18,0;N,*,0,1;E,*,0,1;",
                    sizeof (nvram_ims_profile_ptr->imc_config.pdn_rej_handle)-1
                    );
            break;
        }
        case 126: /* Turkey Avea */
        {
            nvram_ims_profile_ptr->ua_config.operator_code              = 0x007E; //operator_code = 126(Turkey Avea)
            nvram_ims_profile_ptr->ua_config.UA_reg_ipsec_algo          = 0x03; //NULL+MD5, NULL+SHA1
            nvram_ims_profile_ptr->ua_config.UA_call_session_timer      = 900;
            nvram_ims_profile_ptr->ua_config.UA_call_session_min_se     = 90;
            nvram_ims_profile_ptr->ua_config.register_expiry            = 3600;
            nvram_ims_profile_ptr->ua_config.UA_reg_t1_timer            = 500;
            nvram_ims_profile_ptr->ua_config.UA_reg_t2_timer            = 4000;
            nvram_ims_profile_ptr->ua_config.UA_reg_t4_timer            = 5000;
            
            set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);

            /* IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server         = 1;
            nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout     = 90;
            nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout    = 90;
            nvram_ims_profile_ptr->ua_config.early_media_when_rtp_coming    = 1;
            nvram_ims_profile_ptr->ua_config.UA_call_amr_pt                 = 118;
            nvram_ims_profile_ptr->ua_config.UA_call_amr_wb_pt              = 116;
            nvram_ims_profile_ptr->ua_config.UA_call_tel_evt_pt             = 110;
            nvram_ims_profile_ptr->ua_config.conf_participant_not_subscribe = 1;
            nvram_ims_profile_ptr->ua_config.send_183_when_prcd_none        = 0;
            nvram_ims_profile_ptr->ua_config.auto_unhold_when_rcv_recvonly  = 1;

            /* Reg/Stack */
            nvram_ims_profile_ptr->ua_config.use_udp_on_tcp_fail            = 0;
            nvram_ims_profile_ptr->ua_config.ipsec_fail_allowed             = 0;
            nvram_ims_profile_ptr->ua_config.de_subscribe                   = 0;
            nvram_ims_profile_ptr->ua_config.rereg_in_oos_end               = 1;
            nvram_ims_profile_ptr->ua_config.support_resub                  = 0;

            /* IMCB */
            nvram_ims_profile_ptr->imc_config.default_fallback_support      = 1;
            memset(&nvram_ims_profile_ptr->imc_config.pcscf_home_policy_list[0],0,32);
            strncpy ( (char *)nvram_ims_profile_ptr->imc_config.pcscf_home_policy_list,  
                      "0,2,6,3,1,4,5,0", 
                      sizeof (nvram_ims_profile_ptr->imc_config.pcscf_home_policy_list)-1   //set pcscf policy for home NW 
                    );
            memset(&nvram_ims_profile_ptr->imc_config.pcscf_visit_policy_list[0],0,32);
            strncpy ( (char *)nvram_ims_profile_ptr->imc_config.pcscf_visit_policy_list,  
                      "0,2,6,3,1,4,5,0", 
                      sizeof (nvram_ims_profile_ptr->imc_config.pcscf_visit_policy_list)-1   //set pcscf policy for visit NW 
                    );
            memset(&nvram_ims_profile_ptr->imc_config.pdn_rej_handle[0],0,64);
            strncpy ( (char *)nvram_ims_profile_ptr->imc_config.pdn_rej_handle,
                    "N,33,18,0;N,*,0,1;E,*,0,1;",
                    sizeof (nvram_ims_profile_ptr->imc_config.pdn_rej_handle)-1
                    );
            break;
        }
        case 127: /* MEGAFON */
        {
            nvram_ims_profile_ptr->ua_config.operator_code                      = 0x007F; //operator_code = 127(MEGAFONE)
            nvram_ims_profile_ptr->ua_config.VoLTE_Setting_SIP_TCP_On_Demand    = 0;
            nvram_ims_profile_ptr->ua_config.UA_net_ipsec                       = 0;
            nvram_ims_profile_ptr->imc_config.resouce_retain_timer              = 5*1000;
            nvram_ims_profile_ptr->imc_config.sms_support                       = 0;
            set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);


            /* IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.use_eps_prefix_in_phone_context    = 0;
            nvram_ims_profile_ptr->ua_config.sendrecv_before_prcd               = 0;
            nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout         = 120;
            nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout        = 120;
            nvram_ims_profile_ptr->ua_config.conf_participant_not_subscribe     = 1;
            nvram_ims_profile_ptr->ua_config.subscribe_dialog_to_server         = 1;
            nvram_ims_profile_ptr->ua_config.merge_send_bye                     = 0;
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server             = 1;
            nvram_ims_profile_ptr->ua_config.sendrecv_before_conf_call_prcd     = 1;
            
            /* IMCB */
            nvram_ims_profile_ptr->imc_config.default_fallback_support          = 1;
            memset(&nvram_ims_profile_ptr->imc_config.pcscf_home_policy_list[0],0,32);
            strncpy ( (char *)nvram_ims_profile_ptr->imc_config.pcscf_home_policy_list,  
                      "0,2,3,6,1,4,5,0", 
                      sizeof (nvram_ims_profile_ptr->imc_config.pcscf_home_policy_list)-1   //set pcscf policy for home NW 
                    );
            memset(&nvram_ims_profile_ptr->imc_config.pcscf_visit_policy_list[0],0,32);
            strncpy ( (char *)nvram_ims_profile_ptr->imc_config.pcscf_visit_policy_list,  
                      "0,3,2,6,1,4,5,0", 
                      sizeof (nvram_ims_profile_ptr->imc_config.pcscf_visit_policy_list)-1   //set pcscf policy for visit NW 
                    );

            break;
        }
        case 129: /* KDDI */
        {
            nvram_ims_profile_ptr->ua_config.operator_code                  = 0x0081; //operator_code = 129(KDDI)
            nvram_ims_profile_ptr->imc_config.allow_emergency_dereg         = 2;      // KDDI_v1_VoLTE_3_082, deactivate emergency PDN directly
            nvram_ims_profile_ptr->imc_config.emergency_reg_retain_timer    = 300000; // 300 sec, KDDI_V1_VoLTE_3_082
            nvram_ims_profile_ptr->ua_config.UA_call_no_resource_code       = 580;
            nvram_ims_profile_ptr->ua_config.UA_call_rej_by_user_code       = 603;
            nvram_ims_profile_ptr->ua_config.set_rtcp_0                     = 1;
            nvram_ims_profile_ptr->imc_config.resouce_retain_timer          = 5000;  // 5 000ms (5 seconds)
            nvram_ims_profile_ptr->ua_config.UA_call_session_timer          = 1800;
            nvram_ims_profile_ptr->ua_config.UA_call_session_min_se         = 90;
            nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout     = 80;
            nvram_ims_profile_ptr->ua_config.VoLTE_Setting_SIP_Force_Use_UDP= 1;
            nvram_ims_profile_ptr->ua_config.support_max_retry_algo         = 1;
            nvram_ims_profile_ptr->ua_config.UA_reg_t1_timer                = 3000; // 3 sec
            nvram_ims_profile_ptr->ua_config.UA_reg_b_timer                 = 10000; // 10 sec
            nvram_ims_profile_ptr->ua_config.UA_reg_f_timer                 = 30000; // 30 sec
            nvram_ims_profile_ptr->ua_config.UA_reg_h_timer                 = 30000; // 30 sec
            nvram_ims_profile_ptr->ua_config.UA_reg_j_timer                 = 30000; // 30 sec
            nvram_ims_profile_ptr->ua_config.add_user_phone                 = 0;
            /* IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.always_use_sip_uri_for_mo_call = 1;
            nvram_ims_profile_ptr->ua_config.use_183_for_early_media        = 1;

            memset(&nvram_ims_profile_ptr->ua_config.UA_call_amr_wb_mode_set[0],0,20);
            strncpy((char *)nvram_ims_profile_ptr->ua_config.UA_call_amr_wb_mode_set,  
                    "0,1,2", 
                    sizeof(nvram_ims_profile_ptr->ua_config.UA_call_amr_wb_mode_set)-1);

            break;
        }
        case 130: /* TIM  */
        {
            nvram_ims_profile_ptr->ua_config.operator_code              = 0x0082; //operator_code = 130(TIM)
            nvram_ims_profile_ptr->ua_config.UA_call_session_timer      = 0x00000708;  // UA_call_session_timer = 1800s
            
            set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);

            /* IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server         = 1;
            nvram_ims_profile_ptr->ua_config.subscribe_dialog_to_server     = 1;
            nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout     = 60;
            nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout    = 60;
            nvram_ims_profile_ptr->ua_config.merge_send_bye                 = 0;
            nvram_ims_profile_ptr->ua_config.join_send_bye                  = 0;
            nvram_ims_profile_ptr->ua_config.session_refresher_in_req       = 1;
            
            /* Reg/Stack */
            nvram_ims_profile_ptr->ua_config.not_auto_reg_403               = 1;

            /* Country specific configurations */
            if(with_imsi_info){
                /* Brazil */
                if(strncmp((char *)&mccmnc[0], "724", 3) == 0){
                    /* reset to default */
                    imc_reset_nvram_to_default(nvram_ims_profile_ptr, sim_slot_id, with_imsi_info);

                    nvram_ims_profile_ptr->ua_config.operator_code                  = 0x0082;      //operator_code = 130(TIM)
                    nvram_ims_profile_ptr->ua_config.UA_call_session_timer          = 0x00000708;  // UA_call_session_timer = 1800s
                    nvram_ims_profile_ptr->ua_config.UA_call_session_min_se         = 90;
                    nvram_ims_profile_ptr->imc_config.ims_reg_allowed_at_23g        = 1;
                    nvram_ims_profile_ptr->imc_config.ims_roaming_mode              = 1;
                    
                    set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);
                    
                    /* IMCB, Reg/Stack, UA internal configurations */
                    /* Call */
                    nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout     = 60;
                    nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout    = 60;
                    nvram_ims_profile_ptr->ua_config.merge_send_bye                 = 0;
                    nvram_ims_profile_ptr->ua_config.subscribe_dialog_to_server     = 1;
                    nvram_ims_profile_ptr->ua_config.refer_dialog_to_server         = 1;
                    nvram_ims_profile_ptr->ua_config.conf_participant_not_subscribe = 1;
                    /* Reg/Stack */
                    nvram_ims_profile_ptr->ua_config.de_subscribe                   = 0;
                }
            }
            break;
        }
        case 131: /* TrueMove */
        {
            nvram_ims_profile_ptr->ua_config.operator_code              = 0x0083; //operator_code = 131(TrueMove)
            nvram_ims_profile_ptr->ua_config.register_expiry            = 3600;
            nvram_ims_profile_ptr->ua_config.UA_call_precondition       = 0;      //disable precondition
            nvram_ims_profile_ptr->ua_config.UA_call_session_timer      = 0x00000384;  // UA_call_session_timer = 900
            nvram_ims_profile_ptr->imc_config.resouce_retain_timer      = 10*1000;//resource_retain_timer = 10 000ms (10 seconds)
            nvram_ims_profile_ptr->imc_config.ims_v4v6_preference       = 2;      //v4_prefer
            set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);

            /* IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.sendrecv_before_prcd               = 1;
            nvram_ims_profile_ptr->ua_config.conf_participant_not_subscribe     = 1;
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server             = 1;
            nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout         = 90;
            nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout        = 90;
            nvram_ims_profile_ptr->ua_config.UA_call_session_min_se             = 900;
			
            /* Reg/Stack */
            nvram_ims_profile_ptr->ua_config.reg_gruu_support                   = 0;
            nvram_ims_profile_ptr->ua_config.de_subscribe                       = 0;
            nvram_ims_profile_ptr->ua_config.support_resub                      = 0;

            /* IMCB */
            nvram_ims_profile_ptr->imc_config.default_fallback_support          = 1;
            memset(&nvram_ims_profile_ptr->imc_config.pcscf_home_policy_list[0],0,32);
            strncpy ( (char *)nvram_ims_profile_ptr->imc_config.pcscf_home_policy_list,  
                      "0,2,6,1,3,4,5,0", 
                      sizeof (nvram_ims_profile_ptr->imc_config.pcscf_home_policy_list)-1   //set pcscf policy for home NW 
                    );
            memset(&nvram_ims_profile_ptr->imc_config.pcscf_visit_policy_list[0],0,32);
            strncpy ( (char *)nvram_ims_profile_ptr->imc_config.pcscf_visit_policy_list,  
                      "0,2,6,1,3,4,5,0", 
                      sizeof (nvram_ims_profile_ptr->imc_config.pcscf_visit_policy_list)-1   //set pcscf policy for visit NW 
                    );
            break;
        }
		case 132: /* Movistar/ViVo Brazil */
        {
			/*default seting is for Movistar-peru:mnc=716*/
            nvram_ims_profile_ptr->ua_config.operator_code                      = 0x0084;   //operator_code = 132(Movistar) mcc=716, mnc=06
            nvram_ims_profile_ptr->imc_config.ims_reg_allowed_at_23g            = 1;        // IMS registration allowed and maintained in 23G as well
            nvram_ims_profile_ptr->imc_config.sms_support                       = 0;
            nvram_ims_profile_ptr->ua_config.register_expiry                    = 3600;
            nvram_ims_profile_ptr->ua_config.UA_reg_t1_timer                    = 500;
            nvram_ims_profile_ptr->ua_config.UA_reg_t2_timer                    = 4000;
            nvram_ims_profile_ptr->ua_config.UA_reg_t4_timer                    = 5000;
            nvram_ims_profile_ptr->imc_config.ims_v4v6_preference               = 2;        //v4_prefer
            set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);

            /*IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.always_use_sip_uri_for_mo_call     = 1;
            nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout         = 90;
            nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout        = 90;
            nvram_ims_profile_ptr->ua_config.use_eps_prefix_in_phone_context    = 0;            
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server             = 1;
            nvram_ims_profile_ptr->ua_config.subscribe_dialog_to_server         = 1;
            nvram_ims_profile_ptr->ua_config.merge_send_bye                     = 0;
            nvram_ims_profile_ptr->ua_config.terminal_based_cw                  = 1;
            nvram_ims_profile_ptr->ua_config.UA_call_amr_fmt_variant            = 0x1111;
            nvram_ims_profile_ptr->ua_config.UA_call_amr_pt                     = 105;
            nvram_ims_profile_ptr->ua_config.UA_call_amr_oct_pt                 = 104;
            nvram_ims_profile_ptr->ua_config.UA_call_amr_wb_pt                  = 107;
            nvram_ims_profile_ptr->ua_config.UA_call_amr_wb_oct_pt              = 106;
            nvram_ims_profile_ptr->ua_config.UA_call_tel_evt_pt                 = 102;
            nvram_ims_profile_ptr->ua_config.UA_call_tel_evt_wb_pt              = 101;
			nvram_ims_profile_ptr->ua_config.UA_call_session_timer              = 1800;
			nvram_ims_profile_ptr->ua_config.prefer_original_codec              = 0;
			
            /* Reg/Stack */
            nvram_ims_profile_ptr->ua_config.reg_gruu_support                   = 0;

            /* IMCB */
            nvram_ims_profile_ptr->imc_config.not_acquire_audio_rtcp            = 1;
            nvram_ims_profile_ptr->imc_config.default_fallback_support          = 1;
            nvram_ims_profile_ptr->imc_config.resouce_retain_timer              = 5000;
            memset(&nvram_ims_profile_ptr->imc_config.pcscf_home_policy_list[0],0,32);
            strncpy ( (char *)nvram_ims_profile_ptr->imc_config.pcscf_home_policy_list,
                "0,2,3,6,1,4,5,0", 
                sizeof (nvram_ims_profile_ptr->imc_config.pcscf_home_policy_list)-1         //set pcscf policy for home NW 
                );
            memset(&nvram_ims_profile_ptr->imc_config.pcscf_visit_policy_list[0],0,32);
            strncpy ( (char *)nvram_ims_profile_ptr->imc_config.pcscf_visit_policy_list,  
                "0,2,3,6,1,4,5,0", 
                sizeof (nvram_ims_profile_ptr->imc_config.pcscf_visit_policy_list)-1        //set pcscf policy for visit NW 
                );
            memset(&nvram_ims_profile_ptr->imc_config.pdn_rej_handle[0],0,64);
            strncpy ( (char *)nvram_ims_profile_ptr->imc_config.pdn_rej_handle,
                "N,27,16,0;N,33,18,0;N,*,0,1;E,*,0,1;",
                sizeof (nvram_ims_profile_ptr->imc_config.pdn_rej_handle)-1
            );

            /* Country specific configurations */
            if(with_imsi_info){
                /* Colombia */
                if(strncmp((char *)&mccmnc[0], "732", 3) == 0){
                    /* reset to default */
                    imc_reset_nvram_to_default(nvram_ims_profile_ptr, sim_slot_id, with_imsi_info);

                    nvram_ims_profile_ptr->ua_config.operator_code                  = 0x0084;   //operator_code = 132(Movistar)
                    nvram_ims_profile_ptr->imc_config.ims_v4v6_preference           = 2;      //v4_prefer
                    set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);
                    /* IMCB, Reg/Stack, UA internal configurations */
                    /* Call */
                    nvram_ims_profile_ptr->ua_config.refer_dialog_to_server         = 1;
                    nvram_ims_profile_ptr->ua_config.subscribe_dialog_to_server     = 1;
                    nvram_ims_profile_ptr->ua_config.merge_send_bye                 = 0;
                    /* Reg/Stack */
                    /* IMCB */
                    memset(&nvram_ims_profile_ptr->imc_config.pcscf_home_policy_list[0],0,32);
                    strncpy ( (char *)nvram_ims_profile_ptr->imc_config.pcscf_home_policy_list,
                        "0,2,6,3,1,4,5,0",
                        sizeof (nvram_ims_profile_ptr->imc_config.pcscf_home_policy_list)-1         //set pcscf policy for home NW 
                        );
                    memset(&nvram_ims_profile_ptr->imc_config.pcscf_visit_policy_list[0],0,32);
                    strncpy ( (char *)nvram_ims_profile_ptr->imc_config.pcscf_visit_policy_list,  
                        "0,2,6,3,1,4,5,0", 
                        sizeof (nvram_ims_profile_ptr->imc_config.pcscf_visit_policy_list)-1        //set pcscf policy for visit NW 
                    );
                    memset(&nvram_ims_profile_ptr->imc_config.pdn_rej_handle[0],0,64);
                    strncpy ( (char *)nvram_ims_profile_ptr->imc_config.pdn_rej_handle,
                    "N,27,16,0;N,33,18,0;N,*,0,1;E,*,0,1;",
                    sizeof (nvram_ims_profile_ptr->imc_config.pdn_rej_handle)-1
                    );
                }
                /* Argentina */
                if(strncmp((char *)&mccmnc[0], "722", 3) == 0){
                    /* reset to default */
                    imc_reset_nvram_to_default(nvram_ims_profile_ptr, sim_slot_id, with_imsi_info);

                    nvram_ims_profile_ptr->ua_config.operator_code                  = 0x0084;   //operator_code = 132(Movistar)
                    
                    set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);
                    
                    /* IMCB, Reg/Stack, UA internal configurations */
                    /* Call */
                    nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout     = 90;
                    nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout    = 90;
					nvram_ims_profile_ptr->ua_config.de_subscribe                   = 0;
                    nvram_ims_profile_ptr->ua_config.TMO_specific_SDP               = 1;
					nvram_ims_profile_ptr->ua_config.refer_dialog_to_server         = 1;
					nvram_ims_profile_ptr->ua_config.always_use_sip_uri_for_mo_call = 1;
                    
                    /* Reg/Stack */
                    nvram_ims_profile_ptr->ua_config.not_auto_reg_403               = 1;
				}
                /* ViVo Brazil */
                if(strncmp((char *)&mccmnc[0], "724", 3) == 0){
                    /* reset to default */
                    imc_reset_nvram_to_default(nvram_ims_profile_ptr, sim_slot_id, with_imsi_info);

                    nvram_ims_profile_ptr->ua_config.operator_code                  = 0x0084;   //operator_code = 132(ViVo Brazil)
                    nvram_ims_profile_ptr->ua_config.UA_call_session_timer          = 1800;
                    nvram_ims_profile_ptr->ua_config.UA_call_session_min_se         = 600;
                    
                    set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);
                    
                    /* IMCB, Reg/Stack, UA internal configurations */
                    /* Call */
                    nvram_ims_profile_ptr->ua_config.early_media_when_rtp_coming    = 1;
                    nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout     = 90;
                    nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout    = 90;
                    nvram_ims_profile_ptr->ua_config.subscribe_dialog_to_server     = 1;
                    nvram_ims_profile_ptr->ua_config.refer_dialog_to_server         = 1;
                }
                /* Mexico */
                if(strncmp((char *)&mccmnc[0], "334", 3) == 0){
                    /* reset to default */
                    imc_reset_nvram_to_default(nvram_ims_profile_ptr, sim_slot_id, with_imsi_info);

                    nvram_ims_profile_ptr->ua_config.operator_code                  = 0x0084;   //operator_code = 132(Movistar)
                    nvram_ims_profile_ptr->ua_config.VoLTE_Setting_SIP_TCP_MTU_Size = 1080;
                    
                    set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);
                    
                    /* IMCB, Reg/Stack, UA internal configurations */
                    /* Call */                    
                    /* Reg/Stack */
                }
            }
            break;
        }
        case 133: /* DU */
        {
            nvram_ims_profile_ptr->ua_config.operator_code = 0x0085; //operator_code = 133(DU)
            nvram_ims_profile_ptr->ua_config.register_expiry = 86400;
            nvram_ims_profile_ptr->imc_config.resouce_retain_timer = 4000;
            nvram_ims_profile_ptr->ua_config.UA_reg_t4_timer = 20000;
            nvram_ims_profile_ptr->ua_config.VoLTE_Setting_SIP_Force_Use_UDP = 1;
            nvram_ims_profile_ptr->ua_config.UA_reg_specific_ipsec_algo = 0x08;
            nvram_ims_profile_ptr->imc_config.ims_v4v6_preference = 2; //v4_prefer
            set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);

			/* IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout = 90;
            nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout = 90;
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server = 1;

            /* Reg/Stack */
            nvram_ims_profile_ptr->ua_config.reg_gruu_support = 0;

            /* IMCB */
            memset(&nvram_ims_profile_ptr->imc_config.pcscf_home_policy_list[0],0,32);
            strncpy ( (char *)nvram_ims_profile_ptr->imc_config.pcscf_home_policy_list,  
                      "0,2,6,1,4,5,3,0", 
                      sizeof (nvram_ims_profile_ptr->imc_config.pcscf_home_policy_list)-1   //set pcscf policy for home NW 
                    );
            memset(&nvram_ims_profile_ptr->imc_config.pcscf_visit_policy_list[0],0,32);
            strncpy ( (char *)nvram_ims_profile_ptr->imc_config.pcscf_visit_policy_list,  
                      "0,2,6,1,4,5,3,0", 
                      sizeof (nvram_ims_profile_ptr->imc_config.pcscf_visit_policy_list)-1   //set pcscf policy for visit NW 
                    );
            break;
        }      
        case 134: /* Elisa Finland */
        {
            nvram_ims_profile_ptr->ua_config.operator_code                      = 0x0086; //operator_code = 134(Elisa Finland)
            nvram_ims_profile_ptr->ua_config.UA_reg_t4_timer                    = 5000;
            nvram_ims_profile_ptr->ua_config.register_expiry                    = 20000;
            nvram_ims_profile_ptr->ua_config.VoLTE_Setting_SIP_TCP_MTU_Size     = 1400;
            
            set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);

            /* IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout         = 90;
            nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout        = 90;            
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server             = 1;
            nvram_ims_profile_ptr->ua_config.early_media_when_rtp_coming        = 1;
            nvram_ims_profile_ptr->ua_config.merge_send_bye                     = 0;
            nvram_ims_profile_ptr->ua_config.conf_participant_not_subscribe     = 1;

            /* Reg/Stack */
            nvram_ims_profile_ptr->ua_config.use_udp_on_tcp_fail                = 0;

            /* IMCB */
            memset(&nvram_ims_profile_ptr->imc_config.pdn_rej_handle[0],0,64);              //Elisa FI: "N,33,16,0;N,*,0,1;E,*,0,1;"
            strncpy ( (char *)nvram_ims_profile_ptr->imc_config.pdn_rej_handle,
                    "N,33,16,0;N,*,0,1;E,*,0,1;",
                    sizeof (nvram_ims_profile_ptr->imc_config.pdn_rej_handle)-1
                    );   

            break;
        }
        case 135: /* MTS */
        {
            nvram_ims_profile_ptr->ua_config.operator_code                      = 0x0087;   //operator_code = 135(MTS Russia)
            nvram_ims_profile_ptr->ua_config.UA_call_session_timer              = 0x00000384;  // UA_call_session_timer = 900s
            nvram_ims_profile_ptr->imc_config.resouce_retain_timer              = 6000;  // 6 seconds

            set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);

            /*IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout         = 90;
            nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout        = 90;
            nvram_ims_profile_ptr->ua_config.merge_send_bye                     = 0;
            nvram_ims_profile_ptr->ua_config.early_media_when_rtp_coming        = 1;
            nvram_ims_profile_ptr->ua_config.add_country_to_pani                = 1;
            nvram_ims_profile_ptr->ua_config.UA_call_session_min_se             = 90;
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server             = 1;

            /* Reg/Stack */
            nvram_ims_profile_ptr->ua_config.wfc_with_plani                     = 1;
            nvram_ims_profile_ptr->ua_config.use_udp_on_tcp_fail                = 0;

            /* IMCB */
            
            break;
        }
        case 136: /* Entel */
        {
            nvram_ims_profile_ptr->ua_config.operator_code                      = 0x0088;   //operator_code = 136(Entel) mcc=716, mnc=i17
            nvram_ims_profile_ptr->ua_config.UA_call_precondition               = 0;
            set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);
            nvram_ims_profile_ptr->ua_config.VoLTE_Setting_SIP_TCP_MTU_Size     = 1280;
            nvram_ims_profile_ptr->ua_config.UA_net_ipsec                       = 0;
            nvram_ims_profile_ptr->imc_config.ims_v4v6_preference               = 2;      //v4_prefer

            /*IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout         = 90;
            nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout        = 90;
            nvram_ims_profile_ptr->ua_config.subscribe_dialog_to_server         = 1;
            nvram_ims_profile_ptr->ua_config.set_rtcp_0                         = 1;
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server             = 1;

            /* Reg/Stack */
            nvram_ims_profile_ptr->ua_config.reg_gruu_support                   = 0;

            /* IMCB */
            memset(&nvram_ims_profile_ptr->imc_config.pcscf_home_policy_list[0],0,32);
            strncpy ( (char *)nvram_ims_profile_ptr->imc_config.pcscf_home_policy_list,
                "0,2,6,3,1,4,5,0", 
                sizeof (nvram_ims_profile_ptr->imc_config.pcscf_home_policy_list)-1         //set pcscf policy for home NW 
                );
            memset(&nvram_ims_profile_ptr->imc_config.pcscf_visit_policy_list[0],0,32);
            strncpy ( (char *)nvram_ims_profile_ptr->imc_config.pcscf_visit_policy_list,  
                "0,2,6,3,1,4,5,0", 
                sizeof (nvram_ims_profile_ptr->imc_config.pcscf_visit_policy_list)-1        //set pcscf policy for visit NW 
                );
            break;
        }
        case 137: /* Tele2 */
        {
            nvram_ims_profile_ptr->ua_config.operator_code                      = 0x0089;   //operator_code = 137(Tele2 Russia)
            nvram_ims_profile_ptr->ua_config.register_expiry                    = 1800;

            set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);

            /*IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.rtcp_interval                      = 0;
            nvram_ims_profile_ptr->ua_config.subscribe_dialog_to_server         = 1;
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server             = 1;
            nvram_ims_profile_ptr->ua_config.always_use_sip_uri_for_mo_call     = 1;
            nvram_ims_profile_ptr->ua_config.send_183_when_prcd_none            = 0;
            nvram_ims_profile_ptr->ua_config.use_org_sdp_for_invite_without_sdp = 1;

            /* Reg/Stack */
            nvram_ims_profile_ptr->ua_config.authorization_with_algo            = 1;
            nvram_ims_profile_ptr->ua_config.de_subscribe                       = 0;

            /* IMCB */
            
            break;
        }
        case 141: /* CellC */
        {
            nvram_ims_profile_ptr->ua_config.operator_code                      = 0x008D;   //operator_code = 141(CellC South-Africa)
            nvram_ims_profile_ptr->ua_config.VoLTE_Setting_SIP_TCP_MTU_Size     = 1440;
            nvram_ims_profile_ptr->ua_config.register_expiry                    = 7200;
            nvram_ims_profile_ptr->ua_config.VoLTE_Setting_SIP_TCP_On_Demand    = 0;

            set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);

            /*IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout         = 90;
            nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout        = 90;
            nvram_ims_profile_ptr->ua_config.send_183_when_prcd_none            = 0;
            /* Reg/Stack */
            /* IMCB */
            
            break;
        }
        case 143: /* TurkCell */
        {
            nvram_ims_profile_ptr->ua_config.operator_code                      = 0x008F;   //operator_code = 143(TurkCell)
            nvram_ims_profile_ptr->ua_config.UA_call_session_timer              = 1800;
            nvram_ims_profile_ptr->ua_config.UA_call_session_min_se             = 90;
            nvram_ims_profile_ptr->imc_config.resouce_retain_timer              = 5000;     // resource_retain_timer
            nvram_ims_profile_ptr->ua_config.VoLTE_Setting_SIP_Force_Use_UDP    = 1;
            nvram_ims_profile_ptr->ua_config.VoLTE_Setting_SIP_TCP_MTU_Size     = 1280;

            set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);

            /*IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server             = 1;
            nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout         = 90;
            nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout        = 90;
            nvram_ims_profile_ptr->ua_config.early_media_when_rtp_coming        = 1;
            nvram_ims_profile_ptr->ua_config.merge_send_bye                     = 0;
            nvram_ims_profile_ptr->ua_config.auto_unhold_when_rcv_recvonly      = 1;

            /* Reg/Stack */
            nvram_ims_profile_ptr->ua_config.rereg_in_oos_end               = 1;

            /* IMCB */
            memset(&nvram_ims_profile_ptr->imc_config.pdn_rej_handle[0],0,64);
            strncpy ( (char *)nvram_ims_profile_ptr->imc_config.pdn_rej_handle,
                    "N,33,18,0;N,*,0,1;E,*,0,1;",
                    sizeof (nvram_ims_profile_ptr->imc_config.pdn_rej_handle)-1
                    );            
            break;
        }
        case 144: /* Smile */
        {
            nvram_ims_profile_ptr->ua_config.operator_code                      = 0x0090;   //operator_code = 144(Smile South-Africa)
            nvram_ims_profile_ptr->ua_config.VoLTE_Setting_SIP_TCP_MTU_Size     = 4;
            nvram_ims_profile_ptr->imc_config.ussd_support                      = 1;
            nvram_ims_profile_ptr->ua_config.UA_net_ipsec                       = 0;        //NONE

            set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);

            /*IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout         = 90;
            nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout        = 90;
            nvram_ims_profile_ptr->ua_config.subscribe_dialog_to_server         = 1;
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server             = 1;
            nvram_ims_profile_ptr->ua_config.merge_send_bye                     = 0;
            nvram_ims_profile_ptr->ua_config.use_eps_prefix_in_phone_context    = 0;
            nvram_ims_profile_ptr->ua_config.UA_call_session_min_se             = 90;

            /* Reg/Stack */
            /* IMCB */
            
            break;
        }
        case 145: /* Cricket */
        {
            nvram_ims_profile_ptr->ua_config.operator_code = 0x0091;   //operator_code = 145(Cricket)
            nvram_ims_profile_ptr->imc_config.resouce_retain_timer     = 0x00001F40;  // 8000ms (8 seconds)
            nvram_ims_profile_ptr->imc_config.auto_re_reg_base_timer   = 120*1000;    // 120000s (120 seconds) CDR-LTE-1468
            nvram_ims_profile_ptr->imc_config.auto_re_reg_max_timer    = 7200*1000;   // 7200000ms (7200 seconds) CDR-LTE-1468 
            nvram_ims_profile_ptr->ua_config.UA_call_session_timer     = 0;
            nvram_ims_profile_ptr->ua_config.UA_reg_t1_timer           = 500;   // CDR-SPC-2920
            nvram_ims_profile_ptr->ua_config.VoLTE_Setting_SIP_TCP_MTU_Size    = 1230;
            nvram_ims_profile_ptr->ua_config.UA_call_no_resource_code = 580;   //AT&T TC LTE-BTR-5-5560
            nvram_ims_profile_ptr->ua_config.UA_call_session_min_se   = 0;
            nvram_ims_profile_ptr->imc_config.ims_reg_allowed_at_23g  = 1;     // IMS registration allowed and maintained in 23G as well (CDR-NWS-705)        
            nvram_ims_profile_ptr->imc_config.ims_roaming_mode        = 1;     // enabled
            nvram_ims_profile_ptr->imc_config.ims_video_qci           = 255;
            nvram_ims_profile_ptr->imc_config.wifi_em_reg_by_em_pdn   = 1;

            set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);

            /* IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.always_use_sip_uri_for_mo_call     = 1;
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server             = 1;
            nvram_ims_profile_ptr->ua_config.oir_privacy_to_header              = 1;
            nvram_ims_profile_ptr->ua_config.register_cap_whenever              = 1;
            nvram_ims_profile_ptr->ua_config.no_auto_retry_for_mo_call          = 1;
            nvram_ims_profile_ptr->ua_config.use_eps_prefix_in_phone_context    = 0;
            nvram_ims_profile_ptr->ua_config.subscribe_dialog_to_server         = 1;
            nvram_ims_profile_ptr->ua_config.conference_subscribe_timing        = 1;
            nvram_ims_profile_ptr->ua_config.set_zero_cell_id_in_wifi           = 1;
            nvram_ims_profile_ptr->ua_config.reject_mtcall_by_vops              = 1;
            nvram_ims_profile_ptr->ua_config.rel_conf_if_no_participant         = 1;
            nvram_ims_profile_ptr->ua_config.call_tcall_timer_timeout           = 60;
            nvram_ims_profile_ptr->ua_config.reject_code_in23G                  = 488;
            nvram_ims_profile_ptr->ua_config.delay_unhold_call                  = 1;
            nvram_ims_profile_ptr->ua_config.show_octet_align                   = 0;
            nvram_ims_profile_ptr->ua_config.video_conf_if_one_is_video         = 1;
            nvram_ims_profile_ptr->ua_config.call_rel_holdcall_in_midcall_SRVCC = 1;
            nvram_ims_profile_ptr->ua_config.dereg_send_bye                     = 1;

            /* Reg/Stack */
            nvram_ims_profile_ptr->ua_config.initial_reg_without_pani           = 1;
            nvram_ims_profile_ptr->ua_config.not_auto_reg_403                   = 1;
            nvram_ims_profile_ptr->ua_config.try_same_pcscf_rereg               = 1;
            nvram_ims_profile_ptr->ua_config.reg_try_all_pcscf_5626             = 1;
            nvram_ims_profile_ptr->ua_config.close_unprotected_conn             = 1;
            nvram_ims_profile_ptr->ua_config.dereg_delay_time                   = 1;
            nvram_ims_profile_ptr->ua_config.de_subscribe                       = 0;

            /* IMCB */
            nvram_ims_profile_ptr->imc_config.ignore_media_qos_check            = 1;
            nvram_ims_profile_ptr->imc_config.enable_audio_precondition         = 1;
            nvram_ims_profile_ptr->imc_config.video_resource_retain_timer       = 8000;
            memset(&nvram_ims_profile_ptr->imc_config.pdn_rej_handle[0],0,64);    //ATT: "N,33,16,0;N,28,16,0;N,*,0,1;E,*,0,1;"
            strncpy ( (char *)nvram_ims_profile_ptr->imc_config.pdn_rej_handle,
                    "N,33,16,0;N,28,16,0;N,*,0,1;E,*,0,1;",
                    sizeof (nvram_ims_profile_ptr->imc_config.pdn_rej_handle)-1
                    );
            break;
        }
        case 146:/*Etisalat*/
        {
            /*VOLTE_UA part*/
            nvram_ims_profile_ptr->ua_config.operator_code = 0x0092;//operator_code = 146(Etisalat)
            nvram_ims_profile_ptr->ua_config.VoLTE_Setting_SIP_TCP_MTU_Size = 1300;//need confirm
            nvram_ims_profile_ptr->ua_config.UA_reg_t1_timer= 500; //500ms;
            nvram_ims_profile_ptr->ua_config.UA_reg_t2_timer = 4000; //4000ms
            nvram_ims_profile_ptr->ua_config.UA_reg_t4_timer = 5000; //5000ms
            nvram_ims_profile_ptr->ua_config.reg_gruu_support = 0; //disable
            nvram_ims_profile_ptr->ua_config.UA_reg_ipsec_algo = 0X30; 
			
            nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout = 35;//35s
            nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout = 35;//35s
            nvram_ims_profile_ptr->ua_config.use_eps_prefix_in_phone_context =0;
            nvram_ims_profile_ptr->ua_config.disable_conf_call_prcd = 0; //support precondition
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server = 1;//in-dialog
            nvram_ims_profile_ptr->ua_config.subscribe_dialog_to_server = 1;//in-dialog
            nvram_ims_profile_ptr->ua_config.merge_send_bye = 0; // network will send BYE to host after to host after invatation complete		
            nvram_ims_profile_ptr->ua_config.call_tcall_timer_timeout = 20;
            nvram_ims_profile_ptr->ua_config.sendrecv_before_prcd     = 1;

            /*IMCB*/
            nvram_ims_profile_ptr->imc_config.default_fallback_support = 1; //support

            /* Country specific configurations */
            if(with_imsi_info){
                /* United Arab Emirates */
                if(strncmp((char *)&mccmnc[0], "424", 3) == 0){
                    /* reset to default */
                    imc_reset_nvram_to_default(nvram_ims_profile_ptr, sim_slot_id, with_imsi_info);

                    nvram_ims_profile_ptr->ua_config.operator_code                  = 0x0092; //operator_code = 146(Etisalat)
                    nvram_ims_profile_ptr->imc_config.ims_v4v6_preference           = 2;      //v4_prefer
                    nvram_ims_profile_ptr->ua_config.UA_reg_t1_timer                = 500;
                    nvram_ims_profile_ptr->ua_config.UA_reg_t2_timer                = 4000;
                    nvram_ims_profile_ptr->ua_config.UA_reg_t4_timer                = 5000;
                    
                    set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);
                    
                    /* IMCB, Reg/Stack, UA internal configurations */
                    /* Call */
                    nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout     = 45;
                    nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout    = 45;
                    nvram_ims_profile_ptr->ua_config.merge_send_bye                 = 0;
                    nvram_ims_profile_ptr->ua_config.subscribe_dialog_to_server     = 1;
                    nvram_ims_profile_ptr->ua_config.refer_dialog_to_server         = 1;
                    
                    /* Reg/Stack */

                    /* IMCB */
                    memset(&nvram_ims_profile_ptr->imc_config.pdn_rej_handle[0],0,64);
                    strncpy ( (char *)nvram_ims_profile_ptr->imc_config.pdn_rej_handle,
                            "N,33,18,0;N,*,0,1;E,*,0,1;",
                            sizeof (nvram_ims_profile_ptr->imc_config.pdn_rej_handle)-1
                            );
                }
            }

            break;
        }
        case 147: /*Airtel*/
        {
            nvram_ims_profile_ptr->ua_config.operator_code                      = 0x0093;  //operator_code = 147(Airtel India)
            nvram_ims_profile_ptr->ua_config.register_expiry                    = 1800;
            nvram_ims_profile_ptr->imc_config.resouce_retain_timer              = 5000;
            nvram_ims_profile_ptr->imc_config.ussd_support                      = 1;
            set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);

            /*IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.merge_send_bye                     = 0;
            nvram_ims_profile_ptr->ua_config.terminal_based_cw                  = 0;
            nvram_ims_profile_ptr->ua_config.attempt_reg_when_receive403        = 0;
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server             = 1;
            nvram_ims_profile_ptr->ua_config.call_tcall_timer_timeout           = 20;
            nvram_ims_profile_ptr->ua_config.conf_participant_not_subscribe     = 1;
            nvram_ims_profile_ptr->ua_config.check_curr_qos                     = 1;
            nvram_ims_profile_ptr->ua_config.UA_call_codec_order1               = 17;
            nvram_ims_profile_ptr->ua_config.UA_call_codec_order2               = 2;
            nvram_ims_profile_ptr->ua_config.UA_call_codec_order3               = 1;


            /* Reg/Stack */
            /* IMCB */
            memset(&nvram_ims_profile_ptr->imc_config.pcscf_home_policy_list[0],0,32);
            strncpy ( (char *)nvram_ims_profile_ptr->imc_config.pcscf_home_policy_list,
                "0,2,6,1,4,5,3,0", 
                sizeof (nvram_ims_profile_ptr->imc_config.pcscf_home_policy_list)-1         //set pcscf policy for home NW 
                );
            memset(&nvram_ims_profile_ptr->imc_config.pcscf_visit_policy_list[0],0,32);
            strncpy ( (char *)nvram_ims_profile_ptr->imc_config.pcscf_visit_policy_list,  
                "0,2,6,1,4,5,3,0", 
                sizeof (nvram_ims_profile_ptr->imc_config.pcscf_visit_policy_list)-1        //set pcscf policy for visit NW 
                );
            
            break;
        }
        case 148: /*Seatel*/
        {
            nvram_ims_profile_ptr->ua_config.operator_code                      = 0x0094;  //operator_code = 148(Seatel Cambodia)
            nvram_ims_profile_ptr->ua_config.register_expiry                    = 3600;
            nvram_ims_profile_ptr->imc_config.resouce_retain_timer              = 15000;
            
            /*IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout         = 90;
            nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout        = 90;
            nvram_ims_profile_ptr->ua_config.use_eps_prefix_in_phone_context    = 0;
            nvram_ims_profile_ptr->ua_config.always_use_sip_uri_for_mo_call     = 1;
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server             = 1;
            nvram_ims_profile_ptr->ua_config.subscribe_dialog_to_server         = 1;
            nvram_ims_profile_ptr->ua_config.terminal_based_cw                  = 0;
            nvram_ims_profile_ptr->ua_config.attempt_reg_when_receive403        = 0;  

            /* Reg/Stack */
            nvram_ims_profile_ptr->ua_config.VoLTE_Setting_SIP_TCP_MTU_Size     = 1400;
            nvram_ims_profile_ptr->ua_config.UA_reg_t1_timer                    = 500;
            nvram_ims_profile_ptr->ua_config.UA_reg_t2_timer                    = 4000;
            nvram_ims_profile_ptr->ua_config.UA_reg_t4_timer                    = 5000;
            nvram_ims_profile_ptr->ua_config.UA_net_ipsec                       = 0;
            nvram_ims_profile_ptr->ua_config.UA_reg_ipsec_algo                  = 0X03; 
            
            /* IMCB */
             nvram_ims_profile_ptr->imc_config.ims_v4v6_preference              = 2;      //v4_prefer
             nvram_ims_profile_ptr->imc_config.not_acquire_audio_rtcp           = 1;
             nvram_ims_profile_ptr->imc_config.not_acquire_video_rtcp           = 1;           
            break;
        }
        case 150: /* Swisscom */
        {
            nvram_ims_profile_ptr->ua_config.operator_code                      = 0x0096;   //operator_code = 150(Swisscom)
            nvram_ims_profile_ptr->ua_config.UA_reg_http_digest                 = 2;        //AKAv2_MD5
            nvram_ims_profile_ptr->ua_config.UA_call_session_timer              = 1800;
            nvram_ims_profile_ptr->ua_config.UA_call_session_min_se             = 90;

            set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);

            /*IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server             = 1;
            nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout         = 180;
            nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout        = 180;
            nvram_ims_profile_ptr->ua_config.early_media_when_rtp_coming        = 1;
            nvram_ims_profile_ptr->ua_config.add_country_to_pani                = 1;

            /* Reg/Stack */

            /* IMCB */
            nvram_ims_profile_ptr->imc_config.not_acquire_audio_rtcp            = 1;
            
            memset(&nvram_ims_profile_ptr->imc_config.pdn_rej_handle[0],0,64);
            strncpy ( (char *)nvram_ims_profile_ptr->imc_config.pdn_rej_handle,
                    "N,33,18,0;N,*,0,1;E,*,0,1;",
                    sizeof (nvram_ims_profile_ptr->imc_config.pdn_rej_handle)-1
                    );               
            break;
        }
        case 1003: /* HQLAB_ERICSSON */
        {
            nvram_ims_profile_ptr->ua_config.operator_code                  = 0x03EB; //operator_code = 1003(HQLAB_ERICSSON)
            set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);
            
			/* IMCB, Reg/Stack, UA internal configurations */
            /* Call */
            nvram_ims_profile_ptr->ua_config.sendrecv_before_prcd           = 0;
            nvram_ims_profile_ptr->ua_config.call_callend_timer_timeout     = 30;
            nvram_ims_profile_ptr->ua_config.contact_with_username          = 1;
            nvram_ims_profile_ptr->ua_config.rereg_in_rat_change            = 1;
            nvram_ims_profile_ptr->ua_config.rereg_in_oos_end               = 1;
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server         = 1;
            /* Reg/Stack */
            /* IMCB */

            break;
        }
        case 0x6000: /* Sony GTE/Lund */
        {
            nvram_ims_profile_ptr->ua_config.operator_code             = 0x6000; //operator_code = 0x6000
            nvram_ims_profile_ptr->ua_config.initial_reg_without_pani  = 1;
            nvram_ims_profile_ptr->ua_config.session_id_header_enable  = 1;
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server    = 1;
            set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);
            break;
        }
        case 0x6001: /* Sony GTE/BeiJing */
        {
            /* Copy 0x6000 */
            nvram_ims_profile_ptr->ua_config.operator_code                  = 0x6001; //operator_code = 0x6001
            nvram_ims_profile_ptr->ua_config.initial_reg_without_pani       = 1;
            nvram_ims_profile_ptr->ua_config.session_id_header_enable       = 1;
            nvram_ims_profile_ptr->ua_config.refer_dialog_to_server         = 1;
            
            /* New Add for 0x6001 */
            nvram_ims_profile_ptr->ua_config.UA_reg_t1_timer                = 500;
            nvram_ims_profile_ptr->ua_config.UA_reg_t2_timer                = 4000;
            nvram_ims_profile_ptr->ua_config.UA_reg_t4_timer                = 5000;
            nvram_ims_profile_ptr->ua_config.call_ringing_timer_timeout     = 180;
            nvram_ims_profile_ptr->ua_config.call_ringback_timer_timeout    = 180;
            nvram_ims_profile_ptr->ua_config.session_refresher_in_req       = 1;
            nvram_ims_profile_ptr->ua_config.session_refresher_in_resp      = 1;
            nvram_ims_profile_ptr->ua_config.UA_net_ipsec                   = 0;
            
            nvram_ims_profile_ptr->imc_config.ussd_support                   = 1;

            set_conf_factory_uri_by_imsi(&nvram_ims_profile_ptr->ua_config.UA_conf_factory_uri[0], with_imsi_info, imsi_mnc_len, mccmnc, op_id);
            break;
        }
        default:
        {
            break;
        }
    }

    nvram_external_write_data(NVRAM_EF_IMS_PROFILE_LID, 
                              sim_slot_id+1, 
                              nvram_read_buf_ptr, 
                              NVRAM_EF_IMS_PROFILE_SIZE);

    // Free allocated buffer
    free_ctrl_buffer(nvram_read_buf_ptr);
    nvram_read_buf_ptr = NULL;
    return 0;
}
#endif
