/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/lionel/EURECOM/CODE/openair-cn.prose.clean/src/s1ap/messages/asn1/r15/s1ap-15.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/lionel/EURECOM/CODE/openair-cn.prose.clean/src/s1ap/messages/asn1/r15/GENERATED_S1AP`
 */

#ifndef	_S1AP_ReportArea_H_
#define	_S1AP_ReportArea_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_ReportArea {
	S1AP_ReportArea_ecgi	= 0
	/*
	 * Enumeration is extensible
	 */
} e_S1AP_ReportArea;

/* S1AP_ReportArea */
typedef long	 S1AP_ReportArea_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_S1AP_ReportArea_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ReportArea;
extern const asn_INTEGER_specifics_t asn_SPC_ReportArea_specs_1;
asn_struct_free_f ReportArea_free;
asn_struct_print_f ReportArea_print;
asn_constr_check_f ReportArea_constraint;
ber_type_decoder_f ReportArea_decode_ber;
der_type_encoder_f ReportArea_encode_der;
xer_type_decoder_f ReportArea_decode_xer;
xer_type_encoder_f ReportArea_encode_xer;
per_type_decoder_f ReportArea_decode_uper;
per_type_encoder_f ReportArea_encode_uper;
per_type_decoder_f ReportArea_decode_aper;
per_type_encoder_f ReportArea_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_ReportArea_H_ */
#include <asn_internal.h>
