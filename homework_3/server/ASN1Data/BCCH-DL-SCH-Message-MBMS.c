/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "BCCH-DL-SCH-Message-MBMS.h"

static asn_TYPE_member_t asn_MBR_BCCH_DL_SCH_Message_MBMS_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct BCCH_DL_SCH_Message_MBMS, message),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_BCCH_DL_SCH_MessageType_MBMS_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"message"
		},
};
static const ber_tlv_tag_t asn_DEF_BCCH_DL_SCH_Message_MBMS_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_BCCH_DL_SCH_Message_MBMS_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* message */
};
static asn_SEQUENCE_specifics_t asn_SPC_BCCH_DL_SCH_Message_MBMS_specs_1 = {
	sizeof(struct BCCH_DL_SCH_Message_MBMS),
	offsetof(struct BCCH_DL_SCH_Message_MBMS, _asn_ctx),
	asn_MAP_BCCH_DL_SCH_Message_MBMS_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_BCCH_DL_SCH_Message_MBMS = {
	"BCCH-DL-SCH-Message-MBMS",
	"BCCH-DL-SCH-Message-MBMS",
	&asn_OP_SEQUENCE,
	asn_DEF_BCCH_DL_SCH_Message_MBMS_tags_1,
	sizeof(asn_DEF_BCCH_DL_SCH_Message_MBMS_tags_1)
		/sizeof(asn_DEF_BCCH_DL_SCH_Message_MBMS_tags_1[0]), /* 1 */
	asn_DEF_BCCH_DL_SCH_Message_MBMS_tags_1,	/* Same as above */
	sizeof(asn_DEF_BCCH_DL_SCH_Message_MBMS_tags_1)
		/sizeof(asn_DEF_BCCH_DL_SCH_Message_MBMS_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_BCCH_DL_SCH_Message_MBMS_1,
	1,	/* Elements count */
	&asn_SPC_BCCH_DL_SCH_Message_MBMS_specs_1	/* Additional specs */
};
