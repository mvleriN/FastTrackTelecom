/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_SL_TF_IndexPair_r12_H_
#define	_SL_TF_IndexPair_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SL-TF-IndexPair-r12 */
typedef struct SL_TF_IndexPair_r12 {
	long	*discSF_Index_r12	/* OPTIONAL */;
	long	*discPRB_Index_r12	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_TF_IndexPair_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_TF_IndexPair_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_TF_IndexPair_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_TF_IndexPair_r12_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SL_TF_IndexPair_r12_H_ */
#include <asn_internal.h>