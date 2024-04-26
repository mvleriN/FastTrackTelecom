/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "UE-EUTRA-Capability-v1530-IEs.h"

#include "MeasParameters-v1530.h"
#include "Other-Parameters-v1530.h"
#include "NeighCellSI-AcquisitionParameters-v1530.h"
#include "MAC-Parameters-v1530.h"
#include "PhyLayerParameters-v1530.h"
#include "RF-Parameters-v1530.h"
#include "PDCP-Parameters-v1530.h"
#include "UE-BasedNetwPerfMeasParameters-v1530.h"
#include "RLC-Parameters-v1530.h"
#include "SL-Parameters-v1530.h"
#include "LAA-Parameters-v1530.h"
#include "UE-EUTRA-CapabilityAddXDD-Mode-v1530.h"
#include "UE-EUTRA-Capability-v1540-IEs.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_ue_CategoryDL_v1530_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 22 && value <= 26)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_ue_CategoryUL_v1530_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 22 && value <= 26)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_extendedNumberOfDRBs_r15_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_reducedCP_Latency_r15_constr_15 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ue_CategoryDL_v1530_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  22,  26 }	/* (22..26) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ue_CategoryUL_v1530_constr_18 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  22,  26 }	/* (22..26) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_extendedNumberOfDRBs_r15_value2enum_13[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_extendedNumberOfDRBs_r15_enum2value_13[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_extendedNumberOfDRBs_r15_specs_13 = {
	asn_MAP_extendedNumberOfDRBs_r15_value2enum_13,	/* "tag" => N; sorted by tag */
	asn_MAP_extendedNumberOfDRBs_r15_enum2value_13,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_extendedNumberOfDRBs_r15_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_extendedNumberOfDRBs_r15_13 = {
	"extendedNumberOfDRBs-r15",
	"extendedNumberOfDRBs-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_extendedNumberOfDRBs_r15_tags_13,
	sizeof(asn_DEF_extendedNumberOfDRBs_r15_tags_13)
		/sizeof(asn_DEF_extendedNumberOfDRBs_r15_tags_13[0]) - 1, /* 1 */
	asn_DEF_extendedNumberOfDRBs_r15_tags_13,	/* Same as above */
	sizeof(asn_DEF_extendedNumberOfDRBs_r15_tags_13)
		/sizeof(asn_DEF_extendedNumberOfDRBs_r15_tags_13[0]), /* 2 */
	{ 0, &asn_PER_type_extendedNumberOfDRBs_r15_constr_13, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_extendedNumberOfDRBs_r15_specs_13	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_reducedCP_Latency_r15_value2enum_15[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_reducedCP_Latency_r15_enum2value_15[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_reducedCP_Latency_r15_specs_15 = {
	asn_MAP_reducedCP_Latency_r15_value2enum_15,	/* "tag" => N; sorted by tag */
	asn_MAP_reducedCP_Latency_r15_enum2value_15,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_reducedCP_Latency_r15_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_reducedCP_Latency_r15_15 = {
	"reducedCP-Latency-r15",
	"reducedCP-Latency-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_reducedCP_Latency_r15_tags_15,
	sizeof(asn_DEF_reducedCP_Latency_r15_tags_15)
		/sizeof(asn_DEF_reducedCP_Latency_r15_tags_15[0]) - 1, /* 1 */
	asn_DEF_reducedCP_Latency_r15_tags_15,	/* Same as above */
	sizeof(asn_DEF_reducedCP_Latency_r15_tags_15)
		/sizeof(asn_DEF_reducedCP_Latency_r15_tags_15[0]), /* 2 */
	{ 0, &asn_PER_type_reducedCP_Latency_r15_constr_15, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_reducedCP_Latency_r15_specs_15	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_UE_EUTRA_Capability_v1530_IEs_1[] = {
	{ ATF_POINTER, 18, offsetof(struct UE_EUTRA_Capability_v1530_IEs, measParameters_v1530),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasParameters_v1530,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measParameters-v1530"
		},
	{ ATF_POINTER, 17, offsetof(struct UE_EUTRA_Capability_v1530_IEs, otherParameters_v1530),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Other_Parameters_v1530,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"otherParameters-v1530"
		},
	{ ATF_POINTER, 16, offsetof(struct UE_EUTRA_Capability_v1530_IEs, neighCellSI_AcquisitionParameters_v1530),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NeighCellSI_AcquisitionParameters_v1530,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"neighCellSI-AcquisitionParameters-v1530"
		},
	{ ATF_POINTER, 15, offsetof(struct UE_EUTRA_Capability_v1530_IEs, mac_Parameters_v1530),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MAC_Parameters_v1530,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mac-Parameters-v1530"
		},
	{ ATF_POINTER, 14, offsetof(struct UE_EUTRA_Capability_v1530_IEs, phyLayerParameters_v1530),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhyLayerParameters_v1530,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"phyLayerParameters-v1530"
		},
	{ ATF_POINTER, 13, offsetof(struct UE_EUTRA_Capability_v1530_IEs, rf_Parameters_v1530),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RF_Parameters_v1530,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rf-Parameters-v1530"
		},
	{ ATF_POINTER, 12, offsetof(struct UE_EUTRA_Capability_v1530_IEs, pdcp_Parameters_v1530),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDCP_Parameters_v1530,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdcp-Parameters-v1530"
		},
	{ ATF_POINTER, 11, offsetof(struct UE_EUTRA_Capability_v1530_IEs, ue_CategoryDL_v1530),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_ue_CategoryDL_v1530_constr_9,  memb_ue_CategoryDL_v1530_constraint_1 },
		0, 0, /* No default value */
		"ue-CategoryDL-v1530"
		},
	{ ATF_POINTER, 10, offsetof(struct UE_EUTRA_Capability_v1530_IEs, ue_BasedNetwPerfMeasParameters_v1530),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_BasedNetwPerfMeasParameters_v1530,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-BasedNetwPerfMeasParameters-v1530"
		},
	{ ATF_POINTER, 9, offsetof(struct UE_EUTRA_Capability_v1530_IEs, rlc_Parameters_v1530),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RLC_Parameters_v1530,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlc-Parameters-v1530"
		},
	{ ATF_POINTER, 8, offsetof(struct UE_EUTRA_Capability_v1530_IEs, sl_Parameters_v1530),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_Parameters_v1530,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-Parameters-v1530"
		},
	{ ATF_POINTER, 7, offsetof(struct UE_EUTRA_Capability_v1530_IEs, extendedNumberOfDRBs_r15),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_extendedNumberOfDRBs_r15_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"extendedNumberOfDRBs-r15"
		},
	{ ATF_POINTER, 6, offsetof(struct UE_EUTRA_Capability_v1530_IEs, reducedCP_Latency_r15),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_reducedCP_Latency_r15_15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reducedCP-Latency-r15"
		},
	{ ATF_POINTER, 5, offsetof(struct UE_EUTRA_Capability_v1530_IEs, laa_Parameters_v1530),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LAA_Parameters_v1530,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"laa-Parameters-v1530"
		},
	{ ATF_POINTER, 4, offsetof(struct UE_EUTRA_Capability_v1530_IEs, ue_CategoryUL_v1530),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_ue_CategoryUL_v1530_constr_18,  memb_ue_CategoryUL_v1530_constraint_1 },
		0, 0, /* No default value */
		"ue-CategoryUL-v1530"
		},
	{ ATF_POINTER, 3, offsetof(struct UE_EUTRA_Capability_v1530_IEs, fdd_Add_UE_EUTRA_Capabilities_v1530),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1530,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fdd-Add-UE-EUTRA-Capabilities-v1530"
		},
	{ ATF_POINTER, 2, offsetof(struct UE_EUTRA_Capability_v1530_IEs, tdd_Add_UE_EUTRA_Capabilities_v1530),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1530,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd-Add-UE-EUTRA-Capabilities-v1530"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_EUTRA_Capability_v1530_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_EUTRA_Capability_v1540_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_UE_EUTRA_Capability_v1530_IEs_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17 };
static const ber_tlv_tag_t asn_DEF_UE_EUTRA_Capability_v1530_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UE_EUTRA_Capability_v1530_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measParameters-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* otherParameters-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* neighCellSI-AcquisitionParameters-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* mac-Parameters-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* phyLayerParameters-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* rf-Parameters-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* pdcp-Parameters-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* ue-CategoryDL-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* ue-BasedNetwPerfMeasParameters-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* rlc-Parameters-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* sl-Parameters-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* extendedNumberOfDRBs-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* reducedCP-Latency-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* laa-Parameters-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* ue-CategoryUL-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* fdd-Add-UE-EUTRA-Capabilities-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 }, /* tdd-Add-UE-EUTRA-Capabilities-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 17, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_Capability_v1530_IEs_specs_1 = {
	sizeof(struct UE_EUTRA_Capability_v1530_IEs),
	offsetof(struct UE_EUTRA_Capability_v1530_IEs, _asn_ctx),
	asn_MAP_UE_EUTRA_Capability_v1530_IEs_tag2el_1,
	18,	/* Count of tags in the map */
	asn_MAP_UE_EUTRA_Capability_v1530_IEs_oms_1,	/* Optional members */
	18, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_Capability_v1530_IEs = {
	"UE-EUTRA-Capability-v1530-IEs",
	"UE-EUTRA-Capability-v1530-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_UE_EUTRA_Capability_v1530_IEs_tags_1,
	sizeof(asn_DEF_UE_EUTRA_Capability_v1530_IEs_tags_1)
		/sizeof(asn_DEF_UE_EUTRA_Capability_v1530_IEs_tags_1[0]), /* 1 */
	asn_DEF_UE_EUTRA_Capability_v1530_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_EUTRA_Capability_v1530_IEs_tags_1)
		/sizeof(asn_DEF_UE_EUTRA_Capability_v1530_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UE_EUTRA_Capability_v1530_IEs_1,
	18,	/* Elements count */
	&asn_SPC_UE_EUTRA_Capability_v1530_IEs_specs_1	/* Additional specs */
};
