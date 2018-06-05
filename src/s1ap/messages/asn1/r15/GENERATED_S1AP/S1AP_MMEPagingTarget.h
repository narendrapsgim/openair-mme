/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/lionel/EURECOM/CODE/openair-cn.prose.clean/src/s1ap/messages/asn1/r15/s1ap-15.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/lionel/EURECOM/CODE/openair-cn.prose.clean/src/s1ap/messages/asn1/r15/GENERATED_S1AP`
 */

#ifndef	_S1AP_MMEPagingTarget_H_
#define	_S1AP_MMEPagingTarget_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1AP_Global-ENB-ID.h"
#include "S1AP_TAI.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_MMEPagingTarget_PR {
	S1AP_MMEPagingTarget_PR_NOTHING,	/* No components present */
	S1AP_MMEPagingTarget_PR_global_ENB_ID,
	S1AP_MMEPagingTarget_PR_tAI
	/* Extensions may appear below */
	
} S1AP_MMEPagingTarget_PR;

/* S1AP_MMEPagingTarget */
typedef struct S1AP_MMEPagingTarget {
	S1AP_MMEPagingTarget_PR present;
	union S1AP_MMEPagingTarget_u {
		S1AP_Global_ENB_ID_t	 global_ENB_ID;
		S1AP_TAI_t	 tAI;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_MMEPagingTarget_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_MMEPagingTarget;
extern asn_CHOICE_specifics_t asn_SPC_S1AP_MMEPagingTarget_specs_1;
extern asn_TYPE_member_t asn_MBR_S1AP_MMEPagingTarget_1[2];
extern asn_per_constraints_t asn_PER_type_S1AP_MMEPagingTarget_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_MMEPagingTarget_H_ */
#include <asn_internal.h>
