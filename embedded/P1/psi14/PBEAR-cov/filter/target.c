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
extern unsigned char __VERIFIER_nondet_unsigned_char();
extern signed int __VERIFIER_nondet_signed_int();
extern U8 * __VERIFIER_nondet_U8_star();
signed int getbiggestrect(U8 pcolorid, signed int pminarea) {
	signed int getbiggestrect__1__rectindex;
	getbiggestrect__1__rectindex = -1;
	signed int i;
	signed int maxarea;
	maxarea = pminarea;
	i = 0;
	Node_3_47:;
	if ((i >= (signed int)(nxtcamdata[0]))) goto Node_3_68;
	signed int colorid;
	colorid = (signed int)(nxtcamdata[(signed long int)(((1 + (5 * i)) + 0))]);
	if (!((colorid == (signed int)(pcolorid)))) goto Node_3_64;
	signed int getbiggestrect__1__1__1__1__area;
	getbiggestrect__1__1__1__1__area = getArea((U8)(i));
	if (!((getbiggestrect__1__1__1__1__area >= maxarea))) goto Node_3_60;
	maxarea = getbiggestrect__1__1__1__1__area;
	getbiggestrect__1__rectindex = i;
	Node_3_60:;
	Node_3_64:;
	i = (i + 1);
	goto Node_3_47;
	Node_3_68:;
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
	Node_52_708:;
	if ((t == 0)) goto Node_52_712;
	cnt = (cnt + 1);
	t = (t >> 1);
	goto Node_52_708;
	Node_52_712:;
	if ((cnt >= 7)) goto Node_52_716;
	t = (val << (6 - cnt));
	goto Node_52_717;
	Node_52_716:;
	t = (val >> (cnt - 6));
	Node_52_717:;
	return ((ftbl[(signed long int)(cnt)] * ftbl2[(signed long int)((t & 31))]) >> 15);
}
void StartOS_0_1(unsigned char app_mode);
void initialize_33_1();
void startup_process_34_1();
void push_task_into_readyQ_70_1(unsigned char t, unsigned char p, signed int pc, push_type pushkind);
void get_task_from_readyQ_71_1();
void app_35_1();
void is_active_obj_exists_23_1();
void Func_ControlTask_25_1();
void GetResource_58_1(unsigned char resid);
void GetResource_Common_44_1(unsigned char resid);
void is_alloc_42_1(unsigned char res);
void postjob_26_1();
void is_active_alarm_exists_15_1();
void ALARM_handler_16_1(signed int aid);
void ActivateTask_Common_56_1(unsigned char reftask);
void push_task_into_readyQ_78_1(unsigned char t, unsigned char p, signed int pc, push_type pushkind);
void reschedule_79_1(API reschedule__api, unsigned char tid);
void ALARM_handler_16_2(signed int aid);
void ActivateTask_Common_56_2(unsigned char reftask);
void check_property_27_1();
void is_active_obj_exists_23_2();
void Func_ControlTask_25_2();
void ReleaseResource_59_1(unsigned char resid);
void ReleaseResource_Common_40_1(unsigned char resid);
void is_alloc_18_1(unsigned char res);
void is_alloc_19_1(unsigned char res);
void is_alloc_19_2(unsigned char res);
void is_alloc_19_3(unsigned char res);
void reschedule_20_1(API reschedule__api, unsigned char tid);
void push_task_into_readyQ_91_1(unsigned char t, unsigned char p, signed int pc, push_type pushkind);
void get_task_from_readyQ_92_1();
void postjob_26_2();
void is_active_alarm_exists_15_2();
void ALARM_handler_16_3(signed int aid);
void ALARM_handler_16_4(signed int aid);
void check_property_27_2();
void is_active_obj_exists_23_3();
void Func_AcquisitionTask_24_1();
void send_nxtcam_command_46_1(U8 port_id, U8 command);
void i2c_busy_9_1(signed int port);
void i2c_busy_9_2(signed int port);
void i2c_busy_9_3(signed int port);
void i2c_busy_9_4(signed int port);
void i2c_busy_9_5(signed int port);
void i2c_busy_9_6(signed int port);
void i2c_busy_9_7(signed int port);
void i2c_busy_9_8(signed int port);
void i2c_busy_9_9(signed int port);
void i2c_busy_9_10(signed int port);
void i2c_busy_9_11(signed int port);
void i2c_busy_9_12(signed int port);
void i2c_busy_9_13(signed int port);
void i2c_busy_9_14(signed int port);
void i2c_busy_9_15(signed int port);
void i2c_busy_9_16(signed int port);
void i2c_busy_9_17(signed int port);
void i2c_busy_9_18(signed int port);
void i2c_busy_9_19(signed int port);
void i2c_busy_9_20(signed int port);
void i2c_busy_9_21(signed int port);
void i2c_busy_9_22(signed int port);
void i2c_busy_9_23(signed int port);
void i2c_busy_9_24(signed int port);
void i2c_busy_9_25(signed int port);
void i2c_busy_9_26(signed int port);
void i2c_busy_9_27(signed int port);
void i2c_busy_9_28(signed int port);
void i2c_busy_9_29(signed int port);
void i2c_busy_9_30(signed int port);
void i2c_busy_9_31(signed int port);
void i2c_busy_9_32(signed int port);
void i2c_busy_9_33(signed int port);
void i2c_busy_9_34(signed int port);
void i2c_busy_9_35(signed int port);
void i2c_busy_9_36(signed int port);
void i2c_busy_9_37(signed int port);
void i2c_busy_9_38(signed int port);
void i2c_busy_9_39(signed int port);
void i2c_busy_9_40(signed int port);
void i2c_busy_9_41(signed int port);
void i2c_busy_9_42(signed int port);
void i2c_busy_9_43(signed int port);
void i2c_busy_9_44(signed int port);
void i2c_start_transaction_10_1(signed int port, unsigned int address, signed int internal_address, signed int n_internal_address_bytes, unsigned char* i2c_start_transaction__data, unsigned int nbytes, signed int write);
void TerminateTask_54_1();
void TerminateTask_Common_31_1();
void reschedule_74_1(API reschedule__api, unsigned char tid);
void get_task_from_readyQ_90_1();
void postjob_26_3();
void is_active_alarm_exists_15_3();
void ALARM_handler_16_5(signed int aid);
void ALARM_handler_16_6(signed int aid);
void check_property_27_3();
void is_active_obj_exists_23_4();
void Func_ControlTask_25_3();
void TerminateTask_60_1();
void TerminateTask_Common_31_2();
void reschedule_74_2(API reschedule__api, unsigned char tid);
void get_task_from_readyQ_90_2();
void postjob_26_4();
void is_active_alarm_exists_15_4();
void ALARM_handler_16_7(signed int aid);
void ALARM_handler_16_8(signed int aid);
void check_property_27_4();
void is_active_obj_exists_23_5();
void postjob_26_5();
void is_active_alarm_exists_15_5();
void ALARM_handler_16_9(signed int aid);
void ALARM_handler_16_10(signed int aid);
void check_property_27_5();
void is_active_obj_exists_23_6();
void postjob_26_6();
void is_active_alarm_exists_15_6();
void ALARM_handler_16_11(signed int aid);
void ALARM_handler_16_12(signed int aid);
void check_property_27_6();
void is_active_obj_exists_23_7();
void postjob_26_7();
void is_active_alarm_exists_15_7();
void ALARM_handler_16_13(signed int aid);
void ALARM_handler_16_14(signed int aid);
void check_property_27_7();
void is_active_obj_exists_23_8();
void postjob_26_8();
void is_active_alarm_exists_15_8();
void ALARM_handler_16_15(signed int aid);
void ALARM_handler_16_16(signed int aid);
void check_property_27_8();
void is_active_obj_exists_23_9();
void postjob_26_9();
void is_active_alarm_exists_15_9();
void ALARM_handler_16_17(signed int aid);
void ALARM_handler_16_18(signed int aid);
void check_property_27_9();
void is_active_obj_exists_23_10();
void postjob_26_10();
void is_active_alarm_exists_15_10();
void ALARM_handler_16_19(signed int aid);
void ALARM_handler_16_20(signed int aid);
void check_property_27_10();
void is_active_obj_exists_23_11();
void postjob_26_11();
void is_active_alarm_exists_15_11();
void ALARM_handler_16_21(signed int aid);
void ALARM_handler_16_22(signed int aid);
void check_property_27_11();
void is_active_obj_exists_23_12();
void postjob_26_12();
void is_active_alarm_exists_15_12();
void ALARM_handler_16_23(signed int aid);
void ALARM_handler_16_24(signed int aid);
void check_property_27_12();
void is_active_obj_exists_23_13();
void postjob_26_13();
void is_active_alarm_exists_15_13();
void ALARM_handler_16_25(signed int aid);
void ALARM_handler_16_26(signed int aid);
void check_property_27_13();
void is_active_obj_exists_23_14();
void postjob_26_14();
void is_active_alarm_exists_15_14();
void ALARM_handler_16_27(signed int aid);
void ALARM_handler_16_28(signed int aid);
void check_property_27_14();
void is_active_obj_exists_23_15();
void postjob_26_15();
void is_active_alarm_exists_15_15();
void ALARM_handler_16_29(signed int aid);
void ALARM_handler_16_30(signed int aid);
void check_property_27_15();
void is_active_obj_exists_23_16();
void postjob_26_16();
void is_active_alarm_exists_15_16();
void ALARM_handler_16_31(signed int aid);
void ALARM_handler_16_32(signed int aid);
void check_property_27_16();
void is_active_obj_exists_23_17();
void postjob_26_17();
void is_active_alarm_exists_15_17();
void ALARM_handler_16_33(signed int aid);
void ALARM_handler_16_34(signed int aid);
void check_property_27_17();
void is_active_obj_exists_23_18();
void postjob_26_18();
void is_active_alarm_exists_15_18();
void ALARM_handler_16_35(signed int aid);
void ALARM_handler_16_36(signed int aid);
void check_property_27_18();
void is_active_obj_exists_23_19();
void postjob_26_19();
void is_active_alarm_exists_15_19();
void ALARM_handler_16_37(signed int aid);
void ALARM_handler_16_38(signed int aid);
void check_property_27_19();
void is_active_obj_exists_23_20();
void postjob_26_20();
void is_active_alarm_exists_15_20();
void ALARM_handler_16_39(signed int aid);
void ALARM_handler_16_40(signed int aid);
void check_property_27_20();
void is_active_obj_exists_23_21();
void postjob_26_21();
void is_active_alarm_exists_15_21();
void ALARM_handler_16_41(signed int aid);
void ALARM_handler_16_42(signed int aid);
void check_property_27_21();
void is_active_obj_exists_23_22();
void postjob_26_22();
void is_active_alarm_exists_15_22();
void ALARM_handler_16_43(signed int aid);
void ALARM_handler_16_44(signed int aid);
void check_property_27_22();
void is_active_obj_exists_23_23();
void postjob_26_23();
void is_active_alarm_exists_15_23();
void ALARM_handler_16_45(signed int aid);
void ALARM_handler_16_46(signed int aid);
void check_property_27_23();
void is_active_obj_exists_23_24();
void postjob_26_24();
void is_active_alarm_exists_15_24();
void ALARM_handler_16_47(signed int aid);
void ALARM_handler_16_48(signed int aid);
void check_property_27_24();
void is_active_obj_exists_23_25();
void postjob_26_25();
void is_active_alarm_exists_15_25();
void ALARM_handler_16_49(signed int aid);
void ALARM_handler_16_50(signed int aid);
void check_property_27_25();
void is_active_obj_exists_23_26();
void postjob_26_26();
void is_active_alarm_exists_15_26();
void ALARM_handler_16_51(signed int aid);
void ALARM_handler_16_52(signed int aid);
void check_property_27_26();
void is_active_obj_exists_23_27();
void postjob_26_27();
void is_active_alarm_exists_15_27();
void ALARM_handler_16_53(signed int aid);
void ALARM_handler_16_54(signed int aid);
void check_property_27_27();
void is_active_obj_exists_23_28();
void postjob_26_28();
void is_active_alarm_exists_15_28();
void ALARM_handler_16_55(signed int aid);
void ALARM_handler_16_56(signed int aid);
void check_property_27_28();
void is_active_obj_exists_23_29();
void postjob_26_29();
void is_active_alarm_exists_15_29();
void ALARM_handler_16_57(signed int aid);
void ALARM_handler_16_58(signed int aid);
void check_property_27_29();
void is_active_obj_exists_23_30();
void postjob_26_30();
void is_active_alarm_exists_15_30();
void ALARM_handler_16_59(signed int aid);
void ALARM_handler_16_60(signed int aid);
void check_property_27_30();
void is_active_obj_exists_23_31();
void postjob_26_31();
void is_active_alarm_exists_15_31();
void ALARM_handler_16_61(signed int aid);
void ActivateTask_Common_56_3(unsigned char reftask);
void push_task_into_readyQ_78_2(unsigned char t, unsigned char p, signed int pc, push_type pushkind);
void reschedule_79_2(API reschedule__api, unsigned char tid);
void push_task_into_readyQ_91_2(unsigned char t, unsigned char p, signed int pc, push_type pushkind);
void get_task_from_readyQ_92_2();
void ALARM_handler_16_62(signed int aid);
void check_property_27_31();
void is_active_obj_exists_23_32();
void Func_AcquisitionTask_24_2();
void postjob_26_32();
void is_active_alarm_exists_15_32();
void ALARM_handler_16_63(signed int aid);
void ALARM_handler_16_64(signed int aid);
void check_property_27_32();
void is_active_obj_exists_23_33();
void Func_AcquisitionTask_24_3();
void request_47_1(U8 port_id);
void i2c_busy_11_1(signed int port);
void i2c_start_transaction_12_1(signed int port, unsigned int address, signed int internal_address, signed int n_internal_address_bytes, unsigned char* i2c_start_transaction__data, unsigned int nbytes, signed int write);
void median_filter_50_1(data_t datum);
void GetResource_52_1(unsigned char resid);
void GetResource_Common_44_2(unsigned char resid);
void is_alloc_42_2(unsigned char res);
void postjob_26_33();
void is_active_alarm_exists_15_33();
void ALARM_handler_16_65(signed int aid);
void ALARM_handler_16_66(signed int aid);
void check_property_27_33();
extern object_data_t __VERIFIER_nondet_object_data_t();
extern unsigned char __VERIFIER_nondet_unsigned_char();
extern signed int __VERIFIER_nondet_signed_int();
extern U8 * __VERIFIER_nondet_U8_star();
int __iv__return_expr_main;
signed int __iv__return_expr_i2c_start_transaction;
signed int __iv__return_expr_getbiggestrect;
signed int __iv__return_expr_getArea;
SINT __iv__return_expr_send_nxtcam_command;
signed int __iv__return_expr_request;
signed int __iv__return_expr_i2c_busy;
signed int __iv__return_expr_postjob;
signed int __iv__return_expr_is_active_alarm_exists;
data_t __iv__return_expr_median_filter;
signed int __iv__return_expr_is_active_obj_exists;
signed int __iv__return_expr_getWidth;
signed int __iv__return_expr_getHeight;
signed int __iv__return_expr_ReleaseResource_Common;
signed int __iv__return_expr_is_alloc;
signed int __iv__return_expr_WaitEvent_Common;
signed int __iv__return_expr_WaitEvent;
signed int __iv__return_expr_TerminateTask;
signed int __iv__return_expr_SetRelAlarm_Common;
signed int __iv__return_expr_SetRelAlarm;
signed int __iv__return_expr_SetEvent;
signed int __iv__return_expr_ReleaseResource;
signed int __iv__return_expr_GetResource_Common;
signed int __iv__return_expr_GetResource;
signed int __iv__return_expr_ClearEvent_Common;
signed int __iv__return_expr_SetEvent_Common;
signed int __iv__return_expr_Schedule_Common;
signed int __iv__return_expr_ChainTask_Common;
signed int __iv__return_expr_ActivateTask;
signed int __iv__return_expr_ClearEvent;
signed int __iv__return_expr_Schedule;
signed int __iv__return_expr_TerminateTask_Common;
signed int __iv__return_expr_ChainTask;
signed int __iv__return_expr_ActivateTask_Common;
signed int __iv__return_expr_CancelAlarm;
signed int __iv__return_expr_CancelAlarm_Common;
signed int __iv__return_expr_getX;
signed int __iv__return_expr_getY;
U8* __iv__return_expr_getdata;
signed int __iv__return_expr_fisqrt;
signed int __iv__return_expr_directionPIDController;
object_data_t __iv__return_expr_getData;
signed int __iv__return_expr_reschedule;
signed int __iv__return_expr_speedPIDController;
int main(){
	StartOS_0_1((unsigned char)(1));
}
void StartOS_0_1(unsigned char app_mode){
	os_on = 1; 
	initialize_33_1();
	startup_process_34_1();
	app_35_1();
}
void initialize_33_1(){
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
void startup_process_34_1(){
	unsigned int i;
	i = 0; 
	i = 1; 
	i = 2; 
	task_dyn_info[2].act_cnt = 1; 
	current_prio = 2; 
	push_task_into_readyQ_70_1((unsigned char)(i), current_prio, 0, (push_type)(0));
	task_state[2] = 1; 
	i = 3; 
	i = 4; 
	get_task_from_readyQ_71_1();
	task_state[2] = 2; 
}
void push_task_into_readyQ_70_1(unsigned char t, unsigned char p, signed int pc, push_type pushkind){
	task_state[2] = 1; 
	k = 0; 
	readyQ[2][0].tid = 2; 
	rear[2] = 1; 
	size[2] = 1; 
	wholesize = 1; 
	max_prio = 2; 
}
void get_task_from_readyQ_71_1(){
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
void app_35_1(){
	signed int count;
	count = 0; 
	current_pc[1] = 1;
	current_pc[2] = 1; 
	signed int return_value_is_active_obj_exists;
	is_active_obj_exists_23_1();
	return_value_is_active_obj_exists = 1; 
	Func_ControlTask_25_1();
	postjob_26_1();
	check_property_27_1();
	count = 1; 
	is_active_obj_exists_23_2();
	return_value_is_active_obj_exists = 1; 
	Func_ControlTask_25_2();
	postjob_26_2();
	check_property_27_2();
	count = 2; 
	is_active_obj_exists_23_3();
	return_value_is_active_obj_exists = 1; 
	Func_AcquisitionTask_24_1();
	postjob_26_3();
	check_property_27_3();
	count = 3; 
	is_active_obj_exists_23_4();
	return_value_is_active_obj_exists = 1; 
	Func_ControlTask_25_3();
	postjob_26_4();
	check_property_27_4();
	count = 4; 
	is_active_obj_exists_23_5();
	return_value_is_active_obj_exists = 1; 
	postjob_26_5();
	check_property_27_5();
	count = 5; 
	is_active_obj_exists_23_6();
	return_value_is_active_obj_exists = 1; 
	postjob_26_6();
	check_property_27_6();
	count = 6; 
	is_active_obj_exists_23_7();
	return_value_is_active_obj_exists = 1; 
	postjob_26_7();
	check_property_27_7();
	count = 7; 
	is_active_obj_exists_23_8();
	return_value_is_active_obj_exists = 1; 
	postjob_26_8();
	check_property_27_8();
	count = 8; 
	is_active_obj_exists_23_9();
	return_value_is_active_obj_exists = 1; 
	postjob_26_9();
	check_property_27_9();
	count = 9; 
	is_active_obj_exists_23_10();
	return_value_is_active_obj_exists = 1; 
	postjob_26_10();
	check_property_27_10();
	count = 10; 
	is_active_obj_exists_23_11();
	return_value_is_active_obj_exists = 1; 
	postjob_26_11();
	check_property_27_11();
	count = 11; 
	is_active_obj_exists_23_12();
	return_value_is_active_obj_exists = 1; 
	postjob_26_12();
	check_property_27_12();
	count = 12; 
	is_active_obj_exists_23_13();
	return_value_is_active_obj_exists = 1; 
	postjob_26_13();
	check_property_27_13();
	count = 13; 
	is_active_obj_exists_23_14();
	return_value_is_active_obj_exists = 1; 
	postjob_26_14();
	check_property_27_14();
	count = 14; 
	is_active_obj_exists_23_15();
	return_value_is_active_obj_exists = 1; 
	postjob_26_15();
	check_property_27_15();
	count = 15; 
	is_active_obj_exists_23_16();
	return_value_is_active_obj_exists = 1; 
	postjob_26_16();
	check_property_27_16();
	count = 16; 
	is_active_obj_exists_23_17();
	return_value_is_active_obj_exists = 1; 
	postjob_26_17();
	check_property_27_17();
	count = 17; 
	is_active_obj_exists_23_18();
	return_value_is_active_obj_exists = 1; 
	postjob_26_18();
	check_property_27_18();
	count = 18; 
	is_active_obj_exists_23_19();
	return_value_is_active_obj_exists = 1; 
	postjob_26_19();
	check_property_27_19();
	count = 19; 
	is_active_obj_exists_23_20();
	return_value_is_active_obj_exists = 1; 
	postjob_26_20();
	check_property_27_20();
	count = 20; 
	is_active_obj_exists_23_21();
	return_value_is_active_obj_exists = 1; 
	postjob_26_21();
	check_property_27_21();
	count = 21; 
	is_active_obj_exists_23_22();
	return_value_is_active_obj_exists = 1; 
	postjob_26_22();
	check_property_27_22();
	count = 22; 
	is_active_obj_exists_23_23();
	return_value_is_active_obj_exists = 1; 
	postjob_26_23();
	check_property_27_23();
	count = 23; 
	is_active_obj_exists_23_24();
	return_value_is_active_obj_exists = 1; 
	postjob_26_24();
	check_property_27_24();
	count = 24; 
	is_active_obj_exists_23_25();
	return_value_is_active_obj_exists = 1; 
	postjob_26_25();
	check_property_27_25();
	count = 25; 
	is_active_obj_exists_23_26();
	return_value_is_active_obj_exists = 1; 
	postjob_26_26();
	check_property_27_26();
	count = 26; 
	is_active_obj_exists_23_27();
	return_value_is_active_obj_exists = 1; 
	postjob_26_27();
	check_property_27_27();
	count = 27; 
	is_active_obj_exists_23_28();
	return_value_is_active_obj_exists = 1; 
	postjob_26_28();
	check_property_27_28();
	count = 28; 
	is_active_obj_exists_23_29();
	return_value_is_active_obj_exists = 1; 
	postjob_26_29();
	check_property_27_29();
	count = 29; 
	is_active_obj_exists_23_30();
	return_value_is_active_obj_exists = 1; 
	postjob_26_30();
	check_property_27_30();
	count = 30; 
	is_active_obj_exists_23_31();
	return_value_is_active_obj_exists = 1; 
	postjob_26_31();
	check_property_27_31();
	count = 31; 
	is_active_obj_exists_23_32();
	return_value_is_active_obj_exists = 1; 
	Func_AcquisitionTask_24_2();
	postjob_26_32();
	check_property_27_32();
	count = 32; 
	is_active_obj_exists_23_33();
	return_value_is_active_obj_exists = 1; 
	Func_AcquisitionTask_24_3();
	postjob_26_33();
	check_property_27_33();
}
void is_active_obj_exists_23_1(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 0; 
	i = 2; 
	tmp_if_expr = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void Func_ControlTask_25_1(){
	GetResource_58_1((unsigned char)(1));
	current_pc[2] = 2; 
}
void GetResource_58_1(unsigned char resid){
	GetResource_Common_44_1(resid);
}
void GetResource_Common_44_1(unsigned char resid){
	signed int return_value_is_alloc;
	__CPROVER_bool tmp_if_expr;
	is_alloc_42_1(resid);
	return_value_is_alloc = 0; 
	tmp_if_expr = 0; 
	Resource_Table[1].alloc = 2; 
	task_dyn_info[2].dyn_prio = 4; 
}
void is_alloc_42_1(unsigned char res){
	__iv__return_expr_is_alloc = 0; 
}
void postjob_26_1(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_15_1();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_16_1(aid);
	aid = 2; 
	ALARM_handler_16_2(aid);
	aid = 3; 
}
void is_active_alarm_exists_15_1(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_16_1(signed int aid){
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
	push_task_into_readyQ_78_1(reftask, task_static_info[(signed long int)(reftask)].prio, 0, (push_type)(0));
	reschedule_79_1((API)(0), current_tid);
}
void push_task_into_readyQ_78_1(unsigned char t, unsigned char p, signed int pc, push_type pushkind){
	task_state[1] = 1; 
	k = 0; 
	readyQ[3][0].tid = 1; 
	rear[3] = 1; 
	size[3] = 1; 
	wholesize = 1; 
	max_prio = 3; 
}
void reschedule_79_1(API reschedule__api, unsigned char tid){
}
void ALARM_handler_16_2(signed int aid){
	alarm_info[2].next_alarm_tick = 0; 
	alarm_info[2].next_alarm_tick = 50; 
	alarm_state[2] = 2; 
	ActivateTask_Common_56_2(alarm_info[(signed long int)(aid)].param1);
	alarm_state[2] = 1; 
}
void ActivateTask_Common_56_2(unsigned char reftask){
}
void check_property_27_1(){
}
void is_active_obj_exists_23_2(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void Func_ControlTask_25_2(){
	ReleaseResource_59_1((unsigned char)(1));
	current_pc[2] = 3; 
}
void ReleaseResource_59_1(unsigned char resid){
	ReleaseResource_Common_40_1(resid);
}
void ReleaseResource_Common_40_1(unsigned char resid){
	unsigned char i;
	signed int return_value_is_alloc_0;
	is_alloc_18_1(resid);
	return_value_is_alloc_0 = 2; 
	Resource_Table[1].alloc = 0; 
	current_prio = 2; 
	i = 0; 
	signed int return_value_is_alloc;
	is_alloc_19_1(i);
	return_value_is_alloc = 0; 
	i = 1; 
	is_alloc_19_2(i);
	return_value_is_alloc = 0; 
	i = 2; 
	is_alloc_19_3(i);
	return_value_is_alloc = 0; 
	i = 3; 
	task_dyn_info[2].dyn_prio = 2; 
	reschedule_20_1((API)(5), current_tid);
}
void is_alloc_18_1(unsigned char res){
	__iv__return_expr_is_alloc = 2; 
}
void is_alloc_19_1(unsigned char res){
	__iv__return_expr_is_alloc = 0; 
}
void is_alloc_19_2(unsigned char res){
	__iv__return_expr_is_alloc = 0; 
}
void is_alloc_19_3(unsigned char res){
	__iv__return_expr_is_alloc = 0; 
}
void reschedule_20_1(API reschedule__api, unsigned char tid){
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
void postjob_26_2(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_15_2();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_16_3(aid);
	aid = 2; 
	ALARM_handler_16_4(aid);
	aid = 3; 
}
void is_active_alarm_exists_15_2(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_16_3(signed int aid){
	alarm_info[1].next_alarm_tick = 29; 
}
void ALARM_handler_16_4(signed int aid){
	alarm_info[2].next_alarm_tick = 49; 
}
void check_property_27_2(){
}
void is_active_obj_exists_23_3(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void Func_AcquisitionTask_24_1(){
	__CPROVER_assume(((current_pc[1] == 1)));
	__CPROVER_assume(!(((signed int)(tracking_enabled) == 0)));
	signed int return_value_send_nxtcam_command;
	send_nxtcam_command_46_1((U8)(2), (U8)(69));
	return_value_send_nxtcam_command = __iv__return_expr_send_nxtcam_command;
	tracking_enabled = (S8)(return_value_send_nxtcam_command);
	TerminateTask_54_1();
	current_pc[1] = 4;
}
void send_nxtcam_command_46_1(U8 port_id, U8 command){
	signed int return_value_i2c_busy;
	i2c_busy_9_1((signed int)(port_id));
	return_value_i2c_busy = 16; 
	i2c_busy_9_2((signed int)(port_id));
	return_value_i2c_busy = 4; 
	i2c_busy_9_3((signed int)(port_id));
	return_value_i2c_busy = 1; 
	i2c_busy_9_4((signed int)(port_id));
	return_value_i2c_busy = 65536; 
	i2c_busy_9_5((signed int)(port_id));
	return_value_i2c_busy = 268435456; 
	i2c_busy_9_6((signed int)(port_id));
	return_value_i2c_busy = 134217728; 
	i2c_busy_9_7((signed int)(port_id));
	return_value_i2c_busy = 33554432; 
	i2c_busy_9_8((signed int)(port_id));
	return_value_i2c_busy = 8388608; 
	i2c_busy_9_9((signed int)(port_id));
	return_value_i2c_busy = 16; 
	i2c_busy_9_10((signed int)(port_id));
	return_value_i2c_busy = 524288; 
	i2c_busy_9_11((signed int)(port_id));
	return_value_i2c_busy = 2; 
	i2c_busy_9_12((signed int)(port_id));
	return_value_i2c_busy = 524288; 
	i2c_busy_9_13((signed int)(port_id));
	return_value_i2c_busy = 4096; 
	i2c_busy_9_14((signed int)(port_id));
	return_value_i2c_busy = 64; 
	i2c_busy_9_15((signed int)(port_id));
	return_value_i2c_busy = 262144; 
	i2c_busy_9_16((signed int)(port_id));
	return_value_i2c_busy = 16384; 
	i2c_busy_9_17((signed int)(port_id));
	return_value_i2c_busy = 32; 
	i2c_busy_9_18((signed int)(port_id));
	return_value_i2c_busy = 268435456; 
	i2c_busy_9_19((signed int)(port_id));
	return_value_i2c_busy = 2; 
	i2c_busy_9_20((signed int)(port_id));
	return_value_i2c_busy = 268435456; 
	i2c_busy_9_21((signed int)(port_id));
	return_value_i2c_busy = 268435456; 
	i2c_busy_9_22((signed int)(port_id));
	return_value_i2c_busy = 2048; 
	i2c_busy_9_23((signed int)(port_id));
	return_value_i2c_busy = 2; 
	i2c_busy_9_24((signed int)(port_id));
	return_value_i2c_busy = 4096; 
	i2c_busy_9_25((signed int)(port_id));
	return_value_i2c_busy = 2097152; 
	i2c_busy_9_26((signed int)(port_id));
	return_value_i2c_busy = 1; 
	i2c_busy_9_27((signed int)(port_id));
	return_value_i2c_busy = 1048576; 
	i2c_busy_9_28((signed int)(port_id));
	return_value_i2c_busy = 32768; 
	i2c_busy_9_29((signed int)(port_id));
	return_value_i2c_busy = 8192; 
	i2c_busy_9_30((signed int)(port_id));
	return_value_i2c_busy = 2048; 
	i2c_busy_9_31((signed int)(port_id));
	return_value_i2c_busy = 1048576; 
	i2c_busy_9_32((signed int)(port_id));
	return_value_i2c_busy = 128; 
	i2c_busy_9_33((signed int)(port_id));
	return_value_i2c_busy = 32; 
	i2c_busy_9_34((signed int)(port_id));
	return_value_i2c_busy = 1; 
	i2c_busy_9_35((signed int)(port_id));
	return_value_i2c_busy = 1; 
	i2c_busy_9_36((signed int)(port_id));
	return_value_i2c_busy = -2147483648; 
	i2c_busy_9_37((signed int)(port_id));
	return_value_i2c_busy = 4096; 
	i2c_busy_9_38((signed int)(port_id));
	return_value_i2c_busy = 16; 
	i2c_busy_9_39((signed int)(port_id));
	return_value_i2c_busy = 16; 
	i2c_busy_9_40((signed int)(port_id));
	return_value_i2c_busy = 1048576; 
	i2c_busy_9_41((signed int)(port_id));
	return_value_i2c_busy = 64; 
	i2c_busy_9_42((signed int)(port_id));
	return_value_i2c_busy = 134217728; 
	i2c_busy_9_43((signed int)(port_id));
	return_value_i2c_busy = 1; 
	i2c_busy_9_44((signed int)(port_id));
	return_value_i2c_busy = 0; 
	nxtcambuffer[0] = command;
	SINT ret;
	i2c_start_transaction_10_1((signed int)(port_id), 1u, 0x41, 1, nxtcambuffer, 1u, 1);
	ret = __iv__return_expr_i2c_start_transaction;
	__iv__return_expr_send_nxtcam_command = ret;
}
void i2c_busy_9_1(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 16; 
	__iv__return_expr_i2c_busy = 16; 
}
void i2c_busy_9_2(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 4; 
	__iv__return_expr_i2c_busy = 4; 
}
void i2c_busy_9_3(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 1; 
	__iv__return_expr_i2c_busy = 1; 
}
void i2c_busy_9_4(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 65536; 
	__iv__return_expr_i2c_busy = 65536; 
}
void i2c_busy_9_5(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 268435456; 
	__iv__return_expr_i2c_busy = 268435456; 
}
void i2c_busy_9_6(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 134217728; 
	__iv__return_expr_i2c_busy = 134217728; 
}
void i2c_busy_9_7(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 33554432; 
	__iv__return_expr_i2c_busy = 33554432; 
}
void i2c_busy_9_8(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 8388608; 
	__iv__return_expr_i2c_busy = 8388608; 
}
void i2c_busy_9_9(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 16; 
	__iv__return_expr_i2c_busy = 16; 
}
void i2c_busy_9_10(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 524288; 
	__iv__return_expr_i2c_busy = 524288; 
}
void i2c_busy_9_11(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 2; 
	__iv__return_expr_i2c_busy = 2; 
}
void i2c_busy_9_12(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 524288; 
	__iv__return_expr_i2c_busy = 524288; 
}
void i2c_busy_9_13(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 4096; 
	__iv__return_expr_i2c_busy = 4096; 
}
void i2c_busy_9_14(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 64; 
	__iv__return_expr_i2c_busy = 64; 
}
void i2c_busy_9_15(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 262144; 
	__iv__return_expr_i2c_busy = 262144; 
}
void i2c_busy_9_16(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 16384; 
	__iv__return_expr_i2c_busy = 16384; 
}
void i2c_busy_9_17(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 32; 
	__iv__return_expr_i2c_busy = 32; 
}
void i2c_busy_9_18(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 268435456; 
	__iv__return_expr_i2c_busy = 268435456; 
}
void i2c_busy_9_19(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 2; 
	__iv__return_expr_i2c_busy = 2; 
}
void i2c_busy_9_20(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 268435456; 
	__iv__return_expr_i2c_busy = 268435456; 
}
void i2c_busy_9_21(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 268435456; 
	__iv__return_expr_i2c_busy = 268435456; 
}
void i2c_busy_9_22(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 2048; 
	__iv__return_expr_i2c_busy = 2048; 
}
void i2c_busy_9_23(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 2; 
	__iv__return_expr_i2c_busy = 2; 
}
void i2c_busy_9_24(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 4096; 
	__iv__return_expr_i2c_busy = 4096; 
}
void i2c_busy_9_25(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 2097152; 
	__iv__return_expr_i2c_busy = 2097152; 
}
void i2c_busy_9_26(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 1; 
	__iv__return_expr_i2c_busy = 1; 
}
void i2c_busy_9_27(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 1048576; 
	__iv__return_expr_i2c_busy = 1048576; 
}
void i2c_busy_9_28(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 32768; 
	__iv__return_expr_i2c_busy = 32768; 
}
void i2c_busy_9_29(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 8192; 
	__iv__return_expr_i2c_busy = 8192; 
}
void i2c_busy_9_30(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 2048; 
	__iv__return_expr_i2c_busy = 2048; 
}
void i2c_busy_9_31(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 1048576; 
	__iv__return_expr_i2c_busy = 1048576; 
}
void i2c_busy_9_32(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 128; 
	__iv__return_expr_i2c_busy = 128; 
}
void i2c_busy_9_33(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 32; 
	__iv__return_expr_i2c_busy = 32; 
}
void i2c_busy_9_34(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 1; 
	__iv__return_expr_i2c_busy = 1; 
}
void i2c_busy_9_35(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 1; 
	__iv__return_expr_i2c_busy = 1; 
}
void i2c_busy_9_36(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = -2147483648; 
	__iv__return_expr_i2c_busy = -2147483648; 
}
void i2c_busy_9_37(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 4096; 
	__iv__return_expr_i2c_busy = 4096; 
}
void i2c_busy_9_38(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 16; 
	__iv__return_expr_i2c_busy = 16; 
}
void i2c_busy_9_39(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 16; 
	__iv__return_expr_i2c_busy = 16; 
}
void i2c_busy_9_40(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 1048576; 
	__iv__return_expr_i2c_busy = 1048576; 
}
void i2c_busy_9_41(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 64; 
	__iv__return_expr_i2c_busy = 64; 
}
void i2c_busy_9_42(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 134217728; 
	__iv__return_expr_i2c_busy = 134217728; 
}
void i2c_busy_9_43(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 1; 
	__iv__return_expr_i2c_busy = 1; 
}
void i2c_busy_9_44(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 0; 
	__iv__return_expr_i2c_busy = 0; 
}
void i2c_start_transaction_10_1(signed int port, unsigned int address, signed int internal_address, signed int n_internal_address_bytes, unsigned char* i2c_start_transaction__data, unsigned int nbytes, signed int write){
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
	TerminateTask_Common_31_1();
}
void TerminateTask_Common_31_1(){
	task_dyn_info[1].act_cnt = 0; 
	task_state[1] = 0; 
	reschedule_74_1((API)(1), current_tid);
}
void reschedule_74_1(API reschedule__api, unsigned char tid){
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
void postjob_26_3(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_15_3();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_16_5(aid);
	aid = 2; 
	ALARM_handler_16_6(aid);
	aid = 3; 
}
void is_active_alarm_exists_15_3(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_16_5(signed int aid){
	alarm_info[1].next_alarm_tick = 28; 
}
void ALARM_handler_16_6(signed int aid){
	alarm_info[2].next_alarm_tick = 48; 
}
void check_property_27_3(){
}
void is_active_obj_exists_23_4(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 0; 
	i = 2; 
	tmp_if_expr = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void Func_ControlTask_25_3(){
	TerminateTask_60_1();
	current_pc[2] = 4; 
}
void TerminateTask_60_1(){
	TerminateTask_Common_31_2();
}
void TerminateTask_Common_31_2(){
	task_dyn_info[2].act_cnt = 0; 
	task_state[2] = 0; 
	reschedule_74_2((API)(1), current_tid);
}
void reschedule_74_2(API reschedule__api, unsigned char tid){
	get_task_from_readyQ_90_2();
}
void get_task_from_readyQ_90_2(){
	current_tid = 0; 
	current_prio = 0; 
}
void postjob_26_4(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_15_4();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_16_7(aid);
	aid = 2; 
	ALARM_handler_16_8(aid);
	aid = 3; 
}
void is_active_alarm_exists_15_4(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_16_7(signed int aid){
	alarm_info[1].next_alarm_tick = 27; 
}
void ALARM_handler_16_8(signed int aid){
	alarm_info[2].next_alarm_tick = 47; 
}
void check_property_27_4(){
}
void is_active_obj_exists_23_5(){
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
void postjob_26_5(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_15_5();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_16_9(aid);
	aid = 2; 
	ALARM_handler_16_10(aid);
	aid = 3; 
}
void is_active_alarm_exists_15_5(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_16_9(signed int aid){
	alarm_info[1].next_alarm_tick = 26; 
}
void ALARM_handler_16_10(signed int aid){
	alarm_info[2].next_alarm_tick = 46; 
}
void check_property_27_5(){
}
void is_active_obj_exists_23_6(){
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
void postjob_26_6(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_15_6();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_16_11(aid);
	aid = 2; 
	ALARM_handler_16_12(aid);
	aid = 3; 
}
void is_active_alarm_exists_15_6(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_16_11(signed int aid){
	alarm_info[1].next_alarm_tick = 25; 
}
void ALARM_handler_16_12(signed int aid){
	alarm_info[2].next_alarm_tick = 45; 
}
void check_property_27_6(){
}
void is_active_obj_exists_23_7(){
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
void postjob_26_7(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_15_7();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_16_13(aid);
	aid = 2; 
	ALARM_handler_16_14(aid);
	aid = 3; 
}
void is_active_alarm_exists_15_7(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_16_13(signed int aid){
	alarm_info[1].next_alarm_tick = 24; 
}
void ALARM_handler_16_14(signed int aid){
	alarm_info[2].next_alarm_tick = 44; 
}
void check_property_27_7(){
}
void is_active_obj_exists_23_8(){
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
void postjob_26_8(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_15_8();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_16_15(aid);
	aid = 2; 
	ALARM_handler_16_16(aid);
	aid = 3; 
}
void is_active_alarm_exists_15_8(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_16_15(signed int aid){
	alarm_info[1].next_alarm_tick = 23; 
}
void ALARM_handler_16_16(signed int aid){
	alarm_info[2].next_alarm_tick = 43; 
}
void check_property_27_8(){
}
void is_active_obj_exists_23_9(){
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
void postjob_26_9(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_15_9();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_16_17(aid);
	aid = 2; 
	ALARM_handler_16_18(aid);
	aid = 3; 
}
void is_active_alarm_exists_15_9(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_16_17(signed int aid){
	alarm_info[1].next_alarm_tick = 22; 
}
void ALARM_handler_16_18(signed int aid){
	alarm_info[2].next_alarm_tick = 42; 
}
void check_property_27_9(){
}
void is_active_obj_exists_23_10(){
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
void postjob_26_10(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_15_10();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_16_19(aid);
	aid = 2; 
	ALARM_handler_16_20(aid);
	aid = 3; 
}
void is_active_alarm_exists_15_10(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_16_19(signed int aid){
	alarm_info[1].next_alarm_tick = 21; 
}
void ALARM_handler_16_20(signed int aid){
	alarm_info[2].next_alarm_tick = 41; 
}
void check_property_27_10(){
}
void is_active_obj_exists_23_11(){
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
void postjob_26_11(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_15_11();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_16_21(aid);
	aid = 2; 
	ALARM_handler_16_22(aid);
	aid = 3; 
}
void is_active_alarm_exists_15_11(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_16_21(signed int aid){
	alarm_info[1].next_alarm_tick = 20; 
}
void ALARM_handler_16_22(signed int aid){
	alarm_info[2].next_alarm_tick = 40; 
}
void check_property_27_11(){
}
void is_active_obj_exists_23_12(){
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
void postjob_26_12(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_15_12();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_16_23(aid);
	aid = 2; 
	ALARM_handler_16_24(aid);
	aid = 3; 
}
void is_active_alarm_exists_15_12(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_16_23(signed int aid){
	alarm_info[1].next_alarm_tick = 19; 
}
void ALARM_handler_16_24(signed int aid){
	alarm_info[2].next_alarm_tick = 39; 
}
void check_property_27_12(){
}
void is_active_obj_exists_23_13(){
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
void postjob_26_13(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_15_13();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_16_25(aid);
	aid = 2; 
	ALARM_handler_16_26(aid);
	aid = 3; 
}
void is_active_alarm_exists_15_13(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_16_25(signed int aid){
	alarm_info[1].next_alarm_tick = 18; 
}
void ALARM_handler_16_26(signed int aid){
	alarm_info[2].next_alarm_tick = 38; 
}
void check_property_27_13(){
}
void is_active_obj_exists_23_14(){
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
void postjob_26_14(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_15_14();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_16_27(aid);
	aid = 2; 
	ALARM_handler_16_28(aid);
	aid = 3; 
}
void is_active_alarm_exists_15_14(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_16_27(signed int aid){
	alarm_info[1].next_alarm_tick = 17; 
}
void ALARM_handler_16_28(signed int aid){
	alarm_info[2].next_alarm_tick = 37; 
}
void check_property_27_14(){
}
void is_active_obj_exists_23_15(){
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
void postjob_26_15(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_15_15();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_16_29(aid);
	aid = 2; 
	ALARM_handler_16_30(aid);
	aid = 3; 
}
void is_active_alarm_exists_15_15(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_16_29(signed int aid){
	alarm_info[1].next_alarm_tick = 16; 
}
void ALARM_handler_16_30(signed int aid){
	alarm_info[2].next_alarm_tick = 36; 
}
void check_property_27_15(){
}
void is_active_obj_exists_23_16(){
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
void postjob_26_16(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_15_16();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_16_31(aid);
	aid = 2; 
	ALARM_handler_16_32(aid);
	aid = 3; 
}
void is_active_alarm_exists_15_16(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_16_31(signed int aid){
	alarm_info[1].next_alarm_tick = 15; 
}
void ALARM_handler_16_32(signed int aid){
	alarm_info[2].next_alarm_tick = 35; 
}
void check_property_27_16(){
}
void is_active_obj_exists_23_17(){
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
void postjob_26_17(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_15_17();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_16_33(aid);
	aid = 2; 
	ALARM_handler_16_34(aid);
	aid = 3; 
}
void is_active_alarm_exists_15_17(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_16_33(signed int aid){
	alarm_info[1].next_alarm_tick = 14; 
}
void ALARM_handler_16_34(signed int aid){
	alarm_info[2].next_alarm_tick = 34; 
}
void check_property_27_17(){
}
void is_active_obj_exists_23_18(){
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
void postjob_26_18(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_15_18();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_16_35(aid);
	aid = 2; 
	ALARM_handler_16_36(aid);
	aid = 3; 
}
void is_active_alarm_exists_15_18(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_16_35(signed int aid){
	alarm_info[1].next_alarm_tick = 13; 
}
void ALARM_handler_16_36(signed int aid){
	alarm_info[2].next_alarm_tick = 33; 
}
void check_property_27_18(){
}
void is_active_obj_exists_23_19(){
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
void postjob_26_19(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_15_19();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_16_37(aid);
	aid = 2; 
	ALARM_handler_16_38(aid);
	aid = 3; 
}
void is_active_alarm_exists_15_19(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_16_37(signed int aid){
	alarm_info[1].next_alarm_tick = 12; 
}
void ALARM_handler_16_38(signed int aid){
	alarm_info[2].next_alarm_tick = 32; 
}
void check_property_27_19(){
}
void is_active_obj_exists_23_20(){
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
void postjob_26_20(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_15_20();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_16_39(aid);
	aid = 2; 
	ALARM_handler_16_40(aid);
	aid = 3; 
}
void is_active_alarm_exists_15_20(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_16_39(signed int aid){
	alarm_info[1].next_alarm_tick = 11; 
}
void ALARM_handler_16_40(signed int aid){
	alarm_info[2].next_alarm_tick = 31; 
}
void check_property_27_20(){
}
void is_active_obj_exists_23_21(){
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
void postjob_26_21(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_15_21();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_16_41(aid);
	aid = 2; 
	ALARM_handler_16_42(aid);
	aid = 3; 
}
void is_active_alarm_exists_15_21(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_16_41(signed int aid){
	alarm_info[1].next_alarm_tick = 10; 
}
void ALARM_handler_16_42(signed int aid){
	alarm_info[2].next_alarm_tick = 30; 
}
void check_property_27_21(){
}
void is_active_obj_exists_23_22(){
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
void postjob_26_22(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_15_22();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_16_43(aid);
	aid = 2; 
	ALARM_handler_16_44(aid);
	aid = 3; 
}
void is_active_alarm_exists_15_22(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_16_43(signed int aid){
	alarm_info[1].next_alarm_tick = 9; 
}
void ALARM_handler_16_44(signed int aid){
	alarm_info[2].next_alarm_tick = 29; 
}
void check_property_27_22(){
}
void is_active_obj_exists_23_23(){
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
void postjob_26_23(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_15_23();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_16_45(aid);
	aid = 2; 
	ALARM_handler_16_46(aid);
	aid = 3; 
}
void is_active_alarm_exists_15_23(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_16_45(signed int aid){
	alarm_info[1].next_alarm_tick = 8; 
}
void ALARM_handler_16_46(signed int aid){
	alarm_info[2].next_alarm_tick = 28; 
}
void check_property_27_23(){
}
void is_active_obj_exists_23_24(){
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
void postjob_26_24(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_15_24();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_16_47(aid);
	aid = 2; 
	ALARM_handler_16_48(aid);
	aid = 3; 
}
void is_active_alarm_exists_15_24(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_16_47(signed int aid){
	alarm_info[1].next_alarm_tick = 7; 
}
void ALARM_handler_16_48(signed int aid){
	alarm_info[2].next_alarm_tick = 27; 
}
void check_property_27_24(){
}
void is_active_obj_exists_23_25(){
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
void postjob_26_25(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_15_25();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_16_49(aid);
	aid = 2; 
	ALARM_handler_16_50(aid);
	aid = 3; 
}
void is_active_alarm_exists_15_25(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_16_49(signed int aid){
	alarm_info[1].next_alarm_tick = 6; 
}
void ALARM_handler_16_50(signed int aid){
	alarm_info[2].next_alarm_tick = 26; 
}
void check_property_27_25(){
}
void is_active_obj_exists_23_26(){
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
void postjob_26_26(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_15_26();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_16_51(aid);
	aid = 2; 
	ALARM_handler_16_52(aid);
	aid = 3; 
}
void is_active_alarm_exists_15_26(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_16_51(signed int aid){
	alarm_info[1].next_alarm_tick = 5; 
}
void ALARM_handler_16_52(signed int aid){
	alarm_info[2].next_alarm_tick = 25; 
}
void check_property_27_26(){
}
void is_active_obj_exists_23_27(){
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
void postjob_26_27(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_15_27();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_16_53(aid);
	aid = 2; 
	ALARM_handler_16_54(aid);
	aid = 3; 
}
void is_active_alarm_exists_15_27(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_16_53(signed int aid){
	alarm_info[1].next_alarm_tick = 4; 
}
void ALARM_handler_16_54(signed int aid){
	alarm_info[2].next_alarm_tick = 24; 
}
void check_property_27_27(){
}
void is_active_obj_exists_23_28(){
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
void postjob_26_28(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_15_28();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_16_55(aid);
	aid = 2; 
	ALARM_handler_16_56(aid);
	aid = 3; 
}
void is_active_alarm_exists_15_28(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_16_55(signed int aid){
	alarm_info[1].next_alarm_tick = 3; 
}
void ALARM_handler_16_56(signed int aid){
	alarm_info[2].next_alarm_tick = 23; 
}
void check_property_27_28(){
}
void is_active_obj_exists_23_29(){
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
void postjob_26_29(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_15_29();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_16_57(aid);
	aid = 2; 
	ALARM_handler_16_58(aid);
	aid = 3; 
}
void is_active_alarm_exists_15_29(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_16_57(signed int aid){
	alarm_info[1].next_alarm_tick = 2; 
}
void ALARM_handler_16_58(signed int aid){
	alarm_info[2].next_alarm_tick = 22; 
}
void check_property_27_29(){
}
void is_active_obj_exists_23_30(){
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
void postjob_26_30(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_15_30();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_16_59(aid);
	aid = 2; 
	ALARM_handler_16_60(aid);
	aid = 3; 
}
void is_active_alarm_exists_15_30(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_16_59(signed int aid){
	alarm_info[1].next_alarm_tick = 1; 
}
void ALARM_handler_16_60(signed int aid){
	alarm_info[2].next_alarm_tick = 21; 
}
void check_property_27_30(){
}
void is_active_obj_exists_23_31(){
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
void postjob_26_31(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_15_31();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_16_61(aid);
	aid = 2; 
	ALARM_handler_16_62(aid);
	aid = 3; 
}
void is_active_alarm_exists_15_31(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_16_61(signed int aid){
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
	push_task_into_readyQ_78_2(reftask, task_static_info[(signed long int)(reftask)].prio, 0, (push_type)(0));
	reschedule_79_2((API)(0), current_tid);
}
void push_task_into_readyQ_78_2(unsigned char t, unsigned char p, signed int pc, push_type pushkind){
	task_state[1] = 1; 
	k = 1; 
	readyQ[3][1].tid = 1; 
	rear[3] = 2; 
	size[3] = 1; 
	wholesize = 1; 
	max_prio = 3; 
}
void reschedule_79_2(API reschedule__api, unsigned char tid){
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
void ALARM_handler_16_62(signed int aid){
	alarm_info[2].next_alarm_tick = 20; 
}
void check_property_27_31(){
}
void is_active_obj_exists_23_32(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void Func_AcquisitionTask_24_2(){
	__CPROVER_assume(!((current_pc[1] == 1)));
	__CPROVER_assume(!((current_pc[1] == 2)));
	__CPROVER_assume(!((current_pc[1] == 3)));
	__CPROVER_assume(((current_pc[1] == 4)));
	current_pc[1] = 1;
}
void postjob_26_32(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_15_32();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_16_63(aid);
	aid = 2; 
	ALARM_handler_16_64(aid);
	aid = 3; 
}
void is_active_alarm_exists_15_32(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_16_63(signed int aid){
	alarm_info[1].next_alarm_tick = 29; 
}
void ALARM_handler_16_64(signed int aid){
	alarm_info[2].next_alarm_tick = 19; 
}
void check_property_27_32(){
}
void is_active_obj_exists_23_33(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void Func_AcquisitionTask_24_3(){
	__CPROVER_assume(((current_pc[1] == 1)));
	__CPROVER_assume((((signed int)(tracking_enabled) == 0)));
	request_47_1((U8)(2));
	rectindex = getbiggestrect((U8)(0), -1);
	__CPROVER_assume(!(!((rectindex >= 0))));
	area = getArea((U8)(rectindex));
	median_filter_50_1(area);
	area = __iv__return_expr_median_filter;
	acq_size = fisqrt(area);
	GetResource_52_1((unsigned char)(1));
	current_pc[1] = 2;
}
void request_47_1(U8 port_id){
	signed int return_value_i2c_busy;
	i2c_busy_11_1((signed int)(port_id));
	return_value_i2c_busy = 0; 
	i2c_start_transaction_12_1((signed int)(port_id), 1u, 0x42, 1, nxtcamdata, 41u, 0);
}
void i2c_busy_11_1(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 0; 
	__iv__return_expr_i2c_busy = 0; 
}
void i2c_start_transaction_12_1(signed int port, unsigned int address, signed int internal_address, signed int n_internal_address_bytes, unsigned char* i2c_start_transaction__data, unsigned int nbytes, signed int write){
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
void median_filter_50_1(data_t datum){
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
void GetResource_52_1(unsigned char resid){
	GetResource_Common_44_2(resid);
}
void GetResource_Common_44_2(unsigned char resid){
	signed int return_value_is_alloc;
	__CPROVER_bool tmp_if_expr;
	is_alloc_42_2(resid);
	return_value_is_alloc = 0; 
	tmp_if_expr = 0; 
	Resource_Table[1].alloc = 1; 
	task_dyn_info[1].dyn_prio = 4; 
}
void is_alloc_42_2(unsigned char res){
	__iv__return_expr_is_alloc = 0; 
}
void postjob_26_33(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_15_33();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_16_65(aid);
	aid = 2; 
	ALARM_handler_16_66(aid);
	aid = 3; 
}
void is_active_alarm_exists_15_33(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_16_65(signed int aid){
	alarm_info[1].next_alarm_tick = 28; 
}
void ALARM_handler_16_66(signed int aid){
	alarm_info[2].next_alarm_tick = 18; 
}
void check_property_27_33(){
	if (!((acq_size == 0))) __CPROVER_printf("violated property: Node_16_327");assert((acq_size == 0));
}
