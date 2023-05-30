/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_TTA_CombineModel.c
 *
 * Code generated for Simulink model 'HANcoder_E407_TTA_CombineModel'.
 *
 * Model version                  : 17.15
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Tue May 30 19:08:35 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "HANcoder_E407_TTA_CombineModel.h"
#include "rtwtypes.h"
#include "HANcoder_E407_TTA_CombineModel_types.h"
#include "HANcoder_E407_TTA_CombineModel_private.h"
#include <math.h>
#include "zero_crossing_types.h"

/* map ByteSwap function */
#define ByteSwap(x)                    (ByteSwap_x((uint8_t *) &x, sizeof(x)))

void PwmoutIRQ_PWMOUT_MODULE_TIM14(void);
void TimeoutEventIRQ_TIMEOUT_TIM4_PIN_PD12(void);
void TimeoutOverflowIRQ_TIMEOUT_MODULE_TIM4(void);

/* Exported block signals */
real_T Gamma2;                         /* '<S80>/Sum2' */
real_T Gamma1;                         /* '<S80>/Sum1' */
real_T steering;                       /* '<S78>/Gain2' */
real_T position;                       /* '<S78>/Gain1' */
real_T control;                        /* '<S78>/Sum' */
uint32_T SI_FreeHeap;                  /* '<S149>/Level-2 M-file S-Function' */
uint32_T SI_FreeStack;                 /* '<S150>/Level-2 M-file S-Function' */
uint16_T mospeed;                      /* '<S78>/Add' */
uint16_T testCounter;                  /* '<S26>/Data Store Read1' */
uint16_T local_ticks_interrupt;        /* '<S10>/Switch' */
uint8_T SI_CPUload;                    /* '<S148>/Level-2 M-file S-Function' */
uint8_T dataArx;                       /* '<S46>/In1' */
uint8_T setSlotTime;                   /* '<S10>/Data Store Read3' */
uint8_T slotSelected;                  /* '<S18>/Switch' */
boolean_T cw;                          /* '<S78>/Cast1' */
boolean_T ccw;                         /* '<S78>/NOT' */
boolean_T boolCan;                     /* '<S11>/AND' */
boolean_T canActive;                   /* '<S10>/Clock_State' */

/* Exported block parameters */
real_T ClockOn = 0.0;                  /* Variable: ClockOn
                                        * Referenced by: '<S13>/Constant'
                                        */
real_T desiredAngle = 0.0;             /* Variable: desiredAngle
                                        * Referenced by: '<S79>/Constant2'
                                        */
real_T intVal = 0.0;                   /* Variable: intVal
                                        * Referenced by: '<S112>/Integral Gain'
                                        */
real_T matrixRows = 10.0;              /* Variable: matrixRows
                                        * Referenced by: '<S18>/Constant1'
                                        */
real_T propVal = 0.0;                  /* Variable: propVal
                                        * Referenced by: '<S120>/Proportional Gain'
                                        */
uint32_T MMBS1_ID = 12U;               /* Variable: MMBS1_ID
                                        * Referenced by: '<S11>/Constant12'
                                        */
uint32_T SSTM1_ID = 13U;               /* Variable: SSTM1_ID
                                        * Referenced by: '<S11>/Constant14'
                                        */
uint32_T SYNC1_ID = 11U;               /* Variable: SYNC1_ID
                                        * Referenced by:
                                        *   '<S11>/Constant10'
                                        *   '<S73>/Constant1'
                                        */
uint32_T TRCK1_ID1 = 14U;              /* Variable: TRCK1_ID1
                                        * Referenced by: '<S11>/Constant3'
                                        */
uint32_T TRCK1_ID2 = 26U;              /* Variable: TRCK1_ID2
                                        * Referenced by: '<S11>/Constant5'
                                        */
uint32_T TRCK1_ID3 = 37U;              /* Variable: TRCK1_ID3
                                        * Referenced by: '<S11>/Constant26'
                                        */
uint32_T TRLS1_ID4 = 48U;              /* Variable: TRLS1_ID4
                                        * Referenced by: '<S11>/Constant8'
                                        */
uint32_T TRLS1_ID5 = 59U;              /* Variable: TRLS1_ID5
                                        * Referenced by: '<S11>/Constant18'
                                        */
uint8_T nodeRole = 1U;                 /* Variable: nodeRole
                                        * Referenced by: '<S14>/Constant1'
                                        */
uint8_T slotTime = 50U;                /* Variable: slotTime
                                        * Referenced by: '<S72>/Constant3'
                                        */

/* Block signals (default storage) */
BlockIO rtB;

/* Block states (default storage) */
D_Work rtDWork;

/* Previous zero-crossings (trigger) states */
PrevZCSigStates rtPrevZCSigState;

/* Real-time model */
static RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;

/* Forward declaration for local functions */
static void SystemCore_setup(dsp_simulink_MovingAverage *obj);
static tCanDataTypes canRxData_0_rtu_In1;
static tCanDataTypes canTxData;
static tCanDataTypes canRxData_0_SYNC1_ID;
static tCanDataTypes canRxData_0_TRCK1_ID3;
static tCanDataTypes canRxData_0_TRLS1_ID4;
static tCanDataTypes canRxData_0_TRLS1_ID5;
static tCanDataTypes canRxData_0_SYNC1_ID;

/*
 * Swaps the values of two bytes.
 * a, b pointers to data values that need swapping
 */
static void swap(unsigned char *a, unsigned char *b)
{
  register char i = *a;
  *a = *b;
  *b = i;
}                                      /*** end of swap ***/

/*
 * Swaps all bytes in b. Typically used to fix endianes.
 * b pointer to data with bytes to swap
 * n number of bytes to swap
 */
void ByteSwap_x(uint8_t *b, size_t n)
{
  int i = 0;
  int j = n-1;
  while (i<j) {
    swap(&b[i], &b[j]);
    i++, j--;
  }
}

void TimeoutEventIRQ_TIMEOUT_TIM4_PIN_PD12(void)
{
  /* Output and update for function-call system: '<S1>/Local Time generation' */
  {
    /* local block i/o variables */
    uint16_T rtb_Level2MfileSFunction;
    boolean_T rtb_Equal;

    /* SignalConversion generated from: '<S10>/Clock_State' */
    canActive = rtB.OR;

    /* Switch: '<S10>/Switch' */
    if (canActive) {
      /* Switch: '<S10>/Switch' incorporates:
       *  Constant: '<S10>/Constant2'
       *  DataStoreRead: '<S10>/Data Store Read'
       *  Sum: '<S10>/Sum1'
       */
      local_ticks_interrupt = (uint16_T)((uint32_T)rtDWork.Local_Ticks +
        ((uint16_T)1U));
    } else {
      /* Switch: '<S10>/Switch' incorporates:
       *  DataStoreRead: '<S10>/Data Store Read1'
       */
      local_ticks_interrupt = rtDWork.Local_Ticks;
    }

    /* End of Switch: '<S10>/Switch' */

    /* DataStoreWrite: '<S10>/Data Store Write' */
    rtDWork.Local_Ticks = local_ticks_interrupt;

    /* DataStoreRead: '<S10>/Data Store Read3' */
    setSlotTime = rtDWork.SlotTime;

    /* RelationalOperator: '<S10>/Equal' incorporates:
     *  DataStoreRead: '<S10>/Data Store Read2'
     *  Gain: '<S10>/Gain'
     */
    rtb_Equal = (rtDWork.Local_Ticks >= (int32_T)(((uint32_T)((uint8_T)160U) *
      setSlotTime) >> 4));

    /* Outputs for Triggered SubSystem: '<S10>/Enabled Subsystem' incorporates:
     *  TriggerPort: '<S18>/Trigger'
     */
    if (rtb_Equal && (rtPrevZCSigState.EnabledSubsystem_Trig_ZCE != POS_ZCSIG))
    {
      /* Switch: '<S18>/Switch' incorporates:
       *  Constant: '<S18>/Constant1'
       *  DataStoreRead: '<S18>/Data Store Read1'
       *  DataTypeConversion: '<S18>/Cast'
       *  RelationalOperator: '<S18>/Equal'
       */
      if (rtDWork.slot < (uint8_T)matrixRows) {
        /* Switch: '<S18>/Switch' incorporates:
         *  Constant: '<S18>/Constant'
         *  DataStoreRead: '<S18>/Data Store Read'
         *  Sum: '<S18>/Plus'
         */
        slotSelected = (uint8_T)((uint32_T)rtDWork.slot + ((uint8_T)1U));
      } else {
        /* Switch: '<S18>/Switch' incorporates:
         *  Constant: '<S18>/Constant2'
         */
        slotSelected = (uint8_T)1.0;
      }

      /* End of Switch: '<S18>/Switch' */

      /* DataStoreWrite: '<S18>/Data Store Write' */
      rtDWork.slot = slotSelected;

      /* DataStoreWrite: '<S18>/Data Store Write1' incorporates:
       *  Constant: '<S18>/Constant3'
       */
      rtDWork.Local_Ticks = ((uint16_T)0U);
    }

    rtPrevZCSigState.EnabledSubsystem_Trig_ZCE = rtb_Equal;

    /* End of Outputs for SubSystem: '<S10>/Enabled Subsystem' */
    /* M-S-Function: '<S19>/Level-2 M-file S-Function' */
    /* read 16-bit free running counter timestamp of the last output compare event */
    rtb_Level2MfileSFunction = TimeoutGetLastEventCounter(TIMEOUT_TIM4_PIN_PD12);

    /* Sum: '<S10>/Sum' incorporates:
     *  Constant: '<S10>/Constant'
     */
    rtB.Sum = (uint16_T)((uint32_T)rtb_Level2MfileSFunction + ((uint16_T)1000U));

    /* Update for M-S-Function: '<S20>/Level-2 M-file S-Function' incorporates:
     *  Constant: '<S10>/Constant1'
     */
    /* schedule the next output compare event */
    TimeoutScheduleCompareEvent(TIMEOUT_TIM4_PIN_PD12, rtB.Sum, (tTimeoutAction)
      ((uint8_T)3U));
  }
}

void PwmoutIRQ_PWMOUT_MODULE_TIM14(void)
{
}

void TimeoutOverflowIRQ_TIMEOUT_MODULE_TIM4(void)
{
}

/*
 * Output and update for enable system:
 *    '<S39>/Enabled Subsystem'
 *    '<S42>/Enabled Subsystem'
 *    '<S48>/Enabled Subsystem'
 *    '<S52>/Enabled Subsystem'
 *    '<S55>/Enabled Subsystem'
 *    '<S58>/Enabled Subsystem'
 *    '<S67>/Enabled Subsystem'
 *    '<S74>/Enabled Subsystem'
 */
void EnabledSubsystem(int8_T rtu_Enable, uint8_T rtu_In1, uint8_T rtu_In2,
                      uint8_T rtu_In3, uint8_T rtu_In4, uint8_T rtu_In5, uint8_T
                      rtu_In6, uint8_T rtu_In7, uint8_T rtu_In8,
                      rtB_EnabledSubsystem *localB)
{
  uint8_T rtb_In3_f;
  uint8_T rtb_In4_c;
  uint8_T rtb_In5_a;
  uint8_T rtb_In6_j;
  uint8_T rtb_In7_h;
  uint8_T rtb_In8_m;

  /* Outputs for Enabled SubSystem: '<S39>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S40>/Enable'
   */
  if (rtu_Enable > 0) {
    /* SignalConversion generated from: '<S40>/In1' */
    localB->In1 = rtu_In1;

    /* SignalConversion generated from: '<S40>/In2' */
    localB->In2 = rtu_In2;

    /* SignalConversion generated from: '<S40>/In3' */
    rtb_In3_f = rtu_In3;

    /* SignalConversion generated from: '<S40>/In4' */
    rtb_In4_c = rtu_In4;

    /* SignalConversion generated from: '<S40>/In5' */
    rtb_In5_a = rtu_In5;

    /* SignalConversion generated from: '<S40>/In6' */
    rtb_In6_j = rtu_In6;

    /* SignalConversion generated from: '<S40>/In7' */
    rtb_In7_h = rtu_In7;

    /* SignalConversion generated from: '<S40>/In8' */
    rtb_In8_m = rtu_In8;
  }

  /* End of Outputs for SubSystem: '<S39>/Enabled Subsystem' */
}

/*
 * Disable for enable system:
 *    '<S11>/MMBS1_RX'
 *    '<S11>/SSTM1_RX'
 *    '<S11>/TRCK1_ID2_RX'
 *    '<S11>/TRCK1_RX'
 */
void MMBS1_RX_Disable(rtDW_MMBS1_RX *localDW)
{
  localDW->MMBS1_RX_MODE = false;
}

/*
 * Start for enable system:
 *    '<S11>/MMBS1_RX'
 *    '<S11>/SSTM1_RX'
 *    '<S11>/TRCK1_ID2_RX'
 *    '<S11>/TRCK1_RX'
 */
void MMBS1_RX_Start(uint32_T rtu_In1)
{
  /* Start for M-S-Function: '<S39>/S-Function' */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, rtu_In1);
}

/*
 * Outputs for enable system:
 *    '<S11>/MMBS1_RX'
 *    '<S11>/SSTM1_RX'
 *    '<S11>/TRCK1_ID2_RX'
 *    '<S11>/TRCK1_RX'
 */
void MMBS1_RX(boolean_T rtu_Enable, uint32_T rtu_In1, rtB_MMBS1_RX *localB,
              rtDW_MMBS1_RX *localDW)
{
  /* local block i/o variables */
  uint8_T rtb_SFunction_o2_n;
  uint8_T rtb_SFunction_o3_b;
  uint8_T rtb_SFunction_o4_l;
  uint8_T rtb_SFunction_o5_e;
  uint8_T rtb_SFunction_o6_k;
  uint8_T rtb_SFunction_o7_dj;
  uint8_T rtb_SFunction_o8_n1;
  uint8_T rtb_SFunction_o9_o;
  int8_T rtb_SFunction_o1_g;

  /* Outputs for Enabled SubSystem: '<S11>/MMBS1_RX' incorporates:
   *  EnablePort: '<S21>/Enable'
   */
  if (rtu_Enable) {
    localDW->MMBS1_RX_MODE = true;

    /* M-S-Function: '<S39>/S-Function' */

    /* read the message data and store the new parameter */
    rtb_SFunction_o1_g = CanIoGetMessage(0, rtu_In1, NULL,
      &canRxData_0_rtu_In1.uint8_T_info[0], NULL);

    /* process the message data */
    if (rtb_SFunction_o1_g > 0) {
      /* read the data */
      rtb_SFunction_o2_n = canRxData_0_rtu_In1.uint8_T_info[0];
      rtb_SFunction_o3_b = canRxData_0_rtu_In1.uint8_T_info[1];
      rtb_SFunction_o4_l = canRxData_0_rtu_In1.uint8_T_info[2];
      rtb_SFunction_o5_e = canRxData_0_rtu_In1.uint8_T_info[3];
      rtb_SFunction_o6_k = canRxData_0_rtu_In1.uint8_T_info[4];
      rtb_SFunction_o7_dj = canRxData_0_rtu_In1.uint8_T_info[5];
      rtb_SFunction_o8_n1 = canRxData_0_rtu_In1.uint8_T_info[6];
      rtb_SFunction_o9_o = canRxData_0_rtu_In1.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S39>/Enabled Subsystem' */
    EnabledSubsystem(rtb_SFunction_o1_g, rtb_SFunction_o2_n, rtb_SFunction_o3_b,
                     rtb_SFunction_o4_l, rtb_SFunction_o5_e, rtb_SFunction_o6_k,
                     rtb_SFunction_o7_dj, rtb_SFunction_o8_n1,
                     rtb_SFunction_o9_o, &localB->EnabledSubsystem_k);

    /* End of Outputs for SubSystem: '<S39>/Enabled Subsystem' */
  } else if (localDW->MMBS1_RX_MODE) {
    MMBS1_RX_Disable(localDW);
  }

  /* End of Outputs for SubSystem: '<S11>/MMBS1_RX' */
}

/*
 * Output and update for trigger system:
 *    '<S11>/MMBS1_TX'
 *    '<S11>/SSTM1_TX'
 *    '<S11>/TRCK1_ID2_TX'
 *    '<S11>/TRCK1_ID3_TX'
 *    '<S11>/TRCK1_TX'
 *    '<S11>/TRLS_ID5_TX'
 */
void MMBS1_TX(boolean_T rtu_Trigger, uint32_T rtu_In1, rtZCE_MMBS1_TX *localZCE)
{
  /* Outputs for Triggered SubSystem: '<S11>/MMBS1_TX' incorporates:
   *  TriggerPort: '<S22>/Trigger'
   */
  if (rtu_Trigger && (localZCE->MMBS1_TX_Trig_ZCE != POS_ZCSIG)) {
    /* Update for M-S-Function: '<S41>/S-Function' */
    {
      /* prepare the data */
      canTxData.uint8_T_info[0] = 0U;

      /* send the data */
      CanTransmit(0, rtu_In1, 1, &canTxData.uint8_T_info[0]);
    }
  }

  localZCE->MMBS1_TX_Trig_ZCE = rtu_Trigger;

  /* End of Outputs for SubSystem: '<S11>/MMBS1_TX' */
}

/*
 * Output and update for atomic system:
 *    '<S57>/Bit Shift'
 *    '<S66>/Bit Shift'
 */
void BitShift(uint16_T rtu_u, rtB_BitShift *localB)
{
  /* MATLAB Function: '<S59>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S60>:1' */
  /* '<S60>:1:6' */
  localB->y = (uint16_T)(rtu_u << 8);
}

static void SystemCore_setup(dsp_simulink_MovingAverage *obj)
{
  obj->isSetupComplete = false;
  obj->isInitialized = 1;
  obj->NumChannels = 1;
  obj->FrameLength = 1;
  obj->_pobj0.isInitialized = 0;
  obj->_pobj0.isInitialized = 0;
  obj->pStatistic = &obj->_pobj0;
  obj->isSetupComplete = true;
  obj->TunablePropsChanged = false;
}

/* Model step function */
void HANcoder_E407_TTA_CombineModel_step(void)
{
  /* local block i/o variables */
  int32_T rtb_Level2MfileSFunction_k;
  uint16_T rtb_Level2MfileSFunction_g;
  uint16_T rtb_Level2MfileSFunction_d;
  uint16_T rtb_Switch1;
  uint8_T rtb_SFunction_o2;
  uint8_T rtb_SFunction_o3;
  uint8_T rtb_SFunction_o4;
  uint8_T rtb_SFunction_o5;
  uint8_T rtb_SFunction_o6;
  uint8_T rtb_SFunction_o7;
  uint8_T rtb_SFunction_o8;
  uint8_T rtb_SFunction_o9;
  uint8_T rtb_SFunction_o2_l;
  uint8_T rtb_SFunction_o3_m;
  uint8_T rtb_SFunction_o4_b;
  uint8_T rtb_SFunction_o5_o;
  uint8_T rtb_SFunction_o6_i;
  uint8_T rtb_SFunction_o7_f;
  uint8_T rtb_SFunction_o8_p;
  uint8_T rtb_SFunction_o9_l;
  uint8_T rtb_SFunction_o2_e;
  uint8_T rtb_SFunction_o3_p;
  uint8_T rtb_SFunction_o4_c;
  uint8_T rtb_SFunction_o5_c;
  uint8_T rtb_SFunction_o6_e;
  uint8_T rtb_SFunction_o7_l;
  uint8_T rtb_SFunction_o8_f;
  uint8_T rtb_SFunction_o9_h;
  uint8_T rtb_SFunction_o2_j;
  uint8_T rtb_SFunction_o3_a;
  uint8_T rtb_SFunction_o4_i;
  uint8_T rtb_SFunction_o5_k;
  uint8_T rtb_SFunction_o6_c;
  uint8_T rtb_SFunction_o7_d;
  uint8_T rtb_SFunction_o8_h;
  uint8_T rtb_SFunction_o9_b;
  uint8_T rtb_SFunction_o2_i;
  uint8_T rtb_SFunction_o3_g;
  uint8_T rtb_SFunction_o4_j;
  uint8_T rtb_SFunction_o5_f;
  uint8_T rtb_SFunction_o6_g;
  uint8_T rtb_SFunction_o7_k;
  uint8_T rtb_SFunction_o8_n;
  uint8_T rtb_SFunction_o9_b1;
  int8_T rtb_SFunction_o1;
  int8_T rtb_SFunction_o1_n;
  int8_T rtb_SFunction_o1_k;
  int8_T rtb_SFunction_o1_k1;
  int8_T rtb_SFunction_o1_h;
  boolean_T rtb_Level2MfileSFunction_j;
  g_dsp_internal_SlidingWindowAve *obj;
  real_T csumrev[3];
  real_T rtb_Integrator;
  real_T rtb_Sum;
  real_T rtb_Uk1;
  real_T rtb_Uk1_tmp;
  real_T z;
  uint32_T Slot5execution_ELAPS_T[2];
  uint32_T rowIdx;
  uint16_T rtb_Cast_b;
  uint16_T rtb_Cast_le;
  uint8_T rtb_Multiply;
  uint8_T rtb_Multiply1;
  boolean_T AND3;
  boolean_T AND5;
  boolean_T AND7;
  boolean_T AND9;
  boolean_T rtb_AND;
  boolean_T rtb_AND1;
  boolean_T rtb_AND10;
  boolean_T rtb_AND13;
  boolean_T rtb_AND14;
  boolean_T rtb_AND15;
  boolean_T rtb_AND2;
  boolean_T rtb_AND4;
  boolean_T rtb_AND6;
  boolean_T rtb_AND8;
  boolean_T rtb_Equal14;
  boolean_T rtb_Equal16;
  boolean_T rtb_Equal17;

  /* Outputs for Enabled SubSystem: '<S1>/Initialize Clock Schedule' incorporates:
   *  EnablePort: '<S9>/Enable'
   */
  /* Logic: '<S1>/NOT' incorporates:
   *  DataStoreRead: '<S1>/If 1 -> Clock initialized '
   */
  if (rtDWork.init_clock == 0.0) {
    rtDWork.InitializeClockSchedule_MODE = true;

    /* DataStoreWrite: '<S9>/Data Store Write' incorporates:
     *  Constant: '<S9>/Constant2'
     */
    rtDWork.init_clock = 1.0;

    /* Update for M-S-Function: '<S17>/Level-2 M-file S-Function' incorporates:
     *  Constant: '<S9>/Constant'
     *  Constant: '<S9>/Constant1'
     */
    /* schedule the next output compare event */
    TimeoutScheduleCompareEvent(TIMEOUT_TIM4_PIN_PD12, ((uint16_T)1U),
      (tTimeoutAction)((uint8_T)3U));
  } else if (rtDWork.InitializeClockSchedule_MODE) {
    rtDWork.InitializeClockSchedule_MODE = false;
  }

  /* End of Logic: '<S1>/NOT' */
  /* End of Outputs for SubSystem: '<S1>/Initialize Clock Schedule' */

  /* Logic: '<S13>/AND' incorporates:
   *  Constant: '<S13>/Constant'
   *  Constant: '<S13>/Constant4'
   *  DataStoreRead: '<S13>/Data Store Read1'
   *  RelationalOperator: '<S13>/Less Than'
   */
  rtb_AND = ((ClockOn != 0.0) && (rtDWork.nodeRole_i < ((uint8_T)4U)));

  /* Outputs for Enabled SubSystem: '<S13>/Subsystem1' incorporates:
   *  EnablePort: '<S73>/Enable'
   */
  /* RelationalOperator: '<S13>/GreaterThan' incorporates:
   *  Constant: '<S13>/Constant2'
   *  DataStoreRead: '<S13>/Data Store Read1'
   *  DataTypeConversion: '<S73>/Cast'
   */
  if (rtDWork.nodeRole_i > ((uint8_T)3U)) {
    rtDWork.Subsystem1_MODE = true;

    /* M-S-Function: '<S74>/S-Function' incorporates:
     *  Constant: '<S73>/Constant1'
     */

    /* read the message data and store the new parameter */
    rtb_SFunction_o1 = CanIoGetMessage(0, SYNC1_ID, NULL,
      &canRxData_0_SYNC1_ID.uint8_T_info[0], NULL);

    /* process the message data */
    if (rtb_SFunction_o1 > 0) {
      /* read the data */
      rtb_SFunction_o2 = canRxData_0_SYNC1_ID.uint8_T_info[0];
      rtb_SFunction_o3 = canRxData_0_SYNC1_ID.uint8_T_info[1];
    }

    /* Outputs for Enabled SubSystem: '<S74>/Enabled Subsystem' */
    EnabledSubsystem(rtb_SFunction_o1, rtb_SFunction_o2, rtb_SFunction_o3,
                     rtb_SFunction_o4, rtb_SFunction_o5, rtb_SFunction_o6,
                     rtb_SFunction_o7, rtb_SFunction_o8, rtb_SFunction_o9,
                     &rtB.EnabledSubsystem_ef);

    /* End of Outputs for SubSystem: '<S74>/Enabled Subsystem' */

    /* DataStoreWrite: '<S73>/Data Store Write' */
    rtDWork.SlotTime = rtB.EnabledSubsystem_ef.In1;

    /* Outputs for Triggered SubSystem: '<S73>/Triggered Subsystem' incorporates:
     *  TriggerPort: '<S76>/Trigger'
     */
    if ((rtb_SFunction_o1 != 0) && (rtPrevZCSigState.TriggeredSubsystem_Trig_ZCE
         != POS_ZCSIG)) {
      /* DataStoreWrite: '<S76>/Data Store Write' incorporates:
       *  Constant: '<S76>/Constant'
       */
      rtDWork.Local_Ticks = ((uint16_T)0U);
    }

    rtPrevZCSigState.TriggeredSubsystem_Trig_ZCE = (ZCSigState)(rtb_SFunction_o1
      != 0);

    /* End of Outputs for SubSystem: '<S73>/Triggered Subsystem' */

    /* M-S-Function: '<S8>/Level-2 M-file S-Function' incorporates:
     *  DataTypeConversion: '<S73>/Cast'
     *  Memory: '<S75>/Memory'
     */
    rtb_Level2MfileSFunction_j = rtDWork.Memory_PreviousInput;

    /* CombinatorialLogic: '<S75>/Logic' incorporates:
     *  DataTypeConversion: '<S73>/Cast'
     */
    rowIdx = ((((uint32_T)(rtb_SFunction_o1 != 0) << 1) + false) << 1) +
      rtb_Level2MfileSFunction_j;
    rtB.Logic[0U] = rtConstP.Logic_table[rowIdx];
    rtB.Logic[1U] = rtConstP.Logic_table[rowIdx + 8U];

    /* Update for Memory: '<S75>/Memory' */
    rtDWork.Memory_PreviousInput = rtB.Logic[0];
  } else if (rtDWork.Subsystem1_MODE) {
    rtDWork.Subsystem1_MODE = false;
  }

  /* End of RelationalOperator: '<S13>/GreaterThan' */
  /* End of Outputs for SubSystem: '<S13>/Subsystem1' */

  /* Logic: '<S13>/OR' */
  rtB.OR = (rtb_AND || rtB.Logic[0]);

  /* End of Outputs for S-Function (sfcn_timeout_event_irq): '<S4>/S-Function' */

  /* Outputs for Enabled SubSystem: '<S1>/Message selector' incorporates:
   *  EnablePort: '<S11>/Enable'
   *
   * Block description for '<S1>/Message selector':
   *  Truck 1
   */
  if (canActive) {
    rtDWork.Messageselector_MODE = true;

    /* M-S-Function: '<S8>/Level-2 M-file S-Function' incorporates:
     *  Constant: '<S11>/Constant1'
     *  RelationalOperator: '<S11>/Equal1'
     */
    rtb_Level2MfileSFunction_j = (slotSelected == 2.0);

    /* RelationalOperator: '<S11>/Equal11' incorporates:
     *  Constant: '<S11>/Constant13'
     *  DataStoreRead: '<S1>/Data Store Read'
     */
    rtb_Equal14 = (rtDWork.nodeRole_i == 1.0);

    /* Logic: '<S11>/AND3' incorporates:
     *  Logic: '<S11>/NOT1'
     */
    AND3 = (rtb_Level2MfileSFunction_j && (!rtb_Equal14));

    /* Outputs for Enabled SubSystem: '<S11>/MMBS1_RX' */
    /* Constant: '<S11>/Constant12' */
    MMBS1_RX(AND3, MMBS1_ID, &rtB.MMBS1_RX_j, &rtDWork.MMBS1_RX_j);

    /* End of Outputs for SubSystem: '<S11>/MMBS1_RX' */

    /* Logic: '<S11>/AND2' */
    rtb_AND2 = (rtb_Level2MfileSFunction_j && rtb_Equal14);

    /* Outputs for Triggered SubSystem: '<S11>/MMBS1_TX' */
    /* Constant: '<S11>/Constant12' */
    MMBS1_TX(rtb_AND2, MMBS1_ID, &rtPrevZCSigState.MMBS1_TX_a);

    /* End of Outputs for SubSystem: '<S11>/MMBS1_TX' */

    /* RelationalOperator: '<S11>/Equal2' incorporates:
     *  Constant: '<S11>/Constant2'
     */
    rtb_Equal14 = (slotSelected == 3.0);

    /* M-S-Function: '<S8>/Level-2 M-file S-Function' incorporates:
     *  Constant: '<S11>/Constant15'
     *  DataStoreRead: '<S1>/Data Store Read'
     *  RelationalOperator: '<S11>/Equal12'
     */
    rtb_Level2MfileSFunction_j = (rtDWork.nodeRole_i == 1.0);

    /* Logic: '<S11>/AND5' incorporates:
     *  Logic: '<S11>/NOT2'
     */
    AND5 = (rtb_Equal14 && (!rtb_Level2MfileSFunction_j));

    /* Outputs for Enabled SubSystem: '<S11>/SSTM1_RX' */
    /* Constant: '<S11>/Constant14' */
    MMBS1_RX(AND5, SSTM1_ID, &rtB.SSTM1_RX, &rtDWork.SSTM1_RX);

    /* End of Outputs for SubSystem: '<S11>/SSTM1_RX' */

    /* Logic: '<S11>/AND4' */
    rtb_AND4 = (rtb_Equal14 && rtb_Level2MfileSFunction_j);

    /* Outputs for Triggered SubSystem: '<S11>/SSTM1_TX' */
    /* Constant: '<S11>/Constant14' */
    MMBS1_TX(rtb_AND4, SSTM1_ID, &rtPrevZCSigState.SSTM1_TX);

    /* End of Outputs for SubSystem: '<S11>/SSTM1_TX' */

    /* RelationalOperator: '<S11>/Equal' incorporates:
     *  Constant: '<S11>/Constant'
     */
    rtb_Equal14 = (slotSelected == ((uint8_T)1U));

    /* M-S-Function: '<S8>/Level-2 M-file S-Function' incorporates:
     *  Constant: '<S11>/Constant11'
     *  DataStoreRead: '<S1>/Data Store Read'
     *  RelationalOperator: '<S11>/Equal10'
     */
    rtb_Level2MfileSFunction_j = (rtDWork.nodeRole_i == ((uint8_T)1U));

    /* Logic: '<S11>/AND1' incorporates:
     *  Logic: '<S11>/NOT'
     */
    rtb_AND1 = (rtb_Equal14 && (!rtb_Level2MfileSFunction_j));

    /* Outputs for Enabled SubSystem: '<S11>/SYNC1_RX' incorporates:
     *  EnablePort: '<S25>/Enable'
     */
    if (rtb_AND1) {
      rtDWork.SYNC1_RX_MODE = true;

      /* M-S-Function: '<S45>/S-Function' incorporates:
       *  Constant: '<S11>/Constant10'
       */

      /* read the message data and store the new parameter */
      rtb_SFunction_o1_h = CanIoGetMessage(0, SYNC1_ID, NULL,
        &canRxData_0_SYNC1_ID.uint8_T_info[0], NULL);

      /* process the message data */
      if (rtb_SFunction_o1_h > 0) {
        /* read the data */
        rtb_SFunction_o2_i = canRxData_0_SYNC1_ID.uint8_T_info[0];
        rtb_SFunction_o3_g = canRxData_0_SYNC1_ID.uint8_T_info[1];
        rtb_SFunction_o4_j = canRxData_0_SYNC1_ID.uint8_T_info[2];
        rtb_SFunction_o5_f = canRxData_0_SYNC1_ID.uint8_T_info[3];
        rtb_SFunction_o6_g = canRxData_0_SYNC1_ID.uint8_T_info[4];
        rtb_SFunction_o7_k = canRxData_0_SYNC1_ID.uint8_T_info[5];
        rtb_SFunction_o8_n = canRxData_0_SYNC1_ID.uint8_T_info[6];
        rtb_SFunction_o9_b1 = canRxData_0_SYNC1_ID.uint8_T_info[7];
      }

      /* Outputs for Enabled SubSystem: '<S45>/Enabled Subsystem' incorporates:
       *  EnablePort: '<S46>/Enable'
       */
      if (rtb_SFunction_o1_h > 0) {
        /* SignalConversion generated from: '<S46>/In1' */
        dataArx = rtb_SFunction_o2_i;
      }

      /* End of Outputs for SubSystem: '<S45>/Enabled Subsystem' */
    } else if (rtDWork.SYNC1_RX_MODE) {
      rtDWork.SYNC1_RX_MODE = false;
    }

    /* End of Outputs for SubSystem: '<S11>/SYNC1_RX' */

    /* Logic: '<S11>/AND' */
    boolCan = (rtb_Equal14 && rtb_Level2MfileSFunction_j);

    /* Outputs for Triggered SubSystem: '<S11>/SYNC1_TX' incorporates:
     *  TriggerPort: '<S26>/Trigger'
     */
    if (boolCan && (rtPrevZCSigState.SYNC1_TX_Trig_ZCE != POS_ZCSIG)) {
      /* DataStoreRead: '<S26>/Data Store Read1' */
      testCounter = rtDWork.testCount;

      /* Sum: '<S26>/Add' incorporates:
       *  Constant: '<S26>/Constant7'
       *  DataStoreWrite: '<S26>/Data Store Write'
       */
      rtDWork.testCount = (uint16_T)((uint32_T)testCounter + ((uint16_T)1U));

      /* DataStoreRead: '<S26>/Data Store Read' */
      rtB.DataStoreRead = rtDWork.SlotTime;

      /* Update for M-S-Function: '<S47>/S-Function' incorporates:
       *  Constant: '<S11>/Constant10'
       *  Constant: '<S26>/Constant'
       *  Constant: '<S26>/Constant1'
       *  Constant: '<S26>/Constant2'
       *  Constant: '<S26>/Constant3'
       *  Constant: '<S26>/Constant4'
       *  Constant: '<S26>/Constant5'
       *  Constant: '<S26>/Constant6'
       */
      {
        /* prepare the data */
        canTxData.uint8_T_info[0] = rtB.DataStoreRead;
        canTxData.uint8_T_info[1] = ((uint8_T)1U);
        canTxData.uint8_T_info[2] = ((uint8_T)0U);
        canTxData.uint8_T_info[3] = ((uint8_T)0U);
        canTxData.uint8_T_info[4] = ((uint8_T)0U);
        canTxData.uint8_T_info[5] = ((uint8_T)0U);
        canTxData.uint8_T_info[6] = ((uint8_T)0U);
        canTxData.uint8_T_info[7] = ((uint8_T)1U);

        /* send the data */
        CanTransmit(0, SYNC1_ID, 8, &canTxData.uint8_T_info[0]);
      }
    }

    rtPrevZCSigState.SYNC1_TX_Trig_ZCE = boolCan;

    /* End of Outputs for SubSystem: '<S11>/SYNC1_TX' */

    /* RelationalOperator: '<S11>/Equal6' incorporates:
     *  Constant: '<S11>/Constant7'
     */
    rtb_Equal14 = (slotSelected == 6.0);

    /* M-S-Function: '<S8>/Level-2 M-file S-Function' incorporates:
     *  Constant: '<S11>/Constant6'
     *  DataStoreRead: '<S1>/Data Store Read'
     *  RelationalOperator: '<S11>/Equal5'
     */
    rtb_Level2MfileSFunction_j = (rtDWork.nodeRole_i == 2.0);

    /* Logic: '<S11>/AND9' incorporates:
     *  Logic: '<S11>/NOT4'
     */
    AND9 = (rtb_Equal14 && (!rtb_Level2MfileSFunction_j));

    /* Outputs for Enabled SubSystem: '<S11>/TRCK1_ID2_RX' */
    /* Constant: '<S11>/Constant5' */
    MMBS1_RX(AND9, TRCK1_ID2, &rtB.TRCK1_ID2_RX, &rtDWork.TRCK1_ID2_RX);

    /* End of Outputs for SubSystem: '<S11>/TRCK1_ID2_RX' */

    /* Logic: '<S11>/AND8' */
    rtb_AND8 = (rtb_Equal14 && rtb_Level2MfileSFunction_j);

    /* Outputs for Triggered SubSystem: '<S11>/TRCK1_ID2_TX' */
    /* Constant: '<S11>/Constant5' */
    MMBS1_TX(rtb_AND8, TRCK1_ID2, &rtPrevZCSigState.TRCK1_ID2_TX);

    /* End of Outputs for SubSystem: '<S11>/TRCK1_ID2_TX' */

    /* RelationalOperator: '<S11>/Equal14' incorporates:
     *  Constant: '<S11>/Constant20'
     */
    rtb_Equal14 = (slotSelected == 7.0);

    /* M-S-Function: '<S8>/Level-2 M-file S-Function' incorporates:
     *  Constant: '<S11>/Constant19'
     *  DataStoreRead: '<S1>/Data Store Read'
     *  RelationalOperator: '<S11>/Equal7'
     */
    rtb_Level2MfileSFunction_j = (rtDWork.nodeRole_i == 3.0);

    /* Logic: '<S11>/AND10' */
    rtb_AND10 = (rtb_Equal14 && rtb_Level2MfileSFunction_j);

    /* Outputs for Triggered SubSystem: '<S11>/TRCK1_ID3_TX' */
    /* Constant: '<S11>/Constant26' */
    MMBS1_TX(rtb_AND10, TRCK1_ID3, &rtPrevZCSigState.TRCK1_ID3_TX);

    /* End of Outputs for SubSystem: '<S11>/TRCK1_ID3_TX' */

    /* RelationalOperator: '<S11>/Equal13' incorporates:
     *  Constant: '<S11>/Constant17'
     */
    rtb_Equal16 = (slotSelected == 4.0);

    /* RelationalOperator: '<S11>/Equal3' incorporates:
     *  Constant: '<S11>/Constant16'
     *  DataStoreRead: '<S1>/Data Store Read'
     */
    rtb_Equal17 = (rtDWork.nodeRole_i == 1.0);

    /* Logic: '<S11>/AND7' incorporates:
     *  Logic: '<S11>/NOT3'
     */
    AND7 = (rtb_Equal16 && (!rtb_Equal17));

    /* Outputs for Enabled SubSystem: '<S11>/TRCK1_RX' */
    /* Constant: '<S11>/Constant3' */
    MMBS1_RX(AND7, TRCK1_ID1, &rtB.TRCK1_RX, &rtDWork.TRCK1_RX);

    /* End of Outputs for SubSystem: '<S11>/TRCK1_RX' */

    /* Logic: '<S11>/AND6' */
    rtb_AND6 = (rtb_Equal16 && rtb_Equal17);

    /* Outputs for Triggered SubSystem: '<S11>/TRCK1_TX' */
    /* Constant: '<S11>/Constant3' */
    MMBS1_TX(rtb_AND6, TRCK1_ID1, &rtPrevZCSigState.TRCK1_TX);

    /* End of Outputs for SubSystem: '<S11>/TRCK1_TX' */

    /* Outputs for Enabled SubSystem: '<S11>/TRCK_ID3_RX' incorporates:
     *  EnablePort: '<S34>/Enable'
     */
    /* Logic: '<S11>/AND11' incorporates:
     *  Logic: '<S11>/NOT5'
     */
    if (rtb_Equal14 && (!rtb_Level2MfileSFunction_j)) {
      rtDWork.TRCK_ID3_RX_MODE = true;

      /* M-S-Function: '<S55>/S-Function' incorporates:
       *  Constant: '<S11>/Constant26'
       */

      /* read the message data and store the new parameter */
      rtb_SFunction_o1_k1 = CanIoGetMessage(0, TRCK1_ID3, NULL,
        &canRxData_0_TRCK1_ID3.uint8_T_info[0], NULL);

      /* process the message data */
      if (rtb_SFunction_o1_k1 > 0) {
        /* read the data */
        rtb_SFunction_o2_j = canRxData_0_TRCK1_ID3.uint8_T_info[0];
        rtb_SFunction_o3_a = canRxData_0_TRCK1_ID3.uint8_T_info[1];
        rtb_SFunction_o4_i = canRxData_0_TRCK1_ID3.uint8_T_info[2];
        rtb_SFunction_o5_k = canRxData_0_TRCK1_ID3.uint8_T_info[3];
        rtb_SFunction_o6_c = canRxData_0_TRCK1_ID3.uint8_T_info[4];
        rtb_SFunction_o7_d = canRxData_0_TRCK1_ID3.uint8_T_info[5];
        rtb_SFunction_o8_h = canRxData_0_TRCK1_ID3.uint8_T_info[6];
        rtb_SFunction_o9_b = canRxData_0_TRCK1_ID3.uint8_T_info[7];
      }

      /* Outputs for Enabled SubSystem: '<S55>/Enabled Subsystem' */
      EnabledSubsystem(rtb_SFunction_o1_k1, rtb_SFunction_o2_j,
                       rtb_SFunction_o3_a, rtb_SFunction_o4_i,
                       rtb_SFunction_o5_k, rtb_SFunction_o6_c,
                       rtb_SFunction_o7_d, rtb_SFunction_o8_h,
                       rtb_SFunction_o9_b, &rtB.EnabledSubsystem_b);

      /* End of Outputs for SubSystem: '<S55>/Enabled Subsystem' */
    } else if (rtDWork.TRCK_ID3_RX_MODE) {
      rtDWork.TRCK_ID3_RX_MODE = false;
    }

    /* End of Logic: '<S11>/AND11' */
    /* End of Outputs for SubSystem: '<S11>/TRCK_ID3_RX' */

    /* RelationalOperator: '<S11>/Equal15' incorporates:
     *  Constant: '<S11>/Constant22'
     */
    rtb_Equal17 = (slotSelected == 8.0);

    /* RelationalOperator: '<S11>/Equal8' incorporates:
     *  Constant: '<S11>/Constant21'
     *  DataStoreRead: '<S1>/Data Store Read'
     */
    rtb_Equal16 = (rtDWork.nodeRole_i == 4.0);

    /* Logic: '<S11>/AND13' incorporates:
     *  Logic: '<S11>/NOT6'
     */
    rtb_AND13 = (rtb_Equal17 && (!rtb_Equal16));

    /* Outputs for Enabled SubSystem: '<S11>/TRLS_ID4_RX' incorporates:
     *  EnablePort: '<S35>/Enable'
     */
    if (rtb_AND13) {
      rtDWork.TRLS_ID4_RX_MODE = true;

      /* M-S-Function: '<S58>/S-Function' incorporates:
       *  Constant: '<S11>/Constant8'
       */

      /* read the message data and store the new parameter */
      rtb_SFunction_o1_k = CanIoGetMessage(0, TRLS1_ID4, NULL,
        &canRxData_0_TRLS1_ID4.uint8_T_info[0], NULL);

      /* process the message data */
      if (rtb_SFunction_o1_k > 0) {
        /* read the data */
        rtb_SFunction_o2_e = canRxData_0_TRLS1_ID4.uint8_T_info[0];
        rtb_SFunction_o3_p = canRxData_0_TRLS1_ID4.uint8_T_info[1];
        rtb_SFunction_o4_c = canRxData_0_TRLS1_ID4.uint8_T_info[2];
        rtb_SFunction_o5_c = canRxData_0_TRLS1_ID4.uint8_T_info[3];
        rtb_SFunction_o6_e = canRxData_0_TRLS1_ID4.uint8_T_info[4];
        rtb_SFunction_o7_l = canRxData_0_TRLS1_ID4.uint8_T_info[5];
        rtb_SFunction_o8_f = canRxData_0_TRLS1_ID4.uint8_T_info[6];
        rtb_SFunction_o9_h = canRxData_0_TRLS1_ID4.uint8_T_info[7];
      }

      /* Outputs for Enabled SubSystem: '<S58>/Enabled Subsystem' */
      EnabledSubsystem(rtb_SFunction_o1_k, rtb_SFunction_o2_e,
                       rtb_SFunction_o3_p, rtb_SFunction_o4_c,
                       rtb_SFunction_o5_c, rtb_SFunction_o6_e,
                       rtb_SFunction_o7_l, rtb_SFunction_o8_f,
                       rtb_SFunction_o9_h, &rtB.EnabledSubsystem_g);

      /* End of Outputs for SubSystem: '<S58>/Enabled Subsystem' */

      /* DataTypeConversion: '<S57>/Cast' */
      rtb_Cast_le = rtB.EnabledSubsystem_g.In1;

      /* Outputs for Atomic SubSystem: '<S57>/Bit Shift' */
      BitShift(rtb_Cast_le, &rtB.BitShift_j);

      /* End of Outputs for SubSystem: '<S57>/Bit Shift' */

      /* Switch: '<S79>/Switch1' incorporates:
       *  DataTypeConversion: '<S57>/Cast1'
       */
      rtb_Switch1 = rtB.EnabledSubsystem_g.In2;

      /* Sum: '<S57>/Add' incorporates:
       *  DataStoreWrite: '<S35>/Data Store Write'
       */
      rtDWork.trailerOneAngle = (uint16_T)((uint32_T)rtB.BitShift_j.y +
        rtb_Switch1);
    } else if (rtDWork.TRLS_ID4_RX_MODE) {
      rtDWork.TRLS_ID4_RX_MODE = false;
    }

    /* End of Outputs for SubSystem: '<S11>/TRLS_ID4_RX' */

    /* Logic: '<S11>/AND12' */
    rtb_Equal14 = (rtb_Equal17 && rtb_Equal16);

    /* Outputs for Triggered SubSystem: '<S11>/TRLS_ID4_TX' incorporates:
     *  TriggerPort: '<S36>/Trigger'
     */
    if (rtb_Equal14 && (rtPrevZCSigState.TRLS_ID4_TX_Trig_ZCE != POS_ZCSIG)) {
      /* Outputs for Atomic SubSystem: '<S63>/Bit Shift' */
      /* DataTypeConversion: '<S63>/Cast' incorporates:
       *  DataStoreRead: '<S36>/Data Store Read'
       *  MATLAB Function: '<S64>/bit_shift'
       */
      /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S65>:1' */
      /* '<S65>:1:8' */
      rtB.Cast = (uint8_T)((uint32_T)rtDWork.trailerOneAngle >> 8);

      /* End of Outputs for SubSystem: '<S63>/Bit Shift' */

      /* DataTypeConversion: '<S63>/Cast1' incorporates:
       *  DataStoreRead: '<S36>/Data Store Read'
       */
      rtB.Cast1 = (uint8_T)rtDWork.trailerOneAngle;

      /* Update for M-S-Function: '<S62>/S-Function' incorporates:
       *  Constant: '<S11>/Constant8'
       */
      {
        /* prepare the data */
        canTxData.uint8_T_info[0] = rtB.Cast;
        canTxData.uint8_T_info[1] = rtB.Cast1;

        /* send the data */
        CanTransmit(0, TRLS1_ID4, 2, &canTxData.uint8_T_info[0]);
      }
    }

    rtPrevZCSigState.TRLS_ID4_TX_Trig_ZCE = rtb_Equal14;

    /* End of Outputs for SubSystem: '<S11>/TRLS_ID4_TX' */

    /* RelationalOperator: '<S11>/Equal17' incorporates:
     *  Constant: '<S11>/Constant25'
     */
    rtb_Equal17 = (slotSelected == 9.0);

    /* RelationalOperator: '<S11>/Equal16' incorporates:
     *  Constant: '<S11>/Constant24'
     *  DataStoreRead: '<S1>/Data Store Read'
     */
    rtb_Equal16 = (rtDWork.nodeRole_i == 5.0);

    /* Logic: '<S11>/AND15' incorporates:
     *  Logic: '<S11>/NOT7'
     */
    rtb_AND15 = (rtb_Equal17 && (!rtb_Equal16));

    /* Outputs for Enabled SubSystem: '<S11>/TRLS_ID5_RX' incorporates:
     *  EnablePort: '<S37>/Enable'
     */
    if (rtb_AND15) {
      rtDWork.TRLS_ID5_RX_MODE = true;

      /* M-S-Function: '<S67>/S-Function' incorporates:
       *  Constant: '<S11>/Constant18'
       */

      /* read the message data and store the new parameter */
      rtb_SFunction_o1_n = CanIoGetMessage(0, TRLS1_ID5, NULL,
        &canRxData_0_TRLS1_ID5.uint8_T_info[0], NULL);

      /* process the message data */
      if (rtb_SFunction_o1_n > 0) {
        /* read the data */
        rtb_SFunction_o2_l = canRxData_0_TRLS1_ID5.uint8_T_info[0];
        rtb_SFunction_o3_m = canRxData_0_TRLS1_ID5.uint8_T_info[1];
        rtb_SFunction_o4_b = canRxData_0_TRLS1_ID5.uint8_T_info[2];
        rtb_SFunction_o5_o = canRxData_0_TRLS1_ID5.uint8_T_info[3];
        rtb_SFunction_o6_i = canRxData_0_TRLS1_ID5.uint8_T_info[4];
        rtb_SFunction_o7_f = canRxData_0_TRLS1_ID5.uint8_T_info[5];
        rtb_SFunction_o8_p = canRxData_0_TRLS1_ID5.uint8_T_info[6];
        rtb_SFunction_o9_l = canRxData_0_TRLS1_ID5.uint8_T_info[7];
      }

      /* Outputs for Enabled SubSystem: '<S67>/Enabled Subsystem' */
      EnabledSubsystem(rtb_SFunction_o1_n, rtb_SFunction_o2_l,
                       rtb_SFunction_o3_m, rtb_SFunction_o4_b,
                       rtb_SFunction_o5_o, rtb_SFunction_o6_i,
                       rtb_SFunction_o7_f, rtb_SFunction_o8_p,
                       rtb_SFunction_o9_l, &rtB.EnabledSubsystem_e);

      /* End of Outputs for SubSystem: '<S67>/Enabled Subsystem' */

      /* DataTypeConversion: '<S66>/Cast' */
      rtb_Cast_b = rtB.EnabledSubsystem_e.In1;

      /* Outputs for Atomic SubSystem: '<S66>/Bit Shift' */
      BitShift(rtb_Cast_b, &rtB.BitShift_c);

      /* End of Outputs for SubSystem: '<S66>/Bit Shift' */

      /* Switch: '<S79>/Switch1' incorporates:
       *  DataTypeConversion: '<S66>/Cast1'
       */
      rtb_Switch1 = rtB.EnabledSubsystem_e.In2;

      /* Sum: '<S66>/Add' incorporates:
       *  DataStoreWrite: '<S37>/Data Store Write1'
       */
      rtDWork.trailerTwoAngle = (uint16_T)((uint32_T)rtB.BitShift_c.y +
        rtb_Switch1);
    } else if (rtDWork.TRLS_ID5_RX_MODE) {
      rtDWork.TRLS_ID5_RX_MODE = false;
    }

    /* End of Outputs for SubSystem: '<S11>/TRLS_ID5_RX' */

    /* Logic: '<S11>/AND14' */
    rtb_AND14 = (rtb_Equal17 && rtb_Equal16);

    /* Outputs for Triggered SubSystem: '<S11>/TRLS_ID5_TX' */
    /* Constant: '<S11>/Constant18' */
    MMBS1_TX(rtb_AND14, TRLS1_ID5, &rtPrevZCSigState.TRLS_ID5_TX);

    /* End of Outputs for SubSystem: '<S11>/TRLS_ID5_TX' */
  } else if (rtDWork.Messageselector_MODE) {
    /* Disable for Enabled SubSystem: '<S11>/MMBS1_RX' */
    if (rtDWork.MMBS1_RX_j.MMBS1_RX_MODE) {
      /* Constant: '<S11>/Constant12' */
      MMBS1_RX_Disable(&rtDWork.MMBS1_RX_j);
    }

    /* End of Disable for SubSystem: '<S11>/MMBS1_RX' */

    /* Disable for Triggered SubSystem: '<S11>/MMBS1_TX' */
    /* Constant: '<S11>/Constant12' */
    /* Disable for Enabled SubSystem: '<S11>/SSTM1_RX' */
    if (rtDWork.SSTM1_RX.MMBS1_RX_MODE) {
      /* Constant: '<S11>/Constant14' */
      MMBS1_RX_Disable(&rtDWork.SSTM1_RX);
    }

    /* End of Disable for SubSystem: '<S11>/SSTM1_RX' */

    /* Disable for Triggered SubSystem: '<S11>/SSTM1_TX' */
    /* Constant: '<S11>/Constant14' */
    /* Disable for Enabled SubSystem: '<S11>/SYNC1_RX' */
    if (rtDWork.SYNC1_RX_MODE) {
      rtDWork.SYNC1_RX_MODE = false;
    }

    /* End of Disable for SubSystem: '<S11>/SYNC1_RX' */
    /* Disable for Enabled SubSystem: '<S11>/TRCK1_ID2_RX' */
    if (rtDWork.TRCK1_ID2_RX.MMBS1_RX_MODE) {
      /* Constant: '<S11>/Constant5' */
      MMBS1_RX_Disable(&rtDWork.TRCK1_ID2_RX);
    }

    /* End of Disable for SubSystem: '<S11>/TRCK1_ID2_RX' */

    /* Disable for Triggered SubSystem: '<S11>/TRCK1_ID2_TX' */
    /* Constant: '<S11>/Constant5' */
    /* Disable for Triggered SubSystem: '<S11>/TRCK1_ID3_TX' */
    /* Constant: '<S11>/Constant26' */
    /* Disable for Enabled SubSystem: '<S11>/TRCK1_RX' */
    if (rtDWork.TRCK1_RX.MMBS1_RX_MODE) {
      /* Constant: '<S11>/Constant3' */
      MMBS1_RX_Disable(&rtDWork.TRCK1_RX);
    }

    /* End of Disable for SubSystem: '<S11>/TRCK1_RX' */

    /* Disable for Triggered SubSystem: '<S11>/TRCK1_TX' */
    /* Constant: '<S11>/Constant3' */
    /* Disable for Enabled SubSystem: '<S11>/TRCK_ID3_RX' */
    if (rtDWork.TRCK_ID3_RX_MODE) {
      rtDWork.TRCK_ID3_RX_MODE = false;
    }

    /* End of Disable for SubSystem: '<S11>/TRCK_ID3_RX' */

    /* Disable for Enabled SubSystem: '<S11>/TRLS_ID4_RX' */
    if (rtDWork.TRLS_ID4_RX_MODE) {
      rtDWork.TRLS_ID4_RX_MODE = false;
    }

    /* End of Disable for SubSystem: '<S11>/TRLS_ID4_RX' */
    /* Disable for Enabled SubSystem: '<S11>/TRLS_ID5_RX' */
    if (rtDWork.TRLS_ID5_RX_MODE) {
      rtDWork.TRLS_ID5_RX_MODE = false;
    }

    /* End of Disable for SubSystem: '<S11>/TRLS_ID5_RX' */

    /* Disable for Triggered SubSystem: '<S11>/TRLS_ID5_TX' */
    /* Constant: '<S11>/Constant18' */
    rtDWork.Messageselector_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S1>/Message selector' */

  /* RelationalOperator: '<S1>/Equal' incorporates:
   *  Constant: '<S1>/Constant1'
   */
  rtb_Equal14 = (slotSelected == ((uint8_T)5U));

  /* Outputs for Triggered SubSystem: '<S1>/Slot 5 execution' incorporates:
   *  TriggerPort: '<S14>/Trigger'
   */
  if (rtb_Equal14 && (rtPrevZCSigState.Slot5execution_Trig_ZCE != POS_ZCSIG)) {
    rowIdx = rtM->Timing.clockTick0;
    Slot5execution_ELAPS_T[0] = rowIdx - rtDWork.Slot5execution_PREV_T[0];
    rtDWork.Slot5execution_PREV_T[0] = rowIdx;
    rtDWork.Slot5execution_PREV_T[1] = rtM->Timing.clockTickH0;

    /* Product: '<S140>/Product' incorporates:
     *  Constant: '<S79>/Constant2'
     *  Constant: '<S80>/TrailUnitWheelbase'
     *  Gain: '<S79>/Gain'
     *  Trigonometry: '<S140>/tan '
     */
    rtb_Sum = tan(0.015001500150015003 * desiredAngle) * rtConstB.Abs / 4.0;

    /* M-S-Function: '<S136>/Level-2 M-file S-Function' */
    /* read from analog input for filtered inputs*/
    rtb_Level2MfileSFunction_g = AninGet(ANIN_PORTF_PIN7,0);

    /* RelationalOperator: '<S79>/Equal' incorporates:
     *  Constant: '<S14>/Constant1'
     *  Constant: '<S79>/Constant'
     */
    rtb_Equal16 = (nodeRole == ((uint8_T)4U));

    /* Switch: '<S79>/Switch' */
    if (rtb_Equal16) {
      /* Switch: '<S79>/Switch1' */
      rtb_Switch1 = rtb_Level2MfileSFunction_g;
    } else {
      /* Switch: '<S79>/Switch1' incorporates:
       *  DataStoreRead: '<S14>/Data Store Read'
       */
      rtb_Switch1 = rtDWork.trailerOneAngle;
    }

    /* End of Switch: '<S79>/Switch' */

    /* Gain: '<S79>/Gain2' */
    rtb_Integrator = (real_T)((uint16_T)62921U) * 2.384185791015625E-7 * (real_T)
      rtb_Switch1;

    /* Sum: '<S80>/Sum2' incorporates:
     *  Constant: '<S14>/Constant2'
     */
    Gamma2 = rtb_Integrator - 0.0;

    /* Trigonometry: '<S138>/tan 1' incorporates:
     *  Trigonometry: '<S139>/tan '
     */
    z = sin(Gamma2);

    /* Trigonometry: '<S138>/tan 2' incorporates:
     *  Trigonometry: '<S139>/tan 1'
     */
    rtb_Uk1_tmp = cos(Gamma2);

    /* Sum: '<S138>/Add' incorporates:
     *  Constant: '<S79>/Velocity on exale'
     *  Constant: '<S80>/TrailUnitWheelbase'
     *  Product: '<S138>/Product1'
     *  Product: '<S138>/Product2'
     *  Trigonometry: '<S138>/tan 1'
     *  Trigonometry: '<S138>/tan 2'
     */
    rtb_Uk1 = rtb_Sum * 4.0 * z + rtb_Uk1_tmp * 1.3889;

    /* Sum: '<S80>/Sum1' incorporates:
     *  Constant: '<S14>/Constant2'
     */
    Gamma1 = 0.0 - rtb_Integrator;

    /* Product: '<S139>/Product' incorporates:
     *  Constant: '<S79>/Velocity on exale'
     *  Constant: '<S80>/RearAxleToHitch'
     *  Constant: '<S80>/TrailUnitWheelbase'
     *  Gain: '<S139>/Gain'
     *  Product: '<S139>/Product1'
     *  Product: '<S139>/Product3'
     *  Sum: '<S139>/Add'
     */
    rtb_Integrator = (1.3889 / 1.0 * z * (-1.0) + rtb_Uk1_tmp / 1.0 * 4.0 *
                      rtb_Sum) * (rtConstB.signV2 * rtConstB.signL0b);

    /* Trigonometry: '<S143>/tan ' incorporates:
     *  Trigonometry: '<S142>/tan 1'
     */
    rtb_Sum = sin(Gamma1);

    /* Trigonometry: '<S143>/tan 1' incorporates:
     *  Trigonometry: '<S142>/tan 2'
     */
    z = cos(Gamma1);

    /* Signum: '<S143>/Sign' */
    if (rtb_Uk1 < 0.0) {
      rtb_Uk1_tmp = -1.0;
    } else {
      rtb_Uk1_tmp = (rtb_Uk1 > 0.0);
    }

    /* Gain: '<S78>/Gain2' incorporates:
     *  Constant: '<S80>/RearAxleToHitch'
     *  Constant: '<S80>/TractorWheelbase'
     *  Constant: '<S80>/TrailUnitWheelbase'
     *  Gain: '<S143>/Gain'
     *  Product: '<S141>/Product1'
     *  Product: '<S142>/Product1'
     *  Product: '<S142>/Product2'
     *  Product: '<S143>/Product'
     *  Product: '<S143>/Product1'
     *  Product: '<S143>/Product3'
     *  Signum: '<S143>/Sign'
     *  Sum: '<S142>/Add'
     *  Sum: '<S143>/Add'
     *  Trigonometry: '<S141>/tan 1'
     *  Trigonometry: '<S143>/tan '
     *  Trigonometry: '<S143>/tan 1'
     */
    steering = atan((rtb_Uk1 / 1.0 * rtb_Sum * (-1.0) + z / 1.0 * 4.0 *
                     rtb_Integrator) * (rtb_Uk1_tmp * rtConstB.signL0b_o) * 3.0 /
                    (rtb_Integrator * 4.0 * rtb_Sum + z * rtb_Uk1)) * 45.6;

    /* M-S-Function: '<S83>/Level-2 M-file S-Function' */
    /* determine if the counter needs a reset  */
    if (rtB.DataTypeConversion > 0) {
      QuadEncResetCounter(QUADENC_TIM3_PA6_PB5);
    }

    /* read counter from the quadrature encoder module */
    rtb_Level2MfileSFunction_k = QuadEncGetCounter(QUADENC_TIM3_PA6_PB5);

    /* MATLABSystem: '<S78>/Moving Average' incorporates:
     *  DataTypeConversion: '<S78>/Cast2'
     */
    if (rtDWork.obj.TunablePropsChanged) {
      rtDWork.obj.TunablePropsChanged = false;
    }

    obj = rtDWork.obj.pStatistic;
    if (obj->isInitialized != 1) {
      obj->isSetupComplete = false;
      obj->isInitialized = 1;
      obj->pCumSum = 0.0;
      obj->pCumSumRev[0] = 0.0;
      obj->pCumSumRev[1] = 0.0;
      obj->pCumSumRev[2] = 0.0;
      obj->pCumRevIndex = 1.0;
      obj->pModValueRev = 0.0;
      obj->isSetupComplete = true;
      obj->pCumSum = 0.0;
      obj->pCumSumRev[0] = 0.0;
      obj->pCumSumRev[1] = 0.0;
      obj->pCumSumRev[2] = 0.0;
      obj->pCumRevIndex = 1.0;
      obj->pModValueRev = 0.0;
    }

    rtb_Integrator = obj->pCumRevIndex;
    rtb_Uk1 = obj->pCumSum;
    csumrev[0] = obj->pCumSumRev[0];
    csumrev[1] = obj->pCumSumRev[1];
    csumrev[2] = obj->pCumSumRev[2];
    rtb_Sum = obj->pModValueRev;
    z = 0.0;
    rtb_Uk1_tmp = 0.0;
    rtb_Uk1 += (real_T)rtb_Level2MfileSFunction_k;
    if (rtb_Sum == 0.0) {
      z = csumrev[(int32_T)rtb_Integrator - 1] + rtb_Uk1;
    }

    csumrev[(int32_T)rtb_Integrator - 1] = rtb_Level2MfileSFunction_k;
    if (rtb_Integrator != 3.0) {
      rtb_Integrator++;
    } else {
      rtb_Integrator = 1.0;
      rtb_Uk1 = 0.0;
      csumrev[1] += csumrev[2];
      csumrev[0] += csumrev[1];
    }

    if (rtb_Sum == 0.0) {
      rtb_Uk1_tmp = z / 4.0;
    }

    obj->pCumSum = rtb_Uk1;
    obj->pCumSumRev[0] = csumrev[0];
    obj->pCumSumRev[1] = csumrev[1];
    obj->pCumSumRev[2] = csumrev[2];
    obj->pCumRevIndex = rtb_Integrator;
    if (rtb_Sum > 0.0) {
      obj->pModValueRev = rtb_Sum - 1.0;
    } else {
      obj->pModValueRev = 0.0;
    }

    /* Gain: '<S78>/Gain1' incorporates:
     *  MATLABSystem: '<S78>/Moving Average'
     */
    position = 0.021459227467811159 * rtb_Uk1_tmp;

    /* Sum: '<S78>/Sum' incorporates:
     *  Rounding: '<S78>/Round'
     *  Rounding: '<S78>/Round1'
     */
    control = floor(steering) - floor(position);

    /* Abs: '<S78>/Abs' */
    rtb_Uk1 = fabs(control);

    /* Switch: '<S79>/Switch1' incorporates:
     *  DataTypeConversion: '<S78>/Cast'
     *  DiscreteIntegrator: '<S115>/Integrator'
     *  Gain: '<S120>/Proportional Gain'
     *  Sum: '<S124>/Sum'
     */
    rtb_Switch1 = (uint16_T)(propVal * rtb_Uk1 + rtDWork.Integrator_DSTATE);

    /* Sum: '<S78>/Add' incorporates:
     *  Constant: '<S78>/Motor dead zone'
     */
    mospeed = (uint16_T)((uint32_T)((uint16_T)300U) + rtb_Switch1);

    /* M-S-Function: '<S8>/Level-2 M-file S-Function' incorporates:
     *  Constant: '<S78>/Constant1'
     *  RelationalOperator: '<S78>/GreaterThan'
     */
    rtb_Level2MfileSFunction_j = (control > 0.0);

    /* DataTypeConversion: '<S78>/Cast1' */
    cw = rtb_Level2MfileSFunction_j;

    /* Logic: '<S78>/NOT' */
    ccw = !cw;

    /* DataTypeConversion: '<S83>/Data Type Conversion' incorporates:
     *  RelationalOperator: '<S132>/FixPt Relational Operator'
     *  UnitDelay: '<S132>/Delay Input1'
     *
     * Block description for '<S132>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtB.DataTypeConversion = (rtDWork.DelayInput1_DSTATE < 0.0);

    /* M-S-Function: '<S135>/Level-2 M-file S-Function' */
    /* read from analog input for filtered inputs*/
    rtb_Switch1 = AninGet(ANIN_PORTF_PIN10,0);

    /* M-S-Function: '<S137>/Level-2 M-file S-Function' */
    /* read from analog input for filtered inputs*/
    rtb_Level2MfileSFunction_d = AninGet(ANIN_PORTF_PIN8,0);

    /* Outputs for Enabled SubSystem: '<S79>/Subsystem' incorporates:
     *  EnablePort: '<S133>/Enable'
     */
    /* Switch: '<S79>/Switch1' incorporates:
     *  Constant: '<S14>/Constant1'
     *  Constant: '<S79>/Constant1'
     *  RelationalOperator: '<S79>/Equal1'
     */
    if (nodeRole == ((uint8_T)5U)) {
      /* DataStoreWrite: '<S133>/Data Store Write' */
      rtDWork.trailerTwoAngle = rtb_Level2MfileSFunction_d;

      /* Switch: '<S79>/Switch1' */
      rtb_Switch1 = rtb_Level2MfileSFunction_d;
    } else {
      /* Switch: '<S79>/Switch1' incorporates:
       *  DataStoreRead: '<S14>/Data Store Read1'
       */
      rtb_Switch1 = rtDWork.trailerTwoAngle;
    }

    /* End of Switch: '<S79>/Switch1' */
    /* End of Outputs for SubSystem: '<S79>/Subsystem' */

    /* Outputs for Enabled SubSystem: '<S79>/Subsystem1' incorporates:
     *  EnablePort: '<S134>/Enable'
     */
    if (rtb_Equal16) {
      /* DataStoreWrite: '<S134>/Data Store Write' */
      rtDWork.trailerOneAngle = rtb_Level2MfileSFunction_g;
    }

    /* End of Outputs for SubSystem: '<S79>/Subsystem1' */

    /* Update for M-S-Function: '<S146>/Level-2 M-file S-Function' */
    /* set the new duty cycle */
    PwmoutSet(PWMOUT_TIM14_PIN_PF9, mospeed);

    /* Update for M-S-Function: '<S144>/Level-2 M-file S-Function' */
    /* update digital output */
    if (cw == 0) {
      DigoutSet(DIGOUT_PORTE_PIN5, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTE_PIN5, DIGOUT_HIGH);
    }

    /* Update for M-S-Function: '<S145>/Level-2 M-file S-Function' */
    /* update digital output */
    if (ccw == 0) {
      DigoutSet(DIGOUT_PORTE_PIN6, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTE_PIN6, DIGOUT_HIGH);
    }

    /* Update for DiscreteIntegrator: '<S115>/Integrator' incorporates:
     *  Gain: '<S112>/Integral Gain'
     */
    rtDWork.Integrator_DSTATE += 0.01 * (real_T)Slot5execution_ELAPS_T[0] *
      (intVal * rtb_Uk1);

    /* Update for UnitDelay: '<S132>/Delay Input1'
     *
     * Block description for '<S132>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtDWork.DelayInput1_DSTATE = 0.0;
  }

  rtPrevZCSigState.Slot5execution_Trig_ZCE = rtb_Equal14;

  /* End of Outputs for SubSystem: '<S1>/Slot 5 execution' */

  /* Outputs for Triggered SubSystem: '<S13>/Subsystem' incorporates:
   *  TriggerPort: '<S72>/Trigger'
   */
  if (rtb_AND && (rtPrevZCSigState.Subsystem_Trig_ZCE != POS_ZCSIG)) {
    /* DataStoreWrite: '<S72>/Data Store Write1' incorporates:
     *  Constant: '<S72>/Constant1'
     */
    rtDWork.Local_Ticks = ((uint16_T)0U);

    /* DataStoreWrite: '<S72>/Data Store Write' incorporates:
     *  Constant: '<S72>/Constant3'
     */
    rtDWork.SlotTime = slotTime;
  }

  rtPrevZCSigState.Subsystem_Trig_ZCE = rtb_AND;

  /* End of Outputs for SubSystem: '<S13>/Subsystem' */

  /* M-S-Function: '<S6>/Level-2 M-file S-Function' */
  /* read from digital input */
  rtb_Level2MfileSFunction_j = DiginGet(DIGIN_PORTG_PIN12);

  /* Gain: '<S1>/Multiply' */
  rtb_Multiply = (uint8_T)(rtb_Level2MfileSFunction_j ? (int32_T)((uint32_T)
    ((uint8_T)128U) >> 7) : 0);

  /* M-S-Function: '<S7>/Level-2 M-file S-Function' */
  /* read from digital input */
  rtb_Level2MfileSFunction_j = DiginGet(DIGIN_PORTG_PIN15);

  /* Gain: '<S1>/Multiply1' */
  rtb_Multiply1 = (uint8_T)(rtb_Level2MfileSFunction_j ? (int32_T)((uint32_T)
    ((uint8_T)128U) >> 6) : 0);

  /* M-S-Function: '<S8>/Level-2 M-file S-Function' */
  /* read from digital input */
  rtb_Level2MfileSFunction_j = DiginGet(DIGIN_PORTA_PIN4);

  /* Sum: '<S1>/Add' incorporates:
   *  DataStoreWrite: '<S1>/Data Store Write'
   *  Gain: '<S1>/Multiply2'
   */
  rtDWork.nodeRole_i = (uint8_T)(((uint32_T)rtb_Multiply + rtb_Multiply1) +
    (uint32_T)(rtb_Level2MfileSFunction_j ? (int32_T)((uint32_T)((uint8_T)128U) >>
    5) : 0));

  /* M-S-Function: '<S148>/Level-2 M-file S-Function' */
  /* read the current CPU load */
  SI_CPUload = OsGetCpuLoad();

  /* M-S-Function: '<S149>/Level-2 M-file S-Function' */
  /* read the free heap size */
  SI_FreeHeap = OsGetFreeHeapSize();

  /* M-S-Function: '<S150>/Level-2 M-file S-Function' */
  /* read the task's free stack size */
  SI_FreeStack = OsGetTaskFreeStackSize("AppCtrlTask");

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.01, which is the step size
   * of the task. Size of "clockTick0" ensures timer will not overflow during the
   * application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  rtM->Timing.clockTick0++;
  if (!rtM->Timing.clockTick0) {
    rtM->Timing.clockTickH0++;
  }
}

/* Model initialize function */
void HANcoder_E407_TTA_CombineModel_initialize(void)
{
  {
    g_dsp_internal_SlidingWindowAve *obj;

    {
      /* user code (Start function Header) */
      uint8_t canResult1;
      tCanFilter canFilter1;

      /* user code (Start function Body) */

      /* initialize the CAN driver. */
      CanInit(64, 8);

      /* initialize the CAN I/O module for channel 1 */
      CanIoInit(0);

      /* initialize the timer module for output compare. */
      TimeoutInitModule(TIMEOUT_MODULE_TIM4, 1000000);

      /* Start for Enabled SubSystem: '<S13>/Subsystem1' */
      /* Start for M-S-Function: '<S74>/S-Function' incorporates:
       *  Constant: '<S73>/Constant1'
       */

      /* register a CAN storage buffer for the message with this ID */
      CanIoCreateMessageReceivedStorage(0, SYNC1_ID);

      /* End of Start for SubSystem: '<S13>/Subsystem1' */

      /* register the callback handler */
      TimeoutRegisterCompareEventCallback(TIMEOUT_TIM4_PIN_PD12,
        TimeoutEventIRQ_TIMEOUT_TIM4_PIN_PD12);

      /* End of Start for S-Function (sfcn_timeout_event_irq): '<S4>/S-Function' */

      /* Start for Enabled SubSystem: '<S1>/Message selector'
       *
       * Block description for '<S1>/Message selector':
       *  Truck 1
       */
      /* Start for Enabled SubSystem: '<S11>/MMBS1_RX' */
      /* Constant: '<S11>/Constant12' */
      MMBS1_RX_Start(MMBS1_ID);

      /* End of Start for SubSystem: '<S11>/MMBS1_RX' */

      /* Start for Enabled SubSystem: '<S11>/SSTM1_RX' */
      /* Constant: '<S11>/Constant14' */
      MMBS1_RX_Start(SSTM1_ID);

      /* End of Start for SubSystem: '<S11>/SSTM1_RX' */

      /* Start for Enabled SubSystem: '<S11>/SYNC1_RX' */
      /* Start for M-S-Function: '<S45>/S-Function' incorporates:
       *  Constant: '<S11>/Constant10'
       */

      /* register a CAN storage buffer for the message with this ID */
      CanIoCreateMessageReceivedStorage(0, SYNC1_ID);

      /* End of Start for SubSystem: '<S11>/SYNC1_RX' */

      /* Start for Enabled SubSystem: '<S11>/TRCK1_ID2_RX' */
      /* Constant: '<S11>/Constant5' */
      MMBS1_RX_Start(TRCK1_ID2);

      /* End of Start for SubSystem: '<S11>/TRCK1_ID2_RX' */

      /* Start for Enabled SubSystem: '<S11>/TRCK1_RX' */
      /* Constant: '<S11>/Constant3' */
      MMBS1_RX_Start(TRCK1_ID1);

      /* End of Start for SubSystem: '<S11>/TRCK1_RX' */

      /* Start for Enabled SubSystem: '<S11>/TRCK_ID3_RX' */
      /* Start for M-S-Function: '<S55>/S-Function' incorporates:
       *  Constant: '<S11>/Constant26'
       */

      /* register a CAN storage buffer for the message with this ID */
      CanIoCreateMessageReceivedStorage(0, TRCK1_ID3);

      /* End of Start for SubSystem: '<S11>/TRCK_ID3_RX' */

      /* Start for Enabled SubSystem: '<S11>/TRLS_ID4_RX' */
      /* Start for M-S-Function: '<S58>/S-Function' incorporates:
       *  Constant: '<S11>/Constant8'
       */

      /* register a CAN storage buffer for the message with this ID */
      CanIoCreateMessageReceivedStorage(0, TRLS1_ID4);

      /* End of Start for SubSystem: '<S11>/TRLS_ID4_RX' */

      /* Start for Enabled SubSystem: '<S11>/TRLS_ID5_RX' */
      /* Start for M-S-Function: '<S67>/S-Function' incorporates:
       *  Constant: '<S11>/Constant18'
       */

      /* register a CAN storage buffer for the message with this ID */
      CanIoCreateMessageReceivedStorage(0, TRLS1_ID5);

      /* End of Start for SubSystem: '<S11>/TRLS_ID5_RX' */
      /* End of Start for SubSystem: '<S1>/Message selector' */
      /* Start for M-S-Function: '<S144>/Level-2 M-file S-Function' */

      /* configure the digital output */
      DigoutConfigure(DIGOUT_PORTE_PIN5, DIGOUT_CFG_PUSHPULL);

      /* Start for M-S-Function: '<S145>/Level-2 M-file S-Function' */

      /* configure the digital output */
      DigoutConfigure(DIGOUT_PORTE_PIN6, DIGOUT_CFG_PUSHPULL);

      /* Start for S-Function (sfcn_pwmout_init): '<S147>/S-Function' */

      /* initialize the PWM module and register the callback handler */
      PwmoutInit(PWMOUT_MODULE_TIM14, 10253, PWMOUT_EDGE_ALIGNMENT);
      PwmoutRegisterPeriodCompleteCallback(PWMOUT_MODULE_TIM14,
        PwmoutIRQ_PWMOUT_MODULE_TIM14);

      /* configures channel 1 */
      PwmoutConfigure(PWMOUT_TIM14_PIN_PF9, PWMOUT_ACTIVE_HIGH,
                      PWMOUT_INVERTED_OUTPUT_OFF);

      /* Start for M-S-Function: '<S136>/Level-2 M-file S-Function' */

      /* configure the analog input for filtered inputs */
      AninConfigure(ANIN_PORTF_PIN7,0);

      /* Start for M-S-Function: '<S83>/Level-2 M-file S-Function' */

      /* configure the quadrature encoder module */
      QuadEncConfigure(QUADENC_TIM3_PA6_PB5, QUADENC_CFG_FLOATING);

      /* Start for MATLABSystem: '<S78>/Moving Average' */
      rtDWork.obj.isInitialized = 0;
      rtDWork.obj.NumChannels = -1;
      rtDWork.obj.FrameLength = -1;
      rtDWork.obj.matlabCodegenIsDeleted = false;
      SystemCore_setup(&rtDWork.obj);

      /* Start for M-S-Function: '<S135>/Level-2 M-file S-Function' */

      /* configure the analog input for filtered inputs */
      AninConfigure(ANIN_PORTF_PIN10,0);

      /* Start for M-S-Function: '<S137>/Level-2 M-file S-Function' */

      /* configure the analog input for filtered inputs */
      AninConfigure(ANIN_PORTF_PIN8,0);

      /* End of Start for SubSystem: '<S1>/Slot 5 execution' */

      /* Start for M-S-Function: '<S6>/Level-2 M-file S-Function' */

      /* configure the digital input */
      DiginConfigure(DIGIN_PORTG_PIN12, DIGIN_CFG_PULLDOWN);

      /* Start for M-S-Function: '<S7>/Level-2 M-file S-Function' */

      /* configure the digital input */
      DiginConfigure(DIGIN_PORTG_PIN15, DIGIN_CFG_PULLDOWN);

      /* Start for M-S-Function: '<S8>/Level-2 M-file S-Function' */

      /* configure the digital input */
      DiginConfigure(DIGIN_PORTA_PIN4, DIGIN_CFG_PULLDOWN);

      /* Start for M-S-Function: '<S2>/Level-2 M-file S-Function' */

      /* configure the stack size for the task that executes the model */
      AppCtrlTaskSetStackSize((configMINIMAL_STACK_SIZE*sizeof(portBASE_TYPE)) +
        100);

      /* configure the sample time of the model in microseconds */
      AppCtrlTaskSetPeriod(10000);

      /* Run the ADC conversions ten times faster than the Simulink model */
      ADCconversionTaskSetPeriod(10000/10);

      /* Start for M-S-Function: '<S3>/Level-2 M-file S-Function' */

      /* store the CAN controller's filter configuration */
      canFilter1.mask = 0x00000000;
      canFilter1.code = 0x00000000;
      canFilter1.mode = CAN_FILTER_MODE_STDID_ONLY;

      /* connect and synchronize the CAN bus */
      canResult1 = CanConnect(0, 250000, &canFilter1);
      configASSERT(canResult1 == TRUE);

      /* Start for S-Function (sfcn_timeout_init): '<S12>/S-Function' */

      /* register the free running counter overflow callback handler */
      TimeoutRegisterOverflowCallback(TIMEOUT_MODULE_TIM4,
        TimeoutOverflowIRQ_TIMEOUT_MODULE_TIM4);

      /* Start for M-S-Function: '<S16>/Level-2 M-file S-Function' */

      /* initialize the measurement and calibration interface */
      MacUsbComInit();
      MacInit();
    }

    rtPrevZCSigState.EnabledSubsystem_Trig_ZCE = POS_ZCSIG;
    rtPrevZCSigState.SYNC1_TX_Trig_ZCE = POS_ZCSIG;
    rtPrevZCSigState.TRLS_ID4_TX_Trig_ZCE = POS_ZCSIG;
    rtPrevZCSigState.Subsystem_Trig_ZCE = POS_ZCSIG;
    rtPrevZCSigState.TriggeredSubsystem_Trig_ZCE = POS_ZCSIG;
    rtPrevZCSigState.Slot5execution_Trig_ZCE = POS_ZCSIG;
    rtPrevZCSigState.TRLS_ID5_TX.MMBS1_TX_Trig_ZCE = POS_ZCSIG;
    rtPrevZCSigState.TRCK1_TX.MMBS1_TX_Trig_ZCE = POS_ZCSIG;
    rtPrevZCSigState.TRCK1_ID3_TX.MMBS1_TX_Trig_ZCE = POS_ZCSIG;
    rtPrevZCSigState.TRCK1_ID2_TX.MMBS1_TX_Trig_ZCE = POS_ZCSIG;
    rtPrevZCSigState.SSTM1_TX.MMBS1_TX_Trig_ZCE = POS_ZCSIG;
    rtPrevZCSigState.MMBS1_TX_a.MMBS1_TX_Trig_ZCE = POS_ZCSIG;

    /* SystemInitialize for Triggered SubSystem: '<S1>/Slot 5 execution' */
    rtDWork.Slot5execution_PREV_T[0] = rtM->Timing.clockTick0;
    rtDWork.Slot5execution_PREV_T[1] = rtM->Timing.clockTickH0;

    /* InitializeConditions for MATLABSystem: '<S78>/Moving Average' */
    obj = rtDWork.obj.pStatistic;
    if (obj->isInitialized == 1) {
      obj->pCumSum = 0.0;
      obj->pCumSumRev[0] = 0.0;
      obj->pCumSumRev[1] = 0.0;
      obj->pCumSumRev[2] = 0.0;
      obj->pCumRevIndex = 1.0;
      obj->pModValueRev = 0.0;
    }

    /* End of InitializeConditions for MATLABSystem: '<S78>/Moving Average' */
    /* End of SystemInitialize for SubSystem: '<S1>/Slot 5 execution' */
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
