
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

/* Generator version: 2.0.0
 * AUTOSAR version:   4.1.2
 */

/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.1.2 */
/** @tagSettings DEFAULT_ARCHITECTURE=MPC5748G */ 

#include "Wdg.h"

const Wdg_ModeConfigType WdgModeConfig = {
	.Wdg_DefaultMode = WDGIF_FAST_MODE,
	.WdgSettingsFast = 
	{
	   .ReloadValue = 100,
	   .ActivationBit = 1, 
	},
	.WdgSettingsSlow = 
	{
       .ReloadValue = 2000,
       .ActivationBit = 1, 
    },
    .WdgSettingsOff = 
    {
       .ReloadValue = 0,
       .ActivationBit = 0, 
    }
    
};

#if defined(USE_DEM) || defined(CFG_WDG_USE_DEM)
const Wdg_DEMEventIdRefsType Wdg_DEMEventIdRefs = {
	.WdgSetMode = DEM_EVENT_ID_NULL
};
#endif	

const Wdg_ConfigType WdgConfig = {
	.Wdg_ModeConfig = &WdgModeConfig,
#if defined(USE_DEM) || defined(CFG_WDG_USE_DEM)
	.Wdg_DEMEventIdRefs = &Wdg_DEMEventIdRefs
#endif
};


