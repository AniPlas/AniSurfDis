/*
 * integrale_num_inf.c
 *
 * Code generation for function 'integrale_num_inf'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "stress.h"
#include "integrale_num_inf.h"
#include "stress_emxutil.h"
#include "rdivide_helper.h"
#include "power.h"
#include "stress_SL.h"
#include "checkSpacing.h"
#include "vadapt.h"
#include "stress_II.h"
#include "stress_GB.h"
#include "stress_I.h"
#include "stress_SU.h"
#include "stress_data.h"

/* Variable Definitions */
static emlrtRSInfo k_emlrtRSI = { 3,   /* lineNo */
  "integrale_num_inf",                 /* fcnName */
  "/home/xiaolei/Documents/ImageStress/integrale_num_inf.m"/* pathName */
};

static emlrtRSInfo jc_emlrtRSI = { 54, /* lineNo */
  "integrale_num_inf",                 /* fcnName */
  "/home/xiaolei/Documents/ImageStress/integrale_num_inf.m"/* pathName */
};

static emlrtRSInfo kc_emlrtRSI = { 58, /* lineNo */
  "integrale_num_inf",                 /* fcnName */
  "/home/xiaolei/Documents/ImageStress/integrale_num_inf.m"/* pathName */
};

static emlrtRSInfo lc_emlrtRSI = { 61, /* lineNo */
  "integrale_num_inf",                 /* fcnName */
  "/home/xiaolei/Documents/ImageStress/integrale_num_inf.m"/* pathName */
};

static emlrtRSInfo rc_emlrtRSI = { 39, /* lineNo */
  "integrale_num_inf",                 /* fcnName */
  "/home/xiaolei/Documents/ImageStress/integrale_num_inf.m"/* pathName */
};

static emlrtRSInfo sc_emlrtRSI = { 42, /* lineNo */
  "integrale_num_inf",                 /* fcnName */
  "/home/xiaolei/Documents/ImageStress/integrale_num_inf.m"/* pathName */
};

static emlrtRSInfo tc_emlrtRSI = { 46, /* lineNo */
  "integrale_num_inf",                 /* fcnName */
  "/home/xiaolei/Documents/ImageStress/integrale_num_inf.m"/* pathName */
};

static emlrtRTEInfo k_emlrtRTEI = { 13,/* lineNo */
  17,                                  /* colNo */
  "ref",                               /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/ref.m"/* pName */
};

static emlrtRTEInfo l_emlrtRTEI = { 1, /* lineNo */
  23,                                  /* colNo */
  "integrale_num_inf",                 /* fName */
  "/home/xiaolei/Documents/ImageStress/integrale_num_inf.m"/* pName */
};

static emlrtRTEInfo ic_emlrtRTEI = { 54,/* lineNo */
  20,                                  /* colNo */
  "integrale_num_inf",                 /* fName */
  "/home/xiaolei/Documents/ImageStress/integrale_num_inf.m"/* pName */
};

static emlrtRTEInfo jc_emlrtRTEI = { 61,/* lineNo */
  51,                                  /* colNo */
  "integrale_num_inf",                 /* fName */
  "/home/xiaolei/Documents/ImageStress/integrale_num_inf.m"/* pName */
};

static emlrtRTEInfo kc_emlrtRTEI = { 54,/* lineNo */
  9,                                   /* colNo */
  "integrale_num_inf",                 /* fName */
  "/home/xiaolei/Documents/ImageStress/integrale_num_inf.m"/* pName */
};

static emlrtRTEInfo nc_emlrtRTEI = { 46,/* lineNo */
  22,                                  /* colNo */
  "integrale_num_inf",                 /* fName */
  "/home/xiaolei/Documents/ImageStress/integrale_num_inf.m"/* pName */
};

static emlrtRTEInfo oc_emlrtRTEI = { 39,/* lineNo */
  18,                                  /* colNo */
  "integrale_num_inf",                 /* fName */
  "/home/xiaolei/Documents/ImageStress/integrale_num_inf.m"/* pName */
};

static emlrtRTEInfo pc_emlrtRTEI = { 46,/* lineNo */
  17,                                  /* colNo */
  "integrale_num_inf",                 /* fName */
  "/home/xiaolei/Documents/ImageStress/integrale_num_inf.m"/* pName */
};

static emlrtRTEInfo qc_emlrtRTEI = { 39,/* lineNo */
  13,                                  /* colNo */
  "integrale_num_inf",                 /* fName */
  "/home/xiaolei/Documents/ImageStress/integrale_num_inf.m"/* pName */
};

static emlrtRTEInfo rc_emlrtRTEI = { 32,/* lineNo */
  31,                                  /* colNo */
  "integrale_num_inf",                 /* fName */
  "/home/xiaolei/Documents/ImageStress/integrale_num_inf.m"/* pName */
};

static emlrtECInfo h_emlrtECI = { 2,   /* nDims */
  58,                                  /* lineNo */
  10,                                  /* colNo */
  "integrale_num_inf",                 /* fName */
  "/home/xiaolei/Documents/ImageStress/integrale_num_inf.m"/* pName */
};

static emlrtECInfo i_emlrtECI = { 2,   /* nDims */
  61,                                  /* lineNo */
  26,                                  /* colNo */
  "integrale_num_inf",                 /* fName */
  "/home/xiaolei/Documents/ImageStress/integrale_num_inf.m"/* pName */
};

static emlrtECInfo j_emlrtECI = { -1,  /* nDims */
  61,                                  /* lineNo */
  17,                                  /* colNo */
  "integrale_num_inf",                 /* fName */
  "/home/xiaolei/Documents/ImageStress/integrale_num_inf.m"/* pName */
};

static emlrtECInfo k_emlrtECI = { 2,   /* nDims */
  39,                                  /* lineNo */
  13,                                  /* colNo */
  "integrale_num_inf",                 /* fName */
  "/home/xiaolei/Documents/ImageStress/integrale_num_inf.m"/* pName */
};

static emlrtECInfo l_emlrtECI = { 2,   /* nDims */
  46,                                  /* lineNo */
  17,                                  /* colNo */
  "integrale_num_inf",                 /* fName */
  "/home/xiaolei/Documents/ImageStress/integrale_num_inf.m"/* pName */
};

/* Function Declarations */
static void b_evalFun(const emlrtStack *sp, coder_internal_ref_1 *FIRSTFUNEVAL,
                      const coder_internal_ref *FUN, const emxArray_real_T *x,
                      emxArray_real_T *fx, boolean_T *too_close);
static void c_evalFun(const emlrtStack *sp, coder_internal_ref_1 *FIRSTFUNEVAL,
                      const coder_internal_ref *FUN, const emxArray_real_T *x,
                      emxArray_real_T *fx, boolean_T *too_close);
static void d_evalFun(const emlrtStack *sp, coder_internal_ref_1 *FIRSTFUNEVAL,
                      const coder_internal_ref *FUN, const emxArray_real_T *x,
                      emxArray_real_T *fx, boolean_T *too_close);
static void e_evalFun(const emlrtStack *sp, coder_internal_ref_1 *FIRSTFUNEVAL,
                      const coder_internal_ref *FUN, const emxArray_real_T *x,
                      emxArray_real_T *fx, boolean_T *too_close);
static void evalFun(const emlrtStack *sp, coder_internal_ref_1 *FIRSTFUNEVAL,
                    const coder_internal_ref *FUN, const emxArray_real_T *x,
                    emxArray_real_T *fx, boolean_T *too_close);

/* Function Definitions */
static void b_evalFun(const emlrtStack *sp, coder_internal_ref_1 *FIRSTFUNEVAL,
                      const coder_internal_ref *FUN, const emxArray_real_T *x,
                      emxArray_real_T *fx, boolean_T *too_close)
{
  emxArray_real_T *b_fx;
  emxArray_real_T *this_tunableEnvironment_f35;
  emxArray_real_T *this_tunableEnvironment_f36;
  emxArray_real_T *this_tunableEnvironment_f37;
  emxArray_real_T *this_tunableEnvironment_f43;
  emxArray_real_T *this_tunableEnvironment_f44;
  real_T this_tunableEnvironment_f1;
  real_T this_tunableEnvironment_f2;
  int32_T i27;
  creal_T this_tunableEnvironment_f4[3];
  real_T this_tunableEnvironment_f3[81];
  real_T this_tunableEnvironment_f5[3];
  real_T this_tunableEnvironment_f6[3];
  creal_T this_tunableEnvironment_f7[9];
  creal_T this_tunableEnvironment_f8[9];
  creal_T this_tunableEnvironment_f10[3];
  real_T this_tunableEnvironment_f9[81];
  real_T this_tunableEnvironment_f11[3];
  real_T this_tunableEnvironment_f12[3];
  creal_T this_tunableEnvironment_f13[9];
  creal_T this_tunableEnvironment_f14[9];
  creal_T this_tunableEnvironment_f16[3];
  real_T this_tunableEnvironment_f15[81];
  real_T this_tunableEnvironment_f17[3];
  real_T this_tunableEnvironment_f18[3];
  creal_T this_tunableEnvironment_f19[9];
  creal_T this_tunableEnvironment_f20[9];
  creal_T this_tunableEnvironment_f22[3];
  real_T this_tunableEnvironment_f21[81];
  real_T this_tunableEnvironment_f23[3];
  real_T this_tunableEnvironment_f24[3];
  creal_T this_tunableEnvironment_f25[9];
  creal_T this_tunableEnvironment_f26[9];
  creal_T this_tunableEnvironment_f28[3];
  real_T this_tunableEnvironment_f27[81];
  real_T this_tunableEnvironment_f29[3];
  real_T this_tunableEnvironment_f30[3];
  creal_T this_tunableEnvironment_f31[9];
  creal_T this_tunableEnvironment_f32[9];
  real_T this_tunableEnvironment_f34;
  real_T this_tunableEnvironment_f33[25];
  int32_T loop_ub;
  real_T this_tunableEnvironment_f41[3];
  real_T this_tunableEnvironment_f38[900];
  real_T this_tunableEnvironment_f39[900];
  real_T this_tunableEnvironment_f40[900];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /* ==Nested functions========================================================= */
  /*  Evaluate the integrand. */
  emxInit_real_T(sp, &b_fx, 2, &rc_emlrtRTEI, true);
  emxInit_real_T(sp, &this_tunableEnvironment_f35, 2, &nc_emlrtRTEI, true);
  emxInit_real_T(sp, &this_tunableEnvironment_f36, 2, &nc_emlrtRTEI, true);
  emxInit_real_T(sp, &this_tunableEnvironment_f37, 1, &nc_emlrtRTEI, true);
  emxInit_real_T(sp, &this_tunableEnvironment_f43, 2, &nc_emlrtRTEI, true);
  emxInit_real_T(sp, &this_tunableEnvironment_f44, 2, &nc_emlrtRTEI, true);
  if (FIRSTFUNEVAL->contents) {
    /*  Don't check the closeness of the mesh on the first iteration. */
    *too_close = false;
    st.site = &rc_emlrtRSI;
    this_tunableEnvironment_f1 = FUN->contents.tunableEnvironment.f1;
    this_tunableEnvironment_f2 = FUN->contents.tunableEnvironment.f2;
    for (i27 = 0; i27 < 81; i27++) {
      this_tunableEnvironment_f3[i27] = FUN->contents.tunableEnvironment.f3[i27];
    }

    this_tunableEnvironment_f4[0] = FUN->contents.tunableEnvironment.f4[0];
    this_tunableEnvironment_f5[0] = FUN->contents.tunableEnvironment.f5[0];
    this_tunableEnvironment_f6[0] = FUN->contents.tunableEnvironment.f6[0];
    this_tunableEnvironment_f4[1] = FUN->contents.tunableEnvironment.f4[1];
    this_tunableEnvironment_f5[1] = FUN->contents.tunableEnvironment.f5[1];
    this_tunableEnvironment_f6[1] = FUN->contents.tunableEnvironment.f6[1];
    this_tunableEnvironment_f4[2] = FUN->contents.tunableEnvironment.f4[2];
    this_tunableEnvironment_f5[2] = FUN->contents.tunableEnvironment.f5[2];
    this_tunableEnvironment_f6[2] = FUN->contents.tunableEnvironment.f6[2];
    for (i27 = 0; i27 < 9; i27++) {
      this_tunableEnvironment_f7[i27] = FUN->contents.tunableEnvironment.f7[i27];
      this_tunableEnvironment_f8[i27] = FUN->contents.tunableEnvironment.f8[i27];
    }

    for (i27 = 0; i27 < 81; i27++) {
      this_tunableEnvironment_f9[i27] = FUN->contents.tunableEnvironment.f9[i27];
    }

    this_tunableEnvironment_f10[0] = FUN->contents.tunableEnvironment.f10[0];
    this_tunableEnvironment_f11[0] = FUN->contents.tunableEnvironment.f11[0];
    this_tunableEnvironment_f12[0] = FUN->contents.tunableEnvironment.f12[0];
    this_tunableEnvironment_f10[1] = FUN->contents.tunableEnvironment.f10[1];
    this_tunableEnvironment_f11[1] = FUN->contents.tunableEnvironment.f11[1];
    this_tunableEnvironment_f12[1] = FUN->contents.tunableEnvironment.f12[1];
    this_tunableEnvironment_f10[2] = FUN->contents.tunableEnvironment.f10[2];
    this_tunableEnvironment_f11[2] = FUN->contents.tunableEnvironment.f11[2];
    this_tunableEnvironment_f12[2] = FUN->contents.tunableEnvironment.f12[2];
    for (i27 = 0; i27 < 9; i27++) {
      this_tunableEnvironment_f13[i27] = FUN->
        contents.tunableEnvironment.f13[i27];
      this_tunableEnvironment_f14[i27] = FUN->
        contents.tunableEnvironment.f14[i27];
    }

    for (i27 = 0; i27 < 81; i27++) {
      this_tunableEnvironment_f15[i27] = FUN->
        contents.tunableEnvironment.f15[i27];
    }

    this_tunableEnvironment_f16[0] = FUN->contents.tunableEnvironment.f16[0];
    this_tunableEnvironment_f17[0] = FUN->contents.tunableEnvironment.f17[0];
    this_tunableEnvironment_f18[0] = FUN->contents.tunableEnvironment.f18[0];
    this_tunableEnvironment_f16[1] = FUN->contents.tunableEnvironment.f16[1];
    this_tunableEnvironment_f17[1] = FUN->contents.tunableEnvironment.f17[1];
    this_tunableEnvironment_f18[1] = FUN->contents.tunableEnvironment.f18[1];
    this_tunableEnvironment_f16[2] = FUN->contents.tunableEnvironment.f16[2];
    this_tunableEnvironment_f17[2] = FUN->contents.tunableEnvironment.f17[2];
    this_tunableEnvironment_f18[2] = FUN->contents.tunableEnvironment.f18[2];
    for (i27 = 0; i27 < 9; i27++) {
      this_tunableEnvironment_f19[i27] = FUN->
        contents.tunableEnvironment.f19[i27];
      this_tunableEnvironment_f20[i27] = FUN->
        contents.tunableEnvironment.f20[i27];
    }

    for (i27 = 0; i27 < 81; i27++) {
      this_tunableEnvironment_f21[i27] = FUN->
        contents.tunableEnvironment.f21[i27];
    }

    this_tunableEnvironment_f22[0] = FUN->contents.tunableEnvironment.f22[0];
    this_tunableEnvironment_f23[0] = FUN->contents.tunableEnvironment.f23[0];
    this_tunableEnvironment_f24[0] = FUN->contents.tunableEnvironment.f24[0];
    this_tunableEnvironment_f22[1] = FUN->contents.tunableEnvironment.f22[1];
    this_tunableEnvironment_f23[1] = FUN->contents.tunableEnvironment.f23[1];
    this_tunableEnvironment_f24[1] = FUN->contents.tunableEnvironment.f24[1];
    this_tunableEnvironment_f22[2] = FUN->contents.tunableEnvironment.f22[2];
    this_tunableEnvironment_f23[2] = FUN->contents.tunableEnvironment.f23[2];
    this_tunableEnvironment_f24[2] = FUN->contents.tunableEnvironment.f24[2];
    for (i27 = 0; i27 < 9; i27++) {
      this_tunableEnvironment_f25[i27] = FUN->
        contents.tunableEnvironment.f25[i27];
      this_tunableEnvironment_f26[i27] = FUN->
        contents.tunableEnvironment.f26[i27];
    }

    for (i27 = 0; i27 < 81; i27++) {
      this_tunableEnvironment_f27[i27] = FUN->
        contents.tunableEnvironment.f27[i27];
    }

    this_tunableEnvironment_f28[0] = FUN->contents.tunableEnvironment.f28[0];
    this_tunableEnvironment_f29[0] = FUN->contents.tunableEnvironment.f29[0];
    this_tunableEnvironment_f30[0] = FUN->contents.tunableEnvironment.f30[0];
    this_tunableEnvironment_f28[1] = FUN->contents.tunableEnvironment.f28[1];
    this_tunableEnvironment_f29[1] = FUN->contents.tunableEnvironment.f29[1];
    this_tunableEnvironment_f30[1] = FUN->contents.tunableEnvironment.f30[1];
    this_tunableEnvironment_f28[2] = FUN->contents.tunableEnvironment.f28[2];
    this_tunableEnvironment_f29[2] = FUN->contents.tunableEnvironment.f29[2];
    this_tunableEnvironment_f30[2] = FUN->contents.tunableEnvironment.f30[2];
    for (i27 = 0; i27 < 9; i27++) {
      this_tunableEnvironment_f31[i27] = FUN->
        contents.tunableEnvironment.f31[i27];
      this_tunableEnvironment_f32[i27] = FUN->
        contents.tunableEnvironment.f32[i27];
    }

    for (i27 = 0; i27 < 25; i27++) {
      this_tunableEnvironment_f33[i27] = FUN->
        contents.tunableEnvironment.f33[i27];
    }

    this_tunableEnvironment_f34 = FUN->contents.tunableEnvironment.f34;
    i27 = this_tunableEnvironment_f35->size[0] *
      this_tunableEnvironment_f35->size[1];
    this_tunableEnvironment_f35->size[0] = FUN->
      contents.tunableEnvironment.f35->size[0];
    this_tunableEnvironment_f35->size[1] = FUN->
      contents.tunableEnvironment.f35->size[1];
    emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f35, i27,
      &oc_emlrtRTEI);
    loop_ub = FUN->contents.tunableEnvironment.f35->size[0] *
      FUN->contents.tunableEnvironment.f35->size[1];
    for (i27 = 0; i27 < loop_ub; i27++) {
      this_tunableEnvironment_f35->data[i27] =
        FUN->contents.tunableEnvironment.f35->data[i27];
    }

    i27 = this_tunableEnvironment_f36->size[0] *
      this_tunableEnvironment_f36->size[1];
    this_tunableEnvironment_f36->size[0] = FUN->
      contents.tunableEnvironment.f36->size[0];
    this_tunableEnvironment_f36->size[1] = FUN->
      contents.tunableEnvironment.f36->size[1];
    emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f36, i27,
      &oc_emlrtRTEI);
    loop_ub = FUN->contents.tunableEnvironment.f36->size[0] *
      FUN->contents.tunableEnvironment.f36->size[1];
    for (i27 = 0; i27 < loop_ub; i27++) {
      this_tunableEnvironment_f36->data[i27] =
        FUN->contents.tunableEnvironment.f36->data[i27];
    }

    i27 = this_tunableEnvironment_f37->size[0];
    this_tunableEnvironment_f37->size[0] = FUN->
      contents.tunableEnvironment.f37->size[0];
    emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f37, i27,
      &oc_emlrtRTEI);
    loop_ub = FUN->contents.tunableEnvironment.f37->size[0];
    for (i27 = 0; i27 < loop_ub; i27++) {
      this_tunableEnvironment_f37->data[i27] =
        FUN->contents.tunableEnvironment.f37->data[i27];
    }

    for (i27 = 0; i27 < 900; i27++) {
      this_tunableEnvironment_f38[i27] = FUN->
        contents.tunableEnvironment.f38[i27];
      this_tunableEnvironment_f39[i27] = FUN->
        contents.tunableEnvironment.f39[i27];
      this_tunableEnvironment_f40[i27] = FUN->
        contents.tunableEnvironment.f40[i27];
    }

    this_tunableEnvironment_f41[0] = FUN->contents.tunableEnvironment.f41[0];
    this_tunableEnvironment_f41[1] = FUN->contents.tunableEnvironment.f41[1];
    this_tunableEnvironment_f41[2] = FUN->contents.tunableEnvironment.f41[2];
    i27 = this_tunableEnvironment_f43->size[0] *
      this_tunableEnvironment_f43->size[1];
    this_tunableEnvironment_f43->size[0] = 1;
    this_tunableEnvironment_f43->size[1] = FUN->
      contents.tunableEnvironment.f43->size[1];
    emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f43, i27,
      &oc_emlrtRTEI);
    loop_ub = FUN->contents.tunableEnvironment.f43->size[0] *
      FUN->contents.tunableEnvironment.f43->size[1];
    for (i27 = 0; i27 < loop_ub; i27++) {
      this_tunableEnvironment_f43->data[i27] =
        FUN->contents.tunableEnvironment.f43->data[i27];
    }

    i27 = this_tunableEnvironment_f44->size[0] *
      this_tunableEnvironment_f44->size[1];
    this_tunableEnvironment_f44->size[0] = 1;
    this_tunableEnvironment_f44->size[1] = FUN->
      contents.tunableEnvironment.f44->size[1];
    emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f44, i27,
      &oc_emlrtRTEI);
    loop_ub = FUN->contents.tunableEnvironment.f44->size[0] *
      FUN->contents.tunableEnvironment.f44->size[1];
    for (i27 = 0; i27 < loop_ub; i27++) {
      this_tunableEnvironment_f44->data[i27] =
        FUN->contents.tunableEnvironment.f44->data[i27];
    }

    b_st.site = &ic_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    stress_I(&c_st, x, this_tunableEnvironment_f1, this_tunableEnvironment_f2,
             this_tunableEnvironment_f3, this_tunableEnvironment_f4,
             this_tunableEnvironment_f5, this_tunableEnvironment_f6,
             this_tunableEnvironment_f7, this_tunableEnvironment_f8,
             this_tunableEnvironment_f9, this_tunableEnvironment_f10,
             this_tunableEnvironment_f11, this_tunableEnvironment_f12,
             this_tunableEnvironment_f13, this_tunableEnvironment_f14,
             this_tunableEnvironment_f15, this_tunableEnvironment_f16,
             this_tunableEnvironment_f17, this_tunableEnvironment_f18,
             this_tunableEnvironment_f19, this_tunableEnvironment_f20,
             this_tunableEnvironment_f21, this_tunableEnvironment_f22,
             this_tunableEnvironment_f23, this_tunableEnvironment_f24,
             this_tunableEnvironment_f25, this_tunableEnvironment_f26,
             this_tunableEnvironment_f27, this_tunableEnvironment_f28,
             this_tunableEnvironment_f29, this_tunableEnvironment_f30,
             this_tunableEnvironment_f31, this_tunableEnvironment_f32,
             this_tunableEnvironment_f33, this_tunableEnvironment_f34,
             this_tunableEnvironment_f35, this_tunableEnvironment_f36,
             this_tunableEnvironment_f37, this_tunableEnvironment_f38,
             this_tunableEnvironment_f39, this_tunableEnvironment_f40,
             this_tunableEnvironment_f41, FUN->contents.tunableEnvironment.f42,
             this_tunableEnvironment_f43, this_tunableEnvironment_f44, b_fx);
    i27 = b_fx->size[1];
    if (5000 < i27) {
      emlrtDimSizeGeqCheckR2012b(5000, i27, &k_emlrtECI, sp);
    }

    i27 = fx->size[0] * fx->size[1];
    fx->size[0] = 6;
    fx->size[1] = b_fx->size[1];
    emxEnsureCapacity_real_T(sp, fx, i27, &qc_emlrtRTEI);
    loop_ub = b_fx->size[0] * b_fx->size[1];
    for (i27 = 0; i27 < loop_ub; i27++) {
      fx->data[i27] = b_fx->data[i27];
    }

    FIRSTFUNEVAL->contents = false;
  } else {
    st.site = &sc_emlrtRSI;
    *too_close = checkSpacing(&st, x);
    if (*too_close) {
      fx->size[0] = 6;
      fx->size[1] = 0;
    } else {
      st.site = &tc_emlrtRSI;
      this_tunableEnvironment_f1 = FUN->contents.tunableEnvironment.f1;
      this_tunableEnvironment_f2 = FUN->contents.tunableEnvironment.f2;
      for (i27 = 0; i27 < 81; i27++) {
        this_tunableEnvironment_f3[i27] = FUN->
          contents.tunableEnvironment.f3[i27];
      }

      this_tunableEnvironment_f4[0] = FUN->contents.tunableEnvironment.f4[0];
      this_tunableEnvironment_f5[0] = FUN->contents.tunableEnvironment.f5[0];
      this_tunableEnvironment_f6[0] = FUN->contents.tunableEnvironment.f6[0];
      this_tunableEnvironment_f4[1] = FUN->contents.tunableEnvironment.f4[1];
      this_tunableEnvironment_f5[1] = FUN->contents.tunableEnvironment.f5[1];
      this_tunableEnvironment_f6[1] = FUN->contents.tunableEnvironment.f6[1];
      this_tunableEnvironment_f4[2] = FUN->contents.tunableEnvironment.f4[2];
      this_tunableEnvironment_f5[2] = FUN->contents.tunableEnvironment.f5[2];
      this_tunableEnvironment_f6[2] = FUN->contents.tunableEnvironment.f6[2];
      for (i27 = 0; i27 < 9; i27++) {
        this_tunableEnvironment_f7[i27] = FUN->
          contents.tunableEnvironment.f7[i27];
        this_tunableEnvironment_f8[i27] = FUN->
          contents.tunableEnvironment.f8[i27];
      }

      for (i27 = 0; i27 < 81; i27++) {
        this_tunableEnvironment_f9[i27] = FUN->
          contents.tunableEnvironment.f9[i27];
      }

      this_tunableEnvironment_f10[0] = FUN->contents.tunableEnvironment.f10[0];
      this_tunableEnvironment_f11[0] = FUN->contents.tunableEnvironment.f11[0];
      this_tunableEnvironment_f12[0] = FUN->contents.tunableEnvironment.f12[0];
      this_tunableEnvironment_f10[1] = FUN->contents.tunableEnvironment.f10[1];
      this_tunableEnvironment_f11[1] = FUN->contents.tunableEnvironment.f11[1];
      this_tunableEnvironment_f12[1] = FUN->contents.tunableEnvironment.f12[1];
      this_tunableEnvironment_f10[2] = FUN->contents.tunableEnvironment.f10[2];
      this_tunableEnvironment_f11[2] = FUN->contents.tunableEnvironment.f11[2];
      this_tunableEnvironment_f12[2] = FUN->contents.tunableEnvironment.f12[2];
      for (i27 = 0; i27 < 9; i27++) {
        this_tunableEnvironment_f13[i27] = FUN->
          contents.tunableEnvironment.f13[i27];
        this_tunableEnvironment_f14[i27] = FUN->
          contents.tunableEnvironment.f14[i27];
      }

      for (i27 = 0; i27 < 81; i27++) {
        this_tunableEnvironment_f15[i27] = FUN->
          contents.tunableEnvironment.f15[i27];
      }

      this_tunableEnvironment_f16[0] = FUN->contents.tunableEnvironment.f16[0];
      this_tunableEnvironment_f17[0] = FUN->contents.tunableEnvironment.f17[0];
      this_tunableEnvironment_f18[0] = FUN->contents.tunableEnvironment.f18[0];
      this_tunableEnvironment_f16[1] = FUN->contents.tunableEnvironment.f16[1];
      this_tunableEnvironment_f17[1] = FUN->contents.tunableEnvironment.f17[1];
      this_tunableEnvironment_f18[1] = FUN->contents.tunableEnvironment.f18[1];
      this_tunableEnvironment_f16[2] = FUN->contents.tunableEnvironment.f16[2];
      this_tunableEnvironment_f17[2] = FUN->contents.tunableEnvironment.f17[2];
      this_tunableEnvironment_f18[2] = FUN->contents.tunableEnvironment.f18[2];
      for (i27 = 0; i27 < 9; i27++) {
        this_tunableEnvironment_f19[i27] = FUN->
          contents.tunableEnvironment.f19[i27];
        this_tunableEnvironment_f20[i27] = FUN->
          contents.tunableEnvironment.f20[i27];
      }

      for (i27 = 0; i27 < 81; i27++) {
        this_tunableEnvironment_f21[i27] = FUN->
          contents.tunableEnvironment.f21[i27];
      }

      this_tunableEnvironment_f22[0] = FUN->contents.tunableEnvironment.f22[0];
      this_tunableEnvironment_f23[0] = FUN->contents.tunableEnvironment.f23[0];
      this_tunableEnvironment_f24[0] = FUN->contents.tunableEnvironment.f24[0];
      this_tunableEnvironment_f22[1] = FUN->contents.tunableEnvironment.f22[1];
      this_tunableEnvironment_f23[1] = FUN->contents.tunableEnvironment.f23[1];
      this_tunableEnvironment_f24[1] = FUN->contents.tunableEnvironment.f24[1];
      this_tunableEnvironment_f22[2] = FUN->contents.tunableEnvironment.f22[2];
      this_tunableEnvironment_f23[2] = FUN->contents.tunableEnvironment.f23[2];
      this_tunableEnvironment_f24[2] = FUN->contents.tunableEnvironment.f24[2];
      for (i27 = 0; i27 < 9; i27++) {
        this_tunableEnvironment_f25[i27] = FUN->
          contents.tunableEnvironment.f25[i27];
        this_tunableEnvironment_f26[i27] = FUN->
          contents.tunableEnvironment.f26[i27];
      }

      for (i27 = 0; i27 < 81; i27++) {
        this_tunableEnvironment_f27[i27] = FUN->
          contents.tunableEnvironment.f27[i27];
      }

      this_tunableEnvironment_f28[0] = FUN->contents.tunableEnvironment.f28[0];
      this_tunableEnvironment_f29[0] = FUN->contents.tunableEnvironment.f29[0];
      this_tunableEnvironment_f30[0] = FUN->contents.tunableEnvironment.f30[0];
      this_tunableEnvironment_f28[1] = FUN->contents.tunableEnvironment.f28[1];
      this_tunableEnvironment_f29[1] = FUN->contents.tunableEnvironment.f29[1];
      this_tunableEnvironment_f30[1] = FUN->contents.tunableEnvironment.f30[1];
      this_tunableEnvironment_f28[2] = FUN->contents.tunableEnvironment.f28[2];
      this_tunableEnvironment_f29[2] = FUN->contents.tunableEnvironment.f29[2];
      this_tunableEnvironment_f30[2] = FUN->contents.tunableEnvironment.f30[2];
      for (i27 = 0; i27 < 9; i27++) {
        this_tunableEnvironment_f31[i27] = FUN->
          contents.tunableEnvironment.f31[i27];
        this_tunableEnvironment_f32[i27] = FUN->
          contents.tunableEnvironment.f32[i27];
      }

      for (i27 = 0; i27 < 25; i27++) {
        this_tunableEnvironment_f33[i27] = FUN->
          contents.tunableEnvironment.f33[i27];
      }

      this_tunableEnvironment_f34 = FUN->contents.tunableEnvironment.f34;
      i27 = this_tunableEnvironment_f35->size[0] *
        this_tunableEnvironment_f35->size[1];
      this_tunableEnvironment_f35->size[0] =
        FUN->contents.tunableEnvironment.f35->size[0];
      this_tunableEnvironment_f35->size[1] =
        FUN->contents.tunableEnvironment.f35->size[1];
      emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f35, i27,
        &nc_emlrtRTEI);
      loop_ub = FUN->contents.tunableEnvironment.f35->size[0] *
        FUN->contents.tunableEnvironment.f35->size[1];
      for (i27 = 0; i27 < loop_ub; i27++) {
        this_tunableEnvironment_f35->data[i27] =
          FUN->contents.tunableEnvironment.f35->data[i27];
      }

      i27 = this_tunableEnvironment_f36->size[0] *
        this_tunableEnvironment_f36->size[1];
      this_tunableEnvironment_f36->size[0] =
        FUN->contents.tunableEnvironment.f36->size[0];
      this_tunableEnvironment_f36->size[1] =
        FUN->contents.tunableEnvironment.f36->size[1];
      emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f36, i27,
        &nc_emlrtRTEI);
      loop_ub = FUN->contents.tunableEnvironment.f36->size[0] *
        FUN->contents.tunableEnvironment.f36->size[1];
      for (i27 = 0; i27 < loop_ub; i27++) {
        this_tunableEnvironment_f36->data[i27] =
          FUN->contents.tunableEnvironment.f36->data[i27];
      }

      i27 = this_tunableEnvironment_f37->size[0];
      this_tunableEnvironment_f37->size[0] =
        FUN->contents.tunableEnvironment.f37->size[0];
      emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f37, i27,
        &nc_emlrtRTEI);
      loop_ub = FUN->contents.tunableEnvironment.f37->size[0];
      for (i27 = 0; i27 < loop_ub; i27++) {
        this_tunableEnvironment_f37->data[i27] =
          FUN->contents.tunableEnvironment.f37->data[i27];
      }

      for (i27 = 0; i27 < 900; i27++) {
        this_tunableEnvironment_f38[i27] = FUN->
          contents.tunableEnvironment.f38[i27];
        this_tunableEnvironment_f39[i27] = FUN->
          contents.tunableEnvironment.f39[i27];
        this_tunableEnvironment_f40[i27] = FUN->
          contents.tunableEnvironment.f40[i27];
      }

      this_tunableEnvironment_f41[0] = FUN->contents.tunableEnvironment.f41[0];
      this_tunableEnvironment_f41[1] = FUN->contents.tunableEnvironment.f41[1];
      this_tunableEnvironment_f41[2] = FUN->contents.tunableEnvironment.f41[2];
      i27 = this_tunableEnvironment_f43->size[0] *
        this_tunableEnvironment_f43->size[1];
      this_tunableEnvironment_f43->size[0] = 1;
      this_tunableEnvironment_f43->size[1] =
        FUN->contents.tunableEnvironment.f43->size[1];
      emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f43, i27,
        &nc_emlrtRTEI);
      loop_ub = FUN->contents.tunableEnvironment.f43->size[0] *
        FUN->contents.tunableEnvironment.f43->size[1];
      for (i27 = 0; i27 < loop_ub; i27++) {
        this_tunableEnvironment_f43->data[i27] =
          FUN->contents.tunableEnvironment.f43->data[i27];
      }

      i27 = this_tunableEnvironment_f44->size[0] *
        this_tunableEnvironment_f44->size[1];
      this_tunableEnvironment_f44->size[0] = 1;
      this_tunableEnvironment_f44->size[1] =
        FUN->contents.tunableEnvironment.f44->size[1];
      emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f44, i27,
        &nc_emlrtRTEI);
      loop_ub = FUN->contents.tunableEnvironment.f44->size[0] *
        FUN->contents.tunableEnvironment.f44->size[1];
      for (i27 = 0; i27 < loop_ub; i27++) {
        this_tunableEnvironment_f44->data[i27] =
          FUN->contents.tunableEnvironment.f44->data[i27];
      }

      b_st.site = &ic_emlrtRSI;
      c_st.site = &b_emlrtRSI;
      stress_I(&c_st, x, this_tunableEnvironment_f1, this_tunableEnvironment_f2,
               this_tunableEnvironment_f3, this_tunableEnvironment_f4,
               this_tunableEnvironment_f5, this_tunableEnvironment_f6,
               this_tunableEnvironment_f7, this_tunableEnvironment_f8,
               this_tunableEnvironment_f9, this_tunableEnvironment_f10,
               this_tunableEnvironment_f11, this_tunableEnvironment_f12,
               this_tunableEnvironment_f13, this_tunableEnvironment_f14,
               this_tunableEnvironment_f15, this_tunableEnvironment_f16,
               this_tunableEnvironment_f17, this_tunableEnvironment_f18,
               this_tunableEnvironment_f19, this_tunableEnvironment_f20,
               this_tunableEnvironment_f21, this_tunableEnvironment_f22,
               this_tunableEnvironment_f23, this_tunableEnvironment_f24,
               this_tunableEnvironment_f25, this_tunableEnvironment_f26,
               this_tunableEnvironment_f27, this_tunableEnvironment_f28,
               this_tunableEnvironment_f29, this_tunableEnvironment_f30,
               this_tunableEnvironment_f31, this_tunableEnvironment_f32,
               this_tunableEnvironment_f33, this_tunableEnvironment_f34,
               this_tunableEnvironment_f35, this_tunableEnvironment_f36,
               this_tunableEnvironment_f37, this_tunableEnvironment_f38,
               this_tunableEnvironment_f39, this_tunableEnvironment_f40,
               this_tunableEnvironment_f41, FUN->contents.tunableEnvironment.f42,
               this_tunableEnvironment_f43, this_tunableEnvironment_f44, b_fx);
      i27 = b_fx->size[1];
      if (5000 < i27) {
        emlrtDimSizeGeqCheckR2012b(5000, i27, &l_emlrtECI, sp);
      }

      i27 = fx->size[0] * fx->size[1];
      fx->size[0] = 6;
      fx->size[1] = b_fx->size[1];
      emxEnsureCapacity_real_T(sp, fx, i27, &pc_emlrtRTEI);
      loop_ub = b_fx->size[0] * b_fx->size[1];
      for (i27 = 0; i27 < loop_ub; i27++) {
        fx->data[i27] = b_fx->data[i27];
      }
    }
  }

  emxFree_real_T(&this_tunableEnvironment_f44);
  emxFree_real_T(&this_tunableEnvironment_f43);
  emxFree_real_T(&this_tunableEnvironment_f37);
  emxFree_real_T(&this_tunableEnvironment_f36);
  emxFree_real_T(&this_tunableEnvironment_f35);
  emxFree_real_T(&b_fx);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static void c_evalFun(const emlrtStack *sp, coder_internal_ref_1 *FIRSTFUNEVAL,
                      const coder_internal_ref *FUN, const emxArray_real_T *x,
                      emxArray_real_T *fx, boolean_T *too_close)
{
  emxArray_real_T *b_fx;
  emxArray_real_T *this_tunableEnvironment_f35;
  emxArray_real_T *this_tunableEnvironment_f36;
  emxArray_real_T *this_tunableEnvironment_f37;
  emxArray_real_T *this_tunableEnvironment_f43;
  emxArray_real_T *this_tunableEnvironment_f44;
  real_T this_tunableEnvironment_f1;
  real_T this_tunableEnvironment_f2;
  int32_T i45;
  creal_T this_tunableEnvironment_f4[3];
  real_T this_tunableEnvironment_f3[81];
  real_T this_tunableEnvironment_f5[3];
  real_T this_tunableEnvironment_f6[3];
  creal_T this_tunableEnvironment_f7[9];
  creal_T this_tunableEnvironment_f8[9];
  creal_T this_tunableEnvironment_f10[3];
  real_T this_tunableEnvironment_f9[81];
  real_T this_tunableEnvironment_f11[3];
  real_T this_tunableEnvironment_f12[3];
  creal_T this_tunableEnvironment_f13[9];
  creal_T this_tunableEnvironment_f14[9];
  creal_T this_tunableEnvironment_f16[3];
  real_T this_tunableEnvironment_f15[81];
  real_T this_tunableEnvironment_f17[3];
  real_T this_tunableEnvironment_f18[3];
  creal_T this_tunableEnvironment_f19[9];
  creal_T this_tunableEnvironment_f20[9];
  creal_T this_tunableEnvironment_f22[3];
  real_T this_tunableEnvironment_f21[81];
  real_T this_tunableEnvironment_f23[3];
  real_T this_tunableEnvironment_f24[3];
  creal_T this_tunableEnvironment_f25[9];
  creal_T this_tunableEnvironment_f26[9];
  creal_T this_tunableEnvironment_f28[3];
  real_T this_tunableEnvironment_f27[81];
  real_T this_tunableEnvironment_f29[3];
  real_T this_tunableEnvironment_f30[3];
  creal_T this_tunableEnvironment_f31[9];
  creal_T this_tunableEnvironment_f32[9];
  real_T this_tunableEnvironment_f34;
  real_T this_tunableEnvironment_f33[25];
  int32_T loop_ub;
  real_T this_tunableEnvironment_f41[3];
  real_T this_tunableEnvironment_f38[900];
  real_T this_tunableEnvironment_f39[900];
  real_T this_tunableEnvironment_f40[900];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /* ==Nested functions========================================================= */
  /*  Evaluate the integrand. */
  emxInit_real_T(sp, &b_fx, 2, &rc_emlrtRTEI, true);
  emxInit_real_T(sp, &this_tunableEnvironment_f35, 2, &nc_emlrtRTEI, true);
  emxInit_real_T(sp, &this_tunableEnvironment_f36, 2, &nc_emlrtRTEI, true);
  emxInit_real_T(sp, &this_tunableEnvironment_f37, 1, &nc_emlrtRTEI, true);
  emxInit_real_T(sp, &this_tunableEnvironment_f43, 2, &nc_emlrtRTEI, true);
  emxInit_real_T(sp, &this_tunableEnvironment_f44, 2, &nc_emlrtRTEI, true);
  if (FIRSTFUNEVAL->contents) {
    /*  Don't check the closeness of the mesh on the first iteration. */
    *too_close = false;
    st.site = &rc_emlrtRSI;
    this_tunableEnvironment_f1 = FUN->contents.tunableEnvironment.f1;
    this_tunableEnvironment_f2 = FUN->contents.tunableEnvironment.f2;
    for (i45 = 0; i45 < 81; i45++) {
      this_tunableEnvironment_f3[i45] = FUN->contents.tunableEnvironment.f3[i45];
    }

    this_tunableEnvironment_f4[0] = FUN->contents.tunableEnvironment.f4[0];
    this_tunableEnvironment_f5[0] = FUN->contents.tunableEnvironment.f5[0];
    this_tunableEnvironment_f6[0] = FUN->contents.tunableEnvironment.f6[0];
    this_tunableEnvironment_f4[1] = FUN->contents.tunableEnvironment.f4[1];
    this_tunableEnvironment_f5[1] = FUN->contents.tunableEnvironment.f5[1];
    this_tunableEnvironment_f6[1] = FUN->contents.tunableEnvironment.f6[1];
    this_tunableEnvironment_f4[2] = FUN->contents.tunableEnvironment.f4[2];
    this_tunableEnvironment_f5[2] = FUN->contents.tunableEnvironment.f5[2];
    this_tunableEnvironment_f6[2] = FUN->contents.tunableEnvironment.f6[2];
    for (i45 = 0; i45 < 9; i45++) {
      this_tunableEnvironment_f7[i45] = FUN->contents.tunableEnvironment.f7[i45];
      this_tunableEnvironment_f8[i45] = FUN->contents.tunableEnvironment.f8[i45];
    }

    for (i45 = 0; i45 < 81; i45++) {
      this_tunableEnvironment_f9[i45] = FUN->contents.tunableEnvironment.f9[i45];
    }

    this_tunableEnvironment_f10[0] = FUN->contents.tunableEnvironment.f10[0];
    this_tunableEnvironment_f11[0] = FUN->contents.tunableEnvironment.f11[0];
    this_tunableEnvironment_f12[0] = FUN->contents.tunableEnvironment.f12[0];
    this_tunableEnvironment_f10[1] = FUN->contents.tunableEnvironment.f10[1];
    this_tunableEnvironment_f11[1] = FUN->contents.tunableEnvironment.f11[1];
    this_tunableEnvironment_f12[1] = FUN->contents.tunableEnvironment.f12[1];
    this_tunableEnvironment_f10[2] = FUN->contents.tunableEnvironment.f10[2];
    this_tunableEnvironment_f11[2] = FUN->contents.tunableEnvironment.f11[2];
    this_tunableEnvironment_f12[2] = FUN->contents.tunableEnvironment.f12[2];
    for (i45 = 0; i45 < 9; i45++) {
      this_tunableEnvironment_f13[i45] = FUN->
        contents.tunableEnvironment.f13[i45];
      this_tunableEnvironment_f14[i45] = FUN->
        contents.tunableEnvironment.f14[i45];
    }

    for (i45 = 0; i45 < 81; i45++) {
      this_tunableEnvironment_f15[i45] = FUN->
        contents.tunableEnvironment.f15[i45];
    }

    this_tunableEnvironment_f16[0] = FUN->contents.tunableEnvironment.f16[0];
    this_tunableEnvironment_f17[0] = FUN->contents.tunableEnvironment.f17[0];
    this_tunableEnvironment_f18[0] = FUN->contents.tunableEnvironment.f18[0];
    this_tunableEnvironment_f16[1] = FUN->contents.tunableEnvironment.f16[1];
    this_tunableEnvironment_f17[1] = FUN->contents.tunableEnvironment.f17[1];
    this_tunableEnvironment_f18[1] = FUN->contents.tunableEnvironment.f18[1];
    this_tunableEnvironment_f16[2] = FUN->contents.tunableEnvironment.f16[2];
    this_tunableEnvironment_f17[2] = FUN->contents.tunableEnvironment.f17[2];
    this_tunableEnvironment_f18[2] = FUN->contents.tunableEnvironment.f18[2];
    for (i45 = 0; i45 < 9; i45++) {
      this_tunableEnvironment_f19[i45] = FUN->
        contents.tunableEnvironment.f19[i45];
      this_tunableEnvironment_f20[i45] = FUN->
        contents.tunableEnvironment.f20[i45];
    }

    for (i45 = 0; i45 < 81; i45++) {
      this_tunableEnvironment_f21[i45] = FUN->
        contents.tunableEnvironment.f21[i45];
    }

    this_tunableEnvironment_f22[0] = FUN->contents.tunableEnvironment.f22[0];
    this_tunableEnvironment_f23[0] = FUN->contents.tunableEnvironment.f23[0];
    this_tunableEnvironment_f24[0] = FUN->contents.tunableEnvironment.f24[0];
    this_tunableEnvironment_f22[1] = FUN->contents.tunableEnvironment.f22[1];
    this_tunableEnvironment_f23[1] = FUN->contents.tunableEnvironment.f23[1];
    this_tunableEnvironment_f24[1] = FUN->contents.tunableEnvironment.f24[1];
    this_tunableEnvironment_f22[2] = FUN->contents.tunableEnvironment.f22[2];
    this_tunableEnvironment_f23[2] = FUN->contents.tunableEnvironment.f23[2];
    this_tunableEnvironment_f24[2] = FUN->contents.tunableEnvironment.f24[2];
    for (i45 = 0; i45 < 9; i45++) {
      this_tunableEnvironment_f25[i45] = FUN->
        contents.tunableEnvironment.f25[i45];
      this_tunableEnvironment_f26[i45] = FUN->
        contents.tunableEnvironment.f26[i45];
    }

    for (i45 = 0; i45 < 81; i45++) {
      this_tunableEnvironment_f27[i45] = FUN->
        contents.tunableEnvironment.f27[i45];
    }

    this_tunableEnvironment_f28[0] = FUN->contents.tunableEnvironment.f28[0];
    this_tunableEnvironment_f29[0] = FUN->contents.tunableEnvironment.f29[0];
    this_tunableEnvironment_f30[0] = FUN->contents.tunableEnvironment.f30[0];
    this_tunableEnvironment_f28[1] = FUN->contents.tunableEnvironment.f28[1];
    this_tunableEnvironment_f29[1] = FUN->contents.tunableEnvironment.f29[1];
    this_tunableEnvironment_f30[1] = FUN->contents.tunableEnvironment.f30[1];
    this_tunableEnvironment_f28[2] = FUN->contents.tunableEnvironment.f28[2];
    this_tunableEnvironment_f29[2] = FUN->contents.tunableEnvironment.f29[2];
    this_tunableEnvironment_f30[2] = FUN->contents.tunableEnvironment.f30[2];
    for (i45 = 0; i45 < 9; i45++) {
      this_tunableEnvironment_f31[i45] = FUN->
        contents.tunableEnvironment.f31[i45];
      this_tunableEnvironment_f32[i45] = FUN->
        contents.tunableEnvironment.f32[i45];
    }

    for (i45 = 0; i45 < 25; i45++) {
      this_tunableEnvironment_f33[i45] = FUN->
        contents.tunableEnvironment.f33[i45];
    }

    this_tunableEnvironment_f34 = FUN->contents.tunableEnvironment.f34;
    i45 = this_tunableEnvironment_f35->size[0] *
      this_tunableEnvironment_f35->size[1];
    this_tunableEnvironment_f35->size[0] = FUN->
      contents.tunableEnvironment.f35->size[0];
    this_tunableEnvironment_f35->size[1] = FUN->
      contents.tunableEnvironment.f35->size[1];
    emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f35, i45,
      &oc_emlrtRTEI);
    loop_ub = FUN->contents.tunableEnvironment.f35->size[0] *
      FUN->contents.tunableEnvironment.f35->size[1];
    for (i45 = 0; i45 < loop_ub; i45++) {
      this_tunableEnvironment_f35->data[i45] =
        FUN->contents.tunableEnvironment.f35->data[i45];
    }

    i45 = this_tunableEnvironment_f36->size[0] *
      this_tunableEnvironment_f36->size[1];
    this_tunableEnvironment_f36->size[0] = FUN->
      contents.tunableEnvironment.f36->size[0];
    this_tunableEnvironment_f36->size[1] = FUN->
      contents.tunableEnvironment.f36->size[1];
    emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f36, i45,
      &oc_emlrtRTEI);
    loop_ub = FUN->contents.tunableEnvironment.f36->size[0] *
      FUN->contents.tunableEnvironment.f36->size[1];
    for (i45 = 0; i45 < loop_ub; i45++) {
      this_tunableEnvironment_f36->data[i45] =
        FUN->contents.tunableEnvironment.f36->data[i45];
    }

    i45 = this_tunableEnvironment_f37->size[0];
    this_tunableEnvironment_f37->size[0] = FUN->
      contents.tunableEnvironment.f37->size[0];
    emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f37, i45,
      &oc_emlrtRTEI);
    loop_ub = FUN->contents.tunableEnvironment.f37->size[0];
    for (i45 = 0; i45 < loop_ub; i45++) {
      this_tunableEnvironment_f37->data[i45] =
        FUN->contents.tunableEnvironment.f37->data[i45];
    }

    for (i45 = 0; i45 < 900; i45++) {
      this_tunableEnvironment_f38[i45] = FUN->
        contents.tunableEnvironment.f38[i45];
      this_tunableEnvironment_f39[i45] = FUN->
        contents.tunableEnvironment.f39[i45];
      this_tunableEnvironment_f40[i45] = FUN->
        contents.tunableEnvironment.f40[i45];
    }

    this_tunableEnvironment_f41[0] = FUN->contents.tunableEnvironment.f41[0];
    this_tunableEnvironment_f41[1] = FUN->contents.tunableEnvironment.f41[1];
    this_tunableEnvironment_f41[2] = FUN->contents.tunableEnvironment.f41[2];
    i45 = this_tunableEnvironment_f43->size[0] *
      this_tunableEnvironment_f43->size[1];
    this_tunableEnvironment_f43->size[0] = 1;
    this_tunableEnvironment_f43->size[1] = FUN->
      contents.tunableEnvironment.f43->size[1];
    emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f43, i45,
      &oc_emlrtRTEI);
    loop_ub = FUN->contents.tunableEnvironment.f43->size[0] *
      FUN->contents.tunableEnvironment.f43->size[1];
    for (i45 = 0; i45 < loop_ub; i45++) {
      this_tunableEnvironment_f43->data[i45] =
        FUN->contents.tunableEnvironment.f43->data[i45];
    }

    i45 = this_tunableEnvironment_f44->size[0] *
      this_tunableEnvironment_f44->size[1];
    this_tunableEnvironment_f44->size[0] = 1;
    this_tunableEnvironment_f44->size[1] = FUN->
      contents.tunableEnvironment.f44->size[1];
    emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f44, i45,
      &oc_emlrtRTEI);
    loop_ub = FUN->contents.tunableEnvironment.f44->size[0] *
      FUN->contents.tunableEnvironment.f44->size[1];
    for (i45 = 0; i45 < loop_ub; i45++) {
      this_tunableEnvironment_f44->data[i45] =
        FUN->contents.tunableEnvironment.f44->data[i45];
    }

    b_st.site = &ic_emlrtRSI;
    c_st.site = &c_emlrtRSI;
    stress_GB(&c_st, x, this_tunableEnvironment_f1, this_tunableEnvironment_f2,
              this_tunableEnvironment_f3, this_tunableEnvironment_f4,
              this_tunableEnvironment_f5, this_tunableEnvironment_f6,
              this_tunableEnvironment_f7, this_tunableEnvironment_f8,
              this_tunableEnvironment_f9, this_tunableEnvironment_f10,
              this_tunableEnvironment_f11, this_tunableEnvironment_f12,
              this_tunableEnvironment_f13, this_tunableEnvironment_f14,
              this_tunableEnvironment_f15, this_tunableEnvironment_f16,
              this_tunableEnvironment_f17, this_tunableEnvironment_f18,
              this_tunableEnvironment_f19, this_tunableEnvironment_f20,
              this_tunableEnvironment_f21, this_tunableEnvironment_f22,
              this_tunableEnvironment_f23, this_tunableEnvironment_f24,
              this_tunableEnvironment_f25, this_tunableEnvironment_f26,
              this_tunableEnvironment_f27, this_tunableEnvironment_f28,
              this_tunableEnvironment_f29, this_tunableEnvironment_f30,
              this_tunableEnvironment_f31, this_tunableEnvironment_f32,
              this_tunableEnvironment_f33, this_tunableEnvironment_f34,
              this_tunableEnvironment_f35, this_tunableEnvironment_f36,
              this_tunableEnvironment_f37, this_tunableEnvironment_f38,
              this_tunableEnvironment_f39, this_tunableEnvironment_f40,
              this_tunableEnvironment_f41, FUN->contents.tunableEnvironment.f42,
              this_tunableEnvironment_f43, this_tunableEnvironment_f44, b_fx);
    i45 = b_fx->size[1];
    if (5000 < i45) {
      emlrtDimSizeGeqCheckR2012b(5000, i45, &k_emlrtECI, sp);
    }

    i45 = fx->size[0] * fx->size[1];
    fx->size[0] = 6;
    fx->size[1] = b_fx->size[1];
    emxEnsureCapacity_real_T(sp, fx, i45, &qc_emlrtRTEI);
    loop_ub = b_fx->size[0] * b_fx->size[1];
    for (i45 = 0; i45 < loop_ub; i45++) {
      fx->data[i45] = b_fx->data[i45];
    }

    FIRSTFUNEVAL->contents = false;
  } else {
    st.site = &sc_emlrtRSI;
    *too_close = checkSpacing(&st, x);
    if (*too_close) {
      fx->size[0] = 6;
      fx->size[1] = 0;
    } else {
      st.site = &tc_emlrtRSI;
      this_tunableEnvironment_f1 = FUN->contents.tunableEnvironment.f1;
      this_tunableEnvironment_f2 = FUN->contents.tunableEnvironment.f2;
      for (i45 = 0; i45 < 81; i45++) {
        this_tunableEnvironment_f3[i45] = FUN->
          contents.tunableEnvironment.f3[i45];
      }

      this_tunableEnvironment_f4[0] = FUN->contents.tunableEnvironment.f4[0];
      this_tunableEnvironment_f5[0] = FUN->contents.tunableEnvironment.f5[0];
      this_tunableEnvironment_f6[0] = FUN->contents.tunableEnvironment.f6[0];
      this_tunableEnvironment_f4[1] = FUN->contents.tunableEnvironment.f4[1];
      this_tunableEnvironment_f5[1] = FUN->contents.tunableEnvironment.f5[1];
      this_tunableEnvironment_f6[1] = FUN->contents.tunableEnvironment.f6[1];
      this_tunableEnvironment_f4[2] = FUN->contents.tunableEnvironment.f4[2];
      this_tunableEnvironment_f5[2] = FUN->contents.tunableEnvironment.f5[2];
      this_tunableEnvironment_f6[2] = FUN->contents.tunableEnvironment.f6[2];
      for (i45 = 0; i45 < 9; i45++) {
        this_tunableEnvironment_f7[i45] = FUN->
          contents.tunableEnvironment.f7[i45];
        this_tunableEnvironment_f8[i45] = FUN->
          contents.tunableEnvironment.f8[i45];
      }

      for (i45 = 0; i45 < 81; i45++) {
        this_tunableEnvironment_f9[i45] = FUN->
          contents.tunableEnvironment.f9[i45];
      }

      this_tunableEnvironment_f10[0] = FUN->contents.tunableEnvironment.f10[0];
      this_tunableEnvironment_f11[0] = FUN->contents.tunableEnvironment.f11[0];
      this_tunableEnvironment_f12[0] = FUN->contents.tunableEnvironment.f12[0];
      this_tunableEnvironment_f10[1] = FUN->contents.tunableEnvironment.f10[1];
      this_tunableEnvironment_f11[1] = FUN->contents.tunableEnvironment.f11[1];
      this_tunableEnvironment_f12[1] = FUN->contents.tunableEnvironment.f12[1];
      this_tunableEnvironment_f10[2] = FUN->contents.tunableEnvironment.f10[2];
      this_tunableEnvironment_f11[2] = FUN->contents.tunableEnvironment.f11[2];
      this_tunableEnvironment_f12[2] = FUN->contents.tunableEnvironment.f12[2];
      for (i45 = 0; i45 < 9; i45++) {
        this_tunableEnvironment_f13[i45] = FUN->
          contents.tunableEnvironment.f13[i45];
        this_tunableEnvironment_f14[i45] = FUN->
          contents.tunableEnvironment.f14[i45];
      }

      for (i45 = 0; i45 < 81; i45++) {
        this_tunableEnvironment_f15[i45] = FUN->
          contents.tunableEnvironment.f15[i45];
      }

      this_tunableEnvironment_f16[0] = FUN->contents.tunableEnvironment.f16[0];
      this_tunableEnvironment_f17[0] = FUN->contents.tunableEnvironment.f17[0];
      this_tunableEnvironment_f18[0] = FUN->contents.tunableEnvironment.f18[0];
      this_tunableEnvironment_f16[1] = FUN->contents.tunableEnvironment.f16[1];
      this_tunableEnvironment_f17[1] = FUN->contents.tunableEnvironment.f17[1];
      this_tunableEnvironment_f18[1] = FUN->contents.tunableEnvironment.f18[1];
      this_tunableEnvironment_f16[2] = FUN->contents.tunableEnvironment.f16[2];
      this_tunableEnvironment_f17[2] = FUN->contents.tunableEnvironment.f17[2];
      this_tunableEnvironment_f18[2] = FUN->contents.tunableEnvironment.f18[2];
      for (i45 = 0; i45 < 9; i45++) {
        this_tunableEnvironment_f19[i45] = FUN->
          contents.tunableEnvironment.f19[i45];
        this_tunableEnvironment_f20[i45] = FUN->
          contents.tunableEnvironment.f20[i45];
      }

      for (i45 = 0; i45 < 81; i45++) {
        this_tunableEnvironment_f21[i45] = FUN->
          contents.tunableEnvironment.f21[i45];
      }

      this_tunableEnvironment_f22[0] = FUN->contents.tunableEnvironment.f22[0];
      this_tunableEnvironment_f23[0] = FUN->contents.tunableEnvironment.f23[0];
      this_tunableEnvironment_f24[0] = FUN->contents.tunableEnvironment.f24[0];
      this_tunableEnvironment_f22[1] = FUN->contents.tunableEnvironment.f22[1];
      this_tunableEnvironment_f23[1] = FUN->contents.tunableEnvironment.f23[1];
      this_tunableEnvironment_f24[1] = FUN->contents.tunableEnvironment.f24[1];
      this_tunableEnvironment_f22[2] = FUN->contents.tunableEnvironment.f22[2];
      this_tunableEnvironment_f23[2] = FUN->contents.tunableEnvironment.f23[2];
      this_tunableEnvironment_f24[2] = FUN->contents.tunableEnvironment.f24[2];
      for (i45 = 0; i45 < 9; i45++) {
        this_tunableEnvironment_f25[i45] = FUN->
          contents.tunableEnvironment.f25[i45];
        this_tunableEnvironment_f26[i45] = FUN->
          contents.tunableEnvironment.f26[i45];
      }

      for (i45 = 0; i45 < 81; i45++) {
        this_tunableEnvironment_f27[i45] = FUN->
          contents.tunableEnvironment.f27[i45];
      }

      this_tunableEnvironment_f28[0] = FUN->contents.tunableEnvironment.f28[0];
      this_tunableEnvironment_f29[0] = FUN->contents.tunableEnvironment.f29[0];
      this_tunableEnvironment_f30[0] = FUN->contents.tunableEnvironment.f30[0];
      this_tunableEnvironment_f28[1] = FUN->contents.tunableEnvironment.f28[1];
      this_tunableEnvironment_f29[1] = FUN->contents.tunableEnvironment.f29[1];
      this_tunableEnvironment_f30[1] = FUN->contents.tunableEnvironment.f30[1];
      this_tunableEnvironment_f28[2] = FUN->contents.tunableEnvironment.f28[2];
      this_tunableEnvironment_f29[2] = FUN->contents.tunableEnvironment.f29[2];
      this_tunableEnvironment_f30[2] = FUN->contents.tunableEnvironment.f30[2];
      for (i45 = 0; i45 < 9; i45++) {
        this_tunableEnvironment_f31[i45] = FUN->
          contents.tunableEnvironment.f31[i45];
        this_tunableEnvironment_f32[i45] = FUN->
          contents.tunableEnvironment.f32[i45];
      }

      for (i45 = 0; i45 < 25; i45++) {
        this_tunableEnvironment_f33[i45] = FUN->
          contents.tunableEnvironment.f33[i45];
      }

      this_tunableEnvironment_f34 = FUN->contents.tunableEnvironment.f34;
      i45 = this_tunableEnvironment_f35->size[0] *
        this_tunableEnvironment_f35->size[1];
      this_tunableEnvironment_f35->size[0] =
        FUN->contents.tunableEnvironment.f35->size[0];
      this_tunableEnvironment_f35->size[1] =
        FUN->contents.tunableEnvironment.f35->size[1];
      emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f35, i45,
        &nc_emlrtRTEI);
      loop_ub = FUN->contents.tunableEnvironment.f35->size[0] *
        FUN->contents.tunableEnvironment.f35->size[1];
      for (i45 = 0; i45 < loop_ub; i45++) {
        this_tunableEnvironment_f35->data[i45] =
          FUN->contents.tunableEnvironment.f35->data[i45];
      }

      i45 = this_tunableEnvironment_f36->size[0] *
        this_tunableEnvironment_f36->size[1];
      this_tunableEnvironment_f36->size[0] =
        FUN->contents.tunableEnvironment.f36->size[0];
      this_tunableEnvironment_f36->size[1] =
        FUN->contents.tunableEnvironment.f36->size[1];
      emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f36, i45,
        &nc_emlrtRTEI);
      loop_ub = FUN->contents.tunableEnvironment.f36->size[0] *
        FUN->contents.tunableEnvironment.f36->size[1];
      for (i45 = 0; i45 < loop_ub; i45++) {
        this_tunableEnvironment_f36->data[i45] =
          FUN->contents.tunableEnvironment.f36->data[i45];
      }

      i45 = this_tunableEnvironment_f37->size[0];
      this_tunableEnvironment_f37->size[0] =
        FUN->contents.tunableEnvironment.f37->size[0];
      emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f37, i45,
        &nc_emlrtRTEI);
      loop_ub = FUN->contents.tunableEnvironment.f37->size[0];
      for (i45 = 0; i45 < loop_ub; i45++) {
        this_tunableEnvironment_f37->data[i45] =
          FUN->contents.tunableEnvironment.f37->data[i45];
      }

      for (i45 = 0; i45 < 900; i45++) {
        this_tunableEnvironment_f38[i45] = FUN->
          contents.tunableEnvironment.f38[i45];
        this_tunableEnvironment_f39[i45] = FUN->
          contents.tunableEnvironment.f39[i45];
        this_tunableEnvironment_f40[i45] = FUN->
          contents.tunableEnvironment.f40[i45];
      }

      this_tunableEnvironment_f41[0] = FUN->contents.tunableEnvironment.f41[0];
      this_tunableEnvironment_f41[1] = FUN->contents.tunableEnvironment.f41[1];
      this_tunableEnvironment_f41[2] = FUN->contents.tunableEnvironment.f41[2];
      i45 = this_tunableEnvironment_f43->size[0] *
        this_tunableEnvironment_f43->size[1];
      this_tunableEnvironment_f43->size[0] = 1;
      this_tunableEnvironment_f43->size[1] =
        FUN->contents.tunableEnvironment.f43->size[1];
      emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f43, i45,
        &nc_emlrtRTEI);
      loop_ub = FUN->contents.tunableEnvironment.f43->size[0] *
        FUN->contents.tunableEnvironment.f43->size[1];
      for (i45 = 0; i45 < loop_ub; i45++) {
        this_tunableEnvironment_f43->data[i45] =
          FUN->contents.tunableEnvironment.f43->data[i45];
      }

      i45 = this_tunableEnvironment_f44->size[0] *
        this_tunableEnvironment_f44->size[1];
      this_tunableEnvironment_f44->size[0] = 1;
      this_tunableEnvironment_f44->size[1] =
        FUN->contents.tunableEnvironment.f44->size[1];
      emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f44, i45,
        &nc_emlrtRTEI);
      loop_ub = FUN->contents.tunableEnvironment.f44->size[0] *
        FUN->contents.tunableEnvironment.f44->size[1];
      for (i45 = 0; i45 < loop_ub; i45++) {
        this_tunableEnvironment_f44->data[i45] =
          FUN->contents.tunableEnvironment.f44->data[i45];
      }

      b_st.site = &ic_emlrtRSI;
      c_st.site = &c_emlrtRSI;
      stress_GB(&c_st, x, this_tunableEnvironment_f1, this_tunableEnvironment_f2,
                this_tunableEnvironment_f3, this_tunableEnvironment_f4,
                this_tunableEnvironment_f5, this_tunableEnvironment_f6,
                this_tunableEnvironment_f7, this_tunableEnvironment_f8,
                this_tunableEnvironment_f9, this_tunableEnvironment_f10,
                this_tunableEnvironment_f11, this_tunableEnvironment_f12,
                this_tunableEnvironment_f13, this_tunableEnvironment_f14,
                this_tunableEnvironment_f15, this_tunableEnvironment_f16,
                this_tunableEnvironment_f17, this_tunableEnvironment_f18,
                this_tunableEnvironment_f19, this_tunableEnvironment_f20,
                this_tunableEnvironment_f21, this_tunableEnvironment_f22,
                this_tunableEnvironment_f23, this_tunableEnvironment_f24,
                this_tunableEnvironment_f25, this_tunableEnvironment_f26,
                this_tunableEnvironment_f27, this_tunableEnvironment_f28,
                this_tunableEnvironment_f29, this_tunableEnvironment_f30,
                this_tunableEnvironment_f31, this_tunableEnvironment_f32,
                this_tunableEnvironment_f33, this_tunableEnvironment_f34,
                this_tunableEnvironment_f35, this_tunableEnvironment_f36,
                this_tunableEnvironment_f37, this_tunableEnvironment_f38,
                this_tunableEnvironment_f39, this_tunableEnvironment_f40,
                this_tunableEnvironment_f41,
                FUN->contents.tunableEnvironment.f42,
                this_tunableEnvironment_f43, this_tunableEnvironment_f44, b_fx);
      i45 = b_fx->size[1];
      if (5000 < i45) {
        emlrtDimSizeGeqCheckR2012b(5000, i45, &l_emlrtECI, sp);
      }

      i45 = fx->size[0] * fx->size[1];
      fx->size[0] = 6;
      fx->size[1] = b_fx->size[1];
      emxEnsureCapacity_real_T(sp, fx, i45, &pc_emlrtRTEI);
      loop_ub = b_fx->size[0] * b_fx->size[1];
      for (i45 = 0; i45 < loop_ub; i45++) {
        fx->data[i45] = b_fx->data[i45];
      }
    }
  }

  emxFree_real_T(&this_tunableEnvironment_f44);
  emxFree_real_T(&this_tunableEnvironment_f43);
  emxFree_real_T(&this_tunableEnvironment_f37);
  emxFree_real_T(&this_tunableEnvironment_f36);
  emxFree_real_T(&this_tunableEnvironment_f35);
  emxFree_real_T(&b_fx);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static void d_evalFun(const emlrtStack *sp, coder_internal_ref_1 *FIRSTFUNEVAL,
                      const coder_internal_ref *FUN, const emxArray_real_T *x,
                      emxArray_real_T *fx, boolean_T *too_close)
{
  emxArray_real_T *b_fx;
  emxArray_real_T *this_tunableEnvironment_f35;
  emxArray_real_T *this_tunableEnvironment_f36;
  emxArray_real_T *this_tunableEnvironment_f37;
  emxArray_real_T *this_tunableEnvironment_f43;
  emxArray_real_T *this_tunableEnvironment_f44;
  real_T this_tunableEnvironment_f1;
  real_T this_tunableEnvironment_f2;
  int32_T i63;
  creal_T this_tunableEnvironment_f4[3];
  real_T this_tunableEnvironment_f3[81];
  real_T this_tunableEnvironment_f5[3];
  real_T this_tunableEnvironment_f6[3];
  creal_T this_tunableEnvironment_f7[9];
  creal_T this_tunableEnvironment_f8[9];
  creal_T this_tunableEnvironment_f10[3];
  real_T this_tunableEnvironment_f9[81];
  real_T this_tunableEnvironment_f11[3];
  real_T this_tunableEnvironment_f12[3];
  creal_T this_tunableEnvironment_f13[9];
  creal_T this_tunableEnvironment_f14[9];
  creal_T this_tunableEnvironment_f16[3];
  real_T this_tunableEnvironment_f15[81];
  real_T this_tunableEnvironment_f17[3];
  real_T this_tunableEnvironment_f18[3];
  creal_T this_tunableEnvironment_f19[9];
  creal_T this_tunableEnvironment_f20[9];
  creal_T this_tunableEnvironment_f22[3];
  real_T this_tunableEnvironment_f21[81];
  real_T this_tunableEnvironment_f23[3];
  real_T this_tunableEnvironment_f24[3];
  creal_T this_tunableEnvironment_f25[9];
  creal_T this_tunableEnvironment_f26[9];
  creal_T this_tunableEnvironment_f28[3];
  real_T this_tunableEnvironment_f27[81];
  real_T this_tunableEnvironment_f29[3];
  real_T this_tunableEnvironment_f30[3];
  creal_T this_tunableEnvironment_f31[9];
  creal_T this_tunableEnvironment_f32[9];
  real_T this_tunableEnvironment_f34;
  real_T this_tunableEnvironment_f33[25];
  int32_T loop_ub;
  real_T this_tunableEnvironment_f41[3];
  real_T this_tunableEnvironment_f38[900];
  real_T this_tunableEnvironment_f39[900];
  real_T this_tunableEnvironment_f40[900];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /* ==Nested functions========================================================= */
  /*  Evaluate the integrand. */
  emxInit_real_T(sp, &b_fx, 2, &rc_emlrtRTEI, true);
  emxInit_real_T(sp, &this_tunableEnvironment_f35, 2, &nc_emlrtRTEI, true);
  emxInit_real_T(sp, &this_tunableEnvironment_f36, 2, &nc_emlrtRTEI, true);
  emxInit_real_T(sp, &this_tunableEnvironment_f37, 1, &nc_emlrtRTEI, true);
  emxInit_real_T(sp, &this_tunableEnvironment_f43, 2, &nc_emlrtRTEI, true);
  emxInit_real_T(sp, &this_tunableEnvironment_f44, 2, &nc_emlrtRTEI, true);
  if (FIRSTFUNEVAL->contents) {
    /*  Don't check the closeness of the mesh on the first iteration. */
    *too_close = false;
    st.site = &rc_emlrtRSI;
    this_tunableEnvironment_f1 = FUN->contents.tunableEnvironment.f1;
    this_tunableEnvironment_f2 = FUN->contents.tunableEnvironment.f2;
    for (i63 = 0; i63 < 81; i63++) {
      this_tunableEnvironment_f3[i63] = FUN->contents.tunableEnvironment.f3[i63];
    }

    this_tunableEnvironment_f4[0] = FUN->contents.tunableEnvironment.f4[0];
    this_tunableEnvironment_f5[0] = FUN->contents.tunableEnvironment.f5[0];
    this_tunableEnvironment_f6[0] = FUN->contents.tunableEnvironment.f6[0];
    this_tunableEnvironment_f4[1] = FUN->contents.tunableEnvironment.f4[1];
    this_tunableEnvironment_f5[1] = FUN->contents.tunableEnvironment.f5[1];
    this_tunableEnvironment_f6[1] = FUN->contents.tunableEnvironment.f6[1];
    this_tunableEnvironment_f4[2] = FUN->contents.tunableEnvironment.f4[2];
    this_tunableEnvironment_f5[2] = FUN->contents.tunableEnvironment.f5[2];
    this_tunableEnvironment_f6[2] = FUN->contents.tunableEnvironment.f6[2];
    for (i63 = 0; i63 < 9; i63++) {
      this_tunableEnvironment_f7[i63] = FUN->contents.tunableEnvironment.f7[i63];
      this_tunableEnvironment_f8[i63] = FUN->contents.tunableEnvironment.f8[i63];
    }

    for (i63 = 0; i63 < 81; i63++) {
      this_tunableEnvironment_f9[i63] = FUN->contents.tunableEnvironment.f9[i63];
    }

    this_tunableEnvironment_f10[0] = FUN->contents.tunableEnvironment.f10[0];
    this_tunableEnvironment_f11[0] = FUN->contents.tunableEnvironment.f11[0];
    this_tunableEnvironment_f12[0] = FUN->contents.tunableEnvironment.f12[0];
    this_tunableEnvironment_f10[1] = FUN->contents.tunableEnvironment.f10[1];
    this_tunableEnvironment_f11[1] = FUN->contents.tunableEnvironment.f11[1];
    this_tunableEnvironment_f12[1] = FUN->contents.tunableEnvironment.f12[1];
    this_tunableEnvironment_f10[2] = FUN->contents.tunableEnvironment.f10[2];
    this_tunableEnvironment_f11[2] = FUN->contents.tunableEnvironment.f11[2];
    this_tunableEnvironment_f12[2] = FUN->contents.tunableEnvironment.f12[2];
    for (i63 = 0; i63 < 9; i63++) {
      this_tunableEnvironment_f13[i63] = FUN->
        contents.tunableEnvironment.f13[i63];
      this_tunableEnvironment_f14[i63] = FUN->
        contents.tunableEnvironment.f14[i63];
    }

    for (i63 = 0; i63 < 81; i63++) {
      this_tunableEnvironment_f15[i63] = FUN->
        contents.tunableEnvironment.f15[i63];
    }

    this_tunableEnvironment_f16[0] = FUN->contents.tunableEnvironment.f16[0];
    this_tunableEnvironment_f17[0] = FUN->contents.tunableEnvironment.f17[0];
    this_tunableEnvironment_f18[0] = FUN->contents.tunableEnvironment.f18[0];
    this_tunableEnvironment_f16[1] = FUN->contents.tunableEnvironment.f16[1];
    this_tunableEnvironment_f17[1] = FUN->contents.tunableEnvironment.f17[1];
    this_tunableEnvironment_f18[1] = FUN->contents.tunableEnvironment.f18[1];
    this_tunableEnvironment_f16[2] = FUN->contents.tunableEnvironment.f16[2];
    this_tunableEnvironment_f17[2] = FUN->contents.tunableEnvironment.f17[2];
    this_tunableEnvironment_f18[2] = FUN->contents.tunableEnvironment.f18[2];
    for (i63 = 0; i63 < 9; i63++) {
      this_tunableEnvironment_f19[i63] = FUN->
        contents.tunableEnvironment.f19[i63];
      this_tunableEnvironment_f20[i63] = FUN->
        contents.tunableEnvironment.f20[i63];
    }

    for (i63 = 0; i63 < 81; i63++) {
      this_tunableEnvironment_f21[i63] = FUN->
        contents.tunableEnvironment.f21[i63];
    }

    this_tunableEnvironment_f22[0] = FUN->contents.tunableEnvironment.f22[0];
    this_tunableEnvironment_f23[0] = FUN->contents.tunableEnvironment.f23[0];
    this_tunableEnvironment_f24[0] = FUN->contents.tunableEnvironment.f24[0];
    this_tunableEnvironment_f22[1] = FUN->contents.tunableEnvironment.f22[1];
    this_tunableEnvironment_f23[1] = FUN->contents.tunableEnvironment.f23[1];
    this_tunableEnvironment_f24[1] = FUN->contents.tunableEnvironment.f24[1];
    this_tunableEnvironment_f22[2] = FUN->contents.tunableEnvironment.f22[2];
    this_tunableEnvironment_f23[2] = FUN->contents.tunableEnvironment.f23[2];
    this_tunableEnvironment_f24[2] = FUN->contents.tunableEnvironment.f24[2];
    for (i63 = 0; i63 < 9; i63++) {
      this_tunableEnvironment_f25[i63] = FUN->
        contents.tunableEnvironment.f25[i63];
      this_tunableEnvironment_f26[i63] = FUN->
        contents.tunableEnvironment.f26[i63];
    }

    for (i63 = 0; i63 < 81; i63++) {
      this_tunableEnvironment_f27[i63] = FUN->
        contents.tunableEnvironment.f27[i63];
    }

    this_tunableEnvironment_f28[0] = FUN->contents.tunableEnvironment.f28[0];
    this_tunableEnvironment_f29[0] = FUN->contents.tunableEnvironment.f29[0];
    this_tunableEnvironment_f30[0] = FUN->contents.tunableEnvironment.f30[0];
    this_tunableEnvironment_f28[1] = FUN->contents.tunableEnvironment.f28[1];
    this_tunableEnvironment_f29[1] = FUN->contents.tunableEnvironment.f29[1];
    this_tunableEnvironment_f30[1] = FUN->contents.tunableEnvironment.f30[1];
    this_tunableEnvironment_f28[2] = FUN->contents.tunableEnvironment.f28[2];
    this_tunableEnvironment_f29[2] = FUN->contents.tunableEnvironment.f29[2];
    this_tunableEnvironment_f30[2] = FUN->contents.tunableEnvironment.f30[2];
    for (i63 = 0; i63 < 9; i63++) {
      this_tunableEnvironment_f31[i63] = FUN->
        contents.tunableEnvironment.f31[i63];
      this_tunableEnvironment_f32[i63] = FUN->
        contents.tunableEnvironment.f32[i63];
    }

    for (i63 = 0; i63 < 25; i63++) {
      this_tunableEnvironment_f33[i63] = FUN->
        contents.tunableEnvironment.f33[i63];
    }

    this_tunableEnvironment_f34 = FUN->contents.tunableEnvironment.f34;
    i63 = this_tunableEnvironment_f35->size[0] *
      this_tunableEnvironment_f35->size[1];
    this_tunableEnvironment_f35->size[0] = FUN->
      contents.tunableEnvironment.f35->size[0];
    this_tunableEnvironment_f35->size[1] = FUN->
      contents.tunableEnvironment.f35->size[1];
    emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f35, i63,
      &oc_emlrtRTEI);
    loop_ub = FUN->contents.tunableEnvironment.f35->size[0] *
      FUN->contents.tunableEnvironment.f35->size[1];
    for (i63 = 0; i63 < loop_ub; i63++) {
      this_tunableEnvironment_f35->data[i63] =
        FUN->contents.tunableEnvironment.f35->data[i63];
    }

    i63 = this_tunableEnvironment_f36->size[0] *
      this_tunableEnvironment_f36->size[1];
    this_tunableEnvironment_f36->size[0] = FUN->
      contents.tunableEnvironment.f36->size[0];
    this_tunableEnvironment_f36->size[1] = FUN->
      contents.tunableEnvironment.f36->size[1];
    emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f36, i63,
      &oc_emlrtRTEI);
    loop_ub = FUN->contents.tunableEnvironment.f36->size[0] *
      FUN->contents.tunableEnvironment.f36->size[1];
    for (i63 = 0; i63 < loop_ub; i63++) {
      this_tunableEnvironment_f36->data[i63] =
        FUN->contents.tunableEnvironment.f36->data[i63];
    }

    i63 = this_tunableEnvironment_f37->size[0];
    this_tunableEnvironment_f37->size[0] = FUN->
      contents.tunableEnvironment.f37->size[0];
    emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f37, i63,
      &oc_emlrtRTEI);
    loop_ub = FUN->contents.tunableEnvironment.f37->size[0];
    for (i63 = 0; i63 < loop_ub; i63++) {
      this_tunableEnvironment_f37->data[i63] =
        FUN->contents.tunableEnvironment.f37->data[i63];
    }

    for (i63 = 0; i63 < 900; i63++) {
      this_tunableEnvironment_f38[i63] = FUN->
        contents.tunableEnvironment.f38[i63];
      this_tunableEnvironment_f39[i63] = FUN->
        contents.tunableEnvironment.f39[i63];
      this_tunableEnvironment_f40[i63] = FUN->
        contents.tunableEnvironment.f40[i63];
    }

    this_tunableEnvironment_f41[0] = FUN->contents.tunableEnvironment.f41[0];
    this_tunableEnvironment_f41[1] = FUN->contents.tunableEnvironment.f41[1];
    this_tunableEnvironment_f41[2] = FUN->contents.tunableEnvironment.f41[2];
    i63 = this_tunableEnvironment_f43->size[0] *
      this_tunableEnvironment_f43->size[1];
    this_tunableEnvironment_f43->size[0] = 1;
    this_tunableEnvironment_f43->size[1] = FUN->
      contents.tunableEnvironment.f43->size[1];
    emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f43, i63,
      &oc_emlrtRTEI);
    loop_ub = FUN->contents.tunableEnvironment.f43->size[0] *
      FUN->contents.tunableEnvironment.f43->size[1];
    for (i63 = 0; i63 < loop_ub; i63++) {
      this_tunableEnvironment_f43->data[i63] =
        FUN->contents.tunableEnvironment.f43->data[i63];
    }

    i63 = this_tunableEnvironment_f44->size[0] *
      this_tunableEnvironment_f44->size[1];
    this_tunableEnvironment_f44->size[0] = 1;
    this_tunableEnvironment_f44->size[1] = FUN->
      contents.tunableEnvironment.f44->size[1];
    emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f44, i63,
      &oc_emlrtRTEI);
    loop_ub = FUN->contents.tunableEnvironment.f44->size[0] *
      FUN->contents.tunableEnvironment.f44->size[1];
    for (i63 = 0; i63 < loop_ub; i63++) {
      this_tunableEnvironment_f44->data[i63] =
        FUN->contents.tunableEnvironment.f44->data[i63];
    }

    b_st.site = &ic_emlrtRSI;
    c_st.site = &d_emlrtRSI;
    stress_II(&c_st, x, this_tunableEnvironment_f1, this_tunableEnvironment_f2,
              this_tunableEnvironment_f3, this_tunableEnvironment_f4,
              this_tunableEnvironment_f5, this_tunableEnvironment_f6,
              this_tunableEnvironment_f7, this_tunableEnvironment_f8,
              this_tunableEnvironment_f9, this_tunableEnvironment_f10,
              this_tunableEnvironment_f11, this_tunableEnvironment_f12,
              this_tunableEnvironment_f13, this_tunableEnvironment_f14,
              this_tunableEnvironment_f15, this_tunableEnvironment_f16,
              this_tunableEnvironment_f17, this_tunableEnvironment_f18,
              this_tunableEnvironment_f19, this_tunableEnvironment_f20,
              this_tunableEnvironment_f21, this_tunableEnvironment_f22,
              this_tunableEnvironment_f23, this_tunableEnvironment_f24,
              this_tunableEnvironment_f25, this_tunableEnvironment_f26,
              this_tunableEnvironment_f27, this_tunableEnvironment_f28,
              this_tunableEnvironment_f29, this_tunableEnvironment_f30,
              this_tunableEnvironment_f31, this_tunableEnvironment_f32,
              this_tunableEnvironment_f33, this_tunableEnvironment_f34,
              this_tunableEnvironment_f35, this_tunableEnvironment_f36,
              this_tunableEnvironment_f37, this_tunableEnvironment_f38,
              this_tunableEnvironment_f39, this_tunableEnvironment_f40,
              this_tunableEnvironment_f41, FUN->contents.tunableEnvironment.f42,
              this_tunableEnvironment_f43, this_tunableEnvironment_f44, b_fx);
    i63 = b_fx->size[1];
    if (5000 < i63) {
      emlrtDimSizeGeqCheckR2012b(5000, i63, &k_emlrtECI, sp);
    }

    i63 = fx->size[0] * fx->size[1];
    fx->size[0] = 6;
    fx->size[1] = b_fx->size[1];
    emxEnsureCapacity_real_T(sp, fx, i63, &qc_emlrtRTEI);
    loop_ub = b_fx->size[0] * b_fx->size[1];
    for (i63 = 0; i63 < loop_ub; i63++) {
      fx->data[i63] = b_fx->data[i63];
    }

    FIRSTFUNEVAL->contents = false;
  } else {
    st.site = &sc_emlrtRSI;
    *too_close = checkSpacing(&st, x);
    if (*too_close) {
      fx->size[0] = 6;
      fx->size[1] = 0;
    } else {
      st.site = &tc_emlrtRSI;
      this_tunableEnvironment_f1 = FUN->contents.tunableEnvironment.f1;
      this_tunableEnvironment_f2 = FUN->contents.tunableEnvironment.f2;
      for (i63 = 0; i63 < 81; i63++) {
        this_tunableEnvironment_f3[i63] = FUN->
          contents.tunableEnvironment.f3[i63];
      }

      this_tunableEnvironment_f4[0] = FUN->contents.tunableEnvironment.f4[0];
      this_tunableEnvironment_f5[0] = FUN->contents.tunableEnvironment.f5[0];
      this_tunableEnvironment_f6[0] = FUN->contents.tunableEnvironment.f6[0];
      this_tunableEnvironment_f4[1] = FUN->contents.tunableEnvironment.f4[1];
      this_tunableEnvironment_f5[1] = FUN->contents.tunableEnvironment.f5[1];
      this_tunableEnvironment_f6[1] = FUN->contents.tunableEnvironment.f6[1];
      this_tunableEnvironment_f4[2] = FUN->contents.tunableEnvironment.f4[2];
      this_tunableEnvironment_f5[2] = FUN->contents.tunableEnvironment.f5[2];
      this_tunableEnvironment_f6[2] = FUN->contents.tunableEnvironment.f6[2];
      for (i63 = 0; i63 < 9; i63++) {
        this_tunableEnvironment_f7[i63] = FUN->
          contents.tunableEnvironment.f7[i63];
        this_tunableEnvironment_f8[i63] = FUN->
          contents.tunableEnvironment.f8[i63];
      }

      for (i63 = 0; i63 < 81; i63++) {
        this_tunableEnvironment_f9[i63] = FUN->
          contents.tunableEnvironment.f9[i63];
      }

      this_tunableEnvironment_f10[0] = FUN->contents.tunableEnvironment.f10[0];
      this_tunableEnvironment_f11[0] = FUN->contents.tunableEnvironment.f11[0];
      this_tunableEnvironment_f12[0] = FUN->contents.tunableEnvironment.f12[0];
      this_tunableEnvironment_f10[1] = FUN->contents.tunableEnvironment.f10[1];
      this_tunableEnvironment_f11[1] = FUN->contents.tunableEnvironment.f11[1];
      this_tunableEnvironment_f12[1] = FUN->contents.tunableEnvironment.f12[1];
      this_tunableEnvironment_f10[2] = FUN->contents.tunableEnvironment.f10[2];
      this_tunableEnvironment_f11[2] = FUN->contents.tunableEnvironment.f11[2];
      this_tunableEnvironment_f12[2] = FUN->contents.tunableEnvironment.f12[2];
      for (i63 = 0; i63 < 9; i63++) {
        this_tunableEnvironment_f13[i63] = FUN->
          contents.tunableEnvironment.f13[i63];
        this_tunableEnvironment_f14[i63] = FUN->
          contents.tunableEnvironment.f14[i63];
      }

      for (i63 = 0; i63 < 81; i63++) {
        this_tunableEnvironment_f15[i63] = FUN->
          contents.tunableEnvironment.f15[i63];
      }

      this_tunableEnvironment_f16[0] = FUN->contents.tunableEnvironment.f16[0];
      this_tunableEnvironment_f17[0] = FUN->contents.tunableEnvironment.f17[0];
      this_tunableEnvironment_f18[0] = FUN->contents.tunableEnvironment.f18[0];
      this_tunableEnvironment_f16[1] = FUN->contents.tunableEnvironment.f16[1];
      this_tunableEnvironment_f17[1] = FUN->contents.tunableEnvironment.f17[1];
      this_tunableEnvironment_f18[1] = FUN->contents.tunableEnvironment.f18[1];
      this_tunableEnvironment_f16[2] = FUN->contents.tunableEnvironment.f16[2];
      this_tunableEnvironment_f17[2] = FUN->contents.tunableEnvironment.f17[2];
      this_tunableEnvironment_f18[2] = FUN->contents.tunableEnvironment.f18[2];
      for (i63 = 0; i63 < 9; i63++) {
        this_tunableEnvironment_f19[i63] = FUN->
          contents.tunableEnvironment.f19[i63];
        this_tunableEnvironment_f20[i63] = FUN->
          contents.tunableEnvironment.f20[i63];
      }

      for (i63 = 0; i63 < 81; i63++) {
        this_tunableEnvironment_f21[i63] = FUN->
          contents.tunableEnvironment.f21[i63];
      }

      this_tunableEnvironment_f22[0] = FUN->contents.tunableEnvironment.f22[0];
      this_tunableEnvironment_f23[0] = FUN->contents.tunableEnvironment.f23[0];
      this_tunableEnvironment_f24[0] = FUN->contents.tunableEnvironment.f24[0];
      this_tunableEnvironment_f22[1] = FUN->contents.tunableEnvironment.f22[1];
      this_tunableEnvironment_f23[1] = FUN->contents.tunableEnvironment.f23[1];
      this_tunableEnvironment_f24[1] = FUN->contents.tunableEnvironment.f24[1];
      this_tunableEnvironment_f22[2] = FUN->contents.tunableEnvironment.f22[2];
      this_tunableEnvironment_f23[2] = FUN->contents.tunableEnvironment.f23[2];
      this_tunableEnvironment_f24[2] = FUN->contents.tunableEnvironment.f24[2];
      for (i63 = 0; i63 < 9; i63++) {
        this_tunableEnvironment_f25[i63] = FUN->
          contents.tunableEnvironment.f25[i63];
        this_tunableEnvironment_f26[i63] = FUN->
          contents.tunableEnvironment.f26[i63];
      }

      for (i63 = 0; i63 < 81; i63++) {
        this_tunableEnvironment_f27[i63] = FUN->
          contents.tunableEnvironment.f27[i63];
      }

      this_tunableEnvironment_f28[0] = FUN->contents.tunableEnvironment.f28[0];
      this_tunableEnvironment_f29[0] = FUN->contents.tunableEnvironment.f29[0];
      this_tunableEnvironment_f30[0] = FUN->contents.tunableEnvironment.f30[0];
      this_tunableEnvironment_f28[1] = FUN->contents.tunableEnvironment.f28[1];
      this_tunableEnvironment_f29[1] = FUN->contents.tunableEnvironment.f29[1];
      this_tunableEnvironment_f30[1] = FUN->contents.tunableEnvironment.f30[1];
      this_tunableEnvironment_f28[2] = FUN->contents.tunableEnvironment.f28[2];
      this_tunableEnvironment_f29[2] = FUN->contents.tunableEnvironment.f29[2];
      this_tunableEnvironment_f30[2] = FUN->contents.tunableEnvironment.f30[2];
      for (i63 = 0; i63 < 9; i63++) {
        this_tunableEnvironment_f31[i63] = FUN->
          contents.tunableEnvironment.f31[i63];
        this_tunableEnvironment_f32[i63] = FUN->
          contents.tunableEnvironment.f32[i63];
      }

      for (i63 = 0; i63 < 25; i63++) {
        this_tunableEnvironment_f33[i63] = FUN->
          contents.tunableEnvironment.f33[i63];
      }

      this_tunableEnvironment_f34 = FUN->contents.tunableEnvironment.f34;
      i63 = this_tunableEnvironment_f35->size[0] *
        this_tunableEnvironment_f35->size[1];
      this_tunableEnvironment_f35->size[0] =
        FUN->contents.tunableEnvironment.f35->size[0];
      this_tunableEnvironment_f35->size[1] =
        FUN->contents.tunableEnvironment.f35->size[1];
      emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f35, i63,
        &nc_emlrtRTEI);
      loop_ub = FUN->contents.tunableEnvironment.f35->size[0] *
        FUN->contents.tunableEnvironment.f35->size[1];
      for (i63 = 0; i63 < loop_ub; i63++) {
        this_tunableEnvironment_f35->data[i63] =
          FUN->contents.tunableEnvironment.f35->data[i63];
      }

      i63 = this_tunableEnvironment_f36->size[0] *
        this_tunableEnvironment_f36->size[1];
      this_tunableEnvironment_f36->size[0] =
        FUN->contents.tunableEnvironment.f36->size[0];
      this_tunableEnvironment_f36->size[1] =
        FUN->contents.tunableEnvironment.f36->size[1];
      emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f36, i63,
        &nc_emlrtRTEI);
      loop_ub = FUN->contents.tunableEnvironment.f36->size[0] *
        FUN->contents.tunableEnvironment.f36->size[1];
      for (i63 = 0; i63 < loop_ub; i63++) {
        this_tunableEnvironment_f36->data[i63] =
          FUN->contents.tunableEnvironment.f36->data[i63];
      }

      i63 = this_tunableEnvironment_f37->size[0];
      this_tunableEnvironment_f37->size[0] =
        FUN->contents.tunableEnvironment.f37->size[0];
      emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f37, i63,
        &nc_emlrtRTEI);
      loop_ub = FUN->contents.tunableEnvironment.f37->size[0];
      for (i63 = 0; i63 < loop_ub; i63++) {
        this_tunableEnvironment_f37->data[i63] =
          FUN->contents.tunableEnvironment.f37->data[i63];
      }

      for (i63 = 0; i63 < 900; i63++) {
        this_tunableEnvironment_f38[i63] = FUN->
          contents.tunableEnvironment.f38[i63];
        this_tunableEnvironment_f39[i63] = FUN->
          contents.tunableEnvironment.f39[i63];
        this_tunableEnvironment_f40[i63] = FUN->
          contents.tunableEnvironment.f40[i63];
      }

      this_tunableEnvironment_f41[0] = FUN->contents.tunableEnvironment.f41[0];
      this_tunableEnvironment_f41[1] = FUN->contents.tunableEnvironment.f41[1];
      this_tunableEnvironment_f41[2] = FUN->contents.tunableEnvironment.f41[2];
      i63 = this_tunableEnvironment_f43->size[0] *
        this_tunableEnvironment_f43->size[1];
      this_tunableEnvironment_f43->size[0] = 1;
      this_tunableEnvironment_f43->size[1] =
        FUN->contents.tunableEnvironment.f43->size[1];
      emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f43, i63,
        &nc_emlrtRTEI);
      loop_ub = FUN->contents.tunableEnvironment.f43->size[0] *
        FUN->contents.tunableEnvironment.f43->size[1];
      for (i63 = 0; i63 < loop_ub; i63++) {
        this_tunableEnvironment_f43->data[i63] =
          FUN->contents.tunableEnvironment.f43->data[i63];
      }

      i63 = this_tunableEnvironment_f44->size[0] *
        this_tunableEnvironment_f44->size[1];
      this_tunableEnvironment_f44->size[0] = 1;
      this_tunableEnvironment_f44->size[1] =
        FUN->contents.tunableEnvironment.f44->size[1];
      emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f44, i63,
        &nc_emlrtRTEI);
      loop_ub = FUN->contents.tunableEnvironment.f44->size[0] *
        FUN->contents.tunableEnvironment.f44->size[1];
      for (i63 = 0; i63 < loop_ub; i63++) {
        this_tunableEnvironment_f44->data[i63] =
          FUN->contents.tunableEnvironment.f44->data[i63];
      }

      b_st.site = &ic_emlrtRSI;
      c_st.site = &d_emlrtRSI;
      stress_II(&c_st, x, this_tunableEnvironment_f1, this_tunableEnvironment_f2,
                this_tunableEnvironment_f3, this_tunableEnvironment_f4,
                this_tunableEnvironment_f5, this_tunableEnvironment_f6,
                this_tunableEnvironment_f7, this_tunableEnvironment_f8,
                this_tunableEnvironment_f9, this_tunableEnvironment_f10,
                this_tunableEnvironment_f11, this_tunableEnvironment_f12,
                this_tunableEnvironment_f13, this_tunableEnvironment_f14,
                this_tunableEnvironment_f15, this_tunableEnvironment_f16,
                this_tunableEnvironment_f17, this_tunableEnvironment_f18,
                this_tunableEnvironment_f19, this_tunableEnvironment_f20,
                this_tunableEnvironment_f21, this_tunableEnvironment_f22,
                this_tunableEnvironment_f23, this_tunableEnvironment_f24,
                this_tunableEnvironment_f25, this_tunableEnvironment_f26,
                this_tunableEnvironment_f27, this_tunableEnvironment_f28,
                this_tunableEnvironment_f29, this_tunableEnvironment_f30,
                this_tunableEnvironment_f31, this_tunableEnvironment_f32,
                this_tunableEnvironment_f33, this_tunableEnvironment_f34,
                this_tunableEnvironment_f35, this_tunableEnvironment_f36,
                this_tunableEnvironment_f37, this_tunableEnvironment_f38,
                this_tunableEnvironment_f39, this_tunableEnvironment_f40,
                this_tunableEnvironment_f41,
                FUN->contents.tunableEnvironment.f42,
                this_tunableEnvironment_f43, this_tunableEnvironment_f44, b_fx);
      i63 = b_fx->size[1];
      if (5000 < i63) {
        emlrtDimSizeGeqCheckR2012b(5000, i63, &l_emlrtECI, sp);
      }

      i63 = fx->size[0] * fx->size[1];
      fx->size[0] = 6;
      fx->size[1] = b_fx->size[1];
      emxEnsureCapacity_real_T(sp, fx, i63, &pc_emlrtRTEI);
      loop_ub = b_fx->size[0] * b_fx->size[1];
      for (i63 = 0; i63 < loop_ub; i63++) {
        fx->data[i63] = b_fx->data[i63];
      }
    }
  }

  emxFree_real_T(&this_tunableEnvironment_f44);
  emxFree_real_T(&this_tunableEnvironment_f43);
  emxFree_real_T(&this_tunableEnvironment_f37);
  emxFree_real_T(&this_tunableEnvironment_f36);
  emxFree_real_T(&this_tunableEnvironment_f35);
  emxFree_real_T(&b_fx);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static void e_evalFun(const emlrtStack *sp, coder_internal_ref_1 *FIRSTFUNEVAL,
                      const coder_internal_ref *FUN, const emxArray_real_T *x,
                      emxArray_real_T *fx, boolean_T *too_close)
{
  emxArray_real_T *b_fx;
  emxArray_real_T *this_tunableEnvironment_f35;
  emxArray_real_T *this_tunableEnvironment_f36;
  emxArray_real_T *this_tunableEnvironment_f37;
  emxArray_real_T *this_tunableEnvironment_f43;
  emxArray_real_T *this_tunableEnvironment_f44;
  real_T this_tunableEnvironment_f1;
  real_T this_tunableEnvironment_f2;
  int32_T i81;
  creal_T this_tunableEnvironment_f4[3];
  real_T this_tunableEnvironment_f3[81];
  real_T this_tunableEnvironment_f5[3];
  real_T this_tunableEnvironment_f6[3];
  creal_T this_tunableEnvironment_f7[9];
  creal_T this_tunableEnvironment_f8[9];
  creal_T this_tunableEnvironment_f10[3];
  real_T this_tunableEnvironment_f9[81];
  real_T this_tunableEnvironment_f11[3];
  real_T this_tunableEnvironment_f12[3];
  creal_T this_tunableEnvironment_f13[9];
  creal_T this_tunableEnvironment_f14[9];
  creal_T this_tunableEnvironment_f16[3];
  real_T this_tunableEnvironment_f15[81];
  real_T this_tunableEnvironment_f17[3];
  real_T this_tunableEnvironment_f18[3];
  creal_T this_tunableEnvironment_f19[9];
  creal_T this_tunableEnvironment_f20[9];
  creal_T this_tunableEnvironment_f22[3];
  real_T this_tunableEnvironment_f21[81];
  real_T this_tunableEnvironment_f23[3];
  real_T this_tunableEnvironment_f24[3];
  creal_T this_tunableEnvironment_f25[9];
  creal_T this_tunableEnvironment_f26[9];
  creal_T this_tunableEnvironment_f28[3];
  real_T this_tunableEnvironment_f27[81];
  real_T this_tunableEnvironment_f29[3];
  real_T this_tunableEnvironment_f30[3];
  creal_T this_tunableEnvironment_f31[9];
  creal_T this_tunableEnvironment_f32[9];
  real_T this_tunableEnvironment_f34;
  real_T this_tunableEnvironment_f33[25];
  int32_T loop_ub;
  real_T this_tunableEnvironment_f41[3];
  real_T this_tunableEnvironment_f38[900];
  real_T this_tunableEnvironment_f39[900];
  real_T this_tunableEnvironment_f40[900];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /* ==Nested functions========================================================= */
  /*  Evaluate the integrand. */
  emxInit_real_T(sp, &b_fx, 2, &rc_emlrtRTEI, true);
  emxInit_real_T(sp, &this_tunableEnvironment_f35, 2, &nc_emlrtRTEI, true);
  emxInit_real_T(sp, &this_tunableEnvironment_f36, 2, &nc_emlrtRTEI, true);
  emxInit_real_T(sp, &this_tunableEnvironment_f37, 1, &nc_emlrtRTEI, true);
  emxInit_real_T(sp, &this_tunableEnvironment_f43, 2, &nc_emlrtRTEI, true);
  emxInit_real_T(sp, &this_tunableEnvironment_f44, 2, &nc_emlrtRTEI, true);
  if (FIRSTFUNEVAL->contents) {
    /*  Don't check the closeness of the mesh on the first iteration. */
    *too_close = false;
    st.site = &rc_emlrtRSI;
    this_tunableEnvironment_f1 = FUN->contents.tunableEnvironment.f1;
    this_tunableEnvironment_f2 = FUN->contents.tunableEnvironment.f2;
    for (i81 = 0; i81 < 81; i81++) {
      this_tunableEnvironment_f3[i81] = FUN->contents.tunableEnvironment.f3[i81];
    }

    this_tunableEnvironment_f4[0] = FUN->contents.tunableEnvironment.f4[0];
    this_tunableEnvironment_f5[0] = FUN->contents.tunableEnvironment.f5[0];
    this_tunableEnvironment_f6[0] = FUN->contents.tunableEnvironment.f6[0];
    this_tunableEnvironment_f4[1] = FUN->contents.tunableEnvironment.f4[1];
    this_tunableEnvironment_f5[1] = FUN->contents.tunableEnvironment.f5[1];
    this_tunableEnvironment_f6[1] = FUN->contents.tunableEnvironment.f6[1];
    this_tunableEnvironment_f4[2] = FUN->contents.tunableEnvironment.f4[2];
    this_tunableEnvironment_f5[2] = FUN->contents.tunableEnvironment.f5[2];
    this_tunableEnvironment_f6[2] = FUN->contents.tunableEnvironment.f6[2];
    for (i81 = 0; i81 < 9; i81++) {
      this_tunableEnvironment_f7[i81] = FUN->contents.tunableEnvironment.f7[i81];
      this_tunableEnvironment_f8[i81] = FUN->contents.tunableEnvironment.f8[i81];
    }

    for (i81 = 0; i81 < 81; i81++) {
      this_tunableEnvironment_f9[i81] = FUN->contents.tunableEnvironment.f9[i81];
    }

    this_tunableEnvironment_f10[0] = FUN->contents.tunableEnvironment.f10[0];
    this_tunableEnvironment_f11[0] = FUN->contents.tunableEnvironment.f11[0];
    this_tunableEnvironment_f12[0] = FUN->contents.tunableEnvironment.f12[0];
    this_tunableEnvironment_f10[1] = FUN->contents.tunableEnvironment.f10[1];
    this_tunableEnvironment_f11[1] = FUN->contents.tunableEnvironment.f11[1];
    this_tunableEnvironment_f12[1] = FUN->contents.tunableEnvironment.f12[1];
    this_tunableEnvironment_f10[2] = FUN->contents.tunableEnvironment.f10[2];
    this_tunableEnvironment_f11[2] = FUN->contents.tunableEnvironment.f11[2];
    this_tunableEnvironment_f12[2] = FUN->contents.tunableEnvironment.f12[2];
    for (i81 = 0; i81 < 9; i81++) {
      this_tunableEnvironment_f13[i81] = FUN->
        contents.tunableEnvironment.f13[i81];
      this_tunableEnvironment_f14[i81] = FUN->
        contents.tunableEnvironment.f14[i81];
    }

    for (i81 = 0; i81 < 81; i81++) {
      this_tunableEnvironment_f15[i81] = FUN->
        contents.tunableEnvironment.f15[i81];
    }

    this_tunableEnvironment_f16[0] = FUN->contents.tunableEnvironment.f16[0];
    this_tunableEnvironment_f17[0] = FUN->contents.tunableEnvironment.f17[0];
    this_tunableEnvironment_f18[0] = FUN->contents.tunableEnvironment.f18[0];
    this_tunableEnvironment_f16[1] = FUN->contents.tunableEnvironment.f16[1];
    this_tunableEnvironment_f17[1] = FUN->contents.tunableEnvironment.f17[1];
    this_tunableEnvironment_f18[1] = FUN->contents.tunableEnvironment.f18[1];
    this_tunableEnvironment_f16[2] = FUN->contents.tunableEnvironment.f16[2];
    this_tunableEnvironment_f17[2] = FUN->contents.tunableEnvironment.f17[2];
    this_tunableEnvironment_f18[2] = FUN->contents.tunableEnvironment.f18[2];
    for (i81 = 0; i81 < 9; i81++) {
      this_tunableEnvironment_f19[i81] = FUN->
        contents.tunableEnvironment.f19[i81];
      this_tunableEnvironment_f20[i81] = FUN->
        contents.tunableEnvironment.f20[i81];
    }

    for (i81 = 0; i81 < 81; i81++) {
      this_tunableEnvironment_f21[i81] = FUN->
        contents.tunableEnvironment.f21[i81];
    }

    this_tunableEnvironment_f22[0] = FUN->contents.tunableEnvironment.f22[0];
    this_tunableEnvironment_f23[0] = FUN->contents.tunableEnvironment.f23[0];
    this_tunableEnvironment_f24[0] = FUN->contents.tunableEnvironment.f24[0];
    this_tunableEnvironment_f22[1] = FUN->contents.tunableEnvironment.f22[1];
    this_tunableEnvironment_f23[1] = FUN->contents.tunableEnvironment.f23[1];
    this_tunableEnvironment_f24[1] = FUN->contents.tunableEnvironment.f24[1];
    this_tunableEnvironment_f22[2] = FUN->contents.tunableEnvironment.f22[2];
    this_tunableEnvironment_f23[2] = FUN->contents.tunableEnvironment.f23[2];
    this_tunableEnvironment_f24[2] = FUN->contents.tunableEnvironment.f24[2];
    for (i81 = 0; i81 < 9; i81++) {
      this_tunableEnvironment_f25[i81] = FUN->
        contents.tunableEnvironment.f25[i81];
      this_tunableEnvironment_f26[i81] = FUN->
        contents.tunableEnvironment.f26[i81];
    }

    for (i81 = 0; i81 < 81; i81++) {
      this_tunableEnvironment_f27[i81] = FUN->
        contents.tunableEnvironment.f27[i81];
    }

    this_tunableEnvironment_f28[0] = FUN->contents.tunableEnvironment.f28[0];
    this_tunableEnvironment_f29[0] = FUN->contents.tunableEnvironment.f29[0];
    this_tunableEnvironment_f30[0] = FUN->contents.tunableEnvironment.f30[0];
    this_tunableEnvironment_f28[1] = FUN->contents.tunableEnvironment.f28[1];
    this_tunableEnvironment_f29[1] = FUN->contents.tunableEnvironment.f29[1];
    this_tunableEnvironment_f30[1] = FUN->contents.tunableEnvironment.f30[1];
    this_tunableEnvironment_f28[2] = FUN->contents.tunableEnvironment.f28[2];
    this_tunableEnvironment_f29[2] = FUN->contents.tunableEnvironment.f29[2];
    this_tunableEnvironment_f30[2] = FUN->contents.tunableEnvironment.f30[2];
    for (i81 = 0; i81 < 9; i81++) {
      this_tunableEnvironment_f31[i81] = FUN->
        contents.tunableEnvironment.f31[i81];
      this_tunableEnvironment_f32[i81] = FUN->
        contents.tunableEnvironment.f32[i81];
    }

    for (i81 = 0; i81 < 25; i81++) {
      this_tunableEnvironment_f33[i81] = FUN->
        contents.tunableEnvironment.f33[i81];
    }

    this_tunableEnvironment_f34 = FUN->contents.tunableEnvironment.f34;
    i81 = this_tunableEnvironment_f35->size[0] *
      this_tunableEnvironment_f35->size[1];
    this_tunableEnvironment_f35->size[0] = FUN->
      contents.tunableEnvironment.f35->size[0];
    this_tunableEnvironment_f35->size[1] = FUN->
      contents.tunableEnvironment.f35->size[1];
    emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f35, i81,
      &oc_emlrtRTEI);
    loop_ub = FUN->contents.tunableEnvironment.f35->size[0] *
      FUN->contents.tunableEnvironment.f35->size[1];
    for (i81 = 0; i81 < loop_ub; i81++) {
      this_tunableEnvironment_f35->data[i81] =
        FUN->contents.tunableEnvironment.f35->data[i81];
    }

    i81 = this_tunableEnvironment_f36->size[0] *
      this_tunableEnvironment_f36->size[1];
    this_tunableEnvironment_f36->size[0] = FUN->
      contents.tunableEnvironment.f36->size[0];
    this_tunableEnvironment_f36->size[1] = FUN->
      contents.tunableEnvironment.f36->size[1];
    emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f36, i81,
      &oc_emlrtRTEI);
    loop_ub = FUN->contents.tunableEnvironment.f36->size[0] *
      FUN->contents.tunableEnvironment.f36->size[1];
    for (i81 = 0; i81 < loop_ub; i81++) {
      this_tunableEnvironment_f36->data[i81] =
        FUN->contents.tunableEnvironment.f36->data[i81];
    }

    i81 = this_tunableEnvironment_f37->size[0];
    this_tunableEnvironment_f37->size[0] = FUN->
      contents.tunableEnvironment.f37->size[0];
    emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f37, i81,
      &oc_emlrtRTEI);
    loop_ub = FUN->contents.tunableEnvironment.f37->size[0];
    for (i81 = 0; i81 < loop_ub; i81++) {
      this_tunableEnvironment_f37->data[i81] =
        FUN->contents.tunableEnvironment.f37->data[i81];
    }

    for (i81 = 0; i81 < 900; i81++) {
      this_tunableEnvironment_f38[i81] = FUN->
        contents.tunableEnvironment.f38[i81];
      this_tunableEnvironment_f39[i81] = FUN->
        contents.tunableEnvironment.f39[i81];
      this_tunableEnvironment_f40[i81] = FUN->
        contents.tunableEnvironment.f40[i81];
    }

    this_tunableEnvironment_f41[0] = FUN->contents.tunableEnvironment.f41[0];
    this_tunableEnvironment_f41[1] = FUN->contents.tunableEnvironment.f41[1];
    this_tunableEnvironment_f41[2] = FUN->contents.tunableEnvironment.f41[2];
    i81 = this_tunableEnvironment_f43->size[0] *
      this_tunableEnvironment_f43->size[1];
    this_tunableEnvironment_f43->size[0] = 1;
    this_tunableEnvironment_f43->size[1] = FUN->
      contents.tunableEnvironment.f43->size[1];
    emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f43, i81,
      &oc_emlrtRTEI);
    loop_ub = FUN->contents.tunableEnvironment.f43->size[0] *
      FUN->contents.tunableEnvironment.f43->size[1];
    for (i81 = 0; i81 < loop_ub; i81++) {
      this_tunableEnvironment_f43->data[i81] =
        FUN->contents.tunableEnvironment.f43->data[i81];
    }

    i81 = this_tunableEnvironment_f44->size[0] *
      this_tunableEnvironment_f44->size[1];
    this_tunableEnvironment_f44->size[0] = 1;
    this_tunableEnvironment_f44->size[1] = FUN->
      contents.tunableEnvironment.f44->size[1];
    emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f44, i81,
      &oc_emlrtRTEI);
    loop_ub = FUN->contents.tunableEnvironment.f44->size[0] *
      FUN->contents.tunableEnvironment.f44->size[1];
    for (i81 = 0; i81 < loop_ub; i81++) {
      this_tunableEnvironment_f44->data[i81] =
        FUN->contents.tunableEnvironment.f44->data[i81];
    }

    b_st.site = &ic_emlrtRSI;
    c_st.site = &e_emlrtRSI;
    stress_SL(&c_st, x, this_tunableEnvironment_f1, this_tunableEnvironment_f2,
              this_tunableEnvironment_f3, this_tunableEnvironment_f4,
              this_tunableEnvironment_f5, this_tunableEnvironment_f6,
              this_tunableEnvironment_f7, this_tunableEnvironment_f8,
              this_tunableEnvironment_f9, this_tunableEnvironment_f10,
              this_tunableEnvironment_f11, this_tunableEnvironment_f12,
              this_tunableEnvironment_f13, this_tunableEnvironment_f14,
              this_tunableEnvironment_f15, this_tunableEnvironment_f16,
              this_tunableEnvironment_f17, this_tunableEnvironment_f18,
              this_tunableEnvironment_f19, this_tunableEnvironment_f20,
              this_tunableEnvironment_f21, this_tunableEnvironment_f22,
              this_tunableEnvironment_f23, this_tunableEnvironment_f24,
              this_tunableEnvironment_f25, this_tunableEnvironment_f26,
              this_tunableEnvironment_f27, this_tunableEnvironment_f28,
              this_tunableEnvironment_f29, this_tunableEnvironment_f30,
              this_tunableEnvironment_f31, this_tunableEnvironment_f32,
              this_tunableEnvironment_f33, this_tunableEnvironment_f34,
              this_tunableEnvironment_f35, this_tunableEnvironment_f36,
              this_tunableEnvironment_f37, this_tunableEnvironment_f38,
              this_tunableEnvironment_f39, this_tunableEnvironment_f40,
              this_tunableEnvironment_f41, FUN->contents.tunableEnvironment.f42,
              this_tunableEnvironment_f43, this_tunableEnvironment_f44, b_fx);
    i81 = b_fx->size[1];
    if (5000 < i81) {
      emlrtDimSizeGeqCheckR2012b(5000, i81, &k_emlrtECI, sp);
    }

    i81 = fx->size[0] * fx->size[1];
    fx->size[0] = 6;
    fx->size[1] = b_fx->size[1];
    emxEnsureCapacity_real_T(sp, fx, i81, &qc_emlrtRTEI);
    loop_ub = b_fx->size[0] * b_fx->size[1];
    for (i81 = 0; i81 < loop_ub; i81++) {
      fx->data[i81] = b_fx->data[i81];
    }

    FIRSTFUNEVAL->contents = false;
  } else {
    st.site = &sc_emlrtRSI;
    *too_close = checkSpacing(&st, x);
    if (*too_close) {
      fx->size[0] = 6;
      fx->size[1] = 0;
    } else {
      st.site = &tc_emlrtRSI;
      this_tunableEnvironment_f1 = FUN->contents.tunableEnvironment.f1;
      this_tunableEnvironment_f2 = FUN->contents.tunableEnvironment.f2;
      for (i81 = 0; i81 < 81; i81++) {
        this_tunableEnvironment_f3[i81] = FUN->
          contents.tunableEnvironment.f3[i81];
      }

      this_tunableEnvironment_f4[0] = FUN->contents.tunableEnvironment.f4[0];
      this_tunableEnvironment_f5[0] = FUN->contents.tunableEnvironment.f5[0];
      this_tunableEnvironment_f6[0] = FUN->contents.tunableEnvironment.f6[0];
      this_tunableEnvironment_f4[1] = FUN->contents.tunableEnvironment.f4[1];
      this_tunableEnvironment_f5[1] = FUN->contents.tunableEnvironment.f5[1];
      this_tunableEnvironment_f6[1] = FUN->contents.tunableEnvironment.f6[1];
      this_tunableEnvironment_f4[2] = FUN->contents.tunableEnvironment.f4[2];
      this_tunableEnvironment_f5[2] = FUN->contents.tunableEnvironment.f5[2];
      this_tunableEnvironment_f6[2] = FUN->contents.tunableEnvironment.f6[2];
      for (i81 = 0; i81 < 9; i81++) {
        this_tunableEnvironment_f7[i81] = FUN->
          contents.tunableEnvironment.f7[i81];
        this_tunableEnvironment_f8[i81] = FUN->
          contents.tunableEnvironment.f8[i81];
      }

      for (i81 = 0; i81 < 81; i81++) {
        this_tunableEnvironment_f9[i81] = FUN->
          contents.tunableEnvironment.f9[i81];
      }

      this_tunableEnvironment_f10[0] = FUN->contents.tunableEnvironment.f10[0];
      this_tunableEnvironment_f11[0] = FUN->contents.tunableEnvironment.f11[0];
      this_tunableEnvironment_f12[0] = FUN->contents.tunableEnvironment.f12[0];
      this_tunableEnvironment_f10[1] = FUN->contents.tunableEnvironment.f10[1];
      this_tunableEnvironment_f11[1] = FUN->contents.tunableEnvironment.f11[1];
      this_tunableEnvironment_f12[1] = FUN->contents.tunableEnvironment.f12[1];
      this_tunableEnvironment_f10[2] = FUN->contents.tunableEnvironment.f10[2];
      this_tunableEnvironment_f11[2] = FUN->contents.tunableEnvironment.f11[2];
      this_tunableEnvironment_f12[2] = FUN->contents.tunableEnvironment.f12[2];
      for (i81 = 0; i81 < 9; i81++) {
        this_tunableEnvironment_f13[i81] = FUN->
          contents.tunableEnvironment.f13[i81];
        this_tunableEnvironment_f14[i81] = FUN->
          contents.tunableEnvironment.f14[i81];
      }

      for (i81 = 0; i81 < 81; i81++) {
        this_tunableEnvironment_f15[i81] = FUN->
          contents.tunableEnvironment.f15[i81];
      }

      this_tunableEnvironment_f16[0] = FUN->contents.tunableEnvironment.f16[0];
      this_tunableEnvironment_f17[0] = FUN->contents.tunableEnvironment.f17[0];
      this_tunableEnvironment_f18[0] = FUN->contents.tunableEnvironment.f18[0];
      this_tunableEnvironment_f16[1] = FUN->contents.tunableEnvironment.f16[1];
      this_tunableEnvironment_f17[1] = FUN->contents.tunableEnvironment.f17[1];
      this_tunableEnvironment_f18[1] = FUN->contents.tunableEnvironment.f18[1];
      this_tunableEnvironment_f16[2] = FUN->contents.tunableEnvironment.f16[2];
      this_tunableEnvironment_f17[2] = FUN->contents.tunableEnvironment.f17[2];
      this_tunableEnvironment_f18[2] = FUN->contents.tunableEnvironment.f18[2];
      for (i81 = 0; i81 < 9; i81++) {
        this_tunableEnvironment_f19[i81] = FUN->
          contents.tunableEnvironment.f19[i81];
        this_tunableEnvironment_f20[i81] = FUN->
          contents.tunableEnvironment.f20[i81];
      }

      for (i81 = 0; i81 < 81; i81++) {
        this_tunableEnvironment_f21[i81] = FUN->
          contents.tunableEnvironment.f21[i81];
      }

      this_tunableEnvironment_f22[0] = FUN->contents.tunableEnvironment.f22[0];
      this_tunableEnvironment_f23[0] = FUN->contents.tunableEnvironment.f23[0];
      this_tunableEnvironment_f24[0] = FUN->contents.tunableEnvironment.f24[0];
      this_tunableEnvironment_f22[1] = FUN->contents.tunableEnvironment.f22[1];
      this_tunableEnvironment_f23[1] = FUN->contents.tunableEnvironment.f23[1];
      this_tunableEnvironment_f24[1] = FUN->contents.tunableEnvironment.f24[1];
      this_tunableEnvironment_f22[2] = FUN->contents.tunableEnvironment.f22[2];
      this_tunableEnvironment_f23[2] = FUN->contents.tunableEnvironment.f23[2];
      this_tunableEnvironment_f24[2] = FUN->contents.tunableEnvironment.f24[2];
      for (i81 = 0; i81 < 9; i81++) {
        this_tunableEnvironment_f25[i81] = FUN->
          contents.tunableEnvironment.f25[i81];
        this_tunableEnvironment_f26[i81] = FUN->
          contents.tunableEnvironment.f26[i81];
      }

      for (i81 = 0; i81 < 81; i81++) {
        this_tunableEnvironment_f27[i81] = FUN->
          contents.tunableEnvironment.f27[i81];
      }

      this_tunableEnvironment_f28[0] = FUN->contents.tunableEnvironment.f28[0];
      this_tunableEnvironment_f29[0] = FUN->contents.tunableEnvironment.f29[0];
      this_tunableEnvironment_f30[0] = FUN->contents.tunableEnvironment.f30[0];
      this_tunableEnvironment_f28[1] = FUN->contents.tunableEnvironment.f28[1];
      this_tunableEnvironment_f29[1] = FUN->contents.tunableEnvironment.f29[1];
      this_tunableEnvironment_f30[1] = FUN->contents.tunableEnvironment.f30[1];
      this_tunableEnvironment_f28[2] = FUN->contents.tunableEnvironment.f28[2];
      this_tunableEnvironment_f29[2] = FUN->contents.tunableEnvironment.f29[2];
      this_tunableEnvironment_f30[2] = FUN->contents.tunableEnvironment.f30[2];
      for (i81 = 0; i81 < 9; i81++) {
        this_tunableEnvironment_f31[i81] = FUN->
          contents.tunableEnvironment.f31[i81];
        this_tunableEnvironment_f32[i81] = FUN->
          contents.tunableEnvironment.f32[i81];
      }

      for (i81 = 0; i81 < 25; i81++) {
        this_tunableEnvironment_f33[i81] = FUN->
          contents.tunableEnvironment.f33[i81];
      }

      this_tunableEnvironment_f34 = FUN->contents.tunableEnvironment.f34;
      i81 = this_tunableEnvironment_f35->size[0] *
        this_tunableEnvironment_f35->size[1];
      this_tunableEnvironment_f35->size[0] =
        FUN->contents.tunableEnvironment.f35->size[0];
      this_tunableEnvironment_f35->size[1] =
        FUN->contents.tunableEnvironment.f35->size[1];
      emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f35, i81,
        &nc_emlrtRTEI);
      loop_ub = FUN->contents.tunableEnvironment.f35->size[0] *
        FUN->contents.tunableEnvironment.f35->size[1];
      for (i81 = 0; i81 < loop_ub; i81++) {
        this_tunableEnvironment_f35->data[i81] =
          FUN->contents.tunableEnvironment.f35->data[i81];
      }

      i81 = this_tunableEnvironment_f36->size[0] *
        this_tunableEnvironment_f36->size[1];
      this_tunableEnvironment_f36->size[0] =
        FUN->contents.tunableEnvironment.f36->size[0];
      this_tunableEnvironment_f36->size[1] =
        FUN->contents.tunableEnvironment.f36->size[1];
      emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f36, i81,
        &nc_emlrtRTEI);
      loop_ub = FUN->contents.tunableEnvironment.f36->size[0] *
        FUN->contents.tunableEnvironment.f36->size[1];
      for (i81 = 0; i81 < loop_ub; i81++) {
        this_tunableEnvironment_f36->data[i81] =
          FUN->contents.tunableEnvironment.f36->data[i81];
      }

      i81 = this_tunableEnvironment_f37->size[0];
      this_tunableEnvironment_f37->size[0] =
        FUN->contents.tunableEnvironment.f37->size[0];
      emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f37, i81,
        &nc_emlrtRTEI);
      loop_ub = FUN->contents.tunableEnvironment.f37->size[0];
      for (i81 = 0; i81 < loop_ub; i81++) {
        this_tunableEnvironment_f37->data[i81] =
          FUN->contents.tunableEnvironment.f37->data[i81];
      }

      for (i81 = 0; i81 < 900; i81++) {
        this_tunableEnvironment_f38[i81] = FUN->
          contents.tunableEnvironment.f38[i81];
        this_tunableEnvironment_f39[i81] = FUN->
          contents.tunableEnvironment.f39[i81];
        this_tunableEnvironment_f40[i81] = FUN->
          contents.tunableEnvironment.f40[i81];
      }

      this_tunableEnvironment_f41[0] = FUN->contents.tunableEnvironment.f41[0];
      this_tunableEnvironment_f41[1] = FUN->contents.tunableEnvironment.f41[1];
      this_tunableEnvironment_f41[2] = FUN->contents.tunableEnvironment.f41[2];
      i81 = this_tunableEnvironment_f43->size[0] *
        this_tunableEnvironment_f43->size[1];
      this_tunableEnvironment_f43->size[0] = 1;
      this_tunableEnvironment_f43->size[1] =
        FUN->contents.tunableEnvironment.f43->size[1];
      emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f43, i81,
        &nc_emlrtRTEI);
      loop_ub = FUN->contents.tunableEnvironment.f43->size[0] *
        FUN->contents.tunableEnvironment.f43->size[1];
      for (i81 = 0; i81 < loop_ub; i81++) {
        this_tunableEnvironment_f43->data[i81] =
          FUN->contents.tunableEnvironment.f43->data[i81];
      }

      i81 = this_tunableEnvironment_f44->size[0] *
        this_tunableEnvironment_f44->size[1];
      this_tunableEnvironment_f44->size[0] = 1;
      this_tunableEnvironment_f44->size[1] =
        FUN->contents.tunableEnvironment.f44->size[1];
      emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f44, i81,
        &nc_emlrtRTEI);
      loop_ub = FUN->contents.tunableEnvironment.f44->size[0] *
        FUN->contents.tunableEnvironment.f44->size[1];
      for (i81 = 0; i81 < loop_ub; i81++) {
        this_tunableEnvironment_f44->data[i81] =
          FUN->contents.tunableEnvironment.f44->data[i81];
      }

      b_st.site = &ic_emlrtRSI;
      c_st.site = &e_emlrtRSI;
      stress_SL(&c_st, x, this_tunableEnvironment_f1, this_tunableEnvironment_f2,
                this_tunableEnvironment_f3, this_tunableEnvironment_f4,
                this_tunableEnvironment_f5, this_tunableEnvironment_f6,
                this_tunableEnvironment_f7, this_tunableEnvironment_f8,
                this_tunableEnvironment_f9, this_tunableEnvironment_f10,
                this_tunableEnvironment_f11, this_tunableEnvironment_f12,
                this_tunableEnvironment_f13, this_tunableEnvironment_f14,
                this_tunableEnvironment_f15, this_tunableEnvironment_f16,
                this_tunableEnvironment_f17, this_tunableEnvironment_f18,
                this_tunableEnvironment_f19, this_tunableEnvironment_f20,
                this_tunableEnvironment_f21, this_tunableEnvironment_f22,
                this_tunableEnvironment_f23, this_tunableEnvironment_f24,
                this_tunableEnvironment_f25, this_tunableEnvironment_f26,
                this_tunableEnvironment_f27, this_tunableEnvironment_f28,
                this_tunableEnvironment_f29, this_tunableEnvironment_f30,
                this_tunableEnvironment_f31, this_tunableEnvironment_f32,
                this_tunableEnvironment_f33, this_tunableEnvironment_f34,
                this_tunableEnvironment_f35, this_tunableEnvironment_f36,
                this_tunableEnvironment_f37, this_tunableEnvironment_f38,
                this_tunableEnvironment_f39, this_tunableEnvironment_f40,
                this_tunableEnvironment_f41,
                FUN->contents.tunableEnvironment.f42,
                this_tunableEnvironment_f43, this_tunableEnvironment_f44, b_fx);
      i81 = b_fx->size[1];
      if (5000 < i81) {
        emlrtDimSizeGeqCheckR2012b(5000, i81, &l_emlrtECI, sp);
      }

      i81 = fx->size[0] * fx->size[1];
      fx->size[0] = 6;
      fx->size[1] = b_fx->size[1];
      emxEnsureCapacity_real_T(sp, fx, i81, &pc_emlrtRTEI);
      loop_ub = b_fx->size[0] * b_fx->size[1];
      for (i81 = 0; i81 < loop_ub; i81++) {
        fx->data[i81] = b_fx->data[i81];
      }
    }
  }

  emxFree_real_T(&this_tunableEnvironment_f44);
  emxFree_real_T(&this_tunableEnvironment_f43);
  emxFree_real_T(&this_tunableEnvironment_f37);
  emxFree_real_T(&this_tunableEnvironment_f36);
  emxFree_real_T(&this_tunableEnvironment_f35);
  emxFree_real_T(&b_fx);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static void evalFun(const emlrtStack *sp, coder_internal_ref_1 *FIRSTFUNEVAL,
                    const coder_internal_ref *FUN, const emxArray_real_T *x,
                    emxArray_real_T *fx, boolean_T *too_close)
{
  emxArray_real_T *b_fx;
  emxArray_real_T *this_tunableEnvironment_f35;
  emxArray_real_T *this_tunableEnvironment_f36;
  emxArray_real_T *this_tunableEnvironment_f37;
  emxArray_real_T *this_tunableEnvironment_f43;
  emxArray_real_T *this_tunableEnvironment_f44;
  real_T this_tunableEnvironment_f1;
  real_T this_tunableEnvironment_f2;
  int32_T i7;
  creal_T this_tunableEnvironment_f4[3];
  real_T this_tunableEnvironment_f3[81];
  real_T this_tunableEnvironment_f5[3];
  real_T this_tunableEnvironment_f6[3];
  creal_T this_tunableEnvironment_f7[9];
  creal_T this_tunableEnvironment_f8[9];
  creal_T this_tunableEnvironment_f10[3];
  real_T this_tunableEnvironment_f9[81];
  real_T this_tunableEnvironment_f11[3];
  real_T this_tunableEnvironment_f12[3];
  creal_T this_tunableEnvironment_f13[9];
  creal_T this_tunableEnvironment_f14[9];
  creal_T this_tunableEnvironment_f16[3];
  real_T this_tunableEnvironment_f15[81];
  real_T this_tunableEnvironment_f17[3];
  real_T this_tunableEnvironment_f18[3];
  creal_T this_tunableEnvironment_f19[9];
  creal_T this_tunableEnvironment_f20[9];
  creal_T this_tunableEnvironment_f22[3];
  real_T this_tunableEnvironment_f21[81];
  real_T this_tunableEnvironment_f23[3];
  real_T this_tunableEnvironment_f24[3];
  creal_T this_tunableEnvironment_f25[9];
  creal_T this_tunableEnvironment_f26[9];
  creal_T this_tunableEnvironment_f28[3];
  real_T this_tunableEnvironment_f27[81];
  real_T this_tunableEnvironment_f29[3];
  real_T this_tunableEnvironment_f30[3];
  creal_T this_tunableEnvironment_f31[9];
  creal_T this_tunableEnvironment_f32[9];
  real_T this_tunableEnvironment_f34;
  real_T this_tunableEnvironment_f33[25];
  int32_T loop_ub;
  real_T this_tunableEnvironment_f41[3];
  real_T this_tunableEnvironment_f38[900];
  real_T this_tunableEnvironment_f39[900];
  real_T this_tunableEnvironment_f40[900];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /* ==Nested functions========================================================= */
  /*  Evaluate the integrand. */
  emxInit_real_T(sp, &b_fx, 2, &rc_emlrtRTEI, true);
  emxInit_real_T(sp, &this_tunableEnvironment_f35, 2, &nc_emlrtRTEI, true);
  emxInit_real_T(sp, &this_tunableEnvironment_f36, 2, &nc_emlrtRTEI, true);
  emxInit_real_T(sp, &this_tunableEnvironment_f37, 1, &nc_emlrtRTEI, true);
  emxInit_real_T(sp, &this_tunableEnvironment_f43, 2, &nc_emlrtRTEI, true);
  emxInit_real_T(sp, &this_tunableEnvironment_f44, 2, &nc_emlrtRTEI, true);
  if (FIRSTFUNEVAL->contents) {
    /*  Don't check the closeness of the mesh on the first iteration. */
    *too_close = false;
    st.site = &rc_emlrtRSI;
    this_tunableEnvironment_f1 = FUN->contents.tunableEnvironment.f1;
    this_tunableEnvironment_f2 = FUN->contents.tunableEnvironment.f2;
    for (i7 = 0; i7 < 81; i7++) {
      this_tunableEnvironment_f3[i7] = FUN->contents.tunableEnvironment.f3[i7];
    }

    this_tunableEnvironment_f4[0] = FUN->contents.tunableEnvironment.f4[0];
    this_tunableEnvironment_f5[0] = FUN->contents.tunableEnvironment.f5[0];
    this_tunableEnvironment_f6[0] = FUN->contents.tunableEnvironment.f6[0];
    this_tunableEnvironment_f4[1] = FUN->contents.tunableEnvironment.f4[1];
    this_tunableEnvironment_f5[1] = FUN->contents.tunableEnvironment.f5[1];
    this_tunableEnvironment_f6[1] = FUN->contents.tunableEnvironment.f6[1];
    this_tunableEnvironment_f4[2] = FUN->contents.tunableEnvironment.f4[2];
    this_tunableEnvironment_f5[2] = FUN->contents.tunableEnvironment.f5[2];
    this_tunableEnvironment_f6[2] = FUN->contents.tunableEnvironment.f6[2];
    for (i7 = 0; i7 < 9; i7++) {
      this_tunableEnvironment_f7[i7] = FUN->contents.tunableEnvironment.f7[i7];
      this_tunableEnvironment_f8[i7] = FUN->contents.tunableEnvironment.f8[i7];
    }

    for (i7 = 0; i7 < 81; i7++) {
      this_tunableEnvironment_f9[i7] = FUN->contents.tunableEnvironment.f9[i7];
    }

    this_tunableEnvironment_f10[0] = FUN->contents.tunableEnvironment.f10[0];
    this_tunableEnvironment_f11[0] = FUN->contents.tunableEnvironment.f11[0];
    this_tunableEnvironment_f12[0] = FUN->contents.tunableEnvironment.f12[0];
    this_tunableEnvironment_f10[1] = FUN->contents.tunableEnvironment.f10[1];
    this_tunableEnvironment_f11[1] = FUN->contents.tunableEnvironment.f11[1];
    this_tunableEnvironment_f12[1] = FUN->contents.tunableEnvironment.f12[1];
    this_tunableEnvironment_f10[2] = FUN->contents.tunableEnvironment.f10[2];
    this_tunableEnvironment_f11[2] = FUN->contents.tunableEnvironment.f11[2];
    this_tunableEnvironment_f12[2] = FUN->contents.tunableEnvironment.f12[2];
    for (i7 = 0; i7 < 9; i7++) {
      this_tunableEnvironment_f13[i7] = FUN->contents.tunableEnvironment.f13[i7];
      this_tunableEnvironment_f14[i7] = FUN->contents.tunableEnvironment.f14[i7];
    }

    for (i7 = 0; i7 < 81; i7++) {
      this_tunableEnvironment_f15[i7] = FUN->contents.tunableEnvironment.f15[i7];
    }

    this_tunableEnvironment_f16[0] = FUN->contents.tunableEnvironment.f16[0];
    this_tunableEnvironment_f17[0] = FUN->contents.tunableEnvironment.f17[0];
    this_tunableEnvironment_f18[0] = FUN->contents.tunableEnvironment.f18[0];
    this_tunableEnvironment_f16[1] = FUN->contents.tunableEnvironment.f16[1];
    this_tunableEnvironment_f17[1] = FUN->contents.tunableEnvironment.f17[1];
    this_tunableEnvironment_f18[1] = FUN->contents.tunableEnvironment.f18[1];
    this_tunableEnvironment_f16[2] = FUN->contents.tunableEnvironment.f16[2];
    this_tunableEnvironment_f17[2] = FUN->contents.tunableEnvironment.f17[2];
    this_tunableEnvironment_f18[2] = FUN->contents.tunableEnvironment.f18[2];
    for (i7 = 0; i7 < 9; i7++) {
      this_tunableEnvironment_f19[i7] = FUN->contents.tunableEnvironment.f19[i7];
      this_tunableEnvironment_f20[i7] = FUN->contents.tunableEnvironment.f20[i7];
    }

    for (i7 = 0; i7 < 81; i7++) {
      this_tunableEnvironment_f21[i7] = FUN->contents.tunableEnvironment.f21[i7];
    }

    this_tunableEnvironment_f22[0] = FUN->contents.tunableEnvironment.f22[0];
    this_tunableEnvironment_f23[0] = FUN->contents.tunableEnvironment.f23[0];
    this_tunableEnvironment_f24[0] = FUN->contents.tunableEnvironment.f24[0];
    this_tunableEnvironment_f22[1] = FUN->contents.tunableEnvironment.f22[1];
    this_tunableEnvironment_f23[1] = FUN->contents.tunableEnvironment.f23[1];
    this_tunableEnvironment_f24[1] = FUN->contents.tunableEnvironment.f24[1];
    this_tunableEnvironment_f22[2] = FUN->contents.tunableEnvironment.f22[2];
    this_tunableEnvironment_f23[2] = FUN->contents.tunableEnvironment.f23[2];
    this_tunableEnvironment_f24[2] = FUN->contents.tunableEnvironment.f24[2];
    for (i7 = 0; i7 < 9; i7++) {
      this_tunableEnvironment_f25[i7] = FUN->contents.tunableEnvironment.f25[i7];
      this_tunableEnvironment_f26[i7] = FUN->contents.tunableEnvironment.f26[i7];
    }

    for (i7 = 0; i7 < 81; i7++) {
      this_tunableEnvironment_f27[i7] = FUN->contents.tunableEnvironment.f27[i7];
    }

    this_tunableEnvironment_f28[0] = FUN->contents.tunableEnvironment.f28[0];
    this_tunableEnvironment_f29[0] = FUN->contents.tunableEnvironment.f29[0];
    this_tunableEnvironment_f30[0] = FUN->contents.tunableEnvironment.f30[0];
    this_tunableEnvironment_f28[1] = FUN->contents.tunableEnvironment.f28[1];
    this_tunableEnvironment_f29[1] = FUN->contents.tunableEnvironment.f29[1];
    this_tunableEnvironment_f30[1] = FUN->contents.tunableEnvironment.f30[1];
    this_tunableEnvironment_f28[2] = FUN->contents.tunableEnvironment.f28[2];
    this_tunableEnvironment_f29[2] = FUN->contents.tunableEnvironment.f29[2];
    this_tunableEnvironment_f30[2] = FUN->contents.tunableEnvironment.f30[2];
    for (i7 = 0; i7 < 9; i7++) {
      this_tunableEnvironment_f31[i7] = FUN->contents.tunableEnvironment.f31[i7];
      this_tunableEnvironment_f32[i7] = FUN->contents.tunableEnvironment.f32[i7];
    }

    for (i7 = 0; i7 < 25; i7++) {
      this_tunableEnvironment_f33[i7] = FUN->contents.tunableEnvironment.f33[i7];
    }

    this_tunableEnvironment_f34 = FUN->contents.tunableEnvironment.f34;
    i7 = this_tunableEnvironment_f35->size[0] *
      this_tunableEnvironment_f35->size[1];
    this_tunableEnvironment_f35->size[0] = FUN->
      contents.tunableEnvironment.f35->size[0];
    this_tunableEnvironment_f35->size[1] = FUN->
      contents.tunableEnvironment.f35->size[1];
    emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f35, i7, &oc_emlrtRTEI);
    loop_ub = FUN->contents.tunableEnvironment.f35->size[0] *
      FUN->contents.tunableEnvironment.f35->size[1];
    for (i7 = 0; i7 < loop_ub; i7++) {
      this_tunableEnvironment_f35->data[i7] =
        FUN->contents.tunableEnvironment.f35->data[i7];
    }

    i7 = this_tunableEnvironment_f36->size[0] *
      this_tunableEnvironment_f36->size[1];
    this_tunableEnvironment_f36->size[0] = FUN->
      contents.tunableEnvironment.f36->size[0];
    this_tunableEnvironment_f36->size[1] = FUN->
      contents.tunableEnvironment.f36->size[1];
    emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f36, i7, &oc_emlrtRTEI);
    loop_ub = FUN->contents.tunableEnvironment.f36->size[0] *
      FUN->contents.tunableEnvironment.f36->size[1];
    for (i7 = 0; i7 < loop_ub; i7++) {
      this_tunableEnvironment_f36->data[i7] =
        FUN->contents.tunableEnvironment.f36->data[i7];
    }

    i7 = this_tunableEnvironment_f37->size[0];
    this_tunableEnvironment_f37->size[0] = FUN->
      contents.tunableEnvironment.f37->size[0];
    emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f37, i7, &oc_emlrtRTEI);
    loop_ub = FUN->contents.tunableEnvironment.f37->size[0];
    for (i7 = 0; i7 < loop_ub; i7++) {
      this_tunableEnvironment_f37->data[i7] =
        FUN->contents.tunableEnvironment.f37->data[i7];
    }

    for (i7 = 0; i7 < 900; i7++) {
      this_tunableEnvironment_f38[i7] = FUN->contents.tunableEnvironment.f38[i7];
      this_tunableEnvironment_f39[i7] = FUN->contents.tunableEnvironment.f39[i7];
      this_tunableEnvironment_f40[i7] = FUN->contents.tunableEnvironment.f40[i7];
    }

    this_tunableEnvironment_f41[0] = FUN->contents.tunableEnvironment.f41[0];
    this_tunableEnvironment_f41[1] = FUN->contents.tunableEnvironment.f41[1];
    this_tunableEnvironment_f41[2] = FUN->contents.tunableEnvironment.f41[2];
    i7 = this_tunableEnvironment_f43->size[0] *
      this_tunableEnvironment_f43->size[1];
    this_tunableEnvironment_f43->size[0] = 1;
    this_tunableEnvironment_f43->size[1] = FUN->
      contents.tunableEnvironment.f43->size[1];
    emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f43, i7, &oc_emlrtRTEI);
    loop_ub = FUN->contents.tunableEnvironment.f43->size[0] *
      FUN->contents.tunableEnvironment.f43->size[1];
    for (i7 = 0; i7 < loop_ub; i7++) {
      this_tunableEnvironment_f43->data[i7] =
        FUN->contents.tunableEnvironment.f43->data[i7];
    }

    i7 = this_tunableEnvironment_f44->size[0] *
      this_tunableEnvironment_f44->size[1];
    this_tunableEnvironment_f44->size[0] = 1;
    this_tunableEnvironment_f44->size[1] = FUN->
      contents.tunableEnvironment.f44->size[1];
    emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f44, i7, &oc_emlrtRTEI);
    loop_ub = FUN->contents.tunableEnvironment.f44->size[0] *
      FUN->contents.tunableEnvironment.f44->size[1];
    for (i7 = 0; i7 < loop_ub; i7++) {
      this_tunableEnvironment_f44->data[i7] =
        FUN->contents.tunableEnvironment.f44->data[i7];
    }

    b_st.site = &ic_emlrtRSI;
    c_st.site = &emlrtRSI;
    stress_SU(&c_st, x, this_tunableEnvironment_f1, this_tunableEnvironment_f2,
              this_tunableEnvironment_f3, this_tunableEnvironment_f4,
              this_tunableEnvironment_f5, this_tunableEnvironment_f6,
              this_tunableEnvironment_f7, this_tunableEnvironment_f8,
              this_tunableEnvironment_f9, this_tunableEnvironment_f10,
              this_tunableEnvironment_f11, this_tunableEnvironment_f12,
              this_tunableEnvironment_f13, this_tunableEnvironment_f14,
              this_tunableEnvironment_f15, this_tunableEnvironment_f16,
              this_tunableEnvironment_f17, this_tunableEnvironment_f18,
              this_tunableEnvironment_f19, this_tunableEnvironment_f20,
              this_tunableEnvironment_f21, this_tunableEnvironment_f22,
              this_tunableEnvironment_f23, this_tunableEnvironment_f24,
              this_tunableEnvironment_f25, this_tunableEnvironment_f26,
              this_tunableEnvironment_f27, this_tunableEnvironment_f28,
              this_tunableEnvironment_f29, this_tunableEnvironment_f30,
              this_tunableEnvironment_f31, this_tunableEnvironment_f32,
              this_tunableEnvironment_f33, this_tunableEnvironment_f34,
              this_tunableEnvironment_f35, this_tunableEnvironment_f36,
              this_tunableEnvironment_f37, this_tunableEnvironment_f38,
              this_tunableEnvironment_f39, this_tunableEnvironment_f40,
              this_tunableEnvironment_f41, FUN->contents.tunableEnvironment.f42,
              this_tunableEnvironment_f43, this_tunableEnvironment_f44, b_fx);
    i7 = b_fx->size[1];
    if (5000 < i7) {
      emlrtDimSizeGeqCheckR2012b(5000, i7, &k_emlrtECI, sp);
    }

    i7 = fx->size[0] * fx->size[1];
    fx->size[0] = 6;
    fx->size[1] = b_fx->size[1];
    emxEnsureCapacity_real_T(sp, fx, i7, &qc_emlrtRTEI);
    loop_ub = b_fx->size[0] * b_fx->size[1];
    for (i7 = 0; i7 < loop_ub; i7++) {
      fx->data[i7] = b_fx->data[i7];
    }

    FIRSTFUNEVAL->contents = false;
  } else {
    st.site = &sc_emlrtRSI;
    *too_close = checkSpacing(&st, x);
    if (*too_close) {
      fx->size[0] = 6;
      fx->size[1] = 0;
    } else {
      st.site = &tc_emlrtRSI;
      this_tunableEnvironment_f1 = FUN->contents.tunableEnvironment.f1;
      this_tunableEnvironment_f2 = FUN->contents.tunableEnvironment.f2;
      for (i7 = 0; i7 < 81; i7++) {
        this_tunableEnvironment_f3[i7] = FUN->contents.tunableEnvironment.f3[i7];
      }

      this_tunableEnvironment_f4[0] = FUN->contents.tunableEnvironment.f4[0];
      this_tunableEnvironment_f5[0] = FUN->contents.tunableEnvironment.f5[0];
      this_tunableEnvironment_f6[0] = FUN->contents.tunableEnvironment.f6[0];
      this_tunableEnvironment_f4[1] = FUN->contents.tunableEnvironment.f4[1];
      this_tunableEnvironment_f5[1] = FUN->contents.tunableEnvironment.f5[1];
      this_tunableEnvironment_f6[1] = FUN->contents.tunableEnvironment.f6[1];
      this_tunableEnvironment_f4[2] = FUN->contents.tunableEnvironment.f4[2];
      this_tunableEnvironment_f5[2] = FUN->contents.tunableEnvironment.f5[2];
      this_tunableEnvironment_f6[2] = FUN->contents.tunableEnvironment.f6[2];
      for (i7 = 0; i7 < 9; i7++) {
        this_tunableEnvironment_f7[i7] = FUN->contents.tunableEnvironment.f7[i7];
        this_tunableEnvironment_f8[i7] = FUN->contents.tunableEnvironment.f8[i7];
      }

      for (i7 = 0; i7 < 81; i7++) {
        this_tunableEnvironment_f9[i7] = FUN->contents.tunableEnvironment.f9[i7];
      }

      this_tunableEnvironment_f10[0] = FUN->contents.tunableEnvironment.f10[0];
      this_tunableEnvironment_f11[0] = FUN->contents.tunableEnvironment.f11[0];
      this_tunableEnvironment_f12[0] = FUN->contents.tunableEnvironment.f12[0];
      this_tunableEnvironment_f10[1] = FUN->contents.tunableEnvironment.f10[1];
      this_tunableEnvironment_f11[1] = FUN->contents.tunableEnvironment.f11[1];
      this_tunableEnvironment_f12[1] = FUN->contents.tunableEnvironment.f12[1];
      this_tunableEnvironment_f10[2] = FUN->contents.tunableEnvironment.f10[2];
      this_tunableEnvironment_f11[2] = FUN->contents.tunableEnvironment.f11[2];
      this_tunableEnvironment_f12[2] = FUN->contents.tunableEnvironment.f12[2];
      for (i7 = 0; i7 < 9; i7++) {
        this_tunableEnvironment_f13[i7] = FUN->
          contents.tunableEnvironment.f13[i7];
        this_tunableEnvironment_f14[i7] = FUN->
          contents.tunableEnvironment.f14[i7];
      }

      for (i7 = 0; i7 < 81; i7++) {
        this_tunableEnvironment_f15[i7] = FUN->
          contents.tunableEnvironment.f15[i7];
      }

      this_tunableEnvironment_f16[0] = FUN->contents.tunableEnvironment.f16[0];
      this_tunableEnvironment_f17[0] = FUN->contents.tunableEnvironment.f17[0];
      this_tunableEnvironment_f18[0] = FUN->contents.tunableEnvironment.f18[0];
      this_tunableEnvironment_f16[1] = FUN->contents.tunableEnvironment.f16[1];
      this_tunableEnvironment_f17[1] = FUN->contents.tunableEnvironment.f17[1];
      this_tunableEnvironment_f18[1] = FUN->contents.tunableEnvironment.f18[1];
      this_tunableEnvironment_f16[2] = FUN->contents.tunableEnvironment.f16[2];
      this_tunableEnvironment_f17[2] = FUN->contents.tunableEnvironment.f17[2];
      this_tunableEnvironment_f18[2] = FUN->contents.tunableEnvironment.f18[2];
      for (i7 = 0; i7 < 9; i7++) {
        this_tunableEnvironment_f19[i7] = FUN->
          contents.tunableEnvironment.f19[i7];
        this_tunableEnvironment_f20[i7] = FUN->
          contents.tunableEnvironment.f20[i7];
      }

      for (i7 = 0; i7 < 81; i7++) {
        this_tunableEnvironment_f21[i7] = FUN->
          contents.tunableEnvironment.f21[i7];
      }

      this_tunableEnvironment_f22[0] = FUN->contents.tunableEnvironment.f22[0];
      this_tunableEnvironment_f23[0] = FUN->contents.tunableEnvironment.f23[0];
      this_tunableEnvironment_f24[0] = FUN->contents.tunableEnvironment.f24[0];
      this_tunableEnvironment_f22[1] = FUN->contents.tunableEnvironment.f22[1];
      this_tunableEnvironment_f23[1] = FUN->contents.tunableEnvironment.f23[1];
      this_tunableEnvironment_f24[1] = FUN->contents.tunableEnvironment.f24[1];
      this_tunableEnvironment_f22[2] = FUN->contents.tunableEnvironment.f22[2];
      this_tunableEnvironment_f23[2] = FUN->contents.tunableEnvironment.f23[2];
      this_tunableEnvironment_f24[2] = FUN->contents.tunableEnvironment.f24[2];
      for (i7 = 0; i7 < 9; i7++) {
        this_tunableEnvironment_f25[i7] = FUN->
          contents.tunableEnvironment.f25[i7];
        this_tunableEnvironment_f26[i7] = FUN->
          contents.tunableEnvironment.f26[i7];
      }

      for (i7 = 0; i7 < 81; i7++) {
        this_tunableEnvironment_f27[i7] = FUN->
          contents.tunableEnvironment.f27[i7];
      }

      this_tunableEnvironment_f28[0] = FUN->contents.tunableEnvironment.f28[0];
      this_tunableEnvironment_f29[0] = FUN->contents.tunableEnvironment.f29[0];
      this_tunableEnvironment_f30[0] = FUN->contents.tunableEnvironment.f30[0];
      this_tunableEnvironment_f28[1] = FUN->contents.tunableEnvironment.f28[1];
      this_tunableEnvironment_f29[1] = FUN->contents.tunableEnvironment.f29[1];
      this_tunableEnvironment_f30[1] = FUN->contents.tunableEnvironment.f30[1];
      this_tunableEnvironment_f28[2] = FUN->contents.tunableEnvironment.f28[2];
      this_tunableEnvironment_f29[2] = FUN->contents.tunableEnvironment.f29[2];
      this_tunableEnvironment_f30[2] = FUN->contents.tunableEnvironment.f30[2];
      for (i7 = 0; i7 < 9; i7++) {
        this_tunableEnvironment_f31[i7] = FUN->
          contents.tunableEnvironment.f31[i7];
        this_tunableEnvironment_f32[i7] = FUN->
          contents.tunableEnvironment.f32[i7];
      }

      for (i7 = 0; i7 < 25; i7++) {
        this_tunableEnvironment_f33[i7] = FUN->
          contents.tunableEnvironment.f33[i7];
      }

      this_tunableEnvironment_f34 = FUN->contents.tunableEnvironment.f34;
      i7 = this_tunableEnvironment_f35->size[0] *
        this_tunableEnvironment_f35->size[1];
      this_tunableEnvironment_f35->size[0] =
        FUN->contents.tunableEnvironment.f35->size[0];
      this_tunableEnvironment_f35->size[1] =
        FUN->contents.tunableEnvironment.f35->size[1];
      emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f35, i7,
        &nc_emlrtRTEI);
      loop_ub = FUN->contents.tunableEnvironment.f35->size[0] *
        FUN->contents.tunableEnvironment.f35->size[1];
      for (i7 = 0; i7 < loop_ub; i7++) {
        this_tunableEnvironment_f35->data[i7] =
          FUN->contents.tunableEnvironment.f35->data[i7];
      }

      i7 = this_tunableEnvironment_f36->size[0] *
        this_tunableEnvironment_f36->size[1];
      this_tunableEnvironment_f36->size[0] =
        FUN->contents.tunableEnvironment.f36->size[0];
      this_tunableEnvironment_f36->size[1] =
        FUN->contents.tunableEnvironment.f36->size[1];
      emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f36, i7,
        &nc_emlrtRTEI);
      loop_ub = FUN->contents.tunableEnvironment.f36->size[0] *
        FUN->contents.tunableEnvironment.f36->size[1];
      for (i7 = 0; i7 < loop_ub; i7++) {
        this_tunableEnvironment_f36->data[i7] =
          FUN->contents.tunableEnvironment.f36->data[i7];
      }

      i7 = this_tunableEnvironment_f37->size[0];
      this_tunableEnvironment_f37->size[0] =
        FUN->contents.tunableEnvironment.f37->size[0];
      emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f37, i7,
        &nc_emlrtRTEI);
      loop_ub = FUN->contents.tunableEnvironment.f37->size[0];
      for (i7 = 0; i7 < loop_ub; i7++) {
        this_tunableEnvironment_f37->data[i7] =
          FUN->contents.tunableEnvironment.f37->data[i7];
      }

      for (i7 = 0; i7 < 900; i7++) {
        this_tunableEnvironment_f38[i7] = FUN->
          contents.tunableEnvironment.f38[i7];
        this_tunableEnvironment_f39[i7] = FUN->
          contents.tunableEnvironment.f39[i7];
        this_tunableEnvironment_f40[i7] = FUN->
          contents.tunableEnvironment.f40[i7];
      }

      this_tunableEnvironment_f41[0] = FUN->contents.tunableEnvironment.f41[0];
      this_tunableEnvironment_f41[1] = FUN->contents.tunableEnvironment.f41[1];
      this_tunableEnvironment_f41[2] = FUN->contents.tunableEnvironment.f41[2];
      i7 = this_tunableEnvironment_f43->size[0] *
        this_tunableEnvironment_f43->size[1];
      this_tunableEnvironment_f43->size[0] = 1;
      this_tunableEnvironment_f43->size[1] =
        FUN->contents.tunableEnvironment.f43->size[1];
      emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f43, i7,
        &nc_emlrtRTEI);
      loop_ub = FUN->contents.tunableEnvironment.f43->size[0] *
        FUN->contents.tunableEnvironment.f43->size[1];
      for (i7 = 0; i7 < loop_ub; i7++) {
        this_tunableEnvironment_f43->data[i7] =
          FUN->contents.tunableEnvironment.f43->data[i7];
      }

      i7 = this_tunableEnvironment_f44->size[0] *
        this_tunableEnvironment_f44->size[1];
      this_tunableEnvironment_f44->size[0] = 1;
      this_tunableEnvironment_f44->size[1] =
        FUN->contents.tunableEnvironment.f44->size[1];
      emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f44, i7,
        &nc_emlrtRTEI);
      loop_ub = FUN->contents.tunableEnvironment.f44->size[0] *
        FUN->contents.tunableEnvironment.f44->size[1];
      for (i7 = 0; i7 < loop_ub; i7++) {
        this_tunableEnvironment_f44->data[i7] =
          FUN->contents.tunableEnvironment.f44->data[i7];
      }

      b_st.site = &ic_emlrtRSI;
      c_st.site = &emlrtRSI;
      stress_SU(&c_st, x, this_tunableEnvironment_f1, this_tunableEnvironment_f2,
                this_tunableEnvironment_f3, this_tunableEnvironment_f4,
                this_tunableEnvironment_f5, this_tunableEnvironment_f6,
                this_tunableEnvironment_f7, this_tunableEnvironment_f8,
                this_tunableEnvironment_f9, this_tunableEnvironment_f10,
                this_tunableEnvironment_f11, this_tunableEnvironment_f12,
                this_tunableEnvironment_f13, this_tunableEnvironment_f14,
                this_tunableEnvironment_f15, this_tunableEnvironment_f16,
                this_tunableEnvironment_f17, this_tunableEnvironment_f18,
                this_tunableEnvironment_f19, this_tunableEnvironment_f20,
                this_tunableEnvironment_f21, this_tunableEnvironment_f22,
                this_tunableEnvironment_f23, this_tunableEnvironment_f24,
                this_tunableEnvironment_f25, this_tunableEnvironment_f26,
                this_tunableEnvironment_f27, this_tunableEnvironment_f28,
                this_tunableEnvironment_f29, this_tunableEnvironment_f30,
                this_tunableEnvironment_f31, this_tunableEnvironment_f32,
                this_tunableEnvironment_f33, this_tunableEnvironment_f34,
                this_tunableEnvironment_f35, this_tunableEnvironment_f36,
                this_tunableEnvironment_f37, this_tunableEnvironment_f38,
                this_tunableEnvironment_f39, this_tunableEnvironment_f40,
                this_tunableEnvironment_f41,
                FUN->contents.tunableEnvironment.f42,
                this_tunableEnvironment_f43, this_tunableEnvironment_f44, b_fx);
      i7 = b_fx->size[1];
      if (5000 < i7) {
        emlrtDimSizeGeqCheckR2012b(5000, i7, &l_emlrtECI, sp);
      }

      i7 = fx->size[0] * fx->size[1];
      fx->size[0] = 6;
      fx->size[1] = b_fx->size[1];
      emxEnsureCapacity_real_T(sp, fx, i7, &pc_emlrtRTEI);
      loop_ub = b_fx->size[0] * b_fx->size[1];
      for (i7 = 0; i7 < loop_ub; i7++) {
        fx->data[i7] = b_fx->data[i7];
      }
    }
  }

  emxFree_real_T(&this_tunableEnvironment_f44);
  emxFree_real_T(&this_tunableEnvironment_f43);
  emxFree_real_T(&this_tunableEnvironment_f37);
  emxFree_real_T(&this_tunableEnvironment_f36);
  emxFree_real_T(&this_tunableEnvironment_f35);
  emxFree_real_T(&b_fx);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void b_f4(stressStackData *SD, const emlrtStack *sp, coder_internal_ref_1
          *FIRSTFUNEVAL, const coder_internal_ref *FUN, const emxArray_real_T *t,
          emxArray_real_T *y, boolean_T *too_close)
{
  emxArray_real_T *tt;
  emxArray_real_T *r12;
  int32_T y_size_idx_1;
  int32_T loop_ub;
  emxArray_real_T *r13;
  int32_T i;
  int32_T b_y[2];
  int32_T b_tt[2];
  int16_T i26;
  int16_T tmp_data[5000];
  int32_T y_size[2];
  emxArray_real_T y_data;
  int32_T tmp_size[2];
  real_T b_tmp_data[5000];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &tt, 2, &kc_emlrtRTEI, true);
  emxInit_real_T(sp, &r12, 2, &ic_emlrtRTEI, true);

  /*  evalFun */
  /* -------------------------------------------------------------------------- */
  /*  Transform to finite interval: (-Inf,Inf) -> (-1,1). */
  st.site = &jc_emlrtRSI;
  power(&st, t, tt);
  y_size_idx_1 = r12->size[0] * r12->size[1];
  r12->size[0] = 1;
  r12->size[1] = tt->size[1];
  emxEnsureCapacity_real_T(sp, r12, y_size_idx_1, &ic_emlrtRTEI);
  loop_ub = tt->size[0] * tt->size[1];
  for (y_size_idx_1 = 0; y_size_idx_1 < loop_ub; y_size_idx_1++) {
    r12->data[y_size_idx_1] = 1.0 - tt->data[y_size_idx_1];
  }

  st.site = &jc_emlrtRSI;
  rdivide_helper(&st, t, r12, tt);
  st.site = &kc_emlrtRSI;
  b_evalFun(&st, FIRSTFUNEVAL, FUN, tt, y, too_close);
  y_size_idx_1 = y->size[1];
  if (5000 < y_size_idx_1) {
    emlrtDimSizeGeqCheckR2012b(5000, y_size_idx_1, &h_emlrtECI, sp);
  }

  if (!*too_close) {
    emxInit_real_T(sp, &r13, 2, &jc_emlrtRTEI, true);
    for (i = 0; i < 6; i++) {
      st.site = &lc_emlrtRSI;
      power(&st, t, tt);
      y_size_idx_1 = y->size[1];
      b_y[0] = 1;
      b_y[1] = y_size_idx_1;
      b_tt[0] = tt->size[0];
      b_tt[1] = tt->size[1];
      if ((1 != b_tt[0]) || (y_size_idx_1 != b_tt[1])) {
        emlrtSizeEqCheckNDR2012b(&b_y[0], &b_tt[0], &i_emlrtECI, sp);
      }

      i26 = (int16_T)y->size[1];
      loop_ub = i26 - 1;
      for (y_size_idx_1 = 0; y_size_idx_1 <= loop_ub; y_size_idx_1++) {
        tmp_data[y_size_idx_1] = (int16_T)y_size_idx_1;
      }

      st.site = &lc_emlrtRSI;
      power(&st, t, r12);
      y_size_idx_1 = r13->size[0] * r13->size[1];
      r13->size[0] = 1;
      r13->size[1] = r12->size[1];
      emxEnsureCapacity_real_T(sp, r13, y_size_idx_1, &jc_emlrtRTEI);
      loop_ub = r12->size[0] * r12->size[1];
      for (y_size_idx_1 = 0; y_size_idx_1 < loop_ub; y_size_idx_1++) {
        r13->data[y_size_idx_1] = 1.0 - r12->data[y_size_idx_1];
      }

      st.site = &lc_emlrtRSI;
      power(&st, r13, r12);
      loop_ub = y->size[1];
      y_size[0] = 1;
      y_size[1] = loop_ub;
      for (y_size_idx_1 = 0; y_size_idx_1 < loop_ub; y_size_idx_1++) {
        SD->u1.f1.y_data[y_size_idx_1] = y->data[i + y->size[0] * y_size_idx_1] *
          (1.0 + tt->data[y_size_idx_1]);
      }

      y_data.data = &SD->u1.f1.y_data[0];
      y_data.size = &y_size[0];
      y_data.allocatedSize = 5000;
      y_data.numDimensions = 2;
      y_data.canFreeData = false;
      st.site = &lc_emlrtRSI;
      rdivide_helper(&st, &y_data, r12, tt);
      tmp_size[0] = 1;
      tmp_size[1] = tt->size[1];
      loop_ub = tt->size[0] * tt->size[1];
      for (y_size_idx_1 = 0; y_size_idx_1 < loop_ub; y_size_idx_1++) {
        b_tmp_data[y_size_idx_1] = tt->data[y_size_idx_1];
      }

      b_y[0] = 1;
      b_y[1] = i26;
      emlrtSubAssignSizeCheckR2012b(&b_y[0], 2, &tmp_size[0], 2, &j_emlrtECI, sp);
      loop_ub = tmp_size[1];
      for (y_size_idx_1 = 0; y_size_idx_1 < loop_ub; y_size_idx_1++) {
        y->data[i + y->size[0] * tmp_data[y_size_idx_1]] =
          b_tmp_data[y_size_idx_1];
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    emxFree_real_T(&r13);
  }

  emxFree_real_T(&r12);
  emxFree_real_T(&tt);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void b_integrale_num_inf(stressStackData *SD, const emlrtStack *sp, const cell_2
  *FUN_tunableEnvironment, real_T q[6])
{
  coder_internal_ref FUN;
  coder_internal_ref_1 FIRSTFUNEVAL;
  real_T errbnd[6];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  c_emxInitStruct_coder_internal_(sp, &FUN, &l_emlrtRTEI, true);
  st.site = &k_emlrtRSI;
  emxCopyStruct_cell_2(&st, &FUN.contents.tunableEnvironment,
                       FUN_tunableEnvironment, &k_emlrtRTEI);

  /*  quadgk function correction */
  /*  % Gauss-Kronrod (7,15) pair. Use symmetry in defining nodes and weights. */
  /*  Minimum number subintervals to start. */
  /*  Initialize the FIRSTFUNEVAL variable.  Some checks will be done just */
  /*  after the first evaluation. */
  FIRSTFUNEVAL.contents = true;
  st.site = &l_emlrtRSI;
  b_vadapt(SD, &st, &FIRSTFUNEVAL, &FUN, q, errbnd);

  /*  f4 */
  /*  quadgk */
  d_emxFreeStruct_coder_internal_(&FUN);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void c_f4(stressStackData *SD, const emlrtStack *sp, coder_internal_ref_1
          *FIRSTFUNEVAL, const coder_internal_ref *FUN, const emxArray_real_T *t,
          emxArray_real_T *y, boolean_T *too_close)
{
  emxArray_real_T *tt;
  emxArray_real_T *r18;
  int32_T y_size_idx_1;
  int32_T loop_ub;
  emxArray_real_T *r19;
  int32_T i;
  int32_T b_y[2];
  int32_T b_tt[2];
  int16_T i44;
  int16_T tmp_data[5000];
  int32_T y_size[2];
  emxArray_real_T y_data;
  int32_T tmp_size[2];
  real_T b_tmp_data[5000];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &tt, 2, &kc_emlrtRTEI, true);
  emxInit_real_T(sp, &r18, 2, &ic_emlrtRTEI, true);

  /*  evalFun */
  /* -------------------------------------------------------------------------- */
  /*  Transform to finite interval: (-Inf,Inf) -> (-1,1). */
  st.site = &jc_emlrtRSI;
  power(&st, t, tt);
  y_size_idx_1 = r18->size[0] * r18->size[1];
  r18->size[0] = 1;
  r18->size[1] = tt->size[1];
  emxEnsureCapacity_real_T(sp, r18, y_size_idx_1, &ic_emlrtRTEI);
  loop_ub = tt->size[0] * tt->size[1];
  for (y_size_idx_1 = 0; y_size_idx_1 < loop_ub; y_size_idx_1++) {
    r18->data[y_size_idx_1] = 1.0 - tt->data[y_size_idx_1];
  }

  st.site = &jc_emlrtRSI;
  rdivide_helper(&st, t, r18, tt);
  st.site = &kc_emlrtRSI;
  c_evalFun(&st, FIRSTFUNEVAL, FUN, tt, y, too_close);
  y_size_idx_1 = y->size[1];
  if (5000 < y_size_idx_1) {
    emlrtDimSizeGeqCheckR2012b(5000, y_size_idx_1, &h_emlrtECI, sp);
  }

  if (!*too_close) {
    emxInit_real_T(sp, &r19, 2, &jc_emlrtRTEI, true);
    for (i = 0; i < 6; i++) {
      st.site = &lc_emlrtRSI;
      power(&st, t, tt);
      y_size_idx_1 = y->size[1];
      b_y[0] = 1;
      b_y[1] = y_size_idx_1;
      b_tt[0] = tt->size[0];
      b_tt[1] = tt->size[1];
      if ((1 != b_tt[0]) || (y_size_idx_1 != b_tt[1])) {
        emlrtSizeEqCheckNDR2012b(&b_y[0], &b_tt[0], &i_emlrtECI, sp);
      }

      i44 = (int16_T)y->size[1];
      loop_ub = i44 - 1;
      for (y_size_idx_1 = 0; y_size_idx_1 <= loop_ub; y_size_idx_1++) {
        tmp_data[y_size_idx_1] = (int16_T)y_size_idx_1;
      }

      st.site = &lc_emlrtRSI;
      power(&st, t, r18);
      y_size_idx_1 = r19->size[0] * r19->size[1];
      r19->size[0] = 1;
      r19->size[1] = r18->size[1];
      emxEnsureCapacity_real_T(sp, r19, y_size_idx_1, &jc_emlrtRTEI);
      loop_ub = r18->size[0] * r18->size[1];
      for (y_size_idx_1 = 0; y_size_idx_1 < loop_ub; y_size_idx_1++) {
        r19->data[y_size_idx_1] = 1.0 - r18->data[y_size_idx_1];
      }

      st.site = &lc_emlrtRSI;
      power(&st, r19, r18);
      loop_ub = y->size[1];
      y_size[0] = 1;
      y_size[1] = loop_ub;
      for (y_size_idx_1 = 0; y_size_idx_1 < loop_ub; y_size_idx_1++) {
        SD->u1.f2.y_data[y_size_idx_1] = y->data[i + y->size[0] * y_size_idx_1] *
          (1.0 + tt->data[y_size_idx_1]);
      }

      y_data.data = &SD->u1.f2.y_data[0];
      y_data.size = &y_size[0];
      y_data.allocatedSize = 5000;
      y_data.numDimensions = 2;
      y_data.canFreeData = false;
      st.site = &lc_emlrtRSI;
      rdivide_helper(&st, &y_data, r18, tt);
      tmp_size[0] = 1;
      tmp_size[1] = tt->size[1];
      loop_ub = tt->size[0] * tt->size[1];
      for (y_size_idx_1 = 0; y_size_idx_1 < loop_ub; y_size_idx_1++) {
        b_tmp_data[y_size_idx_1] = tt->data[y_size_idx_1];
      }

      b_y[0] = 1;
      b_y[1] = i44;
      emlrtSubAssignSizeCheckR2012b(&b_y[0], 2, &tmp_size[0], 2, &j_emlrtECI, sp);
      loop_ub = tmp_size[1];
      for (y_size_idx_1 = 0; y_size_idx_1 < loop_ub; y_size_idx_1++) {
        y->data[i + y->size[0] * tmp_data[y_size_idx_1]] =
          b_tmp_data[y_size_idx_1];
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    emxFree_real_T(&r19);
  }

  emxFree_real_T(&r18);
  emxFree_real_T(&tt);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void c_integrale_num_inf(stressStackData *SD, const emlrtStack *sp, const cell_2
  *FUN_tunableEnvironment, real_T q[6])
{
  coder_internal_ref FUN;
  coder_internal_ref_1 FIRSTFUNEVAL;
  real_T errbnd[6];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  c_emxInitStruct_coder_internal_(sp, &FUN, &l_emlrtRTEI, true);
  st.site = &k_emlrtRSI;
  emxCopyStruct_cell_2(&st, &FUN.contents.tunableEnvironment,
                       FUN_tunableEnvironment, &k_emlrtRTEI);

  /*  quadgk function correction */
  /*  % Gauss-Kronrod (7,15) pair. Use symmetry in defining nodes and weights. */
  /*  Minimum number subintervals to start. */
  /*  Initialize the FIRSTFUNEVAL variable.  Some checks will be done just */
  /*  after the first evaluation. */
  FIRSTFUNEVAL.contents = true;
  st.site = &l_emlrtRSI;
  c_vadapt(SD, &st, &FIRSTFUNEVAL, &FUN, q, errbnd);

  /*  f4 */
  /*  quadgk */
  d_emxFreeStruct_coder_internal_(&FUN);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void d_f4(stressStackData *SD, const emlrtStack *sp, coder_internal_ref_1
          *FIRSTFUNEVAL, const coder_internal_ref *FUN, const emxArray_real_T *t,
          emxArray_real_T *y, boolean_T *too_close)
{
  emxArray_real_T *tt;
  emxArray_real_T *r24;
  int32_T y_size_idx_1;
  int32_T loop_ub;
  emxArray_real_T *r25;
  int32_T i;
  int32_T b_y[2];
  int32_T b_tt[2];
  int16_T i62;
  int16_T tmp_data[5000];
  int32_T y_size[2];
  emxArray_real_T y_data;
  int32_T tmp_size[2];
  real_T b_tmp_data[5000];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &tt, 2, &kc_emlrtRTEI, true);
  emxInit_real_T(sp, &r24, 2, &ic_emlrtRTEI, true);

  /*  evalFun */
  /* -------------------------------------------------------------------------- */
  /*  Transform to finite interval: (-Inf,Inf) -> (-1,1). */
  st.site = &jc_emlrtRSI;
  power(&st, t, tt);
  y_size_idx_1 = r24->size[0] * r24->size[1];
  r24->size[0] = 1;
  r24->size[1] = tt->size[1];
  emxEnsureCapacity_real_T(sp, r24, y_size_idx_1, &ic_emlrtRTEI);
  loop_ub = tt->size[0] * tt->size[1];
  for (y_size_idx_1 = 0; y_size_idx_1 < loop_ub; y_size_idx_1++) {
    r24->data[y_size_idx_1] = 1.0 - tt->data[y_size_idx_1];
  }

  st.site = &jc_emlrtRSI;
  rdivide_helper(&st, t, r24, tt);
  st.site = &kc_emlrtRSI;
  d_evalFun(&st, FIRSTFUNEVAL, FUN, tt, y, too_close);
  y_size_idx_1 = y->size[1];
  if (5000 < y_size_idx_1) {
    emlrtDimSizeGeqCheckR2012b(5000, y_size_idx_1, &h_emlrtECI, sp);
  }

  if (!*too_close) {
    emxInit_real_T(sp, &r25, 2, &jc_emlrtRTEI, true);
    for (i = 0; i < 6; i++) {
      st.site = &lc_emlrtRSI;
      power(&st, t, tt);
      y_size_idx_1 = y->size[1];
      b_y[0] = 1;
      b_y[1] = y_size_idx_1;
      b_tt[0] = tt->size[0];
      b_tt[1] = tt->size[1];
      if ((1 != b_tt[0]) || (y_size_idx_1 != b_tt[1])) {
        emlrtSizeEqCheckNDR2012b(&b_y[0], &b_tt[0], &i_emlrtECI, sp);
      }

      i62 = (int16_T)y->size[1];
      loop_ub = i62 - 1;
      for (y_size_idx_1 = 0; y_size_idx_1 <= loop_ub; y_size_idx_1++) {
        tmp_data[y_size_idx_1] = (int16_T)y_size_idx_1;
      }

      st.site = &lc_emlrtRSI;
      power(&st, t, r24);
      y_size_idx_1 = r25->size[0] * r25->size[1];
      r25->size[0] = 1;
      r25->size[1] = r24->size[1];
      emxEnsureCapacity_real_T(sp, r25, y_size_idx_1, &jc_emlrtRTEI);
      loop_ub = r24->size[0] * r24->size[1];
      for (y_size_idx_1 = 0; y_size_idx_1 < loop_ub; y_size_idx_1++) {
        r25->data[y_size_idx_1] = 1.0 - r24->data[y_size_idx_1];
      }

      st.site = &lc_emlrtRSI;
      power(&st, r25, r24);
      loop_ub = y->size[1];
      y_size[0] = 1;
      y_size[1] = loop_ub;
      for (y_size_idx_1 = 0; y_size_idx_1 < loop_ub; y_size_idx_1++) {
        SD->u1.f3.y_data[y_size_idx_1] = y->data[i + y->size[0] * y_size_idx_1] *
          (1.0 + tt->data[y_size_idx_1]);
      }

      y_data.data = &SD->u1.f3.y_data[0];
      y_data.size = &y_size[0];
      y_data.allocatedSize = 5000;
      y_data.numDimensions = 2;
      y_data.canFreeData = false;
      st.site = &lc_emlrtRSI;
      rdivide_helper(&st, &y_data, r24, tt);
      tmp_size[0] = 1;
      tmp_size[1] = tt->size[1];
      loop_ub = tt->size[0] * tt->size[1];
      for (y_size_idx_1 = 0; y_size_idx_1 < loop_ub; y_size_idx_1++) {
        b_tmp_data[y_size_idx_1] = tt->data[y_size_idx_1];
      }

      b_y[0] = 1;
      b_y[1] = i62;
      emlrtSubAssignSizeCheckR2012b(&b_y[0], 2, &tmp_size[0], 2, &j_emlrtECI, sp);
      loop_ub = tmp_size[1];
      for (y_size_idx_1 = 0; y_size_idx_1 < loop_ub; y_size_idx_1++) {
        y->data[i + y->size[0] * tmp_data[y_size_idx_1]] =
          b_tmp_data[y_size_idx_1];
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    emxFree_real_T(&r25);
  }

  emxFree_real_T(&r24);
  emxFree_real_T(&tt);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void d_integrale_num_inf(stressStackData *SD, const emlrtStack *sp, const cell_2
  *FUN_tunableEnvironment, real_T q[6])
{
  coder_internal_ref FUN;
  coder_internal_ref_1 FIRSTFUNEVAL;
  real_T errbnd[6];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  c_emxInitStruct_coder_internal_(sp, &FUN, &l_emlrtRTEI, true);
  st.site = &k_emlrtRSI;
  emxCopyStruct_cell_2(&st, &FUN.contents.tunableEnvironment,
                       FUN_tunableEnvironment, &k_emlrtRTEI);

  /*  quadgk function correction */
  /*  % Gauss-Kronrod (7,15) pair. Use symmetry in defining nodes and weights. */
  /*  Minimum number subintervals to start. */
  /*  Initialize the FIRSTFUNEVAL variable.  Some checks will be done just */
  /*  after the first evaluation. */
  FIRSTFUNEVAL.contents = true;
  st.site = &l_emlrtRSI;
  d_vadapt(SD, &st, &FIRSTFUNEVAL, &FUN, q, errbnd);

  /*  f4 */
  /*  quadgk */
  d_emxFreeStruct_coder_internal_(&FUN);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void e_f4(stressStackData *SD, const emlrtStack *sp, coder_internal_ref_1
          *FIRSTFUNEVAL, const coder_internal_ref *FUN, const emxArray_real_T *t,
          emxArray_real_T *y, boolean_T *too_close)
{
  emxArray_real_T *tt;
  emxArray_real_T *r30;
  int32_T y_size_idx_1;
  int32_T loop_ub;
  emxArray_real_T *r31;
  int32_T i;
  int32_T b_y[2];
  int32_T b_tt[2];
  int16_T i80;
  int16_T tmp_data[5000];
  int32_T y_size[2];
  emxArray_real_T y_data;
  int32_T tmp_size[2];
  real_T b_tmp_data[5000];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &tt, 2, &kc_emlrtRTEI, true);
  emxInit_real_T(sp, &r30, 2, &ic_emlrtRTEI, true);

  /*  evalFun */
  /* -------------------------------------------------------------------------- */
  /*  Transform to finite interval: (-Inf,Inf) -> (-1,1). */
  st.site = &jc_emlrtRSI;
  power(&st, t, tt);
  y_size_idx_1 = r30->size[0] * r30->size[1];
  r30->size[0] = 1;
  r30->size[1] = tt->size[1];
  emxEnsureCapacity_real_T(sp, r30, y_size_idx_1, &ic_emlrtRTEI);
  loop_ub = tt->size[0] * tt->size[1];
  for (y_size_idx_1 = 0; y_size_idx_1 < loop_ub; y_size_idx_1++) {
    r30->data[y_size_idx_1] = 1.0 - tt->data[y_size_idx_1];
  }

  st.site = &jc_emlrtRSI;
  rdivide_helper(&st, t, r30, tt);
  st.site = &kc_emlrtRSI;
  e_evalFun(&st, FIRSTFUNEVAL, FUN, tt, y, too_close);
  y_size_idx_1 = y->size[1];
  if (5000 < y_size_idx_1) {
    emlrtDimSizeGeqCheckR2012b(5000, y_size_idx_1, &h_emlrtECI, sp);
  }

  if (!*too_close) {
    emxInit_real_T(sp, &r31, 2, &jc_emlrtRTEI, true);
    for (i = 0; i < 6; i++) {
      st.site = &lc_emlrtRSI;
      power(&st, t, tt);
      y_size_idx_1 = y->size[1];
      b_y[0] = 1;
      b_y[1] = y_size_idx_1;
      b_tt[0] = tt->size[0];
      b_tt[1] = tt->size[1];
      if ((1 != b_tt[0]) || (y_size_idx_1 != b_tt[1])) {
        emlrtSizeEqCheckNDR2012b(&b_y[0], &b_tt[0], &i_emlrtECI, sp);
      }

      i80 = (int16_T)y->size[1];
      loop_ub = i80 - 1;
      for (y_size_idx_1 = 0; y_size_idx_1 <= loop_ub; y_size_idx_1++) {
        tmp_data[y_size_idx_1] = (int16_T)y_size_idx_1;
      }

      st.site = &lc_emlrtRSI;
      power(&st, t, r30);
      y_size_idx_1 = r31->size[0] * r31->size[1];
      r31->size[0] = 1;
      r31->size[1] = r30->size[1];
      emxEnsureCapacity_real_T(sp, r31, y_size_idx_1, &jc_emlrtRTEI);
      loop_ub = r30->size[0] * r30->size[1];
      for (y_size_idx_1 = 0; y_size_idx_1 < loop_ub; y_size_idx_1++) {
        r31->data[y_size_idx_1] = 1.0 - r30->data[y_size_idx_1];
      }

      st.site = &lc_emlrtRSI;
      power(&st, r31, r30);
      loop_ub = y->size[1];
      y_size[0] = 1;
      y_size[1] = loop_ub;
      for (y_size_idx_1 = 0; y_size_idx_1 < loop_ub; y_size_idx_1++) {
        SD->u1.f4.y_data[y_size_idx_1] = y->data[i + y->size[0] * y_size_idx_1] *
          (1.0 + tt->data[y_size_idx_1]);
      }

      y_data.data = &SD->u1.f4.y_data[0];
      y_data.size = &y_size[0];
      y_data.allocatedSize = 5000;
      y_data.numDimensions = 2;
      y_data.canFreeData = false;
      st.site = &lc_emlrtRSI;
      rdivide_helper(&st, &y_data, r30, tt);
      tmp_size[0] = 1;
      tmp_size[1] = tt->size[1];
      loop_ub = tt->size[0] * tt->size[1];
      for (y_size_idx_1 = 0; y_size_idx_1 < loop_ub; y_size_idx_1++) {
        b_tmp_data[y_size_idx_1] = tt->data[y_size_idx_1];
      }

      b_y[0] = 1;
      b_y[1] = i80;
      emlrtSubAssignSizeCheckR2012b(&b_y[0], 2, &tmp_size[0], 2, &j_emlrtECI, sp);
      loop_ub = tmp_size[1];
      for (y_size_idx_1 = 0; y_size_idx_1 < loop_ub; y_size_idx_1++) {
        y->data[i + y->size[0] * tmp_data[y_size_idx_1]] =
          b_tmp_data[y_size_idx_1];
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    emxFree_real_T(&r31);
  }

  emxFree_real_T(&r30);
  emxFree_real_T(&tt);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void e_integrale_num_inf(stressStackData *SD, const emlrtStack *sp, const cell_2
  *FUN_tunableEnvironment, real_T q[6])
{
  coder_internal_ref FUN;
  coder_internal_ref_1 FIRSTFUNEVAL;
  real_T errbnd[6];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  c_emxInitStruct_coder_internal_(sp, &FUN, &l_emlrtRTEI, true);
  st.site = &k_emlrtRSI;
  emxCopyStruct_cell_2(&st, &FUN.contents.tunableEnvironment,
                       FUN_tunableEnvironment, &k_emlrtRTEI);

  /*  quadgk function correction */
  /*  % Gauss-Kronrod (7,15) pair. Use symmetry in defining nodes and weights. */
  /*  Minimum number subintervals to start. */
  /*  Initialize the FIRSTFUNEVAL variable.  Some checks will be done just */
  /*  after the first evaluation. */
  FIRSTFUNEVAL.contents = true;
  st.site = &l_emlrtRSI;
  e_vadapt(SD, &st, &FIRSTFUNEVAL, &FUN, q, errbnd);

  /*  f4 */
  /*  quadgk */
  d_emxFreeStruct_coder_internal_(&FUN);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void f4(stressStackData *SD, const emlrtStack *sp, coder_internal_ref_1
        *FIRSTFUNEVAL, const coder_internal_ref *FUN, const emxArray_real_T *t,
        emxArray_real_T *y, boolean_T *too_close)
{
  emxArray_real_T *tt;
  emxArray_real_T *r4;
  int32_T y_size_idx_1;
  int32_T loop_ub;
  emxArray_real_T *r5;
  int32_T i;
  int32_T b_y[2];
  int32_T b_tt[2];
  int16_T i6;
  int16_T tmp_data[5000];
  int32_T y_size[2];
  emxArray_real_T y_data;
  int32_T tmp_size[2];
  real_T b_tmp_data[5000];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &tt, 2, &kc_emlrtRTEI, true);
  emxInit_real_T(sp, &r4, 2, &ic_emlrtRTEI, true);

  /*  evalFun */
  /* -------------------------------------------------------------------------- */
  /*  Transform to finite interval: (-Inf,Inf) -> (-1,1). */
  st.site = &jc_emlrtRSI;
  power(&st, t, tt);
  y_size_idx_1 = r4->size[0] * r4->size[1];
  r4->size[0] = 1;
  r4->size[1] = tt->size[1];
  emxEnsureCapacity_real_T(sp, r4, y_size_idx_1, &ic_emlrtRTEI);
  loop_ub = tt->size[0] * tt->size[1];
  for (y_size_idx_1 = 0; y_size_idx_1 < loop_ub; y_size_idx_1++) {
    r4->data[y_size_idx_1] = 1.0 - tt->data[y_size_idx_1];
  }

  st.site = &jc_emlrtRSI;
  rdivide_helper(&st, t, r4, tt);
  st.site = &kc_emlrtRSI;
  evalFun(&st, FIRSTFUNEVAL, FUN, tt, y, too_close);
  y_size_idx_1 = y->size[1];
  if (5000 < y_size_idx_1) {
    emlrtDimSizeGeqCheckR2012b(5000, y_size_idx_1, &h_emlrtECI, sp);
  }

  if (!*too_close) {
    emxInit_real_T(sp, &r5, 2, &jc_emlrtRTEI, true);
    for (i = 0; i < 6; i++) {
      st.site = &lc_emlrtRSI;
      power(&st, t, tt);
      y_size_idx_1 = y->size[1];
      b_y[0] = 1;
      b_y[1] = y_size_idx_1;
      b_tt[0] = tt->size[0];
      b_tt[1] = tt->size[1];
      if ((1 != b_tt[0]) || (y_size_idx_1 != b_tt[1])) {
        emlrtSizeEqCheckNDR2012b(&b_y[0], &b_tt[0], &i_emlrtECI, sp);
      }

      i6 = (int16_T)y->size[1];
      loop_ub = i6 - 1;
      for (y_size_idx_1 = 0; y_size_idx_1 <= loop_ub; y_size_idx_1++) {
        tmp_data[y_size_idx_1] = (int16_T)y_size_idx_1;
      }

      st.site = &lc_emlrtRSI;
      power(&st, t, r4);
      y_size_idx_1 = r5->size[0] * r5->size[1];
      r5->size[0] = 1;
      r5->size[1] = r4->size[1];
      emxEnsureCapacity_real_T(sp, r5, y_size_idx_1, &jc_emlrtRTEI);
      loop_ub = r4->size[0] * r4->size[1];
      for (y_size_idx_1 = 0; y_size_idx_1 < loop_ub; y_size_idx_1++) {
        r5->data[y_size_idx_1] = 1.0 - r4->data[y_size_idx_1];
      }

      st.site = &lc_emlrtRSI;
      power(&st, r5, r4);
      loop_ub = y->size[1];
      y_size[0] = 1;
      y_size[1] = loop_ub;
      for (y_size_idx_1 = 0; y_size_idx_1 < loop_ub; y_size_idx_1++) {
        SD->u1.f0.y_data[y_size_idx_1] = y->data[i + y->size[0] * y_size_idx_1] *
          (1.0 + tt->data[y_size_idx_1]);
      }

      y_data.data = &SD->u1.f0.y_data[0];
      y_data.size = &y_size[0];
      y_data.allocatedSize = 5000;
      y_data.numDimensions = 2;
      y_data.canFreeData = false;
      st.site = &lc_emlrtRSI;
      rdivide_helper(&st, &y_data, r4, tt);
      tmp_size[0] = 1;
      tmp_size[1] = tt->size[1];
      loop_ub = tt->size[0] * tt->size[1];
      for (y_size_idx_1 = 0; y_size_idx_1 < loop_ub; y_size_idx_1++) {
        b_tmp_data[y_size_idx_1] = tt->data[y_size_idx_1];
      }

      b_y[0] = 1;
      b_y[1] = i6;
      emlrtSubAssignSizeCheckR2012b(&b_y[0], 2, &tmp_size[0], 2, &j_emlrtECI, sp);
      loop_ub = tmp_size[1];
      for (y_size_idx_1 = 0; y_size_idx_1 < loop_ub; y_size_idx_1++) {
        y->data[i + y->size[0] * tmp_data[y_size_idx_1]] =
          b_tmp_data[y_size_idx_1];
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    emxFree_real_T(&r5);
  }

  emxFree_real_T(&r4);
  emxFree_real_T(&tt);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void integrale_num_inf(stressStackData *SD, const emlrtStack *sp, const cell_2
  *FUN_tunableEnvironment, real_T q[6])
{
  coder_internal_ref FUN;
  coder_internal_ref_1 FIRSTFUNEVAL;
  real_T errbnd[6];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  c_emxInitStruct_coder_internal_(sp, &FUN, &l_emlrtRTEI, true);
  st.site = &k_emlrtRSI;
  emxCopyStruct_cell_2(&st, &FUN.contents.tunableEnvironment,
                       FUN_tunableEnvironment, &k_emlrtRTEI);

  /*  quadgk function correction */
  /*  % Gauss-Kronrod (7,15) pair. Use symmetry in defining nodes and weights. */
  /*  Minimum number subintervals to start. */
  /*  Initialize the FIRSTFUNEVAL variable.  Some checks will be done just */
  /*  after the first evaluation. */
  FIRSTFUNEVAL.contents = true;
  st.site = &l_emlrtRSI;
  vadapt(SD, &st, &FIRSTFUNEVAL, &FUN, q, errbnd);

  /*  f4 */
  /*  quadgk */
  d_emxFreeStruct_coder_internal_(&FUN);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (integrale_num_inf.c) */
