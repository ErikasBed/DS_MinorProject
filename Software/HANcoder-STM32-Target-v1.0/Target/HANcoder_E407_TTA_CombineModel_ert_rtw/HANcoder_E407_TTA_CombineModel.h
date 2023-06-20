/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_TTA_CombineModel.h
 *
 * Code generated for Simulink model 'HANcoder_E407_TTA_CombineModel'.
 *
 * Model version                  : 17.38
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Tue Jun 20 14:17:31 2023
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
#include "digin.h"
#include "quadencoder.h"
#include "digout.h"
#include "pwmout.h"
#include "canio.h"
#include "can.h"
#include "timein.h"
#include "errorcodes.h"
#include "app.h"
#include "SYS_config.h"
#include "os.h"
#include "mac.h"
#endif                     /* HANcoder_E407_TTA_CombineModel_COMMON_INCLUDES_ */

#include "HANcoder_E407_TTA_CombineModel_types.h"
#include "rt_i32zcfcn.h"
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
  uint8_T In1;                         /* '<S122>/In1' */
  uint8_T In2;                         /* '<S122>/In2' */
  uint8_T In3;                         /* '<S122>/In3' */
  uint8_T In4;                         /* '<S122>/In4' */
  uint8_T In7;                         /* '<S122>/In7' */
} rtB_EnabledSubsystem;

/* Block signals for system '<S131>/Bit Shift' */
typedef struct {
  uint16_T y;                          /* '<S136>/bit_shift' */
} rtB_BitShift;

/* Block signals for system '<S135>/Bit Shift' */
typedef struct {
  uint8_T y;                           /* '<S141>/bit_shift' */
} rtB_BitShift_l;

/* Block signals for system '<S135>/Bit Shift1' */
typedef struct {
  uint8_T y;                           /* '<S142>/bit_shift' */
} rtB_BitShift1;

/* Block signals for system '<S135>/Bit Shift2' */
typedef struct {
  uint8_T y;                           /* '<S143>/bit_shift' */
} rtB_BitShift2;

/* Block signals for system '<S135>/Bit Shift3' */
typedef struct {
  uint8_T y;                           /* '<S144>/bit_shift' */
} rtB_BitShift3;

/* Block signals for system '<S135>/Bit Shift4' */
typedef struct {
  uint8_T y;                           /* '<S145>/bit_shift' */
} rtB_BitShift4;

/* Block signals for system '<S135>/Bit Shift5' */
typedef struct {
  uint8_T y;                           /* '<S146>/bit_shift' */
} rtB_BitShift5;

/* Block signals for system '<S135>/Bit Shift6' */
typedef struct {
  uint8_T y;                           /* '<S147>/bit_shift' */
} rtB_BitShift6;

/* Block signals for system '<S158>/Bit Shift' */
typedef struct {
  uint8_T y;                           /* '<S161>/bit_shift' */
} rtB_BitShift_o;

/* Block signals for system '<S158>/Bit Shift1' */
typedef struct {
  uint8_T y;                           /* '<S162>/bit_shift' */
} rtB_BitShift1_j;

/* Block signals for system '<S158>/Bit Shift2' */
typedef struct {
  uint8_T y;                           /* '<S163>/bit_shift' */
} rtB_BitShift2_e;

/* Block signals for system '<S158>/Bit Shift3' */
typedef struct {
  uint8_T y;                           /* '<S164>/bit_shift' */
} rtB_BitShift3_g;

/* Block signals for system '<S158>/Bit Shift4' */
typedef struct {
  uint8_T y;                           /* '<S165>/bit_shift' */
} rtB_BitShift4_g;

/* Block signals for system '<S158>/Bit Shift5' */
typedef struct {
  uint8_T y;                           /* '<S166>/bit_shift' */
} rtB_BitShift5_e;

/* Block signals for system '<S158>/Bit Shift6' */
typedef struct {
  uint8_T y;                           /* '<S167>/bit_shift' */
} rtB_BitShift6_b;

/* Block signals for system '<S159>/Bit Shift' */
typedef struct {
  uint16_T y;                          /* '<S175>/bit_shift' */
} rtB_BitShift_c;

/* Block signals (default storage) */
typedef struct {
  uint16_T Switch;                     /* '<S79>/Switch' */
  uint16_T Sum;                        /* '<S9>/Sum' */
  uint8_T DataStoreRead3;              /* '<S117>/Data Store Read3' */
  uint8_T DataStoreRead4;              /* '<S117>/Data Store Read4' */
  uint8_T Add;                         /* '<S346>/Add' */
  uint8_T Cast;                        /* '<S347>/Cast' */
  uint8_T Cast1;                       /* '<S347>/Cast1' */
  uint8_T Cast_f;                      /* '<S348>/Cast' */
  uint8_T Cast1_m;                     /* '<S348>/Cast1' */
  uint8_T In1;                         /* '<S328>/In1' */
  uint8_T In2;                         /* '<S328>/In2' */
  uint8_T In3;                         /* '<S328>/In3' */
  uint8_T In7;                         /* '<S328>/In7' */
  uint8_T DataStoreRead2;              /* '<S115>/Data Store Read2' */
  uint8_T DataStoreRead3_c;            /* '<S115>/Data Store Read3' */
  uint8_T Add_f;                       /* '<S299>/Add' */
  uint8_T Cast_d;                      /* '<S300>/Cast' */
  uint8_T Cast1_c;                     /* '<S300>/Cast1' */
  uint8_T Cast_n;                      /* '<S301>/Cast' */
  uint8_T Cast1_i;                     /* '<S301>/Cast1' */
  uint8_T In1_e;                       /* '<S281>/In1' */
  uint8_T In2_e;                       /* '<S281>/In2' */
  uint8_T In3_g;                       /* '<S281>/In3' */
  uint8_T In4_a;                       /* '<S281>/In4' */
  uint8_T In7_g;                       /* '<S281>/In7' */
  uint8_T DataStoreRead2_h;            /* '<S112>/Data Store Read2' */
  uint8_T Add_j;                       /* '<S227>/Add' */
  uint8_T Cast_p;                      /* '<S228>/Cast' */
  uint8_T Cast1_b;                     /* '<S228>/Cast1' */
  uint8_T Cast_a;                      /* '<S229>/Cast' */
  uint8_T Cast1_n;                     /* '<S229>/Cast1' */
  uint8_T DataStoreRead2_l;            /* '<S110>/Data Store Read2' */
  uint8_T Add_jr;                      /* '<S180>/Add' */
  uint8_T Cast_o;                      /* '<S181>/Cast' */
  uint8_T Cast1_nt;                    /* '<S181>/Cast1' */
  uint8_T Cast_j;                      /* '<S182>/Cast' */
  uint8_T Cast1_ig;                    /* '<S182>/Cast1' */
  uint8_T DataStoreRead2_n;            /* '<S109>/Data Store Read2' */
  uint8_T Add_h;                       /* '<S158>/Add' */
  uint8_T Cast_c;                      /* '<S159>/Cast' */
  uint8_T Cast1_ib;                    /* '<S159>/Cast1' */
  uint8_T Cast_k;                      /* '<S160>/Cast' */
  uint8_T Cast1_i0;                    /* '<S160>/Cast1' */
  uint8_T DataStoreRead;               /* '<S107>/Data Store Read' */
  uint8_T DataStoreRead_i;             /* '<S103>/Data Store Read' */
  uint8_T DataStoreRead1;              /* '<S103>/Data Store Read1' */
  uint8_T Add_i;                       /* '<S13>/Add' */
  uint8_T Gain;                        /* '<S381>/Gain' */
  uint8_T Gain_j;                      /* '<S383>/Gain' */
  uint8_T Add1;                        /* '<S379>/Add1' */
  uint8_T Add2;                        /* '<S379>/Add2' */
  uint8_T Gain_n;                      /* '<S380>/Gain' */
  uint8_T Gain_d;                      /* '<S382>/Gain' */
  boolean_T OR;                        /* '<S12>/OR' */
  boolean_T DataTypeConversion;        /* '<S82>/Data Type Conversion' */
  boolean_T NOT;                       /* '<S79>/NOT' */
  boolean_T Switch1;                   /* '<S79>/Switch1' */
  boolean_T Switch2;                   /* '<S79>/Switch2' */
  rtB_EnabledSubsystem EnabledSubsystem_i;/* '<S369>/Enabled Subsystem' */
  rtB_BitShift_c BitShift_gul;         /* '<S348>/Bit Shift' */
  rtB_BitShift_c BitShift_g3;          /* '<S347>/Bit Shift' */
  rtB_BitShift6_b BitShift6_ab;        /* '<S346>/Bit Shift6' */
  rtB_BitShift5_e BitShift5_nm;        /* '<S346>/Bit Shift5' */
  rtB_BitShift4_g BitShift4_ew;        /* '<S346>/Bit Shift4' */
  rtB_BitShift3_g BitShift3_a;         /* '<S346>/Bit Shift3' */
  rtB_BitShift2_e BitShift2_f;         /* '<S346>/Bit Shift2' */
  rtB_BitShift1_j BitShift1_n4;        /* '<S346>/Bit Shift1' */
  rtB_BitShift_o BitShift_a0;          /* '<S346>/Bit Shift' */
  rtB_BitShift_l BitShift7_ms;         /* '<S323>/Bit Shift7' */
  rtB_BitShift6 BitShift6_a5;          /* '<S323>/Bit Shift6' */
  rtB_BitShift5 BitShift5_ni;          /* '<S323>/Bit Shift5' */
  rtB_BitShift4 BitShift4_o;           /* '<S323>/Bit Shift4' */
  rtB_BitShift3 BitShift3_dx;          /* '<S323>/Bit Shift3' */
  rtB_BitShift2 BitShift2_d;           /* '<S323>/Bit Shift2' */
  rtB_BitShift1 BitShift1_au;          /* '<S323>/Bit Shift1' */
  rtB_BitShift_l BitShift_dp;          /* '<S323>/Bit Shift' */
  rtB_BitShift BitShift_jx;            /* '<S321>/Bit Shift' */
  rtB_BitShift BitShift_a;             /* '<S320>/Bit Shift' */
  rtB_BitShift_c BitShift_d;           /* '<S301>/Bit Shift' */
  rtB_BitShift_c BitShift_hr;          /* '<S300>/Bit Shift' */
  rtB_BitShift6_b BitShift6_k;         /* '<S299>/Bit Shift6' */
  rtB_BitShift5_e BitShift5_og;        /* '<S299>/Bit Shift5' */
  rtB_BitShift4_g BitShift4_c;         /* '<S299>/Bit Shift4' */
  rtB_BitShift3_g BitShift3_m;         /* '<S299>/Bit Shift3' */
  rtB_BitShift2_e BitShift2_l4;        /* '<S299>/Bit Shift2' */
  rtB_BitShift1_j BitShift1_c;         /* '<S299>/Bit Shift1' */
  rtB_BitShift_o BitShift_eg;          /* '<S299>/Bit Shift' */
  rtB_BitShift_l BitShift7_m;          /* '<S276>/Bit Shift7' */
  rtB_BitShift6 BitShift6_o5;          /* '<S276>/Bit Shift6' */
  rtB_BitShift5 BitShift5_o;           /* '<S276>/Bit Shift5' */
  rtB_BitShift4 BitShift4_j;           /* '<S276>/Bit Shift4' */
  rtB_BitShift3 BitShift3_f;           /* '<S276>/Bit Shift3' */
  rtB_BitShift2 BitShift2_l;           /* '<S276>/Bit Shift2' */
  rtB_BitShift1 BitShift1_e;           /* '<S276>/Bit Shift1' */
  rtB_BitShift_l BitShift_l;           /* '<S276>/Bit Shift' */
  rtB_BitShift BitShift_n;             /* '<S274>/Bit Shift' */
  rtB_BitShift BitShift_gu;            /* '<S273>/Bit Shift' */
  rtB_BitShift_l BitShift7_j;          /* '<S251>/Bit Shift7' */
  rtB_BitShift6 BitShift6_b;           /* '<S251>/Bit Shift6' */
  rtB_BitShift5 BitShift5_c;           /* '<S251>/Bit Shift5' */
  rtB_BitShift4 BitShift4_d;           /* '<S251>/Bit Shift4' */
  rtB_BitShift3 BitShift3_dg;          /* '<S251>/Bit Shift3' */
  rtB_BitShift2 BitShift2_cw;          /* '<S251>/Bit Shift2' */
  rtB_BitShift1 BitShift1_a;           /* '<S251>/Bit Shift1' */
  rtB_BitShift_l BitShift_f;           /* '<S251>/Bit Shift' */
  rtB_EnabledSubsystem EnabledSubsystem_bj;/* '<S250>/Enabled Subsystem' */
  rtB_BitShift BitShift_pe;            /* '<S249>/Bit Shift' */
  rtB_BitShift BitShift_e3;            /* '<S248>/Bit Shift' */
  rtB_BitShift_c BitShift_b;           /* '<S229>/Bit Shift' */
  rtB_BitShift_c BitShift_jy;          /* '<S228>/Bit Shift' */
  rtB_BitShift6_b BitShift6_e;         /* '<S227>/Bit Shift6' */
  rtB_BitShift5_e BitShift5_i;         /* '<S227>/Bit Shift5' */
  rtB_BitShift4_g BitShift4_f;         /* '<S227>/Bit Shift4' */
  rtB_BitShift3_g BitShift3_b;         /* '<S227>/Bit Shift3' */
  rtB_BitShift2_e BitShift2_b;         /* '<S227>/Bit Shift2' */
  rtB_BitShift1_j BitShift1_n;         /* '<S227>/Bit Shift1' */
  rtB_BitShift_o BitShift_gk;          /* '<S227>/Bit Shift' */
  rtB_BitShift_l BitShift7_e;          /* '<S204>/Bit Shift7' */
  rtB_BitShift6 BitShift6_i;           /* '<S204>/Bit Shift6' */
  rtB_BitShift5 BitShift5_bs;          /* '<S204>/Bit Shift5' */
  rtB_BitShift4 BitShift4_a;           /* '<S204>/Bit Shift4' */
  rtB_BitShift3 BitShift3_lj;          /* '<S204>/Bit Shift3' */
  rtB_BitShift2 BitShift2_c;           /* '<S204>/Bit Shift2' */
  rtB_BitShift1 BitShift1_l;           /* '<S204>/Bit Shift1' */
  rtB_BitShift_l BitShift_c;           /* '<S204>/Bit Shift' */
  rtB_EnabledSubsystem EnabledSubsystem_hn;/* '<S203>/Enabled Subsystem' */
  rtB_BitShift BitShift_j;             /* '<S202>/Bit Shift' */
  rtB_BitShift BitShift_k;             /* '<S201>/Bit Shift' */
  rtB_BitShift_c BitShift_ph;          /* '<S182>/Bit Shift' */
  rtB_BitShift_c BitShift_e;           /* '<S181>/Bit Shift' */
  rtB_BitShift6_b BitShift6_a;         /* '<S180>/Bit Shift6' */
  rtB_BitShift5_e BitShift5_j;         /* '<S180>/Bit Shift5' */
  rtB_BitShift4_g BitShift4_k;         /* '<S180>/Bit Shift4' */
  rtB_BitShift3_g BitShift3_d;         /* '<S180>/Bit Shift3' */
  rtB_BitShift2_e BitShift2_h;         /* '<S180>/Bit Shift2' */
  rtB_BitShift1_j BitShift1_k;         /* '<S180>/Bit Shift1' */
  rtB_BitShift_o BitShift_p;           /* '<S180>/Bit Shift' */
  rtB_BitShift_c BitShift_h;           /* '<S160>/Bit Shift' */
  rtB_BitShift_c BitShift_of;          /* '<S159>/Bit Shift' */
  rtB_BitShift6_b BitShift6_dc;        /* '<S158>/Bit Shift6' */
  rtB_BitShift5_e BitShift5_nr;        /* '<S158>/Bit Shift5' */
  rtB_BitShift4_g BitShift4_g2;        /* '<S158>/Bit Shift4' */
  rtB_BitShift3_g BitShift3_lh;        /* '<S158>/Bit Shift3' */
  rtB_BitShift2_e BitShift2_pw;        /* '<S158>/Bit Shift2' */
  rtB_BitShift1_j BitShift1_b0;        /* '<S158>/Bit Shift1' */
  rtB_BitShift_o BitShift_gyk;         /* '<S158>/Bit Shift' */
  rtB_BitShift_l BitShift7;            /* '<S135>/Bit Shift7' */
  rtB_BitShift6 BitShift6_o;           /* '<S135>/Bit Shift6' */
  rtB_BitShift5 BitShift5_b;           /* '<S135>/Bit Shift5' */
  rtB_BitShift4 BitShift4_e;           /* '<S135>/Bit Shift4' */
  rtB_BitShift3 BitShift3_c;           /* '<S135>/Bit Shift3' */
  rtB_BitShift2 BitShift2_i;           /* '<S135>/Bit Shift2' */
  rtB_BitShift1 BitShift1_g;           /* '<S135>/Bit Shift1' */
  rtB_BitShift_l BitShift_gy3;         /* '<S135>/Bit Shift' */
  rtB_EnabledSubsystem EnabledSubsystem_b;/* '<S133>/Enabled Subsystem' */
  rtB_BitShift BitShift_gvk;           /* '<S132>/Bit Shift' */
  rtB_BitShift BitShift_gv;            /* '<S131>/Bit Shift' */
  rtB_EnabledSubsystem EnabledSubsystem_c;/* '<S127>/Enabled Subsystem' */
  rtB_EnabledSubsystem EnabledSubsystem_h;/* '<S124>/Enabled Subsystem' */
  rtB_EnabledSubsystem EnabledSubsystem_k;/* '<S118>/Enabled Subsystem' */
  rtB_MovingAverage MovingAverage1;    /* '<S78>/Moving Average' */
  rtB_MovingAverage MovingAverage_p;   /* '<S78>/Moving Average' */
} BlockIO;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T DelayInput1_DSTATE;           /* '<S85>/Delay Input1' */
  real_T Integrator_DSTATE;            /* '<S55>/Integrator' */
  real_T setAngle;                     /* '<S1>/Data Store Memory2' */
  real_T systemState;                  /* '<S1>/Data Store Memory6' */
  real_T init_clock;                   /* '<S1>/Data Store Memory18' */
  int32_T Delay5_DSTATE[7];            /* '<S80>/Delay5' */
  int32_T encoderPosition;             /* '<S1>/Data Store Memory16' */
  uint32_T requestedAngle;             /* '<S1>/Data Store Memory7' */
  uint16_T Delay7_DSTATE[2];           /* '<S80>/Delay7' */
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
  boolean_T Delay_DSTATE[20];          /* '<S101>/Delay' */
  boolean_T Delay_DSTATE_m[2];         /* '<S80>/Delay' */
  boolean_T Delay1_DSTATE[9];          /* '<S80>/Delay1' */
  boolean_T Delay2_DSTATE[16];         /* '<S80>/Delay2' */
  boolean_T Delay4_DSTATE[25];         /* '<S80>/Delay4' */
  boolean_T Delay3_DSTATE[35];         /* '<S80>/Delay3' */
  boolean_T Delay6_DSTATE[10];         /* '<S80>/Delay6' */
  int8_T If1_ActiveSubsystem;          /* '<S1>/If1' */
  int8_T If_ActiveSubsystem;           /* '<S1>/If' */
  uint8_T velocity;                    /* '<S1>/Data Store Memory11' */
  uint8_T Board_ID;                    /* '<S1>/Data Store Memory44' */
  uint8_T Local_Ticks;                 /* '<S1>/Data Store Memory' */
  uint8_T buttonPress;                 /* '<S1>/Data Store Memory10' */
  uint8_T slot;                        /* '<S1>/Data Store Memory15' */
  uint8_T SlotTime;                    /* '<S1>/Data Store Memory3' */
  uint8_T PositionID5;                 /* '<S1>/Data Store Memory42' */
  uint8_T PositionID4;                 /* '<S1>/Data Store Memory43' */
  uint8_T trailer2buttonPress;         /* '<S1>/Data Store Memory45' */
  uint8_T trailer1buttonPress;         /* '<S1>/Data Store Memory46' */
  uint8_T missedMessages;              /* '<S1>/Data Store Memory47' */
  uint8_T amountOfTrailers;            /* '<S1>/Data Store Memory5' */
  uint8_T initCounter;                 /* '<S102>/Data Store Memory' */
  boolean_T slaveClockOn;              /* '<S12>/Data Store Memory' */
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
  boolean_T truck2CommActive;          /* '<S1>/Data Store Memory48' */
  boolean_T Memory_PreviousInput;      /* '<S121>/Memory' */
  boolean_T Memory_PreviousInput_g;    /* '<S385>/Memory' */
  boolean_T Memory_PreviousInput_d;    /* '<S384>/Memory' */
  boolean_T Memory_PreviousInput_d1;   /* '<S91>/Memory' */
  boolean_T Memory_PreviousInput_a;    /* '<S92>/Memory' */
  boolean_T Subsystem2_MODE;           /* '<S12>/Subsystem2' */
  boolean_T Messageselector_MODE;      /* '<S1>/Message selector' */
  boolean_T TRLS_ID5_RX_MODE;          /* '<S10>/TRLS_ID5_RX' */
  boolean_T TRLS_ID4_RX_MODE;          /* '<S10>/TRLS_ID4_RX' */
  boolean_T TRCK_ID3_RX_MODE;          /* '<S10>/TRCK_ID3_RX' */
  boolean_T TRCK1_RX_MODE;             /* '<S10>/TRCK1_RX' */
  boolean_T TRCK1_ID2_RX_MODE;         /* '<S10>/TRCK1_ID2_RX' */
  boolean_T SYNC1_RX_MODE;             /* '<S10>/SYNC1_RX' */
  boolean_T SSTM1_RX_MODE;             /* '<S10>/SSTM1_RX' */
  boolean_T MMBS1_RX_MODE;             /* '<S10>/MMBS1_RX' */
  boolean_T InitializeClockSchedule_MODE;/* '<S1>/Initialize Clock Schedule' */
  rtDW_MovingAverage MovingAverage1;   /* '<S78>/Moving Average' */
  rtDW_MovingAverage MovingAverage_p;  /* '<S78>/Moving Average' */
} D_Work;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState Subsystem1_Trig_ZCE;      /* '<S368>/Subsystem1' */
  ZCSigState Subsystem_Trig_ZCE;       /* '<S12>/Subsystem' */
  ZCSigState TRLS_ID5_TX_Trig_ZCE;     /* '<S10>/TRLS_ID5_TX' */
  ZCSigState TRLS_ID4_TX_Trig_ZCE;     /* '<S10>/TRLS_ID4_TX' */
  ZCSigState TRCK1_TX_Trig_ZCE;        /* '<S10>/TRCK1_TX' */
  ZCSigState TRCK1_ID3_TX_Trig_ZCE;    /* '<S10>/TRCK1_ID3_TX' */
  ZCSigState TRCK1_ID2_TX_Trig_ZCE;    /* '<S10>/TRCK1_ID2_TX' */
  ZCSigState SYNC1_TX_Trig_ZCE;        /* '<S10>/SYNC1_TX' */
  ZCSigState Subsystem_Trig_ZCE_h;     /* '<S106>/Subsystem' */
  ZCSigState SSTM1_TX_Trig_ZCE;        /* '<S10>/SSTM1_TX' */
  ZCSigState MMBS1_TX_Trig_ZCE;        /* '<S10>/MMBS1_TX' */
  ZCSigState IOexecution_Trig_ZCE;     /* '<S1>/IO execution' */
  ZCSigState Controlexecution_Trig_ZCE;/* '<S1>/Control execution' */
  ZCSigState EnabledSubsystem_Trig_ZCE;/* '<S9>/Enabled Subsystem' */
} PrevZCSigStates;

/* Invariant block signals (default storage) */
typedef struct {
  const real_T signV2;                 /* '<S73>/Sign' */
  const real_T signL0b;                /* '<S73>/Sign1' */
  const real_T Abs;                    /* '<S74>/Abs' */
  const real_T signL0b_o;              /* '<S77>/Sign1' */
  const uint16_T Cast;                 /* '<S79>/Cast' */
  const uint8_T Cast_h;                /* '<S346>/Cast' */
  const uint8_T Cast2;                 /* '<S346>/Cast2' */
  const uint8_T Cast3;                 /* '<S346>/Cast3' */
  const uint8_T Cast4;                 /* '<S346>/Cast4' */
  const uint8_T Cast5;                 /* '<S346>/Cast5' */
  const uint8_T Cast6;                 /* '<S346>/Cast6' */
  const uint8_T Cast7;                 /* '<S346>/Cast7' */
  const uint8_T Cast_j;                /* '<S299>/Cast' */
  const uint8_T Cast2_o;               /* '<S299>/Cast2' */
  const uint8_T Cast3_g;               /* '<S299>/Cast3' */
  const uint8_T Cast4_l;               /* '<S299>/Cast4' */
  const uint8_T Cast5_h;               /* '<S299>/Cast5' */
  const uint8_T Cast6_e;               /* '<S299>/Cast6' */
  const uint8_T Cast7_e;               /* '<S299>/Cast7' */
  const uint8_T Cast_f;                /* '<S227>/Cast' */
  const uint8_T Cast2_i;               /* '<S227>/Cast2' */
  const uint8_T Cast3_k;               /* '<S227>/Cast3' */
  const uint8_T Cast4_b;               /* '<S227>/Cast4' */
  const uint8_T Cast5_k;               /* '<S227>/Cast5' */
  const uint8_T Cast6_i;               /* '<S227>/Cast6' */
  const uint8_T Cast_e;                /* '<S180>/Cast' */
  const uint8_T Cast2_f;               /* '<S180>/Cast2' */
  const uint8_T Cast3_kx;              /* '<S180>/Cast3' */
  const uint8_T Cast4_d;               /* '<S180>/Cast4' */
  const uint8_T Cast5_a;               /* '<S180>/Cast5' */
  const uint8_T Cast6_a;               /* '<S180>/Cast6' */
  const uint8_T Cast_a;                /* '<S158>/Cast' */
  const uint8_T Cast2_p;               /* '<S158>/Cast2' */
  const uint8_T Cast3_l;               /* '<S158>/Cast3' */
  const uint8_T Cast4_f;               /* '<S158>/Cast4' */
  const uint8_T Cast5_e;               /* '<S158>/Cast5' */
  const uint8_T Cast6_iq;              /* '<S158>/Cast6' */
  const boolean_T Cast1;               /* '<S79>/Cast1' */
  const boolean_T Cast2_pq;            /* '<S79>/Cast2' */
} ConstBlockIO;

/* Constant parameters (default storage) */
typedef struct {
  /* Pooled Parameter (Expression: [0 1;1 0;0 1;0 1;1 0;1 0;0 0;0 0])
   * Referenced by:
   *   '<S91>/Logic'
   *   '<S92>/Logic'
   *   '<S121>/Logic'
   *   '<S384>/Logic'
   *   '<S385>/Logic'
   */
  boolean_T pooled23[16];
} ConstParam;

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
extern real_T Gamma1;                  /* '<S20>/Sum1' */
extern real_T steering;                /* '<S19>/Gain2' */
extern real_T position;                /* '<S19>/Gain1' */
extern real_T control;                 /* '<S19>/Sum' */
extern uint32_T SI_FreeHeap;           /* '<S376>/Level-2 M-file S-Function' */
extern uint32_T SI_FreeStack;          /* '<S377>/Level-2 M-file S-Function' */
extern uint32_T reqAngle;              /* '<S5>/Data Store Read' */
extern real32_T delta12K;              /* '<S75>/tan 1' */
extern int32_T motorPos;               /* '<S82>/Level-2 M-file S-Function' */
extern uint16_T pot31;                 /* '<S249>/Add' */
extern uint16_T pot32;                 /* '<S248>/Add' */
extern uint16_T pot11;                 /* '<S202>/Add' */
extern uint16_T pot12;                 /* '<S201>/Add' */
extern uint16_T pot21;                 /* '<S132>/Add' */
extern uint16_T pot22;                 /* '<S131>/Add' */
extern uint16_T testCounter;           /* '<S107>/Data Store Read1' */
extern uint16_T potRaw;                /* '<S80>/Data Store Read5' */
extern uint16_T lastPot;               /* '<S80>/Data Store Read6' */
extern uint16_T analogPot1;            /* '<S83>/Level-2 M-file S-Function' */
extern uint16_T pot1;                  /* '<S78>/Cast1' */
extern uint16_T analogPot2;            /* '<S84>/Level-2 M-file S-Function' */
extern uint16_T pot2;                  /* '<S78>/Cast2' */
extern uint16_T t2Angle;               /* '<S5>/Data Store Read2' */
extern uint16_T t1Angle;               /* '<S5>/Data Store Read1' */
extern uint16_T Gamma2;                /* '<S20>/Sum2' */
extern uint16_T mospeed;               /* '<S19>/Add' */
extern uint8_T errors;                 /* '<S16>/Level-2 M-file S-Function' */
extern uint8_T SI_CPUload;             /* '<S375>/Level-2 M-file S-Function' */
extern uint8_T buttonpress2;           /* '<S328>/In6' */
extern uint8_T buttonpress1;           /* '<S281>/In6' */
extern uint8_T missedMasterMessages;   /* '<S102>/Data Store Read1' */
extern uint8_T amounttrailers;         /* '<S17>/Add' */
extern uint8_T positionID5;            /* '<S17>/Cast3' */
extern uint8_T positionID4;            /* '<S17>/Cast2' */
extern uint8_T local_ticks_interrupt;  /* '<S9>/Switch' */
extern uint8_T setSlotTime;            /* '<S9>/Data Store Read3' */
extern uint8_T slotSelected;           /* '<S98>/Switch' */
extern boolean_T boolCan;              /* '<S10>/AND' */
extern boolean_T potFaultDetected;     /* '<S112>/Data Store Read4' */
extern boolean_T masterCanFail;        /* '<S102>/GreaterThan' */
extern boolean_T mf1;                  /* '<S80>/Delay' */
extern boolean_T mf2;                  /* '<S80>/Delay1' */
extern boolean_T mf3;                  /* '<S80>/Delay2' */
extern boolean_T mf4;                  /* '<S80>/Delay4' */
extern boolean_T mf5;                  /* '<S80>/Delay3' */
extern boolean_T motorFaultDetected;   /* '<S80>/AND2' */
extern boolean_T ioInit;               /* '<S78>/Constant' */
extern boolean_T cw;                   /* '<S19>/Cast1' */
extern boolean_T ccw;                  /* '<S19>/NOT' */
extern boolean_T canActive;            /* '<S9>/Clock_State' */

/*
 * Exported Global Parameters
 *
 * Note: Exported global parameters are tunable parameters with an exported
 * global storage class designation.  Code generation will declare the memory for
 * these parameters and exports their symbols.
 *
 */
extern real_T ClockOn;                 /* Variable: ClockOn
                                        * Referenced by: '<S12>/Constant'
                                        */
extern real_T ResetPosition;           /* Variable: ResetPosition
                                        * Referenced by: '<S379>/Constant'
                                        */
extern real_T controlWidth;            /* Variable: controlWidth
                                        * Referenced by: '<S19>/Constant'
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
                                        * Referenced by: '<S10>/Constant12'
                                        */
extern uint32_T SSTM1_ID;              /* Variable: SSTM1_ID
                                        * Referenced by: '<S10>/Constant14'
                                        */
extern uint32_T SYNC1_ID;              /* Variable: SYNC1_ID
                                        * Referenced by:
                                        *   '<S10>/Constant10'
                                        *   '<S368>/Constant10'
                                        */
extern uint32_T TRCK1_ID1;             /* Variable: TRCK1_ID1
                                        * Referenced by: '<S10>/Constant3'
                                        */
extern uint32_T TRCK1_ID2;             /* Variable: TRCK1_ID2
                                        * Referenced by: '<S10>/Constant5'
                                        */
extern uint32_T TRCK1_ID3;             /* Variable: TRCK1_ID3
                                        * Referenced by: '<S10>/Constant26'
                                        */
extern uint32_T TRLS1_ID4;             /* Variable: TRLS1_ID4
                                        * Referenced by: '<S10>/Constant8'
                                        */
extern uint32_T TRLS1_ID5;             /* Variable: TRLS1_ID5
                                        * Referenced by: '<S10>/Constant18'
                                        */
extern uint8_T maxMissedMessages;      /* Variable: maxMissedMessages
                                        * Referenced by: '<S102>/Constant1'
                                        */
extern uint8_T slotTime;               /* Variable: slotTime
                                        * Referenced by: '<S367>/Constant3'
                                        */

/* Model entry point functions */
extern void HANcoder_E407_TTA_CombineModel_initialize(void);
extern void HANcoder_E407_TTA_CombineModel_step(void);

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
 * '<S7>'   : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution'
 * '<S8>'   : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Initialize Clock Schedule'
 * '<S9>'   : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Local Time generation'
 * '<S10>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector'
 * '<S11>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Output Compare Init'
 * '<S12>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Role assignment'
 * '<S13>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Setting ID'
 * '<S14>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Spars Slots'
 * '<S15>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/System information'
 * '<S16>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Total Errors'
 * '<S17>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Triggered Subsystem'
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
 * '<S81>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Inputs/Digital Input'
 * '<S82>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Inputs/Quadrature Encoder Get'
 * '<S83>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Inputs/Trailer1 Angle'
 * '<S84>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Inputs/Trailer2 Angle'
 * '<S85>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Inputs/Quadrature Encoder Get/Detect Increase'
 * '<S86>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Outputs/Digital Output'
 * '<S87>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Outputs/Digital Output1'
 * '<S88>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Outputs/Digital Output2'
 * '<S89>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Outputs/PWM Duty Cycle'
 * '<S90>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Outputs/PWM Init'
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
 * '<S119>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/MMBS1_RX/Enabled Subsystem'
 * '<S120>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/MMBS1_RX/Enabled Subsystem1'
 * '<S121>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/MMBS1_RX/S-R Flip-Flop'
 * '<S122>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/MMBS1_RX/CAN receive1/Enabled Subsystem'
 * '<S123>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/MMBS1_TX/CAN send1'
 * '<S124>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SSTM1_RX/CAN receive1'
 * '<S125>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SSTM1_RX/CAN receive1/Enabled Subsystem'
 * '<S126>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SSTM1_TX/CAN send1'
 * '<S127>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_RX/CAN receive1'
 * '<S128>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_RX/Subsystem'
 * '<S129>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_RX/CAN receive1/Enabled Subsystem'
 * '<S130>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_TX/CAN send1'
 * '<S131>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/2bytes2uint1'
 * '<S132>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/2bytes2uint16'
 * '<S133>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/CAN receive1'
 * '<S134>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Enabled Subsystem'
 * '<S135>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem'
 * '<S136>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/2bytes2uint1/Bit Shift'
 * '<S137>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/2bytes2uint1/Bit Shift/bit_shift'
 * '<S138>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/2bytes2uint16/Bit Shift'
 * '<S139>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/2bytes2uint16/Bit Shift/bit_shift'
 * '<S140>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/CAN receive1/Enabled Subsystem'
 * '<S141>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift'
 * '<S142>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift1'
 * '<S143>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift2'
 * '<S144>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift3'
 * '<S145>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift4'
 * '<S146>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift5'
 * '<S147>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift6'
 * '<S148>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift7'
 * '<S149>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift/bit_shift'
 * '<S150>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift1/bit_shift'
 * '<S151>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift2/bit_shift'
 * '<S152>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift3/bit_shift'
 * '<S153>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift4/bit_shift'
 * '<S154>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift5/bit_shift'
 * '<S155>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift6/bit_shift'
 * '<S156>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift7/bit_shift'
 * '<S157>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/CAN send1'
 * '<S158>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack'
 * '<S159>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/uint16to2uint1'
 * '<S160>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/uint16to2uint8'
 * '<S161>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift'
 * '<S162>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift1'
 * '<S163>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift2'
 * '<S164>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift3'
 * '<S165>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift4'
 * '<S166>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift5'
 * '<S167>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift6'
 * '<S168>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift/bit_shift'
 * '<S169>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift1/bit_shift'
 * '<S170>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift2/bit_shift'
 * '<S171>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift3/bit_shift'
 * '<S172>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift4/bit_shift'
 * '<S173>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift5/bit_shift'
 * '<S174>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift6/bit_shift'
 * '<S175>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/uint16to2uint1/Bit Shift'
 * '<S176>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/uint16to2uint1/Bit Shift/bit_shift'
 * '<S177>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/uint16to2uint8/Bit Shift'
 * '<S178>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/uint16to2uint8/Bit Shift/bit_shift'
 * '<S179>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/CAN send1'
 * '<S180>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack'
 * '<S181>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/uint16to2uint1'
 * '<S182>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/uint16to2uint8'
 * '<S183>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift'
 * '<S184>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift1'
 * '<S185>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift2'
 * '<S186>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift3'
 * '<S187>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift4'
 * '<S188>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift5'
 * '<S189>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift6'
 * '<S190>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift/bit_shift'
 * '<S191>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift1/bit_shift'
 * '<S192>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift2/bit_shift'
 * '<S193>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift3/bit_shift'
 * '<S194>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift4/bit_shift'
 * '<S195>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift5/bit_shift'
 * '<S196>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift6/bit_shift'
 * '<S197>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/uint16to2uint1/Bit Shift'
 * '<S198>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/uint16to2uint1/Bit Shift/bit_shift'
 * '<S199>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/uint16to2uint8/Bit Shift'
 * '<S200>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/uint16to2uint8/Bit Shift/bit_shift'
 * '<S201>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/2bytes2uint1'
 * '<S202>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/2bytes2uint16'
 * '<S203>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/CAN receive1'
 * '<S204>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem'
 * '<S205>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/2bytes2uint1/Bit Shift'
 * '<S206>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/2bytes2uint1/Bit Shift/bit_shift'
 * '<S207>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/2bytes2uint16/Bit Shift'
 * '<S208>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/2bytes2uint16/Bit Shift/bit_shift'
 * '<S209>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/CAN receive1/Enabled Subsystem'
 * '<S210>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift'
 * '<S211>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift1'
 * '<S212>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift2'
 * '<S213>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift3'
 * '<S214>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift4'
 * '<S215>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift5'
 * '<S216>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift6'
 * '<S217>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift7'
 * '<S218>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift/bit_shift'
 * '<S219>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift1/bit_shift'
 * '<S220>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift2/bit_shift'
 * '<S221>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift3/bit_shift'
 * '<S222>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift4/bit_shift'
 * '<S223>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift5/bit_shift'
 * '<S224>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift6/bit_shift'
 * '<S225>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift7/bit_shift'
 * '<S226>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/CAN send1'
 * '<S227>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack'
 * '<S228>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/uint16to2uint1'
 * '<S229>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/uint16to2uint8'
 * '<S230>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift'
 * '<S231>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift1'
 * '<S232>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift2'
 * '<S233>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift3'
 * '<S234>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift4'
 * '<S235>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift5'
 * '<S236>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift6'
 * '<S237>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift/bit_shift'
 * '<S238>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift1/bit_shift'
 * '<S239>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift2/bit_shift'
 * '<S240>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift3/bit_shift'
 * '<S241>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift4/bit_shift'
 * '<S242>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift5/bit_shift'
 * '<S243>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift6/bit_shift'
 * '<S244>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/uint16to2uint1/Bit Shift'
 * '<S245>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/uint16to2uint1/Bit Shift/bit_shift'
 * '<S246>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/uint16to2uint8/Bit Shift'
 * '<S247>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/uint16to2uint8/Bit Shift/bit_shift'
 * '<S248>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/2bytes2uint1'
 * '<S249>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/2bytes2uint16'
 * '<S250>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/CAN receive1'
 * '<S251>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem'
 * '<S252>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/2bytes2uint1/Bit Shift'
 * '<S253>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/2bytes2uint1/Bit Shift/bit_shift'
 * '<S254>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/2bytes2uint16/Bit Shift'
 * '<S255>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/2bytes2uint16/Bit Shift/bit_shift'
 * '<S256>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/CAN receive1/Enabled Subsystem'
 * '<S257>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift'
 * '<S258>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift1'
 * '<S259>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift2'
 * '<S260>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift3'
 * '<S261>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift4'
 * '<S262>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift5'
 * '<S263>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift6'
 * '<S264>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift7'
 * '<S265>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift/bit_shift'
 * '<S266>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift1/bit_shift'
 * '<S267>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift2/bit_shift'
 * '<S268>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift3/bit_shift'
 * '<S269>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift4/bit_shift'
 * '<S270>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift5/bit_shift'
 * '<S271>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift6/bit_shift'
 * '<S272>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift7/bit_shift'
 * '<S273>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/2bytes2uint1'
 * '<S274>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/2bytes2uint16'
 * '<S275>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/CAN receive1'
 * '<S276>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem'
 * '<S277>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/2bytes2uint1/Bit Shift'
 * '<S278>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/2bytes2uint1/Bit Shift/bit_shift'
 * '<S279>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/2bytes2uint16/Bit Shift'
 * '<S280>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/2bytes2uint16/Bit Shift/bit_shift'
 * '<S281>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/CAN receive1/Enabled Subsystem'
 * '<S282>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift'
 * '<S283>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift1'
 * '<S284>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift2'
 * '<S285>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift3'
 * '<S286>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift4'
 * '<S287>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift5'
 * '<S288>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift6'
 * '<S289>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift7'
 * '<S290>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift/bit_shift'
 * '<S291>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift1/bit_shift'
 * '<S292>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift2/bit_shift'
 * '<S293>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift3/bit_shift'
 * '<S294>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift4/bit_shift'
 * '<S295>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift5/bit_shift'
 * '<S296>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift6/bit_shift'
 * '<S297>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift7/bit_shift'
 * '<S298>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/CAN send1'
 * '<S299>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack'
 * '<S300>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/uint16to2uint1'
 * '<S301>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/uint16to2uint8'
 * '<S302>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift'
 * '<S303>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift1'
 * '<S304>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift2'
 * '<S305>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift3'
 * '<S306>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift4'
 * '<S307>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift5'
 * '<S308>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift6'
 * '<S309>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift/bit_shift'
 * '<S310>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift1/bit_shift'
 * '<S311>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift2/bit_shift'
 * '<S312>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift3/bit_shift'
 * '<S313>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift4/bit_shift'
 * '<S314>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift5/bit_shift'
 * '<S315>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift6/bit_shift'
 * '<S316>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/uint16to2uint1/Bit Shift'
 * '<S317>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/uint16to2uint1/Bit Shift/bit_shift'
 * '<S318>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/uint16to2uint8/Bit Shift'
 * '<S319>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/uint16to2uint8/Bit Shift/bit_shift'
 * '<S320>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/2bytes2uint1'
 * '<S321>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/2bytes2uint16'
 * '<S322>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/CAN receive1'
 * '<S323>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem'
 * '<S324>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/2bytes2uint1/Bit Shift'
 * '<S325>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/2bytes2uint1/Bit Shift/bit_shift'
 * '<S326>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/2bytes2uint16/Bit Shift'
 * '<S327>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/2bytes2uint16/Bit Shift/bit_shift'
 * '<S328>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/CAN receive1/Enabled Subsystem'
 * '<S329>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift'
 * '<S330>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift1'
 * '<S331>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift2'
 * '<S332>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift3'
 * '<S333>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift4'
 * '<S334>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift5'
 * '<S335>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift6'
 * '<S336>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift7'
 * '<S337>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift/bit_shift'
 * '<S338>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift1/bit_shift'
 * '<S339>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift2/bit_shift'
 * '<S340>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift3/bit_shift'
 * '<S341>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift4/bit_shift'
 * '<S342>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift5/bit_shift'
 * '<S343>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift6/bit_shift'
 * '<S344>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift7/bit_shift'
 * '<S345>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/CAN send1'
 * '<S346>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack'
 * '<S347>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/uint16to2uint1'
 * '<S348>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/uint16to2uint2'
 * '<S349>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift'
 * '<S350>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift1'
 * '<S351>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift2'
 * '<S352>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift3'
 * '<S353>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift4'
 * '<S354>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift5'
 * '<S355>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift6'
 * '<S356>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift/bit_shift'
 * '<S357>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift1/bit_shift'
 * '<S358>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift2/bit_shift'
 * '<S359>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift3/bit_shift'
 * '<S360>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift4/bit_shift'
 * '<S361>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift5/bit_shift'
 * '<S362>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift6/bit_shift'
 * '<S363>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/uint16to2uint1/Bit Shift'
 * '<S364>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/uint16to2uint1/Bit Shift/bit_shift'
 * '<S365>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/uint16to2uint2/Bit Shift'
 * '<S366>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/uint16to2uint2/Bit Shift/bit_shift'
 * '<S367>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Role assignment/Subsystem'
 * '<S368>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Role assignment/Subsystem2'
 * '<S369>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Role assignment/Subsystem2/CAN receive1'
 * '<S370>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Role assignment/Subsystem2/Subsystem1'
 * '<S371>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Role assignment/Subsystem2/CAN receive1/Enabled Subsystem'
 * '<S372>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Setting ID/Digital Input'
 * '<S373>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Setting ID/Digital Input1'
 * '<S374>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Setting ID/Digital Input2'
 * '<S375>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/System information/Get CPU load'
 * '<S376>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/System information/Get free Heap'
 * '<S377>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/System information/Get free Stack'
 * '<S378>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Triggered Subsystem/Digital Input1'
 * '<S379>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Triggered Subsystem/Subsystem'
 * '<S380>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Triggered Subsystem/Subsystem/If Action Subsystem'
 * '<S381>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Triggered Subsystem/Subsystem/If Action Subsystem1'
 * '<S382>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Triggered Subsystem/Subsystem/If Action Subsystem2'
 * '<S383>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Triggered Subsystem/Subsystem/If Action Subsystem3'
 * '<S384>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Triggered Subsystem/Subsystem/S-R Flip-Flop'
 * '<S385>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Triggered Subsystem/Subsystem/S-R Flip-Flop1'
 */
#endif                        /* RTW_HEADER_HANcoder_E407_TTA_CombineModel_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
