/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/lionel/EURECOM/CODE/openair-cn.prose.clean/src/s1ap/messages/asn1/r15/s1ap-15.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/lionel/EURECOM/CODE/openair-cn.prose.clean/src/s1ap/messages/asn1/r15/GENERATED_S1AP`
 */

#ifndef	_S1AP_TimeToWait_H_
#define	_S1AP_TimeToWait_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_TimeToWait {
	S1AP_TimeToWait_v1s	= 0,
	S1AP_TimeToWait_v2s	= 1,
	S1AP_TimeToWait_v5s	= 2,
	S1AP_TimeToWait_v10s	= 3,
	S1AP_TimeToWait_v20s	= 4,
	S1AP_TimeToWait_v60s	= 5
	/*
	 * Enumeration is extensible
	 */
} e_S1AP_TimeToWait;

/* S1AP_TimeToWait */
typedef long	 S1AP_TimeToWait_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_TimeToWait;
asn_struct_free_f S1AP_TimeToWait_free;
asn_struct_print_f S1AP_TimeToWait_print;
asn_constr_check_f S1AP_TimeToWait_constraint;
ber_type_decoder_f S1AP_TimeToWait_decode_ber;
der_type_encoder_f S1AP_TimeToWait_encode_der;
xer_type_decoder_f S1AP_TimeToWait_decode_xer;
xer_type_encoder_f S1AP_TimeToWait_encode_xer;
per_type_decoder_f S1AP_TimeToWait_decode_uper;
per_type_encoder_f S1AP_TimeToWait_encode_uper;
per_type_decoder_f S1AP_TimeToWait_decode_aper;
per_type_encoder_f S1AP_TimeToWait_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_TimeToWait_H_ */
#include <asn_internal.h>
