/*
 * abs.c
 *
 * Code generation for function 'abs'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "stress.h"
#include "abs.h"
#include "stress_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "stress_data.h"

/* Variable Definitions */
static emlrtRSInfo mb_emlrtRSI = { 16, /* lineNo */
  "abs",                               /* fcnName */
  "/Applications/MATLAB_R2018a.app/toolbox/eml/lib/matlab/elfun/abs.m"/* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 74, /* lineNo */
  "applyScalarFunction",               /* fcnName */
  "/Applications/MATLAB_R2018a.app/toolbox/eml/eml/+coder/+internal/applyScalarFunction.m"/* pathName */
};

static emlrtRTEInfo vc_emlrtRTEI = { 16,/* lineNo */
  5,                                   /* colNo */
  "abs",                               /* fName */
  "/Applications/MATLAB_R2018a.app/toolbox/eml/lib/matlab/elfun/abs.m"/* pName */
};

/* Function Definitions */
void b_abs(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  int32_T k;
  boolean_T overflow;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &mb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  k = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = x->size[1];
  emxEnsureCapacity_real_T(&st, y, k, &vc_emlrtRTEI);
  b_st.site = &nb_emlrtRSI;
  overflow = ((!(1 > x->size[1])) && (x->size[1] > 2147483646));
  if (overflow) {
    c_st.site = &lb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (k = 0; k < x->size[1]; k++) {
    y->data[k] = muDoubleScalarAbs(x->data[k]);
  }
}

void c_abs(const real_T x[6], real_T y[6])
{
  int32_T k;
  for (k = 0; k < 6; k++) {
    y[k] = muDoubleScalarAbs(x[k]);
  }
}

void d_abs(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  int32_T nx;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &mb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  nx = 6 * x->size[1];
  k = y->size[0] * y->size[1];
  y->size[0] = 6;
  y->size[1] = x->size[1];
  emxEnsureCapacity_real_T(&st, y, k, &vc_emlrtRTEI);
  b_st.site = &nb_emlrtRSI;
  if ((!(1 > nx)) && (nx > 2147483646)) {
    c_st.site = &lb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (k = 0; k < nx; k++) {
    y->data[k] = muDoubleScalarAbs(x->data[k]);
  }
}

/* End of code generation (abs.c) */
