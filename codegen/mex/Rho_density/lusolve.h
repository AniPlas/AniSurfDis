/*
 * lusolve.h
 *
 * Code generation for function 'lusolve'
 *
 */

#ifndef LUSOLVE_H
#define LUSOLVE_H

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
extern void lusolve(const emlrtStack *sp, const emxArray_real_T *A,
                    emxArray_real_T *B);

#endif

/* End of code generation (lusolve.h) */
