/*
 * _coder_coef_rho_api.c
 *
 * Code generation for function '_coder_coef_rho_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "coef_rho.h"
#include "_coder_coef_rho_api.h"
#include "coef_rho_emxutil.h"
#include "coef_rho_data.h"

/* Variable Definitions */
static emlrtRTEInfo cb_emlrtRTEI = { 1,/* lineNo */
  1,                                   /* colNo */
  "_coder_coef_rho_api",               /* fName */
  ""                                   /* pName */
};

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static const mxArray *b_emlrt_marshallOut(const real_T u[900]);
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *C_I,
  const char_T *identifier))[81];
static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[81];
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *P_I, const
  char_T *identifier, creal_T y[3]);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *w, const
  char_T *identifier, emxArray_real_T *y);
static const mxArray *emlrt_marshallOut(const emxArray_real_T *u);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, creal_T y[3]);
static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *P_I_Re,
  const char_T *identifier))[3];
static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[3];
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *A_I, const
  char_T *identifier, creal_T y[9]);
static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, creal_T y[9]);
static real_T (*k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *h, const
  char_T *identifier))[25];
static real_T (*l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[25];
static real_T m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *N_app,
  const char_T *identifier);
static real_T n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static real_T (*p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[81];
static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, creal_T ret[3]);
static real_T (*r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3];
static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, creal_T ret[9]);
static real_T (*t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[25];
static real_T u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  o_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *b_emlrt_marshallOut(const real_T u[900])
{
  const mxArray *y;
  const mxArray *m4;
  static const int32_T iv5[2] = { 0, 0 };

  static const int32_T iv6[2] = { 30, 30 };

  y = NULL;
  m4 = emlrtCreateNumericArray(2, iv5, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m4, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m4, iv6, 2);
  emlrtAssign(&y, m4);
  return y;
}

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *C_I,
  const char_T *identifier))[81]
{
  real_T (*y)[81];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(C_I), &thisId);
  emlrtDestroyArray(&C_I);
  return y;
}
  static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[81]
{
  real_T (*y)[81];
  y = p_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *P_I, const
  char_T *identifier, creal_T y[3])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  f_emlrt_marshallIn(sp, emlrtAlias(P_I), &thisId, y);
  emlrtDestroyArray(&P_I);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *w, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(w), &thisId, y);
  emlrtDestroyArray(&w);
}

static const mxArray *emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m3;
  static const int32_T iv4[2] = { 0, 0 };

  y = NULL;
  m3 = emlrtCreateNumericArray(2, iv4, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m3, &u->data[0]);
  emlrtSetDimensions((mxArray *)m3, u->size, 2);
  emlrtAssign(&y, m3);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, creal_T y[3])
{
  q_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *P_I_Re,
  const char_T *identifier))[3]
{
  real_T (*y)[3];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = h_emlrt_marshallIn(sp, emlrtAlias(P_I_Re), &thisId);
  emlrtDestroyArray(&P_I_Re);
  return y;
}
  static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[3]
{
  real_T (*y)[3];
  y = r_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *A_I, const
  char_T *identifier, creal_T y[9])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  j_emlrt_marshallIn(sp, emlrtAlias(A_I), &thisId, y);
  emlrtDestroyArray(&A_I);
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, creal_T y[9])
{
  s_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T (*k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *h, const
  char_T *identifier))[25]
{
  real_T (*y)[25];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = l_emlrt_marshallIn(sp, emlrtAlias(h), &thisId);
  emlrtDestroyArray(&h);
  return y;
}
  static real_T (*l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[25]
{
  real_T (*y)[25];
  y = t_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *N_app,
  const char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = n_emlrt_marshallIn(sp, emlrtAlias(N_app), &thisId);
  emlrtDestroyArray(&N_app);
  return y;
}

static real_T n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = u_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[1] = { -1 };

  const boolean_T bv0[1] = { true };

  int32_T iv7[1];
  int32_T i17;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims, &bv0[0],
    iv7);
  ret->allocatedSize = iv7[0];
  i17 = ret->size[0];
  ret->size[0] = iv7[0];
  emxEnsureCapacity_real_T(sp, ret, i17, (emlrtRTEInfo *)NULL);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static real_T (*p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[81]
{
  real_T (*ret)[81];
  static const int32_T dims[4] = { 3, 3, 3, 3 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 4U, dims);
  ret = (real_T (*)[81])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, creal_T ret[3])
{
  static const int32_T dims[1] = { 3 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", true, 1U, dims);
  emlrtImportArrayR2015b(sp, src, ret, 8, true);
  emlrtDestroyArray(&src);
}

static real_T (*r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3]
{
  real_T (*ret)[3];
  static const int32_T dims[1] = { 3 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  ret = (real_T (*)[3])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, creal_T ret[9])
{
  static const int32_T dims[2] = { 3, 3 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", true, 2U, dims);
  emlrtImportArrayR2015b(sp, src, ret, 8, true);
  emlrtDestroyArray(&src);
}

static real_T (*t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[25]
{
  real_T (*ret)[25];
  static const int32_T dims[2] = { 5, 5 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[25])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static real_T u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void coef_rho_api(const mxArray * const prhs[34], int32_T nlhs, const mxArray
                  *plhs[11])
{
  real_T (*C)[900];
  real_T (*C0_Cinv)[900];
  real_T (*C0_Cinv_C0)[900];
  emxArray_real_T *w;
  emxArray_real_T *x_w;
  emxArray_real_T *C_rho;
  emxArray_real_T *C0_Cinv_C0_rho;
  emxArray_real_T *C0_Cinv_rho;
  emxArray_real_T *CH_H_rho;
  emxArray_real_T *CI_I_rho;
  emxArray_real_T *CH_H0_H_rho;
  emxArray_real_T *CI_H0_I_rho;
  emxArray_real_T *weights;
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

  st.tls = emlrtRootTLSGlobal;
  C = (real_T (*)[900])mxMalloc(sizeof(real_T [900]));
  C0_Cinv = (real_T (*)[900])mxMalloc(sizeof(real_T [900]));
  C0_Cinv_C0 = (real_T (*)[900])mxMalloc(sizeof(real_T [900]));
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &w, 1, &cb_emlrtRTEI, true);
  emxInit_real_T(&st, &x_w, 1, &cb_emlrtRTEI, true);
  emxInit_real_T(&st, &C_rho, 2, &cb_emlrtRTEI, true);
  emxInit_real_T(&st, &C0_Cinv_C0_rho, 2, &cb_emlrtRTEI, true);
  emxInit_real_T(&st, &C0_Cinv_rho, 2, &cb_emlrtRTEI, true);
  emxInit_real_T(&st, &CH_H_rho, 2, &cb_emlrtRTEI, true);
  emxInit_real_T(&st, &CI_I_rho, 2, &cb_emlrtRTEI, true);
  emxInit_real_T(&st, &CH_H0_H_rho, 2, &cb_emlrtRTEI, true);
  emxInit_real_T(&st, &CI_H0_I_rho, 2, &cb_emlrtRTEI, true);
  emxInit_real_T(&st, &weights, 2, &cb_emlrtRTEI, true);

  /* Marshall function inputs */
  w->canFreeData = false;
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "w", w);
  C_I = c_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "C_I");
  e_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "P_I", P_I);
  P_I_Re = g_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "P_I_Re");
  P_I_Im = g_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "P_I_Im");
  i_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "A_I", A_I);
  i_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "B_I", B_I);
  C_II = c_emlrt_marshallIn(&st, emlrtAlias(prhs[7]), "C_II");
  e_emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "P_II", P_II);
  P_II_Re = g_emlrt_marshallIn(&st, emlrtAlias(prhs[9]), "P_II_Re");
  P_II_Im = g_emlrt_marshallIn(&st, emlrtAlias(prhs[10]), "P_II_Im");
  i_emlrt_marshallIn(&st, emlrtAliasP(prhs[11]), "A_II", A_II);
  i_emlrt_marshallIn(&st, emlrtAliasP(prhs[12]), "B_II", B_II);
  C_GB = c_emlrt_marshallIn(&st, emlrtAlias(prhs[13]), "C_GB");
  e_emlrt_marshallIn(&st, emlrtAliasP(prhs[14]), "P_GB", P_GB);
  P_GB_Re = g_emlrt_marshallIn(&st, emlrtAlias(prhs[15]), "P_GB_Re");
  P_GB_Im = g_emlrt_marshallIn(&st, emlrtAlias(prhs[16]), "P_GB_Im");
  i_emlrt_marshallIn(&st, emlrtAliasP(prhs[17]), "A_GB", A_GB);
  i_emlrt_marshallIn(&st, emlrtAliasP(prhs[18]), "B_GB", B_GB);
  C_SU = c_emlrt_marshallIn(&st, emlrtAlias(prhs[19]), "C_SU");
  e_emlrt_marshallIn(&st, emlrtAliasP(prhs[20]), "P_SU", P_SU);
  P_SU_Re = g_emlrt_marshallIn(&st, emlrtAlias(prhs[21]), "P_SU_Re");
  P_SU_Im = g_emlrt_marshallIn(&st, emlrtAlias(prhs[22]), "P_SU_Im");
  i_emlrt_marshallIn(&st, emlrtAliasP(prhs[23]), "A_SU", A_SU);
  i_emlrt_marshallIn(&st, emlrtAliasP(prhs[24]), "B_SU", B_SU);
  C_SL = c_emlrt_marshallIn(&st, emlrtAlias(prhs[25]), "C_SL");
  e_emlrt_marshallIn(&st, emlrtAliasP(prhs[26]), "P_SL", P_SL);
  P_SL_Re = g_emlrt_marshallIn(&st, emlrtAlias(prhs[27]), "P_SL_Re");
  P_SL_Im = g_emlrt_marshallIn(&st, emlrtAlias(prhs[28]), "P_SL_Im");
  i_emlrt_marshallIn(&st, emlrtAliasP(prhs[29]), "A_SL", A_SL);
  i_emlrt_marshallIn(&st, emlrtAliasP(prhs[30]), "B_SL", B_SL);
  h = k_emlrt_marshallIn(&st, emlrtAlias(prhs[31]), "h");
  N_app = m_emlrt_marshallIn(&st, emlrtAliasP(prhs[32]), "N_app");
  x_w->canFreeData = false;
  emlrt_marshallIn(&st, emlrtAlias(prhs[33]), "x_w", x_w);

  /* Invoke the target function */
  coef_rho(&st, w, *C_I, P_I, *P_I_Re, *P_I_Im, A_I, B_I, *C_II, P_II, *P_II_Re,
           *P_II_Im, A_II, B_II, *C_GB, P_GB, *P_GB_Re, *P_GB_Im, A_GB, B_GB,
           *C_SU, P_SU, *P_SU_Re, *P_SU_Im, A_SU, B_SU, *C_SL, P_SL, *P_SL_Re,
           *P_SL_Im, A_SL, B_SL, *h, N_app, x_w, C_rho, C0_Cinv_C0_rho,
           C0_Cinv_rho, CH_H_rho, CI_I_rho, CH_H0_H_rho, CI_H0_I_rho, weights,
           *C, *C0_Cinv, *C0_Cinv_C0);

  /* Marshall function outputs */
  C_rho->canFreeData = false;
  plhs[0] = emlrt_marshallOut(C_rho);
  emxFree_real_T(&C_rho);
  emxFree_real_T(&x_w);
  emxFree_real_T(&w);
  if (nlhs > 1) {
    C0_Cinv_C0_rho->canFreeData = false;
    plhs[1] = emlrt_marshallOut(C0_Cinv_C0_rho);
  }

  emxFree_real_T(&C0_Cinv_C0_rho);
  if (nlhs > 2) {
    C0_Cinv_rho->canFreeData = false;
    plhs[2] = emlrt_marshallOut(C0_Cinv_rho);
  }

  emxFree_real_T(&C0_Cinv_rho);
  if (nlhs > 3) {
    CH_H_rho->canFreeData = false;
    plhs[3] = emlrt_marshallOut(CH_H_rho);
  }

  emxFree_real_T(&CH_H_rho);
  if (nlhs > 4) {
    CI_I_rho->canFreeData = false;
    plhs[4] = emlrt_marshallOut(CI_I_rho);
  }

  emxFree_real_T(&CI_I_rho);
  if (nlhs > 5) {
    CH_H0_H_rho->canFreeData = false;
    plhs[5] = emlrt_marshallOut(CH_H0_H_rho);
  }

  emxFree_real_T(&CH_H0_H_rho);
  if (nlhs > 6) {
    CI_H0_I_rho->canFreeData = false;
    plhs[6] = emlrt_marshallOut(CI_H0_I_rho);
  }

  emxFree_real_T(&CI_H0_I_rho);
  if (nlhs > 7) {
    weights->canFreeData = false;
    plhs[7] = emlrt_marshallOut(weights);
  }

  emxFree_real_T(&weights);
  if (nlhs > 8) {
    plhs[8] = b_emlrt_marshallOut(*C);
  }

  if (nlhs > 9) {
    plhs[9] = b_emlrt_marshallOut(*C0_Cinv);
  }

  if (nlhs > 10) {
    plhs[10] = b_emlrt_marshallOut(*C0_Cinv_C0);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_coef_rho_api.c) */
