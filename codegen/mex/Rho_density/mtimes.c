/*
 * mtimes.c
 *
 * Code generation for function 'mtimes'
 *
 */

/* Include files */
#include "mtimes.h"
#include "Rho_density.h"
#include "Rho_density_data.h"
#include "Rho_density_emxutil.h"
#include "blas.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo t_emlrtRTEI = { 140,/* lineNo */
  5,                                   /* colNo */
  "mtimes",                            /* fName */
  "C:\\Polyspace\\R2020a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\mtimes.m"/* pName */
};

/* Function Definitions */
void mtimes(const emlrtStack *sp, const emxArray_real_T *A, const
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
  if ((A->size[0] == 0) || (A->size[1] == 0) || (B->size[0] == 0) || (B->size[1]
       == 0)) {
    i = C->size[0] * C->size[1];
    C->size[0] = A->size[0];
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(sp, C, i, &t_emlrtRTEI);
    loop_ub = A->size[0] * B->size[1];
    for (i = 0; i < loop_ub; i++) {
      C->data[i] = 0.0;
    }
  } else {
    st.site = &cb_emlrtRSI;
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)A->size[0];
    n_t = (ptrdiff_t)B->size[1];
    k_t = (ptrdiff_t)A->size[1];
    lda_t = (ptrdiff_t)A->size[0];
    ldb_t = (ptrdiff_t)B->size[0];
    ldc_t = (ptrdiff_t)A->size[0];
    i = C->size[0] * C->size[1];
    C->size[0] = A->size[0];
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(&st, C, i, &r_emlrtRTEI);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A->data[0], &lda_t,
          &B->data[0], &ldb_t, &beta1, &C->data[0], &ldc_t);
  }
}

/* End of code generation (mtimes.c) */
