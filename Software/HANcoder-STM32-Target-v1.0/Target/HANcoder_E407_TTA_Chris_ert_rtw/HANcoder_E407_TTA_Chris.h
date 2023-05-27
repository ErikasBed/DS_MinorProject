/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_TTA_Chris.h
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

#ifndef RTW_HEADER_HANcoder_E407_TTA_Chris_h_
#define RTW_HEADER_HANcoder_E407_TTA_Chris_h_
#ifndef HANcoder_E407_TTA_Chris_COMMON_INCLUDES_
#define HANcoder_E407_TTA_Chris_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "timeout.h"
#include "canio.h"
#include "can.h"
#include "timein.h"
#include "digin.h"
#include "app.h"
#include "SYS_config.h"
#include "os.h"
#include "anin.h"
#include "mac.h"
#endif                            /* HANcoder_E407_TTA_Chris_COMMON_INCLUDES_ */

#include "HANcoder_E407_TTA_Chris_types.h"
#include "zero_crossing_types.h"

typedef union t_can_data_types
{
  /* simulink types (for quick reference) */
  uint8_t uint8_T_info[CAN_MAX_DATA_LEN/sizeof(uint8_t)];
  int8_t int8_T_info[CAN_MAX_DATA_LEN/sizeof(int8_t)];
  uint16_t uint16_T_info[CAN_MAX_DATA_LEN/sizeof(uint16_t)];
  int16_t int16_T_info[CAN_MAX_DATA_LEN/sizeof(uint16_t)];
  uint32_t uint32_T_info[CAN_MAX_DATA_LEN/sizeof(uint32_t)];
  int32_t int32_T_info[CAN_MAX_DATA_LEN/sizeof(int32_t)];
  uint8_t boolean_T_info[CAN_MAX_DATA_LEN/sizeof(uint8_t)];
} __attribute__((packed)) tCanDataTypes;

/* Block signals for system '<S38>/Enabled Subsystem' */
typedef struct {
  uint8_T In1;                         /* '<S39>/In1' */
} rtB_EnabledSubsystem;

/* Block signals for system '<S9>/MMBS1_RX' */
typedef struct {
  rtB_EnabledSubsystem EnabledSubsystem_k;/* '<S38>/Enabled Subsystem' */
} rtB_MMBS1_RX;

/* Block states (default storage) for system '<S9>/MMBS1_RX' */
typedef struct {
  boolean_T MMBS1_RX_MODE;             /* '<S9>/MMBS1_RX' */
} rtDW_MMBS1_RX;

/* Zero-crossing (trigger) state for system '<S9>/MMBS1_TX' */
typedef struct {
  ZCSigState MMBS1_TX_Trig_ZCE;        /* '<S9>/MMBS1_TX' */
} rtZCE_MMBS1_TX;

/* Block signals (default storage) */
typedef struct {
  uint16_T Sum;                        /* '<S8>/Sum' */
  uint8_T DataStoreRead;               /* '<S29>/Data Store Read' */
  boolean_T OR;                        /* '<S11>/OR' */
  boolean_T Logic[2];                  /* '<S65>/Logic' */
  rtB_EnabledSubsystem EnabledSubsystem_e;/* '<S64>/Enabled Subsystem' */
  rtB_MMBS1_RX TRCK1_RX;               /* '<S9>/TRCK1_RX' */
  rtB_MMBS1_RX SYNC1_RX7;              /* '<S9>/SYNC1_RX7' */
  rtB_MMBS1_RX SYNC1_RX6;              /* '<S9>/SYNC1_RX6' */
  rtB_MMBS1_RX SYNC1_RX5;              /* '<S9>/SYNC1_RX5' */
  rtB_MMBS1_RX SYNC1_RX4;              /* '<S9>/SYNC1_RX4' */
  rtB_MMBS1_RX SSTM1_RX;               /* '<S9>/SSTM1_RX' */
  rtB_MMBS1_RX MMBS1_RX_j;             /* '<S9>/MMBS1_RX' */
} BlockIO;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T init_clock;                   /* '<S1>/Data Store Memory18' */
  uint16_T Local_Ticks;                /* '<S1>/Data Store Memory' */
  uint16_T testCount;                  /* '<S29>/Data Store Memory' */
  uint8_T SlotTime;                    /* '<S1>/Data Store Memory3' */
  uint8_T slot;                        /* '<S8>/Data Store Memory' */
  boolean_T Role;                      /* '<S1>/Data Store Memory6' */
  boolean_T RoleA;                     /* '<S1>/Data Store Memory1' */
  boolean_T RoleB;                     /* '<S1>/Data Store Memory2' */
  boolean_T Memory_PreviousInput;      /* '<S65>/Memory' */
  boolean_T Subsystem1_MODE;           /* '<S11>/Subsystem1' */
  boolean_T Messageselector_MODE;      /* '<S1>/Message selector' */
  boolean_T SYNC1_RX_MODE;             /* '<S9>/SYNC1_RX' */
  boolean_T InitializeClockSchedule_MODE;/* '<S1>/Initialize Clock Schedule' */
  rtDW_MMBS1_RX TRCK1_RX;              /* '<S9>/TRCK1_RX' */
  rtDW_MMBS1_RX SYNC1_RX7;             /* '<S9>/SYNC1_RX7' */
  rtDW_MMBS1_RX SYNC1_RX6;             /* '<S9>/SYNC1_RX6' */
  rtDW_MMBS1_RX SYNC1_RX5;             /* '<S9>/SYNC1_RX5' */
  rtDW_MMBS1_RX SYNC1_RX4;             /* '<S9>/SYNC1_RX4' */
  rtDW_MMBS1_RX SSTM1_RX;              /* '<S9>/SSTM1_RX' */
  rtDW_MMBS1_RX MMBS1_RX_j;            /* '<S9>/MMBS1_RX' */
} D_Work;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState TriggeredSubsystem_Trig_ZCE;/* '<S63>/Triggered Subsystem' */
  ZCSigState Subsystem_Trig_ZCE;       /* '<S11>/Subsystem' */
  rtZCE_MMBS1_TX TRCK1_TX;             /* '<S9>/TRCK1_TX' */
  rtZCE_MMBS1_TX SYNC1_TX7;            /* '<S9>/SYNC1_TX7' */
  rtZCE_MMBS1_TX SYNC1_TX6;            /* '<S9>/SYNC1_TX6' */
  rtZCE_MMBS1_TX SYNC1_TX5;            /* '<S9>/SYNC1_TX5' */
  rtZCE_MMBS1_TX SYNC1_TX4;            /* '<S9>/SYNC1_TX4' */
  ZCSigState SYNC1_TX_Trig_ZCE;        /* '<S9>/SYNC1_TX' */
  rtZCE_MMBS1_TX SSTM1_TX;             /* '<S9>/SSTM1_TX' */
  rtZCE_MMBS1_TX MMBS1_TX_a;           /* '<S9>/MMBS1_TX' */
  ZCSigState EnabledSubsystem_Trig_ZCE;/* '<S8>/Enabled Subsystem' */
} PrevZCSigStates;

/* Constant parameters (default storage) */
typedef struct {
  /* Computed Parameter: Logic_table
   * Referenced by: '<S65>/Logic'
   */
  boolean_T Logic_table[16];
} ConstParam;

/* Block signals (default storage) */
extern BlockIO rtB;

/* Block states (default storage) */
extern D_Work rtDWork;

/* Zero-crossing (trigger) state */
extern PrevZCSigStates rtPrevZCSigState;

/* Constant parameters (default storage) */
extern const ConstParam rtConstP;

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern uint32_T SI_FreeHeap;           /* '<S69>/Level-2 M-file S-Function' */
extern uint32_T SI_FreeStack;          /* '<S70>/Level-2 M-file S-Function' */
extern uint16_T testCounter;           /* '<S29>/Data Store Read1' */
extern uint16_T local_ticks_interrupt; /* '<S8>/Switch' */
extern uint8_T SI_CPUload;             /* '<S68>/Level-2 M-file S-Function' */
extern uint8_T dataArx;                /* '<S45>/In1' */
extern uint8_T setSlotTime;            /* '<S8>/Data Store Read3' */
extern uint8_T slotSelected;           /* '<S17>/Switch' */
extern boolean_T roleB;                /* '<S7>/Cast1' */
extern boolean_T roleA;                /* '<S7>/Cast' */
extern boolean_T boolCan;              /* '<S9>/AND' */
extern boolean_T canActive;            /* '<S8>/Clock_State' */

/*
 * Exported Global Parameters
 *
 * Note: Exported global parameters are tunable parameters with an exported
 * global storage class designation.  Code generation will declare the memory for
 * these parameters and exports their symbols.
 *
 */
extern real_T ClockOn;                 /* Variable: ClockOn
                                        * Referenced by: '<S11>/Constant'
                                        */
extern real_T matrixRows;              /* Variable: matrixRows
                                        * Referenced by: '<S17>/Constant1'
                                        */
extern uint32_T MMBS1_ID;              /* Variable: MMBS1_ID
                                        * Referenced by: '<S9>/Constant12'
                                        */
extern uint32_T SSTM1_ID;              /* Variable: SSTM1_ID
                                        * Referenced by: '<S9>/Constant14'
                                        */
extern uint32_T SYNC1_ID;              /* Variable: SYNC1_ID
                                        * Referenced by:
                                        *   '<S9>/Constant10'
                                        *   '<S63>/Constant1'
                                        */
extern uint32_T TRCK1_ID1;             /* Variable: TRCK1_ID1
                                        * Referenced by: '<S9>/Constant3'
                                        */
extern uint32_T TRCK1_ID2;             /* Variable: TRCK1_ID2
                                        * Referenced by: '<S9>/Constant5'
                                        */
extern uint32_T TRCK1_ID3;             /* Variable: TRCK1_ID3
                                        * Referenced by: '<S9>/Constant26'
                                        */
extern uint32_T TRLS1_ID4;             /* Variable: TRLS1_ID4
                                        * Referenced by: '<S9>/Constant8'
                                        */
extern uint32_T TRLS1_ID5;             /* Variable: TRLS1_ID5
                                        * Referenced by: '<S9>/Constant18'
                                        */
extern uint8_T nodeRole;               /* Variable: nodeRole
                                        * Referenced by: '<S1>/Constant'
                                        */
extern uint8_T slotTime;               /* Variable: slotTime
                                        * Referenced by: '<S62>/Constant3'
                                        */

/* Model entry point functions */
extern void HANcoder_E407_TTA_Chris_initialize(void);
extern void HANcoder_E407_TTA_Chris_step(void);

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
 * '<Root>' : 'HANcoder_E407_TTA_Chris'
 * '<S1>'   : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm'
 * '<S2>'   : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Base Sample Time config'
 * '<S3>'   : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/CAN config'
 * '<S4>'   : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Compare Event IRQ'
 * '<S5>'   : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Custom ID config'
 * '<S6>'   : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Initialize Clock Schedule'
 * '<S7>'   : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Inputs'
 * '<S8>'   : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Local Time generation'
 * '<S9>'   : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Message selector'
 * '<S10>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Output Compare Init'
 * '<S11>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Role assignment'
 * '<S12>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/System information'
 * '<S13>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/XCP on USB config'
 * '<S14>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Initialize Clock Schedule/Schedule Compare Event'
 * '<S15>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Inputs/Digital Input'
 * '<S16>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Inputs/Digital Input1'
 * '<S17>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Local Time generation/Enabled Subsystem'
 * '<S18>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Local Time generation/Get Last Event Counter'
 * '<S19>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Local Time generation/Schedule Compare Event1'
 * '<S20>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/MMBS1_RX'
 * '<S21>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/MMBS1_TX'
 * '<S22>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SSTM1_RX'
 * '<S23>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SSTM1_TX'
 * '<S24>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_RX'
 * '<S25>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_RX4'
 * '<S26>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_RX5'
 * '<S27>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_RX6'
 * '<S28>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_RX7'
 * '<S29>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_TX'
 * '<S30>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_TX4'
 * '<S31>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_TX5'
 * '<S32>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_TX6'
 * '<S33>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_TX7'
 * '<S34>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Sparse'
 * '<S35>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Sparse1'
 * '<S36>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX'
 * '<S37>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX'
 * '<S38>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/MMBS1_RX/CAN receive1'
 * '<S39>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/MMBS1_RX/CAN receive1/Enabled Subsystem'
 * '<S40>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/MMBS1_TX/CAN send1'
 * '<S41>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SSTM1_RX/CAN receive1'
 * '<S42>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SSTM1_RX/CAN receive1/Enabled Subsystem'
 * '<S43>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SSTM1_TX/CAN send1'
 * '<S44>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_RX/CAN receive1'
 * '<S45>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_RX/CAN receive1/Enabled Subsystem'
 * '<S46>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_RX4/CAN receive1'
 * '<S47>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_RX4/CAN receive1/Enabled Subsystem'
 * '<S48>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_RX5/CAN receive1'
 * '<S49>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_RX5/CAN receive1/Enabled Subsystem'
 * '<S50>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_RX6/CAN receive1'
 * '<S51>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_RX6/CAN receive1/Enabled Subsystem'
 * '<S52>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_RX7/CAN receive1'
 * '<S53>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_RX7/CAN receive1/Enabled Subsystem'
 * '<S54>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_TX/CAN send1'
 * '<S55>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_TX4/CAN send1'
 * '<S56>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_TX5/CAN send1'
 * '<S57>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_TX6/CAN send1'
 * '<S58>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_TX7/CAN send1'
 * '<S59>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/CAN receive1'
 * '<S60>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/CAN receive1/Enabled Subsystem'
 * '<S61>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/CAN send1'
 * '<S62>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Role assignment/Subsystem'
 * '<S63>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Role assignment/Subsystem1'
 * '<S64>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Role assignment/Subsystem1/CAN receive'
 * '<S65>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Role assignment/Subsystem1/S-R Flip-Flop'
 * '<S66>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Role assignment/Subsystem1/Triggered Subsystem'
 * '<S67>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/Role assignment/Subsystem1/CAN receive/Enabled Subsystem'
 * '<S68>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/System information/Get CPU load'
 * '<S69>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/System information/Get free Heap'
 * '<S70>'  : 'HANcoder_E407_TTA_Chris/HANcoder STM32 Target - E407-STM32 algorithm/System information/Get free Stack'
 */
#endif                               /* RTW_HEADER_HANcoder_E407_TTA_Chris_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
