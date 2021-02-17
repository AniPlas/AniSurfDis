/*
 * _coder_Rho_density_mex.c
 *
 * Code generation for function '_coder_Rho_density_mex'
 *
 */

/* Include files */
#include "Rho_density.h"
#include "_coder_Rho_density_mex.h"
#include "Rho_density_terminate.h"
#include "_coder_Rho_density_api.h"
#include "Rho_density_initialize.h"
#include "Rho_density_data.h"

/* Function Declarations */
static void Rho_density_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
  const mxArray *prhs[45]);

/* Function Definitions */
static void Rho_density_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
  const mxArray *prhs[45])
{
  const mxArray *outputs[1];
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 45) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 45, 4,
                        11, "Rho_density");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 11,
                        "Rho_density");
  }

  /* Call the function. */
  Rho_density_api(prhs, nlhs, outputs);

  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, plhs, outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(Rho_density_atexit);

  /* Module initialization. */
  Rho_density_initialize();

  /* Dispatch the entry-point. */
  Rho_density_mexFunction(nlhs, plhs, nrhs, prhs);

  /* Module termination. */
  Rho_density_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_Rho_density_mex.c) */
