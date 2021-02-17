/*
 * Im_Xi.h
 *
 * Code generation for function 'Im_Xi'
 *
 */

#ifndef IM_XI_H
#define IM_XI_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "Rho_density_types.h"

/* Function Declarations */
extern real_T Im_Xi(const emlrtStack *sp, real_T t, real_T alpha, real_T i,
                    const real_T C[81], const creal_T P[3], const creal_T A[9],
                    const creal_T B[9]);

#endif

/* End of code generation (Im_Xi.h) */
