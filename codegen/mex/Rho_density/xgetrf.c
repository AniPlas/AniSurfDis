/*
 * xgetrf.c
 *
 * Code generation for function 'xgetrf'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "Rho_density.h"
#include "xgetrf.h"
#include "Rho_density_emxutil.h"
#include "error.h"
#include "Rho_density_data.h"
#include "lapacke.h"

/* Variable Definitions */
static emlrtRSInfo ob_emlrtRSI = { 27, /* lineNo */
  "xgetrf",                            /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/xgetrf.m"/* pathName */
};

static emlrtRSInfo pb_emlrtRSI = { 90, /* lineNo */
  "xgetrf",                            /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/xgetrf.m"/* pathName */
};

static emlrtRSInfo qb_emlrtRSI = { 82, /* lineNo */
  "xgetrf",                            /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/xgetrf.m"/* pathName */
};

static emlrtRSInfo rb_emlrtRSI = { 78, /* lineNo */
  "xgetrf",                            /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/xgetrf.m"/* pathName */
};

static emlrtRSInfo sb_emlrtRSI = { 58, /* lineNo */
  "xgetrf",                            /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/xgetrf.m"/* pathName */
};

static emlrtRSInfo tb_emlrtRSI = { 57, /* lineNo */
  "xgetrf",                            /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/xgetrf.m"/* pathName */
};

static emlrtRSInfo ub_emlrtRSI = { 50, /* lineNo */
  "xgetrf",                            /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/xgetrf.m"/* pathName */
};

static emlrtRTEInfo cb_emlrtRTEI = { 27,/* lineNo */
  5,                                   /* colNo */
  "xgetrf",                            /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/xgetrf.m"/* pName */
};

static emlrtRTEInfo db_emlrtRTEI = { 57,/* lineNo */
  5,                                   /* colNo */
  "xgetrf",                            /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/xgetrf.m"/* pName */
};

/* Function Definitions */
void xgetrf(const emlrtStack *sp, int32_T m, int32_T n, emxArray_real_T *A,
            int32_T lda, emxArray_int32_T *ipiv, int32_T *info)
{
  emxArray_ptrdiff_t *ipiv_t;
  int32_T i10;
  int32_T i11;
  ptrdiff_t info_t;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &ob_emlrtRSI;
  b_st.site = &ub_emlrtRSI;
  if ((A->size[0] == 0) || (A->size[1] == 0)) {
    ipiv->size[0] = 1;
    ipiv->size[1] = 0;
    *info = 0;
  } else {
    b_st.site = &tb_emlrtRSI;
    b_st.site = &tb_emlrtRSI;
    emxInit_ptrdiff_t(&b_st, &ipiv_t, 1, &db_emlrtRTEI, true);
    i10 = ipiv_t->size[0];
    i11 = muIntScalarMin_sint32(m, n);
    ipiv_t->size[0] = muIntScalarMax_sint32(i11, 1);
    emxEnsureCapacity_ptrdiff_t(&st, ipiv_t, i10, &cb_emlrtRTEI);
    b_st.site = &sb_emlrtRSI;
    b_st.site = &rb_emlrtRSI;
    b_st.site = &qb_emlrtRSI;
    info_t = LAPACKE_dgetrf_work(102, (ptrdiff_t)m, (ptrdiff_t)n, &A->data[0],
      (ptrdiff_t)lda, &ipiv_t->data[0]);
    *info = (int32_T)info_t;
    i10 = ipiv->size[0] * ipiv->size[1];
    ipiv->size[0] = 1;
    ipiv->size[1] = ipiv_t->size[0];
    emxEnsureCapacity_int32_T(&st, ipiv, i10, &cb_emlrtRTEI);
    b_st.site = &pb_emlrtRSI;
    if (*info < 0) {
      if (*info == -1010) {
        c_st.site = &yb_emlrtRSI;
        error(&c_st);
      } else {
        c_st.site = &ac_emlrtRSI;
        b_error(&c_st, *info);
      }
    }

    i10 = ipiv->size[1] - 1;
    for (k = 0; k <= i10; k++) {
      ipiv->data[k] = (int32_T)ipiv_t->data[k];
    }

    emxFree_ptrdiff_t(&ipiv_t);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (xgetrf.c) */
