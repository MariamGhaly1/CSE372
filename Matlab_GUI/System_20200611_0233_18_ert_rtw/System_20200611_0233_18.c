/*
 * File: System_20200611_0233_18.c
 *
 * Code generated for Simulink model 'System_20200611_0233_18'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Thu Jun 11 02:33:21 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: NXP->Cortex-M4
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "System_20200611_0233_18.h"
#include "System_20200611_0233_18_private.h"

/* Block states (default storage) */
DW_System_20200611_0233_18_T System_20200611_0233_18_DW;

/* External inputs (root inport signals with default storage) */
ExtU_System_20200611_0233_18_T System_20200611_0233_18_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_System_20200611_0233_18_T System_20200611_0233_18_Y;

/* Real-time model */
RT_MODEL_System_20200611_0233_T System_20200611_0233_18_M_;
RT_MODEL_System_20200611_0233_T *const System_20200611_0233_18_M =
  &System_20200611_0233_18_M_;

/* Model step function */
void System_20200611_0233_18_step(void)
{
  real_T denAccum;
  real_T denAccum_0;
  real_T denAccum_1;

  /* DiscreteFilter: '<S1>/T(z)' incorporates:
   *  Inport: '<Root>/in1'
   */
  denAccum = System_20200611_0233_18_U.in1 / 1.0;

  /* DiscreteFilter: '<S1>/R(z)' incorporates:
   *  Inport: '<Root>/in2'
   */
  denAccum_0 = System_20200611_0233_18_U.in2 / 1.0;

  /* DiscreteFilter: '<S1>/1//S(z)' incorporates:
   *  DiscreteFilter: '<S1>/R(z)'
   *  DiscreteFilter: '<S1>/T(z)'
   *  Sum: '<S1>/Sum1'
   */
  denAccum_1 = (((((3.3333 * denAccum + (-4.5807) *
                    System_20200611_0233_18_DW.Tz_states[0]) + 1.6225 *
                   System_20200611_0233_18_DW.Tz_states[1]) - ((3.0 * denAccum_0
    + (-3.939) * System_20200611_0233_18_DW.Rz_states[0]) + 1.3142 *
    System_20200611_0233_18_DW.Rz_states[1])) - (-0.3742) *
                 System_20200611_0233_18_DW.uSz_states[0]) - (-0.6258) *
                System_20200611_0233_18_DW.uSz_states[1]) / 1.0;

  /* Outport: '<Root>/out2' incorporates:
   *  DiscreteFilter: '<S1>/1//S(z)'
   */
  System_20200611_0233_18_Y.out2 = 1.0 * denAccum_1;

  /* Update for DiscreteFilter: '<S1>/T(z)' */
  System_20200611_0233_18_DW.Tz_states[1] =
    System_20200611_0233_18_DW.Tz_states[0];
  System_20200611_0233_18_DW.Tz_states[0] = denAccum;

  /* Update for DiscreteFilter: '<S1>/R(z)' */
  System_20200611_0233_18_DW.Rz_states[1] =
    System_20200611_0233_18_DW.Rz_states[0];
  System_20200611_0233_18_DW.Rz_states[0] = denAccum_0;

  /* Update for DiscreteFilter: '<S1>/1//S(z)' */
  System_20200611_0233_18_DW.uSz_states[1] =
    System_20200611_0233_18_DW.uSz_states[0];
  System_20200611_0233_18_DW.uSz_states[0] = denAccum_1;
}

/* Model initialize function */
void System_20200611_0233_18_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(System_20200611_0233_18_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&System_20200611_0233_18_DW, 0,
                sizeof(DW_System_20200611_0233_18_T));

  /* external inputs */
  (void)memset((void *)&System_20200611_0233_18_U, 0, sizeof
               (ExtU_System_20200611_0233_18_T));

  /* external outputs */
  System_20200611_0233_18_Y.out2 = 0.0;
}

/* Model terminate function */
void System_20200611_0233_18_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
