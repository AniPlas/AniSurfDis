/*
 * rho_distri_initialize.c
 *
 * Code generation for function 'rho_distri_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "rho_distri.h"
#include "rho_distri_initialize.h"
#include "_coder_rho_distri_mex.h"
#include "rho_distri_data.h"

/* Function Definitions */
void rho_distri_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (rho_distri_initialize.c) */
