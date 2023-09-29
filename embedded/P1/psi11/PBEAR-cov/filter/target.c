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
typedef struct anonymous_3 Event;
typedef enum evt_state Evt_State;
typedef struct queue Queue;
typedef struct anonymous_5 Resource;
typedef char S8;
typedef signed int SINT;
typedef unsigned char U8;
typedef signed int data_t;
typedef struct anonymous object_data_t;
typedef enum anonymous_0 push_type;
typedef struct anonymous_2 task_dynamic_stat;
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
  unsigned char act_cnt;
  unsigned char dyn_prio;
};
struct anonymous_3
{
  unsigned char owner;
  Evt_State task_alloc[4l];
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
static signed int integral=0;
unsigned char k;
signed int leftMotorValue;
unsigned char max_prio=0;
signed int new_speed;
static U8 nxtcambuffer[8l];
static U8 nxtcamdata[41l];
object_data_t objData={ .position=0, .size=0 };
signed int os_on;
signed int position;
static signed int prevError=0;
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
signed int getArea(U8 getArea__rectindex) {
	signed int return_value_getWidth;
	return_value_getWidth = getWidth(getArea__rectindex);
	signed int return_value_getHeight;
	return_value_getHeight = getHeight(getArea__rectindex);
	return (return_value_getWidth * return_value_getHeight);
}
signed int getbiggestrect(U8 pcolorid, signed int pminarea) {
	signed int getbiggestrect__1__rectindex;
	getbiggestrect__1__rectindex = -1;
	signed int i;
	signed int maxarea;
	maxarea = pminarea;
	i = 0;
	Node_14_341:;
	if ((i >= (signed int)(nxtcamdata[0]))) goto Node_14_362;
	signed int colorid;
	colorid = (signed int)(nxtcamdata[(signed long int)(((1 + (5 * i)) + 0))]);
	if (!((colorid == (signed int)(pcolorid)))) goto Node_14_358;
	signed int getbiggestrect__1__1__1__1__area;
	getbiggestrect__1__1__1__1__area = getArea((U8)(i));
	if (!((getbiggestrect__1__1__1__1__area >= maxarea))) goto Node_14_354;
	maxarea = getbiggestrect__1__1__1__1__area;
	getbiggestrect__1__rectindex = i;
	Node_14_354:;
	Node_14_358:;
	i = (i + 1);
	goto Node_14_341;
	Node_14_362:;
	return getbiggestrect__1__rectindex;
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
	Node_18_401:;
	if ((t == 0)) goto Node_18_405;
	cnt = (cnt + 1);
	t = (t >> 1);
	goto Node_18_401;
	Node_18_405:;
	if ((cnt >= 7)) goto Node_18_409;
	t = (val << (6 - cnt));
	goto Node_18_410;
	Node_18_409:;
	t = (val >> (cnt - 6));
	Node_18_410:;
	return ((ftbl[(signed long int)(cnt)] * ftbl2[(signed long int)((t & 31))]) >> 15);
}
void StartOS_0_1(unsigned char app_mode);
void initialize_46_1();
void startup_process_47_1();
void push_task_into_readyQ_86_1(unsigned char t, unsigned char p, signed int pc, push_type pushkind);
void get_task_from_readyQ_87_1();
void app_48_1();
void is_active_obj_exists_32_1();
void Func_ControlTask_34_1();
void GetResource_62_1(unsigned char resid);
void GetResource_Common_57_1(unsigned char resid);
void is_alloc_53_1(unsigned char res);
void postjob_35_1();
void is_active_alarm_exists_7_1();
void ALARM_handler_8_1(signed int aid);
void ActivateTask_Common_60_1(unsigned char reftask);
void push_task_into_readyQ_37_1(unsigned char t, unsigned char p, signed int pc, push_type pushkind);
void reschedule_38_1(API reschedule__api, unsigned char tid);
void ALARM_handler_8_2(signed int aid);
void ActivateTask_Common_60_2(unsigned char reftask);
void check_property_36_1();
void is_active_obj_exists_32_2();
void Func_ControlTask_34_2();
void ReleaseResource_63_1(unsigned char resid);
void ReleaseResource_Common_55_1(unsigned char resid);
void is_alloc_17_1(unsigned char res);
void is_alloc_18_1(unsigned char res);
void is_alloc_18_2(unsigned char res);
void is_alloc_18_3(unsigned char res);
void reschedule_19_1(API reschedule__api, unsigned char tid);
void push_task_into_readyQ_92_1(unsigned char t, unsigned char p, signed int pc, push_type pushkind);
void get_task_from_readyQ_93_1();
void postjob_35_2();
void is_active_alarm_exists_7_2();
void ALARM_handler_8_3(signed int aid);
void ALARM_handler_8_4(signed int aid);
void check_property_36_2();
void is_active_obj_exists_32_3();
void Func_AcquisitionTask_33_1();
void send_nxtcam_command_21_1(U8 port_id, U8 command);
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
void i2c_busy_2_43(signed int port);
void i2c_busy_2_44(signed int port);
void i2c_busy_2_45(signed int port);
void i2c_busy_2_46(signed int port);
void i2c_busy_2_47(signed int port);
void i2c_busy_2_48(signed int port);
void i2c_busy_2_49(signed int port);
void i2c_busy_2_50(signed int port);
void i2c_busy_2_51(signed int port);
void i2c_busy_2_52(signed int port);
void i2c_busy_2_53(signed int port);
void i2c_busy_2_54(signed int port);
void i2c_busy_2_55(signed int port);
void i2c_busy_2_56(signed int port);
void i2c_busy_2_57(signed int port);
void i2c_busy_2_58(signed int port);
void i2c_busy_2_59(signed int port);
void i2c_busy_2_60(signed int port);
void i2c_start_transaction_3_1(signed int port, unsigned int address, signed int internal_address, signed int n_internal_address_bytes, unsigned char* i2c_start_transaction__data, unsigned int nbytes, signed int write);
void TerminateTask_30_1();
void TerminateTask_Common_44_1();
void reschedule_78_1(API reschedule__api, unsigned char tid);
void get_task_from_readyQ_91_1();
void postjob_35_3();
void is_active_alarm_exists_7_3();
void ALARM_handler_8_5(signed int aid);
void ALARM_handler_8_6(signed int aid);
void check_property_36_3();
void is_active_obj_exists_32_4();
void Func_ControlTask_34_3();
void TerminateTask_66_1();
void TerminateTask_Common_44_2();
void reschedule_78_2(API reschedule__api, unsigned char tid);
void get_task_from_readyQ_91_2();
void postjob_35_4();
void is_active_alarm_exists_7_4();
void ALARM_handler_8_7(signed int aid);
void ALARM_handler_8_8(signed int aid);
void check_property_36_4();
void is_active_obj_exists_32_5();
void postjob_35_5();
void is_active_alarm_exists_7_5();
void ALARM_handler_8_9(signed int aid);
void ALARM_handler_8_10(signed int aid);
void check_property_36_5();
void is_active_obj_exists_32_6();
void postjob_35_6();
void is_active_alarm_exists_7_6();
void ALARM_handler_8_11(signed int aid);
void ALARM_handler_8_12(signed int aid);
void check_property_36_6();
void is_active_obj_exists_32_7();
void postjob_35_7();
void is_active_alarm_exists_7_7();
void ALARM_handler_8_13(signed int aid);
void ALARM_handler_8_14(signed int aid);
void check_property_36_7();
void is_active_obj_exists_32_8();
void postjob_35_8();
void is_active_alarm_exists_7_8();
void ALARM_handler_8_15(signed int aid);
void ALARM_handler_8_16(signed int aid);
void check_property_36_8();
void is_active_obj_exists_32_9();
void postjob_35_9();
void is_active_alarm_exists_7_9();
void ALARM_handler_8_17(signed int aid);
void ALARM_handler_8_18(signed int aid);
void check_property_36_9();
void is_active_obj_exists_32_10();
void postjob_35_10();
void is_active_alarm_exists_7_10();
void ALARM_handler_8_19(signed int aid);
void ALARM_handler_8_20(signed int aid);
void check_property_36_10();
void is_active_obj_exists_32_11();
void postjob_35_11();
void is_active_alarm_exists_7_11();
void ALARM_handler_8_21(signed int aid);
void ALARM_handler_8_22(signed int aid);
void check_property_36_11();
void is_active_obj_exists_32_12();
void postjob_35_12();
void is_active_alarm_exists_7_12();
void ALARM_handler_8_23(signed int aid);
void ALARM_handler_8_24(signed int aid);
void check_property_36_12();
void is_active_obj_exists_32_13();
void postjob_35_13();
void is_active_alarm_exists_7_13();
void ALARM_handler_8_25(signed int aid);
void ALARM_handler_8_26(signed int aid);
void check_property_36_13();
void is_active_obj_exists_32_14();
void postjob_35_14();
void is_active_alarm_exists_7_14();
void ALARM_handler_8_27(signed int aid);
void ALARM_handler_8_28(signed int aid);
void check_property_36_14();
void is_active_obj_exists_32_15();
void postjob_35_15();
void is_active_alarm_exists_7_15();
void ALARM_handler_8_29(signed int aid);
void ALARM_handler_8_30(signed int aid);
void check_property_36_15();
void is_active_obj_exists_32_16();
void postjob_35_16();
void is_active_alarm_exists_7_16();
void ALARM_handler_8_31(signed int aid);
void ALARM_handler_8_32(signed int aid);
void check_property_36_16();
void is_active_obj_exists_32_17();
void postjob_35_17();
void is_active_alarm_exists_7_17();
void ALARM_handler_8_33(signed int aid);
void ALARM_handler_8_34(signed int aid);
void check_property_36_17();
void is_active_obj_exists_32_18();
void postjob_35_18();
void is_active_alarm_exists_7_18();
void ALARM_handler_8_35(signed int aid);
void ALARM_handler_8_36(signed int aid);
void check_property_36_18();
void is_active_obj_exists_32_19();
void postjob_35_19();
void is_active_alarm_exists_7_19();
void ALARM_handler_8_37(signed int aid);
void ALARM_handler_8_38(signed int aid);
void check_property_36_19();
void is_active_obj_exists_32_20();
void postjob_35_20();
void is_active_alarm_exists_7_20();
void ALARM_handler_8_39(signed int aid);
void ALARM_handler_8_40(signed int aid);
void check_property_36_20();
void is_active_obj_exists_32_21();
void postjob_35_21();
void is_active_alarm_exists_7_21();
void ALARM_handler_8_41(signed int aid);
void ALARM_handler_8_42(signed int aid);
void check_property_36_21();
void is_active_obj_exists_32_22();
void postjob_35_22();
void is_active_alarm_exists_7_22();
void ALARM_handler_8_43(signed int aid);
void ALARM_handler_8_44(signed int aid);
void check_property_36_22();
void is_active_obj_exists_32_23();
void postjob_35_23();
void is_active_alarm_exists_7_23();
void ALARM_handler_8_45(signed int aid);
void ALARM_handler_8_46(signed int aid);
void check_property_36_23();
void is_active_obj_exists_32_24();
void postjob_35_24();
void is_active_alarm_exists_7_24();
void ALARM_handler_8_47(signed int aid);
void ALARM_handler_8_48(signed int aid);
void check_property_36_24();
void is_active_obj_exists_32_25();
void postjob_35_25();
void is_active_alarm_exists_7_25();
void ALARM_handler_8_49(signed int aid);
void ALARM_handler_8_50(signed int aid);
void check_property_36_25();
void is_active_obj_exists_32_26();
void postjob_35_26();
void is_active_alarm_exists_7_26();
void ALARM_handler_8_51(signed int aid);
void ALARM_handler_8_52(signed int aid);
void check_property_36_26();
void is_active_obj_exists_32_27();
void postjob_35_27();
void is_active_alarm_exists_7_27();
void ALARM_handler_8_53(signed int aid);
void ALARM_handler_8_54(signed int aid);
void check_property_36_27();
void is_active_obj_exists_32_28();
void postjob_35_28();
void is_active_alarm_exists_7_28();
void ALARM_handler_8_55(signed int aid);
void ALARM_handler_8_56(signed int aid);
void check_property_36_28();
void is_active_obj_exists_32_29();
void postjob_35_29();
void is_active_alarm_exists_7_29();
void ALARM_handler_8_57(signed int aid);
void ALARM_handler_8_58(signed int aid);
void check_property_36_29();
void is_active_obj_exists_32_30();
void postjob_35_30();
void is_active_alarm_exists_7_30();
void ALARM_handler_8_59(signed int aid);
void ALARM_handler_8_60(signed int aid);
void check_property_36_30();
void is_active_obj_exists_32_31();
void postjob_35_31();
void is_active_alarm_exists_7_31();
void ALARM_handler_8_61(signed int aid);
void ActivateTask_Common_60_3(unsigned char reftask);
void push_task_into_readyQ_37_2(unsigned char t, unsigned char p, signed int pc, push_type pushkind);
void reschedule_38_2(API reschedule__api, unsigned char tid);
void push_task_into_readyQ_92_2(unsigned char t, unsigned char p, signed int pc, push_type pushkind);
void get_task_from_readyQ_93_2();
void ALARM_handler_8_62(signed int aid);
void check_property_36_31();
void is_active_obj_exists_32_32();
void Func_AcquisitionTask_33_2();
void postjob_35_32();
void is_active_alarm_exists_7_32();
void ALARM_handler_8_63(signed int aid);
void ALARM_handler_8_64(signed int aid);
void check_property_36_32();
void is_active_obj_exists_32_33();
void Func_AcquisitionTask_33_3();
void request_22_1(U8 port_id);
void i2c_busy_4_1(signed int port);
void i2c_start_transaction_5_1(signed int port, unsigned int address, signed int internal_address, signed int n_internal_address_bytes, unsigned char* i2c_start_transaction__data, unsigned int nbytes, signed int write);
void getArea_24_1(U8 getArea__rectindex);
void getWidth_15_1(U8 getWidth__rectindex);
void getHeight_16_1(U8 getHeight__rectindex);
void median_filter_25_1(data_t datum);
void getX_27_1(U8 getX__rectindex);
void GetResource_28_1(unsigned char resid);
void GetResource_Common_57_2(unsigned char resid);
void is_alloc_53_2(unsigned char res);
void postjob_35_33();
void is_active_alarm_exists_7_33();
void ALARM_handler_8_65(signed int aid);
void ALARM_handler_8_66(signed int aid);
void check_property_36_33();
void is_active_obj_exists_32_34();
void Func_AcquisitionTask_33_4();
void ReleaseResource_29_1(unsigned char resid);
void ReleaseResource_Common_55_2(unsigned char resid);
void is_alloc_17_2(unsigned char res);
void is_alloc_18_4(unsigned char res);
void is_alloc_18_5(unsigned char res);
void is_alloc_18_6(unsigned char res);
void reschedule_19_2(API reschedule__api, unsigned char tid);
void postjob_35_34();
void is_active_alarm_exists_7_34();
void ALARM_handler_8_67(signed int aid);
void ALARM_handler_8_68(signed int aid);
void check_property_36_34();
void is_active_obj_exists_32_35();
void Func_AcquisitionTask_33_5();
void TerminateTask_30_2();
void TerminateTask_Common_44_3();
void reschedule_78_3(API reschedule__api, unsigned char tid);
void get_task_from_readyQ_91_3();
void postjob_35_35();
void is_active_alarm_exists_7_35();
void ALARM_handler_8_69(signed int aid);
void ALARM_handler_8_70(signed int aid);
void check_property_36_35();
void is_active_obj_exists_32_36();
void postjob_35_36();
void is_active_alarm_exists_7_36();
void ALARM_handler_8_71(signed int aid);
void ALARM_handler_8_72(signed int aid);
void check_property_36_36();
void is_active_obj_exists_32_37();
void postjob_35_37();
void is_active_alarm_exists_7_37();
void ALARM_handler_8_73(signed int aid);
void ALARM_handler_8_74(signed int aid);
void check_property_36_37();
void is_active_obj_exists_32_38();
void postjob_35_38();
void is_active_alarm_exists_7_38();
void ALARM_handler_8_75(signed int aid);
void ALARM_handler_8_76(signed int aid);
void check_property_36_38();
void is_active_obj_exists_32_39();
void postjob_35_39();
void is_active_alarm_exists_7_39();
void ALARM_handler_8_77(signed int aid);
void ALARM_handler_8_78(signed int aid);
void check_property_36_39();
void is_active_obj_exists_32_40();
void postjob_35_40();
void is_active_alarm_exists_7_40();
void ALARM_handler_8_79(signed int aid);
void ALARM_handler_8_80(signed int aid);
void check_property_36_40();
void is_active_obj_exists_32_41();
void postjob_35_41();
void is_active_alarm_exists_7_41();
void ALARM_handler_8_81(signed int aid);
void ALARM_handler_8_82(signed int aid);
void check_property_36_41();
void is_active_obj_exists_32_42();
void postjob_35_42();
void is_active_alarm_exists_7_42();
void ALARM_handler_8_83(signed int aid);
void ALARM_handler_8_84(signed int aid);
void check_property_36_42();
void is_active_obj_exists_32_43();
void postjob_35_43();
void is_active_alarm_exists_7_43();
void ALARM_handler_8_85(signed int aid);
void ALARM_handler_8_86(signed int aid);
void check_property_36_43();
void is_active_obj_exists_32_44();
void postjob_35_44();
void is_active_alarm_exists_7_44();
void ALARM_handler_8_87(signed int aid);
void ALARM_handler_8_88(signed int aid);
void check_property_36_44();
void is_active_obj_exists_32_45();
void postjob_35_45();
void is_active_alarm_exists_7_45();
void ALARM_handler_8_89(signed int aid);
void ALARM_handler_8_90(signed int aid);
void check_property_36_45();
void is_active_obj_exists_32_46();
void postjob_35_46();
void is_active_alarm_exists_7_46();
void ALARM_handler_8_91(signed int aid);
void ALARM_handler_8_92(signed int aid);
void check_property_36_46();
void is_active_obj_exists_32_47();
void postjob_35_47();
void is_active_alarm_exists_7_47();
void ALARM_handler_8_93(signed int aid);
void ALARM_handler_8_94(signed int aid);
void check_property_36_47();
void is_active_obj_exists_32_48();
void postjob_35_48();
void is_active_alarm_exists_7_48();
void ALARM_handler_8_95(signed int aid);
void ALARM_handler_8_96(signed int aid);
void check_property_36_48();
void is_active_obj_exists_32_49();
void postjob_35_49();
void is_active_alarm_exists_7_49();
void ALARM_handler_8_97(signed int aid);
void ALARM_handler_8_98(signed int aid);
void check_property_36_49();
void is_active_obj_exists_32_50();
void postjob_35_50();
void is_active_alarm_exists_7_50();
void ALARM_handler_8_99(signed int aid);
void ALARM_handler_8_100(signed int aid);
void check_property_36_50();
void is_active_obj_exists_32_51();
void postjob_35_51();
void is_active_alarm_exists_7_51();
void ALARM_handler_8_101(signed int aid);
void ALARM_handler_8_102(signed int aid);
void ActivateTask_Common_60_4(unsigned char reftask);
void push_task_into_readyQ_37_3(unsigned char t, unsigned char p, signed int pc, push_type pushkind);
void reschedule_38_3(API reschedule__api, unsigned char tid);
void push_task_into_readyQ_92_3(unsigned char t, unsigned char p, signed int pc, push_type pushkind);
void get_task_from_readyQ_93_3();
void check_property_36_51();
void is_active_obj_exists_32_52();
void Func_ControlTask_34_4();
void postjob_35_52();
void is_active_alarm_exists_7_52();
void ALARM_handler_8_103(signed int aid);
void ALARM_handler_8_104(signed int aid);
void check_property_36_52();
void is_active_obj_exists_32_53();
void Func_ControlTask_34_5();
void GetResource_62_2(unsigned char resid);
void GetResource_Common_57_3(unsigned char resid);
void is_alloc_53_3(unsigned char res);
void postjob_35_53();
void is_active_alarm_exists_7_53();
void ALARM_handler_8_105(signed int aid);
void ALARM_handler_8_106(signed int aid);
void check_property_36_53();
void is_active_obj_exists_32_54();
void Func_ControlTask_34_6();
void ReleaseResource_63_2(unsigned char resid);
void ReleaseResource_Common_55_3(unsigned char resid);
void is_alloc_17_3(unsigned char res);
void is_alloc_18_7(unsigned char res);
void is_alloc_18_8(unsigned char res);
void is_alloc_18_9(unsigned char res);
void reschedule_19_3(API reschedule__api, unsigned char tid);
void postjob_35_54();
void is_active_alarm_exists_7_54();
void ALARM_handler_8_107(signed int aid);
void ALARM_handler_8_108(signed int aid);
void check_property_36_54();
void is_active_obj_exists_32_55();
void Func_ControlTask_34_7();
void speedPIDController_64_1(signed int d);
void directionPIDController_65_1(signed int d);
void TerminateTask_66_2();
void TerminateTask_Common_44_4();
void reschedule_78_4(API reschedule__api, unsigned char tid);
void get_task_from_readyQ_91_4();
void postjob_35_55();
void is_active_alarm_exists_7_55();
void ALARM_handler_8_109(signed int aid);
void ALARM_handler_8_110(signed int aid);
void check_property_36_55();
extern object_data_t __VERIFIER_nondet_object_data_t();
extern signed int __VERIFIER_nondet_signed_int();
extern U8 * __VERIFIER_nondet_U8_star();
int __iv__return_expr_main;
SINT __iv__return_expr_send_nxtcam_command;
signed int __iv__return_expr_request;
signed int __iv__return_expr_postjob;
signed int __iv__return_expr_i2c_start_transaction;
signed int __iv__return_expr_i2c_busy;
signed int __iv__return_expr_getArea;
signed int __iv__return_expr_ReleaseResource_Common;
signed int __iv__return_expr_speedPIDController;
data_t __iv__return_expr_median_filter;
signed int __iv__return_expr_is_active_obj_exists;
signed int __iv__return_expr_is_active_alarm_exists;
signed int __iv__return_expr_getbiggestrect;
signed int __iv__return_expr_getX;
signed int __iv__return_expr_getWidth;
signed int __iv__return_expr_getHeight;
signed int __iv__return_expr_fisqrt;
signed int __iv__return_expr_ActivateTask_Common;
signed int __iv__return_expr_is_alloc;
signed int __iv__return_expr_WaitEvent_Common;
signed int __iv__return_expr_WaitEvent;
signed int __iv__return_expr_TerminateTask;
signed int __iv__return_expr_SetRelAlarm_Common;
signed int __iv__return_expr_SetRelAlarm;
signed int __iv__return_expr_SetEvent;
signed int __iv__return_expr_GetResource_Common;
signed int __iv__return_expr_ReleaseResource;
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
signed int __iv__return_expr_CancelAlarm;
signed int __iv__return_expr_CancelAlarm_Common;
signed int __iv__return_expr_directionPIDController;
signed int __iv__return_expr_getY;
U8* __iv__return_expr_getdata;
object_data_t __iv__return_expr_getData;
signed int __iv__return_expr_reschedule;
int main(){
	StartOS_0_1((unsigned char)(1));
}
void StartOS_0_1(unsigned char app_mode){
	os_on = 1; 
	initialize_46_1();
	startup_process_47_1();
	app_48_1();
}
void initialize_46_1(){
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
void startup_process_47_1(){
	unsigned int i;
	i = 0; 
	i = 1; 
	i = 2; 
	task_dyn_info[2].act_cnt = 1; 
	current_prio = 2; 
	push_task_into_readyQ_86_1((unsigned char)(i), current_prio, 0, (push_type)(0));
	task_state[2] = 1; 
	i = 3; 
	i = 4; 
	get_task_from_readyQ_87_1();
	task_state[2] = 2; 
}
void push_task_into_readyQ_86_1(unsigned char t, unsigned char p, signed int pc, push_type pushkind){
	task_state[2] = 1; 
	k = 0; 
	readyQ[2][0].tid = 2; 
	rear[2] = 1; 
	size[2] = 1; 
	wholesize = 1; 
	max_prio = 2; 
}
void get_task_from_readyQ_87_1(){
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
void app_48_1(){
	signed int count;
	count = 0; 
	current_pc[1] = 1;
	current_pc[2] = 1; 
	signed int return_value_is_active_obj_exists;
	is_active_obj_exists_32_1();
	return_value_is_active_obj_exists = 1; 
	Func_ControlTask_34_1();
	postjob_35_1();
	check_property_36_1();
	count = 1; 
	is_active_obj_exists_32_2();
	return_value_is_active_obj_exists = 1; 
	Func_ControlTask_34_2();
	postjob_35_2();
	check_property_36_2();
	count = 2; 
	is_active_obj_exists_32_3();
	return_value_is_active_obj_exists = 1; 
	Func_AcquisitionTask_33_1();
	postjob_35_3();
	check_property_36_3();
	count = 3; 
	is_active_obj_exists_32_4();
	return_value_is_active_obj_exists = 1; 
	Func_ControlTask_34_3();
	postjob_35_4();
	check_property_36_4();
	count = 4; 
	is_active_obj_exists_32_5();
	return_value_is_active_obj_exists = 1; 
	postjob_35_5();
	check_property_36_5();
	count = 5; 
	is_active_obj_exists_32_6();
	return_value_is_active_obj_exists = 1; 
	postjob_35_6();
	check_property_36_6();
	count = 6; 
	is_active_obj_exists_32_7();
	return_value_is_active_obj_exists = 1; 
	postjob_35_7();
	check_property_36_7();
	count = 7; 
	is_active_obj_exists_32_8();
	return_value_is_active_obj_exists = 1; 
	postjob_35_8();
	check_property_36_8();
	count = 8; 
	is_active_obj_exists_32_9();
	return_value_is_active_obj_exists = 1; 
	postjob_35_9();
	check_property_36_9();
	count = 9; 
	is_active_obj_exists_32_10();
	return_value_is_active_obj_exists = 1; 
	postjob_35_10();
	check_property_36_10();
	count = 10; 
	is_active_obj_exists_32_11();
	return_value_is_active_obj_exists = 1; 
	postjob_35_11();
	check_property_36_11();
	count = 11; 
	is_active_obj_exists_32_12();
	return_value_is_active_obj_exists = 1; 
	postjob_35_12();
	check_property_36_12();
	count = 12; 
	is_active_obj_exists_32_13();
	return_value_is_active_obj_exists = 1; 
	postjob_35_13();
	check_property_36_13();
	count = 13; 
	is_active_obj_exists_32_14();
	return_value_is_active_obj_exists = 1; 
	postjob_35_14();
	check_property_36_14();
	count = 14; 
	is_active_obj_exists_32_15();
	return_value_is_active_obj_exists = 1; 
	postjob_35_15();
	check_property_36_15();
	count = 15; 
	is_active_obj_exists_32_16();
	return_value_is_active_obj_exists = 1; 
	postjob_35_16();
	check_property_36_16();
	count = 16; 
	is_active_obj_exists_32_17();
	return_value_is_active_obj_exists = 1; 
	postjob_35_17();
	check_property_36_17();
	count = 17; 
	is_active_obj_exists_32_18();
	return_value_is_active_obj_exists = 1; 
	postjob_35_18();
	check_property_36_18();
	count = 18; 
	is_active_obj_exists_32_19();
	return_value_is_active_obj_exists = 1; 
	postjob_35_19();
	check_property_36_19();
	count = 19; 
	is_active_obj_exists_32_20();
	return_value_is_active_obj_exists = 1; 
	postjob_35_20();
	check_property_36_20();
	count = 20; 
	is_active_obj_exists_32_21();
	return_value_is_active_obj_exists = 1; 
	postjob_35_21();
	check_property_36_21();
	count = 21; 
	is_active_obj_exists_32_22();
	return_value_is_active_obj_exists = 1; 
	postjob_35_22();
	check_property_36_22();
	count = 22; 
	is_active_obj_exists_32_23();
	return_value_is_active_obj_exists = 1; 
	postjob_35_23();
	check_property_36_23();
	count = 23; 
	is_active_obj_exists_32_24();
	return_value_is_active_obj_exists = 1; 
	postjob_35_24();
	check_property_36_24();
	count = 24; 
	is_active_obj_exists_32_25();
	return_value_is_active_obj_exists = 1; 
	postjob_35_25();
	check_property_36_25();
	count = 25; 
	is_active_obj_exists_32_26();
	return_value_is_active_obj_exists = 1; 
	postjob_35_26();
	check_property_36_26();
	count = 26; 
	is_active_obj_exists_32_27();
	return_value_is_active_obj_exists = 1; 
	postjob_35_27();
	check_property_36_27();
	count = 27; 
	is_active_obj_exists_32_28();
	return_value_is_active_obj_exists = 1; 
	postjob_35_28();
	check_property_36_28();
	count = 28; 
	is_active_obj_exists_32_29();
	return_value_is_active_obj_exists = 1; 
	postjob_35_29();
	check_property_36_29();
	count = 29; 
	is_active_obj_exists_32_30();
	return_value_is_active_obj_exists = 1; 
	postjob_35_30();
	check_property_36_30();
	count = 30; 
	is_active_obj_exists_32_31();
	return_value_is_active_obj_exists = 1; 
	postjob_35_31();
	check_property_36_31();
	count = 31; 
	is_active_obj_exists_32_32();
	return_value_is_active_obj_exists = 1; 
	Func_AcquisitionTask_33_2();
	postjob_35_32();
	check_property_36_32();
	count = 32; 
	is_active_obj_exists_32_33();
	return_value_is_active_obj_exists = 1; 
	Func_AcquisitionTask_33_3();
	postjob_35_33();
	check_property_36_33();
	count = 33; 
	is_active_obj_exists_32_34();
	return_value_is_active_obj_exists = 1; 
	Func_AcquisitionTask_33_4();
	postjob_35_34();
	check_property_36_34();
	count = 34; 
	is_active_obj_exists_32_35();
	return_value_is_active_obj_exists = 1; 
	Func_AcquisitionTask_33_5();
	postjob_35_35();
	check_property_36_35();
	count = 35; 
	is_active_obj_exists_32_36();
	return_value_is_active_obj_exists = 1; 
	postjob_35_36();
	check_property_36_36();
	count = 36; 
	is_active_obj_exists_32_37();
	return_value_is_active_obj_exists = 1; 
	postjob_35_37();
	check_property_36_37();
	count = 37; 
	is_active_obj_exists_32_38();
	return_value_is_active_obj_exists = 1; 
	postjob_35_38();
	check_property_36_38();
	count = 38; 
	is_active_obj_exists_32_39();
	return_value_is_active_obj_exists = 1; 
	postjob_35_39();
	check_property_36_39();
	count = 39; 
	is_active_obj_exists_32_40();
	return_value_is_active_obj_exists = 1; 
	postjob_35_40();
	check_property_36_40();
	count = 40; 
	is_active_obj_exists_32_41();
	return_value_is_active_obj_exists = 1; 
	postjob_35_41();
	check_property_36_41();
	count = 41; 
	is_active_obj_exists_32_42();
	return_value_is_active_obj_exists = 1; 
	postjob_35_42();
	check_property_36_42();
	count = 42; 
	is_active_obj_exists_32_43();
	return_value_is_active_obj_exists = 1; 
	postjob_35_43();
	check_property_36_43();
	count = 43; 
	is_active_obj_exists_32_44();
	return_value_is_active_obj_exists = 1; 
	postjob_35_44();
	check_property_36_44();
	count = 44; 
	is_active_obj_exists_32_45();
	return_value_is_active_obj_exists = 1; 
	postjob_35_45();
	check_property_36_45();
	count = 45; 
	is_active_obj_exists_32_46();
	return_value_is_active_obj_exists = 1; 
	postjob_35_46();
	check_property_36_46();
	count = 46; 
	is_active_obj_exists_32_47();
	return_value_is_active_obj_exists = 1; 
	postjob_35_47();
	check_property_36_47();
	count = 47; 
	is_active_obj_exists_32_48();
	return_value_is_active_obj_exists = 1; 
	postjob_35_48();
	check_property_36_48();
	count = 48; 
	is_active_obj_exists_32_49();
	return_value_is_active_obj_exists = 1; 
	postjob_35_49();
	check_property_36_49();
	count = 49; 
	is_active_obj_exists_32_50();
	return_value_is_active_obj_exists = 1; 
	postjob_35_50();
	check_property_36_50();
	count = 50; 
	is_active_obj_exists_32_51();
	return_value_is_active_obj_exists = 1; 
	postjob_35_51();
	check_property_36_51();
	count = 51; 
	is_active_obj_exists_32_52();
	return_value_is_active_obj_exists = 1; 
	Func_ControlTask_34_4();
	postjob_35_52();
	check_property_36_52();
	count = 52; 
	is_active_obj_exists_32_53();
	return_value_is_active_obj_exists = 1; 
	Func_ControlTask_34_5();
	postjob_35_53();
	check_property_36_53();
	count = 53; 
	is_active_obj_exists_32_54();
	return_value_is_active_obj_exists = 1; 
	Func_ControlTask_34_6();
	postjob_35_54();
	check_property_36_54();
	count = 54; 
	is_active_obj_exists_32_55();
	return_value_is_active_obj_exists = 1; 
	Func_ControlTask_34_7();
	postjob_35_55();
	check_property_36_55();
}
void is_active_obj_exists_32_1(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 0; 
	i = 2; 
	tmp_if_expr = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void Func_ControlTask_34_1(){
	GetResource_62_1((unsigned char)(1));
	current_pc[2] = 2; 
}
void GetResource_62_1(unsigned char resid){
	GetResource_Common_57_1(resid);
}
void GetResource_Common_57_1(unsigned char resid){
	signed int return_value_is_alloc;
	__CPROVER_bool tmp_if_expr;
	is_alloc_53_1(resid);
	return_value_is_alloc = 0; 
	tmp_if_expr = 0; 
	Resource_Table[1].alloc = 2; 
	task_dyn_info[2].dyn_prio = 4; 
}
void is_alloc_53_1(unsigned char res){
	__iv__return_expr_is_alloc = 0; 
}
void postjob_35_1(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_1();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_1(aid);
	aid = 2; 
	ALARM_handler_8_2(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_1(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_1(signed int aid){
	alarm_info[1].next_alarm_tick = 0; 
	alarm_info[1].next_alarm_tick = 30; 
	alarm_state[1] = 2; 
	ActivateTask_Common_60_1(alarm_info[(signed long int)(aid)].param1);
	alarm_state[1] = 1; 
}
void ActivateTask_Common_60_1(unsigned char reftask){
	signed int i;
	i = 0; 
	Event_Table[0].task_alloc[1] = 0; 
	i = 1; 
	Event_Table[1].task_alloc[1] = 0; 
	i = 2; 
	Event_Table[2].task_alloc[1] = 0; 
	i = 3; 
	task_dyn_info[1].act_cnt = 1; 
	push_task_into_readyQ_37_1(reftask, task_static_info[(signed long int)(reftask)].prio, 0, (push_type)(0));
	reschedule_38_1((API)(0), current_tid);
}
void push_task_into_readyQ_37_1(unsigned char t, unsigned char p, signed int pc, push_type pushkind){
	task_state[1] = 1; 
	k = 0; 
	readyQ[3][0].tid = 1; 
	rear[3] = 1; 
	size[3] = 1; 
	wholesize = 1; 
	max_prio = 3; 
}
void reschedule_38_1(API reschedule__api, unsigned char tid){
}
void ALARM_handler_8_2(signed int aid){
	alarm_info[2].next_alarm_tick = 0; 
	alarm_info[2].next_alarm_tick = 50; 
	alarm_state[2] = 2; 
	ActivateTask_Common_60_2(alarm_info[(signed long int)(aid)].param1);
	alarm_state[2] = 1; 
}
void ActivateTask_Common_60_2(unsigned char reftask){
}
void check_property_36_1(){
}
void is_active_obj_exists_32_2(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void Func_ControlTask_34_2(){
	data = objData;
	ReleaseResource_63_1((unsigned char)(1));
	current_pc[2] = 3; 
}
void ReleaseResource_63_1(unsigned char resid){
	ReleaseResource_Common_55_1(resid);
}
void ReleaseResource_Common_55_1(unsigned char resid){
	unsigned char i;
	signed int return_value_is_alloc_0;
	is_alloc_17_1(resid);
	return_value_is_alloc_0 = 2; 
	Resource_Table[1].alloc = 0; 
	current_prio = 2; 
	i = 0; 
	signed int return_value_is_alloc;
	is_alloc_18_1(i);
	return_value_is_alloc = 0; 
	i = 1; 
	is_alloc_18_2(i);
	return_value_is_alloc = 0; 
	i = 2; 
	is_alloc_18_3(i);
	return_value_is_alloc = 0; 
	i = 3; 
	task_dyn_info[2].dyn_prio = 2; 
	reschedule_19_1((API)(5), current_tid);
}
void is_alloc_17_1(unsigned char res){
	__iv__return_expr_is_alloc = 2; 
}
void is_alloc_18_1(unsigned char res){
	__iv__return_expr_is_alloc = 0; 
}
void is_alloc_18_2(unsigned char res){
	__iv__return_expr_is_alloc = 0; 
}
void is_alloc_18_3(unsigned char res){
	__iv__return_expr_is_alloc = 0; 
}
void reschedule_19_1(API reschedule__api, unsigned char tid){
	push_task_into_readyQ_92_1(tid, task_dyn_info[(signed long int)(tid)].dyn_prio, current_pc[(signed long int)(tid)], (push_type)(1));
	get_task_from_readyQ_93_1();
}
void push_task_into_readyQ_92_1(unsigned char t, unsigned char p, signed int pc, push_type pushkind){
	task_state[2] = 1; 
	front[2] = 0; 
	k = 0; 
	readyQ[2][0].tid = 2; 
	size[2] = 1; 
	wholesize = 2; 
}
void get_task_from_readyQ_93_1(){
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
void postjob_35_2(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_2();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_3(aid);
	aid = 2; 
	ALARM_handler_8_4(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_2(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_3(signed int aid){
	alarm_info[1].next_alarm_tick = 29; 
}
void ALARM_handler_8_4(signed int aid){
	alarm_info[2].next_alarm_tick = 49; 
}
void check_property_36_2(){
}
void is_active_obj_exists_32_3(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void Func_AcquisitionTask_33_1(){
	__CPROVER_assume(((current_pc[1] == 1)));
	__CPROVER_assume(!(((signed int)(tracking_enabled) == 0)));
	signed int return_value_send_nxtcam_command;
	send_nxtcam_command_21_1((U8)(2), (U8)(69));
	return_value_send_nxtcam_command = __iv__return_expr_send_nxtcam_command;
	tracking_enabled = (S8)(return_value_send_nxtcam_command);
	TerminateTask_30_1();
	current_pc[1] = 4;
}
void send_nxtcam_command_21_1(U8 port_id, U8 command){
	signed int return_value_i2c_busy;
	i2c_busy_2_1((signed int)(port_id));
	return_value_i2c_busy = 256; 
	i2c_busy_2_2((signed int)(port_id));
	return_value_i2c_busy = 16384; 
	i2c_busy_2_3((signed int)(port_id));
	return_value_i2c_busy = 8388608; 
	i2c_busy_2_4((signed int)(port_id));
	return_value_i2c_busy = 2097152; 
	i2c_busy_2_5((signed int)(port_id));
	return_value_i2c_busy = 8; 
	i2c_busy_2_6((signed int)(port_id));
	return_value_i2c_busy = 2; 
	i2c_busy_2_7((signed int)(port_id));
	return_value_i2c_busy = 32768; 
	i2c_busy_2_8((signed int)(port_id));
	return_value_i2c_busy = 64; 
	i2c_busy_2_9((signed int)(port_id));
	return_value_i2c_busy = 1024; 
	i2c_busy_2_10((signed int)(port_id));
	return_value_i2c_busy = 256; 
	i2c_busy_2_11((signed int)(port_id));
	return_value_i2c_busy = 128; 
	i2c_busy_2_12((signed int)(port_id));
	return_value_i2c_busy = -2147483648; 
	i2c_busy_2_13((signed int)(port_id));
	return_value_i2c_busy = -2147483648; 
	i2c_busy_2_14((signed int)(port_id));
	return_value_i2c_busy = 1; 
	i2c_busy_2_15((signed int)(port_id));
	return_value_i2c_busy = 536870912; 
	i2c_busy_2_16((signed int)(port_id));
	return_value_i2c_busy = 8192; 
	i2c_busy_2_17((signed int)(port_id));
	return_value_i2c_busy = 8388608; 
	i2c_busy_2_18((signed int)(port_id));
	return_value_i2c_busy = 131072; 
	i2c_busy_2_19((signed int)(port_id));
	return_value_i2c_busy = 32768; 
	i2c_busy_2_20((signed int)(port_id));
	return_value_i2c_busy = 2048; 
	i2c_busy_2_21((signed int)(port_id));
	return_value_i2c_busy = 524288; 
	i2c_busy_2_22((signed int)(port_id));
	return_value_i2c_busy = 2; 
	i2c_busy_2_23((signed int)(port_id));
	return_value_i2c_busy = 1048576; 
	i2c_busy_2_24((signed int)(port_id));
	return_value_i2c_busy = 8192; 
	i2c_busy_2_25((signed int)(port_id));
	return_value_i2c_busy = 32; 
	i2c_busy_2_26((signed int)(port_id));
	return_value_i2c_busy = 512; 
	i2c_busy_2_27((signed int)(port_id));
	return_value_i2c_busy = 32768; 
	i2c_busy_2_28((signed int)(port_id));
	return_value_i2c_busy = 32; 
	i2c_busy_2_29((signed int)(port_id));
	return_value_i2c_busy = -2147483648; 
	i2c_busy_2_30((signed int)(port_id));
	return_value_i2c_busy = 2; 
	i2c_busy_2_31((signed int)(port_id));
	return_value_i2c_busy = 64; 
	i2c_busy_2_32((signed int)(port_id));
	return_value_i2c_busy = 4; 
	i2c_busy_2_33((signed int)(port_id));
	return_value_i2c_busy = 134217728; 
	i2c_busy_2_34((signed int)(port_id));
	return_value_i2c_busy = 4; 
	i2c_busy_2_35((signed int)(port_id));
	return_value_i2c_busy = 4096; 
	i2c_busy_2_36((signed int)(port_id));
	return_value_i2c_busy = 2097152; 
	i2c_busy_2_37((signed int)(port_id));
	return_value_i2c_busy = 8; 
	i2c_busy_2_38((signed int)(port_id));
	return_value_i2c_busy = 2; 
	i2c_busy_2_39((signed int)(port_id));
	return_value_i2c_busy = 1024; 
	i2c_busy_2_40((signed int)(port_id));
	return_value_i2c_busy = 1; 
	i2c_busy_2_41((signed int)(port_id));
	return_value_i2c_busy = 8; 
	i2c_busy_2_42((signed int)(port_id));
	return_value_i2c_busy = 128; 
	i2c_busy_2_43((signed int)(port_id));
	return_value_i2c_busy = 64; 
	i2c_busy_2_44((signed int)(port_id));
	return_value_i2c_busy = 32; 
	i2c_busy_2_45((signed int)(port_id));
	return_value_i2c_busy = 8; 
	i2c_busy_2_46((signed int)(port_id));
	return_value_i2c_busy = 268435456; 
	i2c_busy_2_47((signed int)(port_id));
	return_value_i2c_busy = 262144; 
	i2c_busy_2_48((signed int)(port_id));
	return_value_i2c_busy = 262144; 
	i2c_busy_2_49((signed int)(port_id));
	return_value_i2c_busy = 134217728; 
	i2c_busy_2_50((signed int)(port_id));
	return_value_i2c_busy = 262144; 
	i2c_busy_2_51((signed int)(port_id));
	return_value_i2c_busy = 134217728; 
	i2c_busy_2_52((signed int)(port_id));
	return_value_i2c_busy = 512; 
	i2c_busy_2_53((signed int)(port_id));
	return_value_i2c_busy = 8; 
	i2c_busy_2_54((signed int)(port_id));
	return_value_i2c_busy = 131072; 
	i2c_busy_2_55((signed int)(port_id));
	return_value_i2c_busy = -2147483648; 
	i2c_busy_2_56((signed int)(port_id));
	return_value_i2c_busy = 1024; 
	i2c_busy_2_57((signed int)(port_id));
	return_value_i2c_busy = 262144; 
	i2c_busy_2_58((signed int)(port_id));
	return_value_i2c_busy = 512; 
	i2c_busy_2_59((signed int)(port_id));
	return_value_i2c_busy = 16; 
	i2c_busy_2_60((signed int)(port_id));
	return_value_i2c_busy = 0; 
	nxtcambuffer[0] = command;
	SINT ret;
	i2c_start_transaction_3_1((signed int)(port_id), 1u, 0x41, 1, nxtcambuffer, 1u, 1);
	ret = __iv__return_expr_i2c_start_transaction;
	__iv__return_expr_send_nxtcam_command = ret;
}
void i2c_busy_2_1(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 256; 
	__iv__return_expr_i2c_busy = 256; 
}
void i2c_busy_2_2(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 16384; 
	__iv__return_expr_i2c_busy = 16384; 
}
void i2c_busy_2_3(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 8388608; 
	__iv__return_expr_i2c_busy = 8388608; 
}
void i2c_busy_2_4(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 2097152; 
	__iv__return_expr_i2c_busy = 2097152; 
}
void i2c_busy_2_5(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 8; 
	__iv__return_expr_i2c_busy = 8; 
}
void i2c_busy_2_6(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 2; 
	__iv__return_expr_i2c_busy = 2; 
}
void i2c_busy_2_7(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 32768; 
	__iv__return_expr_i2c_busy = 32768; 
}
void i2c_busy_2_8(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 64; 
	__iv__return_expr_i2c_busy = 64; 
}
void i2c_busy_2_9(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 1024; 
	__iv__return_expr_i2c_busy = 1024; 
}
void i2c_busy_2_10(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 256; 
	__iv__return_expr_i2c_busy = 256; 
}
void i2c_busy_2_11(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 128; 
	__iv__return_expr_i2c_busy = 128; 
}
void i2c_busy_2_12(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = -2147483648; 
	__iv__return_expr_i2c_busy = -2147483648; 
}
void i2c_busy_2_13(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = -2147483648; 
	__iv__return_expr_i2c_busy = -2147483648; 
}
void i2c_busy_2_14(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 1; 
	__iv__return_expr_i2c_busy = 1; 
}
void i2c_busy_2_15(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 536870912; 
	__iv__return_expr_i2c_busy = 536870912; 
}
void i2c_busy_2_16(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 8192; 
	__iv__return_expr_i2c_busy = 8192; 
}
void i2c_busy_2_17(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 8388608; 
	__iv__return_expr_i2c_busy = 8388608; 
}
void i2c_busy_2_18(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 131072; 
	__iv__return_expr_i2c_busy = 131072; 
}
void i2c_busy_2_19(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 32768; 
	__iv__return_expr_i2c_busy = 32768; 
}
void i2c_busy_2_20(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 2048; 
	__iv__return_expr_i2c_busy = 2048; 
}
void i2c_busy_2_21(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 524288; 
	__iv__return_expr_i2c_busy = 524288; 
}
void i2c_busy_2_22(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 2; 
	__iv__return_expr_i2c_busy = 2; 
}
void i2c_busy_2_23(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 1048576; 
	__iv__return_expr_i2c_busy = 1048576; 
}
void i2c_busy_2_24(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 8192; 
	__iv__return_expr_i2c_busy = 8192; 
}
void i2c_busy_2_25(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 32; 
	__iv__return_expr_i2c_busy = 32; 
}
void i2c_busy_2_26(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 512; 
	__iv__return_expr_i2c_busy = 512; 
}
void i2c_busy_2_27(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 32768; 
	__iv__return_expr_i2c_busy = 32768; 
}
void i2c_busy_2_28(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 32; 
	__iv__return_expr_i2c_busy = 32; 
}
void i2c_busy_2_29(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = -2147483648; 
	__iv__return_expr_i2c_busy = -2147483648; 
}
void i2c_busy_2_30(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 2; 
	__iv__return_expr_i2c_busy = 2; 
}
void i2c_busy_2_31(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 64; 
	__iv__return_expr_i2c_busy = 64; 
}
void i2c_busy_2_32(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 4; 
	__iv__return_expr_i2c_busy = 4; 
}
void i2c_busy_2_33(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 134217728; 
	__iv__return_expr_i2c_busy = 134217728; 
}
void i2c_busy_2_34(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 4; 
	__iv__return_expr_i2c_busy = 4; 
}
void i2c_busy_2_35(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 4096; 
	__iv__return_expr_i2c_busy = 4096; 
}
void i2c_busy_2_36(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 2097152; 
	__iv__return_expr_i2c_busy = 2097152; 
}
void i2c_busy_2_37(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 8; 
	__iv__return_expr_i2c_busy = 8; 
}
void i2c_busy_2_38(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 2; 
	__iv__return_expr_i2c_busy = 2; 
}
void i2c_busy_2_39(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 1024; 
	__iv__return_expr_i2c_busy = 1024; 
}
void i2c_busy_2_40(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 1; 
	__iv__return_expr_i2c_busy = 1; 
}
void i2c_busy_2_41(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 8; 
	__iv__return_expr_i2c_busy = 8; 
}
void i2c_busy_2_42(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 128; 
	__iv__return_expr_i2c_busy = 128; 
}
void i2c_busy_2_43(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 64; 
	__iv__return_expr_i2c_busy = 64; 
}
void i2c_busy_2_44(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 32; 
	__iv__return_expr_i2c_busy = 32; 
}
void i2c_busy_2_45(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 8; 
	__iv__return_expr_i2c_busy = 8; 
}
void i2c_busy_2_46(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 268435456; 
	__iv__return_expr_i2c_busy = 268435456; 
}
void i2c_busy_2_47(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 262144; 
	__iv__return_expr_i2c_busy = 262144; 
}
void i2c_busy_2_48(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 262144; 
	__iv__return_expr_i2c_busy = 262144; 
}
void i2c_busy_2_49(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 134217728; 
	__iv__return_expr_i2c_busy = 134217728; 
}
void i2c_busy_2_50(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 262144; 
	__iv__return_expr_i2c_busy = 262144; 
}
void i2c_busy_2_51(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 134217728; 
	__iv__return_expr_i2c_busy = 134217728; 
}
void i2c_busy_2_52(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 512; 
	__iv__return_expr_i2c_busy = 512; 
}
void i2c_busy_2_53(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 8; 
	__iv__return_expr_i2c_busy = 8; 
}
void i2c_busy_2_54(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 131072; 
	__iv__return_expr_i2c_busy = 131072; 
}
void i2c_busy_2_55(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = -2147483648; 
	__iv__return_expr_i2c_busy = -2147483648; 
}
void i2c_busy_2_56(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 1024; 
	__iv__return_expr_i2c_busy = 1024; 
}
void i2c_busy_2_57(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 262144; 
	__iv__return_expr_i2c_busy = 262144; 
}
void i2c_busy_2_58(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 512; 
	__iv__return_expr_i2c_busy = 512; 
}
void i2c_busy_2_59(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 16; 
	__iv__return_expr_i2c_busy = 16; 
}
void i2c_busy_2_60(signed int port){
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
void TerminateTask_30_1(){
	TerminateTask_Common_44_1();
}
void TerminateTask_Common_44_1(){
	task_dyn_info[1].act_cnt = 0; 
	task_state[1] = 0; 
	reschedule_78_1((API)(1), current_tid);
}
void reschedule_78_1(API reschedule__api, unsigned char tid){
	get_task_from_readyQ_91_1();
}
void get_task_from_readyQ_91_1(){
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
void postjob_35_3(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_3();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_5(aid);
	aid = 2; 
	ALARM_handler_8_6(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_3(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_5(signed int aid){
	alarm_info[1].next_alarm_tick = 28; 
}
void ALARM_handler_8_6(signed int aid){
	alarm_info[2].next_alarm_tick = 48; 
}
void check_property_36_3(){
}
void is_active_obj_exists_32_4(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 0; 
	i = 2; 
	tmp_if_expr = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void Func_ControlTask_34_3(){
	ctl_size = data.size;
	position = data.position;
	__CPROVER_assume((!(((ctl_size >= 1) && (position >= 1)))));
	TerminateTask_66_1();
	current_pc[2] = 4; 
}
void TerminateTask_66_1(){
	TerminateTask_Common_44_2();
}
void TerminateTask_Common_44_2(){
	task_dyn_info[2].act_cnt = 0; 
	task_state[2] = 0; 
	reschedule_78_2((API)(1), current_tid);
}
void reschedule_78_2(API reschedule__api, unsigned char tid){
	get_task_from_readyQ_91_2();
}
void get_task_from_readyQ_91_2(){
	current_tid = 0; 
	current_prio = 0; 
}
void postjob_35_4(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_4();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_7(aid);
	aid = 2; 
	ALARM_handler_8_8(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_4(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_7(signed int aid){
	alarm_info[1].next_alarm_tick = 27; 
}
void ALARM_handler_8_8(signed int aid){
	alarm_info[2].next_alarm_tick = 47; 
}
void check_property_36_4(){
}
void is_active_obj_exists_32_5(){
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
void postjob_35_5(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_5();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_9(aid);
	aid = 2; 
	ALARM_handler_8_10(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_5(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_9(signed int aid){
	alarm_info[1].next_alarm_tick = 26; 
}
void ALARM_handler_8_10(signed int aid){
	alarm_info[2].next_alarm_tick = 46; 
}
void check_property_36_5(){
}
void is_active_obj_exists_32_6(){
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
void postjob_35_6(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_6();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_11(aid);
	aid = 2; 
	ALARM_handler_8_12(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_6(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_11(signed int aid){
	alarm_info[1].next_alarm_tick = 25; 
}
void ALARM_handler_8_12(signed int aid){
	alarm_info[2].next_alarm_tick = 45; 
}
void check_property_36_6(){
}
void is_active_obj_exists_32_7(){
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
void postjob_35_7(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_7();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_13(aid);
	aid = 2; 
	ALARM_handler_8_14(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_7(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_13(signed int aid){
	alarm_info[1].next_alarm_tick = 24; 
}
void ALARM_handler_8_14(signed int aid){
	alarm_info[2].next_alarm_tick = 44; 
}
void check_property_36_7(){
}
void is_active_obj_exists_32_8(){
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
void postjob_35_8(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_8();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_15(aid);
	aid = 2; 
	ALARM_handler_8_16(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_8(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_15(signed int aid){
	alarm_info[1].next_alarm_tick = 23; 
}
void ALARM_handler_8_16(signed int aid){
	alarm_info[2].next_alarm_tick = 43; 
}
void check_property_36_8(){
}
void is_active_obj_exists_32_9(){
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
void postjob_35_9(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_9();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_17(aid);
	aid = 2; 
	ALARM_handler_8_18(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_9(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_17(signed int aid){
	alarm_info[1].next_alarm_tick = 22; 
}
void ALARM_handler_8_18(signed int aid){
	alarm_info[2].next_alarm_tick = 42; 
}
void check_property_36_9(){
}
void is_active_obj_exists_32_10(){
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
void postjob_35_10(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_10();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_19(aid);
	aid = 2; 
	ALARM_handler_8_20(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_10(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_19(signed int aid){
	alarm_info[1].next_alarm_tick = 21; 
}
void ALARM_handler_8_20(signed int aid){
	alarm_info[2].next_alarm_tick = 41; 
}
void check_property_36_10(){
}
void is_active_obj_exists_32_11(){
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
void postjob_35_11(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_11();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_21(aid);
	aid = 2; 
	ALARM_handler_8_22(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_11(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_21(signed int aid){
	alarm_info[1].next_alarm_tick = 20; 
}
void ALARM_handler_8_22(signed int aid){
	alarm_info[2].next_alarm_tick = 40; 
}
void check_property_36_11(){
}
void is_active_obj_exists_32_12(){
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
void postjob_35_12(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_12();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_23(aid);
	aid = 2; 
	ALARM_handler_8_24(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_12(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_23(signed int aid){
	alarm_info[1].next_alarm_tick = 19; 
}
void ALARM_handler_8_24(signed int aid){
	alarm_info[2].next_alarm_tick = 39; 
}
void check_property_36_12(){
}
void is_active_obj_exists_32_13(){
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
void postjob_35_13(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_13();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_25(aid);
	aid = 2; 
	ALARM_handler_8_26(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_13(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_25(signed int aid){
	alarm_info[1].next_alarm_tick = 18; 
}
void ALARM_handler_8_26(signed int aid){
	alarm_info[2].next_alarm_tick = 38; 
}
void check_property_36_13(){
}
void is_active_obj_exists_32_14(){
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
void postjob_35_14(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_14();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_27(aid);
	aid = 2; 
	ALARM_handler_8_28(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_14(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_27(signed int aid){
	alarm_info[1].next_alarm_tick = 17; 
}
void ALARM_handler_8_28(signed int aid){
	alarm_info[2].next_alarm_tick = 37; 
}
void check_property_36_14(){
}
void is_active_obj_exists_32_15(){
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
void postjob_35_15(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_15();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_29(aid);
	aid = 2; 
	ALARM_handler_8_30(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_15(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_29(signed int aid){
	alarm_info[1].next_alarm_tick = 16; 
}
void ALARM_handler_8_30(signed int aid){
	alarm_info[2].next_alarm_tick = 36; 
}
void check_property_36_15(){
}
void is_active_obj_exists_32_16(){
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
void postjob_35_16(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_16();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_31(aid);
	aid = 2; 
	ALARM_handler_8_32(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_16(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_31(signed int aid){
	alarm_info[1].next_alarm_tick = 15; 
}
void ALARM_handler_8_32(signed int aid){
	alarm_info[2].next_alarm_tick = 35; 
}
void check_property_36_16(){
}
void is_active_obj_exists_32_17(){
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
void postjob_35_17(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_17();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_33(aid);
	aid = 2; 
	ALARM_handler_8_34(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_17(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_33(signed int aid){
	alarm_info[1].next_alarm_tick = 14; 
}
void ALARM_handler_8_34(signed int aid){
	alarm_info[2].next_alarm_tick = 34; 
}
void check_property_36_17(){
}
void is_active_obj_exists_32_18(){
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
void postjob_35_18(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_18();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_35(aid);
	aid = 2; 
	ALARM_handler_8_36(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_18(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_35(signed int aid){
	alarm_info[1].next_alarm_tick = 13; 
}
void ALARM_handler_8_36(signed int aid){
	alarm_info[2].next_alarm_tick = 33; 
}
void check_property_36_18(){
}
void is_active_obj_exists_32_19(){
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
void postjob_35_19(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_19();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_37(aid);
	aid = 2; 
	ALARM_handler_8_38(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_19(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_37(signed int aid){
	alarm_info[1].next_alarm_tick = 12; 
}
void ALARM_handler_8_38(signed int aid){
	alarm_info[2].next_alarm_tick = 32; 
}
void check_property_36_19(){
}
void is_active_obj_exists_32_20(){
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
void postjob_35_20(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_20();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_39(aid);
	aid = 2; 
	ALARM_handler_8_40(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_20(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_39(signed int aid){
	alarm_info[1].next_alarm_tick = 11; 
}
void ALARM_handler_8_40(signed int aid){
	alarm_info[2].next_alarm_tick = 31; 
}
void check_property_36_20(){
}
void is_active_obj_exists_32_21(){
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
void postjob_35_21(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_21();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_41(aid);
	aid = 2; 
	ALARM_handler_8_42(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_21(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_41(signed int aid){
	alarm_info[1].next_alarm_tick = 10; 
}
void ALARM_handler_8_42(signed int aid){
	alarm_info[2].next_alarm_tick = 30; 
}
void check_property_36_21(){
}
void is_active_obj_exists_32_22(){
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
void postjob_35_22(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_22();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_43(aid);
	aid = 2; 
	ALARM_handler_8_44(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_22(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_43(signed int aid){
	alarm_info[1].next_alarm_tick = 9; 
}
void ALARM_handler_8_44(signed int aid){
	alarm_info[2].next_alarm_tick = 29; 
}
void check_property_36_22(){
}
void is_active_obj_exists_32_23(){
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
void postjob_35_23(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_23();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_45(aid);
	aid = 2; 
	ALARM_handler_8_46(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_23(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_45(signed int aid){
	alarm_info[1].next_alarm_tick = 8; 
}
void ALARM_handler_8_46(signed int aid){
	alarm_info[2].next_alarm_tick = 28; 
}
void check_property_36_23(){
}
void is_active_obj_exists_32_24(){
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
void postjob_35_24(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_24();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_47(aid);
	aid = 2; 
	ALARM_handler_8_48(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_24(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_47(signed int aid){
	alarm_info[1].next_alarm_tick = 7; 
}
void ALARM_handler_8_48(signed int aid){
	alarm_info[2].next_alarm_tick = 27; 
}
void check_property_36_24(){
}
void is_active_obj_exists_32_25(){
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
void postjob_35_25(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_25();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_49(aid);
	aid = 2; 
	ALARM_handler_8_50(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_25(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_49(signed int aid){
	alarm_info[1].next_alarm_tick = 6; 
}
void ALARM_handler_8_50(signed int aid){
	alarm_info[2].next_alarm_tick = 26; 
}
void check_property_36_25(){
}
void is_active_obj_exists_32_26(){
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
void postjob_35_26(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_26();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_51(aid);
	aid = 2; 
	ALARM_handler_8_52(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_26(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_51(signed int aid){
	alarm_info[1].next_alarm_tick = 5; 
}
void ALARM_handler_8_52(signed int aid){
	alarm_info[2].next_alarm_tick = 25; 
}
void check_property_36_26(){
}
void is_active_obj_exists_32_27(){
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
void postjob_35_27(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_27();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_53(aid);
	aid = 2; 
	ALARM_handler_8_54(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_27(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_53(signed int aid){
	alarm_info[1].next_alarm_tick = 4; 
}
void ALARM_handler_8_54(signed int aid){
	alarm_info[2].next_alarm_tick = 24; 
}
void check_property_36_27(){
}
void is_active_obj_exists_32_28(){
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
void postjob_35_28(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_28();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_55(aid);
	aid = 2; 
	ALARM_handler_8_56(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_28(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_55(signed int aid){
	alarm_info[1].next_alarm_tick = 3; 
}
void ALARM_handler_8_56(signed int aid){
	alarm_info[2].next_alarm_tick = 23; 
}
void check_property_36_28(){
}
void is_active_obj_exists_32_29(){
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
void postjob_35_29(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_29();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_57(aid);
	aid = 2; 
	ALARM_handler_8_58(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_29(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_57(signed int aid){
	alarm_info[1].next_alarm_tick = 2; 
}
void ALARM_handler_8_58(signed int aid){
	alarm_info[2].next_alarm_tick = 22; 
}
void check_property_36_29(){
}
void is_active_obj_exists_32_30(){
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
void postjob_35_30(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_30();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_59(aid);
	aid = 2; 
	ALARM_handler_8_60(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_30(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_59(signed int aid){
	alarm_info[1].next_alarm_tick = 1; 
}
void ALARM_handler_8_60(signed int aid){
	alarm_info[2].next_alarm_tick = 21; 
}
void check_property_36_30(){
}
void is_active_obj_exists_32_31(){
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
void postjob_35_31(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_31();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_61(aid);
	aid = 2; 
	ALARM_handler_8_62(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_31(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_61(signed int aid){
	alarm_info[1].next_alarm_tick = 0; 
	alarm_info[1].next_alarm_tick = 30; 
	alarm_state[1] = 2; 
	ActivateTask_Common_60_3(alarm_info[(signed long int)(aid)].param1);
	alarm_state[1] = 1; 
}
void ActivateTask_Common_60_3(unsigned char reftask){
	signed int i;
	i = 0; 
	Event_Table[0].task_alloc[1] = 0; 
	i = 1; 
	Event_Table[1].task_alloc[1] = 0; 
	i = 2; 
	Event_Table[2].task_alloc[1] = 0; 
	i = 3; 
	task_dyn_info[1].act_cnt = 1; 
	push_task_into_readyQ_37_2(reftask, task_static_info[(signed long int)(reftask)].prio, 0, (push_type)(0));
	reschedule_38_2((API)(0), current_tid);
}
void push_task_into_readyQ_37_2(unsigned char t, unsigned char p, signed int pc, push_type pushkind){
	task_state[1] = 1; 
	k = 1; 
	readyQ[3][1].tid = 1; 
	rear[3] = 2; 
	size[3] = 1; 
	wholesize = 1; 
	max_prio = 3; 
}
void reschedule_38_2(API reschedule__api, unsigned char tid){
	push_task_into_readyQ_92_2(tid, task_dyn_info[(signed long int)(tid)].dyn_prio, current_pc[(signed long int)(tid)], (push_type)(1));
	get_task_from_readyQ_93_2();
}
void push_task_into_readyQ_92_2(unsigned char t, unsigned char p, signed int pc, push_type pushkind){
	task_state[0] = 1; 
	front[0] = 3; 
	k = 3; 
	readyQ[0][3].tid = 0; 
	size[0] = 1; 
	wholesize = 2; 
}
void get_task_from_readyQ_93_2(){
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
void ALARM_handler_8_62(signed int aid){
	alarm_info[2].next_alarm_tick = 20; 
}
void check_property_36_31(){
}
void is_active_obj_exists_32_32(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void Func_AcquisitionTask_33_2(){
	__CPROVER_assume(!((current_pc[1] == 1)));
	__CPROVER_assume(!((current_pc[1] == 2)));
	__CPROVER_assume(!((current_pc[1] == 3)));
	__CPROVER_assume(((current_pc[1] == 4)));
	current_pc[1] = 1;
}
void postjob_35_32(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_32();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_63(aid);
	aid = 2; 
	ALARM_handler_8_64(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_32(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_63(signed int aid){
	alarm_info[1].next_alarm_tick = 29; 
}
void ALARM_handler_8_64(signed int aid){
	alarm_info[2].next_alarm_tick = 19; 
}
void check_property_36_32(){
}
void is_active_obj_exists_32_33(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void Func_AcquisitionTask_33_3(){
	__CPROVER_assume(((current_pc[1] == 1)));
	__CPROVER_assume((((signed int)(tracking_enabled) == 0)));
	request_22_1((U8)(2));
	rectindex = getbiggestrect((U8)(0), -1);
	__CPROVER_assume(!(!((rectindex >= 0))));
	getArea_24_1((U8)(rectindex));
	area = __iv__return_expr_getArea;
	median_filter_25_1(area);
	area = __iv__return_expr_median_filter;
	acq_size = fisqrt(area);
	getX_27_1((U8)(rectindex));
	x = __iv__return_expr_getX;
	GetResource_28_1((unsigned char)(1));
	current_pc[1] = 2;
}
void request_22_1(U8 port_id){
	signed int return_value_i2c_busy;
	i2c_busy_4_1((signed int)(port_id));
	return_value_i2c_busy = 0; 
	i2c_start_transaction_5_1((signed int)(port_id), 1u, 0x42, 1, nxtcamdata, 41u, 0);
}
void i2c_busy_4_1(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 0; 
	__iv__return_expr_i2c_busy = 0; 
}
void i2c_start_transaction_5_1(signed int port, unsigned int address, signed int internal_address, signed int n_internal_address_bytes, unsigned char* i2c_start_transaction__data, unsigned int nbytes, signed int write){
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
void getArea_24_1(U8 getArea__rectindex){
	signed int return_value_getWidth;
	getWidth_15_1(getArea__rectindex);
	return_value_getWidth = __iv__return_expr_getWidth;
	signed int return_value_getHeight;
	getHeight_16_1(getArea__rectindex);
	return_value_getHeight = __iv__return_expr_getHeight;
	__iv__return_expr_getArea = (return_value_getWidth * return_value_getHeight);
}
void getWidth_15_1(U8 getWidth__rectindex){
	signed int xul;
	xul = (signed int)(nxtcamdata[(signed long int)((((5 * (signed int)(getWidth__rectindex)) + 1) + 1))]);
	signed int xlr;
	xlr = (signed int)(nxtcamdata[(signed long int)((((5 * (signed int)(getWidth__rectindex)) + 1) + 3))]);
	__iv__return_expr_getWidth = ((xlr - xul) >= 0) ? (xlr - xul) : -((xlr - xul));
}
void getHeight_16_1(U8 getHeight__rectindex){
	signed int yul;
	yul = (signed int)(nxtcamdata[(signed long int)((((5 * (signed int)(getHeight__rectindex)) + 1) + 2))]);
	signed int ylr;
	ylr = (signed int)(nxtcamdata[(signed long int)((((5 * (signed int)(getHeight__rectindex)) + 1) + 4))]);
	__iv__return_expr_getHeight = ((ylr - yul) >= 0) ? (ylr - yul) : -((ylr - yul));
}
void median_filter_25_1(data_t datum){
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
void getX_27_1(U8 getX__rectindex){
	signed int xul;
	xul = (signed int)(nxtcamdata[(signed long int)((((5 * (signed int)(getX__rectindex)) + 1) + 1))]);
	signed int xlr;
	xlr = (signed int)(nxtcamdata[(signed long int)((((5 * (signed int)(getX__rectindex)) + 1) + 3))]);
	__iv__return_expr_getX = ((xlr + xul) / 2);
}
void GetResource_28_1(unsigned char resid){
	GetResource_Common_57_2(resid);
}
void GetResource_Common_57_2(unsigned char resid){
	signed int return_value_is_alloc;
	__CPROVER_bool tmp_if_expr;
	is_alloc_53_2(resid);
	return_value_is_alloc = 0; 
	tmp_if_expr = 0; 
	Resource_Table[1].alloc = 1; 
	task_dyn_info[1].dyn_prio = 4; 
}
void is_alloc_53_2(unsigned char res){
	__iv__return_expr_is_alloc = 0; 
}
void postjob_35_33(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_33();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_65(aid);
	aid = 2; 
	ALARM_handler_8_66(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_33(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_65(signed int aid){
	alarm_info[1].next_alarm_tick = 28; 
}
void ALARM_handler_8_66(signed int aid){
	alarm_info[2].next_alarm_tick = 18; 
}
void check_property_36_33(){
}
void is_active_obj_exists_32_34(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void Func_AcquisitionTask_33_4(){
	__CPROVER_assume(!((current_pc[1] == 1)));
	__CPROVER_assume(((current_pc[1] == 2)));
	objData.position = x;
	objData.size = acq_size;
	ReleaseResource_29_1((unsigned char)(1));
	current_pc[1] = 3;
}
void ReleaseResource_29_1(unsigned char resid){
	ReleaseResource_Common_55_2(resid);
}
void ReleaseResource_Common_55_2(unsigned char resid){
	unsigned char i;
	signed int return_value_is_alloc_0;
	is_alloc_17_2(resid);
	return_value_is_alloc_0 = 1; 
	Resource_Table[1].alloc = 0; 
	current_prio = 3; 
	i = 0; 
	signed int return_value_is_alloc;
	is_alloc_18_4(i);
	return_value_is_alloc = 0; 
	i = 1; 
	is_alloc_18_5(i);
	return_value_is_alloc = 0; 
	i = 2; 
	is_alloc_18_6(i);
	return_value_is_alloc = 0; 
	i = 3; 
	task_dyn_info[1].dyn_prio = 3; 
	reschedule_19_2((API)(5), current_tid);
}
void is_alloc_17_2(unsigned char res){
	__iv__return_expr_is_alloc = 1; 
}
void is_alloc_18_4(unsigned char res){
	__iv__return_expr_is_alloc = 0; 
}
void is_alloc_18_5(unsigned char res){
	__iv__return_expr_is_alloc = 0; 
}
void is_alloc_18_6(unsigned char res){
	__iv__return_expr_is_alloc = 0; 
}
void reschedule_19_2(API reschedule__api, unsigned char tid){
}
void postjob_35_34(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_34();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_67(aid);
	aid = 2; 
	ALARM_handler_8_68(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_34(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_67(signed int aid){
	alarm_info[1].next_alarm_tick = 27; 
}
void ALARM_handler_8_68(signed int aid){
	alarm_info[2].next_alarm_tick = 17; 
}
void check_property_36_34(){
}
void is_active_obj_exists_32_35(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void Func_AcquisitionTask_33_5(){
	__CPROVER_assume(!((current_pc[1] == 1)));
	__CPROVER_assume(!((current_pc[1] == 2)));
	__CPROVER_assume(((current_pc[1] == 3)));
	TerminateTask_30_2();
	current_pc[1] = 4;
}
void TerminateTask_30_2(){
	TerminateTask_Common_44_3();
}
void TerminateTask_Common_44_3(){
	task_dyn_info[1].act_cnt = 0; 
	task_state[1] = 0; 
	reschedule_78_3((API)(1), current_tid);
}
void reschedule_78_3(API reschedule__api, unsigned char tid){
	get_task_from_readyQ_91_3();
}
void get_task_from_readyQ_91_3(){
	current_tid = 0; 
	current_prio = 0; 
	readyQ[0][3].tid = 0; 
	front[0] = 0; 
	size[0] = 0; 
	wholesize = 0; 
	max_prio = 0; 
	task_state[0] = 2; 
}
void postjob_35_35(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_35();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_69(aid);
	aid = 2; 
	ALARM_handler_8_70(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_35(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_69(signed int aid){
	alarm_info[1].next_alarm_tick = 26; 
}
void ALARM_handler_8_70(signed int aid){
	alarm_info[2].next_alarm_tick = 16; 
}
void check_property_36_35(){
}
void is_active_obj_exists_32_36(){
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
void postjob_35_36(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_36();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_71(aid);
	aid = 2; 
	ALARM_handler_8_72(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_36(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_71(signed int aid){
	alarm_info[1].next_alarm_tick = 25; 
}
void ALARM_handler_8_72(signed int aid){
	alarm_info[2].next_alarm_tick = 15; 
}
void check_property_36_36(){
}
void is_active_obj_exists_32_37(){
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
void postjob_35_37(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_37();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_73(aid);
	aid = 2; 
	ALARM_handler_8_74(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_37(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_73(signed int aid){
	alarm_info[1].next_alarm_tick = 24; 
}
void ALARM_handler_8_74(signed int aid){
	alarm_info[2].next_alarm_tick = 14; 
}
void check_property_36_37(){
}
void is_active_obj_exists_32_38(){
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
void postjob_35_38(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_38();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_75(aid);
	aid = 2; 
	ALARM_handler_8_76(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_38(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_75(signed int aid){
	alarm_info[1].next_alarm_tick = 23; 
}
void ALARM_handler_8_76(signed int aid){
	alarm_info[2].next_alarm_tick = 13; 
}
void check_property_36_38(){
}
void is_active_obj_exists_32_39(){
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
void postjob_35_39(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_39();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_77(aid);
	aid = 2; 
	ALARM_handler_8_78(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_39(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_77(signed int aid){
	alarm_info[1].next_alarm_tick = 22; 
}
void ALARM_handler_8_78(signed int aid){
	alarm_info[2].next_alarm_tick = 12; 
}
void check_property_36_39(){
}
void is_active_obj_exists_32_40(){
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
void postjob_35_40(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_40();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_79(aid);
	aid = 2; 
	ALARM_handler_8_80(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_40(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_79(signed int aid){
	alarm_info[1].next_alarm_tick = 21; 
}
void ALARM_handler_8_80(signed int aid){
	alarm_info[2].next_alarm_tick = 11; 
}
void check_property_36_40(){
}
void is_active_obj_exists_32_41(){
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
void postjob_35_41(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_41();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_81(aid);
	aid = 2; 
	ALARM_handler_8_82(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_41(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_81(signed int aid){
	alarm_info[1].next_alarm_tick = 20; 
}
void ALARM_handler_8_82(signed int aid){
	alarm_info[2].next_alarm_tick = 10; 
}
void check_property_36_41(){
}
void is_active_obj_exists_32_42(){
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
void postjob_35_42(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_42();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_83(aid);
	aid = 2; 
	ALARM_handler_8_84(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_42(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_83(signed int aid){
	alarm_info[1].next_alarm_tick = 19; 
}
void ALARM_handler_8_84(signed int aid){
	alarm_info[2].next_alarm_tick = 9; 
}
void check_property_36_42(){
}
void is_active_obj_exists_32_43(){
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
void postjob_35_43(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_43();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_85(aid);
	aid = 2; 
	ALARM_handler_8_86(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_43(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_85(signed int aid){
	alarm_info[1].next_alarm_tick = 18; 
}
void ALARM_handler_8_86(signed int aid){
	alarm_info[2].next_alarm_tick = 8; 
}
void check_property_36_43(){
}
void is_active_obj_exists_32_44(){
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
void postjob_35_44(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_44();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_87(aid);
	aid = 2; 
	ALARM_handler_8_88(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_44(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_87(signed int aid){
	alarm_info[1].next_alarm_tick = 17; 
}
void ALARM_handler_8_88(signed int aid){
	alarm_info[2].next_alarm_tick = 7; 
}
void check_property_36_44(){
}
void is_active_obj_exists_32_45(){
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
void postjob_35_45(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_45();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_89(aid);
	aid = 2; 
	ALARM_handler_8_90(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_45(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_89(signed int aid){
	alarm_info[1].next_alarm_tick = 16; 
}
void ALARM_handler_8_90(signed int aid){
	alarm_info[2].next_alarm_tick = 6; 
}
void check_property_36_45(){
}
void is_active_obj_exists_32_46(){
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
void postjob_35_46(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_46();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_91(aid);
	aid = 2; 
	ALARM_handler_8_92(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_46(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_91(signed int aid){
	alarm_info[1].next_alarm_tick = 15; 
}
void ALARM_handler_8_92(signed int aid){
	alarm_info[2].next_alarm_tick = 5; 
}
void check_property_36_46(){
}
void is_active_obj_exists_32_47(){
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
void postjob_35_47(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_47();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_93(aid);
	aid = 2; 
	ALARM_handler_8_94(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_47(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_93(signed int aid){
	alarm_info[1].next_alarm_tick = 14; 
}
void ALARM_handler_8_94(signed int aid){
	alarm_info[2].next_alarm_tick = 4; 
}
void check_property_36_47(){
}
void is_active_obj_exists_32_48(){
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
void postjob_35_48(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_48();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_95(aid);
	aid = 2; 
	ALARM_handler_8_96(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_48(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_95(signed int aid){
	alarm_info[1].next_alarm_tick = 13; 
}
void ALARM_handler_8_96(signed int aid){
	alarm_info[2].next_alarm_tick = 3; 
}
void check_property_36_48(){
}
void is_active_obj_exists_32_49(){
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
void postjob_35_49(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_49();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_97(aid);
	aid = 2; 
	ALARM_handler_8_98(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_49(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_97(signed int aid){
	alarm_info[1].next_alarm_tick = 12; 
}
void ALARM_handler_8_98(signed int aid){
	alarm_info[2].next_alarm_tick = 2; 
}
void check_property_36_49(){
}
void is_active_obj_exists_32_50(){
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
void postjob_35_50(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_50();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_99(aid);
	aid = 2; 
	ALARM_handler_8_100(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_50(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_99(signed int aid){
	alarm_info[1].next_alarm_tick = 11; 
}
void ALARM_handler_8_100(signed int aid){
	alarm_info[2].next_alarm_tick = 1; 
}
void check_property_36_50(){
}
void is_active_obj_exists_32_51(){
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
void postjob_35_51(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_51();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_101(aid);
	aid = 2; 
	ALARM_handler_8_102(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_51(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_101(signed int aid){
	alarm_info[1].next_alarm_tick = 10; 
}
void ALARM_handler_8_102(signed int aid){
	alarm_info[2].next_alarm_tick = 0; 
	alarm_info[2].next_alarm_tick = 50; 
	alarm_state[2] = 2; 
	ActivateTask_Common_60_4(alarm_info[(signed long int)(aid)].param1);
	alarm_state[2] = 1; 
}
void ActivateTask_Common_60_4(unsigned char reftask){
	signed int i;
	i = 0; 
	Event_Table[0].task_alloc[2] = 0; 
	i = 1; 
	Event_Table[1].task_alloc[2] = 0; 
	i = 2; 
	Event_Table[2].task_alloc[2] = 0; 
	i = 3; 
	task_dyn_info[2].act_cnt = 1; 
	push_task_into_readyQ_37_3(reftask, task_static_info[(signed long int)(reftask)].prio, 0, (push_type)(0));
	reschedule_38_3((API)(0), current_tid);
}
void push_task_into_readyQ_37_3(unsigned char t, unsigned char p, signed int pc, push_type pushkind){
	task_state[2] = 1; 
	k = 1; 
	readyQ[2][1].tid = 2; 
	rear[2] = 2; 
	size[2] = 1; 
	wholesize = 1; 
	max_prio = 2; 
}
void reschedule_38_3(API reschedule__api, unsigned char tid){
	push_task_into_readyQ_92_3(tid, task_dyn_info[(signed long int)(tid)].dyn_prio, current_pc[(signed long int)(tid)], (push_type)(1));
	get_task_from_readyQ_93_3();
}
void push_task_into_readyQ_92_3(unsigned char t, unsigned char p, signed int pc, push_type pushkind){
	task_state[0] = 1; 
	front[0] = 3; 
	k = 3; 
	readyQ[0][3].tid = 0; 
	size[0] = 1; 
	wholesize = 2; 
}
void get_task_from_readyQ_93_3(){
	current_tid = 2; 
	current_prio = 2; 
	readyQ[2][1].tid = 0; 
	front[2] = 2; 
	size[2] = 0; 
	wholesize = 1; 
	max_prio = 2; 
	max_prio = 1; 
	max_prio = 0; 
	task_state[2] = 2; 
}
void check_property_36_51(){
}
void is_active_obj_exists_32_52(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 0; 
	i = 2; 
	tmp_if_expr = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void Func_ControlTask_34_4(){
	current_pc[2] = 1; 
}
void postjob_35_52(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_52();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_103(aid);
	aid = 2; 
	ALARM_handler_8_104(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_52(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_103(signed int aid){
	alarm_info[1].next_alarm_tick = 9; 
}
void ALARM_handler_8_104(signed int aid){
	alarm_info[2].next_alarm_tick = 49; 
}
void check_property_36_52(){
}
void is_active_obj_exists_32_53(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 0; 
	i = 2; 
	tmp_if_expr = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void Func_ControlTask_34_5(){
	GetResource_62_2((unsigned char)(1));
	current_pc[2] = 2; 
}
void GetResource_62_2(unsigned char resid){
	GetResource_Common_57_3(resid);
}
void GetResource_Common_57_3(unsigned char resid){
	signed int return_value_is_alloc;
	__CPROVER_bool tmp_if_expr;
	is_alloc_53_3(resid);
	return_value_is_alloc = 0; 
	tmp_if_expr = 0; 
	Resource_Table[1].alloc = 2; 
	task_dyn_info[2].dyn_prio = 4; 
}
void is_alloc_53_3(unsigned char res){
	__iv__return_expr_is_alloc = 0; 
}
void postjob_35_53(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_53();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_105(aid);
	aid = 2; 
	ALARM_handler_8_106(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_53(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_105(signed int aid){
	alarm_info[1].next_alarm_tick = 8; 
}
void ALARM_handler_8_106(signed int aid){
	alarm_info[2].next_alarm_tick = 48; 
}
void check_property_36_53(){
}
void is_active_obj_exists_32_54(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 0; 
	i = 2; 
	tmp_if_expr = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void Func_ControlTask_34_6(){
	data = objData;
	ReleaseResource_63_2((unsigned char)(1));
	current_pc[2] = 3; 
}
void ReleaseResource_63_2(unsigned char resid){
	ReleaseResource_Common_55_3(resid);
}
void ReleaseResource_Common_55_3(unsigned char resid){
	unsigned char i;
	signed int return_value_is_alloc_0;
	is_alloc_17_3(resid);
	return_value_is_alloc_0 = 2; 
	Resource_Table[1].alloc = 0; 
	current_prio = 2; 
	i = 0; 
	signed int return_value_is_alloc;
	is_alloc_18_7(i);
	return_value_is_alloc = 0; 
	i = 1; 
	is_alloc_18_8(i);
	return_value_is_alloc = 0; 
	i = 2; 
	is_alloc_18_9(i);
	return_value_is_alloc = 0; 
	i = 3; 
	task_dyn_info[2].dyn_prio = 2; 
	reschedule_19_3((API)(5), current_tid);
}
void is_alloc_17_3(unsigned char res){
	__iv__return_expr_is_alloc = 2; 
}
void is_alloc_18_7(unsigned char res){
	__iv__return_expr_is_alloc = 0; 
}
void is_alloc_18_8(unsigned char res){
	__iv__return_expr_is_alloc = 0; 
}
void is_alloc_18_9(unsigned char res){
	__iv__return_expr_is_alloc = 0; 
}
void reschedule_19_3(API reschedule__api, unsigned char tid){
}
void postjob_35_54(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_54();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_107(aid);
	aid = 2; 
	ALARM_handler_8_108(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_54(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_107(signed int aid){
	alarm_info[1].next_alarm_tick = 7; 
}
void ALARM_handler_8_108(signed int aid){
	alarm_info[2].next_alarm_tick = 47; 
}
void check_property_36_54(){
}
void is_active_obj_exists_32_55(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 0; 
	i = 2; 
	tmp_if_expr = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void Func_ControlTask_34_7(){
	ctl_size = data.size;
	position = data.position;
	__CPROVER_assume(!(!(((ctl_size >= 1) && (position >= 1)))));
	speedPIDController_64_1(ctl_size);
	speed_deviation = __iv__return_expr_speedPIDController;
	new_speed = (50 + speed_deviation);
	new_speed = (new_speed > 100) ? 100 : new_speed;
	directionPIDController_65_1(position);
	direction_adjustment = __iv__return_expr_directionPIDController;
	TerminateTask_66_2();
	current_pc[2] = 4; 
}
void speedPIDController_64_1(signed int d){
	signed int error;
	error = (50 - d);
	integral = (integral + error);
	signed int derivative;
	derivative = (error - prevError);
	signed int out;
	out = (signed int)((((1.5 * (double)(error)) + (double)((0 * integral))) + (double)((0 * derivative))));
	prevError = error;
	__iv__return_expr_speedPIDController = out;
}
void directionPIDController_65_1(signed int d){
	signed int error;
	error = (83 - d);
	integral = (integral + error);
	signed int derivative;
	derivative = (error - prevError);
	signed int out;
	out = (signed int)((((0.2 * (double)(error)) + (double)((0 * integral))) + (double)((0 * derivative))));
	prevError = error;
	__iv__return_expr_directionPIDController = out;
}
void TerminateTask_66_2(){
	TerminateTask_Common_44_4();
}
void TerminateTask_Common_44_4(){
	task_dyn_info[2].act_cnt = 0; 
	task_state[2] = 0; 
	reschedule_78_4((API)(1), current_tid);
}
void reschedule_78_4(API reschedule__api, unsigned char tid){
	get_task_from_readyQ_91_4();
}
void get_task_from_readyQ_91_4(){
	current_tid = 0; 
	current_prio = 0; 
	readyQ[0][3].tid = 0; 
	front[0] = 0; 
	size[0] = 0; 
	wholesize = 0; 
	max_prio = 0; 
	task_state[0] = 2; 
}
void postjob_35_55(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_7_55();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_8_109(aid);
	aid = 2; 
	ALARM_handler_8_110(aid);
	aid = 3; 
}
void is_active_alarm_exists_7_55(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_8_109(signed int aid){
	alarm_info[1].next_alarm_tick = 6; 
}
void ALARM_handler_8_110(signed int aid){
	alarm_info[2].next_alarm_tick = 46; 
}
void check_property_36_55(){
	if (!(!(((new_speed > 60) && !(((direction_adjustment < 15) && (direction_adjustment > -15))))))) __CPROVER_printf("violated property: Node_21_470");assert(!(((new_speed > 60) && !(((direction_adjustment < 15) && (direction_adjustment > -15))))));
}
