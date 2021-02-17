/*
 * lusolve.c
 *
 * Code generation for function 'lusolve'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "rho_distri.h"
#include "lusolve.h"
#include "warning.h"
#include "rho_distri_data.h"

/* Function Definitions */
void warn_singular(const emlrtStack *sp)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &gc_emlrtRSI;
  warning(&st);
}

/* End of code generation (lusolve.c) */
