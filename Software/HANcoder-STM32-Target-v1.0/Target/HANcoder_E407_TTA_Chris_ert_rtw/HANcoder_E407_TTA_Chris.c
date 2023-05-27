/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_TTA_Chris.c
 *
 * Code generated for Simulink model 'HANcoder_E407_TTA_Chris'.
 *
 * Model version                  : 17.10
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Sat May 27 16:24:52 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "HANcoder_E407_TTA_Chris.h"
#include "rtwtypes.h"
#include "HANcoder_E407_TTA_Chris_private.h"
#include "zero_crossing_types.h"

/* map ByteSwap function */
#define ByteSwap(x)                    (ByteSwap_x((uint8_t *) &x, sizeof(x)))

void TimeoutEventIRQ_TIMEOUT_TIM4_PIN_PD12(void);
void TimeoutOverflowIRQ_TIMEOUT_MODULE_TIM4(void);

/* Exported block signals */
uint32_T SI_FreeHeap;                  /* '<S69>/Level-2 M-file S-Function' */
uint32_T SI_FreeStack;                 /* '<S70>/Level-2 M-file S-Function' */
uint16_T testCounter;                  /* '<S29>/Data Store Read1' */
uint16_T local_ticks_interrupt;        /* '<S8>/Switch' */
uint8_T SI_CPUload;                    /* '<S68>/Level-2 M-file S-Function' */
uint8_T dataArx;                       /* '<S45>/In1' */
uint8_T setSlotTime;                   /* '<S8>/Data Store Read3' */
uint8_T slotSelected;                  /* '<S17>/Switch' */
boolean_T roleB;                       /* '<S7>/Cast1' */
boolean_T roleA;                       /* '<S7>/Cast' */
boolean_T boolCan;                     /* '<S9>/AND' */
boolean_T canActive;                   /* '<S8>/Clock_State' */

/* Exported block parameters */
real_T ClockOn = 0.0;                  /* Variable: ClockOn
                                        * Referenced by: '<S11>/Constant'
                                        */
real_T matrixRows = 10.0;              /* Variable: matrixRows
                                        * Referenced by: '<S17>/Constant1'
                                        */
uint32_T MMBS1_ID = 12U;               /* Variable: MMBS1_ID
                                        * Referenced by: '<S9>/Constant12'
                                        */
uint32_T SSTM1_ID = 13U;               /* Variable: SSTM1_ID
                                        * Referenced by: '<S9>/Constant14'
                                        */
uint32_T SYNC1_ID = 11U;               /* Variable: SYNC1_ID
                                        * Referenced by:
                                        *   '<S9>/Constant10'
                                        *   '<S63>/Constant1'
                                        */
uint32_T TRCK1_ID1 = 14U;              /* Variable: TRCK1_ID1
                                        * Referenced by: '<S9>/Constant3'
                                        */
uint32_T TRCK1_ID2 = 26U;              /* Variable: TRCK1_ID2
                                        * Referenced by: '<S9>/Constant5'
                                        */
uint32_T TRCK1_ID3 = 37U;              /* Variable: TRCK1_ID3
                                        * Referenced by: '<S9>/Constant26'
                                        */
uint32_T TRLS1_ID4 = 48U;              /* Variable: TRLS1_ID4
                                        * Referenced by: '<S9>/Constant8'
                                        */
uint32_T TRLS1_ID5 = 59U;              /* Variable: TRLS1_ID5
                                        * Referenced by: '<S9>/Constant18'
                                        */
uint8_T nodeRole = 1U;                 /* Variable: nodeRole
                                        * Referenced by: '<S1>/Constant'
                                        */
uint8_T slotTime = 50U;                /* Variable: slotTime
                                        * Referenced by: '<S62>/Constant3'
                                        */

/* Block signals (default storage) */
BlockIO rtB;

/* Block states (default storage) */
D_Work rtDWork;

/* Previous zero-crossings (trigger) states */
PrevZCSigStates rtPrevZCSigState;
static tCanDataTypes canRxData_0_rtu_In1;
static tCanDataTypes canTxData;
static tCanDataTypes canRxData_0_SYNC1_ID;
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

    /* SignalConversion generated from: '<S8>/Clock_State' */
    canActive = rtB.OR;

    /* Switch: '<S8>/Switch' */
    if (canActive) {
      /* Switch: '<S8>/Switch' incorporates:
       *  Constant: '<S8>/Constant2'
       *  DataStoreRead: '<S8>/Data Store Read'
       *  Sum: '<S8>/Sum1'
       */
      local_ticks_interrupt = (uint16_T)((uint32_T)rtDWork.Local_Ticks +
        ((uint16_T)1U));
    } else {
      /* Switch: '<S8>/Switch' incorporates:
       *  DataStoreRead: '<S8>/Data Store Read1'
       */
      local_ticks_interrupt = rtDWork.Local_Ticks;
    }

    /* End of Switch: '<S8>/Switch' */

    /* DataStoreWrite: '<S8>/Data Store Write' */
    rtDWork.Local_Ticks = local_ticks_interrupt;

    /* DataStoreRead: '<S8>/Data Store Read3' */
    setSlotTime = rtDWork.SlotTime;

    /* RelationalOperator: '<S8>/Equal' incorporates:
     *  DataStoreRead: '<S8>/Data Store Read2'
     *  Gain: '<S8>/Gain'
     */
    rtb_Equal = (rtDWork.Local_Ticks >= (int32_T)(((uint32_T)((uint8_T)160U) *
      setSlotTime) >> 4));

    /* Outputs for Triggered SubSystem: '<S8>/Enabled Subsystem' incorporates:
     *  TriggerPort: '<S17>/Trigger'
     */
    if (rtb_Equal && (rtPrevZCSigState.EnabledSubsystem_Trig_ZCE != POS_ZCSIG))
    {
      /* Switch: '<S17>/Switch' incorporates:
       *  Constant: '<S17>/Constant1'
       *  DataStoreRead: '<S17>/Data Store Read1'
       *  DataTypeConversion: '<S17>/Cast'
       *  RelationalOperator: '<S17>/Equal'
       */
      if (rtDWork.slot < (uint8_T)matrixRows) {
        /* Switch: '<S17>/Switch' incorporates:
         *  Constant: '<S17>/Constant'
         *  DataStoreRead: '<S17>/Data Store Read'
         *  Sum: '<S17>/Plus'
         */
        slotSelected = (uint8_T)((uint32_T)rtDWork.slot + ((uint8_T)1U));
      } else {
        /* Switch: '<S17>/Switch' incorporates:
         *  Constant: '<S17>/Constant2'
         */
        slotSelected = (uint8_T)1.0;
      }

      /* End of Switch: '<S17>/Switch' */

      /* DataStoreWrite: '<S17>/Data Store Write' */
      rtDWork.slot = slotSelected;

      /* DataStoreWrite: '<S17>/Data Store Write1' incorporates:
       *  Constant: '<S17>/Constant3'
       */
      rtDWork.Local_Ticks = ((uint16_T)0U);
    }

    rtPrevZCSigState.EnabledSubsystem_Trig_ZCE = rtb_Equal;

    /* End of Outputs for SubSystem: '<S8>/Enabled Subsystem' */
    /* M-S-Function: '<S18>/Level-2 M-file S-Function' */
    /* read 16-bit free running counter timestamp of the last output compare event */
    rtb_Level2MfileSFunction = TimeoutGetLastEventCounter(TIMEOUT_TIM4_PIN_PD12);

    /* Sum: '<S8>/Sum' incorporates:
     *  Constant: '<S8>/Constant'
     */
    rtB.Sum = (uint16_T)((uint32_T)rtb_Level2MfileSFunction + ((uint16_T)1000U));

    /* Update for M-S-Function: '<S19>/Level-2 M-file S-Function' incorporates:
     *  Constant: '<S8>/Constant1'
     */
    /* schedule the next output compare event */
    TimeoutScheduleCompareEvent(TIMEOUT_TIM4_PIN_PD12, rtB.Sum, (tTimeoutAction)
      ((uint8_T)3U));
  }
}

void TimeoutOverflowIRQ_TIMEOUT_MODULE_TIM4(void)
{
}

/*
 * Output and update for enable system:
 *    '<S38>/Enabled Subsystem'
 *    '<S41>/Enabled Subsystem'
 *    '<S46>/Enabled Subsystem'
 *    '<S48>/Enabled Subsystem'
 *    '<S50>/Enabled Subsystem'
 *    '<S52>/Enabled Subsystem'
 *    '<S59>/Enabled Subsystem'
 *    '<S64>/Enabled Subsystem'
 */
void EnabledSubsystem(int8_T rtu_Enable, uint8_T rtu_In1, uint8_T rtu_In2,
                      uint8_T rtu_In3, uint8_T rtu_In4, uint8_T rtu_In5, uint8_T
                      rtu_In6, uint8_T rtu_In7, uint8_T rtu_In8,
                      rtB_EnabledSubsystem *localB)
{
  uint8_T rtb_In2_b;
  uint8_T rtb_In3_f;
  uint8_T rtb_In4_c;
  uint8_T rtb_In5_a;
  uint8_T rtb_In6_j;
  uint8_T rtb_In7_h;
  uint8_T rtb_In8_m;

  /* Outputs for Enabled SubSystem: '<S38>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S39>/Enable'
   */
  if (rtu_Enable > 0) {
    /* SignalConversion generated from: '<S39>/In1' */
    localB->In1 = rtu_In1;

    /* SignalConversion generated from: '<S39>/In2' */
    rtb_In2_b = rtu_In2;

    /* SignalConversion generated from: '<S39>/In3' */
    rtb_In3_f = rtu_In3;

    /* SignalConversion generated from: '<S39>/In4' */
    rtb_In4_c = rtu_In4;

    /* SignalConversion generated from: '<S39>/In5' */
    rtb_In5_a = rtu_In5;

    /* SignalConversion generated from: '<S39>/In6' */
    rtb_In6_j = rtu_In6;

    /* SignalConversion generated from: '<S39>/In7' */
    rtb_In7_h = rtu_In7;

    /* SignalConversion generated from: '<S39>/In8' */
    rtb_In8_m = rtu_In8;
  }

  /* End of Outputs for SubSystem: '<S38>/Enabled Subsystem' */
}

/*
 * Disable for enable system:
 *    '<S9>/MMBS1_RX'
 *    '<S9>/SSTM1_RX'
 *    '<S9>/SYNC1_RX4'
 *    '<S9>/SYNC1_RX5'
 *    '<S9>/SYNC1_RX6'
 *    '<S9>/SYNC1_RX7'
 *    '<S9>/TRCK1_RX'
 */
void MMBS1_RX_Disable(rtDW_MMBS1_RX *localDW)
{
  localDW->MMBS1_RX_MODE = false;
}

/*
 * Start for enable system:
 *    '<S9>/MMBS1_RX'
 *    '<S9>/SSTM1_RX'
 *    '<S9>/SYNC1_RX4'
 *    '<S9>/SYNC1_RX5'
 *    '<S9>/SYNC1_RX6'
 *    '<S9>/SYNC1_RX7'
 *    '<S9>/TRCK1_RX'
 */
void MMBS1_RX_Start(uint32_T rtu_In1)
{
  /* Start for M-S-Function: '<S38>/S-Function' */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, rtu_In1);
}

/*
 * Outputs for enable system:
 *    '<S9>/MMBS1_RX'
 *    '<S9>/SSTM1_RX'
 *    '<S9>/SYNC1_RX4'
 *    '<S9>/SYNC1_RX5'
 *    '<S9>/SYNC1_RX6'
 *    '<S9>/SYNC1_RX7'
 *    '<S9>/TRCK1_RX'
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
  uint8_T rtb_SFunction_o7_d;
  uint8_T rtb_SFunction_o8_n1;
  uint8_T rtb_SFunction_o9_o;
  int8_T rtb_SFunction_o1_g;

  /* Outputs for Enabled SubSystem: '<S9>/MMBS1_RX' incorporates:
   *  EnablePort: '<S20>/Enable'
   */
  if (rtu_Enable) {
    localDW->MMBS1_RX_MODE = true;

    /* M-S-Function: '<S38>/S-Function' */

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
      rtb_SFunction_o7_d = canRxData_0_rtu_In1.uint8_T_info[5];
      rtb_SFunction_o8_n1 = canRxData_0_rtu_In1.uint8_T_info[6];
      rtb_SFunction_o9_o = canRxData_0_rtu_In1.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S38>/Enabled Subsystem' */
    EnabledSubsystem(rtb_SFunction_o1_g, rtb_SFunction_o2_n, rtb_SFunction_o3_b,
                     rtb_SFunction_o4_l, rtb_SFunction_o5_e, rtb_SFunction_o6_k,
                     rtb_SFunction_o7_d, rtb_SFunction_o8_n1, rtb_SFunction_o9_o,
                     &localB->EnabledSubsystem_k);

    /* End of Outputs for SubSystem: '<S38>/Enabled Subsystem' */
  } else if (localDW->MMBS1_RX_MODE) {
    MMBS1_RX_Disable(localDW);
  }

  /* End of Outputs for SubSystem: '<S9>/MMBS1_RX' */
}

/*
 * Output and update for trigger system:
 *    '<S9>/MMBS1_TX'
 *    '<S9>/SSTM1_TX'
 *    '<S9>/SYNC1_TX4'
 *    '<S9>/SYNC1_TX5'
 *    '<S9>/SYNC1_TX6'
 *    '<S9>/SYNC1_TX7'
 *    '<S9>/TRCK1_TX'
 */
void MMBS1_TX(boolean_T rtu_Trigger, uint32_T rtu_In1, rtZCE_MMBS1_TX *localZCE)
{
  /* Outputs for Triggered SubSystem: '<S9>/MMBS1_TX' incorporates:
   *  TriggerPort: '<S21>/Trigger'
   */
  if (rtu_Trigger && (localZCE->MMBS1_TX_Trig_ZCE != POS_ZCSIG)) {
    /* Update for M-S-Function: '<S40>/S-Function' */
    {
      /* prepare the data */
      canTxData.uint8_T_info[0] = 0U;

      /* send the data */
      CanTransmit(0, rtu_In1, 1, &canTxData.uint8_T_info[0]);
    }
  }

  localZCE->MMBS1_TX_Trig_ZCE = rtu_Trigger;

  /* End of Outputs for SubSystem: '<S9>/MMBS1_TX' */
}

/* Model step function */
void HANcoder_E407_TTA_Chris_step(void)
{
  /* local block i/o variables */
  uint8_T rtb_SFunction_o2;
  uint8_T rtb_SFunction_o3;
  uint8_T rtb_SFunction_o4;
  uint8_T rtb_SFunction_o5;
  uint8_T rtb_SFunction_o6;
  uint8_T rtb_SFunction_o7;
  uint8_T rtb_SFunction_o8;
  uint8_T rtb_SFunction_o9;
  uint8_T rtb_SFunction_o2_i;
  uint8_T rtb_SFunction_o3_g;
  uint8_T rtb_SFunction_o4_j;
  uint8_T rtb_SFunction_o5_f;
  uint8_T rtb_SFunction_o6_g;
  uint8_T rtb_SFunction_o7_k;
  uint8_T rtb_SFunction_o8_n;
  uint8_T rtb_SFunction_o9_b;
  int8_T rtb_SFunction_o1;
  int8_T rtb_SFunction_o1_h;
  boolean_T rtb_Level2MfileSFunction_f;
  int32_T rowIdx;
  uint8_T rtb_In2;
  uint8_T rtb_In3;
  uint8_T rtb_In4;
  uint8_T rtb_In5;
  uint8_T rtb_In6;
  uint8_T rtb_In7;
  uint8_T rtb_In8;
  boolean_T AND11;
  boolean_T AND13;
  boolean_T AND15;
  boolean_T AND3;
  boolean_T AND5;
  boolean_T AND7;
  boolean_T AND9;
  boolean_T rtb_AND;
  boolean_T rtb_AND1;
  boolean_T rtb_AND10;
  boolean_T rtb_AND12;
  boolean_T rtb_AND14;
  boolean_T rtb_AND2;
  boolean_T rtb_AND4;
  boolean_T rtb_AND6;
  boolean_T rtb_AND8;
  boolean_T rtb_Equal;
  boolean_T rtb_Equal13;
  boolean_T rtb_Equal14;
  boolean_T rtb_Equal15;
  boolean_T rtb_Equal3;
  boolean_T rtb_Equal5;
  boolean_T rtb_Equal6;
  boolean_T rtb_Equal7;
  boolean_T rtb_Equal8;
  boolean_T rtb_SampleTimeCrowBar;

  /* Outputs for Enabled SubSystem: '<S1>/Initialize Clock Schedule' incorporates:
   *  EnablePort: '<S6>/Enable'
   */
  /* Logic: '<S1>/NOT' incorporates:
   *  DataStoreRead: '<S1>/If 1 -> Clock initialized '
   */
  if (rtDWork.init_clock == 0.0) {
    rtDWork.InitializeClockSchedule_MODE = true;

    /* DataStoreWrite: '<S6>/Data Store Write' incorporates:
     *  Constant: '<S6>/Constant2'
     */
    rtDWork.init_clock = 1.0;

    /* Update for M-S-Function: '<S14>/Level-2 M-file S-Function' incorporates:
     *  Constant: '<S6>/Constant'
     *  Constant: '<S6>/Constant1'
     */
    /* schedule the next output compare event */
    TimeoutScheduleCompareEvent(TIMEOUT_TIM4_PIN_PD12, ((uint16_T)1U),
      (tTimeoutAction)((uint8_T)3U));
  } else if (rtDWork.InitializeClockSchedule_MODE) {
    rtDWork.InitializeClockSchedule_MODE = false;
  }

  /* End of Logic: '<S1>/NOT' */
  /* End of Outputs for SubSystem: '<S1>/Initialize Clock Schedule' */

  /* Logic: '<S11>/AND' incorporates:
   *  Constant: '<S11>/Constant'
   *  DataStoreRead: '<S11>/Data Store Read'
   */
  rtb_AND = ((ClockOn != 0.0) && rtDWork.RoleA);

  /* Outputs for Enabled SubSystem: '<S11>/Subsystem1' incorporates:
   *  EnablePort: '<S63>/Enable'
   */
  /* DataStoreRead: '<S11>/Data Store Read1' incorporates:
   *  DataTypeConversion: '<S63>/Cast'
   */
  if (rtDWork.RoleB) {
    rtDWork.Subsystem1_MODE = true;

    /* M-S-Function: '<S64>/S-Function' incorporates:
     *  Constant: '<S63>/Constant1'
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

    /* Outputs for Enabled SubSystem: '<S64>/Enabled Subsystem' */
    EnabledSubsystem(rtb_SFunction_o1, rtb_SFunction_o2, rtb_SFunction_o3,
                     rtb_SFunction_o4, rtb_SFunction_o5, rtb_SFunction_o6,
                     rtb_SFunction_o7, rtb_SFunction_o8, rtb_SFunction_o9,
                     &rtB.EnabledSubsystem_e);

    /* End of Outputs for SubSystem: '<S64>/Enabled Subsystem' */

    /* DataStoreWrite: '<S63>/Data Store Write' */
    rtDWork.SlotTime = rtB.EnabledSubsystem_e.In1;

    /* Outputs for Triggered SubSystem: '<S63>/Triggered Subsystem' incorporates:
     *  TriggerPort: '<S66>/Trigger'
     */
    if ((rtb_SFunction_o1 != 0) && (rtPrevZCSigState.TriggeredSubsystem_Trig_ZCE
         != POS_ZCSIG)) {
      /* DataStoreWrite: '<S66>/Data Store Write' incorporates:
       *  Constant: '<S66>/Constant'
       */
      rtDWork.Local_Ticks = ((uint16_T)0U);
    }

    rtPrevZCSigState.TriggeredSubsystem_Trig_ZCE = (ZCSigState)(rtb_SFunction_o1
      != 0);

    /* End of Outputs for SubSystem: '<S63>/Triggered Subsystem' */

    /* M-S-Function: '<S16>/Level-2 M-file S-Function' incorporates:
     *  DataTypeConversion: '<S63>/Cast'
     *  Memory: '<S65>/Memory'
     */
    rtb_Level2MfileSFunction_f = rtDWork.Memory_PreviousInput;

    /* CombinatorialLogic: '<S65>/Logic' incorporates:
     *  DataTypeConversion: '<S63>/Cast'
     */
    rowIdx = (int32_T)(((((uint32_T)(rtb_SFunction_o1 != 0) << 1) + false) << 1)
                       + rtb_Level2MfileSFunction_f);
    rtB.Logic[0U] = rtConstP.Logic_table[(uint32_T)rowIdx];
    rtB.Logic[1U] = rtConstP.Logic_table[(uint32_T)rowIdx + 8U];

    /* Update for Memory: '<S65>/Memory' */
    rtDWork.Memory_PreviousInput = rtB.Logic[0];
  } else if (rtDWork.Subsystem1_MODE) {
    rtDWork.Subsystem1_MODE = false;
  }

  /* End of DataStoreRead: '<S11>/Data Store Read1' */
  /* End of Outputs for SubSystem: '<S11>/Subsystem1' */

  /* Logic: '<S11>/OR' */
  rtB.OR = (rtb_AND || rtB.Logic[0]);

  /* End of Outputs for S-Function (sfcn_timeout_event_irq): '<S4>/S-Function' */

  /* Outputs for Enabled SubSystem: '<S1>/Message selector' incorporates:
   *  EnablePort: '<S9>/Enable'
   *
   * Block description for '<S1>/Message selector':
   *  Truck 1
   */
  if (canActive) {
    rtDWork.Messageselector_MODE = true;

    /* M-S-Function: '<S16>/Level-2 M-file S-Function' incorporates:
     *  Constant: '<S9>/Constant1'
     *  RelationalOperator: '<S9>/Equal1'
     */
    rtb_Level2MfileSFunction_f = (slotSelected == 2.0);

    /* RelationalOperator: '<S9>/Equal11' incorporates:
     *  Constant: '<S1>/Constant'
     *  Constant: '<S9>/Constant13'
     */
    rtb_Equal = (nodeRole == 1.0);

    /* Logic: '<S9>/AND3' incorporates:
     *  Logic: '<S9>/NOT1'
     */
    AND3 = (rtb_Level2MfileSFunction_f && (!rtb_Equal));

    /* Outputs for Enabled SubSystem: '<S9>/MMBS1_RX' */
    /* Constant: '<S9>/Constant12' */
    MMBS1_RX(AND3, MMBS1_ID, &rtB.MMBS1_RX_j, &rtDWork.MMBS1_RX_j);

    /* End of Outputs for SubSystem: '<S9>/MMBS1_RX' */

    /* Logic: '<S9>/AND2' */
    rtb_AND2 = (rtb_Level2MfileSFunction_f && rtb_Equal);

    /* Outputs for Triggered SubSystem: '<S9>/MMBS1_TX' */
    /* Constant: '<S9>/Constant12' */
    MMBS1_TX(rtb_AND2, MMBS1_ID, &rtPrevZCSigState.MMBS1_TX_a);

    /* End of Outputs for SubSystem: '<S9>/MMBS1_TX' */

    /* RelationalOperator: '<S9>/Equal2' incorporates:
     *  Constant: '<S9>/Constant2'
     */
    rtb_Equal = (slotSelected == 3.0);

    /* M-S-Function: '<S16>/Level-2 M-file S-Function' incorporates:
     *  Constant: '<S1>/Constant'
     *  Constant: '<S9>/Constant15'
     *  RelationalOperator: '<S9>/Equal12'
     */
    rtb_Level2MfileSFunction_f = (nodeRole == 1.0);

    /* Logic: '<S9>/AND5' incorporates:
     *  Logic: '<S9>/NOT2'
     */
    AND5 = (rtb_Equal && (!rtb_Level2MfileSFunction_f));

    /* Outputs for Enabled SubSystem: '<S9>/SSTM1_RX' */
    /* Constant: '<S9>/Constant14' */
    MMBS1_RX(AND5, SSTM1_ID, &rtB.SSTM1_RX, &rtDWork.SSTM1_RX);

    /* End of Outputs for SubSystem: '<S9>/SSTM1_RX' */

    /* Logic: '<S9>/AND4' */
    rtb_AND4 = (rtb_Equal && rtb_Level2MfileSFunction_f);

    /* Outputs for Triggered SubSystem: '<S9>/SSTM1_TX' */
    /* Constant: '<S9>/Constant14' */
    MMBS1_TX(rtb_AND4, SSTM1_ID, &rtPrevZCSigState.SSTM1_TX);

    /* End of Outputs for SubSystem: '<S9>/SSTM1_TX' */

    /* RelationalOperator: '<S9>/Equal' incorporates:
     *  Constant: '<S9>/Constant'
     */
    rtb_Equal = (slotSelected == ((uint8_T)1U));

    /* M-S-Function: '<S16>/Level-2 M-file S-Function' incorporates:
     *  Constant: '<S1>/Constant'
     *  Constant: '<S9>/Constant11'
     *  RelationalOperator: '<S9>/Equal10'
     */
    rtb_Level2MfileSFunction_f = (nodeRole == ((uint8_T)1U));

    /* Logic: '<S9>/AND1' incorporates:
     *  Logic: '<S9>/NOT'
     */
    rtb_AND1 = (rtb_Equal && (!rtb_Level2MfileSFunction_f));

    /* Outputs for Enabled SubSystem: '<S9>/SYNC1_RX' incorporates:
     *  EnablePort: '<S24>/Enable'
     */
    if (rtb_AND1) {
      rtDWork.SYNC1_RX_MODE = true;

      /* M-S-Function: '<S44>/S-Function' incorporates:
       *  Constant: '<S9>/Constant10'
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
        rtb_SFunction_o9_b = canRxData_0_SYNC1_ID.uint8_T_info[7];
      }

      /* Outputs for Enabled SubSystem: '<S44>/Enabled Subsystem' incorporates:
       *  EnablePort: '<S45>/Enable'
       */
      if (rtb_SFunction_o1_h > 0) {
        /* SignalConversion generated from: '<S45>/In1' */
        dataArx = rtb_SFunction_o2_i;

        /* SignalConversion generated from: '<S45>/In2' */
        rtb_In2 = rtb_SFunction_o3_g;

        /* SignalConversion generated from: '<S45>/In3' */
        rtb_In3 = rtb_SFunction_o4_j;

        /* SignalConversion generated from: '<S45>/In4' */
        rtb_In4 = rtb_SFunction_o5_f;

        /* SignalConversion generated from: '<S45>/In5' */
        rtb_In5 = rtb_SFunction_o6_g;

        /* SignalConversion generated from: '<S45>/In6' */
        rtb_In6 = rtb_SFunction_o7_k;

        /* SignalConversion generated from: '<S45>/In7' */
        rtb_In7 = rtb_SFunction_o8_n;

        /* SignalConversion generated from: '<S45>/In8' */
        rtb_In8 = rtb_SFunction_o9_b;
      }

      /* End of Outputs for SubSystem: '<S44>/Enabled Subsystem' */
    } else if (rtDWork.SYNC1_RX_MODE) {
      rtDWork.SYNC1_RX_MODE = false;
    }

    /* End of Outputs for SubSystem: '<S9>/SYNC1_RX' */

    /* RelationalOperator: '<S9>/Equal6' incorporates:
     *  Constant: '<S9>/Constant7'
     */
    rtb_Equal6 = (slotSelected == 6.0);

    /* RelationalOperator: '<S9>/Equal5' incorporates:
     *  Constant: '<S1>/Constant'
     *  Constant: '<S9>/Constant6'
     */
    rtb_Equal5 = (nodeRole == 2.0);

    /* Logic: '<S9>/AND9' incorporates:
     *  Logic: '<S9>/NOT4'
     */
    AND9 = (rtb_Equal6 && (!rtb_Equal5));

    /* Outputs for Enabled SubSystem: '<S9>/SYNC1_RX4' */
    /* Constant: '<S9>/Constant5' */
    MMBS1_RX(AND9, TRCK1_ID2, &rtB.SYNC1_RX4, &rtDWork.SYNC1_RX4);

    /* End of Outputs for SubSystem: '<S9>/SYNC1_RX4' */

    /* RelationalOperator: '<S9>/Equal14' incorporates:
     *  Constant: '<S9>/Constant20'
     */
    rtb_Equal14 = (slotSelected == 7.0);

    /* RelationalOperator: '<S9>/Equal7' incorporates:
     *  Constant: '<S1>/Constant'
     *  Constant: '<S9>/Constant19'
     */
    rtb_Equal7 = (nodeRole == 3.0);

    /* Logic: '<S9>/AND11' incorporates:
     *  Logic: '<S9>/NOT5'
     */
    AND11 = (rtb_Equal14 && (!rtb_Equal7));

    /* Outputs for Enabled SubSystem: '<S9>/SYNC1_RX5' */
    /* Constant: '<S9>/Constant26' */
    MMBS1_RX(AND11, TRCK1_ID3, &rtB.SYNC1_RX5, &rtDWork.SYNC1_RX5);

    /* End of Outputs for SubSystem: '<S9>/SYNC1_RX5' */

    /* RelationalOperator: '<S9>/Equal15' incorporates:
     *  Constant: '<S9>/Constant22'
     */
    rtb_Equal15 = (slotSelected == 8.0);

    /* RelationalOperator: '<S9>/Equal8' incorporates:
     *  Constant: '<S1>/Constant'
     *  Constant: '<S9>/Constant21'
     */
    rtb_Equal8 = (nodeRole == 4.0);

    /* Logic: '<S9>/AND13' incorporates:
     *  Logic: '<S9>/NOT6'
     */
    AND13 = (rtb_Equal15 && (!rtb_Equal8));

    /* Outputs for Enabled SubSystem: '<S9>/SYNC1_RX6' */
    /* Constant: '<S9>/Constant8' */
    MMBS1_RX(AND13, TRLS1_ID4, &rtB.SYNC1_RX6, &rtDWork.SYNC1_RX6);

    /* End of Outputs for SubSystem: '<S9>/SYNC1_RX6' */

    /* RelationalOperator: '<S9>/Equal17' incorporates:
     *  Constant: '<S9>/Constant25'
     */
    rtb_Equal3 = (slotSelected == 9.0);

    /* RelationalOperator: '<S9>/Equal16' incorporates:
     *  Constant: '<S1>/Constant'
     *  Constant: '<S9>/Constant24'
     */
    rtb_Equal13 = (nodeRole == 5.0);

    /* Logic: '<S9>/AND15' incorporates:
     *  Logic: '<S9>/NOT7'
     */
    AND15 = (rtb_Equal3 && (!rtb_Equal13));

    /* Outputs for Enabled SubSystem: '<S9>/SYNC1_RX7' */
    /* Constant: '<S9>/Constant18' */
    MMBS1_RX(AND15, TRLS1_ID5, &rtB.SYNC1_RX7, &rtDWork.SYNC1_RX7);

    /* End of Outputs for SubSystem: '<S9>/SYNC1_RX7' */

    /* Logic: '<S9>/AND' */
    boolCan = (rtb_Equal && rtb_Level2MfileSFunction_f);

    /* Outputs for Triggered SubSystem: '<S9>/SYNC1_TX' incorporates:
     *  TriggerPort: '<S29>/Trigger'
     */
    if (boolCan && (rtPrevZCSigState.SYNC1_TX_Trig_ZCE != POS_ZCSIG)) {
      /* DataStoreRead: '<S29>/Data Store Read1' */
      testCounter = rtDWork.testCount;

      /* Sum: '<S29>/Add' incorporates:
       *  Constant: '<S29>/Constant7'
       *  DataStoreWrite: '<S29>/Data Store Write'
       */
      rtDWork.testCount = (uint16_T)((uint32_T)testCounter + ((uint16_T)1U));

      /* DataStoreRead: '<S29>/Data Store Read' */
      rtB.DataStoreRead = rtDWork.SlotTime;

      /* Update for M-S-Function: '<S54>/S-Function' incorporates:
       *  Constant: '<S29>/Constant'
       *  Constant: '<S29>/Constant1'
       *  Constant: '<S29>/Constant2'
       *  Constant: '<S29>/Constant3'
       *  Constant: '<S29>/Constant4'
       *  Constant: '<S29>/Constant5'
       *  Constant: '<S29>/Constant6'
       *  Constant: '<S9>/Constant10'
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

    /* End of Outputs for SubSystem: '<S9>/SYNC1_TX' */

    /* Logic: '<S9>/AND8' */
    rtb_AND8 = (rtb_Equal6 && rtb_Equal5);

    /* Outputs for Triggered SubSystem: '<S9>/SYNC1_TX4' */
    /* Constant: '<S9>/Constant5' */
    MMBS1_TX(rtb_AND8, TRCK1_ID2, &rtPrevZCSigState.SYNC1_TX4);

    /* End of Outputs for SubSystem: '<S9>/SYNC1_TX4' */

    /* Logic: '<S9>/AND10' */
    rtb_AND10 = (rtb_Equal14 && rtb_Equal7);

    /* Outputs for Triggered SubSystem: '<S9>/SYNC1_TX5' */
    /* Constant: '<S9>/Constant26' */
    MMBS1_TX(rtb_AND10, TRCK1_ID3, &rtPrevZCSigState.SYNC1_TX5);

    /* End of Outputs for SubSystem: '<S9>/SYNC1_TX5' */

    /* Logic: '<S9>/AND12' */
    rtb_AND12 = (rtb_Equal15 && rtb_Equal8);

    /* Outputs for Triggered SubSystem: '<S9>/SYNC1_TX6' */
    /* Constant: '<S9>/Constant8' */
    MMBS1_TX(rtb_AND12, TRLS1_ID4, &rtPrevZCSigState.SYNC1_TX6);

    /* End of Outputs for SubSystem: '<S9>/SYNC1_TX6' */

    /* Logic: '<S9>/AND14' */
    rtb_AND14 = (rtb_Equal3 && rtb_Equal13);

    /* Outputs for Triggered SubSystem: '<S9>/SYNC1_TX7' */
    /* Constant: '<S9>/Constant18' */
    MMBS1_TX(rtb_AND14, TRLS1_ID5, &rtPrevZCSigState.SYNC1_TX7);

    /* End of Outputs for SubSystem: '<S9>/SYNC1_TX7' */

    /* RelationalOperator: '<S9>/Equal13' incorporates:
     *  Constant: '<S9>/Constant17'
     */
    rtb_Equal13 = (slotSelected == 4.0);

    /* RelationalOperator: '<S9>/Equal3' incorporates:
     *  Constant: '<S1>/Constant'
     *  Constant: '<S9>/Constant16'
     */
    rtb_Equal3 = (nodeRole == 1.0);

    /* Logic: '<S9>/AND7' incorporates:
     *  Logic: '<S9>/NOT3'
     */
    AND7 = (rtb_Equal13 && (!rtb_Equal3));

    /* Outputs for Enabled SubSystem: '<S9>/TRCK1_RX' */
    /* Constant: '<S9>/Constant3' */
    MMBS1_RX(AND7, TRCK1_ID1, &rtB.TRCK1_RX, &rtDWork.TRCK1_RX);

    /* End of Outputs for SubSystem: '<S9>/TRCK1_RX' */

    /* Logic: '<S9>/AND6' */
    rtb_AND6 = (rtb_Equal13 && rtb_Equal3);

    /* Outputs for Triggered SubSystem: '<S9>/TRCK1_TX' */
    /* Constant: '<S9>/Constant3' */
    MMBS1_TX(rtb_AND6, TRCK1_ID1, &rtPrevZCSigState.TRCK1_TX);

    /* End of Outputs for SubSystem: '<S9>/TRCK1_TX' */
  } else if (rtDWork.Messageselector_MODE) {
    /* Disable for Enabled SubSystem: '<S9>/MMBS1_RX' */
    if (rtDWork.MMBS1_RX_j.MMBS1_RX_MODE) {
      /* Constant: '<S9>/Constant12' */
      MMBS1_RX_Disable(&rtDWork.MMBS1_RX_j);
    }

    /* End of Disable for SubSystem: '<S9>/MMBS1_RX' */

    /* Disable for Triggered SubSystem: '<S9>/MMBS1_TX' */
    /* Constant: '<S9>/Constant12' */
    /* Disable for Enabled SubSystem: '<S9>/SSTM1_RX' */
    if (rtDWork.SSTM1_RX.MMBS1_RX_MODE) {
      /* Constant: '<S9>/Constant14' */
      MMBS1_RX_Disable(&rtDWork.SSTM1_RX);
    }

    /* End of Disable for SubSystem: '<S9>/SSTM1_RX' */

    /* Disable for Triggered SubSystem: '<S9>/SSTM1_TX' */
    /* Constant: '<S9>/Constant14' */
    /* Disable for Enabled SubSystem: '<S9>/SYNC1_RX' */
    if (rtDWork.SYNC1_RX_MODE) {
      rtDWork.SYNC1_RX_MODE = false;
    }

    /* End of Disable for SubSystem: '<S9>/SYNC1_RX' */

    /* Disable for Enabled SubSystem: '<S9>/SYNC1_RX4' */
    if (rtDWork.SYNC1_RX4.MMBS1_RX_MODE) {
      /* Constant: '<S9>/Constant5' */
      MMBS1_RX_Disable(&rtDWork.SYNC1_RX4);
    }

    /* End of Disable for SubSystem: '<S9>/SYNC1_RX4' */

    /* Disable for Enabled SubSystem: '<S9>/SYNC1_RX5' */
    if (rtDWork.SYNC1_RX5.MMBS1_RX_MODE) {
      /* Constant: '<S9>/Constant26' */
      MMBS1_RX_Disable(&rtDWork.SYNC1_RX5);
    }

    /* End of Disable for SubSystem: '<S9>/SYNC1_RX5' */

    /* Disable for Enabled SubSystem: '<S9>/SYNC1_RX6' */
    if (rtDWork.SYNC1_RX6.MMBS1_RX_MODE) {
      /* Constant: '<S9>/Constant8' */
      MMBS1_RX_Disable(&rtDWork.SYNC1_RX6);
    }

    /* End of Disable for SubSystem: '<S9>/SYNC1_RX6' */

    /* Disable for Enabled SubSystem: '<S9>/SYNC1_RX7' */
    if (rtDWork.SYNC1_RX7.MMBS1_RX_MODE) {
      /* Constant: '<S9>/Constant18' */
      MMBS1_RX_Disable(&rtDWork.SYNC1_RX7);
    }

    /* End of Disable for SubSystem: '<S9>/SYNC1_RX7' */
    /* Disable for Triggered SubSystem: '<S9>/SYNC1_TX4' */
    /* Constant: '<S9>/Constant5' */
    /* Disable for Triggered SubSystem: '<S9>/SYNC1_TX5' */
    /* Constant: '<S9>/Constant26' */
    /* Disable for Triggered SubSystem: '<S9>/SYNC1_TX6' */
    /* Constant: '<S9>/Constant8' */
    /* Disable for Triggered SubSystem: '<S9>/SYNC1_TX7' */
    /* Constant: '<S9>/Constant18' */
    /* Disable for Enabled SubSystem: '<S9>/TRCK1_RX' */
    if (rtDWork.TRCK1_RX.MMBS1_RX_MODE) {
      /* Constant: '<S9>/Constant3' */
      MMBS1_RX_Disable(&rtDWork.TRCK1_RX);
    }

    /* End of Disable for SubSystem: '<S9>/TRCK1_RX' */

    /* Disable for Triggered SubSystem: '<S9>/TRCK1_TX' */
    /* Constant: '<S9>/Constant3' */
    rtDWork.Messageselector_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S1>/Message selector' */

  /* Outputs for Triggered SubSystem: '<S11>/Subsystem' incorporates:
   *  TriggerPort: '<S62>/Trigger'
   */
  if (rtb_AND && (rtPrevZCSigState.Subsystem_Trig_ZCE != POS_ZCSIG)) {
    /* DataStoreWrite: '<S62>/Data Store Write1' incorporates:
     *  Constant: '<S62>/Constant1'
     */
    rtDWork.Local_Ticks = ((uint16_T)0U);

    /* DataStoreWrite: '<S62>/Data Store Write' incorporates:
     *  Constant: '<S62>/Constant3'
     */
    rtDWork.SlotTime = slotTime;
  }

  rtPrevZCSigState.Subsystem_Trig_ZCE = rtb_AND;

  /* End of Outputs for SubSystem: '<S11>/Subsystem' */

  /* M-S-Function: '<S15>/Level-2 M-file S-Function' */
  /* read from digital input */
  rtb_Level2MfileSFunction_f = DiginGet(DIGIN_PORTE_PIN2);

  /* DataTypeConversion: '<S7>/Cast1' */
  roleB = rtb_Level2MfileSFunction_f;

  /* DataStoreWrite: '<S1>/Data Store Write' */
  rtDWork.RoleB = roleB;

  /* M-S-Function: '<S16>/Level-2 M-file S-Function' */
  /* read from digital input */
  rtb_Level2MfileSFunction_f = DiginGet(DIGIN_PORTE_PIN4);

  /* DataTypeConversion: '<S7>/Cast' */
  roleA = rtb_Level2MfileSFunction_f;

  /* DataStoreWrite: '<S1>/Data Store Write1' */
  rtDWork.RoleA = roleA;

  /* Constant: '<S2>/SampleTimeCrowBar' */
  rtb_SampleTimeCrowBar = true;

  /* M-S-Function: '<S68>/Level-2 M-file S-Function' */
  /* read the current CPU load */
  SI_CPUload = OsGetCpuLoad();

  /* M-S-Function: '<S69>/Level-2 M-file S-Function' */
  /* read the free heap size */
  SI_FreeHeap = OsGetFreeHeapSize();

  /* M-S-Function: '<S70>/Level-2 M-file S-Function' */
  /* read the task's free stack size */
  SI_FreeStack = OsGetTaskFreeStackSize("AppCtrlTask");
}

/* Model initialize function */
void HANcoder_E407_TTA_Chris_initialize(void)
{
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

    /* Start for Enabled SubSystem: '<S11>/Subsystem1' */
    /* Start for M-S-Function: '<S64>/S-Function' incorporates:
     *  Constant: '<S63>/Constant1'
     */

    /* register a CAN storage buffer for the message with this ID */
    CanIoCreateMessageReceivedStorage(0, SYNC1_ID);

    /* End of Start for SubSystem: '<S11>/Subsystem1' */

    /* register the callback handler */
    TimeoutRegisterCompareEventCallback(TIMEOUT_TIM4_PIN_PD12,
      TimeoutEventIRQ_TIMEOUT_TIM4_PIN_PD12);

    /* End of Start for S-Function (sfcn_timeout_event_irq): '<S4>/S-Function' */

    /* Start for Enabled SubSystem: '<S1>/Message selector'
     *
     * Block description for '<S1>/Message selector':
     *  Truck 1
     */
    /* Start for Enabled SubSystem: '<S9>/MMBS1_RX' */
    /* Constant: '<S9>/Constant12' */
    MMBS1_RX_Start(MMBS1_ID);

    /* End of Start for SubSystem: '<S9>/MMBS1_RX' */

    /* Start for Enabled SubSystem: '<S9>/SSTM1_RX' */
    /* Constant: '<S9>/Constant14' */
    MMBS1_RX_Start(SSTM1_ID);

    /* End of Start for SubSystem: '<S9>/SSTM1_RX' */

    /* Start for Enabled SubSystem: '<S9>/SYNC1_RX' */
    /* Start for M-S-Function: '<S44>/S-Function' incorporates:
     *  Constant: '<S9>/Constant10'
     */

    /* register a CAN storage buffer for the message with this ID */
    CanIoCreateMessageReceivedStorage(0, SYNC1_ID);

    /* End of Start for SubSystem: '<S9>/SYNC1_RX' */

    /* Start for Enabled SubSystem: '<S9>/SYNC1_RX4' */
    /* Constant: '<S9>/Constant5' */
    MMBS1_RX_Start(TRCK1_ID2);

    /* End of Start for SubSystem: '<S9>/SYNC1_RX4' */

    /* Start for Enabled SubSystem: '<S9>/SYNC1_RX5' */
    /* Constant: '<S9>/Constant26' */
    MMBS1_RX_Start(TRCK1_ID3);

    /* End of Start for SubSystem: '<S9>/SYNC1_RX5' */

    /* Start for Enabled SubSystem: '<S9>/SYNC1_RX6' */
    /* Constant: '<S9>/Constant8' */
    MMBS1_RX_Start(TRLS1_ID4);

    /* End of Start for SubSystem: '<S9>/SYNC1_RX6' */

    /* Start for Enabled SubSystem: '<S9>/SYNC1_RX7' */
    /* Constant: '<S9>/Constant18' */
    MMBS1_RX_Start(TRLS1_ID5);

    /* End of Start for SubSystem: '<S9>/SYNC1_RX7' */

    /* Start for Enabled SubSystem: '<S9>/TRCK1_RX' */
    /* Constant: '<S9>/Constant3' */
    MMBS1_RX_Start(TRCK1_ID1);

    /* End of Start for SubSystem: '<S9>/TRCK1_RX' */
    /* End of Start for SubSystem: '<S1>/Message selector' */

    /* Start for M-S-Function: '<S15>/Level-2 M-file S-Function' */

    /* configure the digital input */
    DiginConfigure(DIGIN_PORTE_PIN2, DIGIN_CFG_PULLDOWN);

    /* Start for M-S-Function: '<S16>/Level-2 M-file S-Function' */

    /* configure the digital input */
    DiginConfigure(DIGIN_PORTE_PIN4, DIGIN_CFG_PULLDOWN);

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

    /* Start for S-Function (sfcn_timeout_init): '<S10>/S-Function' */

    /* register the free running counter overflow callback handler */
    TimeoutRegisterOverflowCallback(TIMEOUT_MODULE_TIM4,
      TimeoutOverflowIRQ_TIMEOUT_MODULE_TIM4);

    /* Start for M-S-Function: '<S13>/Level-2 M-file S-Function' */

    /* initialize the measurement and calibration interface */
    MacUsbComInit();
    MacInit();
  }

  rtPrevZCSigState.EnabledSubsystem_Trig_ZCE = POS_ZCSIG;
  rtPrevZCSigState.SYNC1_TX_Trig_ZCE = POS_ZCSIG;
  rtPrevZCSigState.Subsystem_Trig_ZCE = POS_ZCSIG;
  rtPrevZCSigState.TriggeredSubsystem_Trig_ZCE = POS_ZCSIG;
  rtPrevZCSigState.TRCK1_TX.MMBS1_TX_Trig_ZCE = POS_ZCSIG;
  rtPrevZCSigState.SYNC1_TX7.MMBS1_TX_Trig_ZCE = POS_ZCSIG;
  rtPrevZCSigState.SYNC1_TX6.MMBS1_TX_Trig_ZCE = POS_ZCSIG;
  rtPrevZCSigState.SYNC1_TX5.MMBS1_TX_Trig_ZCE = POS_ZCSIG;
  rtPrevZCSigState.SYNC1_TX4.MMBS1_TX_Trig_ZCE = POS_ZCSIG;
  rtPrevZCSigState.SSTM1_TX.MMBS1_TX_Trig_ZCE = POS_ZCSIG;
  rtPrevZCSigState.MMBS1_TX_a.MMBS1_TX_Trig_ZCE = POS_ZCSIG;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
