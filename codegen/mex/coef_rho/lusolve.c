/*
 * lusolve.c
 *
 * Code generation for function 'lusolve'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "coef_rho.h"
#include "lusolve.h"
#include "warning.h"

/* Variable Definitions */
static emlrtRSInfo aj_emlrtRSI = { 90, /* lineNo */
  "lusolve",                           /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pathName */
};

/* Function Definitions */
void warn_singular(const emlrtStack *sp)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &aj_emlrtRSI;
  warning(&st);
}

/* End of code generation (lusolve.c) */
