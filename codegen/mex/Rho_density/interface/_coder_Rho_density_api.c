/*
 * _coder_Rho_density_api.c
 *
 * Code generation for function '_coder_Rho_density_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Rho_density.h"
#include "_coder_Rho_density_api.h"
#include "Rho_density_emxutil.h"
#include "Rho_density_data.h"

/* Variable Definitions */
static emlrtRTEInfo bb_emlrtRTEI = { 1,/* lineNo */
  1,                                   /* colNo */
  "_coder_Rho_density_api",            /* fName */
  ""                                   /* pName */
};

/* Function Declarations */
static real_T (*ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[81];
static void bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, creal_T ret[3]);
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b, const
  char_T *identifier))[3];
static void cb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, creal_T ret[9]);
static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[3];
static real_T (*db_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[25];
static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *n, const
  char_T *identifier);
static void eb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static const mxArray *emlrt_marshallOut(const emxArray_real_T *u);
static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *XL1, const
  char_T *identifier, emxArray_real_T *y);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *C_rho, const
  char_T *identifier, emxArray_real_T *y);
static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static real_T (*k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *C_I,
  const char_T *identifier))[81];
static real_T (*l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[81];
static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *P_I, const
  char_T *identifier, creal_T y[3]);
static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, creal_T y[3]);
static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *A_I, const
  char_T *identifier, creal_T y[9]);
static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, creal_T y[9]);
static real_T (*q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *h, const
  char_T *identifier))[25];
static real_T (*r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[25];
static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *x_w, const
  char_T *identifier, emxArray_real_T *y);
static void t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static real_T (*v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3];
static real_T w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);

/* Function Definitions */
static real_T (*ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[81]
{
  real_T (*ret)[81];
  static const int32_T dims[4] = { 3, 3, 3, 3 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 4U, dims);
  ret = (real_T (*)[81])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static void bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId, creal_T ret[3])
{
  static const int32_T dims[1] = { 3 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", true, 1U, dims);
  emlrtImportArrayR2015b(sp, src, ret, 8, true);
  emlrtDestroyArray(&src);
}

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b, const
  char_T *identifier))[3]
{
  real_T (*y)[3];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(b), &thisId);
  emlrtDestroyArray(&b);
  return y;
}
  static void cb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId, creal_T ret[9])
{
  static const int32_T dims[2] = { 3, 3 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", true, 2U, dims);
  emlrtImportArrayR2015b(sp, src, ret, 8, true);
  emlrtDestroyArray(&src);
}

static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[3]
{
  real_T (*y)[3];
  y = v_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
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

static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *n, const
  char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = f_emlrt_marshallIn(sp, emlrtAlias(n), &thisId);
  emlrtDestroyArray(&n);
  return y;
}

static void eb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[1] = { -1 };

  const boolean_T bv2[1] = { true };

  int32_T iv13[1];
  int32_T i9;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims, &bv2[0],
    iv13);
  ret->allocatedSize = iv13[0];
  i9 = ret->size[0];
  ret->size[0] = iv13[0];
  emxEnsureCapacity_real_T(sp, ret, i9, (emlrtRTEInfo *)NULL);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static const mxArray *emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m10;
  static const int32_T iv10[2] = { 0, 0 };

  y = NULL;
  m10 = emlrtCreateNumericArray(2, iv10, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m10, &u->data[0]);
  emlrtSetDimensions((mxArray *)m10, u->size, 2);
  emlrtAssign(&y, m10);
  return y;
}

static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = w_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *XL1, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  h_emlrt_marshallIn(sp, emlrtAlias(XL1), &thisId, y);
  emlrtDestroyArray(&XL1);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  x_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *C_rho, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  j_emlrt_marshallIn(sp, emlrtAlias(C_rho), &thisId, y);
  emlrtDestroyArray(&C_rho);
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  y_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T (*k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *C_I,
  const char_T *identifier))[81]
{
  real_T (*y)[81];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = l_emlrt_marshallIn(sp, emlrtAlias(C_I), &thisId);
  emlrtDestroyArray(&C_I);
  return y;
}
  static real_T (*l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[81]
{
  real_T (*y)[81];
  y = ab_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *P_I, const
  char_T *identifier, creal_T y[3])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  n_emlrt_marshallIn(sp, emlrtAlias(P_I), &thisId, y);
  emlrtDestroyArray(&P_I);
}

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, creal_T y[3])
{
  bb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *A_I, const
  char_T *identifier, creal_T y[9])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  p_emlrt_marshallIn(sp, emlrtAlias(A_I), &thisId, y);
  emlrtDestroyArray(&A_I);
}

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, creal_T y[9])
{
  cb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T (*q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *h, const
  char_T *identifier))[25]
{
  real_T (*y)[25];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = r_emlrt_marshallIn(sp, emlrtAlias(h), &thisId);
  emlrtDestroyArray(&h);
  return y;
}
  static real_T (*r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[25]
{
  real_T (*y)[25];
  y = db_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *x_w, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  t_emlrt_marshallIn(sp, emlrtAlias(x_w), &thisId, y);
  emlrtDestroyArray(&x_w);
}

static void t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  eb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T (*v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3]
{
  real_T (*ret)[3];
  static const int32_T dims[1] = { 3 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  ret = (real_T (*)[3])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static real_T w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { 1, -1 };

  const boolean_T bv0[2] = { false, true };

  int32_T iv11[2];
  int32_T i7;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv0[0],
    iv11);
  ret->allocatedSize = iv11[0] * iv11[1];
  i7 = ret->size[0] * ret->size[1];
  ret->size[0] = iv11[0];
  ret->size[1] = iv11[1];
  emxEnsureCapacity_real_T(sp, ret, i7, (emlrtRTEInfo *)NULL);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { -1, -1 };

  const boolean_T bv1[2] = { true, true };

  int32_T iv12[2];
  int32_T i8;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv1[0],
    iv12);
  ret->allocatedSize = iv12[0] * iv12[1];
  i8 = ret->size[0] * ret->size[1];
  ret->size[0] = iv12[0];
  ret->size[1] = iv12[1];
  emxEnsureCapacity_real_T(sp, ret, i8, (emlrtRTEInfo *)NULL);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

void Rho_density_api(const mxArray * const prhs[45], int32_T nlhs, const mxArray
                     *plhs[1])
{
  emxArray_real_T *XL1;
  emxArray_real_T *XL2;
  emxArray_real_T *C_rho;
  emxArray_real_T *C0_Cinv_C0_rho;
  emxArray_real_T *C0_Cinv_rho;
  emxArray_real_T *CH_H_rho;
  emxArray_real_T *CI_I_rho;
  emxArray_real_T *CH_H0_H_rho;
  emxArray_real_T *CI_H0_I_rho;
  emxArray_real_T *weights;
  emxArray_real_T *x_w;
  emxArray_real_T *rho_t_Napp;
  real_T (*b)[3];
  real_T n;
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
  real_T N_app;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  (void)nlhs;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &XL1, 2, &bb_emlrtRTEI, true);
  emxInit_real_T(&st, &XL2, 2, &bb_emlrtRTEI, true);
  emxInit_real_T(&st, &C_rho, 2, &bb_emlrtRTEI, true);
  emxInit_real_T(&st, &C0_Cinv_C0_rho, 2, &bb_emlrtRTEI, true);
  emxInit_real_T(&st, &C0_Cinv_rho, 2, &bb_emlrtRTEI, true);
  emxInit_real_T(&st, &CH_H_rho, 2, &bb_emlrtRTEI, true);
  emxInit_real_T(&st, &CI_I_rho, 2, &bb_emlrtRTEI, true);
  emxInit_real_T(&st, &CH_H0_H_rho, 2, &bb_emlrtRTEI, true);
  emxInit_real_T(&st, &CI_H0_I_rho, 2, &bb_emlrtRTEI, true);
  emxInit_real_T(&st, &weights, 2, &bb_emlrtRTEI, true);
  emxInit_real_T(&st, &x_w, 1, &bb_emlrtRTEI, true);
  emxInit_real_T(&st, &rho_t_Napp, 2, &bb_emlrtRTEI, true);

  /* Marshall function inputs */
  b = c_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "b");
  n = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "n");
  XL1->canFreeData = false;
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "XL1", XL1);
  XL2->canFreeData = false;
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "XL2", XL2);
  C_rho->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "C_rho", C_rho);
  C0_Cinv_C0_rho->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[5]), "C0_Cinv_C0_rho", C0_Cinv_C0_rho);
  C0_Cinv_rho->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[6]), "C0_Cinv_rho", C0_Cinv_rho);
  CH_H_rho->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[7]), "CH_H_rho", CH_H_rho);
  CI_I_rho->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[8]), "CI_I_rho", CI_I_rho);
  CH_H0_H_rho->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[9]), "CH_H0_H_rho", CH_H0_H_rho);
  CI_H0_I_rho->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[10]), "CI_H0_I_rho", CI_H0_I_rho);
  C_I = k_emlrt_marshallIn(&st, emlrtAlias(prhs[11]), "C_I");
  m_emlrt_marshallIn(&st, emlrtAliasP(prhs[12]), "P_I", P_I);
  P_I_Re = c_emlrt_marshallIn(&st, emlrtAlias(prhs[13]), "P_I_Re");
  P_I_Im = c_emlrt_marshallIn(&st, emlrtAlias(prhs[14]), "P_I_Im");
  o_emlrt_marshallIn(&st, emlrtAliasP(prhs[15]), "A_I", A_I);
  o_emlrt_marshallIn(&st, emlrtAliasP(prhs[16]), "B_I", B_I);
  C_II = k_emlrt_marshallIn(&st, emlrtAlias(prhs[17]), "C_II");
  m_emlrt_marshallIn(&st, emlrtAliasP(prhs[18]), "P_II", P_II);
  P_II_Re = c_emlrt_marshallIn(&st, emlrtAlias(prhs[19]), "P_II_Re");
  P_II_Im = c_emlrt_marshallIn(&st, emlrtAlias(prhs[20]), "P_II_Im");
  o_emlrt_marshallIn(&st, emlrtAliasP(prhs[21]), "A_II", A_II);
  o_emlrt_marshallIn(&st, emlrtAliasP(prhs[22]), "B_II", B_II);
  C_GB = k_emlrt_marshallIn(&st, emlrtAlias(prhs[23]), "C_GB");
  m_emlrt_marshallIn(&st, emlrtAliasP(prhs[24]), "P_GB", P_GB);
  P_GB_Re = c_emlrt_marshallIn(&st, emlrtAlias(prhs[25]), "P_GB_Re");
  P_GB_Im = c_emlrt_marshallIn(&st, emlrtAlias(prhs[26]), "P_GB_Im");
  o_emlrt_marshallIn(&st, emlrtAliasP(prhs[27]), "A_GB", A_GB);
  o_emlrt_marshallIn(&st, emlrtAliasP(prhs[28]), "B_GB", B_GB);
  C_SU = k_emlrt_marshallIn(&st, emlrtAlias(prhs[29]), "C_SU");
  m_emlrt_marshallIn(&st, emlrtAliasP(prhs[30]), "P_SU", P_SU);
  P_SU_Re = c_emlrt_marshallIn(&st, emlrtAlias(prhs[31]), "P_SU_Re");
  P_SU_Im = c_emlrt_marshallIn(&st, emlrtAlias(prhs[32]), "P_SU_Im");
  o_emlrt_marshallIn(&st, emlrtAliasP(prhs[33]), "A_SU", A_SU);
  o_emlrt_marshallIn(&st, emlrtAliasP(prhs[34]), "B_SU", B_SU);
  C_SL = k_emlrt_marshallIn(&st, emlrtAlias(prhs[35]), "C_SL");
  m_emlrt_marshallIn(&st, emlrtAliasP(prhs[36]), "P_SL", P_SL);
  P_SL_Re = c_emlrt_marshallIn(&st, emlrtAlias(prhs[37]), "P_SL_Re");
  P_SL_Im = c_emlrt_marshallIn(&st, emlrtAlias(prhs[38]), "P_SL_Im");
  o_emlrt_marshallIn(&st, emlrtAliasP(prhs[39]), "A_SL", A_SL);
  o_emlrt_marshallIn(&st, emlrtAliasP(prhs[40]), "B_SL", B_SL);
  h = q_emlrt_marshallIn(&st, emlrtAlias(prhs[41]), "h");
  N_app = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[42]), "N_app");
  weights->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[43]), "weights", weights);
  x_w->canFreeData = false;
  s_emlrt_marshallIn(&st, emlrtAlias(prhs[44]), "x_w", x_w);

  /* Invoke the target function */
  Rho_density(&st, *b, n, XL1, XL2, C_rho, C0_Cinv_C0_rho, C0_Cinv_rho, CH_H_rho,
              CI_I_rho, CH_H0_H_rho, CI_H0_I_rho, *C_I, P_I, *P_I_Re, *P_I_Im,
              A_I, B_I, *C_II, P_II, *P_II_Re, *P_II_Im, A_II, B_II, *C_GB, P_GB,
              *P_GB_Re, *P_GB_Im, A_GB, B_GB, *C_SU, P_SU, *P_SU_Re, *P_SU_Im,
              A_SU, B_SU, *C_SL, P_SL, *P_SL_Re, *P_SL_Im, A_SL, B_SL, *h, N_app,
              weights, x_w, rho_t_Napp);

  /* Marshall function outputs */
  rho_t_Napp->canFreeData = false;
  plhs[0] = emlrt_marshallOut(rho_t_Napp);
  emxFree_real_T(&rho_t_Napp);
  emxFree_real_T(&x_w);
  emxFree_real_T(&weights);
  emxFree_real_T(&CI_H0_I_rho);
  emxFree_real_T(&CH_H0_H_rho);
  emxFree_real_T(&CI_I_rho);
  emxFree_real_T(&CH_H_rho);
  emxFree_real_T(&C0_Cinv_rho);
  emxFree_real_T(&C0_Cinv_C0_rho);
  emxFree_real_T(&C_rho);
  emxFree_real_T(&XL2);
  emxFree_real_T(&XL1);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_Rho_density_api.c) */
