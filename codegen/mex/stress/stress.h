/*
 * stress.h
 *
 * Code generation for function 'stress'
 *
 */

#ifndef STRESS_H
#define STRESS_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "stress_types.h"

/* Function Declarations */
extern void stress(stressStackData *SD, const emlrtStack *sp, const
                   emxArray_cell_wrap_0 *S_singularity, real_T n_singularity,
                   const emxArray_real_T *rho_t_Napp, const real_T b[3], real_T
                   n, const emxArray_real_T *XL1, const emxArray_real_T *XL2,
                   real_T x1, real_T x2, const real_T C_I[81], const real_T
                   CS_I[36], const creal_T P_I[3], const real_T P_I_Re[3], const
                   real_T P_I_Im[3], const creal_T M_P_I[9], const creal_T A_I[9],
                   const creal_T B_I[9], const real_T C_II[81], const real_T
                   CS_II[36], const creal_T P_II[3], const real_T P_II_Re[3],
                   const real_T P_II_Im[3], const creal_T M_P_II[9], const
                   creal_T A_II[9], const creal_T B_II[9], const real_T C_GB[81],
                   const real_T CS_GB[36], const creal_T P_GB[3], const real_T
                   P_GB_Re[3], const real_T P_GB_Im[3], const creal_T M_P_GB[9],
                   const creal_T A_GB[9], const creal_T B_GB[9], const real_T
                   C_SU[81], const real_T CS_SU[36], const creal_T P_SU[3],
                   const real_T P_SU_Re[3], const real_T P_SU_Im[3], const
                   creal_T M_P_SU[9], const creal_T A_SU[9], const creal_T B_SU
                   [9], const real_T C_SL[81], const real_T CS_SL[36], const
                   creal_T P_SL[3], const real_T P_SL_Re[3], const real_T
                   P_SL_Im[3], const creal_T M_P_SL[9], const creal_T A_SL[9],
                   const creal_T B_SL[9], const real_T h[25], real_T x22, real_T
                   x23, real_T x24, real_T x25, real_T x26, real_T N_app, const
                   emxArray_real_T *weights, const emxArray_real_T *x_w, const
                   real_T C[900], const real_T C0_Cinv[900], const real_T
                   C0_Cinv_C0[900], real_T sigma[9], real_T epsilon_m[9], real_T
                   rotation_m[9], real_T rotation_v[3], real_T *rotation_abs);

#endif

/* End of code generation (stress.h) */
