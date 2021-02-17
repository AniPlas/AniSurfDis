/*
 * Rho_density_terminate.c
 *
 * Code generation for function 'Rho_density_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Rho_density.h"
#include "Rho_density_terminate.h"
#include "_coder_Rho_density_mex.h"
#include "Rho_density_data.h"

/* Function Definitions */
void Rho_density_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void Rho_density_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (Rho_density_terminate.c) */
