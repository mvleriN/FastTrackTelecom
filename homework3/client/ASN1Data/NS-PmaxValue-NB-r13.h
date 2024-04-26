/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_NS_PmaxValue_NB_r13_H_
#define	_NS_PmaxValue_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "P-Max.h"
#include "AdditionalSpectrumEmission.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NS-PmaxValue-NB-r13 */
typedef struct NS_PmaxValue_NB_r13 {
	P_Max_t	*additionalPmax_r13	/* OPTIONAL */;
	AdditionalSpectrumEmission_t	 additionalSpectrumEmission_r13;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NS_PmaxValue_NB_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NS_PmaxValue_NB_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_NS_PmaxValue_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_NS_PmaxValue_NB_r13_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NS_PmaxValue_NB_r13_H_ */
#include <asn_internal.h>