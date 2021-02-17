/*
 * xgetrfs.c
 *
 * Code generation for function 'xgetrfs'
 *
 */

/* Include files */
#include "xgetrfs.h"
#include "lapacke.h"
#include "rt_nonfinite.h"
#include "stress.h"

/* Variable Definitions */
static emlrtRSInfo jm_emlrtRSI = { 19, /* lineNo */
  "xgetrfs",                           /* fcnName */
  "C:\\Polyspace\\R2020a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrfs.m"/* pathName */
};

static emlrtRSInfo lm_emlrtRSI = { 106,/* lineNo */
  "cmldiv",                            /* fcnName */
  "C:\\Polyspace\\R2020a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrfs.m"/* pathName */
};

static emlrtRTEInfo cb_emlrtRTEI = { 45,/* lineNo */
  13,                                  /* colNo */
  "infocheck",                         /* fName */
  "C:\\Polyspace\\R2020a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\infocheck.m"/* pName */
};

static emlrtRTEInfo db_emlrtRTEI = { 48,/* lineNo */
  13,                                  /* colNo */
  "infocheck",                         /* fName */
  "C:\\Polyspace\\R2020a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\infocheck.m"/* pName */
};

/* Function Definitions */
int32_T xgetrfs(const emlrtStack *sp, real_T A[900], real_T B[900])
{
  int32_T info;
  ptrdiff_t N;
  ptrdiff_t LDA;
  ptrdiff_t INFO;
  ptrdiff_t IPIV[30];
  static const char_T fname[19] = { 'L', 'A', 'P', 'A', 'C', 'K', 'E', '_', 'd',
    'g', 'e', 't', 'r', 'f', '_', 'w', 'o', 'r', 'k' };

  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &jm_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  N = (ptrdiff_t)30;
  LDA = (ptrdiff_t)30;
  INFO = LAPACKE_dgetrf_work(102, N, N, &A[0], LDA, &IPIV[0]);
  info = (int32_T)INFO;
  b_st.site = &lm_emlrtRSI;
  if (info < 0) {
    if (info == -1010) {
      emlrtErrorWithMessageIdR2018a(&b_st, &cb_emlrtRTEI, "MATLAB:nomem",
        "MATLAB:nomem", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &db_emlrtRTEI,
        "Coder:toolbox:LAPACKCallErrorInfo", "Coder:toolbox:LAPACKCallErrorInfo",
        5, 4, 19, fname, 12, info);
    }
  }

  LAPACKE_dgetrs_work(102, 'N', N, (ptrdiff_t)30, &A[0], LDA, &IPIV[0], &B[0],
                      (ptrdiff_t)30);
  return info;
}

/* End of code generation (xgetrfs.c) */
