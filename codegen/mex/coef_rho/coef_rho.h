/*
 * coef_rho.h
 *
 * Code generation for function 'coef_rho'
 *
 */

#ifndef COEF_RHO_H
#define COEF_RHO_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "coef_rho_types.h"

/* Function Declarations */
extern void coef_rho(const emlrtStack *sp, const emxArray_real_T *w, const
                     real_T C_I[81], const creal_T P_I[3], const real_T P_I_Re[3],
                     const real_T P_I_Im[3], const creal_T A_I[9], const creal_T
                     B_I[9], const real_T C_II[81], const creal_T P_II[3], const
                     real_T P_II_Re[3], const real_T P_II_Im[3], const creal_T
                     A_II[9], const creal_T B_II[9], const real_T C_GB[81],
                     const creal_T P_GB[3], const real_T P_GB_Re[3], const
                     real_T P_GB_Im[3], const creal_T A_GB[9], const creal_T
                     B_GB[9], const real_T C_SU[81], const creal_T P_SU[3],
                     const real_T P_SU_Re[3], const real_T P_SU_Im[3], const
                     creal_T A_SU[9], const creal_T B_SU[9], const real_T C_SL
                     [81], const creal_T P_SL[3], const real_T P_SL_Re[3], const
                     real_T P_SL_Im[3], const creal_T A_SL[9], const creal_T
                     B_SL[9], const real_T h[25], real_T N_app, const
                     emxArray_real_T *x_w, emxArray_real_T *C_rho,
                     emxArray_real_T *C0_Cinv_C0_rho, emxArray_real_T
                     *C0_Cinv_rho, emxArray_real_T *CH_H_rho, emxArray_real_T
                     *CI_I_rho, emxArray_real_T *CH_H0_H_rho, emxArray_real_T
                     *CI_H0_I_rho, emxArray_real_T *weights, real_T C[900],
                     real_T C0_Cinv[900], real_T C0_Cinv_C0[900]);

#endif

/* End of code generation (coef_rho.h) */
