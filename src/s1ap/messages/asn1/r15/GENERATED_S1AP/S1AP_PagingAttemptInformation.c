/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/lionel/EURECOM/CODE/openair-cn.prose.clean/src/s1ap/messages/asn1/r15/s1ap-15.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/lionel/EURECOM/CODE/openair-cn.prose.clean/src/s1ap/messages/asn1/r15/GENERATED_S1AP`
 */

#include "S1AP_PagingAttemptInformation.h"

#include "S1AP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_S1AP_PagingAttemptInformation_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_PagingAttemptInformation, pagingAttemptCount),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_PagingAttemptCount,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pagingAttemptCount"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_PagingAttemptInformation, intendedNumberOfPagingAttempts),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_IntendedNumberOfPagingAttempts,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"intendedNumberOfPagingAttempts"
		},
	{ ATF_POINTER, 2, offsetof(struct S1AP_PagingAttemptInformation, nextPagingAreaScope),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_NextPagingAreaScope,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nextPagingAreaScope"
		},
	{ ATF_POINTER, 1, offsetof(struct S1AP_PagingAttemptInformation, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_ProtocolExtensionContainer_6890P79,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_S1AP_PagingAttemptInformation_oms_1[] = { 2, 3 };
static const ber_tlv_tag_t asn_DEF_S1AP_PagingAttemptInformation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_S1AP_PagingAttemptInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pagingAttemptCount */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* intendedNumberOfPagingAttempts */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* nextPagingAreaScope */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_S1AP_PagingAttemptInformation_specs_1 = {
	sizeof(struct S1AP_PagingAttemptInformation),
	offsetof(struct S1AP_PagingAttemptInformation, _asn_ctx),
	asn_MAP_S1AP_PagingAttemptInformation_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_S1AP_PagingAttemptInformation_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_PagingAttemptInformation = {
	"PagingAttemptInformation",
	"PagingAttemptInformation",
	&asn_OP_SEQUENCE,
	asn_DEF_S1AP_PagingAttemptInformation_tags_1,
	sizeof(asn_DEF_S1AP_PagingAttemptInformation_tags_1)
		/sizeof(asn_DEF_S1AP_PagingAttemptInformation_tags_1[0]), /* 1 */
	asn_DEF_S1AP_PagingAttemptInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_PagingAttemptInformation_tags_1)
		/sizeof(asn_DEF_S1AP_PagingAttemptInformation_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_S1AP_PagingAttemptInformation_1,
	4,	/* Elements count */
	&asn_SPC_S1AP_PagingAttemptInformation_specs_1	/* Additional specs */
};

