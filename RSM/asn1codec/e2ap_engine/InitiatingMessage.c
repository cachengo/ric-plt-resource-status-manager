/*
 *
 * Copyright 2019 AT&T Intellectual Property
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */


/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-PDU-Descriptions"
 * 	found in "../../asnFiles/e2ap-v031.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "InitiatingMessage.h"

static const long asn_VAL_1_id_ricSubscription = 201;
static const long asn_VAL_1_reject = 0;
static const long asn_VAL_2_id_ricSubscriptionDelete = 202;
static const long asn_VAL_2_reject = 0;
static const long asn_VAL_3_id_ricServiceUpdate = 203;
static const long asn_VAL_3_reject = 0;
static const long asn_VAL_4_id_ricControl = 204;
static const long asn_VAL_4_reject = 0;
static const long asn_VAL_5_id_x2Setup = 6;
static const long asn_VAL_5_reject = 0;
static const long asn_VAL_6_id_endcX2Setup = 36;
static const long asn_VAL_6_reject = 0;
static const long asn_VAL_7_id_resourceStatusReportingInitiation = 9;
static const long asn_VAL_7_reject = 0;
static const long asn_VAL_8_id_eNBConfigurationUpdate = 8;
static const long asn_VAL_8_reject = 0;
static const long asn_VAL_9_id_endcConfigurationUpdate = 37;
static const long asn_VAL_9_reject = 0;
static const long asn_VAL_10_id_reset = 7;
static const long asn_VAL_10_reject = 0;
static const long asn_VAL_11_id_ricIndication = 205;
static const long asn_VAL_11_ignore = 1;
static const long asn_VAL_12_id_ricServiceQuery = 206;
static const long asn_VAL_12_ignore = 1;
static const long asn_VAL_13_id_loadIndication = 2;
static const long asn_VAL_13_ignore = 1;
static const long asn_VAL_14_id_gNBStatusIndication = 45;
static const long asn_VAL_14_ignore = 1;
static const long asn_VAL_15_id_resourceStatusReporting = 10;
static const long asn_VAL_15_ignore = 1;
static const long asn_VAL_16_id_errorIndication = 3;
static const long asn_VAL_16_ignore = 1;
static const asn_ioc_cell_t asn_IOS_E2AP_ELEMENTARY_PROCEDURES_1_rows[] = {
	{ "&InitiatingMessage", aioc__type, &asn_DEF_RICsubscriptionRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_RICsubscriptionResponse },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_RICsubscriptionFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_1_id_ricSubscription },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_1_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_RICsubscriptionDeleteRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_RICsubscriptionDeleteResponse },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_RICsubscriptionDeleteFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_2_id_ricSubscriptionDelete },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_2_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_RICserviceUpdate },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_RICserviceUpdateAcknowledge },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_RICserviceUpdateFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_3_id_ricServiceUpdate },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_3_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_RICcontrolRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_RICcontrolAcknowledge },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_RICcontrolFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_4_id_ricControl },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_4_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_X2SetupRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_X2SetupResponse },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_X2SetupFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_5_id_x2Setup },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_5_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_ENDCX2SetupRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_ENDCX2SetupResponse },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_ENDCX2SetupFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_6_id_endcX2Setup },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_6_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_ResourceStatusRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_ResourceStatusResponse },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_ResourceStatusFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_7_id_resourceStatusReportingInitiation },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_7_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_ENBConfigurationUpdate },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_ENBConfigurationUpdateAcknowledge },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_ENBConfigurationUpdateFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_8_id_eNBConfigurationUpdate },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_8_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_ENDCConfigurationUpdate },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_ENDCConfigurationUpdateAcknowledge },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_ENDCConfigurationUpdateFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_9_id_endcConfigurationUpdate },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_9_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_ResetRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_ResetResponse },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_10_id_reset },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_10_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_RICindication },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_11_id_ricIndication },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_11_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_RICserviceQuery },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_12_id_ricServiceQuery },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_12_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_LoadInformation },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_13_id_loadIndication },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_13_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_GNBStatusIndication },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_14_id_gNBStatusIndication },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_14_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_ResourceStatusUpdate },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_15_id_resourceStatusReporting },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_15_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_ErrorIndication },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_16_id_errorIndication },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_16_ignore }
};
static const asn_ioc_set_t asn_IOS_E2AP_ELEMENTARY_PROCEDURES_1[] = {
	{ 16, 5, asn_IOS_E2AP_ELEMENTARY_PROCEDURES_1_rows }
};
static int
memb_procedureCode_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 255)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_type_selector_result_t
select_InitiatingMessage_criticality_type(const asn_TYPE_descriptor_t *parent_type, const void *parent_sptr) {
	asn_type_selector_result_t result = {0, 0};
	const asn_ioc_set_t *itable = asn_IOS_E2AP_ELEMENTARY_PROCEDURES_1;
	size_t constraining_column = 3; /* &procedureCode */
	size_t for_column = 4; /* &criticality */
	size_t row, presence_index = 0;
	const long *constraining_value = (const long *)((const char *)parent_sptr + offsetof(struct InitiatingMessage, procedureCode));
	
	for(row=0; row < itable->rows_count; row++) {
	    const asn_ioc_cell_t *constraining_cell = &itable->rows[row * itable->columns_count + constraining_column];
	    const asn_ioc_cell_t *type_cell = &itable->rows[row * itable->columns_count + for_column];
	
	    if(type_cell->cell_kind == aioc__undefined)
	        continue;
	
	    presence_index++;
	    if(constraining_cell->type_descriptor->op->compare_struct(constraining_cell->type_descriptor, constraining_value, constraining_cell->value_sptr) == 0) {
	        result.type_descriptor = type_cell->type_descriptor;
	        result.presence_index = presence_index;
	        break;
	    }
	}
	
	return result;
}

static int
memb_criticality_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

static asn_type_selector_result_t
select_InitiatingMessage_value_type(const asn_TYPE_descriptor_t *parent_type, const void *parent_sptr) {
	asn_type_selector_result_t result = {0, 0};
	const asn_ioc_set_t *itable = asn_IOS_E2AP_ELEMENTARY_PROCEDURES_1;
	size_t constraining_column = 3; /* &procedureCode */
	size_t for_column = 0; /* &InitiatingMessage */
	size_t row, presence_index = 0;
	const long *constraining_value = (const long *)((const char *)parent_sptr + offsetof(struct InitiatingMessage, procedureCode));
	
	for(row=0; row < itable->rows_count; row++) {
	    const asn_ioc_cell_t *constraining_cell = &itable->rows[row * itable->columns_count + constraining_column];
	    const asn_ioc_cell_t *type_cell = &itable->rows[row * itable->columns_count + for_column];
	
	    if(type_cell->cell_kind == aioc__undefined)
	        continue;
	
	    presence_index++;
	    if(constraining_cell->type_descriptor->op->compare_struct(constraining_cell->type_descriptor, constraining_value, constraining_cell->value_sptr) == 0) {
	        result.type_descriptor = type_cell->type_descriptor;
	        result.presence_index = presence_index;
	        break;
	    }
	}
	
	return result;
}

static int
memb_value_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

static asn_per_constraints_t asn_PER_memb_procedureCode_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_criticality_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_value_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_value_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct InitiatingMessage__value, choice.RICsubscriptionRequest),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RICsubscriptionRequest,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"RICsubscriptionRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InitiatingMessage__value, choice.RICsubscriptionDeleteRequest),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RICsubscriptionDeleteRequest,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"RICsubscriptionDeleteRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InitiatingMessage__value, choice.RICserviceUpdate),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RICserviceUpdate,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"RICserviceUpdate"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InitiatingMessage__value, choice.RICcontrolRequest),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RICcontrolRequest,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"RICcontrolRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InitiatingMessage__value, choice.X2SetupRequest),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_X2SetupRequest,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"X2SetupRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InitiatingMessage__value, choice.ENDCX2SetupRequest),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ENDCX2SetupRequest,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ENDCX2SetupRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InitiatingMessage__value, choice.ResourceStatusRequest),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ResourceStatusRequest,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ResourceStatusRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InitiatingMessage__value, choice.ENBConfigurationUpdate),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ENBConfigurationUpdate,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ENBConfigurationUpdate"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InitiatingMessage__value, choice.ENDCConfigurationUpdate),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ENDCConfigurationUpdate,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ENDCConfigurationUpdate"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InitiatingMessage__value, choice.ResetRequest),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ResetRequest,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ResetRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InitiatingMessage__value, choice.RICindication),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RICindication,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"RICindication"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InitiatingMessage__value, choice.RICserviceQuery),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RICserviceQuery,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"RICserviceQuery"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InitiatingMessage__value, choice.LoadInformation),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_LoadInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"LoadInformation"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InitiatingMessage__value, choice.GNBStatusIndication),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_GNBStatusIndication,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"GNBStatusIndication"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InitiatingMessage__value, choice.ResourceStatusUpdate),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ResourceStatusUpdate,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ResourceStatusUpdate"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InitiatingMessage__value, choice.ErrorIndication),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ErrorIndication,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ErrorIndication"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_value_tag2el_4[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 15 }, /* RICsubscriptionRequest */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, -1, 14 }, /* RICsubscriptionDeleteRequest */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 2, -2, 13 }, /* RICserviceUpdate */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 3, -3, 12 }, /* RICcontrolRequest */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 4, -4, 11 }, /* X2SetupRequest */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 5, -5, 10 }, /* ENDCX2SetupRequest */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 6, -6, 9 }, /* ResourceStatusRequest */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 7, -7, 8 }, /* ENBConfigurationUpdate */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 8, -8, 7 }, /* ENDCConfigurationUpdate */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 9, -9, 6 }, /* ResetRequest */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 10, -10, 5 }, /* RICindication */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 11, -11, 4 }, /* RICserviceQuery */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 12, -12, 3 }, /* LoadInformation */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 13, -13, 2 }, /* GNBStatusIndication */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 14, -14, 1 }, /* ResourceStatusUpdate */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 15, -15, 0 } /* ErrorIndication */
};
static asn_CHOICE_specifics_t asn_SPC_value_specs_4 = {
	sizeof(struct InitiatingMessage__value),
	offsetof(struct InitiatingMessage__value, _asn_ctx),
	offsetof(struct InitiatingMessage__value, present),
	sizeof(((struct InitiatingMessage__value *)0)->present),
	asn_MAP_value_tag2el_4,
	16,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_value_4 = {
	"value",
	"value",
	&asn_OP_OPEN_TYPE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, 0, OPEN_TYPE_constraint },
	asn_MBR_value_4,
	16,	/* Elements count */
	&asn_SPC_value_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_InitiatingMessage_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct InitiatingMessage, procedureCode),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProcedureCode,
		0,
		{ 0, &asn_PER_memb_procedureCode_constr_2,  memb_procedureCode_constraint_1 },
		0, 0, /* No default value */
		"procedureCode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InitiatingMessage, criticality),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Criticality,
		select_InitiatingMessage_criticality_type,
		{ 0, &asn_PER_memb_criticality_constr_3,  memb_criticality_constraint_1 },
		0, 0, /* No default value */
		"criticality"
		},
	{ ATF_OPEN_TYPE | ATF_NOFLAGS, 0, offsetof(struct InitiatingMessage, value),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_value_4,
		select_InitiatingMessage_value_type,
		{ 0, &asn_PER_memb_value_constr_4,  memb_value_constraint_1 },
		0, 0, /* No default value */
		"value"
		},
};
static const ber_tlv_tag_t asn_DEF_InitiatingMessage_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_InitiatingMessage_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* procedureCode */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* criticality */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* value */
};
asn_SEQUENCE_specifics_t asn_SPC_InitiatingMessage_specs_1 = {
	sizeof(struct InitiatingMessage),
	offsetof(struct InitiatingMessage, _asn_ctx),
	asn_MAP_InitiatingMessage_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_InitiatingMessage = {
	"InitiatingMessage",
	"InitiatingMessage",
	&asn_OP_SEQUENCE,
	asn_DEF_InitiatingMessage_tags_1,
	sizeof(asn_DEF_InitiatingMessage_tags_1)
		/sizeof(asn_DEF_InitiatingMessage_tags_1[0]), /* 1 */
	asn_DEF_InitiatingMessage_tags_1,	/* Same as above */
	sizeof(asn_DEF_InitiatingMessage_tags_1)
		/sizeof(asn_DEF_InitiatingMessage_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_InitiatingMessage_1,
	3,	/* Elements count */
	&asn_SPC_InitiatingMessage_specs_1	/* Additional specs */
};
