/*
 * mldivide.c
 *
 * Code generation for function 'mldivide'
 *
 */

/* Include files */
#include <string.h>
#include "rt_nonfinite.h"
#include "stress.h"
#include "mldivide.h"
#include "xtrsm.h"
#include "lusolve.h"
#include "xgetrf.h"

/* Variable Definitions */
static emlrtRSInfo bm_emlrtRSI = { 34, /* lineNo */
  "mldivide",                          /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/ops/mldivide.m"/* pathName */
};

static emlrtRSInfo cm_emlrtRSI = { 67, /* lineNo */
  "lusolve",                           /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pathName */
};

static emlrtRSInfo dm_emlrtRSI = { 109,/* lineNo */
  "lusolve",                           /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pathName */
};

static emlrtRSInfo em_emlrtRSI = { 107,/* lineNo */
  "lusolve",                           /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pathName */
};

/* Function Definitions */
void mldivide(const emlrtStack *sp, const real_T A[900], real_T B[900])
{
  real_T b_A[900];
  int32_T ipiv[30];
  int32_T info;
  int32_T xj;
  int32_T temp_tmp;
  real_T temp;
  int32_T i102;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &bm_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &cm_emlrtRSI;
  memcpy(&b_A[0], &A[0], 900U * sizeof(real_T));
  c_st.site = &em_emlrtRSI;
  xgetrf(&c_st, b_A, ipiv, &info);
  if (info > 0) {
    c_st.site = &dm_emlrtRSI;
    warn_singular(&c_st);
  }

  for (info = 0; info < 29; info++) {
    if (ipiv[info] != info + 1) {
      for (xj = 0; xj < 30; xj++) {
        temp_tmp = info + 30 * xj;
        temp = B[temp_tmp];
        i102 = (ipiv[info] + 30 * xj) - 1;
        B[temp_tmp] = B[i102];
        B[i102] = temp;
      }
    }
  }

  xtrsm(b_A, B);
  b_xtrsm(b_A, B);
}

/* End of code generation (mldivide.c) */
