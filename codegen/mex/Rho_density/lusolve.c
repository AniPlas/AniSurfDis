/*
 * lusolve.c
 *
 * Code generation for function 'lusolve'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Rho_density.h"
#include "lusolve.h"
#include "Rho_density_emxutil.h"
#include "warning.h"
#include "xgetrf.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo gb_emlrtRSI = { 42, /* lineNo */
  "lusolve",                           /* fcnName */
  "/Applications/MATLAB_R2018a.app/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 103,/* lineNo */
  "lusolve",                           /* fcnName */
  "/Applications/MATLAB_R2018a.app/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 101,/* lineNo */
  "lusolve",                           /* fcnName */
  "/Applications/MATLAB_R2018a.app/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 133,/* lineNo */
  "lusolve",                           /* fcnName */
  "/Applications/MATLAB_R2018a.app/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pathName */
};

static emlrtRSInfo kb_emlrtRSI = { 144,/* lineNo */
  "lusolve",                           /* fcnName */
  "/Applications/MATLAB_R2018a.app/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pathName */
};

static emlrtRSInfo lb_emlrtRSI = { 146,/* lineNo */
  "lusolve",                           /* fcnName */
  "/Applications/MATLAB_R2018a.app/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pathName */
};

static emlrtRSInfo ec_emlrtRSI = { 76, /* lineNo */
  "lusolve",                           /* fcnName */
  "/Applications/MATLAB_R2018a.app/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pathName */
};

static emlrtRTEInfo t_emlrtRTEI = { 1, /* lineNo */
  19,                                  /* colNo */
  "lusolve",                           /* fName */
  "/Applications/MATLAB_R2018a.app/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pName */
};

static emlrtRTEInfo y_emlrtRTEI = { 101,/* lineNo */
  2,                                   /* colNo */
  "lusolve",                           /* fName */
  "/Applications/MATLAB_R2018a.app/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pName */
};

/* Function Definitions */
void lusolve(const emlrtStack *sp, const emxArray_real_T *A, emxArray_real_T *B)
{
  emxArray_real_T *b_A;
  int32_T info;
  int32_T ip;
  emxArray_int32_T *ipiv;
  int32_T xj;
  real_T temp;
  char_T DIAGA;
  char_T TRANSA;
  char_T UPLO;
  char_T SIDE;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
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
  emxInit_real_T(sp, &b_A, 2, &y_emlrtRTEI, true);
  st.site = &gb_emlrtRSI;
  info = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity_real_T(&st, b_A, info, &y_emlrtRTEI);
  ip = A->size[0] * A->size[1];
  for (info = 0; info < ip; info++) {
    b_A->data[info] = A->data[info];
  }

  emxInit_int32_T1(&st, &ipiv, 2, &t_emlrtRTEI, true);
  b_st.site = &ib_emlrtRSI;
  xgetrf(&b_st, A->size[1], A->size[1], b_A, A->size[1], ipiv, &info);
  if (info > 0) {
    b_st.site = &hb_emlrtRSI;
    c_st.site = &ec_emlrtRSI;
    warning(&c_st);
  }

  b_st.site = &jb_emlrtRSI;
  for (info = 0; info < A->size[1] - 1; info++) {
    if (ipiv->data[info] != info + 1) {
      ip = ipiv->data[info] - 1;
      for (xj = 0; xj < 3; xj++) {
        temp = B->data[info + B->size[0] * xj];
        B->data[info + B->size[0] * xj] = B->data[ip + B->size[0] * xj];
        B->data[ip + B->size[0] * xj] = temp;
      }
    }
  }

  emxFree_int32_T(&st, &ipiv);
  b_st.site = &kb_emlrtRSI;
  if (!(A->size[1] < 1)) {
    temp = 1.0;
    DIAGA = 'U';
    TRANSA = 'N';
    UPLO = 'L';
    SIDE = 'L';
    m_t = (ptrdiff_t)A->size[1];
    n_t = (ptrdiff_t)3;
    lda_t = (ptrdiff_t)A->size[1];
    ldb_t = (ptrdiff_t)A->size[1];
    dtrsm(&SIDE, &UPLO, &TRANSA, &DIAGA, &m_t, &n_t, &temp, &b_A->data[0],
          &lda_t, &B->data[0], &ldb_t);
  }

  b_st.site = &lb_emlrtRSI;
  if (!(A->size[1] < 1)) {
    temp = 1.0;
    DIAGA = 'N';
    TRANSA = 'N';
    UPLO = 'U';
    SIDE = 'L';
    m_t = (ptrdiff_t)A->size[1];
    n_t = (ptrdiff_t)3;
    lda_t = (ptrdiff_t)A->size[1];
    ldb_t = (ptrdiff_t)A->size[1];
    dtrsm(&SIDE, &UPLO, &TRANSA, &DIAGA, &m_t, &n_t, &temp, &b_A->data[0],
          &lda_t, &B->data[0], &ldb_t);
  }

  emxFree_real_T(&b_st, &b_A);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (lusolve.c) */
