/*
 * File: System_20200611_0233_18.h
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

#ifndef RTW_HEADER_System_20200611_0233_18_h_
#define RTW_HEADER_System_20200611_0233_18_h_
#include <string.h>
#include <stddef.h>
#ifndef System_20200611_0233_18_COMMON_INCLUDES_
# define System_20200611_0233_18_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* System_20200611_0233_18_COMMON_INCLUDES_ */

#include "System_20200611_0233_18_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T Tz_states[2];                 /* '<S1>/T(z)' */
  real_T Rz_states[2];                 /* '<S1>/R(z)' */
  real_T uSz_states[2];                /* '<S1>/1//S(z)' */
} DW_System_20200611_0233_18_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T in1;                          /* '<Root>/in1' */
  real_T in2;                          /* '<Root>/in2' */
} ExtU_System_20200611_0233_18_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T out2;                         /* '<Root>/out2' */
} ExtY_System_20200611_0233_18_T;

/* Real-time Model Data Structure */
struct tag_RTM_System_20200611_0233__T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_System_20200611_0233_18_T System_20200611_0233_18_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_System_20200611_0233_18_T System_20200611_0233_18_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_System_20200611_0233_18_T System_20200611_0233_18_Y;

/* Model entry point functions */
extern void System_20200611_0233_18_initialize(void);
extern void System_20200611_0233_18_step(void);
extern void System_20200611_0233_18_terminate(void);

/* Real-time Model object */
extern RT_MODEL_System_20200611_0233_T *const System_20200611_0233_18_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'System_20200611_0233_18'
 * '<S1>'   : 'System_20200611_0233_18/Subsystem'
 */
#endif                                 /* RTW_HEADER_System_20200611_0233_18_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
