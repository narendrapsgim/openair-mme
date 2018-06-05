/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/lionel/EURECOM/CODE/openair-cn.prose.clean/src/s1ap/messages/asn1/r15/s1ap-15.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/lionel/EURECOM/CODE/openair-cn.prose.clean/src/s1ap/messages/asn1/r15/GENERATED_S1AP`
 */

#include "S1AP_BroadcastCancelledAreaList.h"

static asn_per_constraints_t asn_PER_type_S1AP_BroadcastCancelledAreaList_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_S1AP_BroadcastCancelledAreaList_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_BroadcastCancelledAreaList, choice.cellID_Cancelled),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_CellID_Cancelled,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellID-Cancelled"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_BroadcastCancelledAreaList, choice.tAI_Cancelled),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_TAI_Cancelled,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tAI-Cancelled"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_BroadcastCancelledAreaList, choice.emergencyAreaID_Cancelled),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_EmergencyAreaID_Cancelled,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"emergencyAreaID-Cancelled"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_S1AP_BroadcastCancelledAreaList_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellID-Cancelled */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tAI-Cancelled */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* emergencyAreaID-Cancelled */
};
static asn_CHOICE_specifics_t asn_SPC_S1AP_BroadcastCancelledAreaList_specs_1 = {
	sizeof(struct S1AP_BroadcastCancelledAreaList),
	offsetof(struct S1AP_BroadcastCancelledAreaList, _asn_ctx),
	offsetof(struct S1AP_BroadcastCancelledAreaList, present),
	sizeof(((struct S1AP_BroadcastCancelledAreaList *)0)->present),
	asn_MAP_S1AP_BroadcastCancelledAreaList_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0,
	3	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_BroadcastCancelledAreaList = {
	"BroadcastCancelledAreaList",
	"BroadcastCancelledAreaList",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_S1AP_BroadcastCancelledAreaList_constr_1, CHOICE_constraint },
	asn_MBR_S1AP_BroadcastCancelledAreaList_1,
	3,	/* Elements count */
	&asn_SPC_S1AP_BroadcastCancelledAreaList_specs_1	/* Additional specs */
};

