/*
 * mtimes.c
 *
 * Code generation for function 'mtimes'
 *
 */

/* Include files */
#include "mtimes.h"
#include "blas.h"
#include "coef_rho.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void mtimes(const real_T A[900], const real_T B[900], real_T C[900])
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
  n_t = (ptrdiff_t)30;
  k_t = (ptrdiff_t)30;
  lda_t = (ptrdiff_t)30;
  ldb_t = (ptrdiff_t)30;
  ldc_t = (ptrdiff_t)30;
  dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A[0], &lda_t, &B[0],
        &ldb_t, &beta1, &C[0], &ldc_t);
}

/* End of code generation (mtimes.c) */
