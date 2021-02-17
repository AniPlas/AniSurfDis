/*
 * stress.c
 *
 * Code generation for function 'stress'
 *
 */

/* Include files */
#include <string.h>
#include "rt_nonfinite.h"
#include "stress.h"
#include "stress_emxutil.h"
#include "integrale_num_inf.h"
#include "norm.h"
#include "sigma_homo.h"
#include "stress_data.h"

/* Variable Definitions */
static emlrtRSInfo f_emlrtRSI = { 50,  /* lineNo */
  "stress",                            /* fcnName */
  "/home/xiaolei/Documents/ImageStress/stress.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 54,  /* lineNo */
  "stress",                            /* fcnName */
  "/home/xiaolei/Documents/ImageStress/stress.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 58,  /* lineNo */
  "stress",                            /* fcnName */
  "/home/xiaolei/Documents/ImageStress/stress.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 62,  /* lineNo */
  "stress",                            /* fcnName */
  "/home/xiaolei/Documents/ImageStress/stress.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 66,  /* lineNo */
  "stress",                            /* fcnName */
  "/home/xiaolei/Documents/ImageStress/stress.m"/* pathName */
};

static emlrtRTEInfo emlrtRTEI = { 50,  /* lineNo */
  14,                                  /* colNo */
  "stress",                            /* fName */
  "/home/xiaolei/Documents/ImageStress/stress.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 29,/* lineNo */
  14,                                  /* colNo */
  "stress",                            /* fName */
  "/home/xiaolei/Documents/ImageStress/stress.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 54,/* lineNo */
  14,                                  /* colNo */
  "stress",                            /* fName */
  "/home/xiaolei/Documents/ImageStress/stress.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 32,/* lineNo */
  14,                                  /* colNo */
  "stress",                            /* fName */
  "/home/xiaolei/Documents/ImageStress/stress.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 58,/* lineNo */
  14,                                  /* colNo */
  "stress",                            /* fName */
  "/home/xiaolei/Documents/ImageStress/stress.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 35,/* lineNo */
  14,                                  /* colNo */
  "stress",                            /* fName */
  "/home/xiaolei/Documents/ImageStress/stress.m"/* pName */
};

static emlrtRTEInfo g_emlrtRTEI = { 62,/* lineNo */
  14,                                  /* colNo */
  "stress",                            /* fName */
  "/home/xiaolei/Documents/ImageStress/stress.m"/* pName */
};

static emlrtRTEInfo h_emlrtRTEI = { 38,/* lineNo */
  14,                                  /* colNo */
  "stress",                            /* fName */
  "/home/xiaolei/Documents/ImageStress/stress.m"/* pName */
};

static emlrtRTEInfo i_emlrtRTEI = { 66,/* lineNo */
  14,                                  /* colNo */
  "stress",                            /* fName */
  "/home/xiaolei/Documents/ImageStress/stress.m"/* pName */
};

static emlrtRTEInfo j_emlrtRTEI = { 41,/* lineNo */
  14,                                  /* colNo */
  "stress",                            /* fName */
  "/home/xiaolei/Documents/ImageStress/stress.m"/* pName */
};

/* Function Definitions */
void stress(stressStackData *SD, const emlrtStack *sp, const
            emxArray_cell_wrap_0 *S_singularity, real_T n_singularity, const
            emxArray_real_T *rho_t_Napp, const real_T b[3], real_T n, const
            emxArray_real_T *XL1, const emxArray_real_T *XL2, real_T x1, real_T
            x2, const real_T C_I[81], const real_T CS_I[36], const creal_T P_I[3],
            const real_T P_I_Re[3], const real_T P_I_Im[3], const creal_T M_P_I
            [9], const creal_T A_I[9], const creal_T B_I[9], const real_T C_II
            [81], const real_T CS_II[36], const creal_T P_II[3], const real_T
            P_II_Re[3], const real_T P_II_Im[3], const creal_T M_P_II[9], const
            creal_T A_II[9], const creal_T B_II[9], const real_T C_GB[81], const
            real_T CS_GB[36], const creal_T P_GB[3], const real_T P_GB_Re[3],
            const real_T P_GB_Im[3], const creal_T M_P_GB[9], const creal_T
            A_GB[9], const creal_T B_GB[9], const real_T C_SU[81], const real_T
            CS_SU[36], const creal_T P_SU[3], const real_T P_SU_Re[3], const
            real_T P_SU_Im[3], const creal_T M_P_SU[9], const creal_T A_SU[9],
            const creal_T B_SU[9], const real_T C_SL[81], const real_T CS_SL[36],
            const creal_T P_SL[3], const real_T P_SL_Re[3], const real_T
            P_SL_Im[3], const creal_T M_P_SL[9], const creal_T A_SL[9], const
            creal_T B_SL[9], const real_T h[25], real_T x22, real_T x23, real_T
            x24, real_T x25, real_T x26, real_T N_app, const emxArray_real_T
            *weights, const emxArray_real_T *x_w, const real_T C[900], const
            real_T C0_Cinv[900], const real_T C0_Cinv_C0[900], real_T sigma[9],
            real_T epsilon_m[9], real_T rotation_m[9], real_T rotation_v[3],
            real_T *rotation_abs)
{
  real_T CS[36];
  int32_T i;
  real_T Ug[6];
  cell_2 expl_temp;
  real_T u_g[9];
  int32_T i0;
  real_T b_epsilon_m[6];
  real_T re;
  real_T im;
  creal_T b_x1[3];
  creal_T b_b[3];
  creal_T dcv0[3];
  real_T b_re;
  real_T b_im;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /*  CS is elastic stiffness tensor in Voigt notation */
  memset(&CS[0], 0, 36U * sizeof(real_T));

  /*  Ug is the non-zero displacement gradient components. For two dimensional */
  /*  elastic theory, Ui,3 = 0 */
  for (i = 0; i < 6; i++) {
    Ug[i] = 0.0;
  }

  /*  u_g is the full displacement gradient matrix   */
  /*  epsilon_m is the elastic deformation matrix  */
  /*  rotation_m is the rotation matrix  */
  /*  rotation_v is the rotation vector */
  /*  Q_ is used for elastic fields calculation of dislocations in an infinite  */
  /*  homogeneous single crystal, Eq.11 in Ref.[2] */
  emxInitStruct_cell_2(sp, &expl_temp, &i_emlrtRTEI, true);
  if ((n == 1.0) && (n_singularity == 0.0)) {
    if (!(x2 > 0.0)) {
      if (x2 >= x22) {
        /*  In upper stiff layer _SU */
        memcpy(&CS[0], &CS_SU[0], 36U * sizeof(real_T));
        i0 = expl_temp.f44->size[0] * expl_temp.f44->size[1];
        expl_temp.f44->size[0] = 1;
        expl_temp.f44->size[1] = XL2->size[1];
        emxEnsureCapacity_real_T(sp, expl_temp.f44, i0, &b_emlrtRTEI);
        i = XL2->size[0] * XL2->size[1];
        for (i0 = 0; i0 < i; i0++) {
          expl_temp.f44->data[i0] = XL2->data[i0];
        }

        i0 = expl_temp.f43->size[0] * expl_temp.f43->size[1];
        expl_temp.f43->size[0] = 1;
        expl_temp.f43->size[1] = XL1->size[1];
        emxEnsureCapacity_real_T(sp, expl_temp.f43, i0, &b_emlrtRTEI);
        i = XL1->size[0] * XL1->size[1];
        for (i0 = 0; i0 < i; i0++) {
          expl_temp.f43->data[i0] = XL1->data[i0];
        }

        expl_temp.f42 = 1.0;
        expl_temp.f41[0] = b[0];
        expl_temp.f41[1] = b[1];
        expl_temp.f41[2] = b[2];
        memcpy(&expl_temp.f40[0], &C0_Cinv_C0[0], 900U * sizeof(real_T));
        memcpy(&expl_temp.f39[0], &C0_Cinv[0], 900U * sizeof(real_T));
        memcpy(&expl_temp.f38[0], &C[0], 900U * sizeof(real_T));
        i0 = expl_temp.f37->size[0];
        expl_temp.f37->size[0] = x_w->size[0];
        emxEnsureCapacity_real_T(sp, expl_temp.f37, i0, &b_emlrtRTEI);
        i = x_w->size[0];
        for (i0 = 0; i0 < i; i0++) {
          expl_temp.f37->data[i0] = x_w->data[i0];
        }

        i0 = expl_temp.f36->size[0] * expl_temp.f36->size[1];
        expl_temp.f36->size[0] = rho_t_Napp->size[0];
        expl_temp.f36->size[1] = rho_t_Napp->size[1];
        emxEnsureCapacity_real_T(sp, expl_temp.f36, i0, &b_emlrtRTEI);
        i = rho_t_Napp->size[0] * rho_t_Napp->size[1];
        for (i0 = 0; i0 < i; i0++) {
          expl_temp.f36->data[i0] = rho_t_Napp->data[i0];
        }

        i0 = expl_temp.f35->size[0] * expl_temp.f35->size[1];
        expl_temp.f35->size[0] = weights->size[0];
        expl_temp.f35->size[1] = weights->size[1];
        emxEnsureCapacity_real_T(sp, expl_temp.f35, i0, &b_emlrtRTEI);
        i = weights->size[0] * weights->size[1];
        for (i0 = 0; i0 < i; i0++) {
          expl_temp.f35->data[i0] = weights->data[i0];
        }

        expl_temp.f34 = N_app;
        memcpy(&expl_temp.f33[0], &h[0], 25U * sizeof(real_T));
        memcpy(&expl_temp.f32[0], &B_SL[0], 9U * sizeof(creal_T));
        memcpy(&expl_temp.f31[0], &A_SL[0], 9U * sizeof(creal_T));
        expl_temp.f30[0] = P_SL_Im[0];
        expl_temp.f30[1] = P_SL_Im[1];
        expl_temp.f30[2] = P_SL_Im[2];
        expl_temp.f29[0] = P_SL_Re[0];
        expl_temp.f29[1] = P_SL_Re[1];
        expl_temp.f29[2] = P_SL_Re[2];
        expl_temp.f28[0] = P_SL[0];
        expl_temp.f28[1] = P_SL[1];
        expl_temp.f28[2] = P_SL[2];
        memcpy(&expl_temp.f27[0], &C_SL[0], 81U * sizeof(real_T));
        memcpy(&expl_temp.f26[0], &B_SU[0], 9U * sizeof(creal_T));
        memcpy(&expl_temp.f25[0], &A_SU[0], 9U * sizeof(creal_T));
        expl_temp.f24[0] = P_SU_Im[0];
        expl_temp.f24[1] = P_SU_Im[1];
        expl_temp.f24[2] = P_SU_Im[2];
        expl_temp.f23[0] = P_SU_Re[0];
        expl_temp.f23[1] = P_SU_Re[1];
        expl_temp.f23[2] = P_SU_Re[2];
        expl_temp.f22[0] = P_SU[0];
        expl_temp.f22[1] = P_SU[1];
        expl_temp.f22[2] = P_SU[2];
        memcpy(&expl_temp.f21[0], &C_SU[0], 81U * sizeof(real_T));
        memcpy(&expl_temp.f20[0], &B_GB[0], 9U * sizeof(creal_T));
        memcpy(&expl_temp.f19[0], &A_GB[0], 9U * sizeof(creal_T));
        expl_temp.f18[0] = P_GB_Im[0];
        expl_temp.f18[1] = P_GB_Im[1];
        expl_temp.f18[2] = P_GB_Im[2];
        expl_temp.f17[0] = P_GB_Re[0];
        expl_temp.f17[1] = P_GB_Re[1];
        expl_temp.f17[2] = P_GB_Re[2];
        expl_temp.f16[0] = P_GB[0];
        expl_temp.f16[1] = P_GB[1];
        expl_temp.f16[2] = P_GB[2];
        memcpy(&expl_temp.f15[0], &C_GB[0], 81U * sizeof(real_T));
        memcpy(&expl_temp.f14[0], &B_II[0], 9U * sizeof(creal_T));
        memcpy(&expl_temp.f13[0], &A_II[0], 9U * sizeof(creal_T));
        expl_temp.f12[0] = P_II_Im[0];
        expl_temp.f12[1] = P_II_Im[1];
        expl_temp.f12[2] = P_II_Im[2];
        expl_temp.f11[0] = P_II_Re[0];
        expl_temp.f11[1] = P_II_Re[1];
        expl_temp.f11[2] = P_II_Re[2];
        expl_temp.f10[0] = P_II[0];
        expl_temp.f10[1] = P_II[1];
        expl_temp.f10[2] = P_II[2];
        memcpy(&expl_temp.f9[0], &C_II[0], 81U * sizeof(real_T));
        memcpy(&expl_temp.f8[0], &B_I[0], 9U * sizeof(creal_T));
        memcpy(&expl_temp.f7[0], &A_I[0], 9U * sizeof(creal_T));
        expl_temp.f6[0] = P_I_Im[0];
        expl_temp.f6[1] = P_I_Im[1];
        expl_temp.f6[2] = P_I_Im[2];
        expl_temp.f5[0] = P_I_Re[0];
        expl_temp.f5[1] = P_I_Re[1];
        expl_temp.f5[2] = P_I_Re[2];
        expl_temp.f4[0] = P_I[0];
        expl_temp.f4[1] = P_I[1];
        expl_temp.f4[2] = P_I[2];
        memcpy(&expl_temp.f3[0], &C_I[0], 81U * sizeof(real_T));
        expl_temp.f2 = x2;
        expl_temp.f1 = x1;
        st.site = &emlrtRSI;
        integrale_num_inf(SD, &st, &expl_temp, Ug);
      } else if (x2 > x23) {
        /*  In crystal I  */
        memcpy(&CS[0], &CS_I[0], 36U * sizeof(real_T));
        i0 = expl_temp.f44->size[0] * expl_temp.f44->size[1];
        expl_temp.f44->size[0] = 1;
        expl_temp.f44->size[1] = XL2->size[1];
        emxEnsureCapacity_real_T(sp, expl_temp.f44, i0, &d_emlrtRTEI);
        i = XL2->size[0] * XL2->size[1];
        for (i0 = 0; i0 < i; i0++) {
          expl_temp.f44->data[i0] = XL2->data[i0];
        }

        i0 = expl_temp.f43->size[0] * expl_temp.f43->size[1];
        expl_temp.f43->size[0] = 1;
        expl_temp.f43->size[1] = XL1->size[1];
        emxEnsureCapacity_real_T(sp, expl_temp.f43, i0, &d_emlrtRTEI);
        i = XL1->size[0] * XL1->size[1];
        for (i0 = 0; i0 < i; i0++) {
          expl_temp.f43->data[i0] = XL1->data[i0];
        }

        expl_temp.f42 = 1.0;
        expl_temp.f41[0] = b[0];
        expl_temp.f41[1] = b[1];
        expl_temp.f41[2] = b[2];
        memcpy(&expl_temp.f40[0], &C0_Cinv_C0[0], 900U * sizeof(real_T));
        memcpy(&expl_temp.f39[0], &C0_Cinv[0], 900U * sizeof(real_T));
        memcpy(&expl_temp.f38[0], &C[0], 900U * sizeof(real_T));
        i0 = expl_temp.f37->size[0];
        expl_temp.f37->size[0] = x_w->size[0];
        emxEnsureCapacity_real_T(sp, expl_temp.f37, i0, &d_emlrtRTEI);
        i = x_w->size[0];
        for (i0 = 0; i0 < i; i0++) {
          expl_temp.f37->data[i0] = x_w->data[i0];
        }

        i0 = expl_temp.f36->size[0] * expl_temp.f36->size[1];
        expl_temp.f36->size[0] = rho_t_Napp->size[0];
        expl_temp.f36->size[1] = rho_t_Napp->size[1];
        emxEnsureCapacity_real_T(sp, expl_temp.f36, i0, &d_emlrtRTEI);
        i = rho_t_Napp->size[0] * rho_t_Napp->size[1];
        for (i0 = 0; i0 < i; i0++) {
          expl_temp.f36->data[i0] = rho_t_Napp->data[i0];
        }

        i0 = expl_temp.f35->size[0] * expl_temp.f35->size[1];
        expl_temp.f35->size[0] = weights->size[0];
        expl_temp.f35->size[1] = weights->size[1];
        emxEnsureCapacity_real_T(sp, expl_temp.f35, i0, &d_emlrtRTEI);
        i = weights->size[0] * weights->size[1];
        for (i0 = 0; i0 < i; i0++) {
          expl_temp.f35->data[i0] = weights->data[i0];
        }

        expl_temp.f34 = N_app;
        memcpy(&expl_temp.f33[0], &h[0], 25U * sizeof(real_T));
        memcpy(&expl_temp.f32[0], &B_SL[0], 9U * sizeof(creal_T));
        memcpy(&expl_temp.f31[0], &A_SL[0], 9U * sizeof(creal_T));
        expl_temp.f30[0] = P_SL_Im[0];
        expl_temp.f30[1] = P_SL_Im[1];
        expl_temp.f30[2] = P_SL_Im[2];
        expl_temp.f29[0] = P_SL_Re[0];
        expl_temp.f29[1] = P_SL_Re[1];
        expl_temp.f29[2] = P_SL_Re[2];
        expl_temp.f28[0] = P_SL[0];
        expl_temp.f28[1] = P_SL[1];
        expl_temp.f28[2] = P_SL[2];
        memcpy(&expl_temp.f27[0], &C_SL[0], 81U * sizeof(real_T));
        memcpy(&expl_temp.f26[0], &B_SU[0], 9U * sizeof(creal_T));
        memcpy(&expl_temp.f25[0], &A_SU[0], 9U * sizeof(creal_T));
        expl_temp.f24[0] = P_SU_Im[0];
        expl_temp.f24[1] = P_SU_Im[1];
        expl_temp.f24[2] = P_SU_Im[2];
        expl_temp.f23[0] = P_SU_Re[0];
        expl_temp.f23[1] = P_SU_Re[1];
        expl_temp.f23[2] = P_SU_Re[2];
        expl_temp.f22[0] = P_SU[0];
        expl_temp.f22[1] = P_SU[1];
        expl_temp.f22[2] = P_SU[2];
        memcpy(&expl_temp.f21[0], &C_SU[0], 81U * sizeof(real_T));
        memcpy(&expl_temp.f20[0], &B_GB[0], 9U * sizeof(creal_T));
        memcpy(&expl_temp.f19[0], &A_GB[0], 9U * sizeof(creal_T));
        expl_temp.f18[0] = P_GB_Im[0];
        expl_temp.f18[1] = P_GB_Im[1];
        expl_temp.f18[2] = P_GB_Im[2];
        expl_temp.f17[0] = P_GB_Re[0];
        expl_temp.f17[1] = P_GB_Re[1];
        expl_temp.f17[2] = P_GB_Re[2];
        expl_temp.f16[0] = P_GB[0];
        expl_temp.f16[1] = P_GB[1];
        expl_temp.f16[2] = P_GB[2];
        memcpy(&expl_temp.f15[0], &C_GB[0], 81U * sizeof(real_T));
        memcpy(&expl_temp.f14[0], &B_II[0], 9U * sizeof(creal_T));
        memcpy(&expl_temp.f13[0], &A_II[0], 9U * sizeof(creal_T));
        expl_temp.f12[0] = P_II_Im[0];
        expl_temp.f12[1] = P_II_Im[1];
        expl_temp.f12[2] = P_II_Im[2];
        expl_temp.f11[0] = P_II_Re[0];
        expl_temp.f11[1] = P_II_Re[1];
        expl_temp.f11[2] = P_II_Re[2];
        expl_temp.f10[0] = P_II[0];
        expl_temp.f10[1] = P_II[1];
        expl_temp.f10[2] = P_II[2];
        memcpy(&expl_temp.f9[0], &C_II[0], 81U * sizeof(real_T));
        memcpy(&expl_temp.f8[0], &B_I[0], 9U * sizeof(creal_T));
        memcpy(&expl_temp.f7[0], &A_I[0], 9U * sizeof(creal_T));
        expl_temp.f6[0] = P_I_Im[0];
        expl_temp.f6[1] = P_I_Im[1];
        expl_temp.f6[2] = P_I_Im[2];
        expl_temp.f5[0] = P_I_Re[0];
        expl_temp.f5[1] = P_I_Re[1];
        expl_temp.f5[2] = P_I_Re[2];
        expl_temp.f4[0] = P_I[0];
        expl_temp.f4[1] = P_I[1];
        expl_temp.f4[2] = P_I[2];
        memcpy(&expl_temp.f3[0], &C_I[0], 81U * sizeof(real_T));
        expl_temp.f2 = x2;
        expl_temp.f1 = x1;
        st.site = &b_emlrtRSI;
        b_integrale_num_inf(SD, &st, &expl_temp, Ug);
      } else if (x2 >= x24) {
        /*  In interphase GB   */
        memcpy(&CS[0], &CS_GB[0], 36U * sizeof(real_T));
        i0 = expl_temp.f44->size[0] * expl_temp.f44->size[1];
        expl_temp.f44->size[0] = 1;
        expl_temp.f44->size[1] = XL2->size[1];
        emxEnsureCapacity_real_T(sp, expl_temp.f44, i0, &f_emlrtRTEI);
        i = XL2->size[0] * XL2->size[1];
        for (i0 = 0; i0 < i; i0++) {
          expl_temp.f44->data[i0] = XL2->data[i0];
        }

        i0 = expl_temp.f43->size[0] * expl_temp.f43->size[1];
        expl_temp.f43->size[0] = 1;
        expl_temp.f43->size[1] = XL1->size[1];
        emxEnsureCapacity_real_T(sp, expl_temp.f43, i0, &f_emlrtRTEI);
        i = XL1->size[0] * XL1->size[1];
        for (i0 = 0; i0 < i; i0++) {
          expl_temp.f43->data[i0] = XL1->data[i0];
        }

        expl_temp.f42 = 1.0;
        expl_temp.f41[0] = b[0];
        expl_temp.f41[1] = b[1];
        expl_temp.f41[2] = b[2];
        memcpy(&expl_temp.f40[0], &C0_Cinv_C0[0], 900U * sizeof(real_T));
        memcpy(&expl_temp.f39[0], &C0_Cinv[0], 900U * sizeof(real_T));
        memcpy(&expl_temp.f38[0], &C[0], 900U * sizeof(real_T));
        i0 = expl_temp.f37->size[0];
        expl_temp.f37->size[0] = x_w->size[0];
        emxEnsureCapacity_real_T(sp, expl_temp.f37, i0, &f_emlrtRTEI);
        i = x_w->size[0];
        for (i0 = 0; i0 < i; i0++) {
          expl_temp.f37->data[i0] = x_w->data[i0];
        }

        i0 = expl_temp.f36->size[0] * expl_temp.f36->size[1];
        expl_temp.f36->size[0] = rho_t_Napp->size[0];
        expl_temp.f36->size[1] = rho_t_Napp->size[1];
        emxEnsureCapacity_real_T(sp, expl_temp.f36, i0, &f_emlrtRTEI);
        i = rho_t_Napp->size[0] * rho_t_Napp->size[1];
        for (i0 = 0; i0 < i; i0++) {
          expl_temp.f36->data[i0] = rho_t_Napp->data[i0];
        }

        i0 = expl_temp.f35->size[0] * expl_temp.f35->size[1];
        expl_temp.f35->size[0] = weights->size[0];
        expl_temp.f35->size[1] = weights->size[1];
        emxEnsureCapacity_real_T(sp, expl_temp.f35, i0, &f_emlrtRTEI);
        i = weights->size[0] * weights->size[1];
        for (i0 = 0; i0 < i; i0++) {
          expl_temp.f35->data[i0] = weights->data[i0];
        }

        expl_temp.f34 = N_app;
        memcpy(&expl_temp.f33[0], &h[0], 25U * sizeof(real_T));
        memcpy(&expl_temp.f32[0], &B_SL[0], 9U * sizeof(creal_T));
        memcpy(&expl_temp.f31[0], &A_SL[0], 9U * sizeof(creal_T));
        expl_temp.f30[0] = P_SL_Im[0];
        expl_temp.f30[1] = P_SL_Im[1];
        expl_temp.f30[2] = P_SL_Im[2];
        expl_temp.f29[0] = P_SL_Re[0];
        expl_temp.f29[1] = P_SL_Re[1];
        expl_temp.f29[2] = P_SL_Re[2];
        expl_temp.f28[0] = P_SL[0];
        expl_temp.f28[1] = P_SL[1];
        expl_temp.f28[2] = P_SL[2];
        memcpy(&expl_temp.f27[0], &C_SL[0], 81U * sizeof(real_T));
        memcpy(&expl_temp.f26[0], &B_SU[0], 9U * sizeof(creal_T));
        memcpy(&expl_temp.f25[0], &A_SU[0], 9U * sizeof(creal_T));
        expl_temp.f24[0] = P_SU_Im[0];
        expl_temp.f24[1] = P_SU_Im[1];
        expl_temp.f24[2] = P_SU_Im[2];
        expl_temp.f23[0] = P_SU_Re[0];
        expl_temp.f23[1] = P_SU_Re[1];
        expl_temp.f23[2] = P_SU_Re[2];
        expl_temp.f22[0] = P_SU[0];
        expl_temp.f22[1] = P_SU[1];
        expl_temp.f22[2] = P_SU[2];
        memcpy(&expl_temp.f21[0], &C_SU[0], 81U * sizeof(real_T));
        memcpy(&expl_temp.f20[0], &B_GB[0], 9U * sizeof(creal_T));
        memcpy(&expl_temp.f19[0], &A_GB[0], 9U * sizeof(creal_T));
        expl_temp.f18[0] = P_GB_Im[0];
        expl_temp.f18[1] = P_GB_Im[1];
        expl_temp.f18[2] = P_GB_Im[2];
        expl_temp.f17[0] = P_GB_Re[0];
        expl_temp.f17[1] = P_GB_Re[1];
        expl_temp.f17[2] = P_GB_Re[2];
        expl_temp.f16[0] = P_GB[0];
        expl_temp.f16[1] = P_GB[1];
        expl_temp.f16[2] = P_GB[2];
        memcpy(&expl_temp.f15[0], &C_GB[0], 81U * sizeof(real_T));
        memcpy(&expl_temp.f14[0], &B_II[0], 9U * sizeof(creal_T));
        memcpy(&expl_temp.f13[0], &A_II[0], 9U * sizeof(creal_T));
        expl_temp.f12[0] = P_II_Im[0];
        expl_temp.f12[1] = P_II_Im[1];
        expl_temp.f12[2] = P_II_Im[2];
        expl_temp.f11[0] = P_II_Re[0];
        expl_temp.f11[1] = P_II_Re[1];
        expl_temp.f11[2] = P_II_Re[2];
        expl_temp.f10[0] = P_II[0];
        expl_temp.f10[1] = P_II[1];
        expl_temp.f10[2] = P_II[2];
        memcpy(&expl_temp.f9[0], &C_II[0], 81U * sizeof(real_T));
        memcpy(&expl_temp.f8[0], &B_I[0], 9U * sizeof(creal_T));
        memcpy(&expl_temp.f7[0], &A_I[0], 9U * sizeof(creal_T));
        expl_temp.f6[0] = P_I_Im[0];
        expl_temp.f6[1] = P_I_Im[1];
        expl_temp.f6[2] = P_I_Im[2];
        expl_temp.f5[0] = P_I_Re[0];
        expl_temp.f5[1] = P_I_Re[1];
        expl_temp.f5[2] = P_I_Re[2];
        expl_temp.f4[0] = P_I[0];
        expl_temp.f4[1] = P_I[1];
        expl_temp.f4[2] = P_I[2];
        memcpy(&expl_temp.f3[0], &C_I[0], 81U * sizeof(real_T));
        expl_temp.f2 = x2;
        expl_temp.f1 = x1;
        st.site = &c_emlrtRSI;
        c_integrale_num_inf(SD, &st, &expl_temp, Ug);
      } else if (x2 >= x25) {
        /*  In crystal II */
        memcpy(&CS[0], &CS_II[0], 36U * sizeof(real_T));
        i0 = expl_temp.f44->size[0] * expl_temp.f44->size[1];
        expl_temp.f44->size[0] = 1;
        expl_temp.f44->size[1] = XL2->size[1];
        emxEnsureCapacity_real_T(sp, expl_temp.f44, i0, &h_emlrtRTEI);
        i = XL2->size[0] * XL2->size[1];
        for (i0 = 0; i0 < i; i0++) {
          expl_temp.f44->data[i0] = XL2->data[i0];
        }

        i0 = expl_temp.f43->size[0] * expl_temp.f43->size[1];
        expl_temp.f43->size[0] = 1;
        expl_temp.f43->size[1] = XL1->size[1];
        emxEnsureCapacity_real_T(sp, expl_temp.f43, i0, &h_emlrtRTEI);
        i = XL1->size[0] * XL1->size[1];
        for (i0 = 0; i0 < i; i0++) {
          expl_temp.f43->data[i0] = XL1->data[i0];
        }

        expl_temp.f42 = 1.0;
        expl_temp.f41[0] = b[0];
        expl_temp.f41[1] = b[1];
        expl_temp.f41[2] = b[2];
        memcpy(&expl_temp.f40[0], &C0_Cinv_C0[0], 900U * sizeof(real_T));
        memcpy(&expl_temp.f39[0], &C0_Cinv[0], 900U * sizeof(real_T));
        memcpy(&expl_temp.f38[0], &C[0], 900U * sizeof(real_T));
        i0 = expl_temp.f37->size[0];
        expl_temp.f37->size[0] = x_w->size[0];
        emxEnsureCapacity_real_T(sp, expl_temp.f37, i0, &h_emlrtRTEI);
        i = x_w->size[0];
        for (i0 = 0; i0 < i; i0++) {
          expl_temp.f37->data[i0] = x_w->data[i0];
        }

        i0 = expl_temp.f36->size[0] * expl_temp.f36->size[1];
        expl_temp.f36->size[0] = rho_t_Napp->size[0];
        expl_temp.f36->size[1] = rho_t_Napp->size[1];
        emxEnsureCapacity_real_T(sp, expl_temp.f36, i0, &h_emlrtRTEI);
        i = rho_t_Napp->size[0] * rho_t_Napp->size[1];
        for (i0 = 0; i0 < i; i0++) {
          expl_temp.f36->data[i0] = rho_t_Napp->data[i0];
        }

        i0 = expl_temp.f35->size[0] * expl_temp.f35->size[1];
        expl_temp.f35->size[0] = weights->size[0];
        expl_temp.f35->size[1] = weights->size[1];
        emxEnsureCapacity_real_T(sp, expl_temp.f35, i0, &h_emlrtRTEI);
        i = weights->size[0] * weights->size[1];
        for (i0 = 0; i0 < i; i0++) {
          expl_temp.f35->data[i0] = weights->data[i0];
        }

        expl_temp.f34 = N_app;
        memcpy(&expl_temp.f33[0], &h[0], 25U * sizeof(real_T));
        memcpy(&expl_temp.f32[0], &B_SL[0], 9U * sizeof(creal_T));
        memcpy(&expl_temp.f31[0], &A_SL[0], 9U * sizeof(creal_T));
        expl_temp.f30[0] = P_SL_Im[0];
        expl_temp.f30[1] = P_SL_Im[1];
        expl_temp.f30[2] = P_SL_Im[2];
        expl_temp.f29[0] = P_SL_Re[0];
        expl_temp.f29[1] = P_SL_Re[1];
        expl_temp.f29[2] = P_SL_Re[2];
        expl_temp.f28[0] = P_SL[0];
        expl_temp.f28[1] = P_SL[1];
        expl_temp.f28[2] = P_SL[2];
        memcpy(&expl_temp.f27[0], &C_SL[0], 81U * sizeof(real_T));
        memcpy(&expl_temp.f26[0], &B_SU[0], 9U * sizeof(creal_T));
        memcpy(&expl_temp.f25[0], &A_SU[0], 9U * sizeof(creal_T));
        expl_temp.f24[0] = P_SU_Im[0];
        expl_temp.f24[1] = P_SU_Im[1];
        expl_temp.f24[2] = P_SU_Im[2];
        expl_temp.f23[0] = P_SU_Re[0];
        expl_temp.f23[1] = P_SU_Re[1];
        expl_temp.f23[2] = P_SU_Re[2];
        expl_temp.f22[0] = P_SU[0];
        expl_temp.f22[1] = P_SU[1];
        expl_temp.f22[2] = P_SU[2];
        memcpy(&expl_temp.f21[0], &C_SU[0], 81U * sizeof(real_T));
        memcpy(&expl_temp.f20[0], &B_GB[0], 9U * sizeof(creal_T));
        memcpy(&expl_temp.f19[0], &A_GB[0], 9U * sizeof(creal_T));
        expl_temp.f18[0] = P_GB_Im[0];
        expl_temp.f18[1] = P_GB_Im[1];
        expl_temp.f18[2] = P_GB_Im[2];
        expl_temp.f17[0] = P_GB_Re[0];
        expl_temp.f17[1] = P_GB_Re[1];
        expl_temp.f17[2] = P_GB_Re[2];
        expl_temp.f16[0] = P_GB[0];
        expl_temp.f16[1] = P_GB[1];
        expl_temp.f16[2] = P_GB[2];
        memcpy(&expl_temp.f15[0], &C_GB[0], 81U * sizeof(real_T));
        memcpy(&expl_temp.f14[0], &B_II[0], 9U * sizeof(creal_T));
        memcpy(&expl_temp.f13[0], &A_II[0], 9U * sizeof(creal_T));
        expl_temp.f12[0] = P_II_Im[0];
        expl_temp.f12[1] = P_II_Im[1];
        expl_temp.f12[2] = P_II_Im[2];
        expl_temp.f11[0] = P_II_Re[0];
        expl_temp.f11[1] = P_II_Re[1];
        expl_temp.f11[2] = P_II_Re[2];
        expl_temp.f10[0] = P_II[0];
        expl_temp.f10[1] = P_II[1];
        expl_temp.f10[2] = P_II[2];
        memcpy(&expl_temp.f9[0], &C_II[0], 81U * sizeof(real_T));
        memcpy(&expl_temp.f8[0], &B_I[0], 9U * sizeof(creal_T));
        memcpy(&expl_temp.f7[0], &A_I[0], 9U * sizeof(creal_T));
        expl_temp.f6[0] = P_I_Im[0];
        expl_temp.f6[1] = P_I_Im[1];
        expl_temp.f6[2] = P_I_Im[2];
        expl_temp.f5[0] = P_I_Re[0];
        expl_temp.f5[1] = P_I_Re[1];
        expl_temp.f5[2] = P_I_Re[2];
        expl_temp.f4[0] = P_I[0];
        expl_temp.f4[1] = P_I[1];
        expl_temp.f4[2] = P_I[2];
        memcpy(&expl_temp.f3[0], &C_I[0], 81U * sizeof(real_T));
        expl_temp.f2 = x2;
        expl_temp.f1 = x1;
        st.site = &d_emlrtRSI;
        d_integrale_num_inf(SD, &st, &expl_temp, Ug);
      } else {
        if (x2 >= x26) {
          /*  In bottom stiff layer _SL */
          memcpy(&CS[0], &CS_SL[0], 36U * sizeof(real_T));
          i0 = expl_temp.f44->size[0] * expl_temp.f44->size[1];
          expl_temp.f44->size[0] = 1;
          expl_temp.f44->size[1] = XL2->size[1];
          emxEnsureCapacity_real_T(sp, expl_temp.f44, i0, &j_emlrtRTEI);
          i = XL2->size[0] * XL2->size[1];
          for (i0 = 0; i0 < i; i0++) {
            expl_temp.f44->data[i0] = XL2->data[i0];
          }

          i0 = expl_temp.f43->size[0] * expl_temp.f43->size[1];
          expl_temp.f43->size[0] = 1;
          expl_temp.f43->size[1] = XL1->size[1];
          emxEnsureCapacity_real_T(sp, expl_temp.f43, i0, &j_emlrtRTEI);
          i = XL1->size[0] * XL1->size[1];
          for (i0 = 0; i0 < i; i0++) {
            expl_temp.f43->data[i0] = XL1->data[i0];
          }

          expl_temp.f42 = 1.0;
          expl_temp.f41[0] = b[0];
          expl_temp.f41[1] = b[1];
          expl_temp.f41[2] = b[2];
          memcpy(&expl_temp.f40[0], &C0_Cinv_C0[0], 900U * sizeof(real_T));
          memcpy(&expl_temp.f39[0], &C0_Cinv[0], 900U * sizeof(real_T));
          memcpy(&expl_temp.f38[0], &C[0], 900U * sizeof(real_T));
          i0 = expl_temp.f37->size[0];
          expl_temp.f37->size[0] = x_w->size[0];
          emxEnsureCapacity_real_T(sp, expl_temp.f37, i0, &j_emlrtRTEI);
          i = x_w->size[0];
          for (i0 = 0; i0 < i; i0++) {
            expl_temp.f37->data[i0] = x_w->data[i0];
          }

          i0 = expl_temp.f36->size[0] * expl_temp.f36->size[1];
          expl_temp.f36->size[0] = rho_t_Napp->size[0];
          expl_temp.f36->size[1] = rho_t_Napp->size[1];
          emxEnsureCapacity_real_T(sp, expl_temp.f36, i0, &j_emlrtRTEI);
          i = rho_t_Napp->size[0] * rho_t_Napp->size[1];
          for (i0 = 0; i0 < i; i0++) {
            expl_temp.f36->data[i0] = rho_t_Napp->data[i0];
          }

          i0 = expl_temp.f35->size[0] * expl_temp.f35->size[1];
          expl_temp.f35->size[0] = weights->size[0];
          expl_temp.f35->size[1] = weights->size[1];
          emxEnsureCapacity_real_T(sp, expl_temp.f35, i0, &j_emlrtRTEI);
          i = weights->size[0] * weights->size[1];
          for (i0 = 0; i0 < i; i0++) {
            expl_temp.f35->data[i0] = weights->data[i0];
          }

          expl_temp.f34 = N_app;
          memcpy(&expl_temp.f33[0], &h[0], 25U * sizeof(real_T));
          memcpy(&expl_temp.f32[0], &B_SL[0], 9U * sizeof(creal_T));
          memcpy(&expl_temp.f31[0], &A_SL[0], 9U * sizeof(creal_T));
          expl_temp.f30[0] = P_SL_Im[0];
          expl_temp.f30[1] = P_SL_Im[1];
          expl_temp.f30[2] = P_SL_Im[2];
          expl_temp.f29[0] = P_SL_Re[0];
          expl_temp.f29[1] = P_SL_Re[1];
          expl_temp.f29[2] = P_SL_Re[2];
          expl_temp.f28[0] = P_SL[0];
          expl_temp.f28[1] = P_SL[1];
          expl_temp.f28[2] = P_SL[2];
          memcpy(&expl_temp.f27[0], &C_SL[0], 81U * sizeof(real_T));
          memcpy(&expl_temp.f26[0], &B_SU[0], 9U * sizeof(creal_T));
          memcpy(&expl_temp.f25[0], &A_SU[0], 9U * sizeof(creal_T));
          expl_temp.f24[0] = P_SU_Im[0];
          expl_temp.f24[1] = P_SU_Im[1];
          expl_temp.f24[2] = P_SU_Im[2];
          expl_temp.f23[0] = P_SU_Re[0];
          expl_temp.f23[1] = P_SU_Re[1];
          expl_temp.f23[2] = P_SU_Re[2];
          expl_temp.f22[0] = P_SU[0];
          expl_temp.f22[1] = P_SU[1];
          expl_temp.f22[2] = P_SU[2];
          memcpy(&expl_temp.f21[0], &C_SU[0], 81U * sizeof(real_T));
          memcpy(&expl_temp.f20[0], &B_GB[0], 9U * sizeof(creal_T));
          memcpy(&expl_temp.f19[0], &A_GB[0], 9U * sizeof(creal_T));
          expl_temp.f18[0] = P_GB_Im[0];
          expl_temp.f18[1] = P_GB_Im[1];
          expl_temp.f18[2] = P_GB_Im[2];
          expl_temp.f17[0] = P_GB_Re[0];
          expl_temp.f17[1] = P_GB_Re[1];
          expl_temp.f17[2] = P_GB_Re[2];
          expl_temp.f16[0] = P_GB[0];
          expl_temp.f16[1] = P_GB[1];
          expl_temp.f16[2] = P_GB[2];
          memcpy(&expl_temp.f15[0], &C_GB[0], 81U * sizeof(real_T));
          memcpy(&expl_temp.f14[0], &B_II[0], 9U * sizeof(creal_T));
          memcpy(&expl_temp.f13[0], &A_II[0], 9U * sizeof(creal_T));
          expl_temp.f12[0] = P_II_Im[0];
          expl_temp.f12[1] = P_II_Im[1];
          expl_temp.f12[2] = P_II_Im[2];
          expl_temp.f11[0] = P_II_Re[0];
          expl_temp.f11[1] = P_II_Re[1];
          expl_temp.f11[2] = P_II_Re[2];
          expl_temp.f10[0] = P_II[0];
          expl_temp.f10[1] = P_II[1];
          expl_temp.f10[2] = P_II[2];
          memcpy(&expl_temp.f9[0], &C_II[0], 81U * sizeof(real_T));
          memcpy(&expl_temp.f8[0], &B_I[0], 9U * sizeof(creal_T));
          memcpy(&expl_temp.f7[0], &A_I[0], 9U * sizeof(creal_T));
          expl_temp.f6[0] = P_I_Im[0];
          expl_temp.f6[1] = P_I_Im[1];
          expl_temp.f6[2] = P_I_Im[2];
          expl_temp.f5[0] = P_I_Re[0];
          expl_temp.f5[1] = P_I_Re[1];
          expl_temp.f5[2] = P_I_Re[2];
          expl_temp.f4[0] = P_I[0];
          expl_temp.f4[1] = P_I[1];
          expl_temp.f4[2] = P_I[2];
          memcpy(&expl_temp.f3[0], &C_I[0], 81U * sizeof(real_T));
          expl_temp.f2 = x2;
          expl_temp.f1 = x1;
          st.site = &e_emlrtRSI;
          e_integrale_num_inf(SD, &st, &expl_temp, Ug);
        }
      }
    }

    /*  If there are dislocations not located at calculated point, the elastic fields due to these dislocations in homogeneous single crystal should be considered.      */
  } else {
    if (!(x2 > 0.0)) {
      if (x2 >= x22) {
        /*  In upper stiff layer _SU */
        memcpy(&CS[0], &CS_SU[0], 36U * sizeof(real_T));
        i0 = expl_temp.f44->size[0] * expl_temp.f44->size[1];
        expl_temp.f44->size[0] = 1;
        expl_temp.f44->size[1] = XL2->size[1];
        emxEnsureCapacity_real_T(sp, expl_temp.f44, i0, &emlrtRTEI);
        i = XL2->size[0] * XL2->size[1];
        for (i0 = 0; i0 < i; i0++) {
          expl_temp.f44->data[i0] = XL2->data[i0];
        }

        i0 = expl_temp.f43->size[0] * expl_temp.f43->size[1];
        expl_temp.f43->size[0] = 1;
        expl_temp.f43->size[1] = XL1->size[1];
        emxEnsureCapacity_real_T(sp, expl_temp.f43, i0, &emlrtRTEI);
        i = XL1->size[0] * XL1->size[1];
        for (i0 = 0; i0 < i; i0++) {
          expl_temp.f43->data[i0] = XL1->data[i0];
        }

        expl_temp.f42 = n;
        expl_temp.f41[0] = b[0];
        expl_temp.f41[1] = b[1];
        expl_temp.f41[2] = b[2];
        memcpy(&expl_temp.f40[0], &C0_Cinv_C0[0], 900U * sizeof(real_T));
        memcpy(&expl_temp.f39[0], &C0_Cinv[0], 900U * sizeof(real_T));
        memcpy(&expl_temp.f38[0], &C[0], 900U * sizeof(real_T));
        i0 = expl_temp.f37->size[0];
        expl_temp.f37->size[0] = x_w->size[0];
        emxEnsureCapacity_real_T(sp, expl_temp.f37, i0, &emlrtRTEI);
        i = x_w->size[0];
        for (i0 = 0; i0 < i; i0++) {
          expl_temp.f37->data[i0] = x_w->data[i0];
        }

        i0 = expl_temp.f36->size[0] * expl_temp.f36->size[1];
        expl_temp.f36->size[0] = rho_t_Napp->size[0];
        expl_temp.f36->size[1] = rho_t_Napp->size[1];
        emxEnsureCapacity_real_T(sp, expl_temp.f36, i0, &emlrtRTEI);
        i = rho_t_Napp->size[0] * rho_t_Napp->size[1];
        for (i0 = 0; i0 < i; i0++) {
          expl_temp.f36->data[i0] = rho_t_Napp->data[i0];
        }

        i0 = expl_temp.f35->size[0] * expl_temp.f35->size[1];
        expl_temp.f35->size[0] = weights->size[0];
        expl_temp.f35->size[1] = weights->size[1];
        emxEnsureCapacity_real_T(sp, expl_temp.f35, i0, &emlrtRTEI);
        i = weights->size[0] * weights->size[1];
        for (i0 = 0; i0 < i; i0++) {
          expl_temp.f35->data[i0] = weights->data[i0];
        }

        expl_temp.f34 = N_app;
        memcpy(&expl_temp.f33[0], &h[0], 25U * sizeof(real_T));
        memcpy(&expl_temp.f32[0], &B_SL[0], 9U * sizeof(creal_T));
        memcpy(&expl_temp.f31[0], &A_SL[0], 9U * sizeof(creal_T));
        expl_temp.f30[0] = P_SL_Im[0];
        expl_temp.f30[1] = P_SL_Im[1];
        expl_temp.f30[2] = P_SL_Im[2];
        expl_temp.f29[0] = P_SL_Re[0];
        expl_temp.f29[1] = P_SL_Re[1];
        expl_temp.f29[2] = P_SL_Re[2];
        expl_temp.f28[0] = P_SL[0];
        expl_temp.f28[1] = P_SL[1];
        expl_temp.f28[2] = P_SL[2];
        memcpy(&expl_temp.f27[0], &C_SL[0], 81U * sizeof(real_T));
        memcpy(&expl_temp.f26[0], &B_SU[0], 9U * sizeof(creal_T));
        memcpy(&expl_temp.f25[0], &A_SU[0], 9U * sizeof(creal_T));
        expl_temp.f24[0] = P_SU_Im[0];
        expl_temp.f24[1] = P_SU_Im[1];
        expl_temp.f24[2] = P_SU_Im[2];
        expl_temp.f23[0] = P_SU_Re[0];
        expl_temp.f23[1] = P_SU_Re[1];
        expl_temp.f23[2] = P_SU_Re[2];
        expl_temp.f22[0] = P_SU[0];
        expl_temp.f22[1] = P_SU[1];
        expl_temp.f22[2] = P_SU[2];
        memcpy(&expl_temp.f21[0], &C_SU[0], 81U * sizeof(real_T));
        memcpy(&expl_temp.f20[0], &B_GB[0], 9U * sizeof(creal_T));
        memcpy(&expl_temp.f19[0], &A_GB[0], 9U * sizeof(creal_T));
        expl_temp.f18[0] = P_GB_Im[0];
        expl_temp.f18[1] = P_GB_Im[1];
        expl_temp.f18[2] = P_GB_Im[2];
        expl_temp.f17[0] = P_GB_Re[0];
        expl_temp.f17[1] = P_GB_Re[1];
        expl_temp.f17[2] = P_GB_Re[2];
        expl_temp.f16[0] = P_GB[0];
        expl_temp.f16[1] = P_GB[1];
        expl_temp.f16[2] = P_GB[2];
        memcpy(&expl_temp.f15[0], &C_GB[0], 81U * sizeof(real_T));
        memcpy(&expl_temp.f14[0], &B_II[0], 9U * sizeof(creal_T));
        memcpy(&expl_temp.f13[0], &A_II[0], 9U * sizeof(creal_T));
        expl_temp.f12[0] = P_II_Im[0];
        expl_temp.f12[1] = P_II_Im[1];
        expl_temp.f12[2] = P_II_Im[2];
        expl_temp.f11[0] = P_II_Re[0];
        expl_temp.f11[1] = P_II_Re[1];
        expl_temp.f11[2] = P_II_Re[2];
        expl_temp.f10[0] = P_II[0];
        expl_temp.f10[1] = P_II[1];
        expl_temp.f10[2] = P_II[2];
        memcpy(&expl_temp.f9[0], &C_II[0], 81U * sizeof(real_T));
        memcpy(&expl_temp.f8[0], &B_I[0], 9U * sizeof(creal_T));
        memcpy(&expl_temp.f7[0], &A_I[0], 9U * sizeof(creal_T));
        expl_temp.f6[0] = P_I_Im[0];
        expl_temp.f6[1] = P_I_Im[1];
        expl_temp.f6[2] = P_I_Im[2];
        expl_temp.f5[0] = P_I_Re[0];
        expl_temp.f5[1] = P_I_Re[1];
        expl_temp.f5[2] = P_I_Re[2];
        expl_temp.f4[0] = P_I[0];
        expl_temp.f4[1] = P_I[1];
        expl_temp.f4[2] = P_I[2];
        memcpy(&expl_temp.f3[0], &C_I[0], 81U * sizeof(real_T));
        expl_temp.f2 = x2;
        expl_temp.f1 = x1;
        st.site = &f_emlrtRSI;
        integrale_num_inf(SD, &st, &expl_temp, Ug);
        b_x1[0].re = x1 + P_SU[0].re * x2;
        b_x1[0].im = P_SU[0].im * x2;
        b_b[0].re = b[0];
        b_x1[1].re = x1 + P_SU[1].re * x2;
        b_x1[1].im = P_SU[1].im * x2;
        b_b[1].re = b[1];
        b_x1[2].re = x1 + P_SU[2].re * x2;
        b_x1[2].im = P_SU[2].im * x2;
        b_b[2].re = b[2];
        for (i0 = 0; i0 < 3; i0++) {
          dcv0[i0].re = 0.0;
          dcv0[i0].im = 0.0;
          b_re = 0.0 * B_SU[3 * i0].re - -0.15915494309189535 * B_SU[3 * i0].im;
          b_im = 0.0 * B_SU[3 * i0].im + -0.15915494309189535 * B_SU[3 * i0].re;
          re = b_re * b_b[0].re - b_im * 0.0;
          im = b_re * 0.0 + b_im * b_b[0].re;
          b_re = 0.0 * B_SU[1 + 3 * i0].re - -0.15915494309189535 * B_SU[1 + 3 *
            i0].im;
          b_im = 0.0 * B_SU[1 + 3 * i0].im + -0.15915494309189535 * B_SU[1 + 3 *
            i0].re;
          re += b_re * b_b[1].re - b_im * 0.0;
          im += b_re * 0.0 + b_im * b_b[1].re;
          b_re = 0.0 * B_SU[2 + 3 * i0].re - -0.15915494309189535 * B_SU[2 + 3 *
            i0].im;
          b_im = 0.0 * B_SU[2 + 3 * i0].im + -0.15915494309189535 * B_SU[2 + 3 *
            i0].re;
          re += b_re * b_b[2].re - b_im * 0.0;
          im += b_re * 0.0 + b_im * b_b[2].re;
          dcv0[i0].re = re;
          dcv0[i0].im = im;
        }

        st.site = &f_emlrtRSI;
        sigma_homo(&st, b_x1, S_singularity, dcv0, n_singularity, x2, M_P_I, A_I,
                   M_P_II, A_II, M_P_GB, A_GB, M_P_SU, A_SU, M_P_SL, A_SL, x22,
                   x23, x24, x25, x26, b_epsilon_m);
        for (i0 = 0; i0 < 6; i0++) {
          Ug[i0] += b_epsilon_m[i0];
        }
      } else if (x2 > x23) {
        /*  In crystal I  */
        memcpy(&CS[0], &CS_I[0], 36U * sizeof(real_T));
        i0 = expl_temp.f44->size[0] * expl_temp.f44->size[1];
        expl_temp.f44->size[0] = 1;
        expl_temp.f44->size[1] = XL2->size[1];
        emxEnsureCapacity_real_T(sp, expl_temp.f44, i0, &c_emlrtRTEI);
        i = XL2->size[0] * XL2->size[1];
        for (i0 = 0; i0 < i; i0++) {
          expl_temp.f44->data[i0] = XL2->data[i0];
        }

        i0 = expl_temp.f43->size[0] * expl_temp.f43->size[1];
        expl_temp.f43->size[0] = 1;
        expl_temp.f43->size[1] = XL1->size[1];
        emxEnsureCapacity_real_T(sp, expl_temp.f43, i0, &c_emlrtRTEI);
        i = XL1->size[0] * XL1->size[1];
        for (i0 = 0; i0 < i; i0++) {
          expl_temp.f43->data[i0] = XL1->data[i0];
        }

        expl_temp.f42 = n;
        expl_temp.f41[0] = b[0];
        expl_temp.f41[1] = b[1];
        expl_temp.f41[2] = b[2];
        memcpy(&expl_temp.f40[0], &C0_Cinv_C0[0], 900U * sizeof(real_T));
        memcpy(&expl_temp.f39[0], &C0_Cinv[0], 900U * sizeof(real_T));
        memcpy(&expl_temp.f38[0], &C[0], 900U * sizeof(real_T));
        i0 = expl_temp.f37->size[0];
        expl_temp.f37->size[0] = x_w->size[0];
        emxEnsureCapacity_real_T(sp, expl_temp.f37, i0, &c_emlrtRTEI);
        i = x_w->size[0];
        for (i0 = 0; i0 < i; i0++) {
          expl_temp.f37->data[i0] = x_w->data[i0];
        }

        i0 = expl_temp.f36->size[0] * expl_temp.f36->size[1];
        expl_temp.f36->size[0] = rho_t_Napp->size[0];
        expl_temp.f36->size[1] = rho_t_Napp->size[1];
        emxEnsureCapacity_real_T(sp, expl_temp.f36, i0, &c_emlrtRTEI);
        i = rho_t_Napp->size[0] * rho_t_Napp->size[1];
        for (i0 = 0; i0 < i; i0++) {
          expl_temp.f36->data[i0] = rho_t_Napp->data[i0];
        }

        i0 = expl_temp.f35->size[0] * expl_temp.f35->size[1];
        expl_temp.f35->size[0] = weights->size[0];
        expl_temp.f35->size[1] = weights->size[1];
        emxEnsureCapacity_real_T(sp, expl_temp.f35, i0, &c_emlrtRTEI);
        i = weights->size[0] * weights->size[1];
        for (i0 = 0; i0 < i; i0++) {
          expl_temp.f35->data[i0] = weights->data[i0];
        }

        expl_temp.f34 = N_app;
        memcpy(&expl_temp.f33[0], &h[0], 25U * sizeof(real_T));
        memcpy(&expl_temp.f32[0], &B_SL[0], 9U * sizeof(creal_T));
        memcpy(&expl_temp.f31[0], &A_SL[0], 9U * sizeof(creal_T));
        expl_temp.f30[0] = P_SL_Im[0];
        expl_temp.f30[1] = P_SL_Im[1];
        expl_temp.f30[2] = P_SL_Im[2];
        expl_temp.f29[0] = P_SL_Re[0];
        expl_temp.f29[1] = P_SL_Re[1];
        expl_temp.f29[2] = P_SL_Re[2];
        expl_temp.f28[0] = P_SL[0];
        expl_temp.f28[1] = P_SL[1];
        expl_temp.f28[2] = P_SL[2];
        memcpy(&expl_temp.f27[0], &C_SL[0], 81U * sizeof(real_T));
        memcpy(&expl_temp.f26[0], &B_SU[0], 9U * sizeof(creal_T));
        memcpy(&expl_temp.f25[0], &A_SU[0], 9U * sizeof(creal_T));
        expl_temp.f24[0] = P_SU_Im[0];
        expl_temp.f24[1] = P_SU_Im[1];
        expl_temp.f24[2] = P_SU_Im[2];
        expl_temp.f23[0] = P_SU_Re[0];
        expl_temp.f23[1] = P_SU_Re[1];
        expl_temp.f23[2] = P_SU_Re[2];
        expl_temp.f22[0] = P_SU[0];
        expl_temp.f22[1] = P_SU[1];
        expl_temp.f22[2] = P_SU[2];
        memcpy(&expl_temp.f21[0], &C_SU[0], 81U * sizeof(real_T));
        memcpy(&expl_temp.f20[0], &B_GB[0], 9U * sizeof(creal_T));
        memcpy(&expl_temp.f19[0], &A_GB[0], 9U * sizeof(creal_T));
        expl_temp.f18[0] = P_GB_Im[0];
        expl_temp.f18[1] = P_GB_Im[1];
        expl_temp.f18[2] = P_GB_Im[2];
        expl_temp.f17[0] = P_GB_Re[0];
        expl_temp.f17[1] = P_GB_Re[1];
        expl_temp.f17[2] = P_GB_Re[2];
        expl_temp.f16[0] = P_GB[0];
        expl_temp.f16[1] = P_GB[1];
        expl_temp.f16[2] = P_GB[2];
        memcpy(&expl_temp.f15[0], &C_GB[0], 81U * sizeof(real_T));
        memcpy(&expl_temp.f14[0], &B_II[0], 9U * sizeof(creal_T));
        memcpy(&expl_temp.f13[0], &A_II[0], 9U * sizeof(creal_T));
        expl_temp.f12[0] = P_II_Im[0];
        expl_temp.f12[1] = P_II_Im[1];
        expl_temp.f12[2] = P_II_Im[2];
        expl_temp.f11[0] = P_II_Re[0];
        expl_temp.f11[1] = P_II_Re[1];
        expl_temp.f11[2] = P_II_Re[2];
        expl_temp.f10[0] = P_II[0];
        expl_temp.f10[1] = P_II[1];
        expl_temp.f10[2] = P_II[2];
        memcpy(&expl_temp.f9[0], &C_II[0], 81U * sizeof(real_T));
        memcpy(&expl_temp.f8[0], &B_I[0], 9U * sizeof(creal_T));
        memcpy(&expl_temp.f7[0], &A_I[0], 9U * sizeof(creal_T));
        expl_temp.f6[0] = P_I_Im[0];
        expl_temp.f6[1] = P_I_Im[1];
        expl_temp.f6[2] = P_I_Im[2];
        expl_temp.f5[0] = P_I_Re[0];
        expl_temp.f5[1] = P_I_Re[1];
        expl_temp.f5[2] = P_I_Re[2];
        expl_temp.f4[0] = P_I[0];
        expl_temp.f4[1] = P_I[1];
        expl_temp.f4[2] = P_I[2];
        memcpy(&expl_temp.f3[0], &C_I[0], 81U * sizeof(real_T));
        expl_temp.f2 = x2;
        expl_temp.f1 = x1;
        st.site = &g_emlrtRSI;
        b_integrale_num_inf(SD, &st, &expl_temp, Ug);
        b_x1[0].re = x1 + P_I[0].re * x2;
        b_x1[0].im = P_I[0].im * x2;
        b_b[0].re = b[0];
        b_x1[1].re = x1 + P_I[1].re * x2;
        b_x1[1].im = P_I[1].im * x2;
        b_b[1].re = b[1];
        b_x1[2].re = x1 + P_I[2].re * x2;
        b_x1[2].im = P_I[2].im * x2;
        b_b[2].re = b[2];
        for (i0 = 0; i0 < 3; i0++) {
          dcv0[i0].re = 0.0;
          dcv0[i0].im = 0.0;
          b_re = 0.0 * B_I[3 * i0].re - -0.15915494309189535 * B_I[3 * i0].im;
          b_im = 0.0 * B_I[3 * i0].im + -0.15915494309189535 * B_I[3 * i0].re;
          re = b_re * b_b[0].re - b_im * 0.0;
          im = b_re * 0.0 + b_im * b_b[0].re;
          b_re = 0.0 * B_I[1 + 3 * i0].re - -0.15915494309189535 * B_I[1 + 3 *
            i0].im;
          b_im = 0.0 * B_I[1 + 3 * i0].im + -0.15915494309189535 * B_I[1 + 3 *
            i0].re;
          re += b_re * b_b[1].re - b_im * 0.0;
          im += b_re * 0.0 + b_im * b_b[1].re;
          b_re = 0.0 * B_I[2 + 3 * i0].re - -0.15915494309189535 * B_I[2 + 3 *
            i0].im;
          b_im = 0.0 * B_I[2 + 3 * i0].im + -0.15915494309189535 * B_I[2 + 3 *
            i0].re;
          re += b_re * b_b[2].re - b_im * 0.0;
          im += b_re * 0.0 + b_im * b_b[2].re;
          dcv0[i0].re = re;
          dcv0[i0].im = im;
        }

        st.site = &g_emlrtRSI;
        sigma_homo(&st, b_x1, S_singularity, dcv0, n_singularity, x2, M_P_I, A_I,
                   M_P_II, A_II, M_P_GB, A_GB, M_P_SU, A_SU, M_P_SL, A_SL, x22,
                   x23, x24, x25, x26, b_epsilon_m);
        for (i0 = 0; i0 < 6; i0++) {
          Ug[i0] += b_epsilon_m[i0];
        }
      } else if (x2 >= x24) {
        /*  In interphase GB   */
        memcpy(&CS[0], &CS_GB[0], 36U * sizeof(real_T));
        i0 = expl_temp.f44->size[0] * expl_temp.f44->size[1];
        expl_temp.f44->size[0] = 1;
        expl_temp.f44->size[1] = XL2->size[1];
        emxEnsureCapacity_real_T(sp, expl_temp.f44, i0, &e_emlrtRTEI);
        i = XL2->size[0] * XL2->size[1];
        for (i0 = 0; i0 < i; i0++) {
          expl_temp.f44->data[i0] = XL2->data[i0];
        }

        i0 = expl_temp.f43->size[0] * expl_temp.f43->size[1];
        expl_temp.f43->size[0] = 1;
        expl_temp.f43->size[1] = XL1->size[1];
        emxEnsureCapacity_real_T(sp, expl_temp.f43, i0, &e_emlrtRTEI);
        i = XL1->size[0] * XL1->size[1];
        for (i0 = 0; i0 < i; i0++) {
          expl_temp.f43->data[i0] = XL1->data[i0];
        }

        expl_temp.f42 = n;
        expl_temp.f41[0] = b[0];
        expl_temp.f41[1] = b[1];
        expl_temp.f41[2] = b[2];
        memcpy(&expl_temp.f40[0], &C0_Cinv_C0[0], 900U * sizeof(real_T));
        memcpy(&expl_temp.f39[0], &C0_Cinv[0], 900U * sizeof(real_T));
        memcpy(&expl_temp.f38[0], &C[0], 900U * sizeof(real_T));
        i0 = expl_temp.f37->size[0];
        expl_temp.f37->size[0] = x_w->size[0];
        emxEnsureCapacity_real_T(sp, expl_temp.f37, i0, &e_emlrtRTEI);
        i = x_w->size[0];
        for (i0 = 0; i0 < i; i0++) {
          expl_temp.f37->data[i0] = x_w->data[i0];
        }

        i0 = expl_temp.f36->size[0] * expl_temp.f36->size[1];
        expl_temp.f36->size[0] = rho_t_Napp->size[0];
        expl_temp.f36->size[1] = rho_t_Napp->size[1];
        emxEnsureCapacity_real_T(sp, expl_temp.f36, i0, &e_emlrtRTEI);
        i = rho_t_Napp->size[0] * rho_t_Napp->size[1];
        for (i0 = 0; i0 < i; i0++) {
          expl_temp.f36->data[i0] = rho_t_Napp->data[i0];
        }

        i0 = expl_temp.f35->size[0] * expl_temp.f35->size[1];
        expl_temp.f35->size[0] = weights->size[0];
        expl_temp.f35->size[1] = weights->size[1];
        emxEnsureCapacity_real_T(sp, expl_temp.f35, i0, &e_emlrtRTEI);
        i = weights->size[0] * weights->size[1];
        for (i0 = 0; i0 < i; i0++) {
          expl_temp.f35->data[i0] = weights->data[i0];
        }

        expl_temp.f34 = N_app;
        memcpy(&expl_temp.f33[0], &h[0], 25U * sizeof(real_T));
        memcpy(&expl_temp.f32[0], &B_SL[0], 9U * sizeof(creal_T));
        memcpy(&expl_temp.f31[0], &A_SL[0], 9U * sizeof(creal_T));
        expl_temp.f30[0] = P_SL_Im[0];
        expl_temp.f30[1] = P_SL_Im[1];
        expl_temp.f30[2] = P_SL_Im[2];
        expl_temp.f29[0] = P_SL_Re[0];
        expl_temp.f29[1] = P_SL_Re[1];
        expl_temp.f29[2] = P_SL_Re[2];
        expl_temp.f28[0] = P_SL[0];
        expl_temp.f28[1] = P_SL[1];
        expl_temp.f28[2] = P_SL[2];
        memcpy(&expl_temp.f27[0], &C_SL[0], 81U * sizeof(real_T));
        memcpy(&expl_temp.f26[0], &B_SU[0], 9U * sizeof(creal_T));
        memcpy(&expl_temp.f25[0], &A_SU[0], 9U * sizeof(creal_T));
        expl_temp.f24[0] = P_SU_Im[0];
        expl_temp.f24[1] = P_SU_Im[1];
        expl_temp.f24[2] = P_SU_Im[2];
        expl_temp.f23[0] = P_SU_Re[0];
        expl_temp.f23[1] = P_SU_Re[1];
        expl_temp.f23[2] = P_SU_Re[2];
        expl_temp.f22[0] = P_SU[0];
        expl_temp.f22[1] = P_SU[1];
        expl_temp.f22[2] = P_SU[2];
        memcpy(&expl_temp.f21[0], &C_SU[0], 81U * sizeof(real_T));
        memcpy(&expl_temp.f20[0], &B_GB[0], 9U * sizeof(creal_T));
        memcpy(&expl_temp.f19[0], &A_GB[0], 9U * sizeof(creal_T));
        expl_temp.f18[0] = P_GB_Im[0];
        expl_temp.f18[1] = P_GB_Im[1];
        expl_temp.f18[2] = P_GB_Im[2];
        expl_temp.f17[0] = P_GB_Re[0];
        expl_temp.f17[1] = P_GB_Re[1];
        expl_temp.f17[2] = P_GB_Re[2];
        expl_temp.f16[0] = P_GB[0];
        expl_temp.f16[1] = P_GB[1];
        expl_temp.f16[2] = P_GB[2];
        memcpy(&expl_temp.f15[0], &C_GB[0], 81U * sizeof(real_T));
        memcpy(&expl_temp.f14[0], &B_II[0], 9U * sizeof(creal_T));
        memcpy(&expl_temp.f13[0], &A_II[0], 9U * sizeof(creal_T));
        expl_temp.f12[0] = P_II_Im[0];
        expl_temp.f12[1] = P_II_Im[1];
        expl_temp.f12[2] = P_II_Im[2];
        expl_temp.f11[0] = P_II_Re[0];
        expl_temp.f11[1] = P_II_Re[1];
        expl_temp.f11[2] = P_II_Re[2];
        expl_temp.f10[0] = P_II[0];
        expl_temp.f10[1] = P_II[1];
        expl_temp.f10[2] = P_II[2];
        memcpy(&expl_temp.f9[0], &C_II[0], 81U * sizeof(real_T));
        memcpy(&expl_temp.f8[0], &B_I[0], 9U * sizeof(creal_T));
        memcpy(&expl_temp.f7[0], &A_I[0], 9U * sizeof(creal_T));
        expl_temp.f6[0] = P_I_Im[0];
        expl_temp.f6[1] = P_I_Im[1];
        expl_temp.f6[2] = P_I_Im[2];
        expl_temp.f5[0] = P_I_Re[0];
        expl_temp.f5[1] = P_I_Re[1];
        expl_temp.f5[2] = P_I_Re[2];
        expl_temp.f4[0] = P_I[0];
        expl_temp.f4[1] = P_I[1];
        expl_temp.f4[2] = P_I[2];
        memcpy(&expl_temp.f3[0], &C_I[0], 81U * sizeof(real_T));
        expl_temp.f2 = x2;
        expl_temp.f1 = x1;
        st.site = &h_emlrtRSI;
        c_integrale_num_inf(SD, &st, &expl_temp, Ug);
        b_x1[0].re = x1 + P_GB[0].re * x2;
        b_x1[0].im = P_GB[0].im * x2;
        b_b[0].re = b[0];
        b_x1[1].re = x1 + P_GB[1].re * x2;
        b_x1[1].im = P_GB[1].im * x2;
        b_b[1].re = b[1];
        b_x1[2].re = x1 + P_GB[2].re * x2;
        b_x1[2].im = P_GB[2].im * x2;
        b_b[2].re = b[2];
        for (i0 = 0; i0 < 3; i0++) {
          dcv0[i0].re = 0.0;
          dcv0[i0].im = 0.0;
          b_re = 0.0 * B_GB[3 * i0].re - -0.15915494309189535 * B_GB[3 * i0].im;
          b_im = 0.0 * B_GB[3 * i0].im + -0.15915494309189535 * B_GB[3 * i0].re;
          re = b_re * b_b[0].re - b_im * 0.0;
          im = b_re * 0.0 + b_im * b_b[0].re;
          b_re = 0.0 * B_GB[1 + 3 * i0].re - -0.15915494309189535 * B_GB[1 + 3 *
            i0].im;
          b_im = 0.0 * B_GB[1 + 3 * i0].im + -0.15915494309189535 * B_GB[1 + 3 *
            i0].re;
          re += b_re * b_b[1].re - b_im * 0.0;
          im += b_re * 0.0 + b_im * b_b[1].re;
          b_re = 0.0 * B_GB[2 + 3 * i0].re - -0.15915494309189535 * B_GB[2 + 3 *
            i0].im;
          b_im = 0.0 * B_GB[2 + 3 * i0].im + -0.15915494309189535 * B_GB[2 + 3 *
            i0].re;
          re += b_re * b_b[2].re - b_im * 0.0;
          im += b_re * 0.0 + b_im * b_b[2].re;
          dcv0[i0].re = re;
          dcv0[i0].im = im;
        }

        st.site = &h_emlrtRSI;
        sigma_homo(&st, b_x1, S_singularity, dcv0, n_singularity, x2, M_P_I, A_I,
                   M_P_II, A_II, M_P_GB, A_GB, M_P_SU, A_SU, M_P_SL, A_SL, x22,
                   x23, x24, x25, x26, b_epsilon_m);
        for (i0 = 0; i0 < 6; i0++) {
          Ug[i0] += b_epsilon_m[i0];
        }
      } else if (x2 >= x25) {
        /*  In crystal II */
        memcpy(&CS[0], &CS_II[0], 36U * sizeof(real_T));
        i0 = expl_temp.f44->size[0] * expl_temp.f44->size[1];
        expl_temp.f44->size[0] = 1;
        expl_temp.f44->size[1] = XL2->size[1];
        emxEnsureCapacity_real_T(sp, expl_temp.f44, i0, &g_emlrtRTEI);
        i = XL2->size[0] * XL2->size[1];
        for (i0 = 0; i0 < i; i0++) {
          expl_temp.f44->data[i0] = XL2->data[i0];
        }

        i0 = expl_temp.f43->size[0] * expl_temp.f43->size[1];
        expl_temp.f43->size[0] = 1;
        expl_temp.f43->size[1] = XL1->size[1];
        emxEnsureCapacity_real_T(sp, expl_temp.f43, i0, &g_emlrtRTEI);
        i = XL1->size[0] * XL1->size[1];
        for (i0 = 0; i0 < i; i0++) {
          expl_temp.f43->data[i0] = XL1->data[i0];
        }

        expl_temp.f42 = n;
        expl_temp.f41[0] = b[0];
        expl_temp.f41[1] = b[1];
        expl_temp.f41[2] = b[2];
        memcpy(&expl_temp.f40[0], &C0_Cinv_C0[0], 900U * sizeof(real_T));
        memcpy(&expl_temp.f39[0], &C0_Cinv[0], 900U * sizeof(real_T));
        memcpy(&expl_temp.f38[0], &C[0], 900U * sizeof(real_T));
        i0 = expl_temp.f37->size[0];
        expl_temp.f37->size[0] = x_w->size[0];
        emxEnsureCapacity_real_T(sp, expl_temp.f37, i0, &g_emlrtRTEI);
        i = x_w->size[0];
        for (i0 = 0; i0 < i; i0++) {
          expl_temp.f37->data[i0] = x_w->data[i0];
        }

        i0 = expl_temp.f36->size[0] * expl_temp.f36->size[1];
        expl_temp.f36->size[0] = rho_t_Napp->size[0];
        expl_temp.f36->size[1] = rho_t_Napp->size[1];
        emxEnsureCapacity_real_T(sp, expl_temp.f36, i0, &g_emlrtRTEI);
        i = rho_t_Napp->size[0] * rho_t_Napp->size[1];
        for (i0 = 0; i0 < i; i0++) {
          expl_temp.f36->data[i0] = rho_t_Napp->data[i0];
        }

        i0 = expl_temp.f35->size[0] * expl_temp.f35->size[1];
        expl_temp.f35->size[0] = weights->size[0];
        expl_temp.f35->size[1] = weights->size[1];
        emxEnsureCapacity_real_T(sp, expl_temp.f35, i0, &g_emlrtRTEI);
        i = weights->size[0] * weights->size[1];
        for (i0 = 0; i0 < i; i0++) {
          expl_temp.f35->data[i0] = weights->data[i0];
        }

        expl_temp.f34 = N_app;
        memcpy(&expl_temp.f33[0], &h[0], 25U * sizeof(real_T));
        memcpy(&expl_temp.f32[0], &B_SL[0], 9U * sizeof(creal_T));
        memcpy(&expl_temp.f31[0], &A_SL[0], 9U * sizeof(creal_T));
        expl_temp.f30[0] = P_SL_Im[0];
        expl_temp.f30[1] = P_SL_Im[1];
        expl_temp.f30[2] = P_SL_Im[2];
        expl_temp.f29[0] = P_SL_Re[0];
        expl_temp.f29[1] = P_SL_Re[1];
        expl_temp.f29[2] = P_SL_Re[2];
        expl_temp.f28[0] = P_SL[0];
        expl_temp.f28[1] = P_SL[1];
        expl_temp.f28[2] = P_SL[2];
        memcpy(&expl_temp.f27[0], &C_SL[0], 81U * sizeof(real_T));
        memcpy(&expl_temp.f26[0], &B_SU[0], 9U * sizeof(creal_T));
        memcpy(&expl_temp.f25[0], &A_SU[0], 9U * sizeof(creal_T));
        expl_temp.f24[0] = P_SU_Im[0];
        expl_temp.f24[1] = P_SU_Im[1];
        expl_temp.f24[2] = P_SU_Im[2];
        expl_temp.f23[0] = P_SU_Re[0];
        expl_temp.f23[1] = P_SU_Re[1];
        expl_temp.f23[2] = P_SU_Re[2];
        expl_temp.f22[0] = P_SU[0];
        expl_temp.f22[1] = P_SU[1];
        expl_temp.f22[2] = P_SU[2];
        memcpy(&expl_temp.f21[0], &C_SU[0], 81U * sizeof(real_T));
        memcpy(&expl_temp.f20[0], &B_GB[0], 9U * sizeof(creal_T));
        memcpy(&expl_temp.f19[0], &A_GB[0], 9U * sizeof(creal_T));
        expl_temp.f18[0] = P_GB_Im[0];
        expl_temp.f18[1] = P_GB_Im[1];
        expl_temp.f18[2] = P_GB_Im[2];
        expl_temp.f17[0] = P_GB_Re[0];
        expl_temp.f17[1] = P_GB_Re[1];
        expl_temp.f17[2] = P_GB_Re[2];
        expl_temp.f16[0] = P_GB[0];
        expl_temp.f16[1] = P_GB[1];
        expl_temp.f16[2] = P_GB[2];
        memcpy(&expl_temp.f15[0], &C_GB[0], 81U * sizeof(real_T));
        memcpy(&expl_temp.f14[0], &B_II[0], 9U * sizeof(creal_T));
        memcpy(&expl_temp.f13[0], &A_II[0], 9U * sizeof(creal_T));
        expl_temp.f12[0] = P_II_Im[0];
        expl_temp.f12[1] = P_II_Im[1];
        expl_temp.f12[2] = P_II_Im[2];
        expl_temp.f11[0] = P_II_Re[0];
        expl_temp.f11[1] = P_II_Re[1];
        expl_temp.f11[2] = P_II_Re[2];
        expl_temp.f10[0] = P_II[0];
        expl_temp.f10[1] = P_II[1];
        expl_temp.f10[2] = P_II[2];
        memcpy(&expl_temp.f9[0], &C_II[0], 81U * sizeof(real_T));
        memcpy(&expl_temp.f8[0], &B_I[0], 9U * sizeof(creal_T));
        memcpy(&expl_temp.f7[0], &A_I[0], 9U * sizeof(creal_T));
        expl_temp.f6[0] = P_I_Im[0];
        expl_temp.f6[1] = P_I_Im[1];
        expl_temp.f6[2] = P_I_Im[2];
        expl_temp.f5[0] = P_I_Re[0];
        expl_temp.f5[1] = P_I_Re[1];
        expl_temp.f5[2] = P_I_Re[2];
        expl_temp.f4[0] = P_I[0];
        expl_temp.f4[1] = P_I[1];
        expl_temp.f4[2] = P_I[2];
        memcpy(&expl_temp.f3[0], &C_I[0], 81U * sizeof(real_T));
        expl_temp.f2 = x2;
        expl_temp.f1 = x1;
        st.site = &i_emlrtRSI;
        d_integrale_num_inf(SD, &st, &expl_temp, Ug);
        b_x1[0].re = x1 + P_II[0].re * x2;
        b_x1[0].im = P_II[0].im * x2;
        b_b[0].re = b[0];
        b_x1[1].re = x1 + P_II[1].re * x2;
        b_x1[1].im = P_II[1].im * x2;
        b_b[1].re = b[1];
        b_x1[2].re = x1 + P_II[2].re * x2;
        b_x1[2].im = P_II[2].im * x2;
        b_b[2].re = b[2];
        for (i0 = 0; i0 < 3; i0++) {
          dcv0[i0].re = 0.0;
          dcv0[i0].im = 0.0;
          b_re = 0.0 * B_II[3 * i0].re - -0.15915494309189535 * B_II[3 * i0].im;
          b_im = 0.0 * B_II[3 * i0].im + -0.15915494309189535 * B_II[3 * i0].re;
          re = b_re * b_b[0].re - b_im * 0.0;
          im = b_re * 0.0 + b_im * b_b[0].re;
          b_re = 0.0 * B_II[1 + 3 * i0].re - -0.15915494309189535 * B_II[1 + 3 *
            i0].im;
          b_im = 0.0 * B_II[1 + 3 * i0].im + -0.15915494309189535 * B_II[1 + 3 *
            i0].re;
          re += b_re * b_b[1].re - b_im * 0.0;
          im += b_re * 0.0 + b_im * b_b[1].re;
          b_re = 0.0 * B_II[2 + 3 * i0].re - -0.15915494309189535 * B_II[2 + 3 *
            i0].im;
          b_im = 0.0 * B_II[2 + 3 * i0].im + -0.15915494309189535 * B_II[2 + 3 *
            i0].re;
          re += b_re * b_b[2].re - b_im * 0.0;
          im += b_re * 0.0 + b_im * b_b[2].re;
          dcv0[i0].re = re;
          dcv0[i0].im = im;
        }

        st.site = &i_emlrtRSI;
        sigma_homo(&st, b_x1, S_singularity, dcv0, n_singularity, x2, M_P_I, A_I,
                   M_P_II, A_II, M_P_GB, A_GB, M_P_SU, A_SU, M_P_SL, A_SL, x22,
                   x23, x24, x25, x26, b_epsilon_m);
        for (i0 = 0; i0 < 6; i0++) {
          Ug[i0] += b_epsilon_m[i0];
        }
      } else {
        if (x2 >= x26) {
          /*  In bottom stiff layer _SL */
          memcpy(&CS[0], &CS_SL[0], 36U * sizeof(real_T));
          i0 = expl_temp.f44->size[0] * expl_temp.f44->size[1];
          expl_temp.f44->size[0] = 1;
          expl_temp.f44->size[1] = XL2->size[1];
          emxEnsureCapacity_real_T(sp, expl_temp.f44, i0, &i_emlrtRTEI);
          i = XL2->size[0] * XL2->size[1];
          for (i0 = 0; i0 < i; i0++) {
            expl_temp.f44->data[i0] = XL2->data[i0];
          }

          i0 = expl_temp.f43->size[0] * expl_temp.f43->size[1];
          expl_temp.f43->size[0] = 1;
          expl_temp.f43->size[1] = XL1->size[1];
          emxEnsureCapacity_real_T(sp, expl_temp.f43, i0, &i_emlrtRTEI);
          i = XL1->size[0] * XL1->size[1];
          for (i0 = 0; i0 < i; i0++) {
            expl_temp.f43->data[i0] = XL1->data[i0];
          }

          expl_temp.f42 = n;
          expl_temp.f41[0] = b[0];
          expl_temp.f41[1] = b[1];
          expl_temp.f41[2] = b[2];
          memcpy(&expl_temp.f40[0], &C0_Cinv_C0[0], 900U * sizeof(real_T));
          memcpy(&expl_temp.f39[0], &C0_Cinv[0], 900U * sizeof(real_T));
          memcpy(&expl_temp.f38[0], &C[0], 900U * sizeof(real_T));
          i0 = expl_temp.f37->size[0];
          expl_temp.f37->size[0] = x_w->size[0];
          emxEnsureCapacity_real_T(sp, expl_temp.f37, i0, &i_emlrtRTEI);
          i = x_w->size[0];
          for (i0 = 0; i0 < i; i0++) {
            expl_temp.f37->data[i0] = x_w->data[i0];
          }

          i0 = expl_temp.f36->size[0] * expl_temp.f36->size[1];
          expl_temp.f36->size[0] = rho_t_Napp->size[0];
          expl_temp.f36->size[1] = rho_t_Napp->size[1];
          emxEnsureCapacity_real_T(sp, expl_temp.f36, i0, &i_emlrtRTEI);
          i = rho_t_Napp->size[0] * rho_t_Napp->size[1];
          for (i0 = 0; i0 < i; i0++) {
            expl_temp.f36->data[i0] = rho_t_Napp->data[i0];
          }

          i0 = expl_temp.f35->size[0] * expl_temp.f35->size[1];
          expl_temp.f35->size[0] = weights->size[0];
          expl_temp.f35->size[1] = weights->size[1];
          emxEnsureCapacity_real_T(sp, expl_temp.f35, i0, &i_emlrtRTEI);
          i = weights->size[0] * weights->size[1];
          for (i0 = 0; i0 < i; i0++) {
            expl_temp.f35->data[i0] = weights->data[i0];
          }

          expl_temp.f34 = N_app;
          memcpy(&expl_temp.f33[0], &h[0], 25U * sizeof(real_T));
          memcpy(&expl_temp.f32[0], &B_SL[0], 9U * sizeof(creal_T));
          memcpy(&expl_temp.f31[0], &A_SL[0], 9U * sizeof(creal_T));
          expl_temp.f30[0] = P_SL_Im[0];
          expl_temp.f30[1] = P_SL_Im[1];
          expl_temp.f30[2] = P_SL_Im[2];
          expl_temp.f29[0] = P_SL_Re[0];
          expl_temp.f29[1] = P_SL_Re[1];
          expl_temp.f29[2] = P_SL_Re[2];
          expl_temp.f28[0] = P_SL[0];
          expl_temp.f28[1] = P_SL[1];
          expl_temp.f28[2] = P_SL[2];
          memcpy(&expl_temp.f27[0], &C_SL[0], 81U * sizeof(real_T));
          memcpy(&expl_temp.f26[0], &B_SU[0], 9U * sizeof(creal_T));
          memcpy(&expl_temp.f25[0], &A_SU[0], 9U * sizeof(creal_T));
          expl_temp.f24[0] = P_SU_Im[0];
          expl_temp.f24[1] = P_SU_Im[1];
          expl_temp.f24[2] = P_SU_Im[2];
          expl_temp.f23[0] = P_SU_Re[0];
          expl_temp.f23[1] = P_SU_Re[1];
          expl_temp.f23[2] = P_SU_Re[2];
          expl_temp.f22[0] = P_SU[0];
          expl_temp.f22[1] = P_SU[1];
          expl_temp.f22[2] = P_SU[2];
          memcpy(&expl_temp.f21[0], &C_SU[0], 81U * sizeof(real_T));
          memcpy(&expl_temp.f20[0], &B_GB[0], 9U * sizeof(creal_T));
          memcpy(&expl_temp.f19[0], &A_GB[0], 9U * sizeof(creal_T));
          expl_temp.f18[0] = P_GB_Im[0];
          expl_temp.f18[1] = P_GB_Im[1];
          expl_temp.f18[2] = P_GB_Im[2];
          expl_temp.f17[0] = P_GB_Re[0];
          expl_temp.f17[1] = P_GB_Re[1];
          expl_temp.f17[2] = P_GB_Re[2];
          expl_temp.f16[0] = P_GB[0];
          expl_temp.f16[1] = P_GB[1];
          expl_temp.f16[2] = P_GB[2];
          memcpy(&expl_temp.f15[0], &C_GB[0], 81U * sizeof(real_T));
          memcpy(&expl_temp.f14[0], &B_II[0], 9U * sizeof(creal_T));
          memcpy(&expl_temp.f13[0], &A_II[0], 9U * sizeof(creal_T));
          expl_temp.f12[0] = P_II_Im[0];
          expl_temp.f12[1] = P_II_Im[1];
          expl_temp.f12[2] = P_II_Im[2];
          expl_temp.f11[0] = P_II_Re[0];
          expl_temp.f11[1] = P_II_Re[1];
          expl_temp.f11[2] = P_II_Re[2];
          expl_temp.f10[0] = P_II[0];
          expl_temp.f10[1] = P_II[1];
          expl_temp.f10[2] = P_II[2];
          memcpy(&expl_temp.f9[0], &C_II[0], 81U * sizeof(real_T));
          memcpy(&expl_temp.f8[0], &B_I[0], 9U * sizeof(creal_T));
          memcpy(&expl_temp.f7[0], &A_I[0], 9U * sizeof(creal_T));
          expl_temp.f6[0] = P_I_Im[0];
          expl_temp.f6[1] = P_I_Im[1];
          expl_temp.f6[2] = P_I_Im[2];
          expl_temp.f5[0] = P_I_Re[0];
          expl_temp.f5[1] = P_I_Re[1];
          expl_temp.f5[2] = P_I_Re[2];
          expl_temp.f4[0] = P_I[0];
          expl_temp.f4[1] = P_I[1];
          expl_temp.f4[2] = P_I[2];
          memcpy(&expl_temp.f3[0], &C_I[0], 81U * sizeof(real_T));
          expl_temp.f2 = x2;
          expl_temp.f1 = x1;
          st.site = &j_emlrtRSI;
          e_integrale_num_inf(SD, &st, &expl_temp, Ug);
          b_x1[0].re = x1 + P_SL[0].re * x2;
          b_x1[0].im = P_SL[0].im * x2;
          b_b[0].re = b[0];
          b_x1[1].re = x1 + P_SL[1].re * x2;
          b_x1[1].im = P_SL[1].im * x2;
          b_b[1].re = b[1];
          b_x1[2].re = x1 + P_SL[2].re * x2;
          b_x1[2].im = P_SL[2].im * x2;
          b_b[2].re = b[2];
          for (i0 = 0; i0 < 3; i0++) {
            dcv0[i0].re = 0.0;
            dcv0[i0].im = 0.0;
            b_re = 0.0 * B_SL[3 * i0].re - -0.15915494309189535 * B_SL[3 * i0].
              im;
            b_im = 0.0 * B_SL[3 * i0].im + -0.15915494309189535 * B_SL[3 * i0].
              re;
            re = b_re * b_b[0].re - b_im * 0.0;
            im = b_re * 0.0 + b_im * b_b[0].re;
            b_re = 0.0 * B_SL[1 + 3 * i0].re - -0.15915494309189535 * B_SL[1 + 3
              * i0].im;
            b_im = 0.0 * B_SL[1 + 3 * i0].im + -0.15915494309189535 * B_SL[1 + 3
              * i0].re;
            re += b_re * b_b[1].re - b_im * 0.0;
            im += b_re * 0.0 + b_im * b_b[1].re;
            b_re = 0.0 * B_SL[2 + 3 * i0].re - -0.15915494309189535 * B_SL[2 + 3
              * i0].im;
            b_im = 0.0 * B_SL[2 + 3 * i0].im + -0.15915494309189535 * B_SL[2 + 3
              * i0].re;
            re += b_re * b_b[2].re - b_im * 0.0;
            im += b_re * 0.0 + b_im * b_b[2].re;
            dcv0[i0].re = re;
            dcv0[i0].im = im;
          }

          st.site = &j_emlrtRSI;
          sigma_homo(&st, b_x1, S_singularity, dcv0, n_singularity, x2, M_P_I,
                     A_I, M_P_II, A_II, M_P_GB, A_GB, M_P_SU, A_SU, M_P_SL, A_SL,
                     x22, x23, x24, x25, x26, b_epsilon_m);
          for (i0 = 0; i0 < 6; i0++) {
            Ug[i0] += b_epsilon_m[i0];
          }
        }
      }
    }
  }

  emxFreeStruct_cell_2(&expl_temp);
  u_g[0] = Ug[0];
  u_g[3] = Ug[3];
  u_g[6] = 0.0;
  u_g[1] = Ug[1];
  u_g[4] = Ug[4];
  u_g[7] = 0.0;
  u_g[2] = Ug[2];
  u_g[5] = Ug[5];
  u_g[8] = 0.0;
  for (i = 0; i < 3; i++) {
    re = u_g[3 * i];
    epsilon_m[i] = 0.5 * (u_g[i] + re);
    rotation_m[i] = 0.5 * (u_g[i] - re);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }

    re = u_g[i + 3];
    im = u_g[1 + 3 * i];
    epsilon_m[i + 3] = 0.5 * (re + im);
    rotation_m[i + 3] = 0.5 * (re - im);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }

    re = u_g[2 + 3 * i];
    epsilon_m[i + 6] = 0.5 * re;
    rotation_m[i + 6] = 0.5 * (0.0 - re);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  b_epsilon_m[0] = epsilon_m[0];
  b_epsilon_m[1] = epsilon_m[4];
  b_epsilon_m[2] = epsilon_m[8];
  b_epsilon_m[3] = 2.0 * epsilon_m[7];
  b_epsilon_m[4] = 2.0 * epsilon_m[2];
  b_epsilon_m[5] = 2.0 * epsilon_m[3];
  for (i0 = 0; i0 < 6; i0++) {
    Ug[i0] = 0.0;
    re = 0.0;
    for (i = 0; i < 6; i++) {
      re += CS[i0 + 6 * i] * b_epsilon_m[i];
    }

    Ug[i0] = re;
  }

  sigma[0] = Ug[0];
  sigma[3] = Ug[5];
  sigma[6] = Ug[4];
  sigma[1] = Ug[5];
  sigma[4] = Ug[1];
  sigma[7] = Ug[3];
  sigma[2] = Ug[4];
  sigma[5] = Ug[3];
  sigma[8] = Ug[2];
  rotation_v[0] = u_g[5] / 2.0;
  rotation_v[1] = (0.0 - u_g[2]) / 2.0;
  rotation_v[2] = (u_g[1] - u_g[3]) / 2.0;
  *rotation_abs = b_norm(rotation_v);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (stress.c) */
