/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "RF-Parameters-v1060.h"

asn_TYPE_member_t asn_MBR_RF_Parameters_v1060_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RF_Parameters_v1060, supportedBandCombinationExt_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SupportedBandCombinationExt_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedBandCombinationExt-r10"
		},
};
static const ber_tlv_tag_t asn_DEF_RF_Parameters_v1060_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RF_Parameters_v1060_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* supportedBandCombinationExt-r10 */
};
asn_SEQUENCE_specifics_t asn_SPC_RF_Parameters_v1060_specs_1 = {
	sizeof(struct RF_Parameters_v1060),
	offsetof(struct RF_Parameters_v1060, _asn_ctx),
	asn_MAP_RF_Parameters_v1060_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RF_Parameters_v1060 = {
	"RF-Parameters-v1060",
	"RF-Parameters-v1060",
	&asn_OP_SEQUENCE,
	asn_DEF_RF_Parameters_v1060_tags_1,
	sizeof(asn_DEF_RF_Parameters_v1060_tags_1)
		/sizeof(asn_DEF_RF_Parameters_v1060_tags_1[0]), /* 1 */
	asn_DEF_RF_Parameters_v1060_tags_1,	/* Same as above */
	sizeof(asn_DEF_RF_Parameters_v1060_tags_1)
		/sizeof(asn_DEF_RF_Parameters_v1060_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RF_Parameters_v1060_1,
	1,	/* Elements count */
	&asn_SPC_RF_Parameters_v1060_specs_1	/* Additional specs */
};
