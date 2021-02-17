/*
 * _coder_stress_api.c
 *
 * Code generation for function '_coder_stress_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "stress.h"
#include "_coder_stress_api.h"
#include "stress_emxutil.h"
#include "stress_data.h"

/* Variable Definitions */
static emlrtRTEInfo if_emlrtRTEI = { 1,/* lineNo */
  1,                                   /* colNo */
  "_coder_stress_api",                 /* fName */
  ""                                   /* pName */
};

/* Function Declarations */
static real_T ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_cell_wrap_0 *y);
static const mxArray *b_emlrt_marshallOut(const real_T u[3]);
static void bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, creal_T y[3]);
static const mxArray *c_emlrt_marshallOut(const real_T u);
static real_T (*cb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3];
static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *n_singularity, const char_T *identifier);
static void db_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static real_T (*eb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[81];
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *S_singularity,
  const char_T *identifier, emxArray_cell_wrap_0 *y);
static const mxArray *emlrt_marshallOut(const real_T u[9]);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *rho_t_Napp,
  const char_T *identifier, emxArray_real_T *y);
static real_T (*fb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[36];
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void gb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, creal_T ret[9]);
static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b, const
  char_T *identifier))[3];
static real_T (*hb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[25];
static real_T (*i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[3];
static void ib_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *XL1, const
  char_T *identifier, emxArray_real_T *y);
static real_T (*jb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[900];
static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static real_T (*l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *C_I,
  const char_T *identifier))[81];
static real_T (*m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[81];
static real_T (*n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *CS_I,
  const char_T *identifier))[36];
static real_T (*o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[36];
static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *P_I, const
  char_T *identifier, creal_T y[3]);
static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *M_P_I, const
  char_T *identifier, creal_T y[9]);
static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, creal_T y[9]);
static real_T (*s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *h, const
  char_T *identifier))[25];
static real_T (*t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[25];
static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *x_w, const
  char_T *identifier, emxArray_real_T *y);
static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static real_T (*w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *C, const
  char_T *identifier))[900];
static real_T (*x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[900];
static void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, creal_T ret[3]);

/* Function Definitions */
static real_T ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_cell_wrap_0 *y)
{
  emlrtMsgIdentifier thisId;
  int32_T iv15[2];
  static const boolean_T bv0[2] = { false, true };

  int32_T sizes[2];
  int32_T i98;
  char_T str[11];
  thisId.fParent = parentId;
  thisId.bParentIsCell = true;
  iv15[0] = 1;
  iv15[1] = -1;
  emlrtCheckVsCell(sp, parentId, u, 2U, iv15, bv0, sizes);
  i98 = y->size[0] * y->size[1];
  y->size[0] = sizes[0];
  y->size[1] = sizes[1];
  emxEnsureCapacity_cell_wrap_0(sp, y, i98, (emlrtRTEInfo *)NULL);
  for (i98 = 0; i98 < sizes[1]; i98++) {
    sprintf(&str[0], "%d", i98 + 1);
    thisId.fIdentifier = &str[0];
    c_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, i98)),
                       &thisId, y->data[i98].f1);
  }

  emlrtDestroyArray(&u);
}

static const mxArray *b_emlrt_marshallOut(const real_T u[3])
{
  const mxArray *y;
  const mxArray *m4;
  static const int32_T iv18[1] = { 0 };

  static const int32_T iv19[1] = { 3 };

  y = NULL;
  m4 = emlrtCreateNumericArray(1, iv18, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m4, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m4, iv19, 1);
  emlrtAssign(&y, m4);
  return y;
}

static void bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { -1, -1 };

  const boolean_T bv1[2] = { true, true };

  int32_T iv20[2];
  int32_T i99;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv1[0],
    iv20);
  ret->allocatedSize = iv20[0] * iv20[1];
  i99 = ret->size[0] * ret->size[1];
  ret->size[0] = iv20[0];
  ret->size[1] = iv20[1];
  emxEnsureCapacity_real_T(sp, ret, i99, (emlrtRTEInfo *)NULL);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, creal_T y[3])
{
  y_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *c_emlrt_marshallOut(const real_T u)
{
  const mxArray *y;
  const mxArray *m5;
  y = NULL;
  m5 = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m5);
  return y;
}

static real_T (*cb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3]
{
  real_T (*ret)[3];
  static const int32_T dims[1] = { 3 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  ret = (real_T (*)[3])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *n_singularity, const char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = e_emlrt_marshallIn(sp, emlrtAlias(n_singularity), &thisId);
  emlrtDestroyArray(&n_singularity);
  return y;
}

static void db_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { 1, -1 };

  const boolean_T bv2[2] = { false, true };

  int32_T iv21[2];
  int32_T i100;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv2[0],
    iv21);
  ret->allocatedSize = iv21[0] * iv21[1];
  i100 = ret->size[0] * ret->size[1];
  ret->size[0] = iv21[0];
  ret->size[1] = iv21[1];
  emxEnsureCapacity_real_T(sp, ret, i100, (emlrtRTEInfo *)NULL);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = ab_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*eb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[81]
{
  real_T (*ret)[81];
  static const int32_T dims[4] = { 3, 3, 3, 3 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 4U, dims);
  ret = (real_T (*)[81])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static void emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *S_singularity, const char_T *identifier, emxArray_cell_wrap_0 *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(S_singularity), &thisId, y);
  emlrtDestroyArray(&S_singularity);
}

static const mxArray *emlrt_marshallOut(const real_T u[9])
{
  const mxArray *y;
  const mxArray *m3;
  static const int32_T iv16[2] = { 0, 0 };

  static const int32_T iv17[2] = { 3, 3 };

  y = NULL;
  m3 = emlrtCreateNumericArray(2, iv16, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m3, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m3, iv17, 2);
  emlrtAssign(&y, m3);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *rho_t_Napp,
  const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  g_emlrt_marshallIn(sp, emlrtAlias(rho_t_Napp), &thisId, y);
  emlrtDestroyArray(&rho_t_Napp);
}

static real_T (*fb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[36]
{
  real_T (*ret)[36];
  static const int32_T dims[2] = { 6, 6 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[36])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  bb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void gb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, creal_T ret[9])
{
  static const int32_T dims[2] = { 3, 3 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", true, 2U, dims);
  emlrtImportArrayR2015b(sp, src, ret, 8, true);
  emlrtDestroyArray(&src);
}

static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b, const
  char_T *identifier))[3]
{
  real_T (*y)[3];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = i_emlrt_marshallIn(sp, emlrtAlias(b), &thisId);
  emlrtDestroyArray(&b);
  return y;
}
  static real_T (*hb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[25]
{
  real_T (*ret)[25];
  static const int32_T dims[2] = { 5, 5 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[25])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[3]
{
  real_T (*y)[3];
  y = cb_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static void ib_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[1] = { -1 };

  const boolean_T bv3[1] = { true };

  int32_T iv22[1];
  int32_T i101;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims, &bv3[0],
    iv22);
  ret->allocatedSize = iv22[0];
  i101 = ret->size[0];
  ret->size[0] = iv22[0];
  emxEnsureCapacity_real_T(sp, ret, i101, (emlrtRTEInfo *)NULL);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *XL1, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  k_emlrt_marshallIn(sp, emlrtAlias(XL1), &thisId, y);
  emlrtDestroyArray(&XL1);
}

static real_T (*jb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[900]
{
  real_T (*ret)[900];
  static const int32_T dims[2] = { 30, 30 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[900])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  db_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T (*l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *C_I,
  const char_T *identifier))[81]
{
  real_T (*y)[81];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = m_emlrt_marshallIn(sp, emlrtAlias(C_I), &thisId);
  emlrtDestroyArray(&C_I);
  return y;
}
  static real_T (*m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[81]
{
  real_T (*y)[81];
  y = eb_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *CS_I,
  const char_T *identifier))[36]
{
  real_T (*y)[36];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = o_emlrt_marshallIn(sp, emlrtAlias(CS_I), &thisId);
  emlrtDestroyArray(&CS_I);
  return y;
}
  static real_T (*o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[36]
{
  real_T (*y)[36];
  y = fb_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *P_I, const
  char_T *identifier, creal_T y[3])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  c_emlrt_marshallIn(sp, emlrtAlias(P_I), &thisId, y);
  emlrtDestroyArray(&P_I);
}

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *M_P_I, const
  char_T *identifier, creal_T y[9])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  r_emlrt_marshallIn(sp, emlrtAlias(M_P_I), &thisId, y);
  emlrtDestroyArray(&M_P_I);
}

static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, creal_T y[9])
{
  gb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T (*s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *h, const
  char_T *identifier))[25]
{
  real_T (*y)[25];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = t_emlrt_marshallIn(sp, emlrtAlias(h), &thisId);
  emlrtDestroyArray(&h);
  return y;
}
  static real_T (*t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[25]
{
  real_T (*y)[25];
  y = hb_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *x_w, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  v_emlrt_marshallIn(sp, emlrtAlias(x_w), &thisId, y);
  emlrtDestroyArray(&x_w);
}

static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  ib_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T (*w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *C, const
  char_T *identifier))[900]
{
  real_T (*y)[900];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = x_emlrt_marshallIn(sp, emlrtAlias(C), &thisId);
  emlrtDestroyArray(&C);
  return y;
}
  static real_T (*x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[900]
{
  real_T (*y)[900];
  y = jb_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, creal_T ret[3])
{
  static const int32_T dims[1] = { 3 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", true, 1U, dims);
  emlrtImportArrayR2015b(sp, src, ret, 8, true);
  emlrtDestroyArray(&src);
}

void stress_api(stressStackData *SD, const mxArray * const prhs[61], int32_T
                nlhs, const mxArray *plhs[5])
{
  real_T (*sigma)[9];
  real_T (*epsilon_m)[9];
  real_T (*rotation_m)[9];
  real_T (*rotation_v)[3];
  emxArray_cell_wrap_0 *S_singularity;
  emxArray_real_T *rho_t_Napp;
  emxArray_real_T *XL1;
  emxArray_real_T *XL2;
  emxArray_real_T *weights;
  emxArray_real_T *x_w;
  real_T n_singularity;
  real_T (*b)[3];
  real_T n;
  real_T x1;
  real_T x2;
  real_T (*C_I)[81];
  real_T (*CS_I)[36];
  creal_T P_I[3];
  real_T (*P_I_Re)[3];
  real_T (*P_I_Im)[3];
  creal_T M_P_I[9];
  creal_T A_I[9];
  creal_T B_I[9];
  real_T (*C_II)[81];
  real_T (*CS_II)[36];
  creal_T P_II[3];
  real_T (*P_II_Re)[3];
  real_T (*P_II_Im)[3];
  creal_T M_P_II[9];
  creal_T A_II[9];
  creal_T B_II[9];
  real_T (*C_GB)[81];
  real_T (*CS_GB)[36];
  creal_T P_GB[3];
  real_T (*P_GB_Re)[3];
  real_T (*P_GB_Im)[3];
  creal_T M_P_GB[9];
  creal_T A_GB[9];
  creal_T B_GB[9];
  real_T (*C_SU)[81];
  real_T (*CS_SU)[36];
  creal_T P_SU[3];
  real_T (*P_SU_Re)[3];
  real_T (*P_SU_Im)[3];
  creal_T M_P_SU[9];
  creal_T A_SU[9];
  creal_T B_SU[9];
  real_T (*C_SL)[81];
  real_T (*CS_SL)[36];
  creal_T P_SL[3];
  real_T (*P_SL_Re)[3];
  real_T (*P_SL_Im)[3];
  creal_T M_P_SL[9];
  creal_T A_SL[9];
  creal_T B_SL[9];
  real_T (*h)[25];
  real_T x22;
  real_T x23;
  real_T x24;
  real_T x25;
  real_T x26;
  real_T N_app;
  real_T (*C)[900];
  real_T (*C0_Cinv)[900];
  real_T (*C0_Cinv_C0)[900];
  real_T rotation_abs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  sigma = (real_T (*)[9])mxMalloc(sizeof(real_T [9]));
  epsilon_m = (real_T (*)[9])mxMalloc(sizeof(real_T [9]));
  rotation_m = (real_T (*)[9])mxMalloc(sizeof(real_T [9]));
  rotation_v = (real_T (*)[3])mxMalloc(sizeof(real_T [3]));
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_cell_wrap_0(&st, &S_singularity, 2, &if_emlrtRTEI, true);
  emxInit_real_T(&st, &rho_t_Napp, 2, &if_emlrtRTEI, true);
  emxInit_real_T(&st, &XL1, 2, &if_emlrtRTEI, true);
  emxInit_real_T(&st, &XL2, 2, &if_emlrtRTEI, true);
  emxInit_real_T(&st, &weights, 2, &if_emlrtRTEI, true);
  emxInit_real_T(&st, &x_w, 1, &if_emlrtRTEI, true);

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "S_singularity", S_singularity);
  n_singularity = d_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "n_singularity");
  rho_t_Napp->canFreeData = false;
  f_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "rho_t_Napp", rho_t_Napp);
  b = h_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "b");
  n = d_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "n");
  XL1->canFreeData = false;
  j_emlrt_marshallIn(&st, emlrtAlias(prhs[5]), "XL1", XL1);
  XL2->canFreeData = false;
  j_emlrt_marshallIn(&st, emlrtAlias(prhs[6]), "XL2", XL2);
  x1 = d_emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "x1");
  x2 = d_emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "x2");
  C_I = l_emlrt_marshallIn(&st, emlrtAlias(prhs[9]), "C_I");
  CS_I = n_emlrt_marshallIn(&st, emlrtAlias(prhs[10]), "CS_I");
  p_emlrt_marshallIn(&st, emlrtAliasP(prhs[11]), "P_I", P_I);
  P_I_Re = h_emlrt_marshallIn(&st, emlrtAlias(prhs[12]), "P_I_Re");
  P_I_Im = h_emlrt_marshallIn(&st, emlrtAlias(prhs[13]), "P_I_Im");
  q_emlrt_marshallIn(&st, emlrtAliasP(prhs[14]), "M_P_I", M_P_I);
  q_emlrt_marshallIn(&st, emlrtAliasP(prhs[15]), "A_I", A_I);
  q_emlrt_marshallIn(&st, emlrtAliasP(prhs[16]), "B_I", B_I);
  C_II = l_emlrt_marshallIn(&st, emlrtAlias(prhs[17]), "C_II");
  CS_II = n_emlrt_marshallIn(&st, emlrtAlias(prhs[18]), "CS_II");
  p_emlrt_marshallIn(&st, emlrtAliasP(prhs[19]), "P_II", P_II);
  P_II_Re = h_emlrt_marshallIn(&st, emlrtAlias(prhs[20]), "P_II_Re");
  P_II_Im = h_emlrt_marshallIn(&st, emlrtAlias(prhs[21]), "P_II_Im");
  q_emlrt_marshallIn(&st, emlrtAliasP(prhs[22]), "M_P_II", M_P_II);
  q_emlrt_marshallIn(&st, emlrtAliasP(prhs[23]), "A_II", A_II);
  q_emlrt_marshallIn(&st, emlrtAliasP(prhs[24]), "B_II", B_II);
  C_GB = l_emlrt_marshallIn(&st, emlrtAlias(prhs[25]), "C_GB");
  CS_GB = n_emlrt_marshallIn(&st, emlrtAlias(prhs[26]), "CS_GB");
  p_emlrt_marshallIn(&st, emlrtAliasP(prhs[27]), "P_GB", P_GB);
  P_GB_Re = h_emlrt_marshallIn(&st, emlrtAlias(prhs[28]), "P_GB_Re");
  P_GB_Im = h_emlrt_marshallIn(&st, emlrtAlias(prhs[29]), "P_GB_Im");
  q_emlrt_marshallIn(&st, emlrtAliasP(prhs[30]), "M_P_GB", M_P_GB);
  q_emlrt_marshallIn(&st, emlrtAliasP(prhs[31]), "A_GB", A_GB);
  q_emlrt_marshallIn(&st, emlrtAliasP(prhs[32]), "B_GB", B_GB);
  C_SU = l_emlrt_marshallIn(&st, emlrtAlias(prhs[33]), "C_SU");
  CS_SU = n_emlrt_marshallIn(&st, emlrtAlias(prhs[34]), "CS_SU");
  p_emlrt_marshallIn(&st, emlrtAliasP(prhs[35]), "P_SU", P_SU);
  P_SU_Re = h_emlrt_marshallIn(&st, emlrtAlias(prhs[36]), "P_SU_Re");
  P_SU_Im = h_emlrt_marshallIn(&st, emlrtAlias(prhs[37]), "P_SU_Im");
  q_emlrt_marshallIn(&st, emlrtAliasP(prhs[38]), "M_P_SU", M_P_SU);
  q_emlrt_marshallIn(&st, emlrtAliasP(prhs[39]), "A_SU", A_SU);
  q_emlrt_marshallIn(&st, emlrtAliasP(prhs[40]), "B_SU", B_SU);
  C_SL = l_emlrt_marshallIn(&st, emlrtAlias(prhs[41]), "C_SL");
  CS_SL = n_emlrt_marshallIn(&st, emlrtAlias(prhs[42]), "CS_SL");
  p_emlrt_marshallIn(&st, emlrtAliasP(prhs[43]), "P_SL", P_SL);
  P_SL_Re = h_emlrt_marshallIn(&st, emlrtAlias(prhs[44]), "P_SL_Re");
  P_SL_Im = h_emlrt_marshallIn(&st, emlrtAlias(prhs[45]), "P_SL_Im");
  q_emlrt_marshallIn(&st, emlrtAliasP(prhs[46]), "M_P_SL", M_P_SL);
  q_emlrt_marshallIn(&st, emlrtAliasP(prhs[47]), "A_SL", A_SL);
  q_emlrt_marshallIn(&st, emlrtAliasP(prhs[48]), "B_SL", B_SL);
  h = s_emlrt_marshallIn(&st, emlrtAlias(prhs[49]), "h");
  x22 = d_emlrt_marshallIn(&st, emlrtAliasP(prhs[50]), "x22");
  x23 = d_emlrt_marshallIn(&st, emlrtAliasP(prhs[51]), "x23");
  x24 = d_emlrt_marshallIn(&st, emlrtAliasP(prhs[52]), "x24");
  x25 = d_emlrt_marshallIn(&st, emlrtAliasP(prhs[53]), "x25");
  x26 = d_emlrt_marshallIn(&st, emlrtAliasP(prhs[54]), "x26");
  N_app = d_emlrt_marshallIn(&st, emlrtAliasP(prhs[55]), "N_app");
  weights->canFreeData = false;
  f_emlrt_marshallIn(&st, emlrtAlias(prhs[56]), "weights", weights);
  x_w->canFreeData = false;
  u_emlrt_marshallIn(&st, emlrtAlias(prhs[57]), "x_w", x_w);
  C = w_emlrt_marshallIn(&st, emlrtAlias(prhs[58]), "C");
  C0_Cinv = w_emlrt_marshallIn(&st, emlrtAlias(prhs[59]), "C0_Cinv");
  C0_Cinv_C0 = w_emlrt_marshallIn(&st, emlrtAlias(prhs[60]), "C0_Cinv_C0");

  /* Invoke the target function */
  stress(SD, &st, S_singularity, n_singularity, rho_t_Napp, *b, n, XL1, XL2, x1,
         x2, *C_I, *CS_I, P_I, *P_I_Re, *P_I_Im, M_P_I, A_I, B_I, *C_II, *CS_II,
         P_II, *P_II_Re, *P_II_Im, M_P_II, A_II, B_II, *C_GB, *CS_GB, P_GB,
         *P_GB_Re, *P_GB_Im, M_P_GB, A_GB, B_GB, *C_SU, *CS_SU, P_SU, *P_SU_Re, *
         P_SU_Im, M_P_SU, A_SU, B_SU, *C_SL, *CS_SL, P_SL, *P_SL_Re, *P_SL_Im,
         M_P_SL, A_SL, B_SL, *h, x22, x23, x24, x25, x26, N_app, weights, x_w,
         *C, *C0_Cinv, *C0_Cinv_C0, *sigma, *epsilon_m, *rotation_m, *rotation_v,
         &rotation_abs);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*sigma);
  emxFree_real_T(&x_w);
  emxFree_real_T(&weights);
  emxFree_real_T(&XL2);
  emxFree_real_T(&XL1);
  emxFree_real_T(&rho_t_Napp);
  emxFree_cell_wrap_0(&S_singularity);
  if (nlhs > 1) {
    plhs[1] = emlrt_marshallOut(*epsilon_m);
  }

  if (nlhs > 2) {
    plhs[2] = emlrt_marshallOut(*rotation_m);
  }

  if (nlhs > 3) {
    plhs[3] = b_emlrt_marshallOut(*rotation_v);
  }

  if (nlhs > 4) {
    plhs[4] = c_emlrt_marshallOut(rotation_abs);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_stress_api.c) */
