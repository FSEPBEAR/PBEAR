#include <assert.h>
#ifndef NULL
#define NULL ((void*)0)
#endif
#ifndef TRUE
#define TRUE 1
#endif
#ifndef FALSE
#define FALSE 0
#endif
enum API { API_ActivateTask=0, API_TerminateTask=1, API_ChainTask=2, API_Schedule=3, API_GetResource=4, API_ReleaseResource=5, API_SetEvent=6, API_WaitEvent=7, API_ClearEvent=8 };
struct anonymous;
enum anonymous_0 { ACTIVATE=0, PREEMPT=1, RELEASE=2 };
struct anonymous_1;
struct anonymous_2;
struct anonymous_3;
struct anonymous_4;
struct anonymous_5;
enum evt_state { Evt_Clear=0, Evt_Set=1, Evt_Wait=2 };
struct pair;
struct queue;
typedef enum API API;
typedef struct anonymous_1 Alarm;
typedef struct anonymous_2 Event;
typedef enum evt_state Evt_State;
typedef struct queue Queue;
typedef struct anonymous_5 Resource;
typedef char S8;
typedef signed int SINT;
typedef unsigned char U8;
typedef signed int data_t;
typedef struct anonymous object_data_t;
typedef enum anonymous_0 push_type;
typedef struct anonymous_3 task_dynamic_stat;
typedef struct anonymous_4 task_static_config;
void ALARM_handler(signed int aid);
signed int ActivateTask(unsigned char reftask);
signed int ActivateTask_Common(unsigned char reftask);
signed int CancelAlarm(unsigned char alarmID);
signed int CancelAlarm_Common(unsigned char alarmID);
signed int ChainTask(unsigned char reftask);
signed int ChainTask_Common(unsigned char reftask);
signed int ClearEvent(unsigned char eventid);
signed int ClearEvent_Common(unsigned char eventid);
void Func_AcquisitionTask();
void Func_ControlTask();
signed int GetResource(unsigned char resid);
signed int GetResource_Common(unsigned char resid);
signed int ReleaseResource(unsigned char resid);
signed int ReleaseResource_Common(unsigned char resid);
signed int Schedule();
signed int Schedule_Common();
signed int SetEvent(unsigned char reftask, unsigned char eventid);
signed int SetEvent_Common(unsigned char reftask, unsigned char eventid);
signed int SetRelAlarm(unsigned char alarmID, signed int increment, signed int cycle);
signed int SetRelAlarm_Common(unsigned char alarmID, signed int increment, signed int cycle);
void ShutDownOS();
void StartOS(unsigned char app_mode);
signed int TerminateTask();
signed int TerminateTask_Common();
signed int WaitEvent(unsigned char eventid);
signed int WaitEvent_Common(unsigned char eventid);
void app();
void check_property();
signed int directionPIDController(signed int d);
void display_goto_xy(signed int display_goto_xy__x, signed int y);
void display_int(signed int val, unsigned int places);
void display_string( char *str);
void display_update(void);
void ecrobot_device_initialize();
void ecrobot_device_terminate();
signed int fisqrt(signed int val);
signed int getArea(U8 getArea__rectindex);
object_data_t getData();
signed int getHeight(U8 getHeight__rectindex);
signed int getWidth(U8 getWidth__rectindex);
signed int getX(U8 getX__rectindex);
signed int getY(U8 getY__rectindex);
void get_task_from_readyQ();
signed int getbiggestrect(U8 pcolorid, signed int pminarea);
U8 * getdata();
void handleISR();
signed int i2c_busy(signed int port);
void i2c_disable(signed int port);
void i2c_enable(signed int port);
signed int i2c_start_transaction(signed int port, unsigned int address, signed int internal_address, signed int n_internal_address_bytes, unsigned char *i2c_start_transaction__data, unsigned int nbytes, signed int write);
void init_nxtcam(U8 port_id);
void initialize();
static inline signed int is_active_alarm_exists();
static inline signed int is_active_obj_exists();
static inline signed int is_alloc(unsigned char res);
data_t median_filter(data_t datum);
void nxt_avr_set_input_power(unsigned char a, signed int b);
void nxt_motor_set_speed(unsigned int n, signed int speed_percent, signed int brake);
signed int postjob();
void push_task_into_readyQ(unsigned char t, unsigned char p, signed int pc, push_type pushkind);
signed int request(U8 port_id);
signed int reschedule(API reschedule__api, unsigned char tid);
SINT send_nxtcam_command(U8 port_id, U8 command);
signed int speedPIDController(signed int d);
void startup_process();
void term_nxtcam(U8 port_id);
void update_prop_automata();
void user_1ms_isr_type2(void);
struct anonymous
{
  signed int position;
  signed int size;
};
struct anonymous_1
{
  unsigned int cycle;
  unsigned int next_alarm_tick;
  API api;
  unsigned char param1;
  unsigned char param2;
};
struct anonymous_2
{
  unsigned char owner;
  Evt_State task_alloc[4l];
};
struct anonymous_3
{
  unsigned char act_cnt;
  unsigned char dyn_prio;
};
struct anonymous_4
{
  unsigned char prio;
  unsigned char preemptable;
  unsigned char autostart;
  unsigned char extended;
  unsigned char event_owned;
  unsigned char resource_owned;
  unsigned char max_act_cnt;
};
struct anonymous_5
{
  unsigned int c_prio;
  unsigned char alloc;
};
struct pair
{
  struct pair *point;
  data_t value;
};
struct queue
{
  unsigned char tid;
  push_type type;
};
unsigned char Ceiling_Prio[3l];
Event Event_Table[3l];
 signed int OFF=0;
 signed int ON=1;
Resource Resource_Table[3l];
signed int acq_size;
signed int activation_time[4l];
Alarm alarm_info[4l];
signed int alarm_state[4l];
API api;
signed int area;
struct pair big;
struct pair small={ .point=((struct pair *)NULL), .value=0 };
struct pair big={ .point=&small, .value=0 };
struct pair buffer[15l]={ { .point=((struct pair *)NULL), .value=0 }, 
    { .point=((struct pair *)NULL), .value=0 }, 
    { .point=((struct pair *)NULL), .value=0 }, 
    { .point=((struct pair *)NULL), .value=0 }, 
    { .point=((struct pair *)NULL), .value=0 }, 
    { .point=((struct pair *)NULL), .value=0 }, 
    { .point=((struct pair *)NULL), .value=0 }, 
    { .point=((struct pair *)NULL), .value=0 }, 
    { .point=((struct pair *)NULL), .value=0 }, 
    { .point=((struct pair *)NULL), .value=0 }, 
    { .point=((struct pair *)NULL), .value=0 }, 
    { .point=((struct pair *)NULL), .value=0 }, 
    { .point=((struct pair *)NULL), .value=0 }, 
    { .point=((struct pair *)NULL), .value=0 }, 
    { .point=((struct pair *)NULL), .value=0 } };
signed int ctl_size;
signed int current_pc[4l];
unsigned char current_prio=0;
unsigned char current_tid=0;
object_data_t data;
struct pair *datpoint;
struct pair *datpoint=buffer;
signed int direction_adjustment;
unsigned char e_code=0;
signed int front[4l];
static signed int ftbl[33l]={ 0, 1, 1, 2, 2, 4, 5, 8, 11, 16, 22, 32, 45, 64, 90, 128, 181, 256, 362, 512, 724, 1024, 1448, 2048, 2896, 4096, 5792, 8192, 11585, 16384, 23170, 32768, 46340 };
static signed int ftbl2[32l]={ 32768, 33276, 33776, 34269, 34755, 35235, 35708, 36174, 36635, 37090, 37540, 37984, 38423, 38858, 39287, 39712, 40132, 40548, 40960, 41367, 41771, 42170, 42566, 42959, 43347, 43733, 44115, 44493, 44869, 45241, 45611, 45977 };
unsigned char idx;
unsigned char k;
signed int leftMotorValue;
unsigned char max_prio=0;
signed int new_speed;
static U8 nxtcambuffer[8l];
static U8 nxtcamdata[41l];
object_data_t objData={ .position=0, .size=0 };
signed int os_on;
signed int position;
Queue readyQ[4l][4l];
signed int rear[4l];
signed int rectindex;
signed int rightMotorValue;
signed int size[4l];
signed int speed_deviation;
signed int state=0;
task_dynamic_stat task_dyn_info[4l];
unsigned char task_state[4l];
task_static_config task_static_info[4l];
S8 tracking_enabled=(S8)-1;
signed int wholesize;
signed int x;
extern object_data_t __VERIFIER_nondet_object_data_t();
extern signed int __VERIFIER_nondet_signed_int();
extern U8 * __VERIFIER_nondet_U8_star();
signed int getbiggestrect(U8 pcolorid, signed int pminarea) {
	signed int getbiggestrect__1__rectindex;
	getbiggestrect__1__rectindex = -1;
	signed int i;
	signed int maxarea;
	maxarea = pminarea;
	i = 0;
	Node_5_77:;
	if ((i >= (signed int)(nxtcamdata[0]))) goto Node_5_98;
	signed int colorid;
	colorid = (signed int)(nxtcamdata[(signed long int)(((1 + (5 * i)) + 0))]);
	if (!((colorid == (signed int)(pcolorid)))) goto Node_5_94;
	signed int getbiggestrect__1__1__1__1__area;
	getbiggestrect__1__1__1__1__area = getArea((U8)(i));
	if (!((getbiggestrect__1__1__1__1__area >= maxarea))) goto Node_5_90;
	maxarea = getbiggestrect__1__1__1__1__area;
	getbiggestrect__1__rectindex = i;
	Node_5_90:;
	Node_5_94:;
	i = (i + 1);
	goto Node_5_77;
	Node_5_98:;
	return getbiggestrect__1__rectindex;
}
signed int getArea(U8 getArea__rectindex) {
	signed int return_value_getWidth;
	return_value_getWidth = getWidth(getArea__rectindex);
	signed int return_value_getHeight;
	return_value_getHeight = getHeight(getArea__rectindex);
	return (return_value_getWidth * return_value_getHeight);
}
signed int getWidth(U8 getWidth__rectindex) {
	signed int xul;
	xul = (signed int)(nxtcamdata[(signed long int)((((5 * (signed int)(getWidth__rectindex)) + 1) + 1))]);
	signed int xlr;
	xlr = (signed int)(nxtcamdata[(signed long int)((((5 * (signed int)(getWidth__rectindex)) + 1) + 3))]);
	return ((xlr - xul) >= 0) ? (xlr - xul) : -((xlr - xul));
}
signed int getHeight(U8 getHeight__rectindex) {
	signed int yul;
	yul = (signed int)(nxtcamdata[(signed long int)((((5 * (signed int)(getHeight__rectindex)) + 1) + 2))]);
	signed int ylr;
	ylr = (signed int)(nxtcamdata[(signed long int)((((5 * (signed int)(getHeight__rectindex)) + 1) + 4))]);
	return ((ylr - yul) >= 0) ? (ylr - yul) : -((ylr - yul));
}
signed int fisqrt(signed int val) {
	signed int cnt;
	cnt = 0;
	signed int t;
	t = val;
	Node_42_660:;
	if ((t == 0)) goto Node_42_664;
	cnt = (cnt + 1);
	t = (t >> 1);
	goto Node_42_660;
	Node_42_664:;
	if ((cnt >= 7)) goto Node_42_668;
	t = (val << (6 - cnt));
	goto Node_42_669;
	Node_42_668:;
	t = (val >> (cnt - 6));
	Node_42_669:;
	return ((ftbl[(signed long int)(cnt)] * ftbl2[(signed long int)((t & 31))]) >> 15);
}
void StartOS_0_1(unsigned char app_mode);
void initialize_34_1();
void startup_process_35_1();
void push_task_into_readyQ_27_1(unsigned char t, unsigned char p, signed int pc, push_type pushkind);
void get_task_from_readyQ_28_1();
void app_36_1();
void is_active_obj_exists_22_1();
void Func_ControlTask_24_1();
void GetResource_58_1(unsigned char resid);
void GetResource_Common_43_1(unsigned char resid);
void is_alloc_19_1(unsigned char res);
void postjob_25_1();
void is_active_alarm_exists_14_1();
void ALARM_handler_15_1(signed int aid);
void ActivateTask_Common_56_1(unsigned char reftask);
void push_task_into_readyQ_76_1(unsigned char t, unsigned char p, signed int pc, push_type pushkind);
void reschedule_77_1(API reschedule__api, unsigned char tid);
void ALARM_handler_15_2(signed int aid);
void ActivateTask_Common_56_2(unsigned char reftask);
void check_property_26_1();
void is_active_obj_exists_22_2();
void Func_ControlTask_24_2();
void ReleaseResource_59_1(unsigned char resid);
void ReleaseResource_Common_41_1(unsigned char resid);
void is_alloc_10_1(unsigned char res);
void is_alloc_11_1(unsigned char res);
void is_alloc_11_2(unsigned char res);
void is_alloc_11_3(unsigned char res);
void reschedule_12_1(API reschedule__api, unsigned char tid);
void push_task_into_readyQ_91_1(unsigned char t, unsigned char p, signed int pc, push_type pushkind);
void get_task_from_readyQ_92_1();
void postjob_25_2();
void is_active_alarm_exists_14_2();
void ALARM_handler_15_3(signed int aid);
void ALARM_handler_15_4(signed int aid);
void check_property_26_2();
void is_active_obj_exists_22_3();
void Func_AcquisitionTask_23_1();
void send_nxtcam_command_45_1(U8 port_id, U8 command);
void i2c_busy_2_1(signed int port);
void i2c_busy_2_2(signed int port);
void i2c_busy_2_3(signed int port);
void i2c_busy_2_4(signed int port);
void i2c_busy_2_5(signed int port);
void i2c_busy_2_6(signed int port);
void i2c_busy_2_7(signed int port);
void i2c_busy_2_8(signed int port);
void i2c_busy_2_9(signed int port);
void i2c_busy_2_10(signed int port);
void i2c_busy_2_11(signed int port);
void i2c_busy_2_12(signed int port);
void i2c_busy_2_13(signed int port);
void i2c_busy_2_14(signed int port);
void i2c_busy_2_15(signed int port);
void i2c_busy_2_16(signed int port);
void i2c_busy_2_17(signed int port);
void i2c_busy_2_18(signed int port);
void i2c_busy_2_19(signed int port);
void i2c_busy_2_20(signed int port);
void i2c_busy_2_21(signed int port);
void i2c_busy_2_22(signed int port);
void i2c_busy_2_23(signed int port);
void i2c_busy_2_24(signed int port);
void i2c_busy_2_25(signed int port);
void i2c_busy_2_26(signed int port);
void i2c_busy_2_27(signed int port);
void i2c_busy_2_28(signed int port);
void i2c_busy_2_29(signed int port);
void i2c_busy_2_30(signed int port);
void i2c_busy_2_31(signed int port);
void i2c_busy_2_32(signed int port);
void i2c_busy_2_33(signed int port);
void i2c_busy_2_34(signed int port);
void i2c_busy_2_35(signed int port);
void i2c_busy_2_36(signed int port);
void i2c_busy_2_37(signed int port);
void i2c_busy_2_38(signed int port);
void i2c_busy_2_39(signed int port);
void i2c_busy_2_40(signed int port);
void i2c_busy_2_41(signed int port);
void i2c_busy_2_42(signed int port);
void i2c_start_transaction_3_1(signed int port, unsigned int address, signed int internal_address, signed int n_internal_address_bytes, unsigned char* i2c_start_transaction__data, unsigned int nbytes, signed int write);
void TerminateTask_54_1();
void TerminateTask_Common_32_1();
void reschedule_72_1(API reschedule__api, unsigned char tid);
void get_task_from_readyQ_90_1();
void postjob_25_3();
void is_active_alarm_exists_14_3();
void ALARM_handler_15_5(signed int aid);
void ALARM_handler_15_6(signed int aid);
void check_property_26_3();
void is_active_obj_exists_22_4();
void Func_ControlTask_24_3();
void TerminateTask_60_1();
void TerminateTask_Common_32_2();
void reschedule_72_2(API reschedule__api, unsigned char tid);
void get_task_from_readyQ_90_2();
void postjob_25_4();
void is_active_alarm_exists_14_4();
void ALARM_handler_15_7(signed int aid);
void ALARM_handler_15_8(signed int aid);
void check_property_26_4();
void is_active_obj_exists_22_5();
void postjob_25_5();
void is_active_alarm_exists_14_5();
void ALARM_handler_15_9(signed int aid);
void ALARM_handler_15_10(signed int aid);
void check_property_26_5();
void is_active_obj_exists_22_6();
void postjob_25_6();
void is_active_alarm_exists_14_6();
void ALARM_handler_15_11(signed int aid);
void ALARM_handler_15_12(signed int aid);
void check_property_26_6();
void is_active_obj_exists_22_7();
void postjob_25_7();
void is_active_alarm_exists_14_7();
void ALARM_handler_15_13(signed int aid);
void ALARM_handler_15_14(signed int aid);
void check_property_26_7();
void is_active_obj_exists_22_8();
void postjob_25_8();
void is_active_alarm_exists_14_8();
void ALARM_handler_15_15(signed int aid);
void ALARM_handler_15_16(signed int aid);
void check_property_26_8();
void is_active_obj_exists_22_9();
void postjob_25_9();
void is_active_alarm_exists_14_9();
void ALARM_handler_15_17(signed int aid);
void ALARM_handler_15_18(signed int aid);
void check_property_26_9();
void is_active_obj_exists_22_10();
void postjob_25_10();
void is_active_alarm_exists_14_10();
void ALARM_handler_15_19(signed int aid);
void ALARM_handler_15_20(signed int aid);
void check_property_26_10();
void is_active_obj_exists_22_11();
void postjob_25_11();
void is_active_alarm_exists_14_11();
void ALARM_handler_15_21(signed int aid);
void ALARM_handler_15_22(signed int aid);
void check_property_26_11();
void is_active_obj_exists_22_12();
void postjob_25_12();
void is_active_alarm_exists_14_12();
void ALARM_handler_15_23(signed int aid);
void ALARM_handler_15_24(signed int aid);
void check_property_26_12();
void is_active_obj_exists_22_13();
void postjob_25_13();
void is_active_alarm_exists_14_13();
void ALARM_handler_15_25(signed int aid);
void ALARM_handler_15_26(signed int aid);
void check_property_26_13();
void is_active_obj_exists_22_14();
void postjob_25_14();
void is_active_alarm_exists_14_14();
void ALARM_handler_15_27(signed int aid);
void ALARM_handler_15_28(signed int aid);
void check_property_26_14();
void is_active_obj_exists_22_15();
void postjob_25_15();
void is_active_alarm_exists_14_15();
void ALARM_handler_15_29(signed int aid);
void ALARM_handler_15_30(signed int aid);
void check_property_26_15();
void is_active_obj_exists_22_16();
void postjob_25_16();
void is_active_alarm_exists_14_16();
void ALARM_handler_15_31(signed int aid);
void ALARM_handler_15_32(signed int aid);
void check_property_26_16();
void is_active_obj_exists_22_17();
void postjob_25_17();
void is_active_alarm_exists_14_17();
void ALARM_handler_15_33(signed int aid);
void ALARM_handler_15_34(signed int aid);
void check_property_26_17();
void is_active_obj_exists_22_18();
void postjob_25_18();
void is_active_alarm_exists_14_18();
void ALARM_handler_15_35(signed int aid);
void ALARM_handler_15_36(signed int aid);
void check_property_26_18();
void is_active_obj_exists_22_19();
void postjob_25_19();
void is_active_alarm_exists_14_19();
void ALARM_handler_15_37(signed int aid);
void ALARM_handler_15_38(signed int aid);
void check_property_26_19();
void is_active_obj_exists_22_20();
void postjob_25_20();
void is_active_alarm_exists_14_20();
void ALARM_handler_15_39(signed int aid);
void ALARM_handler_15_40(signed int aid);
void check_property_26_20();
void is_active_obj_exists_22_21();
void postjob_25_21();
void is_active_alarm_exists_14_21();
void ALARM_handler_15_41(signed int aid);
void ALARM_handler_15_42(signed int aid);
void check_property_26_21();
void is_active_obj_exists_22_22();
void postjob_25_22();
void is_active_alarm_exists_14_22();
void ALARM_handler_15_43(signed int aid);
void ALARM_handler_15_44(signed int aid);
void check_property_26_22();
void is_active_obj_exists_22_23();
void postjob_25_23();
void is_active_alarm_exists_14_23();
void ALARM_handler_15_45(signed int aid);
void ALARM_handler_15_46(signed int aid);
void check_property_26_23();
void is_active_obj_exists_22_24();
void postjob_25_24();
void is_active_alarm_exists_14_24();
void ALARM_handler_15_47(signed int aid);
void ALARM_handler_15_48(signed int aid);
void check_property_26_24();
void is_active_obj_exists_22_25();
void postjob_25_25();
void is_active_alarm_exists_14_25();
void ALARM_handler_15_49(signed int aid);
void ALARM_handler_15_50(signed int aid);
void check_property_26_25();
void is_active_obj_exists_22_26();
void postjob_25_26();
void is_active_alarm_exists_14_26();
void ALARM_handler_15_51(signed int aid);
void ALARM_handler_15_52(signed int aid);
void check_property_26_26();
void is_active_obj_exists_22_27();
void postjob_25_27();
void is_active_alarm_exists_14_27();
void ALARM_handler_15_53(signed int aid);
void ALARM_handler_15_54(signed int aid);
void check_property_26_27();
void is_active_obj_exists_22_28();
void postjob_25_28();
void is_active_alarm_exists_14_28();
void ALARM_handler_15_55(signed int aid);
void ALARM_handler_15_56(signed int aid);
void check_property_26_28();
void is_active_obj_exists_22_29();
void postjob_25_29();
void is_active_alarm_exists_14_29();
void ALARM_handler_15_57(signed int aid);
void ALARM_handler_15_58(signed int aid);
void check_property_26_29();
void is_active_obj_exists_22_30();
void postjob_25_30();
void is_active_alarm_exists_14_30();
void ALARM_handler_15_59(signed int aid);
void ALARM_handler_15_60(signed int aid);
void check_property_26_30();
void is_active_obj_exists_22_31();
void postjob_25_31();
void is_active_alarm_exists_14_31();
void ALARM_handler_15_61(signed int aid);
void ActivateTask_Common_56_3(unsigned char reftask);
void push_task_into_readyQ_76_2(unsigned char t, unsigned char p, signed int pc, push_type pushkind);
void reschedule_77_2(API reschedule__api, unsigned char tid);
void push_task_into_readyQ_91_2(unsigned char t, unsigned char p, signed int pc, push_type pushkind);
void get_task_from_readyQ_92_2();
void ALARM_handler_15_62(signed int aid);
void check_property_26_31();
void is_active_obj_exists_22_32();
void Func_AcquisitionTask_23_2();
void postjob_25_32();
void is_active_alarm_exists_14_32();
void ALARM_handler_15_63(signed int aid);
void ALARM_handler_15_64(signed int aid);
void check_property_26_32();
void is_active_obj_exists_22_33();
void Func_AcquisitionTask_23_3();
void request_46_1(U8 port_id);
void i2c_busy_81_1(signed int port);
void i2c_start_transaction_82_1(signed int port, unsigned int address, signed int internal_address, signed int n_internal_address_bytes, unsigned char* i2c_start_transaction__data, unsigned int nbytes, signed int write);
void getArea_48_1(U8 getArea__rectindex);
void getWidth_17_1(U8 getWidth__rectindex);
void getHeight_18_1(U8 getHeight__rectindex);
void median_filter_49_1(data_t datum);
void getX_51_1(U8 getX__rectindex);
void GetResource_52_1(unsigned char resid);
void GetResource_Common_43_2(unsigned char resid);
void is_alloc_19_2(unsigned char res);
void postjob_25_33();
void is_active_alarm_exists_14_33();
void ALARM_handler_15_65(signed int aid);
void ALARM_handler_15_66(signed int aid);
void check_property_26_33();
extern object_data_t __VERIFIER_nondet_object_data_t();
extern signed int __VERIFIER_nondet_signed_int();
extern U8 * __VERIFIER_nondet_U8_star();
int __iv__return_expr_main;
SINT __iv__return_expr_send_nxtcam_command;
signed int __iv__return_expr_i2c_start_transaction;
signed int __iv__return_expr_i2c_busy;
signed int __iv__return_expr_getbiggestrect;
signed int __iv__return_expr_ReleaseResource_Common;
signed int __iv__return_expr_postjob;
signed int __iv__return_expr_is_active_alarm_exists;
data_t __iv__return_expr_median_filter;
signed int __iv__return_expr_is_active_obj_exists;
signed int __iv__return_expr_getArea;
signed int __iv__return_expr_getX;
signed int __iv__return_expr_getWidth;
signed int __iv__return_expr_getHeight;
signed int __iv__return_expr_GetResource_Common;
signed int __iv__return_expr_WaitEvent_Common;
signed int __iv__return_expr_WaitEvent;
signed int __iv__return_expr_TerminateTask;
signed int __iv__return_expr_SetRelAlarm_Common;
signed int __iv__return_expr_SetRelAlarm;
signed int __iv__return_expr_SetEvent;
signed int __iv__return_expr_ReleaseResource;
signed int __iv__return_expr_GetResource;
signed int __iv__return_expr_ClearEvent_Common;
signed int __iv__return_expr_SetEvent_Common;
signed int __iv__return_expr_Schedule_Common;
signed int __iv__return_expr_ChainTask_Common;
signed int __iv__return_expr_ActivateTask;
signed int __iv__return_expr_ClearEvent;
signed int __iv__return_expr_is_alloc;
signed int __iv__return_expr_Schedule;
signed int __iv__return_expr_TerminateTask_Common;
signed int __iv__return_expr_fisqrt;
signed int __iv__return_expr_ChainTask;
signed int __iv__return_expr_ActivateTask_Common;
signed int __iv__return_expr_CancelAlarm;
signed int __iv__return_expr_CancelAlarm_Common;
signed int __iv__return_expr_request;
signed int __iv__return_expr_getY;
U8* __iv__return_expr_getdata;
signed int __iv__return_expr_directionPIDController;
object_data_t __iv__return_expr_getData;
signed int __iv__return_expr_reschedule;
signed int __iv__return_expr_speedPIDController;
int main(){
	StartOS_0_1((unsigned char)(1));
}
void StartOS_0_1(unsigned char app_mode){
	os_on = 1; 
	initialize_34_1();
	startup_process_35_1();
	app_36_1();
}
void initialize_34_1(){
	task_static_info[0].max_act_cnt = 1; 
	task_static_info[0].preemptable = 1; 
	task_static_info[0].prio = 0; 
	task_static_info[0].autostart = 0; 
	task_static_info[0].extended = 0; 
	task_static_info[1].max_act_cnt = 1; 
	task_static_info[1].preemptable = 1; 
	task_static_info[1].prio = 3; 
	task_static_info[1].autostart = 0; 
	task_static_info[1].extended = 0; 
	task_static_info[2].max_act_cnt = 1; 
	task_static_info[2].preemptable = 1; 
	task_static_info[2].prio = 2; 
	task_static_info[2].autostart = 1; 
	task_static_info[2].extended = 0; 
	task_dyn_info[1].dyn_prio = 3; 
	task_dyn_info[1].act_cnt = 0; 
	task_dyn_info[2].dyn_prio = 2; 
	task_dyn_info[2].act_cnt = 0; 
	alarm_state[1] = 1; 
	alarm_info[1].cycle = 30; 
	alarm_info[1].next_alarm_tick = 1; 
	alarm_info[1].api = 0; 
	alarm_info[1].param1 = 1; 
	alarm_info[1].param2 = 0; 
	alarm_state[2] = 1; 
	alarm_info[2].cycle = 50; 
	alarm_info[2].next_alarm_tick = 1; 
	alarm_info[2].api = 0; 
	alarm_info[2].param1 = 2; 
	alarm_info[2].param2 = 0; 
	Resource_Table[1].c_prio = 4; 
}
void startup_process_35_1(){
	unsigned int i;
	i = 0; 
	i = 1; 
	i = 2; 
	task_dyn_info[2].act_cnt = 1; 
	current_prio = 2; 
	push_task_into_readyQ_27_1((unsigned char)(i), current_prio, 0, (push_type)(0));
	task_state[2] = 1; 
	i = 3; 
	i = 4; 
	get_task_from_readyQ_28_1();
	task_state[2] = 2; 
}
void push_task_into_readyQ_27_1(unsigned char t, unsigned char p, signed int pc, push_type pushkind){
	task_state[2] = 1; 
	k = 0; 
	readyQ[2][0].tid = 2; 
	rear[2] = 1; 
	size[2] = 1; 
	wholesize = 1; 
	max_prio = 2; 
}
void get_task_from_readyQ_28_1(){
	current_tid = 2; 
	current_prio = 2; 
	readyQ[2][0].tid = 0; 
	front[2] = 1; 
	size[2] = 0; 
	wholesize = 0; 
	max_prio = 2; 
	max_prio = 1; 
	max_prio = 0; 
	task_state[2] = 2; 
}
void app_36_1(){
	signed int count;
	count = 0; 
	current_pc[1] = 1;
	current_pc[2] = 1; 
	signed int return_value_is_active_obj_exists;
	is_active_obj_exists_22_1();
	return_value_is_active_obj_exists = 1; 
	Func_ControlTask_24_1();
	postjob_25_1();
	check_property_26_1();
	count = 1; 
	is_active_obj_exists_22_2();
	return_value_is_active_obj_exists = 1; 
	Func_ControlTask_24_2();
	postjob_25_2();
	check_property_26_2();
	count = 2; 
	is_active_obj_exists_22_3();
	return_value_is_active_obj_exists = 1; 
	Func_AcquisitionTask_23_1();
	postjob_25_3();
	check_property_26_3();
	count = 3; 
	is_active_obj_exists_22_4();
	return_value_is_active_obj_exists = 1; 
	Func_ControlTask_24_3();
	postjob_25_4();
	check_property_26_4();
	count = 4; 
	is_active_obj_exists_22_5();
	return_value_is_active_obj_exists = 1; 
	postjob_25_5();
	check_property_26_5();
	count = 5; 
	is_active_obj_exists_22_6();
	return_value_is_active_obj_exists = 1; 
	postjob_25_6();
	check_property_26_6();
	count = 6; 
	is_active_obj_exists_22_7();
	return_value_is_active_obj_exists = 1; 
	postjob_25_7();
	check_property_26_7();
	count = 7; 
	is_active_obj_exists_22_8();
	return_value_is_active_obj_exists = 1; 
	postjob_25_8();
	check_property_26_8();
	count = 8; 
	is_active_obj_exists_22_9();
	return_value_is_active_obj_exists = 1; 
	postjob_25_9();
	check_property_26_9();
	count = 9; 
	is_active_obj_exists_22_10();
	return_value_is_active_obj_exists = 1; 
	postjob_25_10();
	check_property_26_10();
	count = 10; 
	is_active_obj_exists_22_11();
	return_value_is_active_obj_exists = 1; 
	postjob_25_11();
	check_property_26_11();
	count = 11; 
	is_active_obj_exists_22_12();
	return_value_is_active_obj_exists = 1; 
	postjob_25_12();
	check_property_26_12();
	count = 12; 
	is_active_obj_exists_22_13();
	return_value_is_active_obj_exists = 1; 
	postjob_25_13();
	check_property_26_13();
	count = 13; 
	is_active_obj_exists_22_14();
	return_value_is_active_obj_exists = 1; 
	postjob_25_14();
	check_property_26_14();
	count = 14; 
	is_active_obj_exists_22_15();
	return_value_is_active_obj_exists = 1; 
	postjob_25_15();
	check_property_26_15();
	count = 15; 
	is_active_obj_exists_22_16();
	return_value_is_active_obj_exists = 1; 
	postjob_25_16();
	check_property_26_16();
	count = 16; 
	is_active_obj_exists_22_17();
	return_value_is_active_obj_exists = 1; 
	postjob_25_17();
	check_property_26_17();
	count = 17; 
	is_active_obj_exists_22_18();
	return_value_is_active_obj_exists = 1; 
	postjob_25_18();
	check_property_26_18();
	count = 18; 
	is_active_obj_exists_22_19();
	return_value_is_active_obj_exists = 1; 
	postjob_25_19();
	check_property_26_19();
	count = 19; 
	is_active_obj_exists_22_20();
	return_value_is_active_obj_exists = 1; 
	postjob_25_20();
	check_property_26_20();
	count = 20; 
	is_active_obj_exists_22_21();
	return_value_is_active_obj_exists = 1; 
	postjob_25_21();
	check_property_26_21();
	count = 21; 
	is_active_obj_exists_22_22();
	return_value_is_active_obj_exists = 1; 
	postjob_25_22();
	check_property_26_22();
	count = 22; 
	is_active_obj_exists_22_23();
	return_value_is_active_obj_exists = 1; 
	postjob_25_23();
	check_property_26_23();
	count = 23; 
	is_active_obj_exists_22_24();
	return_value_is_active_obj_exists = 1; 
	postjob_25_24();
	check_property_26_24();
	count = 24; 
	is_active_obj_exists_22_25();
	return_value_is_active_obj_exists = 1; 
	postjob_25_25();
	check_property_26_25();
	count = 25; 
	is_active_obj_exists_22_26();
	return_value_is_active_obj_exists = 1; 
	postjob_25_26();
	check_property_26_26();
	count = 26; 
	is_active_obj_exists_22_27();
	return_value_is_active_obj_exists = 1; 
	postjob_25_27();
	check_property_26_27();
	count = 27; 
	is_active_obj_exists_22_28();
	return_value_is_active_obj_exists = 1; 
	postjob_25_28();
	check_property_26_28();
	count = 28; 
	is_active_obj_exists_22_29();
	return_value_is_active_obj_exists = 1; 
	postjob_25_29();
	check_property_26_29();
	count = 29; 
	is_active_obj_exists_22_30();
	return_value_is_active_obj_exists = 1; 
	postjob_25_30();
	check_property_26_30();
	count = 30; 
	is_active_obj_exists_22_31();
	return_value_is_active_obj_exists = 1; 
	postjob_25_31();
	check_property_26_31();
	count = 31; 
	is_active_obj_exists_22_32();
	return_value_is_active_obj_exists = 1; 
	Func_AcquisitionTask_23_2();
	postjob_25_32();
	check_property_26_32();
	count = 32; 
	is_active_obj_exists_22_33();
	return_value_is_active_obj_exists = 1; 
	Func_AcquisitionTask_23_3();
	postjob_25_33();
	check_property_26_33();
}
void is_active_obj_exists_22_1(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 0; 
	i = 2; 
	tmp_if_expr = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void Func_ControlTask_24_1(){
	GetResource_58_1((unsigned char)(1));
	current_pc[2] = 2; 
}
void GetResource_58_1(unsigned char resid){
	GetResource_Common_43_1(resid);
}
void GetResource_Common_43_1(unsigned char resid){
	signed int return_value_is_alloc;
	__CPROVER_bool tmp_if_expr;
	is_alloc_19_1(resid);
	return_value_is_alloc = 0; 
	tmp_if_expr = 0; 
	Resource_Table[1].alloc = 2; 
	task_dyn_info[2].dyn_prio = 4; 
}
void is_alloc_19_1(unsigned char res){
	__iv__return_expr_is_alloc = 0; 
}
void postjob_25_1(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_14_1();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_15_1(aid);
	aid = 2; 
	ALARM_handler_15_2(aid);
	aid = 3; 
}
void is_active_alarm_exists_14_1(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_15_1(signed int aid){
	alarm_info[1].next_alarm_tick = 0; 
	alarm_info[1].next_alarm_tick = 30; 
	alarm_state[1] = 2; 
	ActivateTask_Common_56_1(alarm_info[(signed long int)(aid)].param1);
	alarm_state[1] = 1; 
}
void ActivateTask_Common_56_1(unsigned char reftask){
	signed int i;
	i = 0; 
	Event_Table[0].task_alloc[1] = 0; 
	i = 1; 
	Event_Table[1].task_alloc[1] = 0; 
	i = 2; 
	Event_Table[2].task_alloc[1] = 0; 
	i = 3; 
	task_dyn_info[1].act_cnt = 1; 
	push_task_into_readyQ_76_1(reftask, task_static_info[(signed long int)(reftask)].prio, 0, (push_type)(0));
	reschedule_77_1((API)(0), current_tid);
}
void push_task_into_readyQ_76_1(unsigned char t, unsigned char p, signed int pc, push_type pushkind){
	task_state[1] = 1; 
	k = 0; 
	readyQ[3][0].tid = 1; 
	rear[3] = 1; 
	size[3] = 1; 
	wholesize = 1; 
	max_prio = 3; 
}
void reschedule_77_1(API reschedule__api, unsigned char tid){
}
void ALARM_handler_15_2(signed int aid){
	alarm_info[2].next_alarm_tick = 0; 
	alarm_info[2].next_alarm_tick = 50; 
	alarm_state[2] = 2; 
	ActivateTask_Common_56_2(alarm_info[(signed long int)(aid)].param1);
	alarm_state[2] = 1; 
}
void ActivateTask_Common_56_2(unsigned char reftask){
}
void check_property_26_1(){
}
void is_active_obj_exists_22_2(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void Func_ControlTask_24_2(){
	ReleaseResource_59_1((unsigned char)(1));
	current_pc[2] = 3; 
}
void ReleaseResource_59_1(unsigned char resid){
	ReleaseResource_Common_41_1(resid);
}
void ReleaseResource_Common_41_1(unsigned char resid){
	unsigned char i;
	signed int return_value_is_alloc_0;
	is_alloc_10_1(resid);
	return_value_is_alloc_0 = 2; 
	Resource_Table[1].alloc = 0; 
	current_prio = 2; 
	i = 0; 
	signed int return_value_is_alloc;
	is_alloc_11_1(i);
	return_value_is_alloc = 0; 
	i = 1; 
	is_alloc_11_2(i);
	return_value_is_alloc = 0; 
	i = 2; 
	is_alloc_11_3(i);
	return_value_is_alloc = 0; 
	i = 3; 
	task_dyn_info[2].dyn_prio = 2; 
	reschedule_12_1((API)(5), current_tid);
}
void is_alloc_10_1(unsigned char res){
	__iv__return_expr_is_alloc = 2; 
}
void is_alloc_11_1(unsigned char res){
	__iv__return_expr_is_alloc = 0; 
}
void is_alloc_11_2(unsigned char res){
	__iv__return_expr_is_alloc = 0; 
}
void is_alloc_11_3(unsigned char res){
	__iv__return_expr_is_alloc = 0; 
}
void reschedule_12_1(API reschedule__api, unsigned char tid){
	push_task_into_readyQ_91_1(tid, task_dyn_info[(signed long int)(tid)].dyn_prio, current_pc[(signed long int)(tid)], (push_type)(1));
	get_task_from_readyQ_92_1();
}
void push_task_into_readyQ_91_1(unsigned char t, unsigned char p, signed int pc, push_type pushkind){
	task_state[2] = 1; 
	front[2] = 0; 
	k = 0; 
	readyQ[2][0].tid = 2; 
	size[2] = 1; 
	wholesize = 2; 
}
void get_task_from_readyQ_92_1(){
	current_tid = 1; 
	current_prio = 3; 
	readyQ[3][0].tid = 0; 
	front[3] = 1; 
	size[3] = 0; 
	wholesize = 1; 
	max_prio = 3; 
	max_prio = 2; 
	task_state[1] = 2; 
}
void postjob_25_2(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_14_2();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_15_3(aid);
	aid = 2; 
	ALARM_handler_15_4(aid);
	aid = 3; 
}
void is_active_alarm_exists_14_2(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_15_3(signed int aid){
	alarm_info[1].next_alarm_tick = 29; 
}
void ALARM_handler_15_4(signed int aid){
	alarm_info[2].next_alarm_tick = 49; 
}
void check_property_26_2(){
}
void is_active_obj_exists_22_3(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void Func_AcquisitionTask_23_1(){
	__CPROVER_assume(((current_pc[1] == 1)));
	__CPROVER_assume(!(((signed int)(tracking_enabled) == 0)));
	signed int return_value_send_nxtcam_command;
	send_nxtcam_command_45_1((U8)(2), (U8)(69));
	return_value_send_nxtcam_command = __iv__return_expr_send_nxtcam_command;
	tracking_enabled = (S8)(return_value_send_nxtcam_command);
	TerminateTask_54_1();
	current_pc[1] = 4;
}
void send_nxtcam_command_45_1(U8 port_id, U8 command){
	signed int return_value_i2c_busy;
	i2c_busy_2_1((signed int)(port_id));
	return_value_i2c_busy = 4096; 
	i2c_busy_2_2((signed int)(port_id));
	return_value_i2c_busy = 8; 
	i2c_busy_2_3((signed int)(port_id));
	return_value_i2c_busy = 2; 
	i2c_busy_2_4((signed int)(port_id));
	return_value_i2c_busy = 1; 
	i2c_busy_2_5((signed int)(port_id));
	return_value_i2c_busy = 32; 
	i2c_busy_2_6((signed int)(port_id));
	return_value_i2c_busy = 8; 
	i2c_busy_2_7((signed int)(port_id));
	return_value_i2c_busy = 2; 
	i2c_busy_2_8((signed int)(port_id));
	return_value_i2c_busy = 2; 
	i2c_busy_2_9((signed int)(port_id));
	return_value_i2c_busy = 1; 
	i2c_busy_2_10((signed int)(port_id));
	return_value_i2c_busy = 2; 
	i2c_busy_2_11((signed int)(port_id));
	return_value_i2c_busy = 512; 
	i2c_busy_2_12((signed int)(port_id));
	return_value_i2c_busy = 8; 
	i2c_busy_2_13((signed int)(port_id));
	return_value_i2c_busy = 32; 
	i2c_busy_2_14((signed int)(port_id));
	return_value_i2c_busy = 8; 
	i2c_busy_2_15((signed int)(port_id));
	return_value_i2c_busy = 64; 
	i2c_busy_2_16((signed int)(port_id));
	return_value_i2c_busy = 16777216; 
	i2c_busy_2_17((signed int)(port_id));
	return_value_i2c_busy = 536870912; 
	i2c_busy_2_18((signed int)(port_id));
	return_value_i2c_busy = 16777216; 
	i2c_busy_2_19((signed int)(port_id));
	return_value_i2c_busy = 33554432; 
	i2c_busy_2_20((signed int)(port_id));
	return_value_i2c_busy = 8388608; 
	i2c_busy_2_21((signed int)(port_id));
	return_value_i2c_busy = 1; 
	i2c_busy_2_22((signed int)(port_id));
	return_value_i2c_busy = 4096; 
	i2c_busy_2_23((signed int)(port_id));
	return_value_i2c_busy = 131072; 
	i2c_busy_2_24((signed int)(port_id));
	return_value_i2c_busy = 16384; 
	i2c_busy_2_25((signed int)(port_id));
	return_value_i2c_busy = 8192; 
	i2c_busy_2_26((signed int)(port_id));
	return_value_i2c_busy = 1; 
	i2c_busy_2_27((signed int)(port_id));
	return_value_i2c_busy = 512; 
	i2c_busy_2_28((signed int)(port_id));
	return_value_i2c_busy = -2147483648; 
	i2c_busy_2_29((signed int)(port_id));
	return_value_i2c_busy = 2; 
	i2c_busy_2_30((signed int)(port_id));
	return_value_i2c_busy = 8; 
	i2c_busy_2_31((signed int)(port_id));
	return_value_i2c_busy = 2; 
	i2c_busy_2_32((signed int)(port_id));
	return_value_i2c_busy = 4096; 
	i2c_busy_2_33((signed int)(port_id));
	return_value_i2c_busy = 256; 
	i2c_busy_2_34((signed int)(port_id));
	return_value_i2c_busy = 2048; 
	i2c_busy_2_35((signed int)(port_id));
	return_value_i2c_busy = 33554432; 
	i2c_busy_2_36((signed int)(port_id));
	return_value_i2c_busy = 1; 
	i2c_busy_2_37((signed int)(port_id));
	return_value_i2c_busy = 32; 
	i2c_busy_2_38((signed int)(port_id));
	return_value_i2c_busy = 2; 
	i2c_busy_2_39((signed int)(port_id));
	return_value_i2c_busy = 131072; 
	i2c_busy_2_40((signed int)(port_id));
	return_value_i2c_busy = 4096; 
	i2c_busy_2_41((signed int)(port_id));
	return_value_i2c_busy = 4096; 
	i2c_busy_2_42((signed int)(port_id));
	return_value_i2c_busy = 0; 
	nxtcambuffer[0] = command;
	SINT ret;
	i2c_start_transaction_3_1((signed int)(port_id), 1u, 0x41, 1, nxtcambuffer, 1u, 1);
	ret = __iv__return_expr_i2c_start_transaction;
	__iv__return_expr_send_nxtcam_command = ret;
}
void i2c_busy_2_1(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 4096; 
	__iv__return_expr_i2c_busy = 4096; 
}
void i2c_busy_2_2(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 8; 
	__iv__return_expr_i2c_busy = 8; 
}
void i2c_busy_2_3(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 2; 
	__iv__return_expr_i2c_busy = 2; 
}
void i2c_busy_2_4(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 1; 
	__iv__return_expr_i2c_busy = 1; 
}
void i2c_busy_2_5(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 32; 
	__iv__return_expr_i2c_busy = 32; 
}
void i2c_busy_2_6(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 8; 
	__iv__return_expr_i2c_busy = 8; 
}
void i2c_busy_2_7(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 2; 
	__iv__return_expr_i2c_busy = 2; 
}
void i2c_busy_2_8(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 2; 
	__iv__return_expr_i2c_busy = 2; 
}
void i2c_busy_2_9(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 1; 
	__iv__return_expr_i2c_busy = 1; 
}
void i2c_busy_2_10(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 2; 
	__iv__return_expr_i2c_busy = 2; 
}
void i2c_busy_2_11(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 512; 
	__iv__return_expr_i2c_busy = 512; 
}
void i2c_busy_2_12(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 8; 
	__iv__return_expr_i2c_busy = 8; 
}
void i2c_busy_2_13(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 32; 
	__iv__return_expr_i2c_busy = 32; 
}
void i2c_busy_2_14(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 8; 
	__iv__return_expr_i2c_busy = 8; 
}
void i2c_busy_2_15(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 64; 
	__iv__return_expr_i2c_busy = 64; 
}
void i2c_busy_2_16(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 16777216; 
	__iv__return_expr_i2c_busy = 16777216; 
}
void i2c_busy_2_17(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 536870912; 
	__iv__return_expr_i2c_busy = 536870912; 
}
void i2c_busy_2_18(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 16777216; 
	__iv__return_expr_i2c_busy = 16777216; 
}
void i2c_busy_2_19(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 33554432; 
	__iv__return_expr_i2c_busy = 33554432; 
}
void i2c_busy_2_20(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 8388608; 
	__iv__return_expr_i2c_busy = 8388608; 
}
void i2c_busy_2_21(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 1; 
	__iv__return_expr_i2c_busy = 1; 
}
void i2c_busy_2_22(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 4096; 
	__iv__return_expr_i2c_busy = 4096; 
}
void i2c_busy_2_23(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 131072; 
	__iv__return_expr_i2c_busy = 131072; 
}
void i2c_busy_2_24(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 16384; 
	__iv__return_expr_i2c_busy = 16384; 
}
void i2c_busy_2_25(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 8192; 
	__iv__return_expr_i2c_busy = 8192; 
}
void i2c_busy_2_26(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 1; 
	__iv__return_expr_i2c_busy = 1; 
}
void i2c_busy_2_27(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 512; 
	__iv__return_expr_i2c_busy = 512; 
}
void i2c_busy_2_28(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = -2147483648; 
	__iv__return_expr_i2c_busy = -2147483648; 
}
void i2c_busy_2_29(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 2; 
	__iv__return_expr_i2c_busy = 2; 
}
void i2c_busy_2_30(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 8; 
	__iv__return_expr_i2c_busy = 8; 
}
void i2c_busy_2_31(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 2; 
	__iv__return_expr_i2c_busy = 2; 
}
void i2c_busy_2_32(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 4096; 
	__iv__return_expr_i2c_busy = 4096; 
}
void i2c_busy_2_33(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 256; 
	__iv__return_expr_i2c_busy = 256; 
}
void i2c_busy_2_34(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 2048; 
	__iv__return_expr_i2c_busy = 2048; 
}
void i2c_busy_2_35(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 33554432; 
	__iv__return_expr_i2c_busy = 33554432; 
}
void i2c_busy_2_36(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 1; 
	__iv__return_expr_i2c_busy = 1; 
}
void i2c_busy_2_37(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 32; 
	__iv__return_expr_i2c_busy = 32; 
}
void i2c_busy_2_38(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 2; 
	__iv__return_expr_i2c_busy = 2; 
}
void i2c_busy_2_39(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 131072; 
	__iv__return_expr_i2c_busy = 131072; 
}
void i2c_busy_2_40(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 4096; 
	__iv__return_expr_i2c_busy = 4096; 
}
void i2c_busy_2_41(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 4096; 
	__iv__return_expr_i2c_busy = 4096; 
}
void i2c_busy_2_42(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 0; 
	__iv__return_expr_i2c_busy = 0; 
}
void i2c_start_transaction_3_1(signed int port, unsigned int address, signed int internal_address, signed int n_internal_address_bytes, unsigned char* i2c_start_transaction__data, unsigned int nbytes, signed int write){
	signed int i2c_start_transaction_ret;
	i2c_start_transaction_ret = __VERIFIER_nondet_signed_int(); __CPROVER_printf("__iv__test_case:%d", i2c_start_transaction_ret);
	signed int i;
	unsigned char return_value___VERIFIER_nondet_unsigned_char;
	signed int return_value_nondet_unsigned_char;
	return_value_nondet_unsigned_char = __VERIFIER_nondet_signed_int(); __CPROVER_printf("__iv__test_case:%d", return_value_nondet_unsigned_char);
	return_value___VERIFIER_nondet_unsigned_char = (unsigned char)(return_value_nondet_unsigned_char);
	i2c_start_transaction__data[0l] = return_value___VERIFIER_nondet_unsigned_char;
	__CPROVER_assume(((signed int)(i2c_start_transaction__data[0l]) <= 8));
	i = 1;
	__CPROVER_assume((((unsigned int)(i) >= nbytes)));
	__iv__return_expr_i2c_start_transaction = i2c_start_transaction_ret;
}
void TerminateTask_54_1(){
	TerminateTask_Common_32_1();
}
void TerminateTask_Common_32_1(){
	task_dyn_info[1].act_cnt = 0; 
	task_state[1] = 0; 
	reschedule_72_1((API)(1), current_tid);
}
void reschedule_72_1(API reschedule__api, unsigned char tid){
	get_task_from_readyQ_90_1();
}
void get_task_from_readyQ_90_1(){
	current_tid = 2; 
	current_prio = 2; 
	readyQ[2][0].tid = 0; 
	front[2] = 1; 
	size[2] = 0; 
	wholesize = 0; 
	max_prio = 2; 
	max_prio = 1; 
	max_prio = 0; 
	task_state[2] = 2; 
}
void postjob_25_3(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_14_3();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_15_5(aid);
	aid = 2; 
	ALARM_handler_15_6(aid);
	aid = 3; 
}
void is_active_alarm_exists_14_3(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_15_5(signed int aid){
	alarm_info[1].next_alarm_tick = 28; 
}
void ALARM_handler_15_6(signed int aid){
	alarm_info[2].next_alarm_tick = 48; 
}
void check_property_26_3(){
}
void is_active_obj_exists_22_4(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 0; 
	i = 2; 
	tmp_if_expr = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void Func_ControlTask_24_3(){
	TerminateTask_60_1();
	current_pc[2] = 4; 
}
void TerminateTask_60_1(){
	TerminateTask_Common_32_2();
}
void TerminateTask_Common_32_2(){
	task_dyn_info[2].act_cnt = 0; 
	task_state[2] = 0; 
	reschedule_72_2((API)(1), current_tid);
}
void reschedule_72_2(API reschedule__api, unsigned char tid){
	get_task_from_readyQ_90_2();
}
void get_task_from_readyQ_90_2(){
	current_tid = 0; 
	current_prio = 0; 
}
void postjob_25_4(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_14_4();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_15_7(aid);
	aid = 2; 
	ALARM_handler_15_8(aid);
	aid = 3; 
}
void is_active_alarm_exists_14_4(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_15_7(signed int aid){
	alarm_info[1].next_alarm_tick = 27; 
}
void ALARM_handler_15_8(signed int aid){
	alarm_info[2].next_alarm_tick = 47; 
}
void check_property_26_4(){
}
void is_active_obj_exists_22_5(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 0; 
	i = 2; 
	tmp_if_expr = 0; 
	i = 3; 
	tmp_if_expr = 0; 
	i = 4; 
	i = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void postjob_25_5(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_14_5();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_15_9(aid);
	aid = 2; 
	ALARM_handler_15_10(aid);
	aid = 3; 
}
void is_active_alarm_exists_14_5(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_15_9(signed int aid){
	alarm_info[1].next_alarm_tick = 26; 
}
void ALARM_handler_15_10(signed int aid){
	alarm_info[2].next_alarm_tick = 46; 
}
void check_property_26_5(){
}
void is_active_obj_exists_22_6(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 0; 
	i = 2; 
	tmp_if_expr = 0; 
	i = 3; 
	tmp_if_expr = 0; 
	i = 4; 
	i = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void postjob_25_6(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_14_6();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_15_11(aid);
	aid = 2; 
	ALARM_handler_15_12(aid);
	aid = 3; 
}
void is_active_alarm_exists_14_6(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_15_11(signed int aid){
	alarm_info[1].next_alarm_tick = 25; 
}
void ALARM_handler_15_12(signed int aid){
	alarm_info[2].next_alarm_tick = 45; 
}
void check_property_26_6(){
}
void is_active_obj_exists_22_7(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 0; 
	i = 2; 
	tmp_if_expr = 0; 
	i = 3; 
	tmp_if_expr = 0; 
	i = 4; 
	i = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void postjob_25_7(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_14_7();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_15_13(aid);
	aid = 2; 
	ALARM_handler_15_14(aid);
	aid = 3; 
}
void is_active_alarm_exists_14_7(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_15_13(signed int aid){
	alarm_info[1].next_alarm_tick = 24; 
}
void ALARM_handler_15_14(signed int aid){
	alarm_info[2].next_alarm_tick = 44; 
}
void check_property_26_7(){
}
void is_active_obj_exists_22_8(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 0; 
	i = 2; 
	tmp_if_expr = 0; 
	i = 3; 
	tmp_if_expr = 0; 
	i = 4; 
	i = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void postjob_25_8(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_14_8();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_15_15(aid);
	aid = 2; 
	ALARM_handler_15_16(aid);
	aid = 3; 
}
void is_active_alarm_exists_14_8(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_15_15(signed int aid){
	alarm_info[1].next_alarm_tick = 23; 
}
void ALARM_handler_15_16(signed int aid){
	alarm_info[2].next_alarm_tick = 43; 
}
void check_property_26_8(){
}
void is_active_obj_exists_22_9(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 0; 
	i = 2; 
	tmp_if_expr = 0; 
	i = 3; 
	tmp_if_expr = 0; 
	i = 4; 
	i = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void postjob_25_9(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_14_9();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_15_17(aid);
	aid = 2; 
	ALARM_handler_15_18(aid);
	aid = 3; 
}
void is_active_alarm_exists_14_9(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_15_17(signed int aid){
	alarm_info[1].next_alarm_tick = 22; 
}
void ALARM_handler_15_18(signed int aid){
	alarm_info[2].next_alarm_tick = 42; 
}
void check_property_26_9(){
}
void is_active_obj_exists_22_10(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 0; 
	i = 2; 
	tmp_if_expr = 0; 
	i = 3; 
	tmp_if_expr = 0; 
	i = 4; 
	i = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void postjob_25_10(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_14_10();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_15_19(aid);
	aid = 2; 
	ALARM_handler_15_20(aid);
	aid = 3; 
}
void is_active_alarm_exists_14_10(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_15_19(signed int aid){
	alarm_info[1].next_alarm_tick = 21; 
}
void ALARM_handler_15_20(signed int aid){
	alarm_info[2].next_alarm_tick = 41; 
}
void check_property_26_10(){
}
void is_active_obj_exists_22_11(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 0; 
	i = 2; 
	tmp_if_expr = 0; 
	i = 3; 
	tmp_if_expr = 0; 
	i = 4; 
	i = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void postjob_25_11(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_14_11();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_15_21(aid);
	aid = 2; 
	ALARM_handler_15_22(aid);
	aid = 3; 
}
void is_active_alarm_exists_14_11(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_15_21(signed int aid){
	alarm_info[1].next_alarm_tick = 20; 
}
void ALARM_handler_15_22(signed int aid){
	alarm_info[2].next_alarm_tick = 40; 
}
void check_property_26_11(){
}
void is_active_obj_exists_22_12(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 0; 
	i = 2; 
	tmp_if_expr = 0; 
	i = 3; 
	tmp_if_expr = 0; 
	i = 4; 
	i = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void postjob_25_12(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_14_12();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_15_23(aid);
	aid = 2; 
	ALARM_handler_15_24(aid);
	aid = 3; 
}
void is_active_alarm_exists_14_12(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_15_23(signed int aid){
	alarm_info[1].next_alarm_tick = 19; 
}
void ALARM_handler_15_24(signed int aid){
	alarm_info[2].next_alarm_tick = 39; 
}
void check_property_26_12(){
}
void is_active_obj_exists_22_13(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 0; 
	i = 2; 
	tmp_if_expr = 0; 
	i = 3; 
	tmp_if_expr = 0; 
	i = 4; 
	i = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void postjob_25_13(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_14_13();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_15_25(aid);
	aid = 2; 
	ALARM_handler_15_26(aid);
	aid = 3; 
}
void is_active_alarm_exists_14_13(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_15_25(signed int aid){
	alarm_info[1].next_alarm_tick = 18; 
}
void ALARM_handler_15_26(signed int aid){
	alarm_info[2].next_alarm_tick = 38; 
}
void check_property_26_13(){
}
void is_active_obj_exists_22_14(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 0; 
	i = 2; 
	tmp_if_expr = 0; 
	i = 3; 
	tmp_if_expr = 0; 
	i = 4; 
	i = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void postjob_25_14(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_14_14();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_15_27(aid);
	aid = 2; 
	ALARM_handler_15_28(aid);
	aid = 3; 
}
void is_active_alarm_exists_14_14(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_15_27(signed int aid){
	alarm_info[1].next_alarm_tick = 17; 
}
void ALARM_handler_15_28(signed int aid){
	alarm_info[2].next_alarm_tick = 37; 
}
void check_property_26_14(){
}
void is_active_obj_exists_22_15(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 0; 
	i = 2; 
	tmp_if_expr = 0; 
	i = 3; 
	tmp_if_expr = 0; 
	i = 4; 
	i = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void postjob_25_15(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_14_15();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_15_29(aid);
	aid = 2; 
	ALARM_handler_15_30(aid);
	aid = 3; 
}
void is_active_alarm_exists_14_15(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_15_29(signed int aid){
	alarm_info[1].next_alarm_tick = 16; 
}
void ALARM_handler_15_30(signed int aid){
	alarm_info[2].next_alarm_tick = 36; 
}
void check_property_26_15(){
}
void is_active_obj_exists_22_16(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 0; 
	i = 2; 
	tmp_if_expr = 0; 
	i = 3; 
	tmp_if_expr = 0; 
	i = 4; 
	i = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void postjob_25_16(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_14_16();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_15_31(aid);
	aid = 2; 
	ALARM_handler_15_32(aid);
	aid = 3; 
}
void is_active_alarm_exists_14_16(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_15_31(signed int aid){
	alarm_info[1].next_alarm_tick = 15; 
}
void ALARM_handler_15_32(signed int aid){
	alarm_info[2].next_alarm_tick = 35; 
}
void check_property_26_16(){
}
void is_active_obj_exists_22_17(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 0; 
	i = 2; 
	tmp_if_expr = 0; 
	i = 3; 
	tmp_if_expr = 0; 
	i = 4; 
	i = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void postjob_25_17(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_14_17();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_15_33(aid);
	aid = 2; 
	ALARM_handler_15_34(aid);
	aid = 3; 
}
void is_active_alarm_exists_14_17(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_15_33(signed int aid){
	alarm_info[1].next_alarm_tick = 14; 
}
void ALARM_handler_15_34(signed int aid){
	alarm_info[2].next_alarm_tick = 34; 
}
void check_property_26_17(){
}
void is_active_obj_exists_22_18(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 0; 
	i = 2; 
	tmp_if_expr = 0; 
	i = 3; 
	tmp_if_expr = 0; 
	i = 4; 
	i = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void postjob_25_18(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_14_18();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_15_35(aid);
	aid = 2; 
	ALARM_handler_15_36(aid);
	aid = 3; 
}
void is_active_alarm_exists_14_18(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_15_35(signed int aid){
	alarm_info[1].next_alarm_tick = 13; 
}
void ALARM_handler_15_36(signed int aid){
	alarm_info[2].next_alarm_tick = 33; 
}
void check_property_26_18(){
}
void is_active_obj_exists_22_19(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 0; 
	i = 2; 
	tmp_if_expr = 0; 
	i = 3; 
	tmp_if_expr = 0; 
	i = 4; 
	i = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void postjob_25_19(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_14_19();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_15_37(aid);
	aid = 2; 
	ALARM_handler_15_38(aid);
	aid = 3; 
}
void is_active_alarm_exists_14_19(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_15_37(signed int aid){
	alarm_info[1].next_alarm_tick = 12; 
}
void ALARM_handler_15_38(signed int aid){
	alarm_info[2].next_alarm_tick = 32; 
}
void check_property_26_19(){
}
void is_active_obj_exists_22_20(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 0; 
	i = 2; 
	tmp_if_expr = 0; 
	i = 3; 
	tmp_if_expr = 0; 
	i = 4; 
	i = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void postjob_25_20(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_14_20();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_15_39(aid);
	aid = 2; 
	ALARM_handler_15_40(aid);
	aid = 3; 
}
void is_active_alarm_exists_14_20(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_15_39(signed int aid){
	alarm_info[1].next_alarm_tick = 11; 
}
void ALARM_handler_15_40(signed int aid){
	alarm_info[2].next_alarm_tick = 31; 
}
void check_property_26_20(){
}
void is_active_obj_exists_22_21(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 0; 
	i = 2; 
	tmp_if_expr = 0; 
	i = 3; 
	tmp_if_expr = 0; 
	i = 4; 
	i = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void postjob_25_21(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_14_21();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_15_41(aid);
	aid = 2; 
	ALARM_handler_15_42(aid);
	aid = 3; 
}
void is_active_alarm_exists_14_21(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_15_41(signed int aid){
	alarm_info[1].next_alarm_tick = 10; 
}
void ALARM_handler_15_42(signed int aid){
	alarm_info[2].next_alarm_tick = 30; 
}
void check_property_26_21(){
}
void is_active_obj_exists_22_22(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 0; 
	i = 2; 
	tmp_if_expr = 0; 
	i = 3; 
	tmp_if_expr = 0; 
	i = 4; 
	i = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void postjob_25_22(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_14_22();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_15_43(aid);
	aid = 2; 
	ALARM_handler_15_44(aid);
	aid = 3; 
}
void is_active_alarm_exists_14_22(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_15_43(signed int aid){
	alarm_info[1].next_alarm_tick = 9; 
}
void ALARM_handler_15_44(signed int aid){
	alarm_info[2].next_alarm_tick = 29; 
}
void check_property_26_22(){
}
void is_active_obj_exists_22_23(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 0; 
	i = 2; 
	tmp_if_expr = 0; 
	i = 3; 
	tmp_if_expr = 0; 
	i = 4; 
	i = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void postjob_25_23(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_14_23();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_15_45(aid);
	aid = 2; 
	ALARM_handler_15_46(aid);
	aid = 3; 
}
void is_active_alarm_exists_14_23(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_15_45(signed int aid){
	alarm_info[1].next_alarm_tick = 8; 
}
void ALARM_handler_15_46(signed int aid){
	alarm_info[2].next_alarm_tick = 28; 
}
void check_property_26_23(){
}
void is_active_obj_exists_22_24(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 0; 
	i = 2; 
	tmp_if_expr = 0; 
	i = 3; 
	tmp_if_expr = 0; 
	i = 4; 
	i = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void postjob_25_24(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_14_24();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_15_47(aid);
	aid = 2; 
	ALARM_handler_15_48(aid);
	aid = 3; 
}
void is_active_alarm_exists_14_24(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_15_47(signed int aid){
	alarm_info[1].next_alarm_tick = 7; 
}
void ALARM_handler_15_48(signed int aid){
	alarm_info[2].next_alarm_tick = 27; 
}
void check_property_26_24(){
}
void is_active_obj_exists_22_25(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 0; 
	i = 2; 
	tmp_if_expr = 0; 
	i = 3; 
	tmp_if_expr = 0; 
	i = 4; 
	i = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void postjob_25_25(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_14_25();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_15_49(aid);
	aid = 2; 
	ALARM_handler_15_50(aid);
	aid = 3; 
}
void is_active_alarm_exists_14_25(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_15_49(signed int aid){
	alarm_info[1].next_alarm_tick = 6; 
}
void ALARM_handler_15_50(signed int aid){
	alarm_info[2].next_alarm_tick = 26; 
}
void check_property_26_25(){
}
void is_active_obj_exists_22_26(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 0; 
	i = 2; 
	tmp_if_expr = 0; 
	i = 3; 
	tmp_if_expr = 0; 
	i = 4; 
	i = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void postjob_25_26(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_14_26();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_15_51(aid);
	aid = 2; 
	ALARM_handler_15_52(aid);
	aid = 3; 
}
void is_active_alarm_exists_14_26(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_15_51(signed int aid){
	alarm_info[1].next_alarm_tick = 5; 
}
void ALARM_handler_15_52(signed int aid){
	alarm_info[2].next_alarm_tick = 25; 
}
void check_property_26_26(){
}
void is_active_obj_exists_22_27(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 0; 
	i = 2; 
	tmp_if_expr = 0; 
	i = 3; 
	tmp_if_expr = 0; 
	i = 4; 
	i = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void postjob_25_27(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_14_27();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_15_53(aid);
	aid = 2; 
	ALARM_handler_15_54(aid);
	aid = 3; 
}
void is_active_alarm_exists_14_27(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_15_53(signed int aid){
	alarm_info[1].next_alarm_tick = 4; 
}
void ALARM_handler_15_54(signed int aid){
	alarm_info[2].next_alarm_tick = 24; 
}
void check_property_26_27(){
}
void is_active_obj_exists_22_28(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 0; 
	i = 2; 
	tmp_if_expr = 0; 
	i = 3; 
	tmp_if_expr = 0; 
	i = 4; 
	i = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void postjob_25_28(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_14_28();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_15_55(aid);
	aid = 2; 
	ALARM_handler_15_56(aid);
	aid = 3; 
}
void is_active_alarm_exists_14_28(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_15_55(signed int aid){
	alarm_info[1].next_alarm_tick = 3; 
}
void ALARM_handler_15_56(signed int aid){
	alarm_info[2].next_alarm_tick = 23; 
}
void check_property_26_28(){
}
void is_active_obj_exists_22_29(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 0; 
	i = 2; 
	tmp_if_expr = 0; 
	i = 3; 
	tmp_if_expr = 0; 
	i = 4; 
	i = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void postjob_25_29(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_14_29();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_15_57(aid);
	aid = 2; 
	ALARM_handler_15_58(aid);
	aid = 3; 
}
void is_active_alarm_exists_14_29(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_15_57(signed int aid){
	alarm_info[1].next_alarm_tick = 2; 
}
void ALARM_handler_15_58(signed int aid){
	alarm_info[2].next_alarm_tick = 22; 
}
void check_property_26_29(){
}
void is_active_obj_exists_22_30(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 0; 
	i = 2; 
	tmp_if_expr = 0; 
	i = 3; 
	tmp_if_expr = 0; 
	i = 4; 
	i = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void postjob_25_30(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_14_30();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_15_59(aid);
	aid = 2; 
	ALARM_handler_15_60(aid);
	aid = 3; 
}
void is_active_alarm_exists_14_30(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_15_59(signed int aid){
	alarm_info[1].next_alarm_tick = 1; 
}
void ALARM_handler_15_60(signed int aid){
	alarm_info[2].next_alarm_tick = 21; 
}
void check_property_26_30(){
}
void is_active_obj_exists_22_31(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 0; 
	i = 2; 
	tmp_if_expr = 0; 
	i = 3; 
	tmp_if_expr = 0; 
	i = 4; 
	i = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void postjob_25_31(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_14_31();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_15_61(aid);
	aid = 2; 
	ALARM_handler_15_62(aid);
	aid = 3; 
}
void is_active_alarm_exists_14_31(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_15_61(signed int aid){
	alarm_info[1].next_alarm_tick = 0; 
	alarm_info[1].next_alarm_tick = 30; 
	alarm_state[1] = 2; 
	ActivateTask_Common_56_3(alarm_info[(signed long int)(aid)].param1);
	alarm_state[1] = 1; 
}
void ActivateTask_Common_56_3(unsigned char reftask){
	signed int i;
	i = 0; 
	Event_Table[0].task_alloc[1] = 0; 
	i = 1; 
	Event_Table[1].task_alloc[1] = 0; 
	i = 2; 
	Event_Table[2].task_alloc[1] = 0; 
	i = 3; 
	task_dyn_info[1].act_cnt = 1; 
	push_task_into_readyQ_76_2(reftask, task_static_info[(signed long int)(reftask)].prio, 0, (push_type)(0));
	reschedule_77_2((API)(0), current_tid);
}
void push_task_into_readyQ_76_2(unsigned char t, unsigned char p, signed int pc, push_type pushkind){
	task_state[1] = 1; 
	k = 1; 
	readyQ[3][1].tid = 1; 
	rear[3] = 2; 
	size[3] = 1; 
	wholesize = 1; 
	max_prio = 3; 
}
void reschedule_77_2(API reschedule__api, unsigned char tid){
	push_task_into_readyQ_91_2(tid, task_dyn_info[(signed long int)(tid)].dyn_prio, current_pc[(signed long int)(tid)], (push_type)(1));
	get_task_from_readyQ_92_2();
}
void push_task_into_readyQ_91_2(unsigned char t, unsigned char p, signed int pc, push_type pushkind){
	task_state[0] = 1; 
	front[0] = 3; 
	k = 3; 
	readyQ[0][3].tid = 0; 
	size[0] = 1; 
	wholesize = 2; 
}
void get_task_from_readyQ_92_2(){
	current_tid = 1; 
	current_prio = 3; 
	readyQ[3][1].tid = 0; 
	front[3] = 2; 
	size[3] = 0; 
	wholesize = 1; 
	max_prio = 3; 
	max_prio = 2; 
	max_prio = 1; 
	max_prio = 0; 
	task_state[1] = 2; 
}
void ALARM_handler_15_62(signed int aid){
	alarm_info[2].next_alarm_tick = 20; 
}
void check_property_26_31(){
}
void is_active_obj_exists_22_32(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void Func_AcquisitionTask_23_2(){
	__CPROVER_assume(!((current_pc[1] == 1)));
	__CPROVER_assume(!((current_pc[1] == 2)));
	__CPROVER_assume(!((current_pc[1] == 3)));
	__CPROVER_assume(((current_pc[1] == 4)));
	current_pc[1] = 1;
}
void postjob_25_32(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_14_32();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_15_63(aid);
	aid = 2; 
	ALARM_handler_15_64(aid);
	aid = 3; 
}
void is_active_alarm_exists_14_32(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_15_63(signed int aid){
	alarm_info[1].next_alarm_tick = 29; 
}
void ALARM_handler_15_64(signed int aid){
	alarm_info[2].next_alarm_tick = 19; 
}
void check_property_26_32(){
}
void is_active_obj_exists_22_33(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void Func_AcquisitionTask_23_3(){
	__CPROVER_assume(((current_pc[1] == 1)));
	__CPROVER_assume((((signed int)(tracking_enabled) == 0)));
	request_46_1((U8)(2));
	rectindex = getbiggestrect((U8)(0), -1);
	__CPROVER_assume(!(!((rectindex >= 0))));
	getArea_48_1((U8)(rectindex));
	area = __iv__return_expr_getArea;
	median_filter_49_1(area);
	area = __iv__return_expr_median_filter;
	acq_size = fisqrt(area);
	getX_51_1((U8)(rectindex));
	x = __iv__return_expr_getX;
	GetResource_52_1((unsigned char)(1));
	current_pc[1] = 2;
}
void request_46_1(U8 port_id){
	signed int return_value_i2c_busy;
	i2c_busy_81_1((signed int)(port_id));
	return_value_i2c_busy = 0; 
	i2c_start_transaction_82_1((signed int)(port_id), 1u, 0x42, 1, nxtcamdata, 41u, 0);
}
void i2c_busy_81_1(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 0; 
	__iv__return_expr_i2c_busy = 0; 
}
void i2c_start_transaction_82_1(signed int port, unsigned int address, signed int internal_address, signed int n_internal_address_bytes, unsigned char* i2c_start_transaction__data, unsigned int nbytes, signed int write){
	signed int i2c_start_transaction_ret;
	i2c_start_transaction_ret = __VERIFIER_nondet_signed_int(); __CPROVER_printf("__iv__test_case:%d", i2c_start_transaction_ret);
	signed int i;
	unsigned char return_value___VERIFIER_nondet_unsigned_char;
	signed int return_value_nondet_unsigned_char;
	return_value_nondet_unsigned_char = __VERIFIER_nondet_signed_int(); __CPROVER_printf("__iv__test_case:%d", return_value_nondet_unsigned_char);
	return_value___VERIFIER_nondet_unsigned_char = (unsigned char)(return_value_nondet_unsigned_char);
	i2c_start_transaction__data[0l] = return_value___VERIFIER_nondet_unsigned_char;
	__CPROVER_assume(((signed int)(i2c_start_transaction__data[0l]) <= 8));
	i = 1;
	__CPROVER_assume(!(((unsigned int)(i) >= nbytes)));
	unsigned char return_value___VERIFIER_nondet_unsigned_char_0;
	signed int return_value_nondet_unsigned_char_0;
	return_value_nondet_unsigned_char_0 = __VERIFIER_nondet_signed_int(); __CPROVER_printf("__iv__test_case:%d", return_value_nondet_unsigned_char_0);
	return_value___VERIFIER_nondet_unsigned_char_0 = (unsigned char)(return_value_nondet_unsigned_char_0);
	i2c_start_transaction__data[(signed long int)(i)] = return_value___VERIFIER_nondet_unsigned_char_0;
	i = (i + 1);
	__CPROVER_assume(!(((unsigned int)(i) >= nbytes)));
	return_value_nondet_unsigned_char_0 = __VERIFIER_nondet_signed_int(); __CPROVER_printf("__iv__test_case:%d", return_value_nondet_unsigned_char_0);
	return_value___VERIFIER_nondet_unsigned_char_0 = (unsigned char)(return_value_nondet_unsigned_char_0);
	i2c_start_transaction__data[(signed long int)(i)] = return_value___VERIFIER_nondet_unsigned_char_0;
	i = (i + 1);
	__CPROVER_assume(!(((unsigned int)(i) >= nbytes)));
	return_value_nondet_unsigned_char_0 = __VERIFIER_nondet_signed_int(); __CPROVER_printf("__iv__test_case:%d", return_value_nondet_unsigned_char_0);
	return_value___VERIFIER_nondet_unsigned_char_0 = (unsigned char)(return_value_nondet_unsigned_char_0);
	i2c_start_transaction__data[(signed long int)(i)] = return_value___VERIFIER_nondet_unsigned_char_0;
	i = (i + 1);
	__CPROVER_assume(!(((unsigned int)(i) >= nbytes)));
	return_value_nondet_unsigned_char_0 = __VERIFIER_nondet_signed_int(); __CPROVER_printf("__iv__test_case:%d", return_value_nondet_unsigned_char_0);
	return_value___VERIFIER_nondet_unsigned_char_0 = (unsigned char)(return_value_nondet_unsigned_char_0);
	i2c_start_transaction__data[(signed long int)(i)] = return_value___VERIFIER_nondet_unsigned_char_0;
	i = (i + 1);
	__CPROVER_assume(!(((unsigned int)(i) >= nbytes)));
	return_value_nondet_unsigned_char_0 = __VERIFIER_nondet_signed_int(); __CPROVER_printf("__iv__test_case:%d", return_value_nondet_unsigned_char_0);
	return_value___VERIFIER_nondet_unsigned_char_0 = (unsigned char)(return_value_nondet_unsigned_char_0);
	i2c_start_transaction__data[(signed long int)(i)] = return_value___VERIFIER_nondet_unsigned_char_0;
	i = (i + 1);
	__CPROVER_assume(!(((unsigned int)(i) >= nbytes)));
	return_value_nondet_unsigned_char_0 = __VERIFIER_nondet_signed_int(); __CPROVER_printf("__iv__test_case:%d", return_value_nondet_unsigned_char_0);
	return_value___VERIFIER_nondet_unsigned_char_0 = (unsigned char)(return_value_nondet_unsigned_char_0);
	i2c_start_transaction__data[(signed long int)(i)] = return_value___VERIFIER_nondet_unsigned_char_0;
	i = (i + 1);
	__CPROVER_assume(!(((unsigned int)(i) >= nbytes)));
	return_value_nondet_unsigned_char_0 = __VERIFIER_nondet_signed_int(); __CPROVER_printf("__iv__test_case:%d", return_value_nondet_unsigned_char_0);
	return_value___VERIFIER_nondet_unsigned_char_0 = (unsigned char)(return_value_nondet_unsigned_char_0);
	i2c_start_transaction__data[(signed long int)(i)] = return_value___VERIFIER_nondet_unsigned_char_0;
	i = (i + 1);
	__CPROVER_assume(!(((unsigned int)(i) >= nbytes)));
	return_value_nondet_unsigned_char_0 = __VERIFIER_nondet_signed_int(); __CPROVER_printf("__iv__test_case:%d", return_value_nondet_unsigned_char_0);
	return_value___VERIFIER_nondet_unsigned_char_0 = (unsigned char)(return_value_nondet_unsigned_char_0);
	i2c_start_transaction__data[(signed long int)(i)] = return_value___VERIFIER_nondet_unsigned_char_0;
	i = (i + 1);
	__CPROVER_assume(!(((unsigned int)(i) >= nbytes)));
	return_value_nondet_unsigned_char_0 = __VERIFIER_nondet_signed_int(); __CPROVER_printf("__iv__test_case:%d", return_value_nondet_unsigned_char_0);
	return_value___VERIFIER_nondet_unsigned_char_0 = (unsigned char)(return_value_nondet_unsigned_char_0);
	i2c_start_transaction__data[(signed long int)(i)] = return_value___VERIFIER_nondet_unsigned_char_0;
	i = (i + 1);
	__CPROVER_assume(!(((unsigned int)(i) >= nbytes)));
	return_value_nondet_unsigned_char_0 = __VERIFIER_nondet_signed_int(); __CPROVER_printf("__iv__test_case:%d", return_value_nondet_unsigned_char_0);
	return_value___VERIFIER_nondet_unsigned_char_0 = (unsigned char)(return_value_nondet_unsigned_char_0);
	i2c_start_transaction__data[(signed long int)(i)] = return_value___VERIFIER_nondet_unsigned_char_0;
	i = (i + 1);
	__CPROVER_assume(!(((unsigned int)(i) >= nbytes)));
	return_value_nondet_unsigned_char_0 = __VERIFIER_nondet_signed_int(); __CPROVER_printf("__iv__test_case:%d", return_value_nondet_unsigned_char_0);
	return_value___VERIFIER_nondet_unsigned_char_0 = (unsigned char)(return_value_nondet_unsigned_char_0);
	i2c_start_transaction__data[(signed long int)(i)] = return_value___VERIFIER_nondet_unsigned_char_0;
	i = (i + 1);
	__CPROVER_assume(!(((unsigned int)(i) >= nbytes)));
	return_value_nondet_unsigned_char_0 = __VERIFIER_nondet_signed_int(); __CPROVER_printf("__iv__test_case:%d", return_value_nondet_unsigned_char_0);
	return_value___VERIFIER_nondet_unsigned_char_0 = (unsigned char)(return_value_nondet_unsigned_char_0);
	i2c_start_transaction__data[(signed long int)(i)] = return_value___VERIFIER_nondet_unsigned_char_0;
	i = (i + 1);
	__CPROVER_assume(!(((unsigned int)(i) >= nbytes)));
	return_value_nondet_unsigned_char_0 = __VERIFIER_nondet_signed_int(); __CPROVER_printf("__iv__test_case:%d", return_value_nondet_unsigned_char_0);
	return_value___VERIFIER_nondet_unsigned_char_0 = (unsigned char)(return_value_nondet_unsigned_char_0);
	i2c_start_transaction__data[(signed long int)(i)] = return_value___VERIFIER_nondet_unsigned_char_0;
	i = (i + 1);
	__CPROVER_assume(!(((unsigned int)(i) >= nbytes)));
	return_value_nondet_unsigned_char_0 = __VERIFIER_nondet_signed_int(); __CPROVER_printf("__iv__test_case:%d", return_value_nondet_unsigned_char_0);
	return_value___VERIFIER_nondet_unsigned_char_0 = (unsigned char)(return_value_nondet_unsigned_char_0);
	i2c_start_transaction__data[(signed long int)(i)] = return_value___VERIFIER_nondet_unsigned_char_0;
	i = (i + 1);
	__CPROVER_assume(!(((unsigned int)(i) >= nbytes)));
	return_value_nondet_unsigned_char_0 = __VERIFIER_nondet_signed_int(); __CPROVER_printf("__iv__test_case:%d", return_value_nondet_unsigned_char_0);
	return_value___VERIFIER_nondet_unsigned_char_0 = (unsigned char)(return_value_nondet_unsigned_char_0);
	i2c_start_transaction__data[(signed long int)(i)] = return_value___VERIFIER_nondet_unsigned_char_0;
	i = (i + 1);
	__CPROVER_assume(!(((unsigned int)(i) >= nbytes)));
	return_value_nondet_unsigned_char_0 = __VERIFIER_nondet_signed_int(); __CPROVER_printf("__iv__test_case:%d", return_value_nondet_unsigned_char_0);
	return_value___VERIFIER_nondet_unsigned_char_0 = (unsigned char)(return_value_nondet_unsigned_char_0);
	i2c_start_transaction__data[(signed long int)(i)] = return_value___VERIFIER_nondet_unsigned_char_0;
	i = (i + 1);
	__CPROVER_assume(!(((unsigned int)(i) >= nbytes)));
	return_value_nondet_unsigned_char_0 = __VERIFIER_nondet_signed_int(); __CPROVER_printf("__iv__test_case:%d", return_value_nondet_unsigned_char_0);
	return_value___VERIFIER_nondet_unsigned_char_0 = (unsigned char)(return_value_nondet_unsigned_char_0);
	i2c_start_transaction__data[(signed long int)(i)] = return_value___VERIFIER_nondet_unsigned_char_0;
	i = (i + 1);
	__CPROVER_assume(!(((unsigned int)(i) >= nbytes)));
	return_value_nondet_unsigned_char_0 = __VERIFIER_nondet_signed_int(); __CPROVER_printf("__iv__test_case:%d", return_value_nondet_unsigned_char_0);
	return_value___VERIFIER_nondet_unsigned_char_0 = (unsigned char)(return_value_nondet_unsigned_char_0);
	i2c_start_transaction__data[(signed long int)(i)] = return_value___VERIFIER_nondet_unsigned_char_0;
	i = (i + 1);
	__CPROVER_assume(!(((unsigned int)(i) >= nbytes)));
	return_value_nondet_unsigned_char_0 = __VERIFIER_nondet_signed_int(); __CPROVER_printf("__iv__test_case:%d", return_value_nondet_unsigned_char_0);
	return_value___VERIFIER_nondet_unsigned_char_0 = (unsigned char)(return_value_nondet_unsigned_char_0);
	i2c_start_transaction__data[(signed long int)(i)] = return_value___VERIFIER_nondet_unsigned_char_0;
	i = (i + 1);
	__CPROVER_assume(!(((unsigned int)(i) >= nbytes)));
	return_value_nondet_unsigned_char_0 = __VERIFIER_nondet_signed_int(); __CPROVER_printf("__iv__test_case:%d", return_value_nondet_unsigned_char_0);
	return_value___VERIFIER_nondet_unsigned_char_0 = (unsigned char)(return_value_nondet_unsigned_char_0);
	i2c_start_transaction__data[(signed long int)(i)] = return_value___VERIFIER_nondet_unsigned_char_0;
	i = (i + 1);
	__CPROVER_assume(!(((unsigned int)(i) >= nbytes)));
	return_value_nondet_unsigned_char_0 = __VERIFIER_nondet_signed_int(); __CPROVER_printf("__iv__test_case:%d", return_value_nondet_unsigned_char_0);
	return_value___VERIFIER_nondet_unsigned_char_0 = (unsigned char)(return_value_nondet_unsigned_char_0);
	i2c_start_transaction__data[(signed long int)(i)] = return_value___VERIFIER_nondet_unsigned_char_0;
	i = (i + 1);
	__CPROVER_assume(!(((unsigned int)(i) >= nbytes)));
	return_value_nondet_unsigned_char_0 = __VERIFIER_nondet_signed_int(); __CPROVER_printf("__iv__test_case:%d", return_value_nondet_unsigned_char_0);
	return_value___VERIFIER_nondet_unsigned_char_0 = (unsigned char)(return_value_nondet_unsigned_char_0);
	i2c_start_transaction__data[(signed long int)(i)] = return_value___VERIFIER_nondet_unsigned_char_0;
	i = (i + 1);
	__CPROVER_assume(!(((unsigned int)(i) >= nbytes)));
	return_value_nondet_unsigned_char_0 = __VERIFIER_nondet_signed_int(); __CPROVER_printf("__iv__test_case:%d", return_value_nondet_unsigned_char_0);
	return_value___VERIFIER_nondet_unsigned_char_0 = (unsigned char)(return_value_nondet_unsigned_char_0);
	i2c_start_transaction__data[(signed long int)(i)] = return_value___VERIFIER_nondet_unsigned_char_0;
	i = (i + 1);
	__CPROVER_assume(!(((unsigned int)(i) >= nbytes)));
	return_value_nondet_unsigned_char_0 = __VERIFIER_nondet_signed_int(); __CPROVER_printf("__iv__test_case:%d", return_value_nondet_unsigned_char_0);
	return_value___VERIFIER_nondet_unsigned_char_0 = (unsigned char)(return_value_nondet_unsigned_char_0);
	i2c_start_transaction__data[(signed long int)(i)] = return_value___VERIFIER_nondet_unsigned_char_0;
	i = (i + 1);
	__CPROVER_assume(!(((unsigned int)(i) >= nbytes)));
	return_value_nondet_unsigned_char_0 = __VERIFIER_nondet_signed_int(); __CPROVER_printf("__iv__test_case:%d", return_value_nondet_unsigned_char_0);
	return_value___VERIFIER_nondet_unsigned_char_0 = (unsigned char)(return_value_nondet_unsigned_char_0);
	i2c_start_transaction__data[(signed long int)(i)] = return_value___VERIFIER_nondet_unsigned_char_0;
	i = (i + 1);
	__CPROVER_assume(!(((unsigned int)(i) >= nbytes)));
	return_value_nondet_unsigned_char_0 = __VERIFIER_nondet_signed_int(); __CPROVER_printf("__iv__test_case:%d", return_value_nondet_unsigned_char_0);
	return_value___VERIFIER_nondet_unsigned_char_0 = (unsigned char)(return_value_nondet_unsigned_char_0);
	i2c_start_transaction__data[(signed long int)(i)] = return_value___VERIFIER_nondet_unsigned_char_0;
	i = (i + 1);
	__CPROVER_assume(!(((unsigned int)(i) >= nbytes)));
	return_value_nondet_unsigned_char_0 = __VERIFIER_nondet_signed_int(); __CPROVER_printf("__iv__test_case:%d", return_value_nondet_unsigned_char_0);
	return_value___VERIFIER_nondet_unsigned_char_0 = (unsigned char)(return_value_nondet_unsigned_char_0);
	i2c_start_transaction__data[(signed long int)(i)] = return_value___VERIFIER_nondet_unsigned_char_0;
	i = (i + 1);
	__CPROVER_assume(!(((unsigned int)(i) >= nbytes)));
	return_value_nondet_unsigned_char_0 = __VERIFIER_nondet_signed_int(); __CPROVER_printf("__iv__test_case:%d", return_value_nondet_unsigned_char_0);
	return_value___VERIFIER_nondet_unsigned_char_0 = (unsigned char)(return_value_nondet_unsigned_char_0);
	i2c_start_transaction__data[(signed long int)(i)] = return_value___VERIFIER_nondet_unsigned_char_0;
	i = (i + 1);
	__CPROVER_assume(!(((unsigned int)(i) >= nbytes)));
	return_value_nondet_unsigned_char_0 = __VERIFIER_nondet_signed_int(); __CPROVER_printf("__iv__test_case:%d", return_value_nondet_unsigned_char_0);
	return_value___VERIFIER_nondet_unsigned_char_0 = (unsigned char)(return_value_nondet_unsigned_char_0);
	i2c_start_transaction__data[(signed long int)(i)] = return_value___VERIFIER_nondet_unsigned_char_0;
	i = (i + 1);
	__CPROVER_assume(!(((unsigned int)(i) >= nbytes)));
	return_value_nondet_unsigned_char_0 = __VERIFIER_nondet_signed_int(); __CPROVER_printf("__iv__test_case:%d", return_value_nondet_unsigned_char_0);
	return_value___VERIFIER_nondet_unsigned_char_0 = (unsigned char)(return_value_nondet_unsigned_char_0);
	i2c_start_transaction__data[(signed long int)(i)] = return_value___VERIFIER_nondet_unsigned_char_0;
	i = (i + 1);
	__CPROVER_assume(!(((unsigned int)(i) >= nbytes)));
	return_value_nondet_unsigned_char_0 = __VERIFIER_nondet_signed_int(); __CPROVER_printf("__iv__test_case:%d", return_value_nondet_unsigned_char_0);
	return_value___VERIFIER_nondet_unsigned_char_0 = (unsigned char)(return_value_nondet_unsigned_char_0);
	i2c_start_transaction__data[(signed long int)(i)] = return_value___VERIFIER_nondet_unsigned_char_0;
	i = (i + 1);
	__CPROVER_assume(!(((unsigned int)(i) >= nbytes)));
	return_value_nondet_unsigned_char_0 = __VERIFIER_nondet_signed_int(); __CPROVER_printf("__iv__test_case:%d", return_value_nondet_unsigned_char_0);
	return_value___VERIFIER_nondet_unsigned_char_0 = (unsigned char)(return_value_nondet_unsigned_char_0);
	i2c_start_transaction__data[(signed long int)(i)] = return_value___VERIFIER_nondet_unsigned_char_0;
	i = (i + 1);
	__CPROVER_assume(!(((unsigned int)(i) >= nbytes)));
	return_value_nondet_unsigned_char_0 = __VERIFIER_nondet_signed_int(); __CPROVER_printf("__iv__test_case:%d", return_value_nondet_unsigned_char_0);
	return_value___VERIFIER_nondet_unsigned_char_0 = (unsigned char)(return_value_nondet_unsigned_char_0);
	i2c_start_transaction__data[(signed long int)(i)] = return_value___VERIFIER_nondet_unsigned_char_0;
	i = (i + 1);
	__CPROVER_assume(!(((unsigned int)(i) >= nbytes)));
	return_value_nondet_unsigned_char_0 = __VERIFIER_nondet_signed_int(); __CPROVER_printf("__iv__test_case:%d", return_value_nondet_unsigned_char_0);
	return_value___VERIFIER_nondet_unsigned_char_0 = (unsigned char)(return_value_nondet_unsigned_char_0);
	i2c_start_transaction__data[(signed long int)(i)] = return_value___VERIFIER_nondet_unsigned_char_0;
	i = (i + 1);
	__CPROVER_assume(!(((unsigned int)(i) >= nbytes)));
	return_value_nondet_unsigned_char_0 = __VERIFIER_nondet_signed_int(); __CPROVER_printf("__iv__test_case:%d", return_value_nondet_unsigned_char_0);
	return_value___VERIFIER_nondet_unsigned_char_0 = (unsigned char)(return_value_nondet_unsigned_char_0);
	i2c_start_transaction__data[(signed long int)(i)] = return_value___VERIFIER_nondet_unsigned_char_0;
	i = (i + 1);
	__CPROVER_assume(!(((unsigned int)(i) >= nbytes)));
	return_value_nondet_unsigned_char_0 = __VERIFIER_nondet_signed_int(); __CPROVER_printf("__iv__test_case:%d", return_value_nondet_unsigned_char_0);
	return_value___VERIFIER_nondet_unsigned_char_0 = (unsigned char)(return_value_nondet_unsigned_char_0);
	i2c_start_transaction__data[(signed long int)(i)] = return_value___VERIFIER_nondet_unsigned_char_0;
	i = (i + 1);
	__CPROVER_assume(!(((unsigned int)(i) >= nbytes)));
	return_value_nondet_unsigned_char_0 = __VERIFIER_nondet_signed_int(); __CPROVER_printf("__iv__test_case:%d", return_value_nondet_unsigned_char_0);
	return_value___VERIFIER_nondet_unsigned_char_0 = (unsigned char)(return_value_nondet_unsigned_char_0);
	i2c_start_transaction__data[(signed long int)(i)] = return_value___VERIFIER_nondet_unsigned_char_0;
	i = (i + 1);
	__CPROVER_assume(!(((unsigned int)(i) >= nbytes)));
	return_value_nondet_unsigned_char_0 = __VERIFIER_nondet_signed_int(); __CPROVER_printf("__iv__test_case:%d", return_value_nondet_unsigned_char_0);
	return_value___VERIFIER_nondet_unsigned_char_0 = (unsigned char)(return_value_nondet_unsigned_char_0);
	i2c_start_transaction__data[(signed long int)(i)] = return_value___VERIFIER_nondet_unsigned_char_0;
	i = (i + 1);
	__CPROVER_assume(!(((unsigned int)(i) >= nbytes)));
	return_value_nondet_unsigned_char_0 = __VERIFIER_nondet_signed_int(); __CPROVER_printf("__iv__test_case:%d", return_value_nondet_unsigned_char_0);
	return_value___VERIFIER_nondet_unsigned_char_0 = (unsigned char)(return_value_nondet_unsigned_char_0);
	i2c_start_transaction__data[(signed long int)(i)] = return_value___VERIFIER_nondet_unsigned_char_0;
	i = (i + 1);
	__CPROVER_assume(!(((unsigned int)(i) >= nbytes)));
	return_value_nondet_unsigned_char_0 = __VERIFIER_nondet_signed_int(); __CPROVER_printf("__iv__test_case:%d", return_value_nondet_unsigned_char_0);
	return_value___VERIFIER_nondet_unsigned_char_0 = (unsigned char)(return_value_nondet_unsigned_char_0);
	i2c_start_transaction__data[(signed long int)(i)] = return_value___VERIFIER_nondet_unsigned_char_0;
	i = (i + 1);
	__CPROVER_assume((((unsigned int)(i) >= nbytes)));
	__iv__return_expr_i2c_start_transaction = i2c_start_transaction_ret;
}
void getArea_48_1(U8 getArea__rectindex){
	signed int return_value_getWidth;
	getWidth_17_1(getArea__rectindex);
	return_value_getWidth = __iv__return_expr_getWidth;
	signed int return_value_getHeight;
	getHeight_18_1(getArea__rectindex);
	return_value_getHeight = __iv__return_expr_getHeight;
	__iv__return_expr_getArea = (return_value_getWidth * return_value_getHeight);
}
void getWidth_17_1(U8 getWidth__rectindex){
	signed int xul;
	xul = (signed int)(nxtcamdata[(signed long int)((((5 * (signed int)(getWidth__rectindex)) + 1) + 1))]);
	signed int xlr;
	xlr = (signed int)(nxtcamdata[(signed long int)((((5 * (signed int)(getWidth__rectindex)) + 1) + 3))]);
	__iv__return_expr_getWidth = ((xlr - xul) >= 0) ? (xlr - xul) : -((xlr - xul));
}
void getHeight_18_1(U8 getHeight__rectindex){
	signed int yul;
	yul = (signed int)(nxtcamdata[(signed long int)((((5 * (signed int)(getHeight__rectindex)) + 1) + 2))]);
	signed int ylr;
	ylr = (signed int)(nxtcamdata[(signed long int)((((5 * (signed int)(getHeight__rectindex)) + 1) + 4))]);
	__iv__return_expr_getHeight = ((ylr - yul) >= 0) ? (ylr - yul) : -((ylr - yul));
}
void median_filter_49_1(data_t datum){
	struct pair *successor;
	struct pair *scan;
	struct pair *scanold;
	struct pair *median;
	unsigned int i;
	datpoint = (datpoint + 1l);
	__CPROVER_assume((!(((datpoint - buffer) >= 15l))));
	datpoint->value = datum;
	successor = datpoint->point;
	median = &big;
	scan = &big;
	__CPROVER_assume((!((scan->point == datpoint))));
	scanold = scan;
	scan = scan->point;
	i = 0u;
	__CPROVER_assume(!((i >= 15u)));
	__CPROVER_assume((!((scan->point == datpoint))));
	__CPROVER_assume(!((scan->value >= datum)));
	datpoint->point = scanold->point;
	scanold->point = datpoint;
	datum = 0;
	median = median->point;
	__CPROVER_assume(((scan == &small)));
	__iv__return_expr_median_filter = median->value;
}
void getX_51_1(U8 getX__rectindex){
	signed int xul;
	xul = (signed int)(nxtcamdata[(signed long int)((((5 * (signed int)(getX__rectindex)) + 1) + 1))]);
	signed int xlr;
	xlr = (signed int)(nxtcamdata[(signed long int)((((5 * (signed int)(getX__rectindex)) + 1) + 3))]);
	__iv__return_expr_getX = ((xlr + xul) / 2);
}
void GetResource_52_1(unsigned char resid){
	GetResource_Common_43_2(resid);
}
void GetResource_Common_43_2(unsigned char resid){
	signed int return_value_is_alloc;
	__CPROVER_bool tmp_if_expr;
	is_alloc_19_2(resid);
	return_value_is_alloc = 0; 
	tmp_if_expr = 0; 
	Resource_Table[1].alloc = 1; 
	task_dyn_info[1].dyn_prio = 4; 
}
void is_alloc_19_2(unsigned char res){
	__iv__return_expr_is_alloc = 0; 
}
void postjob_25_33(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_14_33();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_15_65(aid);
	aid = 2; 
	ALARM_handler_15_66(aid);
	aid = 3; 
}
void is_active_alarm_exists_14_33(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_15_65(signed int aid){
	alarm_info[1].next_alarm_tick = 28; 
}
void ALARM_handler_15_66(signed int aid){
	alarm_info[2].next_alarm_tick = 18; 
}
void check_property_26_33(){
	if (!(!((((acq_size < 50) && (acq_size > 0)) && (x == 83))))) __CPROVER_printf("violated property: Node_16_347");assert(!((((acq_size < 50) && (acq_size > 0)) && (x == 83))));
}
