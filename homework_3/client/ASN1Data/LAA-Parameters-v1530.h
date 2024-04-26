/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_LAA_Parameters_v1530_H_
#define	_LAA_Parameters_v1530_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LAA_Parameters_v1530__aul_r15 {
	LAA_Parameters_v1530__aul_r15_supported	= 0
} e_LAA_Parameters_v1530__aul_r15;
typedef enum LAA_Parameters_v1530__laa_PUSCH_Mode1_r15 {
	LAA_Parameters_v1530__laa_PUSCH_Mode1_r15_supported	= 0
} e_LAA_Parameters_v1530__laa_PUSCH_Mode1_r15;
typedef enum LAA_Parameters_v1530__laa_PUSCH_Mode2_r15 {
	LAA_Parameters_v1530__laa_PUSCH_Mode2_r15_supported	= 0
} e_LAA_Parameters_v1530__laa_PUSCH_Mode2_r15;
typedef enum LAA_Parameters_v1530__laa_PUSCH_Mode3_r15 {
	LAA_Parameters_v1530__laa_PUSCH_Mode3_r15_supported	= 0
} e_LAA_Parameters_v1530__laa_PUSCH_Mode3_r15;

/* LAA-Parameters-v1530 */
typedef struct LAA_Parameters_v1530 {
	long	*aul_r15	/* OPTIONAL */;
	long	*laa_PUSCH_Mode1_r15	/* OPTIONAL */;
	long	*laa_PUSCH_Mode2_r15	/* OPTIONAL */;
	long	*laa_PUSCH_Mode3_r15	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LAA_Parameters_v1530_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_aul_r15_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_laa_PUSCH_Mode1_r15_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_laa_PUSCH_Mode2_r15_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_laa_PUSCH_Mode3_r15_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LAA_Parameters_v1530;
extern asn_SEQUENCE_specifics_t asn_SPC_LAA_Parameters_v1530_specs_1;
extern asn_TYPE_member_t asn_MBR_LAA_Parameters_v1530_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _LAA_Parameters_v1530_H_ */
#include <asn_internal.h>