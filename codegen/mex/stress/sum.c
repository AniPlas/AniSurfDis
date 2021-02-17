/*
 * sum.c
 *
 * Code generation for function 'sum'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "stress.h"
#include "sum.h"
#include "stress_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "stress_data.h"

/* Variable Definitions */
static emlrtRSInfo bc_emlrtRSI = { 9,  /* lineNo */
  "sum",                               /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/datafun/sum.m"/* pathName */
};

static emlrtRSInfo cc_emlrtRSI = { 64, /* lineNo */
  "sumprod",                           /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/datafun/private/sumprod.m"/* pathName */
};

static emlrtRSInfo dc_emlrtRSI = { 134,/* lineNo */
  "combineVectorElements",             /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/datafun/private/combineVectorElements.m"/* pathName */
};

static emlrtRSInfo ec_emlrtRSI = { 172,/* lineNo */
  "combineVectorElements",             /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/datafun/private/combineVectorElements.m"/* pathName */
};

static emlrtRTEInfo hc_emlrtRTEI = { 134,/* lineNo */
  13,                                  /* colNo */
  "combineVectorElements",             /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/datafun/private/combineVectorElements.m"/* pName */
};

/* Function Definitions */
void b_sum(const emxArray_real_T *x, real_T y[6])
{
  int32_T vlen;
  int32_T j;
  int32_T k;
  int32_T xoffset;
  vlen = x->size[1];
  if (x->size[1] == 0) {
    for (vlen = 0; vlen < 6; vlen++) {
      y[vlen] = 0.0;
    }
  } else {
    for (j = 0; j < 6; j++) {
      y[j] = x->data[j];
    }

    for (k = 2; k <= vlen; k++) {
      xoffset = (k - 1) * 6;
      for (j = 0; j < 6; j++) {
        y[j] += x->data[xoffset + j];
      }
    }
  }
}

void sum(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  int32_T npages;
  int32_T i;
  boolean_T overflow;
  int32_T xpageoffset;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &bc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &cc_emlrtRSI;
  if (x->size[1] == 0) {
    y->size[0] = 1;
    y->size[1] = 0;
  } else {
    c_st.site = &dc_emlrtRSI;
    npages = x->size[1];
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = x->size[1];
    emxEnsureCapacity_real_T(&c_st, y, i, &hc_emlrtRTEI);
    d_st.site = &ec_emlrtRSI;
    overflow = (x->size[1] > 2147483646);
    if (overflow) {
      e_st.site = &lb_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }

    for (i = 0; i < npages; i++) {
      xpageoffset = i << 1;
      y->data[i] = x->data[xpageoffset];
      y->data[i] += x->data[xpageoffset + 1];
    }
  }
}

/* End of code generation (sum.c) */
