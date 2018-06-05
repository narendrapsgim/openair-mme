/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/lionel/EURECOM/CODE/openair-cn.prose.clean/src/s1ap/messages/asn1/r15/s1ap-15.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/lionel/EURECOM/CODE/openair-cn.prose.clean/src/s1ap/messages/asn1/r15/GENERATED_S1AP`
 */

#include "S1AP_COUNTValueExtended.h"

#include "S1AP_ProtocolExtensionContainer.h"
static asn_TYPE_member_t asn_MBR_S1AP_COUNTValueExtended_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_COUNTValueExtended, pDCP_SNExtended),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_PDCP_SNExtended,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pDCP-SNExtended"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_COUNTValueExtended, hFNModified),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_HFNModified,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"hFNModified"
		},
	{ ATF_POINTER, 1, offsetof(struct S1AP_COUNTValueExtended, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_ProtocolExtensionContainer_6890P38,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_S1AP_COUNTValueExtended_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_S1AP_COUNTValueExtended_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_S1AP_COUNTValueExtended_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pDCP-SNExtended */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* hFNModified */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_S1AP_COUNTValueExtended_specs_1 = {
	sizeof(struct S1AP_COUNTValueExtended),
	offsetof(struct S1AP_COUNTValueExtended, _asn_ctx),
	asn_MAP_S1AP_COUNTValueExtended_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_S1AP_COUNTValueExtended_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_COUNTValueExtended = {
	"COUNTValueExtended",
	"COUNTValueExtended",
	&asn_OP_SEQUENCE,
	asn_DEF_S1AP_COUNTValueExtended_tags_1,
	sizeof(asn_DEF_S1AP_COUNTValueExtended_tags_1)
		/sizeof(asn_DEF_S1AP_COUNTValueExtended_tags_1[0]), /* 1 */
	asn_DEF_S1AP_COUNTValueExtended_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_COUNTValueExtended_tags_1)
		/sizeof(asn_DEF_S1AP_COUNTValueExtended_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_S1AP_COUNTValueExtended_1,
	3,	/* Elements count */
	&asn_SPC_S1AP_COUNTValueExtended_specs_1	/* Additional specs */
};

