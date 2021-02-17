/*
 * power.c
 *
 * Code generation for function 'power'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "stress.h"
#include "power.h"
#include "stress_emxutil.h"
#include "error.h"

/* Variable Definitions */
static emlrtRSInfo mc_emlrtRSI = { 49, /* lineNo */
  "power",                             /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/ops/power.m"/* pathName */
};

static emlrtRSInfo nc_emlrtRSI = { 58, /* lineNo */
  "power",                             /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/ops/power.m"/* pathName */
};

static emlrtRSInfo oc_emlrtRSI = { 61, /* lineNo */
  "power",                             /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/ops/power.m"/* pathName */
};

static emlrtRTEInfo lc_emlrtRTEI = { 58,/* lineNo */
  5,                                   /* colNo */
  "power",                             /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/ops/power.m"/* pName */
};

/* Function Declarations */
static boolean_T fltpower_domain_error(void);

/* Function Definitions */
static boolean_T fltpower_domain_error(void)
{
  return false;
}

void power(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T *y)
{
  int32_T nx;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &mc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &nc_emlrtRSI;
  nx = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = a->size[1];
  emxEnsureCapacity_real_T(&b_st, y, nx, &lc_emlrtRTEI);
  nx = a->size[1];
  for (k = 0; k < nx; k++) {
    y->data[k] = a->data[k] * a->data[k];
  }

  if (fltpower_domain_error()) {
    b_st.site = &oc_emlrtRSI;
    b_error(&b_st);
  }
}

/* End of code generation (power.c) */
