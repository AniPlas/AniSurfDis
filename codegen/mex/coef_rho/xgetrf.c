/*
 * xgetrf.c
 *
 * Code generation for function 'xgetrf'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "coef_rho.h"
#include "xgetrf.h"
#include "error.h"
#include "lapacke.h"

/* Type Definitions */
#include <stdlib.h>

/* Variable Definitions */
static emlrtRSInfo ni_emlrtRSI = { 27, /* lineNo */
  "xgetrf",                            /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/xgetrf.m"/* pathName */
};

static emlrtRSInfo oi_emlrtRSI = { 90, /* lineNo */
  "xgetrf",                            /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/xgetrf.m"/* pathName */
};

static emlrtRSInfo pi_emlrtRSI = { 82, /* lineNo */
  "xgetrf",                            /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/xgetrf.m"/* pathName */
};

static emlrtRSInfo qi_emlrtRSI = { 78, /* lineNo */
  "xgetrf",                            /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/xgetrf.m"/* pathName */
};

static emlrtRSInfo ri_emlrtRSI = { 58, /* lineNo */
  "xgetrf",                            /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/xgetrf.m"/* pathName */
};

static emlrtRSInfo si_emlrtRSI = { 57, /* lineNo */
  "xgetrf",                            /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/xgetrf.m"/* pathName */
};

static emlrtRSInfo ti_emlrtRSI = { 50, /* lineNo */
  "xgetrf",                            /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/xgetrf.m"/* pathName */
};

static emlrtRSInfo wi_emlrtRSI = { 45, /* lineNo */
  "infocheck",                         /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/infocheck.m"/* pathName */
};

static emlrtRSInfo xi_emlrtRSI = { 48, /* lineNo */
  "infocheck",                         /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/infocheck.m"/* pathName */
};

/* Function Definitions */
void xgetrf(const emlrtStack *sp, real_T A[900], int32_T ipiv[30], int32_T *info)
{
  ptrdiff_t info_t;
  ptrdiff_t ipiv_t[30];
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ni_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &ti_emlrtRSI;
  b_st.site = &si_emlrtRSI;
  b_st.site = &ri_emlrtRSI;
  b_st.site = &qi_emlrtRSI;
  b_st.site = &pi_emlrtRSI;
  info_t = LAPACKE_dgetrf_work(102, (ptrdiff_t)30, (ptrdiff_t)30, &A[0],
    (ptrdiff_t)30, &ipiv_t[0]);
  *info = (int32_T)info_t;
  b_st.site = &oi_emlrtRSI;
  if (*info < 0) {
    if (*info == -1010) {
      c_st.site = &wi_emlrtRSI;
      error(&c_st);
    } else {
      c_st.site = &xi_emlrtRSI;
      b_error(&c_st, *info);
    }
  }

  for (k = 0; k < 30; k++) {
    ipiv[k] = (int32_T)ipiv_t[k];
  }
}

/* End of code generation (xgetrf.c) */
