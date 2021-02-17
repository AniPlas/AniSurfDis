/*
 * Rho_density_initialize.c
 *
 * Code generation for function 'Rho_density_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Rho_density.h"
#include "Rho_density_initialize.h"
#include "_coder_Rho_density_mex.h"
#include "Rho_density_data.h"

/* Function Definitions */
void Rho_density_initialize(void)
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

/* End of code generation (Rho_density_initialize.c) */
