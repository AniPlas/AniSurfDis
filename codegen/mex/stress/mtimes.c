/*
 * mtimes.c
 *
 * Code generation for function 'mtimes'
 *
 */

/* Include files */
#include "mtimes.h"
#include "blas.h"
#include "rt_nonfinite.h"
#include "stress.h"
#include "stress_emxutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo sm_emlrtRSI = { 168,/* lineNo */
  "mtimes",                            /* fcnName */
  "C:\\Polyspace\\R2020a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\mtimes.m"/* pathName */
};

static emlrtRTEInfo je_emlrtRTEI = { 168,/* lineNo */
  13,                                  /* colNo */
  "mtimes",                            /* fName */
  "C:\\Polyspace\\R2020a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\mtimes.m"/* pName */
};

static emlrtRTEInfo ke_emlrtRTEI = { 140,/* lineNo */
  5,                                   /* colNo */
  "mtimes",                            /* fName */
  "C:\\Polyspace\\R2020a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\mtimes.m"/* pName */
};

/* Function Definitions */
void b_mtimes(const emlrtStack *sp, const emxArray_real_T *A, const
              emxArray_real_T *B, emxArray_real_T *C)
{
  int32_T i;
  char_T TRANSB1;
  int32_T loop_ub;
  char_T TRANSA1;
  real_T alpha1;
  real_T beta1;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if ((A->size[1] == 0) || (B->size[0] == 0) || (B->size[1] == 0)) {
    i = C->size[0] * C->size[1];
    C->size[0] = 30;
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(sp, C, i, &ke_emlrtRTEI);
    loop_ub = 30 * B->size[1];
    for (i = 0; i < loop_ub; i++) {
      C->data[i] = 0.0;
    }
  } else {
    st.site = &sm_emlrtRSI;
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)30;
    n_t = (ptrdiff_t)B->size[1];
    k_t = (ptrdiff_t)A->size[1];
    lda_t = (ptrdiff_t)30;
    ldb_t = (ptrdiff_t)B->size[0];
    ldc_t = (ptrdiff_t)30;
    i = C->size[0] * C->size[1];
    C->size[0] = 30;
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(&st, C, i, &je_emlrtRTEI);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A->data[0], &lda_t,
          &B->data[0], &ldb_t, &beta1, &C->data[0], &ldc_t);
  }
}

void c_mtimes(const emxArray_real_T *A, const emxArray_real_T *B, real_T C[30])
{
  char_T TRANSB1;
  char_T TRANSA1;
  real_T alpha1;
  real_T beta1;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  if ((A->size[1] == 0) || (B->size[0] == 0)) {
    memset(&C[0], 0, 30U * sizeof(real_T));
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)30;
    n_t = (ptrdiff_t)1;
    k_t = (ptrdiff_t)A->size[1];
    lda_t = (ptrdiff_t)30;
    ldb_t = (ptrdiff_t)B->size[0];
    ldc_t = (ptrdiff_t)30;
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A->data[0], &lda_t,
          &B->data[0], &ldb_t, &beta1, &C[0], &ldc_t);
  }
}

void d_mtimes(const real_T A[900], const real_T B[90], real_T C[90])
{
  char_T TRANSB1;
  char_T TRANSA1;
  real_T alpha1;
  real_T beta1;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  TRANSB1 = 'N';
  TRANSA1 = 'N';
  alpha1 = 1.0;
  beta1 = 0.0;
  m_t = (ptrdiff_t)30;
  n_t = (ptrdiff_t)3;
  k_t = (ptrdiff_t)30;
  lda_t = (ptrdiff_t)30;
  ldb_t = (ptrdiff_t)30;
  ldc_t = (ptrdiff_t)30;
  dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A[0], &lda_t, &B[0],
        &ldb_t, &beta1, &C[0], &ldc_t);
}

void e_mtimes(const real_T A[900], const real_T B[30], real_T C[30])
{
  char_T TRANSB1;
  char_T TRANSA1;
  real_T alpha1;
  real_T beta1;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  TRANSB1 = 'N';
  TRANSA1 = 'N';
  alpha1 = 1.0;
  beta1 = 0.0;
  m_t = (ptrdiff_t)30;
  n_t = (ptrdiff_t)1;
  k_t = (ptrdiff_t)30;
  lda_t = (ptrdiff_t)30;
  ldb_t = (ptrdiff_t)30;
  ldc_t = (ptrdiff_t)30;
  dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A[0], &lda_t, &B[0],
        &ldb_t, &beta1, &C[0], &ldc_t);
}

void f_mtimes(const real_T B_data[], const int32_T B_size[2], real_T C_data[],
              int32_T C_size[2])
{
  char_T TRANSB1;
  char_T TRANSA1;
  real_T alpha1;
  real_T beta1;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  static const real_T A[15] = { 0.022935322010529221, 0.063092092629978544,
    0.1047900103222502, 0.14065325971552589, 0.16900472663926791,
    0.19035057806478539, 0.20443294007529891, 0.20948214108472779,
    0.20443294007529891, 0.19035057806478539, 0.16900472663926791,
    0.14065325971552589, 0.1047900103222502, 0.063092092629978544,
    0.022935322010529221 };

  if (B_size[1] == 0) {
    C_size[0] = 1;
    C_size[1] = 0;
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)1;
    n_t = (ptrdiff_t)B_size[1];
    k_t = (ptrdiff_t)15;
    lda_t = (ptrdiff_t)1;
    ldb_t = (ptrdiff_t)15;
    ldc_t = (ptrdiff_t)1;
    C_size[0] = 1;
    C_size[1] = B_size[1];
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A[0], &lda_t, &B_data
          [0], &ldb_t, &beta1, &C_data[0], &ldc_t);
  }
}

void g_mtimes(const real_T B_data[], const int32_T B_size[2], real_T C_data[],
              int32_T C_size[2])
{
  char_T TRANSB1;
  char_T TRANSA1;
  real_T alpha1;
  real_T beta1;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  static const real_T A[15] = { 0.022935322010529221, -0.066392873538891159,
    0.1047900103222502, -0.13905213177375081, 0.16900472663926791,
    -0.19147947244033353, 0.20443294007529891, -0.20847704258874161,
    0.20443294007529891, -0.19147947244033353, 0.16900472663926791,
    -0.13905213177375081, 0.1047900103222502, -0.066392873538891159,
    0.022935322010529221 };

  if (B_size[1] == 0) {
    C_size[0] = 1;
    C_size[1] = 0;
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)1;
    n_t = (ptrdiff_t)B_size[1];
    k_t = (ptrdiff_t)15;
    lda_t = (ptrdiff_t)1;
    ldb_t = (ptrdiff_t)15;
    ldc_t = (ptrdiff_t)1;
    C_size[0] = 1;
    C_size[1] = B_size[1];
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A[0], &lda_t, &B_data
          [0], &ldb_t, &beta1, &C_data[0], &ldc_t);
  }
}

void mtimes(const emlrtStack *sp, const real_T A[900], const emxArray_real_T *B,
            emxArray_real_T *C)
{
  char_T TRANSB1;
  char_T TRANSA1;
  real_T alpha1;
  real_T beta1;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  int32_T i;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if (B->size[1] == 0) {
    C->size[0] = 30;
    C->size[1] = 0;
  } else {
    st.site = &sm_emlrtRSI;
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)30;
    n_t = (ptrdiff_t)B->size[1];
    k_t = (ptrdiff_t)30;
    lda_t = (ptrdiff_t)30;
    ldb_t = (ptrdiff_t)30;
    ldc_t = (ptrdiff_t)30;
    i = C->size[0] * C->size[1];
    C->size[0] = 30;
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(&st, C, i, &je_emlrtRTEI);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A[0], &lda_t, &B->
          data[0], &ldb_t, &beta1, &C->data[0], &ldc_t);
  }
}

/* End of code generation (mtimes.c) */
