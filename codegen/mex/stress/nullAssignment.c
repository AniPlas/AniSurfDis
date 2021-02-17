/*
 * nullAssignment.c
 *
 * Code generation for function 'nullAssignment'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "stress.h"
#include "nullAssignment.h"
#include "stress_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "stress_data.h"

/* Variable Definitions */
static emlrtRSInfo on_emlrtRSI = { 28, /* lineNo */
  "nullAssignment",                    /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pathName */
};

static emlrtRSInfo pn_emlrtRSI = { 32, /* lineNo */
  "nullAssignment",                    /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pathName */
};

static emlrtRSInfo qn_emlrtRSI = { 355,/* lineNo */
  "nullAssignment",                    /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pathName */
};

static emlrtRSInfo rn_emlrtRSI = { 364,/* lineNo */
  "nullAssignment",                    /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pathName */
};

static emlrtRSInfo sn_emlrtRSI = { 366,/* lineNo */
  "nullAssignment",                    /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pathName */
};

static emlrtRSInfo tn_emlrtRSI = { 369,/* lineNo */
  "nullAssignment",                    /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pathName */
};

static emlrtRSInfo un_emlrtRSI = { 258,/* lineNo */
  "nullAssignment",                    /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pathName */
};

static emlrtRSInfo vn_emlrtRSI = { 166,/* lineNo */
  "nullAssignment",                    /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pathName */
};

static emlrtRTEInfo jf_emlrtRTEI = { 364,/* lineNo */
  9,                                   /* colNo */
  "nullAssignment",                    /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pName */
};

static emlrtRTEInfo kf_emlrtRTEI = { 379,/* lineNo */
  5,                                   /* colNo */
  "nullAssignment",                    /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pName */
};

static emlrtRTEInfo lf_emlrtRTEI = { 32,/* lineNo */
  13,                                  /* colNo */
  "nullAssignment",                    /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pName */
};

static emlrtRTEInfo mf_emlrtRTEI = { 362,/* lineNo */
  9,                                   /* colNo */
  "nullAssignment",                    /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pName */
};

static emlrtRTEInfo nf_emlrtRTEI = { 166,/* lineNo */
  9,                                   /* colNo */
  "nullAssignment",                    /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pName */
};

static emlrtRTEInfo of_emlrtRTEI = { 16,/* lineNo */
  9,                                   /* colNo */
  "nullAssignment",                    /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pName */
};

static emlrtRTEInfo pf_emlrtRTEI = { 164,/* lineNo */
  9,                                   /* colNo */
  "nullAssignment",                    /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pName */
};

static emlrtRTEInfo rg_emlrtRTEI = { 378,/* lineNo */
  1,                                   /* colNo */
  "nullAssignment",                    /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pName */
};

static emlrtRTEInfo sg_emlrtRTEI = { 80,/* lineNo */
  27,                                  /* colNo */
  "nullAssignment",                    /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pName */
};

/* Function Definitions */
void b_nullAssignment(const emlrtStack *sp, emxArray_real_T *x, const
                      emxArray_int32_T *idx)
{
  boolean_T overflow;
  int32_T k;
  boolean_T exitg1;
  int32_T ncolx;
  emxArray_boolean_T *b;
  int32_T ncols;
  int32_T loop_ub;
  int32_T i103;
  int32_T j;
  int32_T i104;
  emxArray_real_T *b_x;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &on_emlrtRSI;
  overflow = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= idx->size[1] - 1)) {
    if (idx->data[k] > x->size[1]) {
      overflow = false;
      exitg1 = true;
    } else {
      k++;
    }
  }

  if (!overflow) {
    emlrtErrorWithMessageIdR2018a(&st, &sg_emlrtRTEI,
      "MATLAB:subsdeldimmismatch", "MATLAB:subsdeldimmismatch", 0);
  }

  st.site = &pn_emlrtRSI;
  ncolx = x->size[1];
  if (idx->size[1] == 1) {
    ncols = x->size[1] - 1;
    loop_ub = idx->data[0];
    b_st.site = &qn_emlrtRSI;
    overflow = ((idx->data[0] <= x->size[1] - 1) && (x->size[1] - 1 > 2147483646));
    if (overflow) {
      c_st.site = &lb_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (j = loop_ub; j <= ncols; j++) {
      i103 = j << 1;
      i104 = (j - 1) << 1;
      x->data[i104] = x->data[i103];
      x->data[1 + i104] = x->data[1 + i103];
    }
  } else {
    emxInit_boolean_T(&st, &b, 2, &mf_emlrtRTEI, true);
    b_st.site = &rn_emlrtRSI;
    i103 = b->size[0] * b->size[1];
    b->size[0] = 1;
    b->size[1] = x->size[1];
    emxEnsureCapacity_boolean_T(&b_st, b, i103, &jf_emlrtRTEI);
    loop_ub = x->size[1];
    for (i103 = 0; i103 < loop_ub; i103++) {
      b->data[i103] = false;
    }

    loop_ub = idx->size[1];
    c_st.site = &un_emlrtRSI;
    overflow = ((1 <= idx->size[1]) && (idx->size[1] > 2147483646));
    if (overflow) {
      d_st.site = &lb_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    for (k = 0; k < loop_ub; k++) {
      b->data[idx->data[k] - 1] = true;
    }

    b_st.site = &sn_emlrtRSI;
    ncols = 0;
    loop_ub = b->size[1];
    c_st.site = &xb_emlrtRSI;
    overflow = ((1 <= b->size[1]) && (b->size[1] > 2147483646));
    if (overflow) {
      d_st.site = &lb_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    for (k = 0; k < loop_ub; k++) {
      ncols += b->data[k];
    }

    ncols = x->size[1] - ncols;
    j = 0;
    b_st.site = &tn_emlrtRSI;
    overflow = ((1 <= x->size[1]) && (x->size[1] > 2147483646));
    if (overflow) {
      c_st.site = &lb_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (k = 0; k < ncolx; k++) {
      if ((k + 1 > b->size[1]) || (!b->data[k])) {
        i103 = k << 1;
        i104 = j << 1;
        x->data[i104] = x->data[i103];
        x->data[1 + i104] = x->data[1 + i103];
        j++;
      }
    }

    emxFree_boolean_T(&b);
  }

  if (ncols > ncolx) {
    emlrtErrorWithMessageIdR2018a(&st, &rg_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  if (1 > ncols) {
    loop_ub = 0;
  } else {
    loop_ub = ncols;
  }

  emxInit_real_T(&st, &b_x, 2, &kf_emlrtRTEI, true);
  i103 = b_x->size[0] * b_x->size[1];
  b_x->size[0] = 2;
  b_x->size[1] = loop_ub;
  emxEnsureCapacity_real_T(&st, b_x, i103, &kf_emlrtRTEI);
  for (i103 = 0; i103 < loop_ub; i103++) {
    i104 = i103 << 1;
    b_x->data[i104] = x->data[i104];
    i104++;
    b_x->data[i104] = x->data[i104];
  }

  i103 = x->size[0] * x->size[1];
  x->size[0] = 2;
  x->size[1] = b_x->size[1];
  emxEnsureCapacity_real_T(&st, x, i103, &lf_emlrtRTEI);
  loop_ub = b_x->size[1];
  for (i103 = 0; i103 < loop_ub; i103++) {
    i104 = i103 << 1;
    x->data[i104] = b_x->data[i104];
    i104++;
    x->data[i104] = b_x->data[i104];
  }

  emxFree_real_T(&b_x);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void c_nullAssignment(const emlrtStack *sp, emxArray_real_T *x, const
                      emxArray_int32_T *idx)
{
  boolean_T overflow;
  int32_T k;
  boolean_T exitg1;
  emxArray_boolean_T *b;
  int32_T nxin;
  int32_T n;
  int32_T k0;
  int32_T nxout;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &tb_emlrtRSI;
  overflow = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= idx->size[1] - 1)) {
    if (idx->data[k] > x->size[1]) {
      overflow = false;
      exitg1 = true;
    } else {
      k++;
    }
  }

  if (!overflow) {
    emlrtErrorWithMessageIdR2018a(&st, &vf_emlrtRTEI,
      "MATLAB:subsdeldimmismatch", "MATLAB:subsdeldimmismatch", 0);
  }

  emxInit_boolean_T(&st, &b, 2, &pf_emlrtRTEI, true);
  st.site = &ub_emlrtRSI;
  nxin = x->size[1];
  b_st.site = &vn_emlrtRSI;
  n = b->size[0] * b->size[1];
  b->size[0] = 1;
  b->size[1] = x->size[1];
  emxEnsureCapacity_boolean_T(&b_st, b, n, &nf_emlrtRTEI);
  k0 = x->size[1];
  for (n = 0; n < k0; n++) {
    b->data[n] = false;
  }

  k0 = idx->size[1];
  c_st.site = &un_emlrtRSI;
  overflow = ((1 <= idx->size[1]) && (idx->size[1] > 2147483646));
  if (overflow) {
    d_st.site = &lb_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (k = 0; k < k0; k++) {
    b->data[idx->data[k] - 1] = true;
  }

  b_st.site = &vb_emlrtRSI;
  n = 0;
  k0 = b->size[1];
  c_st.site = &xb_emlrtRSI;
  overflow = ((1 <= b->size[1]) && (b->size[1] > 2147483646));
  if (overflow) {
    d_st.site = &lb_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (k = 0; k < k0; k++) {
    n += b->data[k];
  }

  nxout = x->size[1] - n;
  k0 = -1;
  b_st.site = &wb_emlrtRSI;
  overflow = ((1 <= x->size[1]) && (x->size[1] > 2147483646));
  if (overflow) {
    c_st.site = &lb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (k = 0; k < nxin; k++) {
    if ((k + 1 > b->size[1]) || (!b->data[k])) {
      k0++;
      x->data[k0] = x->data[k];
    }
  }

  emxFree_boolean_T(&b);
  if (nxout > nxin) {
    emlrtErrorWithMessageIdR2018a(&st, &uf_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  if (1 > nxout) {
    x->size[1] = 0;
  } else {
    n = x->size[0] * x->size[1];
    x->size[1] = nxout;
    emxEnsureCapacity_real_T(&st, x, n, &of_emlrtRTEI);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void nullAssignment(const emlrtStack *sp, emxArray_real_T *x, const
                    emxArray_int32_T *idx)
{
  boolean_T overflow;
  int32_T k;
  boolean_T exitg1;
  int32_T ncolx;
  emxArray_boolean_T *b;
  int32_T ncols;
  int32_T b_b;
  int32_T j;
  int32_T loop_ub;
  emxArray_real_T *b_x;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &on_emlrtRSI;
  overflow = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= idx->size[1] - 1)) {
    if (idx->data[k] > x->size[1]) {
      overflow = false;
      exitg1 = true;
    } else {
      k++;
    }
  }

  if (!overflow) {
    emlrtErrorWithMessageIdR2018a(&st, &sg_emlrtRTEI,
      "MATLAB:subsdeldimmismatch", "MATLAB:subsdeldimmismatch", 0);
  }

  st.site = &pn_emlrtRSI;
  ncolx = x->size[1];
  if (idx->size[1] == 1) {
    ncols = x->size[1] - 1;
    b_b = idx->data[0];
    b_st.site = &qn_emlrtRSI;
    overflow = ((idx->data[0] <= x->size[1] - 1) && (x->size[1] - 1 > 2147483646));
    if (overflow) {
      c_st.site = &lb_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (j = b_b; j <= ncols; j++) {
      for (loop_ub = 0; loop_ub < 6; loop_ub++) {
        x->data[loop_ub + 6 * (j - 1)] = x->data[loop_ub + 6 * j];
      }
    }
  } else {
    emxInit_boolean_T(&st, &b, 2, &mf_emlrtRTEI, true);
    b_st.site = &rn_emlrtRSI;
    j = b->size[0] * b->size[1];
    b->size[0] = 1;
    b->size[1] = x->size[1];
    emxEnsureCapacity_boolean_T(&b_st, b, j, &jf_emlrtRTEI);
    loop_ub = x->size[1];
    for (j = 0; j < loop_ub; j++) {
      b->data[j] = false;
    }

    b_b = idx->size[1];
    c_st.site = &un_emlrtRSI;
    overflow = ((1 <= idx->size[1]) && (idx->size[1] > 2147483646));
    if (overflow) {
      d_st.site = &lb_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    for (k = 0; k < b_b; k++) {
      b->data[idx->data[k] - 1] = true;
    }

    b_st.site = &sn_emlrtRSI;
    ncols = 0;
    b_b = b->size[1];
    c_st.site = &xb_emlrtRSI;
    overflow = ((1 <= b->size[1]) && (b->size[1] > 2147483646));
    if (overflow) {
      d_st.site = &lb_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    for (k = 0; k < b_b; k++) {
      ncols += b->data[k];
    }

    ncols = x->size[1] - ncols;
    j = 0;
    b_st.site = &tn_emlrtRSI;
    overflow = ((1 <= x->size[1]) && (x->size[1] > 2147483646));
    if (overflow) {
      c_st.site = &lb_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (k = 0; k < ncolx; k++) {
      if ((k + 1 > b->size[1]) || (!b->data[k])) {
        for (loop_ub = 0; loop_ub < 6; loop_ub++) {
          x->data[loop_ub + 6 * j] = x->data[loop_ub + 6 * k];
        }

        j++;
      }
    }

    emxFree_boolean_T(&b);
  }

  if (ncols > ncolx) {
    emlrtErrorWithMessageIdR2018a(&st, &rg_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  if (1 > ncols) {
    loop_ub = 0;
  } else {
    loop_ub = ncols;
  }

  emxInit_real_T(&st, &b_x, 2, &kf_emlrtRTEI, true);
  j = b_x->size[0] * b_x->size[1];
  b_x->size[0] = 6;
  b_x->size[1] = loop_ub;
  emxEnsureCapacity_real_T(&st, b_x, j, &kf_emlrtRTEI);
  for (j = 0; j < loop_ub; j++) {
    for (b_b = 0; b_b < 6; b_b++) {
      ncols = b_b + 6 * j;
      b_x->data[ncols] = x->data[ncols];
    }
  }

  j = x->size[0] * x->size[1];
  x->size[0] = 6;
  x->size[1] = b_x->size[1];
  emxEnsureCapacity_real_T(&st, x, j, &lf_emlrtRTEI);
  loop_ub = b_x->size[1];
  for (j = 0; j < loop_ub; j++) {
    for (b_b = 0; b_b < 6; b_b++) {
      ncols = b_b + 6 * j;
      x->data[ncols] = b_x->data[ncols];
    }
  }

  emxFree_real_T(&b_x);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (nullAssignment.c) */
