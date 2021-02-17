/*
 * rho_distri_terminate.c
 *
 * Code generation for function 'rho_distri_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "rho_distri.h"
#include "rho_distri_terminate.h"
#include "_coder_rho_distri_mex.h"
#include "rho_distri_data.h"

/* Function Definitions */
void rho_distri_atexit(void)
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

void rho_distri_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (rho_distri_terminate.c) */
