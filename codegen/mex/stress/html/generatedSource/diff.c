/*
 * diff.c
 *
 * Code generation for function 'diff'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "stress.h"
#include "diff.h"
#include "stress_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "stress_data.h"

/* Variable Definitions */
static emlrtRSInfo jb_emlrtRSI = { 108,/* lineNo */
  "diff",                              /* fcnName */
  "/Applications/MATLAB_R2018a.app/toolbox/eml/lib/matlab/datafun/diff.m"/* pathName */
};

static emlrtRSInfo kb_emlrtRSI = { 106,/* lineNo */
  "diff",                              /* fcnName */
  "/Applications/MATLAB_R2018a.app/toolbox/eml/lib/matlab/datafun/diff.m"/* pathName */
};

static emlrtRSInfo fc_emlrtRSI = { 87, /* lineNo */
  "diff",                              /* fcnName */
  "/Applications/MATLAB_R2018a.app/toolbox/eml/lib/matlab/datafun/diff.m"/* pathName */
};

static emlrtRTEInfo sc_emlrtRTEI = { 37,/* lineNo */
  9,                                   /* colNo */
  "diff",                              /* fName */
  "/Applications/MATLAB_R2018a.app/toolbox/eml/lib/matlab/datafun/diff.m"/* pName */
};

static emlrtRTEInfo tc_emlrtRTEI = { 47,/* lineNo */
  13,                                  /* colNo */
  "diff",                              /* fName */
  "/Applications/MATLAB_R2018a.app/toolbox/eml/lib/matlab/datafun/diff.m"/* pName */
};

static emlrtRTEInfo uc_emlrtRTEI = { 1,/* lineNo */
  14,                                  /* colNo */
  "diff",                              /* fName */
  "/Applications/MATLAB_R2018a.app/toolbox/eml/lib/matlab/datafun/diff.m"/* pName */
};

static emlrtRTEInfo ah_emlrtRTEI = { 51,/* lineNo */
  19,                                  /* colNo */
  "diff",                              /* fName */
  "/Applications/MATLAB_R2018a.app/toolbox/eml/lib/matlab/datafun/diff.m"/* pName */
};

/* Function Definitions */
void b_diff(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  int32_T ixStart;
  int32_T iyStart;
  boolean_T overflow;
  int32_T r;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  ixStart = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = x->size[1];
  emxEnsureCapacity_real_T(sp, y, ixStart, &uc_emlrtRTEI);
  if (!(y->size[1] == 0)) {
    ixStart = 1;
    iyStart = 0;
    st.site = &fc_emlrtRSI;
    overflow = ((!(1 > x->size[1])) && (x->size[1] > 2147483646));
    if (overflow) {
      b_st.site = &lb_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (r = 1; r <= x->size[1]; r++) {
      y->data[iyStart] = x->data[ixStart] - x->data[ixStart - 1];
      ixStart += 2;
      iyStart++;
    }
  }
}

void diff(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  int32_T i4;
  int32_T iyLead;
  boolean_T overflow;
  int32_T ySize_idx_1;
  real_T work_data_idx_0;
  int32_T m;
  real_T tmp1;
  real_T tmp2;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (x->size[1] == 0) {
    iyLead = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 0;
    emxEnsureCapacity_real_T(sp, y, iyLead, &sc_emlrtRTEI);
  } else {
    i4 = x->size[1] - 1;
    if (muIntScalarMin_sint32(i4, 1) < 1) {
      iyLead = y->size[0] * y->size[1];
      y->size[0] = 1;
      y->size[1] = 0;
      emxEnsureCapacity_real_T(sp, y, iyLead, &tc_emlrtRTEI);
    } else {
      overflow = (x->size[1] != 1);
      if (!overflow) {
        emlrtErrorWithMessageIdR2018a(sp, &ah_emlrtRTEI,
          "Coder:toolbox:autoDimIncompatibility",
          "Coder:toolbox:autoDimIncompatibility", 0);
      }

      ySize_idx_1 = x->size[1] - 1;
      iyLead = y->size[0] * y->size[1];
      y->size[0] = 1;
      y->size[1] = ySize_idx_1;
      emxEnsureCapacity_real_T(sp, y, iyLead, &uc_emlrtRTEI);
      if (!(y->size[1] == 0)) {
        ySize_idx_1 = 1;
        iyLead = 0;
        work_data_idx_0 = x->data[0];
        st.site = &kb_emlrtRSI;
        overflow = ((!(2 > x->size[1])) && (x->size[1] > 2147483646));
        if (overflow) {
          b_st.site = &lb_emlrtRSI;
          check_forloop_overflow_error(&b_st);
        }

        for (m = 2; m <= x->size[1]; m++) {
          tmp1 = x->data[ySize_idx_1];
          st.site = &jb_emlrtRSI;
          tmp2 = work_data_idx_0;
          work_data_idx_0 = tmp1;
          tmp1 -= tmp2;
          ySize_idx_1++;
          y->data[iyLead] = tmp1;
          iyLead++;
        }
      }
    }
  }
}

/* End of code generation (diff.c) */
