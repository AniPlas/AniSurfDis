/*
 * colon.c
 *
 * Code generation for function 'colon'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Rho_density.h"
#include "colon.h"
#include "Rho_density_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "Rho_density_data.h"

/* Variable Definitions */
static emlrtRSInfo ec_emlrtRSI = { 149,/* lineNo */
  "colon",                             /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/ops/colon.m"/* pathName */
};

static emlrtRTEInfo t_emlrtRTEI = { 139,/* lineNo */
  14,                                  /* colNo */
  "colon",                             /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/ops/colon.m"/* pName */
};

/* Function Definitions */
void eml_signed_integer_colon(const emlrtStack *sp, int32_T b, emxArray_int32_T *
  y)
{
  int32_T n;
  int32_T yk;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (b < 1) {
    n = 0;
  } else {
    n = b;
  }

  yk = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = n;
  emxEnsureCapacity_int32_T(sp, y, yk, &t_emlrtRTEI);
  if (n > 0) {
    y->data[0] = 1;
    yk = 1;
    st.site = &ec_emlrtRSI;
    if ((2 <= n) && (n > 2147483646)) {
      b_st.site = &eb_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (k = 2; k <= n; k++) {
      yk++;
      y->data[k - 1] = yk;
    }
  }
}

/* End of code generation (colon.c) */
