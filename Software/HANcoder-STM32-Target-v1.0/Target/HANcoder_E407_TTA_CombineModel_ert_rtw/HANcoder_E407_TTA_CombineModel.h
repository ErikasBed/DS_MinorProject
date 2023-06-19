/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_TTA_CombineModel.h
 *
 * Code generated for Simulink model 'HANcoder_E407_TTA_CombineModel'.
 *
 * Model version                  : 17.32
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Thu Jun 15 16:05:00 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_HANcoder_E407_TTA_CombineModel_h_
#define RTW_HEADER_HANcoder_E407_TTA_CombineModel_h_
#ifndef HANcoder_E407_TTA_CombineModel_COMMON_INCLUDES_
#define HANcoder_E407_TTA_CombineModel_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "timeout.h"
#include "anin.h"
#include "quadencoder.h"
#include "digout.h"
#include "pwmout.h"
#include "canio.h"
#include "can.h"
#include "timein.h"
#include "digin.h"
#include "app.h"
#include "SYS_config.h"
#include "os.h"
#include "mac.h"
#endif                     /* HANcoder_E407_TTA_CombineModel_COMMON_INCLUDES_ */

#include "HANcoder_E407_TTA_CombineModel_types.h"
#include "rt_i32zcfcn.h"
#include "zero_crossing_types.h"
#define HANcoder_E407_TTA_CombineModel_M (rtM)

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

/* Block signals for system '<S78>/Moving Average' */
typedef struct {
  real32_T MovingAverage_n;            /* '<S78>/Moving Average' */
} rtB_MovingAverage;

/* Block states (default storage) for system '<S78>/Moving Average' */
typedef struct {
  dsp_simulink_MovingAverage obj;      /* '<S78>/Moving Average' */
  boolean_T objisempty;                /* '<S78>/Moving Average' */
} rtDW_MovingAverage;

/* Block signals for system '<S118>/Enabled Subsystem' */
typedef struct {
  uint8_T In1;                         /* '<S119>/In1' */
  uint8_T In2;                         /* '<S119>/In2' */
  uint8_T In3;                         /* '<S119>/In3' */
  uint8_T In4;                         /* '<S119>/In4' */
  uint8_T In7;                         /* '<S119>/In7' */
} rtB_EnabledSubsystem;

/* Zero-crossing (trigger) state for system '<S13>/MMBS1_TX' */
typedef struct {
  ZCSigState MMBS1_TX_Trig_ZCE;        /* '<S13>/MMBS1_TX' */
} rtZCE_MMBS1_TX;

/* Block signals for system '<S128>/Bit Shift' */
typedef struct {
  uint16_T y;                          /* '<S132>/bit_shift' */
} rtB_BitShift;

/* Block signals for system '<S131>/Bit Shift' */
typedef struct {
  uint8_T y;                           /* '<S137>/bit_shift' */
} rtB_BitShift_l;

/* Block signals for system '<S131>/Bit Shift1' */
typedef struct {
  uint8_T y;                           /* '<S138>/bit_shift' */
} rtB_BitShift1;

/* Block signals for system '<S131>/Bit Shift2' */
typedef struct {
  uint8_T y;                           /* '<S139>/bit_shift' */
} rtB_BitShift2;

/* Block signals for system '<S131>/Bit Shift3' */
typedef struct {
  uint8_T y;                           /* '<S140>/bit_shift' */
} rtB_BitShift3;

/* Block signals for system '<S131>/Bit Shift4' */
typedef struct {
  uint8_T y;                           /* '<S141>/bit_shift' */
} rtB_BitShift4;

/* Block signals for system '<S131>/Bit Shift5' */
typedef struct {
  uint8_T y;                           /* '<S142>/bit_shift' */
} rtB_BitShift5;

/* Block signals for system '<S131>/Bit Shift6' */
typedef struct {
  uint8_T y;                           /* '<S143>/bit_shift' */
} rtB_BitShift6;

/* Block signals for system '<S154>/Bit Shift' */
typedef struct {
  uint8_T y;                           /* '<S157>/bit_shift' */
} rtB_BitShift_o;

/* Block signals for system '<S154>/Bit Shift1' */
typedef struct {
  uint8_T y;                           /* '<S158>/bit_shift' */
} rtB_BitShift1_j;

/* Block signals for system '<S154>/Bit Shift2' */
typedef struct {
  uint8_T y;                           /* '<S159>/bit_shift' */
} rtB_BitShift2_e;

/* Block signals for system '<S154>/Bit Shift3' */
typedef struct {
  uint8_T y;                           /* '<S160>/bit_shift' */
} rtB_BitShift3_g;

/* Block signals for system '<S154>/Bit Shift4' */
typedef struct {
  uint8_T y;                           /* '<S161>/bit_shift' */
} rtB_BitShift4_g;

/* Block signals for system '<S154>/Bit Shift5' */
typedef struct {
  uint8_T y;                           /* '<S162>/bit_shift' */
} rtB_BitShift5_e;

/* Block signals for system '<S154>/Bit Shift6' */
typedef struct {
  uint8_T y;                           /* '<S163>/bit_shift' */
} rtB_BitShift6_b;

/* Block signals for system '<S155>/Bit Shift' */
typedef struct {
  uint16_T y;                          /* '<S171>/bit_shift' */
} rtB_BitShift_c;

/* Block signals for system '<S13>/TRCK1_ID2_TX' */
typedef struct {
  uint8_T DataStoreRead2;              /* '<S109>/Data Store Read2' */
  uint8_T Add;                         /* '<S154>/Add' */
  uint8_T Cast;                        /* '<S155>/Cast' */
  uint8_T Cast1;                       /* '<S155>/Cast1' */
  uint8_T Cast_k;                      /* '<S156>/Cast' */
  uint8_T Cast1_i;                     /* '<S156>/Cast1' */
  rtB_BitShift_c BitShift_h;           /* '<S156>/Bit Shift' */
  rtB_BitShift_c BitShift_of;          /* '<S155>/Bit Shift' */
  rtB_BitShift6_b BitShift6_dc;        /* '<S154>/Bit Shift6' */
  rtB_BitShift5_e BitShift5_nr;        /* '<S154>/Bit Shift5' */
  rtB_BitShift4_g BitShift4_g2;        /* '<S154>/Bit Shift4' */
  rtB_BitShift3_g BitShift3_lh;        /* '<S154>/Bit Shift3' */
  rtB_BitShift2_e BitShift2_pw;        /* '<S154>/Bit Shift2' */
  rtB_BitShift1_j BitShift1_b0;        /* '<S154>/Bit Shift1' */
  rtB_BitShift_o BitShift_gyk;         /* '<S154>/Bit Shift' */
} rtB_TRCK1_ID2_TX;

/* Zero-crossing (trigger) state for system '<S13>/TRCK1_ID2_TX' */
typedef struct {
  ZCSigState TRCK1_ID2_TX_Trig_ZCE;    /* '<S13>/TRCK1_ID2_TX' */
} rtZCE_TRCK1_ID2_TX;

/* Block signals (default storage) */
typedef struct {
  uint16_T Switch;                     /* '<S79>/Switch' */
  uint16_T Sum;                        /* '<S12>/Sum' */
  uint8_T DataStoreRead3;              /* '<S117>/Data Store Read3' */
  uint8_T Add;                         /* '<S342>/Add' */
  uint8_T Cast;                        /* '<S343>/Cast' */
  uint8_T Cast1;                       /* '<S343>/Cast1' */
  uint8_T Cast_f;                      /* '<S344>/Cast' */
  uint8_T Cast1_m;                     /* '<S344>/Cast1' */
  uint8_T DataStoreRead2;              /* '<S115>/Data Store Read2' */
  uint8_T Add_f;                       /* '<S295>/Add' */
  uint8_T Cast_d;                      /* '<S296>/Cast' */
  uint8_T Cast1_c;                     /* '<S296>/Cast1' */
  uint8_T Cast_n;                      /* '<S297>/Cast' */
  uint8_T Cast1_i;                     /* '<S297>/Cast1' */
  uint8_T DataStoreRead2_h;            /* '<S112>/Data Store Read2' */
  uint8_T Add_j;                       /* '<S223>/Add' */
  uint8_T Cast_p;                      /* '<S224>/Cast' */
  uint8_T Cast1_b;                     /* '<S224>/Cast1' */
  uint8_T Cast_a;                      /* '<S225>/Cast' */
  uint8_T Cast1_n;                     /* '<S225>/Cast1' */
  uint8_T DataStoreRead;               /* '<S107>/Data Store Read' */
  boolean_T OR;                        /* '<S15>/OR' */
  boolean_T DataTypeConversion;        /* '<S81>/Data Type Conversion' */
  boolean_T Switch1;                   /* '<S79>/Switch1' */
  boolean_T Switch2;                   /* '<S79>/Switch2' */
  boolean_T NotEqual;                  /* '<S79>/NotEqual' */
  rtB_EnabledSubsystem EnabledSubsystem_i;/* '<S365>/Enabled Subsystem' */
  rtB_BitShift_c BitShift_gul;         /* '<S344>/Bit Shift' */
  rtB_BitShift_c BitShift_g3;          /* '<S343>/Bit Shift' */
  rtB_BitShift6_b BitShift6_ab;        /* '<S342>/Bit Shift6' */
  rtB_BitShift5_e BitShift5_nm;        /* '<S342>/Bit Shift5' */
  rtB_BitShift4_g BitShift4_ew;        /* '<S342>/Bit Shift4' */
  rtB_BitShift3_g BitShift3_a;         /* '<S342>/Bit Shift3' */
  rtB_BitShift2_e BitShift2_f;         /* '<S342>/Bit Shift2' */
  rtB_BitShift1_j BitShift1_n4;        /* '<S342>/Bit Shift1' */
  rtB_BitShift_o BitShift_a0;          /* '<S342>/Bit Shift' */
  rtB_BitShift_l BitShift7_ms;         /* '<S319>/Bit Shift7' */
  rtB_BitShift6 BitShift6_a;           /* '<S319>/Bit Shift6' */
  rtB_BitShift5 BitShift5_ni;          /* '<S319>/Bit Shift5' */
  rtB_BitShift4 BitShift4_o;           /* '<S319>/Bit Shift4' */
  rtB_BitShift3 BitShift3_dx;          /* '<S319>/Bit Shift3' */
  rtB_BitShift2 BitShift2_d;           /* '<S319>/Bit Shift2' */
  rtB_BitShift1 BitShift1_au;          /* '<S319>/Bit Shift1' */
  rtB_BitShift_l BitShift_dp;          /* '<S319>/Bit Shift' */
  rtB_EnabledSubsystem EnabledSubsystem_e;/* '<S318>/Enabled Subsystem' */
  rtB_BitShift BitShift_jx;            /* '<S317>/Bit Shift' */
  rtB_BitShift BitShift_a;             /* '<S316>/Bit Shift' */
  rtB_BitShift_c BitShift_d;           /* '<S297>/Bit Shift' */
  rtB_BitShift_c BitShift_h;           /* '<S296>/Bit Shift' */
  rtB_BitShift6_b BitShift6_k;         /* '<S295>/Bit Shift6' */
  rtB_BitShift5_e BitShift5_og;        /* '<S295>/Bit Shift5' */
  rtB_BitShift4_g BitShift4_c;         /* '<S295>/Bit Shift4' */
  rtB_BitShift3_g BitShift3_m;         /* '<S295>/Bit Shift3' */
  rtB_BitShift2_e BitShift2_l4;        /* '<S295>/Bit Shift2' */
  rtB_BitShift1_j BitShift1_c;         /* '<S295>/Bit Shift1' */
  rtB_BitShift_o BitShift_eg;          /* '<S295>/Bit Shift' */
  rtB_BitShift_l BitShift7_m;          /* '<S272>/Bit Shift7' */
  rtB_BitShift6 BitShift6_o5;          /* '<S272>/Bit Shift6' */
  rtB_BitShift5 BitShift5_o;           /* '<S272>/Bit Shift5' */
  rtB_BitShift4 BitShift4_j;           /* '<S272>/Bit Shift4' */
  rtB_BitShift3 BitShift3_f;           /* '<S272>/Bit Shift3' */
  rtB_BitShift2 BitShift2_l;           /* '<S272>/Bit Shift2' */
  rtB_BitShift1 BitShift1_e;           /* '<S272>/Bit Shift1' */
  rtB_BitShift_l BitShift_l;           /* '<S272>/Bit Shift' */
  rtB_EnabledSubsystem EnabledSubsystem_g;/* '<S271>/Enabled Subsystem' */
  rtB_BitShift BitShift_n;             /* '<S270>/Bit Shift' */
  rtB_BitShift BitShift_gu;            /* '<S269>/Bit Shift' */
  rtB_BitShift_l BitShift7_j;          /* '<S247>/Bit Shift7' */
  rtB_BitShift6 BitShift6_b;           /* '<S247>/Bit Shift6' */
  rtB_BitShift5 BitShift5_c;           /* '<S247>/Bit Shift5' */
  rtB_BitShift4 BitShift4_d;           /* '<S247>/Bit Shift4' */
  rtB_BitShift3 BitShift3_d;           /* '<S247>/Bit Shift3' */
  rtB_BitShift2 BitShift2_cw;          /* '<S247>/Bit Shift2' */
  rtB_BitShift1 BitShift1_a;           /* '<S247>/Bit Shift1' */
  rtB_BitShift_l BitShift_f;           /* '<S247>/Bit Shift' */
  rtB_EnabledSubsystem EnabledSubsystem_bj;/* '<S246>/Enabled Subsystem' */
  rtB_BitShift BitShift_p;             /* '<S245>/Bit Shift' */
  rtB_BitShift BitShift_e;             /* '<S244>/Bit Shift' */
  rtB_BitShift_c BitShift_b;           /* '<S225>/Bit Shift' */
  rtB_BitShift_c BitShift_jy;          /* '<S224>/Bit Shift' */
  rtB_BitShift6_b BitShift6_e;         /* '<S223>/Bit Shift6' */
  rtB_BitShift5_e BitShift5_i;         /* '<S223>/Bit Shift5' */
  rtB_BitShift4_g BitShift4_f;         /* '<S223>/Bit Shift4' */
  rtB_BitShift3_g BitShift3_b;         /* '<S223>/Bit Shift3' */
  rtB_BitShift2_e BitShift2_b;         /* '<S223>/Bit Shift2' */
  rtB_BitShift1_j BitShift1_n;         /* '<S223>/Bit Shift1' */
  rtB_BitShift_o BitShift_gk;          /* '<S223>/Bit Shift' */
  rtB_BitShift_l BitShift7_e;          /* '<S200>/Bit Shift7' */
  rtB_BitShift6 BitShift6_i;           /* '<S200>/Bit Shift6' */
  rtB_BitShift5 BitShift5_bs;          /* '<S200>/Bit Shift5' */
  rtB_BitShift4 BitShift4_a;           /* '<S200>/Bit Shift4' */
  rtB_BitShift3 BitShift3_lj;          /* '<S200>/Bit Shift3' */
  rtB_BitShift2 BitShift2_c;           /* '<S200>/Bit Shift2' */
  rtB_BitShift1 BitShift1_l;           /* '<S200>/Bit Shift1' */
  rtB_BitShift_l BitShift_c;           /* '<S200>/Bit Shift' */
  rtB_EnabledSubsystem EnabledSubsystem_hn;/* '<S199>/Enabled Subsystem' */
  rtB_BitShift BitShift_j;             /* '<S198>/Bit Shift' */
  rtB_BitShift BitShift_k;             /* '<S197>/Bit Shift' */
  rtB_TRCK1_ID2_TX TRCK1_ID3_TX;       /* '<S13>/TRCK1_ID3_TX' */
  rtB_TRCK1_ID2_TX TRCK1_ID2_TX_f;     /* '<S13>/TRCK1_ID2_TX' */
  rtB_BitShift_l BitShift7;            /* '<S131>/Bit Shift7' */
  rtB_BitShift6 BitShift6_o;           /* '<S131>/Bit Shift6' */
  rtB_BitShift5 BitShift5_b;           /* '<S131>/Bit Shift5' */
  rtB_BitShift4 BitShift4_e;           /* '<S131>/Bit Shift4' */
  rtB_BitShift3 BitShift3_c;           /* '<S131>/Bit Shift3' */
  rtB_BitShift2 BitShift2_i;           /* '<S131>/Bit Shift2' */
  rtB_BitShift1 BitShift1_g;           /* '<S131>/Bit Shift1' */
  rtB_BitShift_l BitShift_gy3;         /* '<S131>/Bit Shift' */
  rtB_EnabledSubsystem EnabledSubsystem_b;/* '<S130>/Enabled Subsystem' */
  rtB_BitShift BitShift_gvk;           /* '<S129>/Bit Shift' */
  rtB_BitShift BitShift_gv;            /* '<S128>/Bit Shift' */
  rtB_EnabledSubsystem EnabledSubsystem_c;/* '<S124>/Enabled Subsystem' */
  rtB_EnabledSubsystem EnabledSubsystem_h;/* '<S121>/Enabled Subsystem' */
  rtB_EnabledSubsystem EnabledSubsystem_k;/* '<S118>/Enabled Subsystem' */
  rtB_MovingAverage MovingAverage1;    /* '<S78>/Moving Average' */
  rtB_MovingAverage MovingAverage_p;   /* '<S78>/Moving Average' */
} BlockIO;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  dsp_simulink_MovingAverage obj;      /* '<S80>/Moving Average' */
  real_T DelayInput1_DSTATE;           /* '<S84>/Delay Input1' */
  real_T Integrator_DSTATE;            /* '<S55>/Integrator' */
  real_T setAngle;                     /* '<S1>/Data Store Memory2' */
  real_T amountOfTrailers;             /* '<S1>/Data Store Memory5' */
  real_T systemState;                  /* '<S1>/Data Store Memory6' */
  real_T init_clock;                   /* '<S1>/Data Store Memory18' */
  real_T requestedAngle;               /* '<S1>/Data Store Memory7' */
  int32_T Delay5_DSTATE[7];            /* '<S80>/Delay5' */
  int32_T encoderPosition;             /* '<S1>/Data Store Memory16' */
  uint32_T IOexecution_PREV_T[2];      /* '<S1>/IO execution' */
  uint16_T Delay7_DSTATE[2];           /* '<S80>/Delay7' */
  uint16_T UD_DSTATE;                  /* '<S90>/UD' */
  uint16_T potentiometer1;             /* '<S1>/Data Store Memory1' */
  uint16_T pwmMotor;                   /* '<S1>/Data Store Memory12' */
  uint16_T pot5_1;                     /* '<S1>/Data Store Memory20' */
  uint16_T pot4_1;                     /* '<S1>/Data Store Memory27' */
  uint16_T pot4_2;                     /* '<S1>/Data Store Memory29' */
  uint16_T lastPot1;                   /* '<S1>/Data Store Memory32' */
  uint16_T potentiometer1Raw;          /* '<S1>/Data Store Memory34' */
  uint16_T potentiometer2;             /* '<S1>/Data Store Memory4' */
  uint16_T trailerOneAngle;            /* '<S1>/Data Store Memory8' */
  uint16_T trailerTwoAngle;            /* '<S1>/Data Store Memory9' */
  uint16_T testCount;                  /* '<S107>/Data Store Memory' */
  boolean_T Delay_DSTATE[2];           /* '<S80>/Delay' */
  boolean_T Delay1_DSTATE[9];          /* '<S80>/Delay1' */
  boolean_T Delay2_DSTATE[16];         /* '<S80>/Delay2' */
  boolean_T Delay4_DSTATE[25];         /* '<S80>/Delay4' */
  boolean_T Delay3_DSTATE[35];         /* '<S80>/Delay3' */
  boolean_T Delay6_DSTATE[10];         /* '<S80>/Delay6' */
  uint8_T velocity;                    /* '<S1>/Data Store Memory11' */
  uint8_T Local_Ticks;                 /* '<S1>/Data Store Memory' */
  uint8_T nodeRole;                    /* '<S1>/Data Store Memory10' */
  uint8_T slot;                        /* '<S1>/Data Store Memory15' */
  uint8_T SlotTime;                    /* '<S1>/Data Store Memory3' */
  boolean_T slaveClockOn;              /* '<S15>/Data Store Memory' */
  boolean_T cwMotor;                   /* '<S1>/Data Store Memory13' */
  boolean_T ccwMotor;                  /* '<S1>/Data Store Memory14' */
  boolean_T node4Active;               /* '<S1>/Data Store Memory26' */
  boolean_T node5Active;               /* '<S1>/Data Store Memory28' */
  boolean_T motorFailed;               /* '<S1>/Data Store Memory31' */
  boolean_T potFault;                  /* '<S1>/Data Store Memory33' */
  boolean_T potReadNode4Fail;          /* '<S1>/Data Store Memory37' */
  boolean_T potReadNode5Fail;          /* '<S1>/Data Store Memory38' */
  boolean_T receiveSync;               /* '<S1>/Data Store Memory39' */
  boolean_T node1CanFailed;            /* '<S1>/Data Store Memory40' */
  boolean_T ioInitialized;             /* '<S1>/Data Store Memory41' */
  boolean_T Memory_PreviousInput;      /* '<S91>/Memory' */
  boolean_T Memory_PreviousInput_a;    /* '<S92>/Memory' */
  boolean_T Subsystem2_MODE;           /* '<S15>/Subsystem2' */
  boolean_T Messageselector_MODE;      /* '<S1>/Message selector' */
  boolean_T TRLS_ID5_RX_MODE;          /* '<S13>/TRLS_ID5_RX' */
  boolean_T TRLS_ID4_RX_MODE;          /* '<S13>/TRLS_ID4_RX' */
  boolean_T TRCK_ID3_RX_MODE;          /* '<S13>/TRCK_ID3_RX' */
  boolean_T TRCK1_RX_MODE;             /* '<S13>/TRCK1_RX' */
  boolean_T TRCK1_ID2_RX_MODE;         /* '<S13>/TRCK1_ID2_RX' */
  boolean_T SYNC1_RX_MODE;             /* '<S13>/SYNC1_RX' */
  boolean_T SSTM1_RX_MODE;             /* '<S13>/SSTM1_RX' */
  boolean_T MMBS1_RX_MODE;             /* '<S13>/MMBS1_RX' */
  boolean_T InitializeClockSchedule_MODE;/* '<S1>/Initialize Clock Schedule' */
  rtDW_MovingAverage MovingAverage1;   /* '<S78>/Moving Average' */
  rtDW_MovingAverage MovingAverage_p;  /* '<S78>/Moving Average' */
} D_Work;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState Subsystem1_Trig_ZCE;      /* '<S364>/Subsystem1' */
  ZCSigState Subsystem_Trig_ZCE;       /* '<S15>/Subsystem' */
  ZCSigState TRLS_ID5_TX_Trig_ZCE;     /* '<S13>/TRLS_ID5_TX' */
  ZCSigState TRLS_ID4_TX_Trig_ZCE;     /* '<S13>/TRLS_ID4_TX' */
  ZCSigState TRCK1_TX_Trig_ZCE;        /* '<S13>/TRCK1_TX' */
  rtZCE_TRCK1_ID2_TX TRCK1_ID3_TX;     /* '<S13>/TRCK1_ID3_TX' */
  rtZCE_TRCK1_ID2_TX TRCK1_ID2_TX_f;   /* '<S13>/TRCK1_ID2_TX' */
  ZCSigState SYNC1_TX_Trig_ZCE;        /* '<S13>/SYNC1_TX' */
  ZCSigState Subsystem_Trig_ZCE_h;     /* '<S106>/Subsystem' */
  rtZCE_MMBS1_TX SSTM1_TX;             /* '<S13>/SSTM1_TX' */
  rtZCE_MMBS1_TX MMBS1_TX_a;           /* '<S13>/MMBS1_TX' */
  ZCSigState IOexecution_Trig_ZCE;     /* '<S1>/IO execution' */
  ZCSigState Controlexecution_Trig_ZCE;/* '<S1>/Control execution' */
  ZCSigState EnabledSubsystem_Trig_ZCE;/* '<S12>/Enabled Subsystem' */
} PrevZCSigStates;

/* Invariant block signals for system '<S13>/TRCK1_ID2_TX' */
typedef struct {
  const uint8_T Cast;                  /* '<S154>/Cast' */
  const uint8_T Cast2;                 /* '<S154>/Cast2' */
  const uint8_T Cast3;                 /* '<S154>/Cast3' */
  const uint8_T Cast4;                 /* '<S154>/Cast4' */
  const uint8_T Cast5;                 /* '<S154>/Cast5' */
  const uint8_T Cast6;                 /* '<S154>/Cast6' */
} rtC_TRCK1_ID2_TX;

/* Invariant block signals (default storage) */
typedef struct {
  const real_T signV2;                 /* '<S73>/Sign' */
  const real_T signL0b;                /* '<S73>/Sign1' */
  const real_T Abs;                    /* '<S74>/Abs' */
  const real_T signL0b_o;              /* '<S77>/Sign1' */
  const uint16_T Cast;                 /* '<S79>/Cast' */
  const uint8_T Cast_h;                /* '<S342>/Cast' */
  const uint8_T Cast2;                 /* '<S342>/Cast2' */
  const uint8_T Cast3;                 /* '<S342>/Cast3' */
  const uint8_T Cast4;                 /* '<S342>/Cast4' */
  const uint8_T Cast5;                 /* '<S342>/Cast5' */
  const uint8_T Cast6;                 /* '<S342>/Cast6' */
  const uint8_T Cast7;                 /* '<S342>/Cast7' */
  const uint8_T Cast_j;                /* '<S295>/Cast' */
  const uint8_T Cast2_o;               /* '<S295>/Cast2' */
  const uint8_T Cast3_g;               /* '<S295>/Cast3' */
  const uint8_T Cast4_l;               /* '<S295>/Cast4' */
  const uint8_T Cast5_h;               /* '<S295>/Cast5' */
  const uint8_T Cast6_e;               /* '<S295>/Cast6' */
  const uint8_T Cast7_e;               /* '<S295>/Cast7' */
  const uint8_T Cast_f;                /* '<S223>/Cast' */
  const uint8_T Cast2_i;               /* '<S223>/Cast2' */
  const uint8_T Cast3_k;               /* '<S223>/Cast3' */
  const uint8_T Cast4_b;               /* '<S223>/Cast4' */
  const uint8_T Cast5_k;               /* '<S223>/Cast5' */
  const uint8_T Cast6_i;               /* '<S223>/Cast6' */
  const boolean_T Cast1;               /* '<S79>/Cast1' */
  const boolean_T Cast2_p;             /* '<S79>/Cast2' */
  rtC_TRCK1_ID2_TX TRCK1_ID3_TX;       /* '<S13>/TRCK1_ID3_TX' */
  rtC_TRCK1_ID2_TX TRCK1_ID2_TX_f;     /* '<S13>/TRCK1_ID2_TX' */
} ConstBlockIO;

/* Constant parameters (default storage) */
typedef struct {
  /* Pooled Parameter (Expression: [0 1;1 0;0 1;0 1;1 0;1 0;0 0;0 0])
   * Referenced by:
   *   '<S91>/Logic'
   *   '<S92>/Logic'
   */
  boolean_T pooled23[16];
} ConstParam;

/* Real-time Model Data Structure */
struct tag_RTM {
  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
  } Timing;
};

/* Block signals (default storage) */
extern BlockIO rtB;

/* Block states (default storage) */
extern D_Work rtDWork;

/* Zero-crossing (trigger) state */
extern PrevZCSigStates rtPrevZCSigState;
extern const ConstBlockIO rtConstB;    /* constant block i/o */

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
extern real_T reqAngle;                /* '<S5>/Data Store Read' */
extern real_T Gamma1;                  /* '<S20>/Sum1' */
extern real_T steering;                /* '<S19>/Gain2' */
extern real_T position;                /* '<S19>/Gain1' */
extern real_T control;                 /* '<S19>/Sum' */
extern uint32_T SI_FreeHeap;           /* '<S369>/Level-2 M-file S-Function' */
extern uint32_T SI_FreeStack;          /* '<S370>/Level-2 M-file S-Function' */
extern real32_T derivativeMean;        /* '<S80>/Moving Average' */
extern real32_T delta12K;              /* '<S75>/tan 1' */
extern int32_T motorPos;               /* '<S81>/Level-2 M-file S-Function' */
extern uint16_T pot31;                 /* '<S245>/Add' */
extern uint16_T pot32;                 /* '<S244>/Add' */
extern uint16_T pot11;                 /* '<S198>/Add' */
extern uint16_T pot12;                 /* '<S197>/Add' */
extern uint16_T pot21;                 /* '<S129>/Add' */
extern uint16_T pot22;                 /* '<S128>/Add' */
extern uint16_T testCounter;           /* '<S107>/Data Store Read1' */
extern uint16_T potRaw;                /* '<S80>/Data Store Read5' */
extern uint16_T lastPot;               /* '<S80>/Data Store Read6' */
extern uint16_T derivative;            /* '<S90>/Diff' */
extern uint16_T analogPot1;            /* '<S82>/Level-2 M-file S-Function' */
extern uint16_T pot1;                  /* '<S78>/Cast1' */
extern uint16_T analogPot2;            /* '<S83>/Level-2 M-file S-Function' */
extern uint16_T pot2;                  /* '<S78>/Cast2' */
extern uint16_T t2Angle;               /* '<S5>/Data Store Read2' */
extern uint16_T t1Angle;               /* '<S5>/Data Store Read1' */
extern uint16_T Gamma2;                /* '<S20>/Sum2' */
extern uint16_T mospeed;               /* '<S19>/Add' */
extern uint8_T SI_CPUload;             /* '<S368>/Level-2 M-file S-Function' */
extern uint8_T local_ticks_interrupt;  /* '<S12>/Switch' */
extern uint8_T setSlotTime;            /* '<S12>/Data Store Read3' */
extern uint8_T slotSelected;           /* '<S98>/Switch' */
extern boolean_T boolCan;              /* '<S13>/AND' */
extern boolean_T potFaultDetected;     /* '<S112>/Data Store Read4' */
extern boolean_T masterCanFail;        /* '<S102>/NOT' */
extern boolean_T mf1;                  /* '<S80>/Delay' */
extern boolean_T mf2;                  /* '<S80>/Delay1' */
extern boolean_T mf3;                  /* '<S80>/Delay2' */
extern boolean_T mf4;                  /* '<S80>/Delay4' */
extern boolean_T mf5;                  /* '<S80>/Delay3' */
extern boolean_T motorFaultDetected;   /* '<S80>/AND2' */
extern boolean_T ioInit;               /* '<S78>/Constant' */
extern boolean_T cw;                   /* '<S19>/Cast1' */
extern boolean_T ccw;                  /* '<S19>/NOT' */
extern boolean_T canActive;            /* '<S12>/Clock_State' */

/*
 * Exported Global Parameters
 *
 * Note: Exported global parameters are tunable parameters with an exported
 * global storage class designation.  Code generation will declare the memory for
 * these parameters and exports their symbols.
 *
 */
extern real_T ClockOn;                 /* Variable: ClockOn
                                        * Referenced by: '<S15>/Constant'
                                        */
extern real_T controlWidth;            /* Variable: controlWidth
                                        * Referenced by: '<S19>/Constant'
                                        */
extern real_T desiredAngle;            /* Variable: desiredAngle
                                        * Referenced by: '<S78>/Constant2'
                                        */
extern real_T intVal;                  /* Variable: intVal
                                        * Referenced by: '<S52>/Integral Gain'
                                        */
extern real_T matrixRows;              /* Variable: matrixRows
                                        * Referenced by: '<S98>/Constant1'
                                        */
extern real_T propVal;                 /* Variable: propVal
                                        * Referenced by: '<S60>/Proportional Gain'
                                        */
extern uint32_T MMBS1_ID;              /* Variable: MMBS1_ID
                                        * Referenced by: '<S13>/Constant12'
                                        */
extern uint32_T SSTM1_ID;              /* Variable: SSTM1_ID
                                        * Referenced by: '<S13>/Constant14'
                                        */
extern uint32_T SYNC1_ID;              /* Variable: SYNC1_ID
                                        * Referenced by:
                                        *   '<S13>/Constant10'
                                        *   '<S364>/Constant10'
                                        */
extern uint32_T TRCK1_ID1;             /* Variable: TRCK1_ID1
                                        * Referenced by: '<S13>/Constant3'
                                        */
extern uint32_T TRCK1_ID2;             /* Variable: TRCK1_ID2
                                        * Referenced by: '<S13>/Constant5'
                                        */
extern uint32_T TRCK1_ID3;             /* Variable: TRCK1_ID3
                                        * Referenced by: '<S13>/Constant26'
                                        */
extern uint32_T TRLS1_ID4;             /* Variable: TRLS1_ID4
                                        * Referenced by: '<S13>/Constant8'
                                        */
extern uint32_T TRLS1_ID5;             /* Variable: TRLS1_ID5
                                        * Referenced by: '<S13>/Constant18'
                                        */
extern uint8_T slotTime;               /* Variable: slotTime
                                        * Referenced by: '<S363>/Constant3'
                                        */

/* Model entry point functions */
extern void HANcoder_E407_TTA_CombineModel_initialize(void);
extern void HANcoder_E407_TTA_CombineModel_step(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;

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
 * '<Root>' : 'HANcoder_E407_TTA_CombineModel'
 * '<S1>'   : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm'
 * '<S2>'   : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Base Sample Time config'
 * '<S3>'   : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/CAN config'
 * '<S4>'   : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Compare Event IRQ'
 * '<S5>'   : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution'
 * '<S6>'   : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Custom ID config'
 * '<S7>'   : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Digital Input'
 * '<S8>'   : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Digital Input1'
 * '<S9>'   : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Digital Input2'
 * '<S10>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution'
 * '<S11>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Initialize Clock Schedule'
 * '<S12>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Local Time generation'
 * '<S13>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector'
 * '<S14>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Output Compare Init'
 * '<S15>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Role assignment'
 * '<S16>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Spars Slots'
 * '<S17>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/System information'
 * '<S18>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/XCP on USB config'
 * '<S19>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm'
 * '<S20>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Kinematic Algorithm'
 * '<S21>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1'
 * '<S22>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Anti-windup'
 * '<S23>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/D Gain'
 * '<S24>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Filter'
 * '<S25>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Filter ICs'
 * '<S26>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/I Gain'
 * '<S27>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Ideal P Gain'
 * '<S28>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Ideal P Gain Fdbk'
 * '<S29>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Integrator'
 * '<S30>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Integrator ICs'
 * '<S31>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/N Copy'
 * '<S32>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/N Gain'
 * '<S33>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/P Copy'
 * '<S34>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Parallel P Gain'
 * '<S35>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Reset Signal'
 * '<S36>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Saturation'
 * '<S37>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Saturation Fdbk'
 * '<S38>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Sum'
 * '<S39>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Sum Fdbk'
 * '<S40>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Tracking Mode'
 * '<S41>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Tracking Mode Sum'
 * '<S42>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Tsamp - Integral'
 * '<S43>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Tsamp - Ngain'
 * '<S44>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/postSat Signal'
 * '<S45>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/preSat Signal'
 * '<S46>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Anti-windup/Disc. Clamping Parallel'
 * '<S47>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S48>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S49>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/D Gain/Disabled'
 * '<S50>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Filter/Disabled'
 * '<S51>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Filter ICs/Disabled'
 * '<S52>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/I Gain/Internal Parameters'
 * '<S53>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Ideal P Gain/Passthrough'
 * '<S54>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Ideal P Gain Fdbk/Disabled'
 * '<S55>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Integrator/Discrete'
 * '<S56>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Integrator ICs/Internal IC'
 * '<S57>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/N Copy/Disabled wSignal Specification'
 * '<S58>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/N Gain/Disabled'
 * '<S59>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/P Copy/Disabled'
 * '<S60>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Parallel P Gain/Internal Parameters'
 * '<S61>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Reset Signal/Disabled'
 * '<S62>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Saturation/Enabled'
 * '<S63>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Saturation Fdbk/Disabled'
 * '<S64>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Sum/Sum_PI'
 * '<S65>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Sum Fdbk/Disabled'
 * '<S66>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Tracking Mode/Disabled'
 * '<S67>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S68>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Tsamp - Integral/Passthrough'
 * '<S69>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Tsamp - Ngain/Passthrough'
 * '<S70>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/postSat Signal/Forward_Path'
 * '<S71>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/preSat Signal/Forward_Path'
 * '<S72>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Kinematic Algorithm/1st trailer local velocity'
 * '<S73>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Kinematic Algorithm/1st trailer yew rate'
 * '<S74>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Kinematic Algorithm/2nd Trailer yaw rate'
 * '<S75>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Kinematic Algorithm/Steer angle at steer axle'
 * '<S76>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Kinematic Algorithm/Tractor local velocity'
 * '<S77>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Kinematic Algorithm/Tractor yaw rate'
 * '<S78>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Inputs'
 * '<S79>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Outputs'
 * '<S80>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Voting'
 * '<S81>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Inputs/Quadrature Encoder Get'
 * '<S82>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Inputs/Trailer1 Angle'
 * '<S83>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Inputs/Trailer2 Angle'
 * '<S84>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Inputs/Quadrature Encoder Get/Detect Increase'
 * '<S85>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Outputs/Digital Output'
 * '<S86>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Outputs/Digital Output1'
 * '<S87>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Outputs/Digital Output2'
 * '<S88>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Outputs/PWM Duty Cycle'
 * '<S89>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Outputs/PWM Init'
 * '<S90>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Voting/Discrete Derivative'
 * '<S91>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Voting/S-R Flip-Flop'
 * '<S92>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Voting/S-R Flip-Flop1'
 * '<S93>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Voting/Triggered Subsystem'
 * '<S94>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Voting/Triggered Subsystem1'
 * '<S95>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Voting/Triggered Subsystem2'
 * '<S96>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Voting/Triggered Subsystem3'
 * '<S97>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Initialize Clock Schedule/Schedule Compare Event'
 * '<S98>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Local Time generation/Enabled Subsystem'
 * '<S99>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Local Time generation/Get Last Event Counter'
 * '<S100>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Local Time generation/Schedule Compare Event1'
 * '<S101>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Backup system'
 * '<S102>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/MMBS1_RX'
 * '<S103>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/MMBS1_TX'
 * '<S104>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SSTM1_RX'
 * '<S105>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SSTM1_TX'
 * '<S106>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_RX'
 * '<S107>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_TX'
 * '<S108>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX'
 * '<S109>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX'
 * '<S110>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX'
 * '<S111>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX'
 * '<S112>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX'
 * '<S113>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX'
 * '<S114>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX'
 * '<S115>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX'
 * '<S116>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX'
 * '<S117>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX'
 * '<S118>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/MMBS1_RX/CAN receive1'
 * '<S119>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/MMBS1_RX/CAN receive1/Enabled Subsystem'
 * '<S120>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/MMBS1_TX/CAN send1'
 * '<S121>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SSTM1_RX/CAN receive1'
 * '<S122>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SSTM1_RX/CAN receive1/Enabled Subsystem'
 * '<S123>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SSTM1_TX/CAN send1'
 * '<S124>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_RX/CAN receive1'
 * '<S125>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_RX/Subsystem'
 * '<S126>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_RX/CAN receive1/Enabled Subsystem'
 * '<S127>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_TX/CAN send1'
 * '<S128>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/2bytes2uint1'
 * '<S129>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/2bytes2uint16'
 * '<S130>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/CAN receive1'
 * '<S131>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem'
 * '<S132>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/2bytes2uint1/Bit Shift'
 * '<S133>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/2bytes2uint1/Bit Shift/bit_shift'
 * '<S134>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/2bytes2uint16/Bit Shift'
 * '<S135>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/2bytes2uint16/Bit Shift/bit_shift'
 * '<S136>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/CAN receive1/Enabled Subsystem'
 * '<S137>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift'
 * '<S138>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift1'
 * '<S139>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift2'
 * '<S140>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift3'
 * '<S141>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift4'
 * '<S142>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift5'
 * '<S143>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift6'
 * '<S144>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift7'
 * '<S145>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift/bit_shift'
 * '<S146>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift1/bit_shift'
 * '<S147>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift2/bit_shift'
 * '<S148>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift3/bit_shift'
 * '<S149>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift4/bit_shift'
 * '<S150>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift5/bit_shift'
 * '<S151>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift6/bit_shift'
 * '<S152>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift7/bit_shift'
 * '<S153>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/CAN send1'
 * '<S154>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack'
 * '<S155>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/uint16to2uint1'
 * '<S156>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/uint16to2uint8'
 * '<S157>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift'
 * '<S158>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift1'
 * '<S159>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift2'
 * '<S160>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift3'
 * '<S161>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift4'
 * '<S162>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift5'
 * '<S163>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift6'
 * '<S164>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift/bit_shift'
 * '<S165>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift1/bit_shift'
 * '<S166>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift2/bit_shift'
 * '<S167>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift3/bit_shift'
 * '<S168>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift4/bit_shift'
 * '<S169>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift5/bit_shift'
 * '<S170>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift6/bit_shift'
 * '<S171>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/uint16to2uint1/Bit Shift'
 * '<S172>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/uint16to2uint1/Bit Shift/bit_shift'
 * '<S173>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/uint16to2uint8/Bit Shift'
 * '<S174>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/uint16to2uint8/Bit Shift/bit_shift'
 * '<S175>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/CAN send1'
 * '<S176>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack'
 * '<S177>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/uint16to2uint1'
 * '<S178>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/uint16to2uint8'
 * '<S179>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift'
 * '<S180>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift1'
 * '<S181>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift2'
 * '<S182>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift3'
 * '<S183>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift4'
 * '<S184>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift5'
 * '<S185>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift6'
 * '<S186>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift/bit_shift'
 * '<S187>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift1/bit_shift'
 * '<S188>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift2/bit_shift'
 * '<S189>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift3/bit_shift'
 * '<S190>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift4/bit_shift'
 * '<S191>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift5/bit_shift'
 * '<S192>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift6/bit_shift'
 * '<S193>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/uint16to2uint1/Bit Shift'
 * '<S194>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/uint16to2uint1/Bit Shift/bit_shift'
 * '<S195>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/uint16to2uint8/Bit Shift'
 * '<S196>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/uint16to2uint8/Bit Shift/bit_shift'
 * '<S197>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/2bytes2uint1'
 * '<S198>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/2bytes2uint16'
 * '<S199>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/CAN receive1'
 * '<S200>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem'
 * '<S201>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/2bytes2uint1/Bit Shift'
 * '<S202>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/2bytes2uint1/Bit Shift/bit_shift'
 * '<S203>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/2bytes2uint16/Bit Shift'
 * '<S204>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/2bytes2uint16/Bit Shift/bit_shift'
 * '<S205>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/CAN receive1/Enabled Subsystem'
 * '<S206>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift'
 * '<S207>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift1'
 * '<S208>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift2'
 * '<S209>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift3'
 * '<S210>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift4'
 * '<S211>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift5'
 * '<S212>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift6'
 * '<S213>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift7'
 * '<S214>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift/bit_shift'
 * '<S215>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift1/bit_shift'
 * '<S216>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift2/bit_shift'
 * '<S217>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift3/bit_shift'
 * '<S218>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift4/bit_shift'
 * '<S219>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift5/bit_shift'
 * '<S220>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift6/bit_shift'
 * '<S221>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift7/bit_shift'
 * '<S222>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/CAN send1'
 * '<S223>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack'
 * '<S224>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/uint16to2uint1'
 * '<S225>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/uint16to2uint8'
 * '<S226>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift'
 * '<S227>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift1'
 * '<S228>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift2'
 * '<S229>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift3'
 * '<S230>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift4'
 * '<S231>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift5'
 * '<S232>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift6'
 * '<S233>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift/bit_shift'
 * '<S234>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift1/bit_shift'
 * '<S235>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift2/bit_shift'
 * '<S236>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift3/bit_shift'
 * '<S237>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift4/bit_shift'
 * '<S238>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift5/bit_shift'
 * '<S239>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift6/bit_shift'
 * '<S240>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/uint16to2uint1/Bit Shift'
 * '<S241>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/uint16to2uint1/Bit Shift/bit_shift'
 * '<S242>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/uint16to2uint8/Bit Shift'
 * '<S243>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/uint16to2uint8/Bit Shift/bit_shift'
 * '<S244>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/2bytes2uint1'
 * '<S245>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/2bytes2uint16'
 * '<S246>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/CAN receive1'
 * '<S247>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem'
 * '<S248>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/2bytes2uint1/Bit Shift'
 * '<S249>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/2bytes2uint1/Bit Shift/bit_shift'
 * '<S250>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/2bytes2uint16/Bit Shift'
 * '<S251>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/2bytes2uint16/Bit Shift/bit_shift'
 * '<S252>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/CAN receive1/Enabled Subsystem'
 * '<S253>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift'
 * '<S254>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift1'
 * '<S255>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift2'
 * '<S256>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift3'
 * '<S257>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift4'
 * '<S258>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift5'
 * '<S259>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift6'
 * '<S260>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift7'
 * '<S261>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift/bit_shift'
 * '<S262>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift1/bit_shift'
 * '<S263>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift2/bit_shift'
 * '<S264>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift3/bit_shift'
 * '<S265>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift4/bit_shift'
 * '<S266>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift5/bit_shift'
 * '<S267>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift6/bit_shift'
 * '<S268>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift7/bit_shift'
 * '<S269>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/2bytes2uint1'
 * '<S270>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/2bytes2uint16'
 * '<S271>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/CAN receive1'
 * '<S272>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem'
 * '<S273>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/2bytes2uint1/Bit Shift'
 * '<S274>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/2bytes2uint1/Bit Shift/bit_shift'
 * '<S275>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/2bytes2uint16/Bit Shift'
 * '<S276>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/2bytes2uint16/Bit Shift/bit_shift'
 * '<S277>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/CAN receive1/Enabled Subsystem'
 * '<S278>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift'
 * '<S279>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift1'
 * '<S280>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift2'
 * '<S281>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift3'
 * '<S282>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift4'
 * '<S283>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift5'
 * '<S284>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift6'
 * '<S285>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift7'
 * '<S286>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift/bit_shift'
 * '<S287>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift1/bit_shift'
 * '<S288>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift2/bit_shift'
 * '<S289>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift3/bit_shift'
 * '<S290>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift4/bit_shift'
 * '<S291>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift5/bit_shift'
 * '<S292>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift6/bit_shift'
 * '<S293>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift7/bit_shift'
 * '<S294>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/CAN send1'
 * '<S295>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack'
 * '<S296>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/uint16to2uint1'
 * '<S297>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/uint16to2uint8'
 * '<S298>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift'
 * '<S299>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift1'
 * '<S300>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift2'
 * '<S301>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift3'
 * '<S302>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift4'
 * '<S303>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift5'
 * '<S304>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift6'
 * '<S305>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift/bit_shift'
 * '<S306>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift1/bit_shift'
 * '<S307>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift2/bit_shift'
 * '<S308>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift3/bit_shift'
 * '<S309>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift4/bit_shift'
 * '<S310>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift5/bit_shift'
 * '<S311>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift6/bit_shift'
 * '<S312>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/uint16to2uint1/Bit Shift'
 * '<S313>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/uint16to2uint1/Bit Shift/bit_shift'
 * '<S314>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/uint16to2uint8/Bit Shift'
 * '<S315>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/uint16to2uint8/Bit Shift/bit_shift'
 * '<S316>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/2bytes2uint1'
 * '<S317>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/2bytes2uint16'
 * '<S318>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/CAN receive1'
 * '<S319>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem'
 * '<S320>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/2bytes2uint1/Bit Shift'
 * '<S321>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/2bytes2uint1/Bit Shift/bit_shift'
 * '<S322>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/2bytes2uint16/Bit Shift'
 * '<S323>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/2bytes2uint16/Bit Shift/bit_shift'
 * '<S324>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/CAN receive1/Enabled Subsystem'
 * '<S325>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift'
 * '<S326>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift1'
 * '<S327>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift2'
 * '<S328>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift3'
 * '<S329>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift4'
 * '<S330>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift5'
 * '<S331>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift6'
 * '<S332>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift7'
 * '<S333>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift/bit_shift'
 * '<S334>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift1/bit_shift'
 * '<S335>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift2/bit_shift'
 * '<S336>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift3/bit_shift'
 * '<S337>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift4/bit_shift'
 * '<S338>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift5/bit_shift'
 * '<S339>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift6/bit_shift'
 * '<S340>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift7/bit_shift'
 * '<S341>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/CAN send1'
 * '<S342>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack'
 * '<S343>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/uint16to2uint1'
 * '<S344>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/uint16to2uint2'
 * '<S345>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift'
 * '<S346>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift1'
 * '<S347>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift2'
 * '<S348>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift3'
 * '<S349>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift4'
 * '<S350>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift5'
 * '<S351>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift6'
 * '<S352>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift/bit_shift'
 * '<S353>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift1/bit_shift'
 * '<S354>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift2/bit_shift'
 * '<S355>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift3/bit_shift'
 * '<S356>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift4/bit_shift'
 * '<S357>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift5/bit_shift'
 * '<S358>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift6/bit_shift'
 * '<S359>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/uint16to2uint1/Bit Shift'
 * '<S360>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/uint16to2uint1/Bit Shift/bit_shift'
 * '<S361>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/uint16to2uint2/Bit Shift'
 * '<S362>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/uint16to2uint2/Bit Shift/bit_shift'
 * '<S363>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Role assignment/Subsystem'
 * '<S364>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Role assignment/Subsystem2'
 * '<S365>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Role assignment/Subsystem2/CAN receive1'
 * '<S366>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Role assignment/Subsystem2/Subsystem1'
 * '<S367>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Role assignment/Subsystem2/CAN receive1/Enabled Subsystem'
 * '<S368>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/System information/Get CPU load'
 * '<S369>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/System information/Get free Heap'
 * '<S370>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/System information/Get free Stack'
 */
#endif                        /* RTW_HEADER_HANcoder_E407_TTA_CombineModel_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
