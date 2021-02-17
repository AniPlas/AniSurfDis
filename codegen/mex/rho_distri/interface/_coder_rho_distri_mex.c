/*
 * _coder_rho_distri_mex.c
 *
 * Code generation for function '_coder_rho_distri_mex'
 *
 */

/* Include files */
#include "rho_distri.h"
#include "_coder_rho_distri_mex.h"
#include "rho_distri_terminate.h"
#include "_coder_rho_distri_api.h"
#include "rho_distri_initialize.h"
#include "rho_distri_data.h"

/* Function Declarations */
static void rho_distri_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
  const mxArray *prhs[49]);

/* Function Definitions */
static void rho_distri_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
  const mxArray *prhs[49])
{
  const mxArray *outputs[1];
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 49) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 49, 4,
                        10, "rho_distri");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 10,
                        "rho_distri");
  }

  /* Call the function. */
  rho_distri_api(prhs, nlhs, outputs);

  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, plhs, outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(rho_distri_atexit);

  /* Module initialization. */
  rho_distri_initialize();

  /* Dispatch the entry-point. */
  rho_distri_mexFunction(nlhs, plhs, nrhs, prhs);

  /* Module termination. */
  rho_distri_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_rho_distri_mex.c) */
