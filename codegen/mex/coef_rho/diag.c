/*
 * diag.c
 *
 * Code generation for function 'diag'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "coef_rho.h"
#include "diag.h"
#include "coef_rho_emxutil.h"
#include "eml_int_forloop_overflow_check.h"

/* Variable Definitions */
static emlrtRSInfo yi_emlrtRSI = { 21, /* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"/* pathName */
};

static emlrtRSInfo gj_emlrtRSI = { 90, /* lineNo */
  "diag",                              /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/elmat/diag.m"/* pathName */
};

static emlrtRTEInfo bb_emlrtRTEI = { 82,/* lineNo */
  5,                                   /* colNo */
  "diag",                              /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/elmat/diag.m"/* pName */
};

/* Function Definitions */
void b_diag(const emlrtStack *sp, const emxArray_real_T *v, emxArray_real_T *d)
{
  int32_T nv;
  int32_T unnamed_idx_0;
  int32_T unnamed_idx_1;
  int32_T i16;
  boolean_T overflow;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  nv = v->size[1];
  unnamed_idx_0 = v->size[1];
  unnamed_idx_1 = v->size[1];
  i16 = d->size[0] * d->size[1];
  d->size[0] = unnamed_idx_0;
  d->size[1] = unnamed_idx_1;
  emxEnsureCapacity_real_T(sp, d, i16, &bb_emlrtRTEI);
  unnamed_idx_0 *= unnamed_idx_1;
  for (i16 = 0; i16 < unnamed_idx_0; i16++) {
    d->data[i16] = 0.0;
  }

  st.site = &gj_emlrtRSI;
  overflow = ((1 <= v->size[1]) && (v->size[1] > 2147483646));
  if (overflow) {
    b_st.site = &yi_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  for (unnamed_idx_0 = 0; unnamed_idx_0 < nv; unnamed_idx_0++) {
    d->data[unnamed_idx_0 + d->size[0] * unnamed_idx_0] = 1.0;
  }
}

void diag(const emlrtStack *sp, const emxArray_real_T *v, emxArray_real_T *d)
{
  int32_T nv;
  int32_T unnamed_idx_0;
  int32_T unnamed_idx_1;
  int32_T i15;
  boolean_T overflow;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  nv = v->size[0];
  unnamed_idx_0 = v->size[0];
  unnamed_idx_1 = v->size[0];
  i15 = d->size[0] * d->size[1];
  d->size[0] = unnamed_idx_0;
  d->size[1] = unnamed_idx_1;
  emxEnsureCapacity_real_T(sp, d, i15, &bb_emlrtRTEI);
  unnamed_idx_0 *= unnamed_idx_1;
  for (i15 = 0; i15 < unnamed_idx_0; i15++) {
    d->data[i15] = 0.0;
  }

  st.site = &gj_emlrtRSI;
  overflow = ((1 <= v->size[0]) && (v->size[0] > 2147483646));
  if (overflow) {
    b_st.site = &yi_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  for (unnamed_idx_0 = 0; unnamed_idx_0 < nv; unnamed_idx_0++) {
    d->data[unnamed_idx_0 + d->size[0] * unnamed_idx_0] = v->data[unnamed_idx_0];
  }
}

/* End of code generation (diag.c) */
