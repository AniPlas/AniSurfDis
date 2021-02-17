/*
 * _coder_rho_distri_api.c
 *
 * Code generation for function '_coder_rho_distri_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "rho_distri.h"
#include "_coder_rho_distri_api.h"
#include "rho_distri_emxutil.h"
#include "rho_distri_data.h"

/* Variable Definitions */
static emlrtRTEInfo nb_emlrtRTEI = { 1,/* lineNo */
  1,                                   /* colNo */
  "_coder_rho_distri_api",             /* fName */
  ""                                   /* pName */
};

/* Function Declarations */
static void ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, creal_T ret[3]);
static real_T (*bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3];
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *C_rho, const
  char_T *identifier, emxArray_real_T *y);
static void cb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, creal_T ret[9]);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static real_T (*db_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[25];
static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *C_I,
  const char_T *identifier))[81];
static real_T eb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static const mxArray *emlrt_marshallOut(const emxArray_real_T *u);
static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[81];
static void fb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *P_I, const
  char_T *identifier, creal_T y[3]);
static real_T (*gb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[900];
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, creal_T y[3]);
static void hb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static real_T (*i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *P_I_Re,
  const char_T *identifier))[3];
static real_T (*j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[3];
static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *A_I, const
  char_T *identifier, creal_T y[9]);
static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, creal_T y[9]);
static real_T (*m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *h, const
  char_T *identifier))[25];
static real_T (*n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[25];
static real_T o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *XL1, const
  char_T *identifier);
static real_T p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *x_w, const
  char_T *identifier, emxArray_real_T *y);
static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static real_T (*s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *C, const
  char_T *identifier))[900];
static real_T (*t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[900];
static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Range, const
  char_T *identifier, emxArray_real_T *y);
static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static real_T (*y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[81];

/* Function Definitions */
static void ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, creal_T ret[3])
{
  static const int32_T dims[1] = { 3 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", true, 1U, dims);
  emlrtImportArrayR2015b(sp, src, ret, 8, true);
  emlrtDestroyArray(&src);
}

static real_T (*bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3]
{
  real_T (*ret)[3];
  static const int32_T dims[1] = { 3 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  ret = (real_T (*)[3])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *C_rho,
  const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(sp, emlrtAlias(C_rho), &thisId, y);
  emlrtDestroyArray(&C_rho);
}

static void cb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, creal_T ret[9])
{
  static const int32_T dims[2] = { 3, 3 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", true, 2U, dims);
  emlrtImportArrayR2015b(sp, src, ret, 8, true);
  emlrtDestroyArray(&src);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  x_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T (*db_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[25]
{
  real_T (*ret)[25];
  static const int32_T dims[2] = { 5, 5 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[25])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *C_I,
  const char_T *identifier))[81]
{
  real_T (*y)[81];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = f_emlrt_marshallIn(sp, emlrtAlias(C_I), &thisId);
  emlrtDestroyArray(&C_I);
  return y;
}

static real_T eb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static const mxArray *emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m10;
  static const int32_T iv11[2] = { 0, 0 };

  y = NULL;
  m10 = emlrtCreateNumericArray(2, iv11, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m10, &u->data[0]);
  emlrtSetDimensions((mxArray *)m10, u->size, 2);
  emlrtAssign(&y, m10);
  return y;
}

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[81]
{
  real_T (*y)[81];
  y = y_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static void fb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[1] = { -1 };

  const boolean_T bv1[1] = { true };

  int32_T iv13[1];
  int32_T i18;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims, &bv1[0],
    iv13);
  ret->allocatedSize = iv13[0];
  i18 = ret->size[0];
  ret->size[0] = iv13[0];
  emxEnsureCapacity_real_T(sp, ret, i18, (emlrtRTEInfo *)NULL);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *P_I, const
  char_T *identifier, creal_T y[3])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  h_emlrt_marshallIn(sp, emlrtAlias(P_I), &thisId, y);
  emlrtDestroyArray(&P_I);
}

static real_T (*gb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[900]
{
  real_T (*ret)[900];
  static const int32_T dims[2] = { 30, 30 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[900])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, creal_T y[3])
{
  ab_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void hb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { 1, -1 };

  const boolean_T bv2[2] = { false, true };

  int32_T iv14[2];
  int32_T i19;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv2[0],
    iv14);
  ret->allocatedSize = iv14[0] * iv14[1];
  i19 = ret->size[0] * ret->size[1];
  ret->size[0] = iv14[0];
  ret->size[1] = iv14[1];
  emxEnsureCapacity_real_T(sp, ret, i19, (emlrtRTEInfo *)NULL);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static real_T (*i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *P_I_Re,
  const char_T *identifier))[3]
{
  real_T (*y)[3];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = j_emlrt_marshallIn(sp, emlrtAlias(P_I_Re), &thisId);
  emlrtDestroyArray(&P_I_Re);
  return y;
}
  static real_T (*j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[3]
{
  real_T (*y)[3];
  y = bb_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *A_I, const
  char_T *identifier, creal_T y[9])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  l_emlrt_marshallIn(sp, emlrtAlias(A_I), &thisId, y);
  emlrtDestroyArray(&A_I);
}

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, creal_T y[9])
{
  cb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T (*m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *h, const
  char_T *identifier))[25]
{
  real_T (*y)[25];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = n_emlrt_marshallIn(sp, emlrtAlias(h), &thisId);
  emlrtDestroyArray(&h);
  return y;
}
  static real_T (*n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[25]
{
  real_T (*y)[25];
  y = db_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *XL1, const
  char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = p_emlrt_marshallIn(sp, emlrtAlias(XL1), &thisId);
  emlrtDestroyArray(&XL1);
  return y;
}

static real_T p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = eb_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *x_w, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  r_emlrt_marshallIn(sp, emlrtAlias(x_w), &thisId, y);
  emlrtDestroyArray(&x_w);
}

static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  fb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T (*s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *C, const
  char_T *identifier))[900]
{
  real_T (*y)[900];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = t_emlrt_marshallIn(sp, emlrtAlias(C), &thisId);
  emlrtDestroyArray(&C);
  return y;
}
  static real_T (*t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[900]
{
  real_T (*y)[900];
  y = gb_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Range, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  v_emlrt_marshallIn(sp, emlrtAlias(Range), &thisId, y);
  emlrtDestroyArray(&Range);
}

static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  hb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { -1, -1 };

  const boolean_T bv0[2] = { true, true };

  int32_T iv12[2];
  int32_T i17;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv0[0],
    iv12);
  ret->allocatedSize = iv12[0] * iv12[1];
  i17 = ret->size[0] * ret->size[1];
  ret->size[0] = iv12[0];
  ret->size[1] = iv12[1];
  emxEnsureCapacity_real_T(sp, ret, i17, (emlrtRTEInfo *)NULL);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static real_T (*y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[81]
{
  real_T (*ret)[81];
  static const int32_T dims[4] = { 3, 3, 3, 3 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 4U, dims);
  ret = (real_T (*)[81])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  void rho_distri_api(const mxArray * const prhs[49], int32_T nlhs, const
                      mxArray *plhs[1])
{
  emxArray_real_T *C_rho;
  emxArray_real_T *C0_Cinv_C0_rho;
  emxArray_real_T *C0_Cinv_rho;
  emxArray_real_T *CH_H_rho;
  emxArray_real_T *CI_I_rho;
  emxArray_real_T *CH_H0_H_rho;
  emxArray_real_T *CI_H0_I_rho;
  emxArray_real_T *weights;
  emxArray_real_T *x_w;
  emxArray_real_T *Range;
  emxArray_real_T *distri_rho;
  real_T (*C_I)[81];
  creal_T P_I[3];
  real_T (*P_I_Re)[3];
  real_T (*P_I_Im)[3];
  creal_T A_I[9];
  creal_T B_I[9];
  real_T (*C_II)[81];
  creal_T P_II[3];
  real_T (*P_II_Re)[3];
  real_T (*P_II_Im)[3];
  creal_T A_II[9];
  creal_T B_II[9];
  real_T (*C_GB)[81];
  creal_T P_GB[3];
  real_T (*P_GB_Re)[3];
  real_T (*P_GB_Im)[3];
  creal_T A_GB[9];
  creal_T B_GB[9];
  real_T (*C_SU)[81];
  creal_T P_SU[3];
  real_T (*P_SU_Re)[3];
  real_T (*P_SU_Im)[3];
  creal_T A_SU[9];
  creal_T B_SU[9];
  real_T (*C_SL)[81];
  creal_T P_SL[3];
  real_T (*P_SL_Re)[3];
  real_T (*P_SL_Im)[3];
  creal_T A_SL[9];
  creal_T B_SL[9];
  real_T (*h)[25];
  real_T XL1;
  real_T XL2;
  real_T N_app;
  real_T (*C)[900];
  real_T (*C0_Cinv)[900];
  real_T (*C0_Cinv_C0)[900];
  real_T (*b)[3];
  real_T n;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  (void)nlhs;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &C_rho, 2, &nb_emlrtRTEI, true);
  emxInit_real_T(&st, &C0_Cinv_C0_rho, 2, &nb_emlrtRTEI, true);
  emxInit_real_T(&st, &C0_Cinv_rho, 2, &nb_emlrtRTEI, true);
  emxInit_real_T(&st, &CH_H_rho, 2, &nb_emlrtRTEI, true);
  emxInit_real_T(&st, &CI_I_rho, 2, &nb_emlrtRTEI, true);
  emxInit_real_T(&st, &CH_H0_H_rho, 2, &nb_emlrtRTEI, true);
  emxInit_real_T(&st, &CI_H0_I_rho, 2, &nb_emlrtRTEI, true);
  emxInit_real_T(&st, &weights, 2, &nb_emlrtRTEI, true);
  emxInit_real_T(&st, &x_w, 1, &nb_emlrtRTEI, true);
  emxInit_real_T(&st, &Range, 2, &nb_emlrtRTEI, true);
  emxInit_real_T(&st, &distri_rho, 2, &nb_emlrtRTEI, true);

  /* Marshall function inputs */
  C_rho->canFreeData = false;
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "C_rho", C_rho);
  C0_Cinv_C0_rho->canFreeData = false;
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "C0_Cinv_C0_rho", C0_Cinv_C0_rho);
  C0_Cinv_rho->canFreeData = false;
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "C0_Cinv_rho", C0_Cinv_rho);
  CH_H_rho->canFreeData = false;
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "CH_H_rho", CH_H_rho);
  CI_I_rho->canFreeData = false;
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "CI_I_rho", CI_I_rho);
  CH_H0_H_rho->canFreeData = false;
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[5]), "CH_H0_H_rho", CH_H0_H_rho);
  CI_H0_I_rho->canFreeData = false;
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[6]), "CI_H0_I_rho", CI_H0_I_rho);
  C_I = e_emlrt_marshallIn(&st, emlrtAlias(prhs[7]), "C_I");
  g_emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "P_I", P_I);
  P_I_Re = i_emlrt_marshallIn(&st, emlrtAlias(prhs[9]), "P_I_Re");
  P_I_Im = i_emlrt_marshallIn(&st, emlrtAlias(prhs[10]), "P_I_Im");
  k_emlrt_marshallIn(&st, emlrtAliasP(prhs[11]), "A_I", A_I);
  k_emlrt_marshallIn(&st, emlrtAliasP(prhs[12]), "B_I", B_I);
  C_II = e_emlrt_marshallIn(&st, emlrtAlias(prhs[13]), "C_II");
  g_emlrt_marshallIn(&st, emlrtAliasP(prhs[14]), "P_II", P_II);
  P_II_Re = i_emlrt_marshallIn(&st, emlrtAlias(prhs[15]), "P_II_Re");
  P_II_Im = i_emlrt_marshallIn(&st, emlrtAlias(prhs[16]), "P_II_Im");
  k_emlrt_marshallIn(&st, emlrtAliasP(prhs[17]), "A_II", A_II);
  k_emlrt_marshallIn(&st, emlrtAliasP(prhs[18]), "B_II", B_II);
  C_GB = e_emlrt_marshallIn(&st, emlrtAlias(prhs[19]), "C_GB");
  g_emlrt_marshallIn(&st, emlrtAliasP(prhs[20]), "P_GB", P_GB);
  P_GB_Re = i_emlrt_marshallIn(&st, emlrtAlias(prhs[21]), "P_GB_Re");
  P_GB_Im = i_emlrt_marshallIn(&st, emlrtAlias(prhs[22]), "P_GB_Im");
  k_emlrt_marshallIn(&st, emlrtAliasP(prhs[23]), "A_GB", A_GB);
  k_emlrt_marshallIn(&st, emlrtAliasP(prhs[24]), "B_GB", B_GB);
  C_SU = e_emlrt_marshallIn(&st, emlrtAlias(prhs[25]), "C_SU");
  g_emlrt_marshallIn(&st, emlrtAliasP(prhs[26]), "P_SU", P_SU);
  P_SU_Re = i_emlrt_marshallIn(&st, emlrtAlias(prhs[27]), "P_SU_Re");
  P_SU_Im = i_emlrt_marshallIn(&st, emlrtAlias(prhs[28]), "P_SU_Im");
  k_emlrt_marshallIn(&st, emlrtAliasP(prhs[29]), "A_SU", A_SU);
  k_emlrt_marshallIn(&st, emlrtAliasP(prhs[30]), "B_SU", B_SU);
  C_SL = e_emlrt_marshallIn(&st, emlrtAlias(prhs[31]), "C_SL");
  g_emlrt_marshallIn(&st, emlrtAliasP(prhs[32]), "P_SL", P_SL);
  P_SL_Re = i_emlrt_marshallIn(&st, emlrtAlias(prhs[33]), "P_SL_Re");
  P_SL_Im = i_emlrt_marshallIn(&st, emlrtAlias(prhs[34]), "P_SL_Im");
  k_emlrt_marshallIn(&st, emlrtAliasP(prhs[35]), "A_SL", A_SL);
  k_emlrt_marshallIn(&st, emlrtAliasP(prhs[36]), "B_SL", B_SL);
  h = m_emlrt_marshallIn(&st, emlrtAlias(prhs[37]), "h");
  XL1 = o_emlrt_marshallIn(&st, emlrtAliasP(prhs[38]), "XL1");
  XL2 = o_emlrt_marshallIn(&st, emlrtAliasP(prhs[39]), "XL2");
  N_app = o_emlrt_marshallIn(&st, emlrtAliasP(prhs[40]), "N_app");
  weights->canFreeData = false;
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[41]), "weights", weights);
  x_w->canFreeData = false;
  q_emlrt_marshallIn(&st, emlrtAlias(prhs[42]), "x_w", x_w);
  C = s_emlrt_marshallIn(&st, emlrtAlias(prhs[43]), "C");
  C0_Cinv = s_emlrt_marshallIn(&st, emlrtAlias(prhs[44]), "C0_Cinv");
  C0_Cinv_C0 = s_emlrt_marshallIn(&st, emlrtAlias(prhs[45]), "C0_Cinv_C0");
  b = i_emlrt_marshallIn(&st, emlrtAlias(prhs[46]), "b");
  n = o_emlrt_marshallIn(&st, emlrtAliasP(prhs[47]), "n");
  Range->canFreeData = false;
  u_emlrt_marshallIn(&st, emlrtAlias(prhs[48]), "Range", Range);

  /* Invoke the target function */
  rho_distri(&st, C_rho, C0_Cinv_C0_rho, C0_Cinv_rho, CH_H_rho, CI_I_rho,
             CH_H0_H_rho, CI_H0_I_rho, *C_I, P_I, *P_I_Re, *P_I_Im, A_I, B_I,
             *C_II, P_II, *P_II_Re, *P_II_Im, A_II, B_II, *C_GB, P_GB, *P_GB_Re,
             *P_GB_Im, A_GB, B_GB, *C_SU, P_SU, *P_SU_Re, *P_SU_Im, A_SU, B_SU, *
             C_SL, P_SL, *P_SL_Re, *P_SL_Im, A_SL, B_SL, *h, XL1, XL2, N_app,
             weights, x_w, *C, *C0_Cinv, *C0_Cinv_C0, *b, n, Range, distri_rho);

  /* Marshall function outputs */
  distri_rho->canFreeData = false;
  plhs[0] = emlrt_marshallOut(distri_rho);
  emxFree_real_T(&distri_rho);
  emxFree_real_T(&Range);
  emxFree_real_T(&x_w);
  emxFree_real_T(&weights);
  emxFree_real_T(&CI_H0_I_rho);
  emxFree_real_T(&CH_H0_H_rho);
  emxFree_real_T(&CI_I_rho);
  emxFree_real_T(&CH_H_rho);
  emxFree_real_T(&C0_Cinv_rho);
  emxFree_real_T(&C0_Cinv_C0_rho);
  emxFree_real_T(&C_rho);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_rho_distri_api.c) */
