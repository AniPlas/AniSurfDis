/*
 * split.c
 *
 * Code generation for function 'split'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "stress.h"
#include "split.h"
#include "stress_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "abs.h"
#include "diff.h"
#include "stress_data.h"

/* Variable Definitions */
static emlrtRSInfo fb_emlrtRSI = { 21, /* lineNo */
  "split",                             /* fcnName */
  "/home/xiaolei/Documents/ImageStress/split.m"/* pathName */
};

static emlrtRSInfo gb_emlrtRSI = { 9,  /* lineNo */
  "split",                             /* fcnName */
  "/home/xiaolei/Documents/ImageStress/split.m"/* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 8,  /* lineNo */
  "split",                             /* fcnName */
  "/home/xiaolei/Documents/ImageStress/split.m"/* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 4,  /* lineNo */
  "split",                             /* fcnName */
  "/home/xiaolei/Documents/ImageStress/split.m"/* pathName */
};

static emlrtRSInfo ob_emlrtRSI = { 10, /* lineNo */
  "ceil",                              /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/elfun/ceil.m"/* pathName */
};

static emlrtRSInfo pb_emlrtRSI = { 31, /* lineNo */
  "applyScalarFunctionInPlace",        /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/applyScalarFunctionInPlace.m"/* pathName */
};

static emlrtRTEInfo sb_emlrtRTEI = { 3,/* lineNo */
  9,                                   /* colNo */
  "split",                             /* fName */
  "/home/xiaolei/Documents/ImageStress/split.m"/* pName */
};

static emlrtRTEInfo ub_emlrtRTEI = { 8,/* lineNo */
  21,                                  /* colNo */
  "split",                             /* fName */
  "/home/xiaolei/Documents/ImageStress/split.m"/* pName */
};

static emlrtRTEInfo vb_emlrtRTEI = { 9,/* lineNo */
  23,                                  /* colNo */
  "split",                             /* fName */
  "/home/xiaolei/Documents/ImageStress/split.m"/* pName */
};

static emlrtRTEInfo wb_emlrtRTEI = { 42,/* lineNo */
  5,                                   /* colNo */
  "find",                              /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/elmat/find.m"/* pName */
};

static emlrtRTEInfo xb_emlrtRTEI = { 21,/* lineNo */
  22,                                  /* colNo */
  "split",                             /* fName */
  "/home/xiaolei/Documents/ImageStress/split.m"/* pName */
};

static emlrtRTEInfo yb_emlrtRTEI = { 25,/* lineNo */
  9,                                   /* colNo */
  "colon",                             /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/ops/colon.m"/* pName */
};

static emlrtRTEInfo ac_emlrtRTEI = { 17,/* lineNo */
  28,                                  /* colNo */
  "split",                             /* fName */
  "/home/xiaolei/Documents/ImageStress/split.m"/* pName */
};

static emlrtRTEInfo bc_emlrtRTEI = { 17,/* lineNo */
  13,                                  /* colNo */
  "split",                             /* fName */
  "/home/xiaolei/Documents/ImageStress/split.m"/* pName */
};

static emlrtRTEInfo cc_emlrtRTEI = { 21,/* lineNo */
  9,                                   /* colNo */
  "split",                             /* fName */
  "/home/xiaolei/Documents/ImageStress/split.m"/* pName */
};

static emlrtRTEInfo dc_emlrtRTEI = { 24,/* lineNo */
  13,                                  /* colNo */
  "split",                             /* fName */
  "/home/xiaolei/Documents/ImageStress/split.m"/* pName */
};

static emlrtRTEInfo ec_emlrtRTEI = { 9,/* lineNo */
  18,                                  /* colNo */
  "split",                             /* fName */
  "/home/xiaolei/Documents/ImageStress/split.m"/* pName */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  10,                                  /* lineNo */
  21,                                  /* colNo */
  "nnew",                              /* aName */
  "split",                             /* fName */
  "/home/xiaolei/Documents/ImageStress/split.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo wf_emlrtRTEI = { 11,/* lineNo */
  17,                                  /* colNo */
  "split",                             /* fName */
  "/home/xiaolei/Documents/ImageStress/split.m"/* pName */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  12,                                  /* lineNo */
  24,                                  /* colNo */
  "idxnew",                            /* aName */
  "split",                             /* fName */
  "/home/xiaolei/Documents/ImageStress/split.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  13,                                  /* lineNo */
  24,                                  /* colNo */
  "nnew",                              /* aName */
  "split",                             /* fName */
  "/home/xiaolei/Documents/ImageStress/split.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  71,                                  /* colNo */
  "interval_new",                      /* aName */
  "split",                             /* fName */
  "/home/xiaolei/Documents/ImageStress/split.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void split(const emlrtStack *sp, emxArray_real_T *interval_new, real_T *pathlen)
{
  int32_T i3;
  emxArray_real_T *i;
  emxArray_real_T *y;
  int32_T absdx_size_idx_1;
  int32_T loop_ub;
  real_T absdx_data[1];
  int32_T nx;
  real_T b_absdx_data;
  emxArray_boolean_T *x;
  emxArray_int8_T *ii;
  int32_T idx;
  int32_T k0;
  boolean_T exitg1;
  int32_T b_absdx_size_idx_1;
  int32_T i4;
  real_T c_absdx_data[1];
  emxArray_real_T *b_interval_new;
  real_T b;
  real_T d0;
  boolean_T overflow;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  i3 = interval_new->size[0] * interval_new->size[1];
  interval_new->size[0] = 1;
  interval_new->size[1] = 2;
  emxEnsureCapacity_real_T(sp, interval_new, i3, &sb_emlrtRTEI);
  interval_new->data[0] = -1.0;
  interval_new->data[1] = 1.0;
  emxInit_real_T(sp, &i, 2, &ec_emlrtRTEI, true);
  i3 = i->size[0] * i->size[1];
  i->size[0] = 1;
  i->size[1] = 2;
  emxEnsureCapacity_real_T(sp, i, i3, &sb_emlrtRTEI);
  i->data[0] = -1.0;
  i->data[1] = 1.0;
  emxInit_real_T(sp, &y, 2, &ub_emlrtRTEI, true);
  st.site = &ib_emlrtRSI;
  diff(&st, i, y);
  st.site = &ib_emlrtRSI;
  b_abs(&st, y, i);
  absdx_size_idx_1 = i->size[1];
  loop_ub = i->size[0] * i->size[1];
  for (i3 = 0; i3 < loop_ub; i3++) {
    absdx_data[i3] = i->data[i3];
  }

  i3 = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = absdx_size_idx_1;
  emxEnsureCapacity_real_T(sp, y, i3, &tb_emlrtRTEI);
  for (i3 = 0; i3 < absdx_size_idx_1; i3++) {
    y->data[i3] = absdx_data[i3] * 5.0;
  }

  st.site = &hb_emlrtRSI;
  loop_ub = absdx_size_idx_1 - 1;
  for (i3 = 0; i3 <= loop_ub; i3++) {
    absdx_data[i3] *= 5.0;
  }

  b_st.site = &ob_emlrtRSI;
  nx = y->size[1];
  c_st.site = &pb_emlrtRSI;
  b_absdx_data = absdx_data[0];
  for (loop_ub = 0; loop_ub < nx; loop_ub++) {
    b_absdx_data = muDoubleScalarCeil(b_absdx_data);
    absdx_data[0] = b_absdx_data;
  }

  loop_ub = absdx_size_idx_1 - 1;
  for (i3 = 0; i3 <= loop_ub; i3++) {
    absdx_data[i3]--;
  }

  emxInit_boolean_T(sp, &x, 2, &vb_emlrtRTEI, true);
  st.site = &gb_emlrtRSI;
  i3 = x->size[0] * x->size[1];
  x->size[0] = 1;
  x->size[1] = absdx_size_idx_1;
  emxEnsureCapacity_boolean_T(&st, x, i3, &vb_emlrtRTEI);
  for (i3 = 0; i3 < absdx_size_idx_1; i3++) {
    x->data[i3] = (absdx_data[i3] > 0.0);
  }

  emxInit_int8_T(&st, &ii, 2, &rb_emlrtRTEI, true);
  b_st.site = &qb_emlrtRSI;
  nx = x->size[1];
  c_st.site = &rb_emlrtRSI;
  idx = 0;
  i3 = ii->size[0] * ii->size[1];
  ii->size[0] = 1;
  ii->size[1] = x->size[1];
  emxEnsureCapacity_int8_T(&c_st, ii, i3, &y_emlrtRTEI);
  d_st.site = &sb_emlrtRSI;
  k0 = 0;
  exitg1 = false;
  while ((!exitg1) && (k0 <= nx - 1)) {
    if (x->data[0]) {
      idx++;
      ii->data[idx - 1] = 1;
      if (idx >= nx) {
        exitg1 = true;
      } else {
        k0 = 1;
      }
    } else {
      k0 = 1;
    }
  }

  if (idx > x->size[1]) {
    emlrtErrorWithMessageIdR2018a(&c_st, &tf_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  if (x->size[1] == 1) {
    if (idx == 0) {
      ii->size[0] = 1;
      ii->size[1] = 0;
    }
  } else if (1 > idx) {
    ii->size[1] = 0;
  } else {
    i3 = ii->size[0] * ii->size[1];
    ii->size[1] = 1;
    emxEnsureCapacity_int8_T(&c_st, ii, i3, &ab_emlrtRTEI);
  }

  i3 = i->size[0] * i->size[1];
  i->size[0] = 1;
  i->size[1] = ii->size[1];
  emxEnsureCapacity_real_T(&st, i, i3, &wb_emlrtRTEI);
  loop_ub = ii->size[0] * ii->size[1];
  for (i3 = 0; i3 < loop_ub; i3++) {
    i->data[i3] = ii->data[i3];
  }

  k0 = ii->size[1];
  emxFree_int8_T(&ii);
  b_absdx_size_idx_1 = i->size[1];
  loop_ub = i->size[0] * i->size[1];
  for (i3 = 0; i3 < loop_ub; i3++) {
    i4 = (int32_T)i->data[i3];
    if ((i4 < 1) || (i4 > absdx_size_idx_1)) {
      emlrtDynamicBoundsCheckR2012b(i4, 1, absdx_size_idx_1, &f_emlrtBCI, sp);
    }

    c_absdx_data[i3] = absdx_data[i4 - 1];
  }

  if (0 <= b_absdx_size_idx_1 - 1) {
    memcpy(&absdx_data[0], &c_absdx_data[0], (uint32_T)(b_absdx_size_idx_1 *
            (int32_T)sizeof(real_T)));
  }

  i3 = i->size[1];
  i4 = (int32_T)((1.0 + (-1.0 - (real_T)k0)) / -1.0);
  emlrtForLoopVectorCheckR2012b(k0, -1.0, 1.0, mxDOUBLE_CLASS, i4, &wf_emlrtRTEI,
    sp);
  emxInit_real_T(sp, &b_interval_new, 2, &ac_emlrtRTEI, true);
  b_absdx_data = absdx_data[0];
  for (idx = 0; idx < i4; idx++) {
    nx = i->size[1];
    if ((i3 < 1) || (i3 > nx)) {
      emlrtDynamicBoundsCheckR2012b(i3, 1, nx, &g_emlrtBCI, sp);
    }

    if (1 > b_absdx_size_idx_1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, b_absdx_size_idx_1, &h_emlrtBCI, sp);
    }

    /*  Calculate new points. */
    if (muDoubleScalarIsNaN(b_absdx_data)) {
      nx = y->size[0] * y->size[1];
      y->size[0] = 1;
      y->size[1] = 1;
      emxEnsureCapacity_real_T(sp, y, nx, &yb_emlrtRTEI);
      y->data[0] = rtNaN;
    } else if (b_absdx_data < 1.0) {
      y->size[0] = 1;
      y->size[1] = 0;
    } else if (muDoubleScalarIsInf(b_absdx_data) && (1.0 == b_absdx_data)) {
      nx = y->size[0] * y->size[1];
      y->size[0] = 1;
      y->size[1] = 1;
      emxEnsureCapacity_real_T(sp, y, nx, &yb_emlrtRTEI);
      y->data[0] = rtNaN;
    } else {
      nx = y->size[0] * y->size[1];
      y->size[0] = 1;
      loop_ub = (int32_T)muDoubleScalarFloor(b_absdx_data - 1.0);
      y->size[1] = loop_ub + 1;
      emxEnsureCapacity_real_T(sp, y, nx, &yb_emlrtRTEI);
      for (nx = 0; nx <= loop_ub; nx++) {
        y->data[nx] = 1.0 + (real_T)nx;
      }
    }

    b = interval_new->data[1] - interval_new->data[0];

    /*  Insert the new points. */
    nx = interval_new->size[1];
    k0 = interval_new->size[1];
    if ((k0 < 1) || (k0 > nx)) {
      emlrtDynamicBoundsCheckR2012b(k0, 1, nx, &i_emlrtBCI, sp);
    }

    d0 = interval_new->data[0];
    loop_ub = interval_new->size[1];
    nx = b_interval_new->size[0] * b_interval_new->size[1];
    b_interval_new->size[0] = 1;
    b_interval_new->size[1] = y->size[1] + loop_ub;
    emxEnsureCapacity_real_T(sp, b_interval_new, nx, &ac_emlrtRTEI);
    b_interval_new->data[0] = interval_new->data[0];
    k0 = y->size[1];
    for (nx = 0; nx < k0; nx++) {
      b_interval_new->data[nx + 1] = d0 + y->data[nx] / (b_absdx_data + 1.0) * b;
    }

    for (nx = 0; nx <= loop_ub - 2; nx++) {
      b_interval_new->data[(nx + y->size[1]) + 1] = interval_new->data[1 + nx];
    }

    nx = interval_new->size[0] * interval_new->size[1];
    interval_new->size[0] = 1;
    interval_new->size[1] = b_interval_new->size[1];
    emxEnsureCapacity_real_T(sp, interval_new, nx, &bc_emlrtRTEI);
    loop_ub = b_interval_new->size[0] * b_interval_new->size[1];
    for (nx = 0; nx < loop_ub; nx++) {
      interval_new->data[nx] = b_interval_new->data[nx];
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&b_interval_new);

  /*  Remove useless subintervals. */
  st.site = &fb_emlrtRSI;
  diff(&st, interval_new, y);
  st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  b_abs(&b_st, y, i);
  i3 = x->size[0] * x->size[1];
  x->size[0] = 1;
  x->size[1] = i->size[1];
  emxEnsureCapacity_boolean_T(&st, x, i3, &xb_emlrtRTEI);
  loop_ub = i->size[0] * i->size[1];
  emxFree_real_T(&y);
  for (i3 = 0; i3 < loop_ub; i3++) {
    x->data[i3] = (i->data[i3] == 0.0);
  }

  emxFree_real_T(&i);
  b_st.site = &tb_emlrtRSI;
  loop_ub = x->size[1];
  while ((loop_ub >= 1) && (!x->data[loop_ub - 1])) {
    loop_ub--;
  }

  if (loop_ub > interval_new->size[1]) {
    emlrtErrorWithMessageIdR2018a(&b_st, &vf_emlrtRTEI,
      "MATLAB:subsdeldimmismatch", "MATLAB:subsdeldimmismatch", 0);
  }

  b_st.site = &ub_emlrtRSI;
  nx = interval_new->size[1];
  c_st.site = &vb_emlrtRSI;
  k0 = 0;
  idx = x->size[1];
  d_st.site = &xb_emlrtRSI;
  overflow = ((1 <= x->size[1]) && (x->size[1] > 2147483646));
  if (overflow) {
    e_st.site = &lb_emlrtRSI;
    check_forloop_overflow_error(&e_st);
  }

  for (loop_ub = 0; loop_ub < idx; loop_ub++) {
    k0 += x->data[loop_ub];
  }

  idx = interval_new->size[1] - k0;
  k0 = -1;
  c_st.site = &wb_emlrtRSI;
  overflow = (interval_new->size[1] > 2147483646);
  if (overflow) {
    d_st.site = &lb_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (loop_ub = 0; loop_ub < nx; loop_ub++) {
    if ((loop_ub + 1 > x->size[1]) || (!x->data[loop_ub])) {
      k0++;
      interval_new->data[k0] = interval_new->data[loop_ub];
    }
  }

  emxFree_boolean_T(&x);
  if (idx > nx) {
    emlrtErrorWithMessageIdR2018a(&b_st, &uf_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  if (1 > idx) {
    interval_new->size[1] = 0;
  } else {
    i3 = interval_new->size[0] * interval_new->size[1];
    interval_new->size[1] = idx;
    emxEnsureCapacity_real_T(&b_st, interval_new, i3, &cc_emlrtRTEI);
  }

  if (interval_new->size[1] == 1) {
    /*  Return at least two elements. */
    b_absdx_data = interval_new->data[0];
    b = interval_new->data[0];
    i3 = interval_new->size[0] * interval_new->size[1];
    interval_new->size[0] = 1;
    interval_new->size[1] = 2;
    emxEnsureCapacity_real_T(sp, interval_new, i3, &dc_emlrtRTEI);
    interval_new->data[0] = b_absdx_data;
    interval_new->data[1] = b;
  }

  /*  split */
  *pathlen = 2.0;
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (split.c) */
