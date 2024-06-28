
/*-------------------------------- Arctic Core ------------------------------
 * Copyright (C) 2013, ArcCore AB, Sweden, www.arccore.com.
 * Contact: <contact@arccore.com>
 * 
 * You may ONLY use this file:
 * 1)if you have a valid commercial ArcCore license and then in accordance with  
 * the terms contained in the written license agreement between you and ArcCore, 
 * or alternatively
 * 2)if you follow the terms found in GNU General Public License version 2 as 
 * published by the Free Software Foundation and appearing in the file 
 * LICENSE.GPL included in the packaging of this file or here 
 * <http://www.gnu.org/licenses/old-licenses/gpl-2.0.txt>
 *-------------------------------- Arctic Core -----------------------------*/

/* Generator version: 5.0.0
 * AUTOSAR version:   4.1.2
 */

#ifndef DIO_CFG_H_
#define DIO_CFG_H_

#if !(((DIO_SW_MAJOR_VERSION == 5) && (DIO_SW_MINOR_VERSION == 0)) )
#error Dio: Configuration file expected BSW module version to be 5.0.*
#endif

#if !(((DIO_AR_RELEASE_MAJOR_VERSION == 4) && (DIO_AR_RELEASE_MINOR_VERSION == 1)) )
#error Dio: Configuration file expected AUTOSAR version to be 4.1.*
#endif

#define DIO_VERSION_INFO_API    STD_ON
#define DIO_DEV_ERROR_DETECT    STD_ON

#define DIO_END_OF_LIST  (-1u)

// Channels
#define DioConf_DioChannel_LED10_AP0 44
#define Dio_LED10_AP0 DioConf_DioChannel_LED10_AP0
#define DioConf_DioChannel_LED7 29
#define Dio_LED7 DioConf_DioChannel_LED7

// Channel groups


// Ports
#define DioConf_DioPort_AP0 1
#define Dio_AP0 DioConf_DioPort_AP0
#define DioConf_DioPort_P8 0
#define Dio_P8 DioConf_DioPort_P8

/* Configuration Set Handles */
#define DioConfig (DioConfigData)
#define Dio_DioConfig (DioConfigData)

#endif /*DIO_CFG_H_*/
