/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "UE-EUTRA-CapabilityAddXDD-Mode-v1370.h"

#include "CE-Parameters-v1370.h"
asn_TYPE_member_t asn_MBR_UE_EUTRA_CapabilityAddXDD_Mode_v1370_1[] = {
	{ ATF_POINTER, 1, offsetof(struct UE_EUTRA_CapabilityAddXDD_Mode_v1370, ce_Parameters_v1370),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CE_Parameters_v1370,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ce-Parameters-v1370"
		},
};
static const int asn_MAP_UE_EUTRA_CapabilityAddXDD_Mode_v1370_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1370_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UE_EUTRA_CapabilityAddXDD_Mode_v1370_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* ce-Parameters-v1370 */
};
asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_CapabilityAddXDD_Mode_v1370_specs_1 = {
	sizeof(struct UE_EUTRA_CapabilityAddXDD_Mode_v1370),
	offsetof(struct UE_EUTRA_CapabilityAddXDD_Mode_v1370, _asn_ctx),
	asn_MAP_UE_EUTRA_CapabilityAddXDD_Mode_v1370_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_UE_EUTRA_CapabilityAddXDD_Mode_v1370_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1370 = {
	"UE-EUTRA-CapabilityAddXDD-Mode-v1370",
	"UE-EUTRA-CapabilityAddXDD-Mode-v1370",
	&asn_OP_SEQUENCE,
	asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1370_tags_1,
	sizeof(asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1370_tags_1)
		/sizeof(asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1370_tags_1[0]), /* 1 */
	asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1370_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1370_tags_1)
		/sizeof(asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1370_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UE_EUTRA_CapabilityAddXDD_Mode_v1370_1,
	1,	/* Elements count */
	&asn_SPC_UE_EUTRA_CapabilityAddXDD_Mode_v1370_specs_1	/* Additional specs */
};
