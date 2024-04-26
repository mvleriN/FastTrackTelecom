/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_RSTD_InterFreqInfo_r10_H_
#define	_RSTD_InterFreqInfo_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ARFCN-ValueEUTRA.h"
#include <NativeInteger.h>
#include "ARFCN-ValueEUTRA-v9e0.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RSTD_InterFreqInfo_r10__measPRS_Offset_r15_PR {
	RSTD_InterFreqInfo_r10__measPRS_Offset_r15_PR_NOTHING,	/* No components present */
	RSTD_InterFreqInfo_r10__measPRS_Offset_r15_PR_rstd0_r15,
	RSTD_InterFreqInfo_r10__measPRS_Offset_r15_PR_rstd1_r15,
	RSTD_InterFreqInfo_r10__measPRS_Offset_r15_PR_rstd2_r15,
	RSTD_InterFreqInfo_r10__measPRS_Offset_r15_PR_rstd3_r15,
	RSTD_InterFreqInfo_r10__measPRS_Offset_r15_PR_rstd4_r15,
	RSTD_InterFreqInfo_r10__measPRS_Offset_r15_PR_rstd5_r15,
	RSTD_InterFreqInfo_r10__measPRS_Offset_r15_PR_rstd6_r15,
	RSTD_InterFreqInfo_r10__measPRS_Offset_r15_PR_rstd7_r15,
	RSTD_InterFreqInfo_r10__measPRS_Offset_r15_PR_rstd8_r15,
	RSTD_InterFreqInfo_r10__measPRS_Offset_r15_PR_rstd9_r15,
	RSTD_InterFreqInfo_r10__measPRS_Offset_r15_PR_rstd10_r15,
	RSTD_InterFreqInfo_r10__measPRS_Offset_r15_PR_rstd11_r15,
	RSTD_InterFreqInfo_r10__measPRS_Offset_r15_PR_rstd12_r15,
	RSTD_InterFreqInfo_r10__measPRS_Offset_r15_PR_rstd13_r15,
	RSTD_InterFreqInfo_r10__measPRS_Offset_r15_PR_rstd14_r15,
	RSTD_InterFreqInfo_r10__measPRS_Offset_r15_PR_rstd15_r15,
	RSTD_InterFreqInfo_r10__measPRS_Offset_r15_PR_rstd16_r15,
	RSTD_InterFreqInfo_r10__measPRS_Offset_r15_PR_rstd17_r15,
	RSTD_InterFreqInfo_r10__measPRS_Offset_r15_PR_rstd18_r15,
	RSTD_InterFreqInfo_r10__measPRS_Offset_r15_PR_rstd19_r15,
	RSTD_InterFreqInfo_r10__measPRS_Offset_r15_PR_rstd20_r15
} RSTD_InterFreqInfo_r10__measPRS_Offset_r15_PR;

/* RSTD-InterFreqInfo-r10 */
typedef struct RSTD_InterFreqInfo_r10 {
	ARFCN_ValueEUTRA_t	 carrierFreq_r10;
	long	 measPRS_Offset_r10;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	ARFCN_ValueEUTRA_v9e0_t	*carrierFreq_v1090	/* OPTIONAL */;
	struct RSTD_InterFreqInfo_r10__measPRS_Offset_r15 {
		RSTD_InterFreqInfo_r10__measPRS_Offset_r15_PR present;
		union RSTD_InterFreqInfo_r10__measPRS_Offset_r15_u {
			long	 rstd0_r15;
			long	 rstd1_r15;
			long	 rstd2_r15;
			long	 rstd3_r15;
			long	 rstd4_r15;
			long	 rstd5_r15;
			long	 rstd6_r15;
			long	 rstd7_r15;
			long	 rstd8_r15;
			long	 rstd9_r15;
			long	 rstd10_r15;
			long	 rstd11_r15;
			long	 rstd12_r15;
			long	 rstd13_r15;
			long	 rstd14_r15;
			long	 rstd15_r15;
			long	 rstd16_r15;
			long	 rstd17_r15;
			long	 rstd18_r15;
			long	 rstd19_r15;
			long	 rstd20_r15;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *measPRS_Offset_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RSTD_InterFreqInfo_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RSTD_InterFreqInfo_r10;
extern asn_SEQUENCE_specifics_t asn_SPC_RSTD_InterFreqInfo_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_RSTD_InterFreqInfo_r10_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _RSTD_InterFreqInfo_r10_H_ */
#include <asn_internal.h>