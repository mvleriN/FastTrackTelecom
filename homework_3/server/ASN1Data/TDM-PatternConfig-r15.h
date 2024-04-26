/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_TDM_PatternConfig_r15_H_
#define	_TDM_PatternConfig_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "SubframeAssignment-r15.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TDM_PatternConfig_r15_PR {
	TDM_PatternConfig_r15_PR_NOTHING,	/* No components present */
	TDM_PatternConfig_r15_PR_release,
	TDM_PatternConfig_r15_PR_setup
} TDM_PatternConfig_r15_PR;

/* TDM-PatternConfig-r15 */
typedef struct TDM_PatternConfig_r15 {
	TDM_PatternConfig_r15_PR present;
	union TDM_PatternConfig_r15_u {
		NULL_t	 release;
		struct TDM_PatternConfig_r15__setup {
			SubframeAssignment_r15_t	 subframeAssignment_r15;
			long	 harq_Offset_r15;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TDM_PatternConfig_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TDM_PatternConfig_r15;
extern asn_CHOICE_specifics_t asn_SPC_TDM_PatternConfig_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_TDM_PatternConfig_r15_1[2];
extern asn_per_constraints_t asn_PER_type_TDM_PatternConfig_r15_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _TDM_PatternConfig_r15_H_ */
#include <asn_internal.h>