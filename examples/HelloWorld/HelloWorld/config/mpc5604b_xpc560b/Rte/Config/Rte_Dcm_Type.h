/**
 * Application Types Header File
 *
 * @req SWS_Rte_07122
 */

/** === HEADER ====================================================================================
 */

#ifndef RTE_DCM_TYPE_H_
#define RTE_DCM_TYPE_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/** --- Includes ----------------------------------------------------------------------------------
 * @req SWS_Rte_07127
 */
#include <Rte_Type.h>

/** === BODY ====================================================================================
 */

/** --- ENUMERATION DATA TYPES ------------------------------------------------------------------ */

/** Enum literals for Dcm_NegativeResponseCodeType */
#ifndef DCM_E_POSITIVERESPONSE
#define DCM_E_POSITIVERESPONSE 0U
#endif /* DCM_E_POSITIVERESPONSE */

#ifndef DCM_E_GENERALREJECT
#define DCM_E_GENERALREJECT 16U
#endif /* DCM_E_GENERALREJECT */

#ifndef DCM_E_SERVICENOTSUPPORTED
#define DCM_E_SERVICENOTSUPPORTED 17U
#endif /* DCM_E_SERVICENOTSUPPORTED */

#ifndef DCM_E_SUBFUNCTIONNOTSUPPORTED
#define DCM_E_SUBFUNCTIONNOTSUPPORTED 18U
#endif /* DCM_E_SUBFUNCTIONNOTSUPPORTED */

#ifndef DCM_E_INCORRECTMESSAGELENGTHORINVALIDFORMAT
#define DCM_E_INCORRECTMESSAGELENGTHORINVALIDFORMAT 19U
#endif /* DCM_E_INCORRECTMESSAGELENGTHORINVALIDFORMAT */

#ifndef DCM_E_RESPONSETOOLONG
#define DCM_E_RESPONSETOOLONG 20U
#endif /* DCM_E_RESPONSETOOLONG */

#ifndef DCM_E_BUSYREPEATREQUEST
#define DCM_E_BUSYREPEATREQUEST 33U
#endif /* DCM_E_BUSYREPEATREQUEST */

#ifndef DCM_E_CONDITIONSNOTCORRECT
#define DCM_E_CONDITIONSNOTCORRECT 34U
#endif /* DCM_E_CONDITIONSNOTCORRECT */

#ifndef DCM_E_REQUESTSEQUENCEERROR
#define DCM_E_REQUESTSEQUENCEERROR 36U
#endif /* DCM_E_REQUESTSEQUENCEERROR */

#ifndef DCM_E_NORESPONSEFROMSUBNETCOMPONENT
#define DCM_E_NORESPONSEFROMSUBNETCOMPONENT 37U
#endif /* DCM_E_NORESPONSEFROMSUBNETCOMPONENT */

#ifndef DCM_E_FAILUREPREVENTSEXECUTIONOFREQUESTEDACTION
#define DCM_E_FAILUREPREVENTSEXECUTIONOFREQUESTEDACTION 38U
#endif /* DCM_E_FAILUREPREVENTSEXECUTIONOFREQUESTEDACTION */

#ifndef DCM_E_REQUESTOUTOFRANGE
#define DCM_E_REQUESTOUTOFRANGE 49U
#endif /* DCM_E_REQUESTOUTOFRANGE */

#ifndef DCM_E_SECURITYACCESSDENIED
#define DCM_E_SECURITYACCESSDENIED 51U
#endif /* DCM_E_SECURITYACCESSDENIED */

#ifndef DCM_E_INVALIDKEY
#define DCM_E_INVALIDKEY 53U
#endif /* DCM_E_INVALIDKEY */

#ifndef DCM_E_EXCEEDNUMBEROFATTEMPTS
#define DCM_E_EXCEEDNUMBEROFATTEMPTS 54U
#endif /* DCM_E_EXCEEDNUMBEROFATTEMPTS */

#ifndef DCM_E_REQUIREDTIMEDELAYNOTEXPIRED
#define DCM_E_REQUIREDTIMEDELAYNOTEXPIRED 55U
#endif /* DCM_E_REQUIREDTIMEDELAYNOTEXPIRED */

#ifndef DCM_E_UPLOADDOWNLOADNOTACCEPTED
#define DCM_E_UPLOADDOWNLOADNOTACCEPTED 112U
#endif /* DCM_E_UPLOADDOWNLOADNOTACCEPTED */

#ifndef DCM_E_TRANSFERDATASUSPENDED
#define DCM_E_TRANSFERDATASUSPENDED 113U
#endif /* DCM_E_TRANSFERDATASUSPENDED */

#ifndef DCM_E_GENERALPROGRAMMINGFAILURE
#define DCM_E_GENERALPROGRAMMINGFAILURE 114U
#endif /* DCM_E_GENERALPROGRAMMINGFAILURE */

#ifndef DCM_E_WRONGBLOCKSEQUENCECOUNTER
#define DCM_E_WRONGBLOCKSEQUENCECOUNTER 115U
#endif /* DCM_E_WRONGBLOCKSEQUENCECOUNTER */

#ifndef DCM_E_SUBFUNCTIONNOTSUPPORTEDINACTIVESESSION
#define DCM_E_SUBFUNCTIONNOTSUPPORTEDINACTIVESESSION 126U
#endif /* DCM_E_SUBFUNCTIONNOTSUPPORTEDINACTIVESESSION */

#ifndef DCM_E_SERVICENOTSUPPORTEDINACTIVESESSION
#define DCM_E_SERVICENOTSUPPORTEDINACTIVESESSION 127U
#endif /* DCM_E_SERVICENOTSUPPORTEDINACTIVESESSION */

#ifndef DCM_E_RPMTOOHIGH
#define DCM_E_RPMTOOHIGH 129U
#endif /* DCM_E_RPMTOOHIGH */

#ifndef DCM_E_RPMTOOLOW
#define DCM_E_RPMTOOLOW 130U
#endif /* DCM_E_RPMTOOLOW */

#ifndef DCM_E_ENGINEISRUNNING
#define DCM_E_ENGINEISRUNNING 131U
#endif /* DCM_E_ENGINEISRUNNING */

#ifndef DCM_E_ENGINEISNOTRUNNING
#define DCM_E_ENGINEISNOTRUNNING 132U
#endif /* DCM_E_ENGINEISNOTRUNNING */

#ifndef DCM_E_ENGINERUNTIMETOOLOW
#define DCM_E_ENGINERUNTIMETOOLOW 133U
#endif /* DCM_E_ENGINERUNTIMETOOLOW */

#ifndef DCM_E_TEMPERATURETOOHIGH
#define DCM_E_TEMPERATURETOOHIGH 134U
#endif /* DCM_E_TEMPERATURETOOHIGH */

#ifndef DCM_E_TEMPERATURETOOLOW
#define DCM_E_TEMPERATURETOOLOW 135U
#endif /* DCM_E_TEMPERATURETOOLOW */

#ifndef DCM_E_VEHICLESPEEDTOOHIGH
#define DCM_E_VEHICLESPEEDTOOHIGH 136U
#endif /* DCM_E_VEHICLESPEEDTOOHIGH */

#ifndef DCM_E_VEHICLESPEEDTOOLOW
#define DCM_E_VEHICLESPEEDTOOLOW 137U
#endif /* DCM_E_VEHICLESPEEDTOOLOW */

#ifndef DCM_E_THROTTLE_PEDALTOOHIGH
#define DCM_E_THROTTLE_PEDALTOOHIGH 138U
#endif /* DCM_E_THROTTLE_PEDALTOOHIGH */

#ifndef DCM_E_THROTTLE_PEDALTOOLOW
#define DCM_E_THROTTLE_PEDALTOOLOW 139U
#endif /* DCM_E_THROTTLE_PEDALTOOLOW */

#ifndef DCM_E_TRANSMISSIONRANGENOTINNEUTRAL
#define DCM_E_TRANSMISSIONRANGENOTINNEUTRAL 140U
#endif /* DCM_E_TRANSMISSIONRANGENOTINNEUTRAL */

#ifndef DCM_E_TRANSMISSIONRANGENOTINGEAR
#define DCM_E_TRANSMISSIONRANGENOTINGEAR 141U
#endif /* DCM_E_TRANSMISSIONRANGENOTINGEAR */

#ifndef DCM_E_BRAKESWITCH_NOTCLOSED
#define DCM_E_BRAKESWITCH_NOTCLOSED 143U
#endif /* DCM_E_BRAKESWITCH_NOTCLOSED */

#ifndef DCM_E_SHIFTERLEVERNOTINPARK
#define DCM_E_SHIFTERLEVERNOTINPARK 144U
#endif /* DCM_E_SHIFTERLEVERNOTINPARK */

#ifndef DCM_E_TORQUECONVERTERCLUTCHLOCKED
#define DCM_E_TORQUECONVERTERCLUTCHLOCKED 145U
#endif /* DCM_E_TORQUECONVERTERCLUTCHLOCKED */

#ifndef DCM_E_VOLTAGETOOHIGH
#define DCM_E_VOLTAGETOOHIGH 146U
#endif /* DCM_E_VOLTAGETOOHIGH */

#ifndef DCM_E_VOLTAGETOOLOW
#define DCM_E_VOLTAGETOOLOW 147U
#endif /* DCM_E_VOLTAGETOOLOW */

/** Enum literals for Dcm_OpStatusType */
#ifndef DCM_INITIAL
#define DCM_INITIAL 0U
#endif /* DCM_INITIAL */

#ifndef DCM_PENDING
#define DCM_PENDING 1U
#endif /* DCM_PENDING */

#ifndef DCM_CANCEL
#define DCM_CANCEL 2U
#endif /* DCM_CANCEL */

#ifndef DCM_FORCE_RCRRP_OK
#define DCM_FORCE_RCRRP_OK 3U
#endif /* DCM_FORCE_RCRRP_OK */

/** Enum literals for Dcm_ProtocolType */
#ifndef DCM_OBD_ON_CAN
#define DCM_OBD_ON_CAN 0U
#endif /* DCM_OBD_ON_CAN */

#ifndef DCM_OBD_ON_FLEXRAY
#define DCM_OBD_ON_FLEXRAY 1U
#endif /* DCM_OBD_ON_FLEXRAY */

#ifndef DCM_OBD_ON_IP
#define DCM_OBD_ON_IP 2U
#endif /* DCM_OBD_ON_IP */

#ifndef DCM_UDS_ON_CAN
#define DCM_UDS_ON_CAN 3U
#endif /* DCM_UDS_ON_CAN */

#ifndef DCM_UDS_ON_FLEXRAY
#define DCM_UDS_ON_FLEXRAY 4U
#endif /* DCM_UDS_ON_FLEXRAY */

#ifndef DCM_UDS_ON_IP
#define DCM_UDS_ON_IP 5U
#endif /* DCM_UDS_ON_IP */

#ifndef DCM_ROE_ON_CAN
#define DCM_ROE_ON_CAN 6U
#endif /* DCM_ROE_ON_CAN */

#ifndef DCM_ROE_ON_FLEXRAY
#define DCM_ROE_ON_FLEXRAY 7U
#endif /* DCM_ROE_ON_FLEXRAY */

#ifndef DCM_ROE_ON_IP
#define DCM_ROE_ON_IP 8U
#endif /* DCM_ROE_ON_IP */

#ifndef DCM_PERIODICTRANS_ON_CAN
#define DCM_PERIODICTRANS_ON_CAN 9U
#endif /* DCM_PERIODICTRANS_ON_CAN */

#ifndef DCM_PERIODICTRANS_ON_FLEXRAY
#define DCM_PERIODICTRANS_ON_FLEXRAY 10U
#endif /* DCM_PERIODICTRANS_ON_FLEXRAY */

#ifndef DCM_PERIODICTRANS_ON_IP
#define DCM_PERIODICTRANS_ON_IP 11U
#endif /* DCM_PERIODICTRANS_ON_IP */

#ifndef DCM_NO_ACTIVE_PROTOCOL
#define DCM_NO_ACTIVE_PROTOCOL 12U
#endif /* DCM_NO_ACTIVE_PROTOCOL */

#ifndef DCM_SUPPLIER_1
#define DCM_SUPPLIER_1 240U
#endif /* DCM_SUPPLIER_1 */

#ifndef DCM_SUPPLIER_2
#define DCM_SUPPLIER_2 241U
#endif /* DCM_SUPPLIER_2 */

#ifndef DCM_SUPPLIER_3
#define DCM_SUPPLIER_3 242U
#endif /* DCM_SUPPLIER_3 */

#ifndef DCM_SUPPLIER_4
#define DCM_SUPPLIER_4 243U
#endif /* DCM_SUPPLIER_4 */

#ifndef DCM_SUPPLIER_5
#define DCM_SUPPLIER_5 244U
#endif /* DCM_SUPPLIER_5 */

#ifndef DCM_SUPPLIER_6
#define DCM_SUPPLIER_6 245U
#endif /* DCM_SUPPLIER_6 */

#ifndef DCM_SUPPLIER_7
#define DCM_SUPPLIER_7 246U
#endif /* DCM_SUPPLIER_7 */

#ifndef DCM_SUPPLIER_8
#define DCM_SUPPLIER_8 247U
#endif /* DCM_SUPPLIER_8 */

#ifndef DCM_SUPPLIER_9
#define DCM_SUPPLIER_9 248U
#endif /* DCM_SUPPLIER_9 */

#ifndef DCM_SUPPLIER_10
#define DCM_SUPPLIER_10 249U
#endif /* DCM_SUPPLIER_10 */

#ifndef DCM_SUPPLIER_11
#define DCM_SUPPLIER_11 250U
#endif /* DCM_SUPPLIER_11 */

#ifndef DCM_SUPPLIER_12
#define DCM_SUPPLIER_12 251U
#endif /* DCM_SUPPLIER_12 */

#ifndef DCM_SUPPLIER_13
#define DCM_SUPPLIER_13 252U
#endif /* DCM_SUPPLIER_13 */

#ifndef DCM_SUPPLIER_14
#define DCM_SUPPLIER_14 253U
#endif /* DCM_SUPPLIER_14 */

#ifndef DCM_SUPPLIER_15
#define DCM_SUPPLIER_15 254U
#endif /* DCM_SUPPLIER_15 */

/** Enum literals for Dcm_SecLevelType */
#ifndef DCM_SEC_LEV_LOCKED
#define DCM_SEC_LEV_LOCKED 0U
#endif /* DCM_SEC_LEV_LOCKED */

#ifndef DCM_SEC_LEV_L1
#define DCM_SEC_LEV_L1 1U
#endif /* DCM_SEC_LEV_L1 */

#ifndef DCM_SEC_LEV_ALL
#define DCM_SEC_LEV_ALL 255U
#endif /* DCM_SEC_LEV_ALL */

/** Enum literals for Dcm_SesCtrlType */
#ifndef DCM_DEFAULT_SESSION
#define DCM_DEFAULT_SESSION 1U
#endif /* DCM_DEFAULT_SESSION */

#ifndef DCM_PROGRAMMING_SESSION
#define DCM_PROGRAMMING_SESSION 2U
#endif /* DCM_PROGRAMMING_SESSION */

#ifndef DCM_EXTENDED_DIAGNOSTIC_SESSION
#define DCM_EXTENDED_DIAGNOSTIC_SESSION 3U
#endif /* DCM_EXTENDED_DIAGNOSTIC_SESSION */

#ifndef DCM_SAFETY_SYSTEM_DIAGNOSTIC_SESSION
#define DCM_SAFETY_SYSTEM_DIAGNOSTIC_SESSION 4U
#endif /* DCM_SAFETY_SYSTEM_DIAGNOSTIC_SESSION */

#ifndef DCM_ALL_SESSION
#define DCM_ALL_SESSION 255U
#endif /* DCM_ALL_SESSION */

/** Enum literals for Dem_DTCFormatType */
#ifndef DEM_DTC_FORMAT_OBD
#define DEM_DTC_FORMAT_OBD 0U
#endif /* DEM_DTC_FORMAT_OBD */

#ifndef DEM_DTC_FORMAT_UDS
#define DEM_DTC_FORMAT_UDS 1U
#endif /* DEM_DTC_FORMAT_UDS */

/** Enum literals for Dem_DTCOriginType */
#ifndef DEM_DTC_ORIGIN_PRIMARY_MEMORY
#define DEM_DTC_ORIGIN_PRIMARY_MEMORY 1U
#endif /* DEM_DTC_ORIGIN_PRIMARY_MEMORY */

#ifndef DEM_DTC_ORIGIN_MIRROR_MEMORY
#define DEM_DTC_ORIGIN_MIRROR_MEMORY 2U
#endif /* DEM_DTC_ORIGIN_MIRROR_MEMORY */

#ifndef DEM_DTC_ORIGIN_PERMANENT_MEMORY
#define DEM_DTC_ORIGIN_PERMANENT_MEMORY 3U
#endif /* DEM_DTC_ORIGIN_PERMANENT_MEMORY */

#ifndef DEM_DTC_ORIGIN_SECONDARY_MEMORY
#define DEM_DTC_ORIGIN_SECONDARY_MEMORY 4U
#endif /* DEM_DTC_ORIGIN_SECONDARY_MEMORY */

/** Enum literals for boolean */
#ifndef FALSE
#define FALSE 0U
#endif /* FALSE */

#ifndef TRUE
#define TRUE 1U
#endif /* TRUE */

/** --- MODE TYPES ------------------------------------------------------------------------------ */

#ifndef RTE_MODETYPE_DcmCommunicationControl
#define RTE_MODETYPE_DcmCommunicationControl
typedef uint8 Rte_ModeType_DcmCommunicationControl;
#endif

#ifndef RTE_TRANSITION_DcmCommunicationControl
#define RTE_TRANSITION_DcmCommunicationControl 12U
#endif

#ifndef RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NM
#define RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NM 0U
#endif

#ifndef RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM
#define RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM 1U
#endif

#ifndef RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM_NM
#define RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM_NM 2U
#endif

#ifndef RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_TX_NM
#define RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_TX_NM 3U
#endif

#ifndef RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORMAL
#define RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORMAL 4U
#endif

#ifndef RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORM_NM
#define RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORM_NM 5U
#endif

#ifndef RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NM
#define RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NM 6U
#endif

#ifndef RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM
#define RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM 7U
#endif

#ifndef RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM_NM
#define RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM_NM 8U
#endif

#ifndef RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NM
#define RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NM 9U
#endif

#ifndef RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM
#define RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM 10U
#endif

#ifndef RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM_NM
#define RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM_NM 11U
#endif

#ifndef RTE_MODETYPE_DcmControlDTCSetting
#define RTE_MODETYPE_DcmControlDTCSetting
typedef uint8 Rte_ModeType_DcmControlDTCSetting;
#endif

#ifndef RTE_TRANSITION_DcmControlDTCSetting
#define RTE_TRANSITION_DcmControlDTCSetting 2U
#endif

#ifndef RTE_MODE_DcmControlDTCSetting_DISABLEDTCSETTING
#define RTE_MODE_DcmControlDTCSetting_DISABLEDTCSETTING 0U
#endif

#ifndef RTE_MODE_DcmControlDTCSetting_ENABLEDTCSETTING
#define RTE_MODE_DcmControlDTCSetting_ENABLEDTCSETTING 1U
#endif

#ifndef RTE_MODETYPE_DcmDiagnosticSessionControl
#define RTE_MODETYPE_DcmDiagnosticSessionControl
typedef uint8 Rte_ModeType_DcmDiagnosticSessionControl;
#endif

#ifndef RTE_TRANSITION_DcmDiagnosticSessionControl
#define RTE_TRANSITION_DcmDiagnosticSessionControl 1U
#endif

#ifndef RTE_MODE_DcmDiagnosticSessionControl_DcmConf_DcmDspSessionRow_Default_Session
#define RTE_MODE_DcmDiagnosticSessionControl_DcmConf_DcmDspSessionRow_Default_Session 0U
#endif

#ifndef RTE_MODETYPE_DcmEcuReset
#define RTE_MODETYPE_DcmEcuReset
typedef uint8 Rte_ModeType_DcmEcuReset;
#endif

#ifndef RTE_TRANSITION_DcmEcuReset
#define RTE_TRANSITION_DcmEcuReset 7U
#endif

#ifndef RTE_MODE_DcmEcuReset_EXECUTE
#define RTE_MODE_DcmEcuReset_EXECUTE 0U
#endif

#ifndef RTE_MODE_DcmEcuReset_HARD
#define RTE_MODE_DcmEcuReset_HARD 1U
#endif

#ifndef RTE_MODE_DcmEcuReset_JUMPTOBOOTLOADER
#define RTE_MODE_DcmEcuReset_JUMPTOBOOTLOADER 2U
#endif

#ifndef RTE_MODE_DcmEcuReset_JUMPTOSYSSUPPLIERBOOTLOADER
#define RTE_MODE_DcmEcuReset_JUMPTOSYSSUPPLIERBOOTLOADER 3U
#endif

#ifndef RTE_MODE_DcmEcuReset_KEYONOFF
#define RTE_MODE_DcmEcuReset_KEYONOFF 4U
#endif

#ifndef RTE_MODE_DcmEcuReset_NONE
#define RTE_MODE_DcmEcuReset_NONE 5U
#endif

#ifndef RTE_MODE_DcmEcuReset_SOFT
#define RTE_MODE_DcmEcuReset_SOFT 6U
#endif

#ifndef RTE_MODETYPE_DcmModeRapidPowerShutDown
#define RTE_MODETYPE_DcmModeRapidPowerShutDown
typedef uint8 Rte_ModeType_DcmModeRapidPowerShutDown;
#endif

#ifndef RTE_TRANSITION_DcmModeRapidPowerShutDown
#define RTE_TRANSITION_DcmModeRapidPowerShutDown 2U
#endif

#ifndef RTE_MODE_DcmModeRapidPowerShutDown_DISABLE_RAPIDPOWERSHUTDOWN
#define RTE_MODE_DcmModeRapidPowerShutDown_DISABLE_RAPIDPOWERSHUTDOWN 0U
#endif

#ifndef RTE_MODE_DcmModeRapidPowerShutDown_ENABLE_RAPIDPOWERSHUTDOWN
#define RTE_MODE_DcmModeRapidPowerShutDown_ENABLE_RAPIDPOWERSHUTDOWN 1U
#endif

/** === FOOTER ====================================================================================
 */

/** @req SWS_Rte_07126 */
#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* RTE_DCM_TYPE_H_ */
