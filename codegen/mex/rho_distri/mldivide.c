/*
 * mldivide.c
 *
 * Code generation for function 'mldivide'
 *
 */

/* Include files */
#include <string.h>
#include "rt_nonfinite.h"
#include "rho_distri.h"
#include "mldivide.h"
#include "xtrsm.h"
#include "lusolve.h"
#include "xgetrf.h"
#include "rho_distri_emxutil.h"
#include "warning.h"
#include "qrsolve.h"
#include "rho_distri_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo gb_emlrtRSI = { 34, /* lineNo */
  "mldivide",                          /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/ops/mldivide.m"/* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 36, /* lineNo */
  "mldivide",                          /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/ops/mldivide.m"/* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 67, /* lineNo */
  "lusolve",                           /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 109,/* lineNo */
  "lusolve",                           /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pathName */
};

static emlrtRSInfo kb_emlrtRSI = { 107,/* lineNo */
  "lusolve",                           /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pathName */
};

static emlrtRSInfo lb_emlrtRSI = { 139,/* lineNo */
  "lusolve",                           /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pathName */
};

static emlrtRSInfo mb_emlrtRSI = { 150,/* lineNo */
  "lusolve",                           /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 152,/* lineNo */
  "lusolve",                           /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pathName */
};

static emlrtRTEInfo p_emlrtRTEI = { 23,/* lineNo */
  5,                                   /* colNo */
  "mldivide",                          /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/ops/mldivide.m"/* pName */
};

static emlrtRTEInfo q_emlrtRTEI = { 107,/* lineNo */
  2,                                   /* colNo */
  "lusolve",                           /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pName */
};

static emlrtRTEInfo r_emlrtRTEI = { 34,/* lineNo */
  5,                                   /* colNo */
  "mldivide",                          /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/ops/mldivide.m"/* pName */
};

static emlrtRTEInfo s_emlrtRTEI = { 1, /* lineNo */
  14,                                  /* colNo */
  "mldivide",                          /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/ops/mldivide.m"/* pName */
};

static emlrtRTEInfo ac_emlrtRTEI = { 18,/* lineNo */
  15,                                  /* colNo */
  "mldivide",                          /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/ops/mldivide.m"/* pName */
};

/* Function Definitions */
void b_mldivide(const emlrtStack *sp, const real_T A[900], real_T B[900])
{
  real_T b_A[900];
  int32_T ipiv[30];
  int32_T info;
  int32_T xj;
  int32_T temp_tmp;
  real_T temp;
  int32_T i24;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &gb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &ib_emlrtRSI;
  memcpy(&b_A[0], &A[0], 900U * sizeof(real_T));
  c_st.site = &kb_emlrtRSI;
  b_xgetrf(&c_st, b_A, ipiv, &info);
  if (info > 0) {
    c_st.site = &jb_emlrtRSI;
    warn_singular(&c_st);
  }

  for (info = 0; info < 29; info++) {
    if (ipiv[info] != info + 1) {
      for (xj = 0; xj < 30; xj++) {
        temp_tmp = info + 30 * xj;
        temp = B[temp_tmp];
        i24 = (ipiv[info] + 30 * xj) - 1;
        B[temp_tmp] = B[i24];
        B[i24] = temp;
      }
    }
  }

  xtrsm(b_A, B);
  b_xtrsm(b_A, B);
}

void mldivide(const emlrtStack *sp, const emxArray_real_T *A, const
              emxArray_real_T *B, emxArray_real_T *Y)
{
  emxArray_real_T *b_A;
  emxArray_int32_T *ipiv;
  uint32_T unnamed_idx_0;
  int32_T info;
  int32_T loop_ub;
  int32_T ip;
  real_T temp;
  char_T DIAGA1;
  char_T TRANSA1;
  char_T UPLO1;
  char_T SIDE1;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (B->size[0] != A->size[0]) {
    emlrtErrorWithMessageIdR2018a(sp, &ac_emlrtRTEI, "Coder:MATLAB:dimagree",
      "Coder:MATLAB:dimagree", 0);
  }

  emxInit_real_T(sp, &b_A, 2, &q_emlrtRTEI, true);
  emxInit_int32_T(sp, &ipiv, 2, &s_emlrtRTEI, true);
  if ((A->size[0] == 0) || (A->size[1] == 0) || (B->size[0] == 0)) {
    unnamed_idx_0 = (uint32_T)A->size[1];
    info = Y->size[0] * Y->size[1];
    Y->size[0] = (int32_T)unnamed_idx_0;
    Y->size[1] = 3;
    emxEnsureCapacity_real_T(sp, Y, info, &p_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * 3;
    for (info = 0; info < loop_ub; info++) {
      Y->data[info] = 0.0;
    }
  } else if (A->size[0] == A->size[1]) {
    st.site = &gb_emlrtRSI;
    b_st.site = &ib_emlrtRSI;
    info = b_A->size[0] * b_A->size[1];
    b_A->size[0] = A->size[0];
    b_A->size[1] = A->size[1];
    emxEnsureCapacity_real_T(&b_st, b_A, info, &q_emlrtRTEI);
    loop_ub = A->size[0] * A->size[1];
    for (info = 0; info < loop_ub; info++) {
      b_A->data[info] = A->data[info];
    }

    c_st.site = &kb_emlrtRSI;
    xgetrf(&c_st, A->size[1], A->size[1], b_A, A->size[1], ipiv, &info);
    if (info > 0) {
      c_st.site = &jb_emlrtRSI;
      d_st.site = &gc_emlrtRSI;
      warning(&d_st);
    }

    info = Y->size[0] * Y->size[1];
    Y->size[0] = B->size[0];
    Y->size[1] = 3;
    emxEnsureCapacity_real_T(&b_st, Y, info, &r_emlrtRTEI);
    loop_ub = B->size[0] * B->size[1];
    for (info = 0; info < loop_ub; info++) {
      Y->data[info] = B->data[info];
    }

    info = A->size[1];
    c_st.site = &lb_emlrtRSI;
    for (loop_ub = 0; loop_ub <= info - 2; loop_ub++) {
      if (ipiv->data[loop_ub] != loop_ub + 1) {
        ip = ipiv->data[loop_ub] - 1;
        temp = Y->data[loop_ub];
        Y->data[loop_ub] = Y->data[ip];
        Y->data[ip] = temp;
        temp = Y->data[loop_ub + Y->size[0]];
        Y->data[loop_ub + Y->size[0]] = Y->data[ip + Y->size[0]];
        Y->data[ip + Y->size[0]] = temp;
        temp = Y->data[loop_ub + (Y->size[0] << 1)];
        Y->data[loop_ub + (Y->size[0] << 1)] = Y->data[ip + (Y->size[0] << 1)];
        Y->data[ip + (Y->size[0] << 1)] = temp;
      }
    }

    c_st.site = &mb_emlrtRSI;
    temp = 1.0;
    DIAGA1 = 'U';
    TRANSA1 = 'N';
    UPLO1 = 'L';
    SIDE1 = 'L';
    m_t = (ptrdiff_t)A->size[1];
    n_t = (ptrdiff_t)3;
    lda_t = (ptrdiff_t)A->size[1];
    ldb_t = (ptrdiff_t)A->size[1];
    dtrsm(&SIDE1, &UPLO1, &TRANSA1, &DIAGA1, &m_t, &n_t, &temp, &b_A->data[0],
          &lda_t, &Y->data[0], &ldb_t);
    c_st.site = &nb_emlrtRSI;
    temp = 1.0;
    DIAGA1 = 'N';
    TRANSA1 = 'N';
    UPLO1 = 'U';
    SIDE1 = 'L';
    m_t = (ptrdiff_t)A->size[1];
    n_t = (ptrdiff_t)3;
    lda_t = (ptrdiff_t)A->size[1];
    ldb_t = (ptrdiff_t)A->size[1];
    dtrsm(&SIDE1, &UPLO1, &TRANSA1, &DIAGA1, &m_t, &n_t, &temp, &b_A->data[0],
          &lda_t, &Y->data[0], &ldb_t);
  } else {
    st.site = &hb_emlrtRSI;
    qrsolve(&st, A, B, Y);
  }

  emxFree_int32_T(&ipiv);
  emxFree_real_T(&b_A);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (mldivide.c) */
