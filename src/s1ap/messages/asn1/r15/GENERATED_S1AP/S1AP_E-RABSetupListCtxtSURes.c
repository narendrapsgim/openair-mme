/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-PDU-Contents"
 * 	found in "/home/lionel/EURECOM/CODE/openair-cn.prose.clean/src/s1ap/messages/asn1/r15/s1ap-15.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/lionel/EURECOM/CODE/openair-cn.prose.clean/src/s1ap/messages/asn1/r15/GENERATED_S1AP`
 */

#include "S1AP_E-RABSetupListCtxtSURes.h"

#include "S1AP_ProtocolIE-SingleContainer.h"
static asn_per_constraints_t asn_PER_type_S1AP_E_RABSetupListCtxtSURes_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  256 }	/* (SIZE(1..256)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_S1AP_E_RABSetupListCtxtSURes_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_S1AP_ProtocolIE_SingleContainer_6842P6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_S1AP_E_RABSetupListCtxtSURes_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_S1AP_E_RABSetupListCtxtSURes_specs_1 = {
	sizeof(struct S1AP_E_RABSetupListCtxtSURes),
	offsetof(struct S1AP_E_RABSetupListCtxtSURes, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_E_RABSetupListCtxtSURes = {
	"E-RABSetupListCtxtSURes",
	"E-RABSetupListCtxtSURes",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_S1AP_E_RABSetupListCtxtSURes_tags_1,
	sizeof(asn_DEF_S1AP_E_RABSetupListCtxtSURes_tags_1)
		/sizeof(asn_DEF_S1AP_E_RABSetupListCtxtSURes_tags_1[0]), /* 1 */
	asn_DEF_S1AP_E_RABSetupListCtxtSURes_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_E_RABSetupListCtxtSURes_tags_1)
		/sizeof(asn_DEF_S1AP_E_RABSetupListCtxtSURes_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_S1AP_E_RABSetupListCtxtSURes_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_S1AP_E_RABSetupListCtxtSURes_1,
	1,	/* Single element */
	&asn_SPC_S1AP_E_RABSetupListCtxtSURes_specs_1	/* Additional specs */
};

