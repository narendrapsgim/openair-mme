/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/lionel/EURECOM/CODE/openair-cn.prose.clean/src/s1ap/messages/asn1/r15/s1ap-15.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/lionel/EURECOM/CODE/openair-cn.prose.clean/src/s1ap/messages/asn1/r15/GENERATED_S1AP`
 */

#include "S1AP_SONInformation-Extension.h"

/*
 * This type is implemented using S1AP_ProtocolIE_SingleContainer_6842P19,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_S1AP_SONInformation_Extension_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_S1AP_SONInformation_Extension = {
	"SONInformation-Extension",
	"SONInformation-Extension",
	&asn_OP_SEQUENCE,
	asn_DEF_S1AP_SONInformation_Extension_tags_1,
	sizeof(asn_DEF_S1AP_SONInformation_Extension_tags_1)
		/sizeof(asn_DEF_S1AP_SONInformation_Extension_tags_1[0]), /* 1 */
	asn_DEF_S1AP_SONInformation_Extension_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_SONInformation_Extension_tags_1)
		/sizeof(asn_DEF_S1AP_SONInformation_Extension_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_S1AP_SONInformation_ExtensionIE_77,
	3,	/* Elements count */
	&asn_SPC_S1AP_SONInformation_ExtensionIE_specs_77	/* Additional specs */
};

