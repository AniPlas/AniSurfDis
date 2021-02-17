/*
 * rho.h
 *
 * Code generation for function 'rho'
 *
 */

#ifndef RHO_H
#define RHO_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "rho_distri_types.h"

/* Function Declarations */
extern void rho(const emlrtStack *sp, const emxArray_real_T *x, const real_T
                C_I[81], const creal_T P_I[3], const real_T P_I_Re[3], const
                real_T P_I_Im[3], const creal_T A_I[9], const creal_T B_I[9],
                const real_T C_II[81], const creal_T P_II[3], const real_T
                P_II_Re[3], const real_T P_II_Im[3], const creal_T A_II[9],
                const creal_T B_II[9], const real_T C_GB[81], const creal_T
                P_GB[3], const real_T P_GB_Re[3], const real_T P_GB_Im[3], const
                creal_T A_GB[9], const creal_T B_GB[9], const real_T C_SU[81],
                const creal_T P_SU[3], const real_T P_SU_Re[3], const real_T
                P_SU_Im[3], const creal_T A_SU[9], const creal_T B_SU[9], const
                real_T C_SL[81], const creal_T P_SL[3], const real_T P_SL_Re[3],
                const real_T P_SL_Im[3], const creal_T A_SL[9], const creal_T
                B_SL[9], const real_T h[25], real_T XL1, real_T XL2, real_T
                N_app, const emxArray_real_T *weights, const emxArray_real_T
                *rho_t_Napp, const emxArray_real_T *x_w, const real_T C[900],
                const real_T C0_Cinv[900], const real_T C0_Cinv_C0[900], const
                real_T b[3], emxArray_real_T *rho_function);

#endif

/* End of code generation (rho.h) */
