/*
 * mrdivide.c
 *
 * Code generation for function 'mrdivide'
 *
 */

/* Include files */
#include <string.h>
#include "rt_nonfinite.h"
#include "coef_rho.h"
#include "mrdivide.h"
#include "xtrsm.h"
#include "lusolve.h"
#include "xgetrf.h"

/* Variable Definitions */
static emlrtRSInfo gi_emlrtRSI = { 1,  /* lineNo */
  "mrdivide",                          /* fcnName */
  "/Applications/MATLAB_R2018a.app/toolbox/eml/lib/matlab/ops/mrdivide.p"/* pathName */
};

static emlrtRSInfo hi_emlrtRSI = { 42, /* lineNo */
  "lusolve",                           /* fcnName */
  "/Applications/MATLAB_R2018a.app/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pathName */
};

static emlrtRSInfo ii_emlrtRSI = { 103,/* lineNo */
  "lusolve",                           /* fcnName */
  "/Applications/MATLAB_R2018a.app/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pathName */
};

static emlrtRSInfo ji_emlrtRSI = { 101,/* lineNo */
  "lusolve",                           /* fcnName */
  "/Applications/MATLAB_R2018a.app/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pathName */
};

/* Function Definitions */
void mrdivide(const emlrtStack *sp, const real_T A[900], const real_T B[900],
              real_T y[900])
{
  real_T b_A[900];
  int32_T ipiv[30];
  int32_T info;
  int32_T jp;
  int32_T xi;
  real_T temp;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &gi_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &hi_emlrtRSI;
  memcpy(&b_A[0], &B[0], 900U * sizeof(real_T));
  c_st.site = &ji_emlrtRSI;
  xgetrf(&c_st, b_A, ipiv, &info);
  if (info > 0) {
    c_st.site = &ii_emlrtRSI;
    warn_singular(&c_st);
  }

  memcpy(&y[0], &A[0], 900U * sizeof(real_T));
  xtrsm(b_A, y);
  b_xtrsm(b_A, y);
  for (info = 28; info >= 0; info--) {
    if (ipiv[info] != info + 1) {
      jp = ipiv[info] - 1;
      for (xi = 0; xi < 30; xi++) {
        temp = y[xi + 30 * info];
        y[xi + 30 * info] = y[xi + 30 * jp];
        y[xi + 30 * jp] = temp;
      }
    }
  }
}

/* End of code generation (mrdivide.c) */
