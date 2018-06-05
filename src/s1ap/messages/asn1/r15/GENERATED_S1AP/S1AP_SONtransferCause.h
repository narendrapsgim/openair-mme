/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SonTransfer-IEs"
 * 	found in "/home/lionel/EURECOM/CODE/openair-cn.prose.clean/src/s1ap/messages/asn1/r15/s1ap-15.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/lionel/EURECOM/CODE/openair-cn.prose.clean/src/s1ap/messages/asn1/r15/GENERATED_S1AP`
 */

#ifndef	_S1AP_SONtransferCause_H_
#define	_S1AP_SONtransferCause_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1AP_CellLoadReportingCause.h"
#include "S1AP_HOReportingCause.h"
#include "S1AP_CellActivationCause.h"
#include "S1AP_CellStateIndicationCause.h"
#include "S1AP_FailureEventReportingCause.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_SONtransferCause_PR {
	S1AP_SONtransferCause_PR_NOTHING,	/* No components present */
	S1AP_SONtransferCause_PR_cellLoadReporting,
	/* Extensions may appear below */
	S1AP_SONtransferCause_PR_multiCellLoadReporting,
	S1AP_SONtransferCause_PR_eventTriggeredCellLoadReporting,
	S1AP_SONtransferCause_PR_hOReporting,
	S1AP_SONtransferCause_PR_eutranCellActivation,
	S1AP_SONtransferCause_PR_energySavingsIndication,
	S1AP_SONtransferCause_PR_failureEventReporting
} S1AP_SONtransferCause_PR;

/* S1AP_SONtransferCause */
typedef struct S1AP_SONtransferCause {
	S1AP_SONtransferCause_PR present;
	union S1AP_SONtransferCause_u {
		S1AP_CellLoadReportingCause_t	 cellLoadReporting;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		S1AP_CellLoadReportingCause_t	 multiCellLoadReporting;
		S1AP_CellLoadReportingCause_t	 eventTriggeredCellLoadReporting;
		S1AP_HOReportingCause_t	 hOReporting;
		S1AP_CellActivationCause_t	 eutranCellActivation;
		S1AP_CellStateIndicationCause_t	 energySavingsIndication;
		S1AP_FailureEventReportingCause_t	 failureEventReporting;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_SONtransferCause_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_SONtransferCause;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_SONtransferCause_H_ */
#include <asn_internal.h>
