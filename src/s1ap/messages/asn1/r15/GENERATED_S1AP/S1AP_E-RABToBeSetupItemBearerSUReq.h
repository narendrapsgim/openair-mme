/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-PDU-Contents"
 * 	found in "/home/lionel/EURECOM/CODE/openair-cn.prose.clean/src/s1ap/messages/asn1/r15/s1ap-15.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/lionel/EURECOM/CODE/openair-cn.prose.clean/src/s1ap/messages/asn1/r15/GENERATED_S1AP`
 */

#ifndef	_S1AP_E_RABToBeSetupItemBearerSUReq_H_
#define	_S1AP_E_RABToBeSetupItemBearerSUReq_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1AP_E-RAB-ID.h"
#include "S1AP_E-RABLevelQoSParameters.h"
#include "S1AP_TransportLayerAddress.h"
#include "S1AP_GTP-TEID.h"
#include "S1AP_NAS-PDU.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct S1AP_ProtocolExtensionContainer;

/* S1AP_E-RABToBeSetupItemBearerSUReq */
typedef struct S1AP_E_RABToBeSetupItemBearerSUReq {
	S1AP_E_RAB_ID_t	 e_RAB_ID;
	S1AP_E_RABLevelQoSParameters_t	 e_RABlevelQoSParameters;
	S1AP_TransportLayerAddress_t	 transportLayerAddress;
	S1AP_GTP_TEID_t	 gTP_TEID;
	S1AP_NAS_PDU_t	 nAS_PDU;
	struct S1AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_E_RABToBeSetupItemBearerSUReq_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_E_RABToBeSetupItemBearerSUReq;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_E_RABToBeSetupItemBearerSUReq_H_ */
#include <asn_internal.h>
