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
struct anonymous_0;
struct anonymous_1;
struct anonymous_2;
struct anonymous_3;
enum anonymous_4 { ACTIVATE=0, PREEMPT=1, RELEASE=2 };
struct anonymous_5;
enum evt_state { Evt_Clear=0, Evt_Set=1, Evt_Wait=2 };
struct pair;
struct queue;
typedef enum API API;
typedef struct anonymous_2 Alarm;
typedef struct anonymous_0 Event;
typedef enum evt_state Evt_State;
typedef struct queue Queue;
typedef struct anonymous_5 Resource;
typedef char S8;
typedef signed int SINT;
typedef unsigned char U8;
typedef signed int data_t;
typedef struct anonymous object_data_t;
typedef enum anonymous_4 push_type;
typedef struct anonymous_3 task_dynamic_stat;
typedef struct anonymous_1 task_static_config;
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
struct anonymous_0
{
  unsigned char owner;
  Evt_State task_alloc[4l];
};
struct anonymous_1
{
  unsigned char prio;
  unsigned char preemptable;
  unsigned char autostart;
  unsigned char extended;
  unsigned char event_owned;
  unsigned char resource_owned;
  unsigned char max_act_cnt;
};
struct anonymous_2
{
  unsigned int cycle;
  unsigned int next_alarm_tick;
  API api;
  unsigned char param1;
  unsigned char param2;
};
struct anonymous_3
{
  unsigned char act_cnt;
  unsigned char dyn_prio;
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
signed int getbiggestrect(U8 pcolorid, signed int pminarea) {
	signed int getbiggestrect__1__rectindex;
	getbiggestrect__1__rectindex = -1;
	signed int i;
	signed int maxarea;
	maxarea = pminarea;
	i = 0;
	Node_6_88:;
	if ((i >= (signed int)(nxtcamdata[0]))) goto Node_6_109;
	signed int colorid;
	colorid = (signed int)(nxtcamdata[(signed long int)(((1 + (5 * i)) + 0))]);
	if (!((colorid == (signed int)(pcolorid)))) goto Node_6_105;
	signed int getbiggestrect__1__1__1__1__area;
	getbiggestrect__1__1__1__1__area = getArea((U8)(i));
	if (!((getbiggestrect__1__1__1__1__area >= maxarea))) goto Node_6_101;
	maxarea = getbiggestrect__1__1__1__1__area;
	getbiggestrect__1__rectindex = i;
	Node_6_101:;
	Node_6_105:;
	i = (i + 1);
	goto Node_6_88;
	Node_6_109:;
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
void is_active_alarm_exists_5_1();
void ALARM_handler_6_1(signed int aid);
void ActivateTask_Common_60_1(unsigned char reftask);
void push_task_into_readyQ_37_1(unsigned char t, unsigned char p, signed int pc, push_type pushkind);
void reschedule_38_1(API reschedule__api, unsigned char tid);
void ALARM_handler_6_2(signed int aid);
void ActivateTask_Common_60_2(unsigned char reftask);
void check_property_36_1();
void is_active_obj_exists_32_2();
void Func_ControlTask_34_2();
void ReleaseResource_63_1(unsigned char resid);
void ReleaseResource_Common_55_1(unsigned char resid);
void is_alloc_28_1(unsigned char res);
void is_alloc_29_1(unsigned char res);
void is_alloc_29_2(unsigned char res);
void is_alloc_29_3(unsigned char res);
void reschedule_30_1(API reschedule__api, unsigned char tid);
void push_task_into_readyQ_93_1(unsigned char t, unsigned char p, signed int pc, push_type pushkind);
void get_task_from_readyQ_94_1();
void postjob_35_2();
void is_active_alarm_exists_5_2();
void ALARM_handler_6_3(signed int aid);
void ALARM_handler_6_4(signed int aid);
void check_property_36_2();
void is_active_obj_exists_32_3();
void Func_AcquisitionTask_33_1();
void send_nxtcam_command_14_1(U8 port_id, U8 command);
void i2c_busy_24_1(signed int port);
void i2c_busy_24_2(signed int port);
void i2c_busy_24_3(signed int port);
void i2c_busy_24_4(signed int port);
void i2c_busy_24_5(signed int port);
void i2c_busy_24_6(signed int port);
void i2c_busy_24_7(signed int port);
void i2c_busy_24_8(signed int port);
void i2c_busy_24_9(signed int port);
void i2c_busy_24_10(signed int port);
void i2c_busy_24_11(signed int port);
void i2c_busy_24_12(signed int port);
void i2c_busy_24_13(signed int port);
void i2c_busy_24_14(signed int port);
void i2c_busy_24_15(signed int port);
void i2c_busy_24_16(signed int port);
void i2c_busy_24_17(signed int port);
void i2c_busy_24_18(signed int port);
void i2c_busy_24_19(signed int port);
void i2c_busy_24_20(signed int port);
void i2c_busy_24_21(signed int port);
void i2c_busy_24_22(signed int port);
void i2c_busy_24_23(signed int port);
void i2c_busy_24_24(signed int port);
void i2c_busy_24_25(signed int port);
void i2c_busy_24_26(signed int port);
void i2c_busy_24_27(signed int port);
void i2c_busy_24_28(signed int port);
void i2c_busy_24_29(signed int port);
void i2c_busy_24_30(signed int port);
void i2c_busy_24_31(signed int port);
void i2c_busy_24_32(signed int port);
void i2c_busy_24_33(signed int port);
void i2c_busy_24_34(signed int port);
void i2c_busy_24_35(signed int port);
void i2c_busy_24_36(signed int port);
void i2c_busy_24_37(signed int port);
void i2c_busy_24_38(signed int port);
void i2c_busy_24_39(signed int port);
void i2c_busy_24_40(signed int port);
void i2c_busy_24_41(signed int port);
void i2c_busy_24_42(signed int port);
void i2c_busy_24_43(signed int port);
void i2c_busy_24_44(signed int port);
void i2c_busy_24_45(signed int port);
void i2c_busy_24_46(signed int port);
void i2c_busy_24_47(signed int port);
void i2c_busy_24_48(signed int port);
void i2c_busy_24_49(signed int port);
void i2c_busy_24_50(signed int port);
void i2c_busy_24_51(signed int port);
void i2c_busy_24_52(signed int port);
void i2c_busy_24_53(signed int port);
void i2c_busy_24_54(signed int port);
void i2c_busy_24_55(signed int port);
void i2c_busy_24_56(signed int port);
void i2c_busy_24_57(signed int port);
void i2c_busy_24_58(signed int port);
void i2c_busy_24_59(signed int port);
void i2c_busy_24_60(signed int port);
void i2c_busy_24_61(signed int port);
void i2c_busy_24_62(signed int port);
void i2c_busy_24_63(signed int port);
void i2c_busy_24_64(signed int port);
void i2c_busy_24_65(signed int port);
void i2c_busy_24_66(signed int port);
void i2c_busy_24_67(signed int port);
void i2c_busy_24_68(signed int port);
void i2c_busy_24_69(signed int port);
void i2c_busy_24_70(signed int port);
void i2c_busy_24_71(signed int port);
void i2c_busy_24_72(signed int port);
void i2c_busy_24_73(signed int port);
void i2c_busy_24_74(signed int port);
void i2c_busy_24_75(signed int port);
void i2c_busy_24_76(signed int port);
void i2c_busy_24_77(signed int port);
void i2c_busy_24_78(signed int port);
void i2c_busy_24_79(signed int port);
void i2c_busy_24_80(signed int port);
void i2c_busy_24_81(signed int port);
void i2c_busy_24_82(signed int port);
void i2c_busy_24_83(signed int port);
void i2c_busy_24_84(signed int port);
void i2c_busy_24_85(signed int port);
void i2c_busy_24_86(signed int port);
void i2c_busy_24_87(signed int port);
void i2c_busy_24_88(signed int port);
void i2c_busy_24_89(signed int port);
void i2c_busy_24_90(signed int port);
void i2c_busy_24_91(signed int port);
void i2c_busy_24_92(signed int port);
void i2c_busy_24_93(signed int port);
void i2c_busy_24_94(signed int port);
void i2c_busy_24_95(signed int port);
void i2c_busy_24_96(signed int port);
void i2c_busy_24_97(signed int port);
void i2c_busy_24_98(signed int port);
void i2c_busy_24_99(signed int port);
void i2c_busy_24_100(signed int port);
void i2c_busy_24_101(signed int port);
void i2c_busy_24_102(signed int port);
void i2c_busy_24_103(signed int port);
void i2c_busy_24_104(signed int port);
void i2c_busy_24_105(signed int port);
void i2c_busy_24_106(signed int port);
void i2c_busy_24_107(signed int port);
void i2c_start_transaction_25_1(signed int port, unsigned int address, signed int internal_address, signed int n_internal_address_bytes, unsigned char* i2c_start_transaction__data, unsigned int nbytes, signed int write);
void TerminateTask_23_1();
void TerminateTask_Common_44_1();
void reschedule_78_1(API reschedule__api, unsigned char tid);
void get_task_from_readyQ_92_1();
void postjob_35_3();
void is_active_alarm_exists_5_3();
void ALARM_handler_6_5(signed int aid);
void ALARM_handler_6_6(signed int aid);
void check_property_36_3();
void is_active_obj_exists_32_4();
void Func_ControlTask_34_3();
void TerminateTask_66_1();
void TerminateTask_Common_44_2();
void reschedule_78_2(API reschedule__api, unsigned char tid);
void get_task_from_readyQ_92_2();
void postjob_35_4();
void is_active_alarm_exists_5_4();
void ALARM_handler_6_7(signed int aid);
void ALARM_handler_6_8(signed int aid);
void check_property_36_4();
void is_active_obj_exists_32_5();
void postjob_35_5();
void is_active_alarm_exists_5_5();
void ALARM_handler_6_9(signed int aid);
void ALARM_handler_6_10(signed int aid);
void check_property_36_5();
void is_active_obj_exists_32_6();
void postjob_35_6();
void is_active_alarm_exists_5_6();
void ALARM_handler_6_11(signed int aid);
void ALARM_handler_6_12(signed int aid);
void check_property_36_6();
void is_active_obj_exists_32_7();
void postjob_35_7();
void is_active_alarm_exists_5_7();
void ALARM_handler_6_13(signed int aid);
void ALARM_handler_6_14(signed int aid);
void check_property_36_7();
void is_active_obj_exists_32_8();
void postjob_35_8();
void is_active_alarm_exists_5_8();
void ALARM_handler_6_15(signed int aid);
void ALARM_handler_6_16(signed int aid);
void check_property_36_8();
void is_active_obj_exists_32_9();
void postjob_35_9();
void is_active_alarm_exists_5_9();
void ALARM_handler_6_17(signed int aid);
void ALARM_handler_6_18(signed int aid);
void check_property_36_9();
void is_active_obj_exists_32_10();
void postjob_35_10();
void is_active_alarm_exists_5_10();
void ALARM_handler_6_19(signed int aid);
void ALARM_handler_6_20(signed int aid);
void check_property_36_10();
void is_active_obj_exists_32_11();
void postjob_35_11();
void is_active_alarm_exists_5_11();
void ALARM_handler_6_21(signed int aid);
void ALARM_handler_6_22(signed int aid);
void check_property_36_11();
void is_active_obj_exists_32_12();
void postjob_35_12();
void is_active_alarm_exists_5_12();
void ALARM_handler_6_23(signed int aid);
void ALARM_handler_6_24(signed int aid);
void check_property_36_12();
void is_active_obj_exists_32_13();
void postjob_35_13();
void is_active_alarm_exists_5_13();
void ALARM_handler_6_25(signed int aid);
void ALARM_handler_6_26(signed int aid);
void check_property_36_13();
void is_active_obj_exists_32_14();
void postjob_35_14();
void is_active_alarm_exists_5_14();
void ALARM_handler_6_27(signed int aid);
void ALARM_handler_6_28(signed int aid);
void check_property_36_14();
void is_active_obj_exists_32_15();
void postjob_35_15();
void is_active_alarm_exists_5_15();
void ALARM_handler_6_29(signed int aid);
void ALARM_handler_6_30(signed int aid);
void check_property_36_15();
void is_active_obj_exists_32_16();
void postjob_35_16();
void is_active_alarm_exists_5_16();
void ALARM_handler_6_31(signed int aid);
void ALARM_handler_6_32(signed int aid);
void check_property_36_16();
void is_active_obj_exists_32_17();
void postjob_35_17();
void is_active_alarm_exists_5_17();
void ALARM_handler_6_33(signed int aid);
void ALARM_handler_6_34(signed int aid);
void check_property_36_17();
void is_active_obj_exists_32_18();
void postjob_35_18();
void is_active_alarm_exists_5_18();
void ALARM_handler_6_35(signed int aid);
void ALARM_handler_6_36(signed int aid);
void check_property_36_18();
void is_active_obj_exists_32_19();
void postjob_35_19();
void is_active_alarm_exists_5_19();
void ALARM_handler_6_37(signed int aid);
void ALARM_handler_6_38(signed int aid);
void check_property_36_19();
void is_active_obj_exists_32_20();
void postjob_35_20();
void is_active_alarm_exists_5_20();
void ALARM_handler_6_39(signed int aid);
void ALARM_handler_6_40(signed int aid);
void check_property_36_20();
void is_active_obj_exists_32_21();
void postjob_35_21();
void is_active_alarm_exists_5_21();
void ALARM_handler_6_41(signed int aid);
void ALARM_handler_6_42(signed int aid);
void check_property_36_21();
void is_active_obj_exists_32_22();
void postjob_35_22();
void is_active_alarm_exists_5_22();
void ALARM_handler_6_43(signed int aid);
void ALARM_handler_6_44(signed int aid);
void check_property_36_22();
void is_active_obj_exists_32_23();
void postjob_35_23();
void is_active_alarm_exists_5_23();
void ALARM_handler_6_45(signed int aid);
void ALARM_handler_6_46(signed int aid);
void check_property_36_23();
void is_active_obj_exists_32_24();
void postjob_35_24();
void is_active_alarm_exists_5_24();
void ALARM_handler_6_47(signed int aid);
void ALARM_handler_6_48(signed int aid);
void check_property_36_24();
void is_active_obj_exists_32_25();
void postjob_35_25();
void is_active_alarm_exists_5_25();
void ALARM_handler_6_49(signed int aid);
void ALARM_handler_6_50(signed int aid);
void check_property_36_25();
void is_active_obj_exists_32_26();
void postjob_35_26();
void is_active_alarm_exists_5_26();
void ALARM_handler_6_51(signed int aid);
void ALARM_handler_6_52(signed int aid);
void check_property_36_26();
void is_active_obj_exists_32_27();
void postjob_35_27();
void is_active_alarm_exists_5_27();
void ALARM_handler_6_53(signed int aid);
void ALARM_handler_6_54(signed int aid);
void check_property_36_27();
void is_active_obj_exists_32_28();
void postjob_35_28();
void is_active_alarm_exists_5_28();
void ALARM_handler_6_55(signed int aid);
void ALARM_handler_6_56(signed int aid);
void check_property_36_28();
void is_active_obj_exists_32_29();
void postjob_35_29();
void is_active_alarm_exists_5_29();
void ALARM_handler_6_57(signed int aid);
void ALARM_handler_6_58(signed int aid);
void check_property_36_29();
void is_active_obj_exists_32_30();
void postjob_35_30();
void is_active_alarm_exists_5_30();
void ALARM_handler_6_59(signed int aid);
void ALARM_handler_6_60(signed int aid);
void check_property_36_30();
void is_active_obj_exists_32_31();
void postjob_35_31();
void is_active_alarm_exists_5_31();
void ALARM_handler_6_61(signed int aid);
void ActivateTask_Common_60_3(unsigned char reftask);
void push_task_into_readyQ_37_2(unsigned char t, unsigned char p, signed int pc, push_type pushkind);
void reschedule_38_2(API reschedule__api, unsigned char tid);
void push_task_into_readyQ_93_2(unsigned char t, unsigned char p, signed int pc, push_type pushkind);
void get_task_from_readyQ_94_2();
void ALARM_handler_6_62(signed int aid);
void check_property_36_31();
void is_active_obj_exists_32_32();
void Func_AcquisitionTask_33_2();
void postjob_35_32();
void is_active_alarm_exists_5_32();
void ALARM_handler_6_63(signed int aid);
void ALARM_handler_6_64(signed int aid);
void check_property_36_32();
void is_active_obj_exists_32_33();
void Func_AcquisitionTask_33_3();
void request_15_1(U8 port_id);
void i2c_busy_2_1(signed int port);
void i2c_start_transaction_3_1(signed int port, unsigned int address, signed int internal_address, signed int n_internal_address_bytes, unsigned char* i2c_start_transaction__data, unsigned int nbytes, signed int write);
void getArea_17_1(U8 getArea__rectindex);
void getWidth_26_1(U8 getWidth__rectindex);
void getHeight_27_1(U8 getHeight__rectindex);
void median_filter_18_1(data_t datum);
void fisqrt_19_1(signed int val);
void getX_20_1(U8 getX__rectindex);
void GetResource_21_1(unsigned char resid);
void GetResource_Common_57_2(unsigned char resid);
void is_alloc_53_2(unsigned char res);
void postjob_35_33();
void is_active_alarm_exists_5_33();
void ALARM_handler_6_65(signed int aid);
void ALARM_handler_6_66(signed int aid);
void check_property_36_33();
void is_active_obj_exists_32_34();
void Func_AcquisitionTask_33_4();
void ReleaseResource_22_1(unsigned char resid);
void ReleaseResource_Common_55_2(unsigned char resid);
void is_alloc_28_2(unsigned char res);
void is_alloc_29_4(unsigned char res);
void is_alloc_29_5(unsigned char res);
void is_alloc_29_6(unsigned char res);
void reschedule_30_2(API reschedule__api, unsigned char tid);
void postjob_35_34();
void is_active_alarm_exists_5_34();
void ALARM_handler_6_67(signed int aid);
void ALARM_handler_6_68(signed int aid);
void check_property_36_34();
void is_active_obj_exists_32_35();
void Func_AcquisitionTask_33_5();
void TerminateTask_23_2();
void TerminateTask_Common_44_3();
void reschedule_78_3(API reschedule__api, unsigned char tid);
void get_task_from_readyQ_92_3();
void postjob_35_35();
void is_active_alarm_exists_5_35();
void ALARM_handler_6_69(signed int aid);
void ALARM_handler_6_70(signed int aid);
void check_property_36_35();
void is_active_obj_exists_32_36();
void postjob_35_36();
void is_active_alarm_exists_5_36();
void ALARM_handler_6_71(signed int aid);
void ALARM_handler_6_72(signed int aid);
void check_property_36_36();
void is_active_obj_exists_32_37();
void postjob_35_37();
void is_active_alarm_exists_5_37();
void ALARM_handler_6_73(signed int aid);
void ALARM_handler_6_74(signed int aid);
void check_property_36_37();
void is_active_obj_exists_32_38();
void postjob_35_38();
void is_active_alarm_exists_5_38();
void ALARM_handler_6_75(signed int aid);
void ALARM_handler_6_76(signed int aid);
void check_property_36_38();
void is_active_obj_exists_32_39();
void postjob_35_39();
void is_active_alarm_exists_5_39();
void ALARM_handler_6_77(signed int aid);
void ALARM_handler_6_78(signed int aid);
void check_property_36_39();
void is_active_obj_exists_32_40();
void postjob_35_40();
void is_active_alarm_exists_5_40();
void ALARM_handler_6_79(signed int aid);
void ALARM_handler_6_80(signed int aid);
void check_property_36_40();
void is_active_obj_exists_32_41();
void postjob_35_41();
void is_active_alarm_exists_5_41();
void ALARM_handler_6_81(signed int aid);
void ALARM_handler_6_82(signed int aid);
void check_property_36_41();
void is_active_obj_exists_32_42();
void postjob_35_42();
void is_active_alarm_exists_5_42();
void ALARM_handler_6_83(signed int aid);
void ALARM_handler_6_84(signed int aid);
void check_property_36_42();
void is_active_obj_exists_32_43();
void postjob_35_43();
void is_active_alarm_exists_5_43();
void ALARM_handler_6_85(signed int aid);
void ALARM_handler_6_86(signed int aid);
void check_property_36_43();
void is_active_obj_exists_32_44();
void postjob_35_44();
void is_active_alarm_exists_5_44();
void ALARM_handler_6_87(signed int aid);
void ALARM_handler_6_88(signed int aid);
void check_property_36_44();
void is_active_obj_exists_32_45();
void postjob_35_45();
void is_active_alarm_exists_5_45();
void ALARM_handler_6_89(signed int aid);
void ALARM_handler_6_90(signed int aid);
void check_property_36_45();
void is_active_obj_exists_32_46();
void postjob_35_46();
void is_active_alarm_exists_5_46();
void ALARM_handler_6_91(signed int aid);
void ALARM_handler_6_92(signed int aid);
void check_property_36_46();
void is_active_obj_exists_32_47();
void postjob_35_47();
void is_active_alarm_exists_5_47();
void ALARM_handler_6_93(signed int aid);
void ALARM_handler_6_94(signed int aid);
void check_property_36_47();
void is_active_obj_exists_32_48();
void postjob_35_48();
void is_active_alarm_exists_5_48();
void ALARM_handler_6_95(signed int aid);
void ALARM_handler_6_96(signed int aid);
void check_property_36_48();
void is_active_obj_exists_32_49();
void postjob_35_49();
void is_active_alarm_exists_5_49();
void ALARM_handler_6_97(signed int aid);
void ALARM_handler_6_98(signed int aid);
void check_property_36_49();
void is_active_obj_exists_32_50();
void postjob_35_50();
void is_active_alarm_exists_5_50();
void ALARM_handler_6_99(signed int aid);
void ALARM_handler_6_100(signed int aid);
void check_property_36_50();
void is_active_obj_exists_32_51();
void postjob_35_51();
void is_active_alarm_exists_5_51();
void ALARM_handler_6_101(signed int aid);
void ALARM_handler_6_102(signed int aid);
void ActivateTask_Common_60_4(unsigned char reftask);
void push_task_into_readyQ_37_3(unsigned char t, unsigned char p, signed int pc, push_type pushkind);
void reschedule_38_3(API reschedule__api, unsigned char tid);
void push_task_into_readyQ_93_3(unsigned char t, unsigned char p, signed int pc, push_type pushkind);
void get_task_from_readyQ_94_3();
void check_property_36_51();
void is_active_obj_exists_32_52();
void Func_ControlTask_34_4();
void postjob_35_52();
void is_active_alarm_exists_5_52();
void ALARM_handler_6_103(signed int aid);
void ALARM_handler_6_104(signed int aid);
void check_property_36_52();
void is_active_obj_exists_32_53();
void Func_ControlTask_34_5();
void GetResource_62_2(unsigned char resid);
void GetResource_Common_57_3(unsigned char resid);
void is_alloc_53_3(unsigned char res);
void postjob_35_53();
void is_active_alarm_exists_5_53();
void ALARM_handler_6_105(signed int aid);
void ALARM_handler_6_106(signed int aid);
void check_property_36_53();
void is_active_obj_exists_32_54();
void Func_ControlTask_34_6();
void ReleaseResource_63_2(unsigned char resid);
void ReleaseResource_Common_55_3(unsigned char resid);
void is_alloc_28_3(unsigned char res);
void is_alloc_29_7(unsigned char res);
void is_alloc_29_8(unsigned char res);
void is_alloc_29_9(unsigned char res);
void reschedule_30_3(API reschedule__api, unsigned char tid);
void postjob_35_54();
void is_active_alarm_exists_5_54();
void ALARM_handler_6_107(signed int aid);
void ALARM_handler_6_108(signed int aid);
void check_property_36_54();
void is_active_obj_exists_32_55();
void Func_ControlTask_34_7();
void TerminateTask_66_2();
void TerminateTask_Common_44_4();
void reschedule_78_4(API reschedule__api, unsigned char tid);
void get_task_from_readyQ_92_4();
void postjob_35_55();
void is_active_alarm_exists_5_55();
void ALARM_handler_6_109(signed int aid);
void ALARM_handler_6_110(signed int aid);
void check_property_36_55();
void is_active_obj_exists_32_56();
void postjob_35_56();
void is_active_alarm_exists_5_56();
void ALARM_handler_6_111(signed int aid);
void ALARM_handler_6_112(signed int aid);
void check_property_36_56();
void is_active_obj_exists_32_57();
void postjob_35_57();
void is_active_alarm_exists_5_57();
void ALARM_handler_6_113(signed int aid);
void ALARM_handler_6_114(signed int aid);
void check_property_36_57();
void is_active_obj_exists_32_58();
void postjob_35_58();
void is_active_alarm_exists_5_58();
void ALARM_handler_6_115(signed int aid);
void ALARM_handler_6_116(signed int aid);
void check_property_36_58();
void is_active_obj_exists_32_59();
void postjob_35_59();
void is_active_alarm_exists_5_59();
void ALARM_handler_6_117(signed int aid);
void ALARM_handler_6_118(signed int aid);
void check_property_36_59();
void is_active_obj_exists_32_60();
void postjob_35_60();
void is_active_alarm_exists_5_60();
void ALARM_handler_6_119(signed int aid);
void ALARM_handler_6_120(signed int aid);
void check_property_36_60();
void is_active_obj_exists_32_61();
void postjob_35_61();
void is_active_alarm_exists_5_61();
void ALARM_handler_6_121(signed int aid);
void ActivateTask_Common_60_5(unsigned char reftask);
void push_task_into_readyQ_37_4(unsigned char t, unsigned char p, signed int pc, push_type pushkind);
void reschedule_38_4(API reschedule__api, unsigned char tid);
void push_task_into_readyQ_93_4(unsigned char t, unsigned char p, signed int pc, push_type pushkind);
void get_task_from_readyQ_94_4();
void ALARM_handler_6_122(signed int aid);
void check_property_36_61();
void is_active_obj_exists_32_62();
void Func_AcquisitionTask_33_6();
void postjob_35_62();
void is_active_alarm_exists_5_62();
void ALARM_handler_6_123(signed int aid);
void ALARM_handler_6_124(signed int aid);
void check_property_36_62();
void is_active_obj_exists_32_63();
void Func_AcquisitionTask_33_7();
void request_15_2(U8 port_id);
void i2c_busy_2_2(signed int port);
void i2c_start_transaction_3_2(signed int port, unsigned int address, signed int internal_address, signed int n_internal_address_bytes, unsigned char* i2c_start_transaction__data, unsigned int nbytes, signed int write);
void getArea_17_2(U8 getArea__rectindex);
void getWidth_26_2(U8 getWidth__rectindex);
void getHeight_27_2(U8 getHeight__rectindex);
void median_filter_18_2(data_t datum);
void fisqrt_19_2(signed int val);
void getX_20_2(U8 getX__rectindex);
void GetResource_21_2(unsigned char resid);
void GetResource_Common_57_4(unsigned char resid);
void is_alloc_53_4(unsigned char res);
void postjob_35_63();
void is_active_alarm_exists_5_63();
void ALARM_handler_6_125(signed int aid);
void ALARM_handler_6_126(signed int aid);
void check_property_36_63();
void is_active_obj_exists_32_64();
void Func_AcquisitionTask_33_8();
void ReleaseResource_22_2(unsigned char resid);
void ReleaseResource_Common_55_4(unsigned char resid);
void is_alloc_28_4(unsigned char res);
void is_alloc_29_10(unsigned char res);
void is_alloc_29_11(unsigned char res);
void is_alloc_29_12(unsigned char res);
void reschedule_30_4(API reschedule__api, unsigned char tid);
void postjob_35_64();
void is_active_alarm_exists_5_64();
void ALARM_handler_6_127(signed int aid);
void ALARM_handler_6_128(signed int aid);
void check_property_36_64();
void is_active_obj_exists_32_65();
void Func_AcquisitionTask_33_9();
void TerminateTask_23_3();
void TerminateTask_Common_44_5();
void reschedule_78_5(API reschedule__api, unsigned char tid);
void get_task_from_readyQ_92_5();
void postjob_35_65();
void is_active_alarm_exists_5_65();
void ALARM_handler_6_129(signed int aid);
void ALARM_handler_6_130(signed int aid);
void check_property_36_65();
void is_active_obj_exists_32_66();
void postjob_35_66();
void is_active_alarm_exists_5_66();
void ALARM_handler_6_131(signed int aid);
void ALARM_handler_6_132(signed int aid);
void check_property_36_66();
void is_active_obj_exists_32_67();
void postjob_35_67();
void is_active_alarm_exists_5_67();
void ALARM_handler_6_133(signed int aid);
void ALARM_handler_6_134(signed int aid);
void check_property_36_67();
void is_active_obj_exists_32_68();
void postjob_35_68();
void is_active_alarm_exists_5_68();
void ALARM_handler_6_135(signed int aid);
void ALARM_handler_6_136(signed int aid);
void check_property_36_68();
void is_active_obj_exists_32_69();
void postjob_35_69();
void is_active_alarm_exists_5_69();
void ALARM_handler_6_137(signed int aid);
void ALARM_handler_6_138(signed int aid);
void check_property_36_69();
void is_active_obj_exists_32_70();
void postjob_35_70();
void is_active_alarm_exists_5_70();
void ALARM_handler_6_139(signed int aid);
void ALARM_handler_6_140(signed int aid);
void check_property_36_70();
void is_active_obj_exists_32_71();
void postjob_35_71();
void is_active_alarm_exists_5_71();
void ALARM_handler_6_141(signed int aid);
void ALARM_handler_6_142(signed int aid);
void check_property_36_71();
void is_active_obj_exists_32_72();
void postjob_35_72();
void is_active_alarm_exists_5_72();
void ALARM_handler_6_143(signed int aid);
void ALARM_handler_6_144(signed int aid);
void check_property_36_72();
void is_active_obj_exists_32_73();
void postjob_35_73();
void is_active_alarm_exists_5_73();
void ALARM_handler_6_145(signed int aid);
void ALARM_handler_6_146(signed int aid);
void check_property_36_73();
void is_active_obj_exists_32_74();
void postjob_35_74();
void is_active_alarm_exists_5_74();
void ALARM_handler_6_147(signed int aid);
void ALARM_handler_6_148(signed int aid);
void check_property_36_74();
void is_active_obj_exists_32_75();
void postjob_35_75();
void is_active_alarm_exists_5_75();
void ALARM_handler_6_149(signed int aid);
void ALARM_handler_6_150(signed int aid);
void check_property_36_75();
void is_active_obj_exists_32_76();
void postjob_35_76();
void is_active_alarm_exists_5_76();
void ALARM_handler_6_151(signed int aid);
void ALARM_handler_6_152(signed int aid);
void check_property_36_76();
void is_active_obj_exists_32_77();
void postjob_35_77();
void is_active_alarm_exists_5_77();
void ALARM_handler_6_153(signed int aid);
void ALARM_handler_6_154(signed int aid);
void check_property_36_77();
void is_active_obj_exists_32_78();
void postjob_35_78();
void is_active_alarm_exists_5_78();
void ALARM_handler_6_155(signed int aid);
void ALARM_handler_6_156(signed int aid);
void check_property_36_78();
void is_active_obj_exists_32_79();
void postjob_35_79();
void is_active_alarm_exists_5_79();
void ALARM_handler_6_157(signed int aid);
void ALARM_handler_6_158(signed int aid);
void check_property_36_79();
void is_active_obj_exists_32_80();
void postjob_35_80();
void is_active_alarm_exists_5_80();
void ALARM_handler_6_159(signed int aid);
void ALARM_handler_6_160(signed int aid);
void check_property_36_80();
void is_active_obj_exists_32_81();
void postjob_35_81();
void is_active_alarm_exists_5_81();
void ALARM_handler_6_161(signed int aid);
void ALARM_handler_6_162(signed int aid);
void check_property_36_81();
void is_active_obj_exists_32_82();
void postjob_35_82();
void is_active_alarm_exists_5_82();
void ALARM_handler_6_163(signed int aid);
void ALARM_handler_6_164(signed int aid);
void check_property_36_82();
void is_active_obj_exists_32_83();
void postjob_35_83();
void is_active_alarm_exists_5_83();
void ALARM_handler_6_165(signed int aid);
void ALARM_handler_6_166(signed int aid);
void check_property_36_83();
void is_active_obj_exists_32_84();
void postjob_35_84();
void is_active_alarm_exists_5_84();
void ALARM_handler_6_167(signed int aid);
void ALARM_handler_6_168(signed int aid);
void check_property_36_84();
void is_active_obj_exists_32_85();
void postjob_35_85();
void is_active_alarm_exists_5_85();
void ALARM_handler_6_169(signed int aid);
void ALARM_handler_6_170(signed int aid);
void check_property_36_85();
void is_active_obj_exists_32_86();
void postjob_35_86();
void is_active_alarm_exists_5_86();
void ALARM_handler_6_171(signed int aid);
void ALARM_handler_6_172(signed int aid);
void check_property_36_86();
void is_active_obj_exists_32_87();
void postjob_35_87();
void is_active_alarm_exists_5_87();
void ALARM_handler_6_173(signed int aid);
void ALARM_handler_6_174(signed int aid);
void check_property_36_87();
void is_active_obj_exists_32_88();
void postjob_35_88();
void is_active_alarm_exists_5_88();
void ALARM_handler_6_175(signed int aid);
void ALARM_handler_6_176(signed int aid);
void check_property_36_88();
void is_active_obj_exists_32_89();
void postjob_35_89();
void is_active_alarm_exists_5_89();
void ALARM_handler_6_177(signed int aid);
void ALARM_handler_6_178(signed int aid);
void check_property_36_89();
void is_active_obj_exists_32_90();
void postjob_35_90();
void is_active_alarm_exists_5_90();
void ALARM_handler_6_179(signed int aid);
void ALARM_handler_6_180(signed int aid);
void check_property_36_90();
void is_active_obj_exists_32_91();
void postjob_35_91();
void is_active_alarm_exists_5_91();
void ALARM_handler_6_181(signed int aid);
void ActivateTask_Common_60_6(unsigned char reftask);
void push_task_into_readyQ_37_5(unsigned char t, unsigned char p, signed int pc, push_type pushkind);
void reschedule_38_5(API reschedule__api, unsigned char tid);
void push_task_into_readyQ_93_5(unsigned char t, unsigned char p, signed int pc, push_type pushkind);
void get_task_from_readyQ_94_5();
void ALARM_handler_6_182(signed int aid);
void check_property_36_91();
void is_active_obj_exists_32_92();
void Func_AcquisitionTask_33_10();
void postjob_35_92();
void is_active_alarm_exists_5_92();
void ALARM_handler_6_183(signed int aid);
void ALARM_handler_6_184(signed int aid);
void check_property_36_92();
void is_active_obj_exists_32_93();
void Func_AcquisitionTask_33_11();
void request_15_3(U8 port_id);
void i2c_busy_2_3(signed int port);
void i2c_start_transaction_3_3(signed int port, unsigned int address, signed int internal_address, signed int n_internal_address_bytes, unsigned char* i2c_start_transaction__data, unsigned int nbytes, signed int write);
void getArea_17_3(U8 getArea__rectindex);
void getWidth_26_3(U8 getWidth__rectindex);
void getHeight_27_3(U8 getHeight__rectindex);
void median_filter_18_3(data_t datum);
void fisqrt_19_3(signed int val);
void getX_20_3(U8 getX__rectindex);
void GetResource_21_3(unsigned char resid);
void GetResource_Common_57_5(unsigned char resid);
void is_alloc_53_5(unsigned char res);
void postjob_35_93();
void is_active_alarm_exists_5_93();
void ALARM_handler_6_185(signed int aid);
void ALARM_handler_6_186(signed int aid);
void check_property_36_93();
void is_active_obj_exists_32_94();
void Func_AcquisitionTask_33_12();
void ReleaseResource_22_3(unsigned char resid);
void ReleaseResource_Common_55_5(unsigned char resid);
void is_alloc_28_5(unsigned char res);
void is_alloc_29_13(unsigned char res);
void is_alloc_29_14(unsigned char res);
void is_alloc_29_15(unsigned char res);
void reschedule_30_5(API reschedule__api, unsigned char tid);
void postjob_35_94();
void is_active_alarm_exists_5_94();
void ALARM_handler_6_187(signed int aid);
void ALARM_handler_6_188(signed int aid);
void check_property_36_94();
void is_active_obj_exists_32_95();
void Func_AcquisitionTask_33_13();
void TerminateTask_23_4();
void TerminateTask_Common_44_6();
void reschedule_78_6(API reschedule__api, unsigned char tid);
void get_task_from_readyQ_92_6();
void postjob_35_95();
void is_active_alarm_exists_5_95();
void ALARM_handler_6_189(signed int aid);
void ALARM_handler_6_190(signed int aid);
void check_property_36_95();
void is_active_obj_exists_32_96();
void postjob_35_96();
void is_active_alarm_exists_5_96();
void ALARM_handler_6_191(signed int aid);
void ALARM_handler_6_192(signed int aid);
void check_property_36_96();
void is_active_obj_exists_32_97();
void postjob_35_97();
void is_active_alarm_exists_5_97();
void ALARM_handler_6_193(signed int aid);
void ALARM_handler_6_194(signed int aid);
void check_property_36_97();
void is_active_obj_exists_32_98();
void postjob_35_98();
void is_active_alarm_exists_5_98();
void ALARM_handler_6_195(signed int aid);
void ALARM_handler_6_196(signed int aid);
void check_property_36_98();
void is_active_obj_exists_32_99();
void postjob_35_99();
void is_active_alarm_exists_5_99();
void ALARM_handler_6_197(signed int aid);
void ALARM_handler_6_198(signed int aid);
void check_property_36_99();
void is_active_obj_exists_32_100();
void postjob_35_100();
void is_active_alarm_exists_5_100();
void ALARM_handler_6_199(signed int aid);
void ALARM_handler_6_200(signed int aid);
void check_property_36_100();
void is_active_obj_exists_32_101();
void postjob_35_101();
void is_active_alarm_exists_5_101();
void ALARM_handler_6_201(signed int aid);
void ALARM_handler_6_202(signed int aid);
void ActivateTask_Common_60_7(unsigned char reftask);
void push_task_into_readyQ_37_6(unsigned char t, unsigned char p, signed int pc, push_type pushkind);
void reschedule_38_6(API reschedule__api, unsigned char tid);
void push_task_into_readyQ_93_6(unsigned char t, unsigned char p, signed int pc, push_type pushkind);
void get_task_from_readyQ_94_6();
void check_property_36_101();
void is_active_obj_exists_32_102();
void Func_ControlTask_34_8();
void postjob_35_102();
void is_active_alarm_exists_5_102();
void ALARM_handler_6_203(signed int aid);
void ALARM_handler_6_204(signed int aid);
void check_property_36_102();
void is_active_obj_exists_32_103();
void Func_ControlTask_34_9();
void GetResource_62_3(unsigned char resid);
void GetResource_Common_57_6(unsigned char resid);
void is_alloc_53_6(unsigned char res);
void postjob_35_103();
void is_active_alarm_exists_5_103();
void ALARM_handler_6_205(signed int aid);
void ALARM_handler_6_206(signed int aid);
void check_property_36_103();
void is_active_obj_exists_32_104();
void Func_ControlTask_34_10();
void ReleaseResource_63_3(unsigned char resid);
void ReleaseResource_Common_55_6(unsigned char resid);
void is_alloc_28_6(unsigned char res);
void is_alloc_29_16(unsigned char res);
void is_alloc_29_17(unsigned char res);
void is_alloc_29_18(unsigned char res);
void reschedule_30_6(API reschedule__api, unsigned char tid);
void postjob_35_104();
void is_active_alarm_exists_5_104();
void ALARM_handler_6_207(signed int aid);
void ALARM_handler_6_208(signed int aid);
void check_property_36_104();
void is_active_obj_exists_32_105();
void Func_ControlTask_34_11();
void TerminateTask_66_3();
void TerminateTask_Common_44_7();
void reschedule_78_7(API reschedule__api, unsigned char tid);
void get_task_from_readyQ_92_7();
void postjob_35_105();
void is_active_alarm_exists_5_105();
void ALARM_handler_6_209(signed int aid);
void ALARM_handler_6_210(signed int aid);
void check_property_36_105();
extern object_data_t __VERIFIER_nondet_object_data_t();
extern signed int __VERIFIER_nondet_signed_int();
extern U8 * __VERIFIER_nondet_U8_star();
int __iv__return_expr_main;
signed int __iv__return_expr_request;
signed int __iv__return_expr_postjob;
signed int __iv__return_expr_i2c_start_transaction;
signed int __iv__return_expr_i2c_busy;
signed int __iv__return_expr_getbiggestrect;
signed int __iv__return_expr_speedPIDController;
SINT __iv__return_expr_send_nxtcam_command;
data_t __iv__return_expr_median_filter;
signed int __iv__return_expr_is_active_obj_exists;
signed int __iv__return_expr_is_active_alarm_exists;
signed int __iv__return_expr_getArea;
signed int __iv__return_expr_getX;
signed int __iv__return_expr_getWidth;
signed int __iv__return_expr_getHeight;
signed int __iv__return_expr_ReleaseResource_Common;
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
signed int __iv__return_expr_fisqrt;
signed int __iv__return_expr_getY;
U8* __iv__return_expr_getdata;
signed int __iv__return_expr_directionPIDController;
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
	count = 55; 
	is_active_obj_exists_32_56();
	return_value_is_active_obj_exists = 1; 
	postjob_35_56();
	check_property_36_56();
	count = 56; 
	is_active_obj_exists_32_57();
	return_value_is_active_obj_exists = 1; 
	postjob_35_57();
	check_property_36_57();
	count = 57; 
	is_active_obj_exists_32_58();
	return_value_is_active_obj_exists = 1; 
	postjob_35_58();
	check_property_36_58();
	count = 58; 
	is_active_obj_exists_32_59();
	return_value_is_active_obj_exists = 1; 
	postjob_35_59();
	check_property_36_59();
	count = 59; 
	is_active_obj_exists_32_60();
	return_value_is_active_obj_exists = 1; 
	postjob_35_60();
	check_property_36_60();
	count = 60; 
	is_active_obj_exists_32_61();
	return_value_is_active_obj_exists = 1; 
	postjob_35_61();
	check_property_36_61();
	count = 61; 
	is_active_obj_exists_32_62();
	return_value_is_active_obj_exists = 1; 
	Func_AcquisitionTask_33_6();
	postjob_35_62();
	check_property_36_62();
	count = 62; 
	is_active_obj_exists_32_63();
	return_value_is_active_obj_exists = 1; 
	Func_AcquisitionTask_33_7();
	postjob_35_63();
	check_property_36_63();
	count = 63; 
	is_active_obj_exists_32_64();
	return_value_is_active_obj_exists = 1; 
	Func_AcquisitionTask_33_8();
	postjob_35_64();
	check_property_36_64();
	count = 64; 
	is_active_obj_exists_32_65();
	return_value_is_active_obj_exists = 1; 
	Func_AcquisitionTask_33_9();
	postjob_35_65();
	check_property_36_65();
	count = 65; 
	is_active_obj_exists_32_66();
	return_value_is_active_obj_exists = 1; 
	postjob_35_66();
	check_property_36_66();
	count = 66; 
	is_active_obj_exists_32_67();
	return_value_is_active_obj_exists = 1; 
	postjob_35_67();
	check_property_36_67();
	count = 67; 
	is_active_obj_exists_32_68();
	return_value_is_active_obj_exists = 1; 
	postjob_35_68();
	check_property_36_68();
	count = 68; 
	is_active_obj_exists_32_69();
	return_value_is_active_obj_exists = 1; 
	postjob_35_69();
	check_property_36_69();
	count = 69; 
	is_active_obj_exists_32_70();
	return_value_is_active_obj_exists = 1; 
	postjob_35_70();
	check_property_36_70();
	count = 70; 
	is_active_obj_exists_32_71();
	return_value_is_active_obj_exists = 1; 
	postjob_35_71();
	check_property_36_71();
	count = 71; 
	is_active_obj_exists_32_72();
	return_value_is_active_obj_exists = 1; 
	postjob_35_72();
	check_property_36_72();
	count = 72; 
	is_active_obj_exists_32_73();
	return_value_is_active_obj_exists = 1; 
	postjob_35_73();
	check_property_36_73();
	count = 73; 
	is_active_obj_exists_32_74();
	return_value_is_active_obj_exists = 1; 
	postjob_35_74();
	check_property_36_74();
	count = 74; 
	is_active_obj_exists_32_75();
	return_value_is_active_obj_exists = 1; 
	postjob_35_75();
	check_property_36_75();
	count = 75; 
	is_active_obj_exists_32_76();
	return_value_is_active_obj_exists = 1; 
	postjob_35_76();
	check_property_36_76();
	count = 76; 
	is_active_obj_exists_32_77();
	return_value_is_active_obj_exists = 1; 
	postjob_35_77();
	check_property_36_77();
	count = 77; 
	is_active_obj_exists_32_78();
	return_value_is_active_obj_exists = 1; 
	postjob_35_78();
	check_property_36_78();
	count = 78; 
	is_active_obj_exists_32_79();
	return_value_is_active_obj_exists = 1; 
	postjob_35_79();
	check_property_36_79();
	count = 79; 
	is_active_obj_exists_32_80();
	return_value_is_active_obj_exists = 1; 
	postjob_35_80();
	check_property_36_80();
	count = 80; 
	is_active_obj_exists_32_81();
	return_value_is_active_obj_exists = 1; 
	postjob_35_81();
	check_property_36_81();
	count = 81; 
	is_active_obj_exists_32_82();
	return_value_is_active_obj_exists = 1; 
	postjob_35_82();
	check_property_36_82();
	count = 82; 
	is_active_obj_exists_32_83();
	return_value_is_active_obj_exists = 1; 
	postjob_35_83();
	check_property_36_83();
	count = 83; 
	is_active_obj_exists_32_84();
	return_value_is_active_obj_exists = 1; 
	postjob_35_84();
	check_property_36_84();
	count = 84; 
	is_active_obj_exists_32_85();
	return_value_is_active_obj_exists = 1; 
	postjob_35_85();
	check_property_36_85();
	count = 85; 
	is_active_obj_exists_32_86();
	return_value_is_active_obj_exists = 1; 
	postjob_35_86();
	check_property_36_86();
	count = 86; 
	is_active_obj_exists_32_87();
	return_value_is_active_obj_exists = 1; 
	postjob_35_87();
	check_property_36_87();
	count = 87; 
	is_active_obj_exists_32_88();
	return_value_is_active_obj_exists = 1; 
	postjob_35_88();
	check_property_36_88();
	count = 88; 
	is_active_obj_exists_32_89();
	return_value_is_active_obj_exists = 1; 
	postjob_35_89();
	check_property_36_89();
	count = 89; 
	is_active_obj_exists_32_90();
	return_value_is_active_obj_exists = 1; 
	postjob_35_90();
	check_property_36_90();
	count = 90; 
	is_active_obj_exists_32_91();
	return_value_is_active_obj_exists = 1; 
	postjob_35_91();
	check_property_36_91();
	count = 91; 
	is_active_obj_exists_32_92();
	return_value_is_active_obj_exists = 1; 
	Func_AcquisitionTask_33_10();
	postjob_35_92();
	check_property_36_92();
	count = 92; 
	is_active_obj_exists_32_93();
	return_value_is_active_obj_exists = 1; 
	Func_AcquisitionTask_33_11();
	postjob_35_93();
	check_property_36_93();
	count = 93; 
	is_active_obj_exists_32_94();
	return_value_is_active_obj_exists = 1; 
	Func_AcquisitionTask_33_12();
	postjob_35_94();
	check_property_36_94();
	count = 94; 
	is_active_obj_exists_32_95();
	return_value_is_active_obj_exists = 1; 
	Func_AcquisitionTask_33_13();
	postjob_35_95();
	check_property_36_95();
	count = 95; 
	is_active_obj_exists_32_96();
	return_value_is_active_obj_exists = 1; 
	postjob_35_96();
	check_property_36_96();
	count = 96; 
	is_active_obj_exists_32_97();
	return_value_is_active_obj_exists = 1; 
	postjob_35_97();
	check_property_36_97();
	count = 97; 
	is_active_obj_exists_32_98();
	return_value_is_active_obj_exists = 1; 
	postjob_35_98();
	check_property_36_98();
	count = 98; 
	is_active_obj_exists_32_99();
	return_value_is_active_obj_exists = 1; 
	postjob_35_99();
	check_property_36_99();
	count = 99; 
	is_active_obj_exists_32_100();
	return_value_is_active_obj_exists = 1; 
	postjob_35_100();
	check_property_36_100();
	count = 100; 
	is_active_obj_exists_32_101();
	return_value_is_active_obj_exists = 1; 
	postjob_35_101();
	check_property_36_101();
	count = 101; 
	is_active_obj_exists_32_102();
	return_value_is_active_obj_exists = 1; 
	Func_ControlTask_34_8();
	postjob_35_102();
	check_property_36_102();
	count = 102; 
	is_active_obj_exists_32_103();
	return_value_is_active_obj_exists = 1; 
	Func_ControlTask_34_9();
	postjob_35_103();
	check_property_36_103();
	count = 103; 
	is_active_obj_exists_32_104();
	return_value_is_active_obj_exists = 1; 
	Func_ControlTask_34_10();
	postjob_35_104();
	check_property_36_104();
	count = 104; 
	is_active_obj_exists_32_105();
	return_value_is_active_obj_exists = 1; 
	Func_ControlTask_34_11();
	postjob_35_105();
	check_property_36_105();
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
	is_active_alarm_exists_5_1();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_1(aid);
	aid = 2; 
	ALARM_handler_6_2(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_1(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_1(signed int aid){
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
void ALARM_handler_6_2(signed int aid){
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
	is_alloc_28_1(resid);
	return_value_is_alloc_0 = 2; 
	Resource_Table[1].alloc = 0; 
	current_prio = 2; 
	i = 0; 
	signed int return_value_is_alloc;
	is_alloc_29_1(i);
	return_value_is_alloc = 0; 
	i = 1; 
	is_alloc_29_2(i);
	return_value_is_alloc = 0; 
	i = 2; 
	is_alloc_29_3(i);
	return_value_is_alloc = 0; 
	i = 3; 
	task_dyn_info[2].dyn_prio = 2; 
	reschedule_30_1((API)(5), current_tid);
}
void is_alloc_28_1(unsigned char res){
	__iv__return_expr_is_alloc = 2; 
}
void is_alloc_29_1(unsigned char res){
	__iv__return_expr_is_alloc = 0; 
}
void is_alloc_29_2(unsigned char res){
	__iv__return_expr_is_alloc = 0; 
}
void is_alloc_29_3(unsigned char res){
	__iv__return_expr_is_alloc = 0; 
}
void reschedule_30_1(API reschedule__api, unsigned char tid){
	push_task_into_readyQ_93_1(tid, task_dyn_info[(signed long int)(tid)].dyn_prio, current_pc[(signed long int)(tid)], (push_type)(1));
	get_task_from_readyQ_94_1();
}
void push_task_into_readyQ_93_1(unsigned char t, unsigned char p, signed int pc, push_type pushkind){
	task_state[2] = 1; 
	front[2] = 0; 
	k = 0; 
	readyQ[2][0].tid = 2; 
	size[2] = 1; 
	wholesize = 2; 
}
void get_task_from_readyQ_94_1(){
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
	is_active_alarm_exists_5_2();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_3(aid);
	aid = 2; 
	ALARM_handler_6_4(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_2(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_3(signed int aid){
	alarm_info[1].next_alarm_tick = 29; 
}
void ALARM_handler_6_4(signed int aid){
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
	signed int return_value_send_nxtcam_command;
	send_nxtcam_command_14_1((U8)(2), (U8)(69));
	return_value_send_nxtcam_command = __iv__return_expr_send_nxtcam_command;
	tracking_enabled = (S8)(return_value_send_nxtcam_command);
	TerminateTask_23_1();
	current_pc[1] = 4; 
}
void send_nxtcam_command_14_1(U8 port_id, U8 command){
	signed int return_value_i2c_busy;
	i2c_busy_24_1((signed int)(port_id));
	return_value_i2c_busy = 1; 
	i2c_busy_24_2((signed int)(port_id));
	return_value_i2c_busy = 2048; 
	i2c_busy_24_3((signed int)(port_id));
	return_value_i2c_busy = 512; 
	i2c_busy_24_4((signed int)(port_id));
	return_value_i2c_busy = 256; 
	i2c_busy_24_5((signed int)(port_id));
	return_value_i2c_busy = 128; 
	i2c_busy_24_6((signed int)(port_id));
	return_value_i2c_busy = 524288; 
	i2c_busy_24_7((signed int)(port_id));
	return_value_i2c_busy = -2147483648; 
	i2c_busy_24_8((signed int)(port_id));
	return_value_i2c_busy = 262144; 
	i2c_busy_24_9((signed int)(port_id));
	return_value_i2c_busy = 1; 
	i2c_busy_24_10((signed int)(port_id));
	return_value_i2c_busy = 16384; 
	i2c_busy_24_11((signed int)(port_id));
	return_value_i2c_busy = 4096; 
	i2c_busy_24_12((signed int)(port_id));
	return_value_i2c_busy = 1024; 
	i2c_busy_24_13((signed int)(port_id));
	return_value_i2c_busy = 32; 
	i2c_busy_24_14((signed int)(port_id));
	return_value_i2c_busy = 32; 
	i2c_busy_24_15((signed int)(port_id));
	return_value_i2c_busy = 1024; 
	i2c_busy_24_16((signed int)(port_id));
	return_value_i2c_busy = 4; 
	i2c_busy_24_17((signed int)(port_id));
	return_value_i2c_busy = 1; 
	i2c_busy_24_18((signed int)(port_id));
	return_value_i2c_busy = 32768; 
	i2c_busy_24_19((signed int)(port_id));
	return_value_i2c_busy = 268435456; 
	i2c_busy_24_20((signed int)(port_id));
	return_value_i2c_busy = 16; 
	i2c_busy_24_21((signed int)(port_id));
	return_value_i2c_busy = 131072; 
	i2c_busy_24_22((signed int)(port_id));
	return_value_i2c_busy = 1; 
	i2c_busy_24_23((signed int)(port_id));
	return_value_i2c_busy = 262144; 
	i2c_busy_24_24((signed int)(port_id));
	return_value_i2c_busy = 4; 
	i2c_busy_24_25((signed int)(port_id));
	return_value_i2c_busy = 1; 
	i2c_busy_24_26((signed int)(port_id));
	return_value_i2c_busy = 8; 
	i2c_busy_24_27((signed int)(port_id));
	return_value_i2c_busy = 4096; 
	i2c_busy_24_28((signed int)(port_id));
	return_value_i2c_busy = 1024; 
	i2c_busy_24_29((signed int)(port_id));
	return_value_i2c_busy = 256; 
	i2c_busy_24_30((signed int)(port_id));
	return_value_i2c_busy = -2147483648; 
	i2c_busy_24_31((signed int)(port_id));
	return_value_i2c_busy = 1; 
	i2c_busy_24_32((signed int)(port_id));
	return_value_i2c_busy = 4; 
	i2c_busy_24_33((signed int)(port_id));
	return_value_i2c_busy = 1; 
	i2c_busy_24_34((signed int)(port_id));
	return_value_i2c_busy = 1073741824; 
	i2c_busy_24_35((signed int)(port_id));
	return_value_i2c_busy = 8; 
	i2c_busy_24_36((signed int)(port_id));
	return_value_i2c_busy = 67108864; 
	i2c_busy_24_37((signed int)(port_id));
	return_value_i2c_busy = 16777216; 
	i2c_busy_24_38((signed int)(port_id));
	return_value_i2c_busy = 64; 
	i2c_busy_24_39((signed int)(port_id));
	return_value_i2c_busy = 16; 
	i2c_busy_24_40((signed int)(port_id));
	return_value_i2c_busy = 262144; 
	i2c_busy_24_41((signed int)(port_id));
	return_value_i2c_busy = 16; 
	i2c_busy_24_42((signed int)(port_id));
	return_value_i2c_busy = 16384; 
	i2c_busy_24_43((signed int)(port_id));
	return_value_i2c_busy = 2048; 
	i2c_busy_24_44((signed int)(port_id));
	return_value_i2c_busy = 1024; 
	i2c_busy_24_45((signed int)(port_id));
	return_value_i2c_busy = 16; 
	i2c_busy_24_46((signed int)(port_id));
	return_value_i2c_busy = 16; 
	i2c_busy_24_47((signed int)(port_id));
	return_value_i2c_busy = 16; 
	i2c_busy_24_48((signed int)(port_id));
	return_value_i2c_busy = 2; 
	i2c_busy_24_49((signed int)(port_id));
	return_value_i2c_busy = 1; 
	i2c_busy_24_50((signed int)(port_id));
	return_value_i2c_busy = 134217728; 
	i2c_busy_24_51((signed int)(port_id));
	return_value_i2c_busy = 16384; 
	i2c_busy_24_52((signed int)(port_id));
	return_value_i2c_busy = 8; 
	i2c_busy_24_53((signed int)(port_id));
	return_value_i2c_busy = 16777216; 
	i2c_busy_24_54((signed int)(port_id));
	return_value_i2c_busy = 32; 
	i2c_busy_24_55((signed int)(port_id));
	return_value_i2c_busy = 1048576; 
	i2c_busy_24_56((signed int)(port_id));
	return_value_i2c_busy = 4; 
	i2c_busy_24_57((signed int)(port_id));
	return_value_i2c_busy = 65536; 
	i2c_busy_24_58((signed int)(port_id));
	return_value_i2c_busy = 1073741824; 
	i2c_busy_24_59((signed int)(port_id));
	return_value_i2c_busy = 2048; 
	i2c_busy_24_60((signed int)(port_id));
	return_value_i2c_busy = 32768; 
	i2c_busy_24_61((signed int)(port_id));
	return_value_i2c_busy = 32; 
	i2c_busy_24_62((signed int)(port_id));
	return_value_i2c_busy = 8; 
	i2c_busy_24_63((signed int)(port_id));
	return_value_i2c_busy = 256; 
	i2c_busy_24_64((signed int)(port_id));
	return_value_i2c_busy = 2048; 
	i2c_busy_24_65((signed int)(port_id));
	return_value_i2c_busy = 1; 
	i2c_busy_24_66((signed int)(port_id));
	return_value_i2c_busy = 1073741824; 
	i2c_busy_24_67((signed int)(port_id));
	return_value_i2c_busy = 1; 
	i2c_busy_24_68((signed int)(port_id));
	return_value_i2c_busy = 67108864; 
	i2c_busy_24_69((signed int)(port_id));
	return_value_i2c_busy = 128; 
	i2c_busy_24_70((signed int)(port_id));
	return_value_i2c_busy = 4194304; 
	i2c_busy_24_71((signed int)(port_id));
	return_value_i2c_busy = 2048; 
	i2c_busy_24_72((signed int)(port_id));
	return_value_i2c_busy = 262144; 
	i2c_busy_24_73((signed int)(port_id));
	return_value_i2c_busy = 128; 
	i2c_busy_24_74((signed int)(port_id));
	return_value_i2c_busy = 2048; 
	i2c_busy_24_75((signed int)(port_id));
	return_value_i2c_busy = 16777216; 
	i2c_busy_24_76((signed int)(port_id));
	return_value_i2c_busy = 1024; 
	i2c_busy_24_77((signed int)(port_id));
	return_value_i2c_busy = 32; 
	i2c_busy_24_78((signed int)(port_id));
	return_value_i2c_busy = 64; 
	i2c_busy_24_79((signed int)(port_id));
	return_value_i2c_busy = 32768; 
	i2c_busy_24_80((signed int)(port_id));
	return_value_i2c_busy = 1; 
	i2c_busy_24_81((signed int)(port_id));
	return_value_i2c_busy = 67108864; 
	i2c_busy_24_82((signed int)(port_id));
	return_value_i2c_busy = 4; 
	i2c_busy_24_83((signed int)(port_id));
	return_value_i2c_busy = 1048576; 
	i2c_busy_24_84((signed int)(port_id));
	return_value_i2c_busy = 1024; 
	i2c_busy_24_85((signed int)(port_id));
	return_value_i2c_busy = 16777216; 
	i2c_busy_24_86((signed int)(port_id));
	return_value_i2c_busy = 32768; 
	i2c_busy_24_87((signed int)(port_id));
	return_value_i2c_busy = 1048576; 
	i2c_busy_24_88((signed int)(port_id));
	return_value_i2c_busy = 16384; 
	i2c_busy_24_89((signed int)(port_id));
	return_value_i2c_busy = 128; 
	i2c_busy_24_90((signed int)(port_id));
	return_value_i2c_busy = 67108864; 
	i2c_busy_24_91((signed int)(port_id));
	return_value_i2c_busy = 512; 
	i2c_busy_24_92((signed int)(port_id));
	return_value_i2c_busy = 1024; 
	i2c_busy_24_93((signed int)(port_id));
	return_value_i2c_busy = 2; 
	i2c_busy_24_94((signed int)(port_id));
	return_value_i2c_busy = 4; 
	i2c_busy_24_95((signed int)(port_id));
	return_value_i2c_busy = 16; 
	i2c_busy_24_96((signed int)(port_id));
	return_value_i2c_busy = 8; 
	i2c_busy_24_97((signed int)(port_id));
	return_value_i2c_busy = 2; 
	i2c_busy_24_98((signed int)(port_id));
	return_value_i2c_busy = 134217728; 
	i2c_busy_24_99((signed int)(port_id));
	return_value_i2c_busy = 2; 
	i2c_busy_24_100((signed int)(port_id));
	return_value_i2c_busy = 67108864; 
	i2c_busy_24_101((signed int)(port_id));
	return_value_i2c_busy = 524288; 
	i2c_busy_24_102((signed int)(port_id));
	return_value_i2c_busy = 4194304; 
	i2c_busy_24_103((signed int)(port_id));
	return_value_i2c_busy = 134217728; 
	i2c_busy_24_104((signed int)(port_id));
	return_value_i2c_busy = 262144; 
	i2c_busy_24_105((signed int)(port_id));
	return_value_i2c_busy = 2048; 
	i2c_busy_24_106((signed int)(port_id));
	return_value_i2c_busy = 8; 
	i2c_busy_24_107((signed int)(port_id));
	return_value_i2c_busy = 0; 
	nxtcambuffer[0] = command;
	SINT ret;
	i2c_start_transaction_25_1((signed int)(port_id), 1u, 0x41, 1, nxtcambuffer, 1u, 1);
	ret = __iv__return_expr_i2c_start_transaction;
	__iv__return_expr_send_nxtcam_command = ret;
}
void i2c_busy_24_1(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 1; 
	__iv__return_expr_i2c_busy = 1; 
}
void i2c_busy_24_2(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 2048; 
	__iv__return_expr_i2c_busy = 2048; 
}
void i2c_busy_24_3(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 512; 
	__iv__return_expr_i2c_busy = 512; 
}
void i2c_busy_24_4(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 256; 
	__iv__return_expr_i2c_busy = 256; 
}
void i2c_busy_24_5(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 128; 
	__iv__return_expr_i2c_busy = 128; 
}
void i2c_busy_24_6(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 524288; 
	__iv__return_expr_i2c_busy = 524288; 
}
void i2c_busy_24_7(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = -2147483648; 
	__iv__return_expr_i2c_busy = -2147483648; 
}
void i2c_busy_24_8(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 262144; 
	__iv__return_expr_i2c_busy = 262144; 
}
void i2c_busy_24_9(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 1; 
	__iv__return_expr_i2c_busy = 1; 
}
void i2c_busy_24_10(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 16384; 
	__iv__return_expr_i2c_busy = 16384; 
}
void i2c_busy_24_11(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 4096; 
	__iv__return_expr_i2c_busy = 4096; 
}
void i2c_busy_24_12(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 1024; 
	__iv__return_expr_i2c_busy = 1024; 
}
void i2c_busy_24_13(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 32; 
	__iv__return_expr_i2c_busy = 32; 
}
void i2c_busy_24_14(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 32; 
	__iv__return_expr_i2c_busy = 32; 
}
void i2c_busy_24_15(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 1024; 
	__iv__return_expr_i2c_busy = 1024; 
}
void i2c_busy_24_16(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 4; 
	__iv__return_expr_i2c_busy = 4; 
}
void i2c_busy_24_17(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 1; 
	__iv__return_expr_i2c_busy = 1; 
}
void i2c_busy_24_18(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 32768; 
	__iv__return_expr_i2c_busy = 32768; 
}
void i2c_busy_24_19(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 268435456; 
	__iv__return_expr_i2c_busy = 268435456; 
}
void i2c_busy_24_20(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 16; 
	__iv__return_expr_i2c_busy = 16; 
}
void i2c_busy_24_21(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 131072; 
	__iv__return_expr_i2c_busy = 131072; 
}
void i2c_busy_24_22(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 1; 
	__iv__return_expr_i2c_busy = 1; 
}
void i2c_busy_24_23(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 262144; 
	__iv__return_expr_i2c_busy = 262144; 
}
void i2c_busy_24_24(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 4; 
	__iv__return_expr_i2c_busy = 4; 
}
void i2c_busy_24_25(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 1; 
	__iv__return_expr_i2c_busy = 1; 
}
void i2c_busy_24_26(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 8; 
	__iv__return_expr_i2c_busy = 8; 
}
void i2c_busy_24_27(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 4096; 
	__iv__return_expr_i2c_busy = 4096; 
}
void i2c_busy_24_28(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 1024; 
	__iv__return_expr_i2c_busy = 1024; 
}
void i2c_busy_24_29(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 256; 
	__iv__return_expr_i2c_busy = 256; 
}
void i2c_busy_24_30(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = -2147483648; 
	__iv__return_expr_i2c_busy = -2147483648; 
}
void i2c_busy_24_31(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 1; 
	__iv__return_expr_i2c_busy = 1; 
}
void i2c_busy_24_32(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 4; 
	__iv__return_expr_i2c_busy = 4; 
}
void i2c_busy_24_33(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 1; 
	__iv__return_expr_i2c_busy = 1; 
}
void i2c_busy_24_34(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 1073741824; 
	__iv__return_expr_i2c_busy = 1073741824; 
}
void i2c_busy_24_35(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 8; 
	__iv__return_expr_i2c_busy = 8; 
}
void i2c_busy_24_36(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 67108864; 
	__iv__return_expr_i2c_busy = 67108864; 
}
void i2c_busy_24_37(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 16777216; 
	__iv__return_expr_i2c_busy = 16777216; 
}
void i2c_busy_24_38(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 64; 
	__iv__return_expr_i2c_busy = 64; 
}
void i2c_busy_24_39(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 16; 
	__iv__return_expr_i2c_busy = 16; 
}
void i2c_busy_24_40(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 262144; 
	__iv__return_expr_i2c_busy = 262144; 
}
void i2c_busy_24_41(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 16; 
	__iv__return_expr_i2c_busy = 16; 
}
void i2c_busy_24_42(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 16384; 
	__iv__return_expr_i2c_busy = 16384; 
}
void i2c_busy_24_43(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 2048; 
	__iv__return_expr_i2c_busy = 2048; 
}
void i2c_busy_24_44(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 1024; 
	__iv__return_expr_i2c_busy = 1024; 
}
void i2c_busy_24_45(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 16; 
	__iv__return_expr_i2c_busy = 16; 
}
void i2c_busy_24_46(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 16; 
	__iv__return_expr_i2c_busy = 16; 
}
void i2c_busy_24_47(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 16; 
	__iv__return_expr_i2c_busy = 16; 
}
void i2c_busy_24_48(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 2; 
	__iv__return_expr_i2c_busy = 2; 
}
void i2c_busy_24_49(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 1; 
	__iv__return_expr_i2c_busy = 1; 
}
void i2c_busy_24_50(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 134217728; 
	__iv__return_expr_i2c_busy = 134217728; 
}
void i2c_busy_24_51(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 16384; 
	__iv__return_expr_i2c_busy = 16384; 
}
void i2c_busy_24_52(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 8; 
	__iv__return_expr_i2c_busy = 8; 
}
void i2c_busy_24_53(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 16777216; 
	__iv__return_expr_i2c_busy = 16777216; 
}
void i2c_busy_24_54(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 32; 
	__iv__return_expr_i2c_busy = 32; 
}
void i2c_busy_24_55(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 1048576; 
	__iv__return_expr_i2c_busy = 1048576; 
}
void i2c_busy_24_56(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 4; 
	__iv__return_expr_i2c_busy = 4; 
}
void i2c_busy_24_57(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 65536; 
	__iv__return_expr_i2c_busy = 65536; 
}
void i2c_busy_24_58(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 1073741824; 
	__iv__return_expr_i2c_busy = 1073741824; 
}
void i2c_busy_24_59(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 2048; 
	__iv__return_expr_i2c_busy = 2048; 
}
void i2c_busy_24_60(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 32768; 
	__iv__return_expr_i2c_busy = 32768; 
}
void i2c_busy_24_61(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 32; 
	__iv__return_expr_i2c_busy = 32; 
}
void i2c_busy_24_62(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 8; 
	__iv__return_expr_i2c_busy = 8; 
}
void i2c_busy_24_63(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 256; 
	__iv__return_expr_i2c_busy = 256; 
}
void i2c_busy_24_64(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 2048; 
	__iv__return_expr_i2c_busy = 2048; 
}
void i2c_busy_24_65(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 1; 
	__iv__return_expr_i2c_busy = 1; 
}
void i2c_busy_24_66(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 1073741824; 
	__iv__return_expr_i2c_busy = 1073741824; 
}
void i2c_busy_24_67(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 1; 
	__iv__return_expr_i2c_busy = 1; 
}
void i2c_busy_24_68(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 67108864; 
	__iv__return_expr_i2c_busy = 67108864; 
}
void i2c_busy_24_69(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 128; 
	__iv__return_expr_i2c_busy = 128; 
}
void i2c_busy_24_70(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 4194304; 
	__iv__return_expr_i2c_busy = 4194304; 
}
void i2c_busy_24_71(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 2048; 
	__iv__return_expr_i2c_busy = 2048; 
}
void i2c_busy_24_72(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 262144; 
	__iv__return_expr_i2c_busy = 262144; 
}
void i2c_busy_24_73(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 128; 
	__iv__return_expr_i2c_busy = 128; 
}
void i2c_busy_24_74(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 2048; 
	__iv__return_expr_i2c_busy = 2048; 
}
void i2c_busy_24_75(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 16777216; 
	__iv__return_expr_i2c_busy = 16777216; 
}
void i2c_busy_24_76(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 1024; 
	__iv__return_expr_i2c_busy = 1024; 
}
void i2c_busy_24_77(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 32; 
	__iv__return_expr_i2c_busy = 32; 
}
void i2c_busy_24_78(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 64; 
	__iv__return_expr_i2c_busy = 64; 
}
void i2c_busy_24_79(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 32768; 
	__iv__return_expr_i2c_busy = 32768; 
}
void i2c_busy_24_80(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 1; 
	__iv__return_expr_i2c_busy = 1; 
}
void i2c_busy_24_81(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 67108864; 
	__iv__return_expr_i2c_busy = 67108864; 
}
void i2c_busy_24_82(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 4; 
	__iv__return_expr_i2c_busy = 4; 
}
void i2c_busy_24_83(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 1048576; 
	__iv__return_expr_i2c_busy = 1048576; 
}
void i2c_busy_24_84(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 1024; 
	__iv__return_expr_i2c_busy = 1024; 
}
void i2c_busy_24_85(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 16777216; 
	__iv__return_expr_i2c_busy = 16777216; 
}
void i2c_busy_24_86(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 32768; 
	__iv__return_expr_i2c_busy = 32768; 
}
void i2c_busy_24_87(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 1048576; 
	__iv__return_expr_i2c_busy = 1048576; 
}
void i2c_busy_24_88(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 16384; 
	__iv__return_expr_i2c_busy = 16384; 
}
void i2c_busy_24_89(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 128; 
	__iv__return_expr_i2c_busy = 128; 
}
void i2c_busy_24_90(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 67108864; 
	__iv__return_expr_i2c_busy = 67108864; 
}
void i2c_busy_24_91(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 512; 
	__iv__return_expr_i2c_busy = 512; 
}
void i2c_busy_24_92(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 1024; 
	__iv__return_expr_i2c_busy = 1024; 
}
void i2c_busy_24_93(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 2; 
	__iv__return_expr_i2c_busy = 2; 
}
void i2c_busy_24_94(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 4; 
	__iv__return_expr_i2c_busy = 4; 
}
void i2c_busy_24_95(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 16; 
	__iv__return_expr_i2c_busy = 16; 
}
void i2c_busy_24_96(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 8; 
	__iv__return_expr_i2c_busy = 8; 
}
void i2c_busy_24_97(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 2; 
	__iv__return_expr_i2c_busy = 2; 
}
void i2c_busy_24_98(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 134217728; 
	__iv__return_expr_i2c_busy = 134217728; 
}
void i2c_busy_24_99(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 2; 
	__iv__return_expr_i2c_busy = 2; 
}
void i2c_busy_24_100(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 67108864; 
	__iv__return_expr_i2c_busy = 67108864; 
}
void i2c_busy_24_101(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 524288; 
	__iv__return_expr_i2c_busy = 524288; 
}
void i2c_busy_24_102(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 4194304; 
	__iv__return_expr_i2c_busy = 4194304; 
}
void i2c_busy_24_103(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 134217728; 
	__iv__return_expr_i2c_busy = 134217728; 
}
void i2c_busy_24_104(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 262144; 
	__iv__return_expr_i2c_busy = 262144; 
}
void i2c_busy_24_105(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 2048; 
	__iv__return_expr_i2c_busy = 2048; 
}
void i2c_busy_24_106(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 8; 
	__iv__return_expr_i2c_busy = 8; 
}
void i2c_busy_24_107(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 0; 
	__iv__return_expr_i2c_busy = 0; 
}
void i2c_start_transaction_25_1(signed int port, unsigned int address, signed int internal_address, signed int n_internal_address_bytes, unsigned char* i2c_start_transaction__data, unsigned int nbytes, signed int write){
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
void TerminateTask_23_1(){
	TerminateTask_Common_44_1();
}
void TerminateTask_Common_44_1(){
	task_dyn_info[1].act_cnt = 0; 
	task_state[1] = 0; 
	reschedule_78_1((API)(1), current_tid);
}
void reschedule_78_1(API reschedule__api, unsigned char tid){
	get_task_from_readyQ_92_1();
}
void get_task_from_readyQ_92_1(){
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
	is_active_alarm_exists_5_3();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_5(aid);
	aid = 2; 
	ALARM_handler_6_6(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_3(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_5(signed int aid){
	alarm_info[1].next_alarm_tick = 28; 
}
void ALARM_handler_6_6(signed int aid){
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
	get_task_from_readyQ_92_2();
}
void get_task_from_readyQ_92_2(){
	current_tid = 0; 
	current_prio = 0; 
}
void postjob_35_4(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_4();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_7(aid);
	aid = 2; 
	ALARM_handler_6_8(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_4(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_7(signed int aid){
	alarm_info[1].next_alarm_tick = 27; 
}
void ALARM_handler_6_8(signed int aid){
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
	is_active_alarm_exists_5_5();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_9(aid);
	aid = 2; 
	ALARM_handler_6_10(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_5(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_9(signed int aid){
	alarm_info[1].next_alarm_tick = 26; 
}
void ALARM_handler_6_10(signed int aid){
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
	is_active_alarm_exists_5_6();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_11(aid);
	aid = 2; 
	ALARM_handler_6_12(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_6(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_11(signed int aid){
	alarm_info[1].next_alarm_tick = 25; 
}
void ALARM_handler_6_12(signed int aid){
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
	is_active_alarm_exists_5_7();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_13(aid);
	aid = 2; 
	ALARM_handler_6_14(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_7(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_13(signed int aid){
	alarm_info[1].next_alarm_tick = 24; 
}
void ALARM_handler_6_14(signed int aid){
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
	is_active_alarm_exists_5_8();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_15(aid);
	aid = 2; 
	ALARM_handler_6_16(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_8(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_15(signed int aid){
	alarm_info[1].next_alarm_tick = 23; 
}
void ALARM_handler_6_16(signed int aid){
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
	is_active_alarm_exists_5_9();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_17(aid);
	aid = 2; 
	ALARM_handler_6_18(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_9(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_17(signed int aid){
	alarm_info[1].next_alarm_tick = 22; 
}
void ALARM_handler_6_18(signed int aid){
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
	is_active_alarm_exists_5_10();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_19(aid);
	aid = 2; 
	ALARM_handler_6_20(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_10(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_19(signed int aid){
	alarm_info[1].next_alarm_tick = 21; 
}
void ALARM_handler_6_20(signed int aid){
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
	is_active_alarm_exists_5_11();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_21(aid);
	aid = 2; 
	ALARM_handler_6_22(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_11(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_21(signed int aid){
	alarm_info[1].next_alarm_tick = 20; 
}
void ALARM_handler_6_22(signed int aid){
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
	is_active_alarm_exists_5_12();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_23(aid);
	aid = 2; 
	ALARM_handler_6_24(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_12(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_23(signed int aid){
	alarm_info[1].next_alarm_tick = 19; 
}
void ALARM_handler_6_24(signed int aid){
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
	is_active_alarm_exists_5_13();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_25(aid);
	aid = 2; 
	ALARM_handler_6_26(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_13(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_25(signed int aid){
	alarm_info[1].next_alarm_tick = 18; 
}
void ALARM_handler_6_26(signed int aid){
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
	is_active_alarm_exists_5_14();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_27(aid);
	aid = 2; 
	ALARM_handler_6_28(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_14(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_27(signed int aid){
	alarm_info[1].next_alarm_tick = 17; 
}
void ALARM_handler_6_28(signed int aid){
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
	is_active_alarm_exists_5_15();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_29(aid);
	aid = 2; 
	ALARM_handler_6_30(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_15(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_29(signed int aid){
	alarm_info[1].next_alarm_tick = 16; 
}
void ALARM_handler_6_30(signed int aid){
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
	is_active_alarm_exists_5_16();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_31(aid);
	aid = 2; 
	ALARM_handler_6_32(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_16(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_31(signed int aid){
	alarm_info[1].next_alarm_tick = 15; 
}
void ALARM_handler_6_32(signed int aid){
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
	is_active_alarm_exists_5_17();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_33(aid);
	aid = 2; 
	ALARM_handler_6_34(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_17(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_33(signed int aid){
	alarm_info[1].next_alarm_tick = 14; 
}
void ALARM_handler_6_34(signed int aid){
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
	is_active_alarm_exists_5_18();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_35(aid);
	aid = 2; 
	ALARM_handler_6_36(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_18(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_35(signed int aid){
	alarm_info[1].next_alarm_tick = 13; 
}
void ALARM_handler_6_36(signed int aid){
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
	is_active_alarm_exists_5_19();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_37(aid);
	aid = 2; 
	ALARM_handler_6_38(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_19(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_37(signed int aid){
	alarm_info[1].next_alarm_tick = 12; 
}
void ALARM_handler_6_38(signed int aid){
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
	is_active_alarm_exists_5_20();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_39(aid);
	aid = 2; 
	ALARM_handler_6_40(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_20(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_39(signed int aid){
	alarm_info[1].next_alarm_tick = 11; 
}
void ALARM_handler_6_40(signed int aid){
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
	is_active_alarm_exists_5_21();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_41(aid);
	aid = 2; 
	ALARM_handler_6_42(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_21(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_41(signed int aid){
	alarm_info[1].next_alarm_tick = 10; 
}
void ALARM_handler_6_42(signed int aid){
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
	is_active_alarm_exists_5_22();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_43(aid);
	aid = 2; 
	ALARM_handler_6_44(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_22(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_43(signed int aid){
	alarm_info[1].next_alarm_tick = 9; 
}
void ALARM_handler_6_44(signed int aid){
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
	is_active_alarm_exists_5_23();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_45(aid);
	aid = 2; 
	ALARM_handler_6_46(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_23(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_45(signed int aid){
	alarm_info[1].next_alarm_tick = 8; 
}
void ALARM_handler_6_46(signed int aid){
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
	is_active_alarm_exists_5_24();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_47(aid);
	aid = 2; 
	ALARM_handler_6_48(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_24(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_47(signed int aid){
	alarm_info[1].next_alarm_tick = 7; 
}
void ALARM_handler_6_48(signed int aid){
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
	is_active_alarm_exists_5_25();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_49(aid);
	aid = 2; 
	ALARM_handler_6_50(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_25(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_49(signed int aid){
	alarm_info[1].next_alarm_tick = 6; 
}
void ALARM_handler_6_50(signed int aid){
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
	is_active_alarm_exists_5_26();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_51(aid);
	aid = 2; 
	ALARM_handler_6_52(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_26(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_51(signed int aid){
	alarm_info[1].next_alarm_tick = 5; 
}
void ALARM_handler_6_52(signed int aid){
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
	is_active_alarm_exists_5_27();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_53(aid);
	aid = 2; 
	ALARM_handler_6_54(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_27(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_53(signed int aid){
	alarm_info[1].next_alarm_tick = 4; 
}
void ALARM_handler_6_54(signed int aid){
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
	is_active_alarm_exists_5_28();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_55(aid);
	aid = 2; 
	ALARM_handler_6_56(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_28(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_55(signed int aid){
	alarm_info[1].next_alarm_tick = 3; 
}
void ALARM_handler_6_56(signed int aid){
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
	is_active_alarm_exists_5_29();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_57(aid);
	aid = 2; 
	ALARM_handler_6_58(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_29(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_57(signed int aid){
	alarm_info[1].next_alarm_tick = 2; 
}
void ALARM_handler_6_58(signed int aid){
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
	is_active_alarm_exists_5_30();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_59(aid);
	aid = 2; 
	ALARM_handler_6_60(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_30(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_59(signed int aid){
	alarm_info[1].next_alarm_tick = 1; 
}
void ALARM_handler_6_60(signed int aid){
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
	is_active_alarm_exists_5_31();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_61(aid);
	aid = 2; 
	ALARM_handler_6_62(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_31(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_61(signed int aid){
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
	push_task_into_readyQ_93_2(tid, task_dyn_info[(signed long int)(tid)].dyn_prio, current_pc[(signed long int)(tid)], (push_type)(1));
	get_task_from_readyQ_94_2();
}
void push_task_into_readyQ_93_2(unsigned char t, unsigned char p, signed int pc, push_type pushkind){
	task_state[0] = 1; 
	front[0] = 3; 
	k = 3; 
	readyQ[0][3].tid = 0; 
	size[0] = 1; 
	wholesize = 2; 
}
void get_task_from_readyQ_94_2(){
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
void ALARM_handler_6_62(signed int aid){
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
	current_pc[1] = 1; 
}
void postjob_35_32(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_32();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_63(aid);
	aid = 2; 
	ALARM_handler_6_64(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_32(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_63(signed int aid){
	alarm_info[1].next_alarm_tick = 29; 
}
void ALARM_handler_6_64(signed int aid){
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
	__CPROVER_assume((((signed int)(tracking_enabled) == 0)));
	request_15_1((U8)(2));
	rectindex = getbiggestrect((U8)(0), -1);
	__CPROVER_assume(!(!((rectindex >= 0))));
	getArea_17_1((U8)(rectindex));
	area = __iv__return_expr_getArea;
	median_filter_18_1(area);
	area = __iv__return_expr_median_filter;
	fisqrt_19_1(area);
	acq_size = __iv__return_expr_fisqrt;
	getX_20_1((U8)(rectindex));
	x = __iv__return_expr_getX;
	GetResource_21_1((unsigned char)(1));
	current_pc[1] = 2; 
}
void request_15_1(U8 port_id){
	signed int return_value_i2c_busy;
	i2c_busy_2_1((signed int)(port_id));
	return_value_i2c_busy = 0; 
	i2c_start_transaction_3_1((signed int)(port_id), 1u, 0x42, 1, nxtcamdata, 41u, 0);
}
void i2c_busy_2_1(signed int port){
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
void getArea_17_1(U8 getArea__rectindex){
	signed int return_value_getWidth;
	getWidth_26_1(getArea__rectindex);
	return_value_getWidth = __iv__return_expr_getWidth;
	signed int return_value_getHeight;
	getHeight_27_1(getArea__rectindex);
	return_value_getHeight = __iv__return_expr_getHeight;
	__iv__return_expr_getArea = (return_value_getWidth * return_value_getHeight);
}
void getWidth_26_1(U8 getWidth__rectindex){
	signed int xul;
	xul = (signed int)(nxtcamdata[(signed long int)((((5 * (signed int)(getWidth__rectindex)) + 1) + 1))]);
	signed int xlr;
	xlr = (signed int)(nxtcamdata[(signed long int)((((5 * (signed int)(getWidth__rectindex)) + 1) + 3))]);
	__iv__return_expr_getWidth = ((xlr - xul) >= 0) ? (xlr - xul) : -((xlr - xul));
}
void getHeight_27_1(U8 getHeight__rectindex){
	signed int yul;
	yul = (signed int)(nxtcamdata[(signed long int)((((5 * (signed int)(getHeight__rectindex)) + 1) + 2))]);
	signed int ylr;
	ylr = (signed int)(nxtcamdata[(signed long int)((((5 * (signed int)(getHeight__rectindex)) + 1) + 4))]);
	__iv__return_expr_getHeight = ((ylr - yul) >= 0) ? (ylr - yul) : -((ylr - yul));
}
void median_filter_18_1(data_t datum){
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
	i = 0; 
	__CPROVER_assume((!((scan->point == datpoint))));
	__CPROVER_assume(((scan->value >= datum)));
	median = median->point;
	__CPROVER_assume(((scan == &small)));
	__iv__return_expr_median_filter = median->value;
}
void fisqrt_19_1(signed int val){
	signed int cnt;
	cnt = 0; 
	signed int t;
	t = val;
	__CPROVER_assume(((t == 0)));
	t = (val << (6 - cnt));
	__iv__return_expr_fisqrt = ((ftbl[(signed long int)(cnt)] * ftbl2[(signed long int)((t & 31))]) >> 15);
}
void getX_20_1(U8 getX__rectindex){
	signed int xul;
	xul = (signed int)(nxtcamdata[(signed long int)((((5 * (signed int)(getX__rectindex)) + 1) + 1))]);
	signed int xlr;
	xlr = (signed int)(nxtcamdata[(signed long int)((((5 * (signed int)(getX__rectindex)) + 1) + 3))]);
	__iv__return_expr_getX = ((xlr + xul) / 2);
}
void GetResource_21_1(unsigned char resid){
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
	is_active_alarm_exists_5_33();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_65(aid);
	aid = 2; 
	ALARM_handler_6_66(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_33(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_65(signed int aid){
	alarm_info[1].next_alarm_tick = 28; 
}
void ALARM_handler_6_66(signed int aid){
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
	objData.position = x;
	objData.size = acq_size;
	ReleaseResource_22_1((unsigned char)(1));
	current_pc[1] = 3; 
}
void ReleaseResource_22_1(unsigned char resid){
	ReleaseResource_Common_55_2(resid);
}
void ReleaseResource_Common_55_2(unsigned char resid){
	unsigned char i;
	signed int return_value_is_alloc_0;
	is_alloc_28_2(resid);
	return_value_is_alloc_0 = 1; 
	Resource_Table[1].alloc = 0; 
	current_prio = 3; 
	i = 0; 
	signed int return_value_is_alloc;
	is_alloc_29_4(i);
	return_value_is_alloc = 0; 
	i = 1; 
	is_alloc_29_5(i);
	return_value_is_alloc = 0; 
	i = 2; 
	is_alloc_29_6(i);
	return_value_is_alloc = 0; 
	i = 3; 
	task_dyn_info[1].dyn_prio = 3; 
	reschedule_30_2((API)(5), current_tid);
}
void is_alloc_28_2(unsigned char res){
	__iv__return_expr_is_alloc = 1; 
}
void is_alloc_29_4(unsigned char res){
	__iv__return_expr_is_alloc = 0; 
}
void is_alloc_29_5(unsigned char res){
	__iv__return_expr_is_alloc = 0; 
}
void is_alloc_29_6(unsigned char res){
	__iv__return_expr_is_alloc = 0; 
}
void reschedule_30_2(API reschedule__api, unsigned char tid){
}
void postjob_35_34(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_34();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_67(aid);
	aid = 2; 
	ALARM_handler_6_68(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_34(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_67(signed int aid){
	alarm_info[1].next_alarm_tick = 27; 
}
void ALARM_handler_6_68(signed int aid){
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
	TerminateTask_23_2();
	current_pc[1] = 4; 
}
void TerminateTask_23_2(){
	TerminateTask_Common_44_3();
}
void TerminateTask_Common_44_3(){
	task_dyn_info[1].act_cnt = 0; 
	task_state[1] = 0; 
	reschedule_78_3((API)(1), current_tid);
}
void reschedule_78_3(API reschedule__api, unsigned char tid){
	get_task_from_readyQ_92_3();
}
void get_task_from_readyQ_92_3(){
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
	is_active_alarm_exists_5_35();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_69(aid);
	aid = 2; 
	ALARM_handler_6_70(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_35(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_69(signed int aid){
	alarm_info[1].next_alarm_tick = 26; 
}
void ALARM_handler_6_70(signed int aid){
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
	is_active_alarm_exists_5_36();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_71(aid);
	aid = 2; 
	ALARM_handler_6_72(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_36(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_71(signed int aid){
	alarm_info[1].next_alarm_tick = 25; 
}
void ALARM_handler_6_72(signed int aid){
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
	is_active_alarm_exists_5_37();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_73(aid);
	aid = 2; 
	ALARM_handler_6_74(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_37(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_73(signed int aid){
	alarm_info[1].next_alarm_tick = 24; 
}
void ALARM_handler_6_74(signed int aid){
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
	is_active_alarm_exists_5_38();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_75(aid);
	aid = 2; 
	ALARM_handler_6_76(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_38(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_75(signed int aid){
	alarm_info[1].next_alarm_tick = 23; 
}
void ALARM_handler_6_76(signed int aid){
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
	is_active_alarm_exists_5_39();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_77(aid);
	aid = 2; 
	ALARM_handler_6_78(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_39(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_77(signed int aid){
	alarm_info[1].next_alarm_tick = 22; 
}
void ALARM_handler_6_78(signed int aid){
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
	is_active_alarm_exists_5_40();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_79(aid);
	aid = 2; 
	ALARM_handler_6_80(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_40(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_79(signed int aid){
	alarm_info[1].next_alarm_tick = 21; 
}
void ALARM_handler_6_80(signed int aid){
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
	is_active_alarm_exists_5_41();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_81(aid);
	aid = 2; 
	ALARM_handler_6_82(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_41(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_81(signed int aid){
	alarm_info[1].next_alarm_tick = 20; 
}
void ALARM_handler_6_82(signed int aid){
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
	is_active_alarm_exists_5_42();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_83(aid);
	aid = 2; 
	ALARM_handler_6_84(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_42(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_83(signed int aid){
	alarm_info[1].next_alarm_tick = 19; 
}
void ALARM_handler_6_84(signed int aid){
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
	is_active_alarm_exists_5_43();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_85(aid);
	aid = 2; 
	ALARM_handler_6_86(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_43(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_85(signed int aid){
	alarm_info[1].next_alarm_tick = 18; 
}
void ALARM_handler_6_86(signed int aid){
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
	is_active_alarm_exists_5_44();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_87(aid);
	aid = 2; 
	ALARM_handler_6_88(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_44(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_87(signed int aid){
	alarm_info[1].next_alarm_tick = 17; 
}
void ALARM_handler_6_88(signed int aid){
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
	is_active_alarm_exists_5_45();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_89(aid);
	aid = 2; 
	ALARM_handler_6_90(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_45(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_89(signed int aid){
	alarm_info[1].next_alarm_tick = 16; 
}
void ALARM_handler_6_90(signed int aid){
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
	is_active_alarm_exists_5_46();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_91(aid);
	aid = 2; 
	ALARM_handler_6_92(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_46(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_91(signed int aid){
	alarm_info[1].next_alarm_tick = 15; 
}
void ALARM_handler_6_92(signed int aid){
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
	is_active_alarm_exists_5_47();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_93(aid);
	aid = 2; 
	ALARM_handler_6_94(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_47(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_93(signed int aid){
	alarm_info[1].next_alarm_tick = 14; 
}
void ALARM_handler_6_94(signed int aid){
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
	is_active_alarm_exists_5_48();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_95(aid);
	aid = 2; 
	ALARM_handler_6_96(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_48(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_95(signed int aid){
	alarm_info[1].next_alarm_tick = 13; 
}
void ALARM_handler_6_96(signed int aid){
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
	is_active_alarm_exists_5_49();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_97(aid);
	aid = 2; 
	ALARM_handler_6_98(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_49(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_97(signed int aid){
	alarm_info[1].next_alarm_tick = 12; 
}
void ALARM_handler_6_98(signed int aid){
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
	is_active_alarm_exists_5_50();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_99(aid);
	aid = 2; 
	ALARM_handler_6_100(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_50(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_99(signed int aid){
	alarm_info[1].next_alarm_tick = 11; 
}
void ALARM_handler_6_100(signed int aid){
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
	is_active_alarm_exists_5_51();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_101(aid);
	aid = 2; 
	ALARM_handler_6_102(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_51(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_101(signed int aid){
	alarm_info[1].next_alarm_tick = 10; 
}
void ALARM_handler_6_102(signed int aid){
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
	push_task_into_readyQ_93_3(tid, task_dyn_info[(signed long int)(tid)].dyn_prio, current_pc[(signed long int)(tid)], (push_type)(1));
	get_task_from_readyQ_94_3();
}
void push_task_into_readyQ_93_3(unsigned char t, unsigned char p, signed int pc, push_type pushkind){
	task_state[0] = 1; 
	front[0] = 3; 
	k = 3; 
	readyQ[0][3].tid = 0; 
	size[0] = 1; 
	wholesize = 2; 
}
void get_task_from_readyQ_94_3(){
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
	is_active_alarm_exists_5_52();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_103(aid);
	aid = 2; 
	ALARM_handler_6_104(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_52(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_103(signed int aid){
	alarm_info[1].next_alarm_tick = 9; 
}
void ALARM_handler_6_104(signed int aid){
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
	is_active_alarm_exists_5_53();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_105(aid);
	aid = 2; 
	ALARM_handler_6_106(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_53(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_105(signed int aid){
	alarm_info[1].next_alarm_tick = 8; 
}
void ALARM_handler_6_106(signed int aid){
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
	is_alloc_28_3(resid);
	return_value_is_alloc_0 = 2; 
	Resource_Table[1].alloc = 0; 
	current_prio = 2; 
	i = 0; 
	signed int return_value_is_alloc;
	is_alloc_29_7(i);
	return_value_is_alloc = 0; 
	i = 1; 
	is_alloc_29_8(i);
	return_value_is_alloc = 0; 
	i = 2; 
	is_alloc_29_9(i);
	return_value_is_alloc = 0; 
	i = 3; 
	task_dyn_info[2].dyn_prio = 2; 
	reschedule_30_3((API)(5), current_tid);
}
void is_alloc_28_3(unsigned char res){
	__iv__return_expr_is_alloc = 2; 
}
void is_alloc_29_7(unsigned char res){
	__iv__return_expr_is_alloc = 0; 
}
void is_alloc_29_8(unsigned char res){
	__iv__return_expr_is_alloc = 0; 
}
void is_alloc_29_9(unsigned char res){
	__iv__return_expr_is_alloc = 0; 
}
void reschedule_30_3(API reschedule__api, unsigned char tid){
}
void postjob_35_54(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_54();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_107(aid);
	aid = 2; 
	ALARM_handler_6_108(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_54(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_107(signed int aid){
	alarm_info[1].next_alarm_tick = 7; 
}
void ALARM_handler_6_108(signed int aid){
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
	__CPROVER_assume((!(((ctl_size >= 1) && (position >= 1)))));
	TerminateTask_66_2();
	current_pc[2] = 4; 
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
	get_task_from_readyQ_92_4();
}
void get_task_from_readyQ_92_4(){
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
	is_active_alarm_exists_5_55();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_109(aid);
	aid = 2; 
	ALARM_handler_6_110(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_55(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_109(signed int aid){
	alarm_info[1].next_alarm_tick = 6; 
}
void ALARM_handler_6_110(signed int aid){
	alarm_info[2].next_alarm_tick = 46; 
}
void check_property_36_55(){
}
void is_active_obj_exists_32_56(){
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
void postjob_35_56(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_56();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_111(aid);
	aid = 2; 
	ALARM_handler_6_112(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_56(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_111(signed int aid){
	alarm_info[1].next_alarm_tick = 5; 
}
void ALARM_handler_6_112(signed int aid){
	alarm_info[2].next_alarm_tick = 45; 
}
void check_property_36_56(){
}
void is_active_obj_exists_32_57(){
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
void postjob_35_57(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_57();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_113(aid);
	aid = 2; 
	ALARM_handler_6_114(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_57(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_113(signed int aid){
	alarm_info[1].next_alarm_tick = 4; 
}
void ALARM_handler_6_114(signed int aid){
	alarm_info[2].next_alarm_tick = 44; 
}
void check_property_36_57(){
}
void is_active_obj_exists_32_58(){
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
void postjob_35_58(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_58();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_115(aid);
	aid = 2; 
	ALARM_handler_6_116(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_58(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_115(signed int aid){
	alarm_info[1].next_alarm_tick = 3; 
}
void ALARM_handler_6_116(signed int aid){
	alarm_info[2].next_alarm_tick = 43; 
}
void check_property_36_58(){
}
void is_active_obj_exists_32_59(){
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
void postjob_35_59(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_59();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_117(aid);
	aid = 2; 
	ALARM_handler_6_118(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_59(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_117(signed int aid){
	alarm_info[1].next_alarm_tick = 2; 
}
void ALARM_handler_6_118(signed int aid){
	alarm_info[2].next_alarm_tick = 42; 
}
void check_property_36_59(){
}
void is_active_obj_exists_32_60(){
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
void postjob_35_60(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_60();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_119(aid);
	aid = 2; 
	ALARM_handler_6_120(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_60(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_119(signed int aid){
	alarm_info[1].next_alarm_tick = 1; 
}
void ALARM_handler_6_120(signed int aid){
	alarm_info[2].next_alarm_tick = 41; 
}
void check_property_36_60(){
}
void is_active_obj_exists_32_61(){
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
void postjob_35_61(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_61();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_121(aid);
	aid = 2; 
	ALARM_handler_6_122(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_61(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_121(signed int aid){
	alarm_info[1].next_alarm_tick = 0; 
	alarm_info[1].next_alarm_tick = 30; 
	alarm_state[1] = 2; 
	ActivateTask_Common_60_5(alarm_info[(signed long int)(aid)].param1);
	alarm_state[1] = 1; 
}
void ActivateTask_Common_60_5(unsigned char reftask){
	signed int i;
	i = 0; 
	Event_Table[0].task_alloc[1] = 0; 
	i = 1; 
	Event_Table[1].task_alloc[1] = 0; 
	i = 2; 
	Event_Table[2].task_alloc[1] = 0; 
	i = 3; 
	task_dyn_info[1].act_cnt = 1; 
	push_task_into_readyQ_37_4(reftask, task_static_info[(signed long int)(reftask)].prio, 0, (push_type)(0));
	reschedule_38_4((API)(0), current_tid);
}
void push_task_into_readyQ_37_4(unsigned char t, unsigned char p, signed int pc, push_type pushkind){
	task_state[1] = 1; 
	k = 2; 
	readyQ[3][2].tid = 1; 
	rear[3] = 3; 
	size[3] = 1; 
	wholesize = 1; 
	max_prio = 3; 
}
void reschedule_38_4(API reschedule__api, unsigned char tid){
	push_task_into_readyQ_93_4(tid, task_dyn_info[(signed long int)(tid)].dyn_prio, current_pc[(signed long int)(tid)], (push_type)(1));
	get_task_from_readyQ_94_4();
}
void push_task_into_readyQ_93_4(unsigned char t, unsigned char p, signed int pc, push_type pushkind){
	task_state[0] = 1; 
	front[0] = 3; 
	k = 3; 
	readyQ[0][3].tid = 0; 
	size[0] = 1; 
	wholesize = 2; 
}
void get_task_from_readyQ_94_4(){
	current_tid = 1; 
	current_prio = 3; 
	readyQ[3][2].tid = 0; 
	front[3] = 3; 
	size[3] = 0; 
	wholesize = 1; 
	max_prio = 3; 
	max_prio = 2; 
	max_prio = 1; 
	max_prio = 0; 
	task_state[1] = 2; 
}
void ALARM_handler_6_122(signed int aid){
	alarm_info[2].next_alarm_tick = 40; 
}
void check_property_36_61(){
}
void is_active_obj_exists_32_62(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void Func_AcquisitionTask_33_6(){
	current_pc[1] = 1; 
}
void postjob_35_62(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_62();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_123(aid);
	aid = 2; 
	ALARM_handler_6_124(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_62(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_123(signed int aid){
	alarm_info[1].next_alarm_tick = 29; 
}
void ALARM_handler_6_124(signed int aid){
	alarm_info[2].next_alarm_tick = 39; 
}
void check_property_36_62(){
}
void is_active_obj_exists_32_63(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void Func_AcquisitionTask_33_7(){
	__CPROVER_assume((((signed int)(tracking_enabled) == 0)));
	request_15_2((U8)(2));
	rectindex = getbiggestrect((U8)(0), -1);
	__CPROVER_assume(!(!((rectindex >= 0))));
	getArea_17_2((U8)(rectindex));
	area = __iv__return_expr_getArea;
	median_filter_18_2(area);
	area = __iv__return_expr_median_filter;
	fisqrt_19_2(area);
	acq_size = __iv__return_expr_fisqrt;
	getX_20_2((U8)(rectindex));
	x = __iv__return_expr_getX;
	GetResource_21_2((unsigned char)(1));
	current_pc[1] = 2; 
}
void request_15_2(U8 port_id){
	signed int return_value_i2c_busy;
	i2c_busy_2_2((signed int)(port_id));
	return_value_i2c_busy = 0; 
	i2c_start_transaction_3_2((signed int)(port_id), 1u, 0x42, 1, nxtcamdata, 41u, 0);
}
void i2c_busy_2_2(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 0; 
	__iv__return_expr_i2c_busy = 0; 
}
void i2c_start_transaction_3_2(signed int port, unsigned int address, signed int internal_address, signed int n_internal_address_bytes, unsigned char* i2c_start_transaction__data, unsigned int nbytes, signed int write){
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
void getArea_17_2(U8 getArea__rectindex){
	signed int return_value_getWidth;
	getWidth_26_2(getArea__rectindex);
	return_value_getWidth = __iv__return_expr_getWidth;
	signed int return_value_getHeight;
	getHeight_27_2(getArea__rectindex);
	return_value_getHeight = __iv__return_expr_getHeight;
	__iv__return_expr_getArea = (return_value_getWidth * return_value_getHeight);
}
void getWidth_26_2(U8 getWidth__rectindex){
	signed int xul;
	xul = (signed int)(nxtcamdata[(signed long int)((((5 * (signed int)(getWidth__rectindex)) + 1) + 1))]);
	signed int xlr;
	xlr = (signed int)(nxtcamdata[(signed long int)((((5 * (signed int)(getWidth__rectindex)) + 1) + 3))]);
	__iv__return_expr_getWidth = ((xlr - xul) >= 0) ? (xlr - xul) : -((xlr - xul));
}
void getHeight_27_2(U8 getHeight__rectindex){
	signed int yul;
	yul = (signed int)(nxtcamdata[(signed long int)((((5 * (signed int)(getHeight__rectindex)) + 1) + 2))]);
	signed int ylr;
	ylr = (signed int)(nxtcamdata[(signed long int)((((5 * (signed int)(getHeight__rectindex)) + 1) + 4))]);
	__iv__return_expr_getHeight = ((ylr - yul) >= 0) ? (ylr - yul) : -((ylr - yul));
}
void median_filter_18_2(data_t datum){
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
	i = 0; 
	__CPROVER_assume((!((scan->point == datpoint))));
	__CPROVER_assume(!((scan->value >= datum)));
	datpoint->point = scanold->point;
	scanold->point = datpoint;
	datum = 0; 
	median = median->point;
	__CPROVER_assume(((scan == &small)));
	__iv__return_expr_median_filter = median->value;
}
void fisqrt_19_2(signed int val){
	signed int cnt;
	cnt = 0; 
	signed int t;
	t = val;
	__CPROVER_assume(!((t == 0)));
	cnt = 1; 
	t = (t >> 1);
	__CPROVER_assume(!((t == 0)));
	cnt = 2; 
	t = (t >> 1);
	__CPROVER_assume(!((t == 0)));
	cnt = 3; 
	t = (t >> 1);
	__CPROVER_assume(!((t == 0)));
	cnt = 4; 
	t = (t >> 1);
	__CPROVER_assume(!((t == 0)));
	cnt = 5; 
	t = (t >> 1);
	__CPROVER_assume(!((t == 0)));
	cnt = 6; 
	t = (t >> 1);
	__CPROVER_assume(!((t == 0)));
	cnt = 7; 
	t = (t >> 1);
	__CPROVER_assume(!((t == 0)));
	cnt = 8; 
	t = (t >> 1);
	__CPROVER_assume(!((t == 0)));
	cnt = 9; 
	t = (t >> 1);
	__CPROVER_assume(!((t == 0)));
	cnt = 10; 
	t = (t >> 1);
	__CPROVER_assume(!((t == 0)));
	cnt = 11; 
	t = (t >> 1);
	__CPROVER_assume(!((t == 0)));
	cnt = 12; 
	t = (t >> 1);
	__CPROVER_assume(!((t == 0)));
	cnt = 13; 
	t = (t >> 1);
	__CPROVER_assume(!((t == 0)));
	cnt = 14; 
	t = (t >> 1);
	__CPROVER_assume(((t == 0)));
	t = (val >> (cnt - 6));
	__iv__return_expr_fisqrt = ((ftbl[(signed long int)(cnt)] * ftbl2[(signed long int)((t & 31))]) >> 15);
}
void getX_20_2(U8 getX__rectindex){
	signed int xul;
	xul = (signed int)(nxtcamdata[(signed long int)((((5 * (signed int)(getX__rectindex)) + 1) + 1))]);
	signed int xlr;
	xlr = (signed int)(nxtcamdata[(signed long int)((((5 * (signed int)(getX__rectindex)) + 1) + 3))]);
	__iv__return_expr_getX = ((xlr + xul) / 2);
}
void GetResource_21_2(unsigned char resid){
	GetResource_Common_57_4(resid);
}
void GetResource_Common_57_4(unsigned char resid){
	signed int return_value_is_alloc;
	__CPROVER_bool tmp_if_expr;
	is_alloc_53_4(resid);
	return_value_is_alloc = 0; 
	tmp_if_expr = 0; 
	Resource_Table[1].alloc = 1; 
	task_dyn_info[1].dyn_prio = 4; 
}
void is_alloc_53_4(unsigned char res){
	__iv__return_expr_is_alloc = 0; 
}
void postjob_35_63(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_63();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_125(aid);
	aid = 2; 
	ALARM_handler_6_126(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_63(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_125(signed int aid){
	alarm_info[1].next_alarm_tick = 28; 
}
void ALARM_handler_6_126(signed int aid){
	alarm_info[2].next_alarm_tick = 38; 
}
void check_property_36_63(){
}
void is_active_obj_exists_32_64(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void Func_AcquisitionTask_33_8(){
	objData.position = x;
	objData.size = acq_size;
	ReleaseResource_22_2((unsigned char)(1));
	current_pc[1] = 3; 
}
void ReleaseResource_22_2(unsigned char resid){
	ReleaseResource_Common_55_4(resid);
}
void ReleaseResource_Common_55_4(unsigned char resid){
	unsigned char i;
	signed int return_value_is_alloc_0;
	is_alloc_28_4(resid);
	return_value_is_alloc_0 = 1; 
	Resource_Table[1].alloc = 0; 
	current_prio = 3; 
	i = 0; 
	signed int return_value_is_alloc;
	is_alloc_29_10(i);
	return_value_is_alloc = 0; 
	i = 1; 
	is_alloc_29_11(i);
	return_value_is_alloc = 0; 
	i = 2; 
	is_alloc_29_12(i);
	return_value_is_alloc = 0; 
	i = 3; 
	task_dyn_info[1].dyn_prio = 3; 
	reschedule_30_4((API)(5), current_tid);
}
void is_alloc_28_4(unsigned char res){
	__iv__return_expr_is_alloc = 1; 
}
void is_alloc_29_10(unsigned char res){
	__iv__return_expr_is_alloc = 0; 
}
void is_alloc_29_11(unsigned char res){
	__iv__return_expr_is_alloc = 0; 
}
void is_alloc_29_12(unsigned char res){
	__iv__return_expr_is_alloc = 0; 
}
void reschedule_30_4(API reschedule__api, unsigned char tid){
}
void postjob_35_64(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_64();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_127(aid);
	aid = 2; 
	ALARM_handler_6_128(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_64(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_127(signed int aid){
	alarm_info[1].next_alarm_tick = 27; 
}
void ALARM_handler_6_128(signed int aid){
	alarm_info[2].next_alarm_tick = 37; 
}
void check_property_36_64(){
}
void is_active_obj_exists_32_65(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void Func_AcquisitionTask_33_9(){
	TerminateTask_23_3();
	current_pc[1] = 4; 
}
void TerminateTask_23_3(){
	TerminateTask_Common_44_5();
}
void TerminateTask_Common_44_5(){
	task_dyn_info[1].act_cnt = 0; 
	task_state[1] = 0; 
	reschedule_78_5((API)(1), current_tid);
}
void reschedule_78_5(API reschedule__api, unsigned char tid){
	get_task_from_readyQ_92_5();
}
void get_task_from_readyQ_92_5(){
	current_tid = 0; 
	current_prio = 0; 
	readyQ[0][3].tid = 0; 
	front[0] = 0; 
	size[0] = 0; 
	wholesize = 0; 
	max_prio = 0; 
	task_state[0] = 2; 
}
void postjob_35_65(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_65();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_129(aid);
	aid = 2; 
	ALARM_handler_6_130(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_65(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_129(signed int aid){
	alarm_info[1].next_alarm_tick = 26; 
}
void ALARM_handler_6_130(signed int aid){
	alarm_info[2].next_alarm_tick = 36; 
}
void check_property_36_65(){
}
void is_active_obj_exists_32_66(){
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
void postjob_35_66(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_66();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_131(aid);
	aid = 2; 
	ALARM_handler_6_132(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_66(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_131(signed int aid){
	alarm_info[1].next_alarm_tick = 25; 
}
void ALARM_handler_6_132(signed int aid){
	alarm_info[2].next_alarm_tick = 35; 
}
void check_property_36_66(){
}
void is_active_obj_exists_32_67(){
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
void postjob_35_67(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_67();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_133(aid);
	aid = 2; 
	ALARM_handler_6_134(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_67(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_133(signed int aid){
	alarm_info[1].next_alarm_tick = 24; 
}
void ALARM_handler_6_134(signed int aid){
	alarm_info[2].next_alarm_tick = 34; 
}
void check_property_36_67(){
}
void is_active_obj_exists_32_68(){
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
void postjob_35_68(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_68();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_135(aid);
	aid = 2; 
	ALARM_handler_6_136(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_68(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_135(signed int aid){
	alarm_info[1].next_alarm_tick = 23; 
}
void ALARM_handler_6_136(signed int aid){
	alarm_info[2].next_alarm_tick = 33; 
}
void check_property_36_68(){
}
void is_active_obj_exists_32_69(){
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
void postjob_35_69(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_69();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_137(aid);
	aid = 2; 
	ALARM_handler_6_138(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_69(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_137(signed int aid){
	alarm_info[1].next_alarm_tick = 22; 
}
void ALARM_handler_6_138(signed int aid){
	alarm_info[2].next_alarm_tick = 32; 
}
void check_property_36_69(){
}
void is_active_obj_exists_32_70(){
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
void postjob_35_70(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_70();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_139(aid);
	aid = 2; 
	ALARM_handler_6_140(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_70(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_139(signed int aid){
	alarm_info[1].next_alarm_tick = 21; 
}
void ALARM_handler_6_140(signed int aid){
	alarm_info[2].next_alarm_tick = 31; 
}
void check_property_36_70(){
}
void is_active_obj_exists_32_71(){
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
void postjob_35_71(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_71();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_141(aid);
	aid = 2; 
	ALARM_handler_6_142(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_71(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_141(signed int aid){
	alarm_info[1].next_alarm_tick = 20; 
}
void ALARM_handler_6_142(signed int aid){
	alarm_info[2].next_alarm_tick = 30; 
}
void check_property_36_71(){
}
void is_active_obj_exists_32_72(){
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
void postjob_35_72(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_72();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_143(aid);
	aid = 2; 
	ALARM_handler_6_144(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_72(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_143(signed int aid){
	alarm_info[1].next_alarm_tick = 19; 
}
void ALARM_handler_6_144(signed int aid){
	alarm_info[2].next_alarm_tick = 29; 
}
void check_property_36_72(){
}
void is_active_obj_exists_32_73(){
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
void postjob_35_73(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_73();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_145(aid);
	aid = 2; 
	ALARM_handler_6_146(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_73(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_145(signed int aid){
	alarm_info[1].next_alarm_tick = 18; 
}
void ALARM_handler_6_146(signed int aid){
	alarm_info[2].next_alarm_tick = 28; 
}
void check_property_36_73(){
}
void is_active_obj_exists_32_74(){
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
void postjob_35_74(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_74();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_147(aid);
	aid = 2; 
	ALARM_handler_6_148(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_74(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_147(signed int aid){
	alarm_info[1].next_alarm_tick = 17; 
}
void ALARM_handler_6_148(signed int aid){
	alarm_info[2].next_alarm_tick = 27; 
}
void check_property_36_74(){
}
void is_active_obj_exists_32_75(){
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
void postjob_35_75(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_75();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_149(aid);
	aid = 2; 
	ALARM_handler_6_150(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_75(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_149(signed int aid){
	alarm_info[1].next_alarm_tick = 16; 
}
void ALARM_handler_6_150(signed int aid){
	alarm_info[2].next_alarm_tick = 26; 
}
void check_property_36_75(){
}
void is_active_obj_exists_32_76(){
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
void postjob_35_76(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_76();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_151(aid);
	aid = 2; 
	ALARM_handler_6_152(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_76(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_151(signed int aid){
	alarm_info[1].next_alarm_tick = 15; 
}
void ALARM_handler_6_152(signed int aid){
	alarm_info[2].next_alarm_tick = 25; 
}
void check_property_36_76(){
}
void is_active_obj_exists_32_77(){
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
void postjob_35_77(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_77();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_153(aid);
	aid = 2; 
	ALARM_handler_6_154(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_77(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_153(signed int aid){
	alarm_info[1].next_alarm_tick = 14; 
}
void ALARM_handler_6_154(signed int aid){
	alarm_info[2].next_alarm_tick = 24; 
}
void check_property_36_77(){
}
void is_active_obj_exists_32_78(){
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
void postjob_35_78(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_78();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_155(aid);
	aid = 2; 
	ALARM_handler_6_156(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_78(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_155(signed int aid){
	alarm_info[1].next_alarm_tick = 13; 
}
void ALARM_handler_6_156(signed int aid){
	alarm_info[2].next_alarm_tick = 23; 
}
void check_property_36_78(){
}
void is_active_obj_exists_32_79(){
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
void postjob_35_79(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_79();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_157(aid);
	aid = 2; 
	ALARM_handler_6_158(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_79(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_157(signed int aid){
	alarm_info[1].next_alarm_tick = 12; 
}
void ALARM_handler_6_158(signed int aid){
	alarm_info[2].next_alarm_tick = 22; 
}
void check_property_36_79(){
}
void is_active_obj_exists_32_80(){
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
void postjob_35_80(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_80();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_159(aid);
	aid = 2; 
	ALARM_handler_6_160(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_80(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_159(signed int aid){
	alarm_info[1].next_alarm_tick = 11; 
}
void ALARM_handler_6_160(signed int aid){
	alarm_info[2].next_alarm_tick = 21; 
}
void check_property_36_80(){
}
void is_active_obj_exists_32_81(){
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
void postjob_35_81(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_81();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_161(aid);
	aid = 2; 
	ALARM_handler_6_162(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_81(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_161(signed int aid){
	alarm_info[1].next_alarm_tick = 10; 
}
void ALARM_handler_6_162(signed int aid){
	alarm_info[2].next_alarm_tick = 20; 
}
void check_property_36_81(){
}
void is_active_obj_exists_32_82(){
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
void postjob_35_82(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_82();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_163(aid);
	aid = 2; 
	ALARM_handler_6_164(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_82(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_163(signed int aid){
	alarm_info[1].next_alarm_tick = 9; 
}
void ALARM_handler_6_164(signed int aid){
	alarm_info[2].next_alarm_tick = 19; 
}
void check_property_36_82(){
}
void is_active_obj_exists_32_83(){
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
void postjob_35_83(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_83();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_165(aid);
	aid = 2; 
	ALARM_handler_6_166(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_83(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_165(signed int aid){
	alarm_info[1].next_alarm_tick = 8; 
}
void ALARM_handler_6_166(signed int aid){
	alarm_info[2].next_alarm_tick = 18; 
}
void check_property_36_83(){
}
void is_active_obj_exists_32_84(){
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
void postjob_35_84(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_84();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_167(aid);
	aid = 2; 
	ALARM_handler_6_168(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_84(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_167(signed int aid){
	alarm_info[1].next_alarm_tick = 7; 
}
void ALARM_handler_6_168(signed int aid){
	alarm_info[2].next_alarm_tick = 17; 
}
void check_property_36_84(){
}
void is_active_obj_exists_32_85(){
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
void postjob_35_85(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_85();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_169(aid);
	aid = 2; 
	ALARM_handler_6_170(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_85(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_169(signed int aid){
	alarm_info[1].next_alarm_tick = 6; 
}
void ALARM_handler_6_170(signed int aid){
	alarm_info[2].next_alarm_tick = 16; 
}
void check_property_36_85(){
}
void is_active_obj_exists_32_86(){
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
void postjob_35_86(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_86();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_171(aid);
	aid = 2; 
	ALARM_handler_6_172(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_86(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_171(signed int aid){
	alarm_info[1].next_alarm_tick = 5; 
}
void ALARM_handler_6_172(signed int aid){
	alarm_info[2].next_alarm_tick = 15; 
}
void check_property_36_86(){
}
void is_active_obj_exists_32_87(){
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
void postjob_35_87(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_87();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_173(aid);
	aid = 2; 
	ALARM_handler_6_174(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_87(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_173(signed int aid){
	alarm_info[1].next_alarm_tick = 4; 
}
void ALARM_handler_6_174(signed int aid){
	alarm_info[2].next_alarm_tick = 14; 
}
void check_property_36_87(){
}
void is_active_obj_exists_32_88(){
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
void postjob_35_88(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_88();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_175(aid);
	aid = 2; 
	ALARM_handler_6_176(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_88(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_175(signed int aid){
	alarm_info[1].next_alarm_tick = 3; 
}
void ALARM_handler_6_176(signed int aid){
	alarm_info[2].next_alarm_tick = 13; 
}
void check_property_36_88(){
}
void is_active_obj_exists_32_89(){
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
void postjob_35_89(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_89();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_177(aid);
	aid = 2; 
	ALARM_handler_6_178(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_89(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_177(signed int aid){
	alarm_info[1].next_alarm_tick = 2; 
}
void ALARM_handler_6_178(signed int aid){
	alarm_info[2].next_alarm_tick = 12; 
}
void check_property_36_89(){
}
void is_active_obj_exists_32_90(){
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
void postjob_35_90(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_90();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_179(aid);
	aid = 2; 
	ALARM_handler_6_180(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_90(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_179(signed int aid){
	alarm_info[1].next_alarm_tick = 1; 
}
void ALARM_handler_6_180(signed int aid){
	alarm_info[2].next_alarm_tick = 11; 
}
void check_property_36_90(){
}
void is_active_obj_exists_32_91(){
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
void postjob_35_91(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_91();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_181(aid);
	aid = 2; 
	ALARM_handler_6_182(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_91(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_181(signed int aid){
	alarm_info[1].next_alarm_tick = 0; 
	alarm_info[1].next_alarm_tick = 30; 
	alarm_state[1] = 2; 
	ActivateTask_Common_60_6(alarm_info[(signed long int)(aid)].param1);
	alarm_state[1] = 1; 
}
void ActivateTask_Common_60_6(unsigned char reftask){
	signed int i;
	i = 0; 
	Event_Table[0].task_alloc[1] = 0; 
	i = 1; 
	Event_Table[1].task_alloc[1] = 0; 
	i = 2; 
	Event_Table[2].task_alloc[1] = 0; 
	i = 3; 
	task_dyn_info[1].act_cnt = 1; 
	push_task_into_readyQ_37_5(reftask, task_static_info[(signed long int)(reftask)].prio, 0, (push_type)(0));
	reschedule_38_5((API)(0), current_tid);
}
void push_task_into_readyQ_37_5(unsigned char t, unsigned char p, signed int pc, push_type pushkind){
	task_state[1] = 1; 
	k = 3; 
	readyQ[3][3].tid = 1; 
	rear[3] = 0; 
	size[3] = 1; 
	wholesize = 1; 
	max_prio = 3; 
}
void reschedule_38_5(API reschedule__api, unsigned char tid){
	push_task_into_readyQ_93_5(tid, task_dyn_info[(signed long int)(tid)].dyn_prio, current_pc[(signed long int)(tid)], (push_type)(1));
	get_task_from_readyQ_94_5();
}
void push_task_into_readyQ_93_5(unsigned char t, unsigned char p, signed int pc, push_type pushkind){
	task_state[0] = 1; 
	front[0] = 3; 
	k = 3; 
	readyQ[0][3].tid = 0; 
	size[0] = 1; 
	wholesize = 2; 
}
void get_task_from_readyQ_94_5(){
	current_tid = 1; 
	current_prio = 3; 
	readyQ[3][3].tid = 0; 
	front[3] = 0; 
	size[3] = 0; 
	wholesize = 1; 
	max_prio = 3; 
	max_prio = 2; 
	max_prio = 1; 
	max_prio = 0; 
	task_state[1] = 2; 
}
void ALARM_handler_6_182(signed int aid){
	alarm_info[2].next_alarm_tick = 10; 
}
void check_property_36_91(){
}
void is_active_obj_exists_32_92(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void Func_AcquisitionTask_33_10(){
	current_pc[1] = 1; 
}
void postjob_35_92(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_92();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_183(aid);
	aid = 2; 
	ALARM_handler_6_184(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_92(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_183(signed int aid){
	alarm_info[1].next_alarm_tick = 29; 
}
void ALARM_handler_6_184(signed int aid){
	alarm_info[2].next_alarm_tick = 9; 
}
void check_property_36_92(){
}
void is_active_obj_exists_32_93(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void Func_AcquisitionTask_33_11(){
	__CPROVER_assume((((signed int)(tracking_enabled) == 0)));
	request_15_3((U8)(2));
	rectindex = getbiggestrect((U8)(0), -1);
	__CPROVER_assume(!(!((rectindex >= 0))));
	getArea_17_3((U8)(rectindex));
	area = __iv__return_expr_getArea;
	median_filter_18_3(area);
	area = __iv__return_expr_median_filter;
	fisqrt_19_3(area);
	acq_size = __iv__return_expr_fisqrt;
	getX_20_3((U8)(rectindex));
	x = __iv__return_expr_getX;
	GetResource_21_3((unsigned char)(1));
	current_pc[1] = 2; 
}
void request_15_3(U8 port_id){
	signed int return_value_i2c_busy;
	i2c_busy_2_3((signed int)(port_id));
	return_value_i2c_busy = 0; 
	i2c_start_transaction_3_3((signed int)(port_id), 1u, 0x42, 1, nxtcamdata, 41u, 0);
}
void i2c_busy_2_3(signed int port){
	signed int i2c_busy_ret;
	i2c_busy_ret = 0; 
	__iv__return_expr_i2c_busy = 0; 
}
void i2c_start_transaction_3_3(signed int port, unsigned int address, signed int internal_address, signed int n_internal_address_bytes, unsigned char* i2c_start_transaction__data, unsigned int nbytes, signed int write){
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
void getArea_17_3(U8 getArea__rectindex){
	signed int return_value_getWidth;
	getWidth_26_3(getArea__rectindex);
	return_value_getWidth = __iv__return_expr_getWidth;
	signed int return_value_getHeight;
	getHeight_27_3(getArea__rectindex);
	return_value_getHeight = __iv__return_expr_getHeight;
	__iv__return_expr_getArea = (return_value_getWidth * return_value_getHeight);
}
void getWidth_26_3(U8 getWidth__rectindex){
	signed int xul;
	xul = (signed int)(nxtcamdata[(signed long int)((((5 * (signed int)(getWidth__rectindex)) + 1) + 1))]);
	signed int xlr;
	xlr = (signed int)(nxtcamdata[(signed long int)((((5 * (signed int)(getWidth__rectindex)) + 1) + 3))]);
	__iv__return_expr_getWidth = ((xlr - xul) >= 0) ? (xlr - xul) : -((xlr - xul));
}
void getHeight_27_3(U8 getHeight__rectindex){
	signed int yul;
	yul = (signed int)(nxtcamdata[(signed long int)((((5 * (signed int)(getHeight__rectindex)) + 1) + 2))]);
	signed int ylr;
	ylr = (signed int)(nxtcamdata[(signed long int)((((5 * (signed int)(getHeight__rectindex)) + 1) + 4))]);
	__iv__return_expr_getHeight = ((ylr - yul) >= 0) ? (ylr - yul) : -((ylr - yul));
}
void median_filter_18_3(data_t datum){
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
	i = 0; 
	__CPROVER_assume((!((scan->point == datpoint))));
	__CPROVER_assume(((scan->value >= datum)));
	median = median->point;
	__CPROVER_assume(!((scan == &small)));
	scanold = scan;
	scan = scan->point;
	__CPROVER_assume((!((scan->point == datpoint))));
	__CPROVER_assume(!((scan->value >= datum)));
	datpoint->point = scanold->point;
	scanold->point = datpoint;
	datum = 0; 
	__CPROVER_assume(((scan == &small)));
	__iv__return_expr_median_filter = median->value;
}
void fisqrt_19_3(signed int val){
	signed int cnt;
	cnt = 0; 
	signed int t;
	t = val;
	__CPROVER_assume(!((t == 0)));
	cnt = 1; 
	t = (t >> 1);
	__CPROVER_assume(!((t == 0)));
	cnt = 2; 
	t = (t >> 1);
	__CPROVER_assume(!((t == 0)));
	cnt = 3; 
	t = (t >> 1);
	__CPROVER_assume(!((t == 0)));
	cnt = 4; 
	t = (t >> 1);
	__CPROVER_assume(!((t == 0)));
	cnt = 5; 
	t = (t >> 1);
	__CPROVER_assume(!((t == 0)));
	cnt = 6; 
	t = (t >> 1);
	__CPROVER_assume(!((t == 0)));
	cnt = 7; 
	t = (t >> 1);
	__CPROVER_assume(!((t == 0)));
	cnt = 8; 
	t = (t >> 1);
	__CPROVER_assume(!((t == 0)));
	cnt = 9; 
	t = (t >> 1);
	__CPROVER_assume(!((t == 0)));
	cnt = 10; 
	t = (t >> 1);
	__CPROVER_assume(!((t == 0)));
	cnt = 11; 
	t = (t >> 1);
	__CPROVER_assume(!((t == 0)));
	cnt = 12; 
	t = (t >> 1);
	__CPROVER_assume(!((t == 0)));
	cnt = 13; 
	t = (t >> 1);
	__CPROVER_assume(!((t == 0)));
	cnt = 14; 
	t = (t >> 1);
	__CPROVER_assume(((t == 0)));
	t = (val >> (cnt - 6));
	__iv__return_expr_fisqrt = ((ftbl[(signed long int)(cnt)] * ftbl2[(signed long int)((t & 31))]) >> 15);
}
void getX_20_3(U8 getX__rectindex){
	signed int xul;
	xul = (signed int)(nxtcamdata[(signed long int)((((5 * (signed int)(getX__rectindex)) + 1) + 1))]);
	signed int xlr;
	xlr = (signed int)(nxtcamdata[(signed long int)((((5 * (signed int)(getX__rectindex)) + 1) + 3))]);
	__iv__return_expr_getX = ((xlr + xul) / 2);
}
void GetResource_21_3(unsigned char resid){
	GetResource_Common_57_5(resid);
}
void GetResource_Common_57_5(unsigned char resid){
	signed int return_value_is_alloc;
	__CPROVER_bool tmp_if_expr;
	is_alloc_53_5(resid);
	return_value_is_alloc = 0; 
	tmp_if_expr = 0; 
	Resource_Table[1].alloc = 1; 
	task_dyn_info[1].dyn_prio = 4; 
}
void is_alloc_53_5(unsigned char res){
	__iv__return_expr_is_alloc = 0; 
}
void postjob_35_93(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_93();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_185(aid);
	aid = 2; 
	ALARM_handler_6_186(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_93(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_185(signed int aid){
	alarm_info[1].next_alarm_tick = 28; 
}
void ALARM_handler_6_186(signed int aid){
	alarm_info[2].next_alarm_tick = 8; 
}
void check_property_36_93(){
}
void is_active_obj_exists_32_94(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void Func_AcquisitionTask_33_12(){
	objData.position = x;
	objData.size = acq_size;
	ReleaseResource_22_3((unsigned char)(1));
	current_pc[1] = 3; 
}
void ReleaseResource_22_3(unsigned char resid){
	ReleaseResource_Common_55_5(resid);
}
void ReleaseResource_Common_55_5(unsigned char resid){
	unsigned char i;
	signed int return_value_is_alloc_0;
	is_alloc_28_5(resid);
	return_value_is_alloc_0 = 1; 
	Resource_Table[1].alloc = 0; 
	current_prio = 3; 
	i = 0; 
	signed int return_value_is_alloc;
	is_alloc_29_13(i);
	return_value_is_alloc = 0; 
	i = 1; 
	is_alloc_29_14(i);
	return_value_is_alloc = 0; 
	i = 2; 
	is_alloc_29_15(i);
	return_value_is_alloc = 0; 
	i = 3; 
	task_dyn_info[1].dyn_prio = 3; 
	reschedule_30_5((API)(5), current_tid);
}
void is_alloc_28_5(unsigned char res){
	__iv__return_expr_is_alloc = 1; 
}
void is_alloc_29_13(unsigned char res){
	__iv__return_expr_is_alloc = 0; 
}
void is_alloc_29_14(unsigned char res){
	__iv__return_expr_is_alloc = 0; 
}
void is_alloc_29_15(unsigned char res){
	__iv__return_expr_is_alloc = 0; 
}
void reschedule_30_5(API reschedule__api, unsigned char tid){
}
void postjob_35_94(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_94();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_187(aid);
	aid = 2; 
	ALARM_handler_6_188(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_94(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_187(signed int aid){
	alarm_info[1].next_alarm_tick = 27; 
}
void ALARM_handler_6_188(signed int aid){
	alarm_info[2].next_alarm_tick = 7; 
}
void check_property_36_94(){
}
void is_active_obj_exists_32_95(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void Func_AcquisitionTask_33_13(){
	TerminateTask_23_4();
	current_pc[1] = 4; 
}
void TerminateTask_23_4(){
	TerminateTask_Common_44_6();
}
void TerminateTask_Common_44_6(){
	task_dyn_info[1].act_cnt = 0; 
	task_state[1] = 0; 
	reschedule_78_6((API)(1), current_tid);
}
void reschedule_78_6(API reschedule__api, unsigned char tid){
	get_task_from_readyQ_92_6();
}
void get_task_from_readyQ_92_6(){
	current_tid = 0; 
	current_prio = 0; 
	readyQ[0][3].tid = 0; 
	front[0] = 0; 
	size[0] = 0; 
	wholesize = 0; 
	max_prio = 0; 
	task_state[0] = 2; 
}
void postjob_35_95(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_95();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_189(aid);
	aid = 2; 
	ALARM_handler_6_190(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_95(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_189(signed int aid){
	alarm_info[1].next_alarm_tick = 26; 
}
void ALARM_handler_6_190(signed int aid){
	alarm_info[2].next_alarm_tick = 6; 
}
void check_property_36_95(){
}
void is_active_obj_exists_32_96(){
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
void postjob_35_96(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_96();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_191(aid);
	aid = 2; 
	ALARM_handler_6_192(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_96(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_191(signed int aid){
	alarm_info[1].next_alarm_tick = 25; 
}
void ALARM_handler_6_192(signed int aid){
	alarm_info[2].next_alarm_tick = 5; 
}
void check_property_36_96(){
}
void is_active_obj_exists_32_97(){
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
void postjob_35_97(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_97();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_193(aid);
	aid = 2; 
	ALARM_handler_6_194(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_97(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_193(signed int aid){
	alarm_info[1].next_alarm_tick = 24; 
}
void ALARM_handler_6_194(signed int aid){
	alarm_info[2].next_alarm_tick = 4; 
}
void check_property_36_97(){
}
void is_active_obj_exists_32_98(){
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
void postjob_35_98(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_98();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_195(aid);
	aid = 2; 
	ALARM_handler_6_196(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_98(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_195(signed int aid){
	alarm_info[1].next_alarm_tick = 23; 
}
void ALARM_handler_6_196(signed int aid){
	alarm_info[2].next_alarm_tick = 3; 
}
void check_property_36_98(){
}
void is_active_obj_exists_32_99(){
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
void postjob_35_99(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_99();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_197(aid);
	aid = 2; 
	ALARM_handler_6_198(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_99(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_197(signed int aid){
	alarm_info[1].next_alarm_tick = 22; 
}
void ALARM_handler_6_198(signed int aid){
	alarm_info[2].next_alarm_tick = 2; 
}
void check_property_36_99(){
}
void is_active_obj_exists_32_100(){
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
void postjob_35_100(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_100();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_199(aid);
	aid = 2; 
	ALARM_handler_6_200(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_100(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_199(signed int aid){
	alarm_info[1].next_alarm_tick = 21; 
}
void ALARM_handler_6_200(signed int aid){
	alarm_info[2].next_alarm_tick = 1; 
}
void check_property_36_100(){
}
void is_active_obj_exists_32_101(){
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
void postjob_35_101(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_101();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_201(aid);
	aid = 2; 
	ALARM_handler_6_202(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_101(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_201(signed int aid){
	alarm_info[1].next_alarm_tick = 20; 
}
void ALARM_handler_6_202(signed int aid){
	alarm_info[2].next_alarm_tick = 0; 
	alarm_info[2].next_alarm_tick = 50; 
	alarm_state[2] = 2; 
	ActivateTask_Common_60_7(alarm_info[(signed long int)(aid)].param1);
	alarm_state[2] = 1; 
}
void ActivateTask_Common_60_7(unsigned char reftask){
	signed int i;
	i = 0; 
	Event_Table[0].task_alloc[2] = 0; 
	i = 1; 
	Event_Table[1].task_alloc[2] = 0; 
	i = 2; 
	Event_Table[2].task_alloc[2] = 0; 
	i = 3; 
	task_dyn_info[2].act_cnt = 1; 
	push_task_into_readyQ_37_6(reftask, task_static_info[(signed long int)(reftask)].prio, 0, (push_type)(0));
	reschedule_38_6((API)(0), current_tid);
}
void push_task_into_readyQ_37_6(unsigned char t, unsigned char p, signed int pc, push_type pushkind){
	task_state[2] = 1; 
	k = 2; 
	readyQ[2][2].tid = 2; 
	rear[2] = 3; 
	size[2] = 1; 
	wholesize = 1; 
	max_prio = 2; 
}
void reschedule_38_6(API reschedule__api, unsigned char tid){
	push_task_into_readyQ_93_6(tid, task_dyn_info[(signed long int)(tid)].dyn_prio, current_pc[(signed long int)(tid)], (push_type)(1));
	get_task_from_readyQ_94_6();
}
void push_task_into_readyQ_93_6(unsigned char t, unsigned char p, signed int pc, push_type pushkind){
	task_state[0] = 1; 
	front[0] = 3; 
	k = 3; 
	readyQ[0][3].tid = 0; 
	size[0] = 1; 
	wholesize = 2; 
}
void get_task_from_readyQ_94_6(){
	current_tid = 2; 
	current_prio = 2; 
	readyQ[2][2].tid = 0; 
	front[2] = 3; 
	size[2] = 0; 
	wholesize = 1; 
	max_prio = 2; 
	max_prio = 1; 
	max_prio = 0; 
	task_state[2] = 2; 
}
void check_property_36_101(){
}
void is_active_obj_exists_32_102(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 0; 
	i = 2; 
	tmp_if_expr = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void Func_ControlTask_34_8(){
	current_pc[2] = 1; 
}
void postjob_35_102(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_102();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_203(aid);
	aid = 2; 
	ALARM_handler_6_204(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_102(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_203(signed int aid){
	alarm_info[1].next_alarm_tick = 19; 
}
void ALARM_handler_6_204(signed int aid){
	alarm_info[2].next_alarm_tick = 49; 
}
void check_property_36_102(){
}
void is_active_obj_exists_32_103(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 0; 
	i = 2; 
	tmp_if_expr = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void Func_ControlTask_34_9(){
	GetResource_62_3((unsigned char)(1));
	current_pc[2] = 2; 
}
void GetResource_62_3(unsigned char resid){
	GetResource_Common_57_6(resid);
}
void GetResource_Common_57_6(unsigned char resid){
	signed int return_value_is_alloc;
	__CPROVER_bool tmp_if_expr;
	is_alloc_53_6(resid);
	return_value_is_alloc = 0; 
	tmp_if_expr = 0; 
	Resource_Table[1].alloc = 2; 
	task_dyn_info[2].dyn_prio = 4; 
}
void is_alloc_53_6(unsigned char res){
	__iv__return_expr_is_alloc = 0; 
}
void postjob_35_103(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_103();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_205(aid);
	aid = 2; 
	ALARM_handler_6_206(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_103(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_205(signed int aid){
	alarm_info[1].next_alarm_tick = 18; 
}
void ALARM_handler_6_206(signed int aid){
	alarm_info[2].next_alarm_tick = 48; 
}
void check_property_36_103(){
}
void is_active_obj_exists_32_104(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 0; 
	i = 2; 
	tmp_if_expr = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void Func_ControlTask_34_10(){
	data = objData;
	ReleaseResource_63_3((unsigned char)(1));
	current_pc[2] = 3; 
}
void ReleaseResource_63_3(unsigned char resid){
	ReleaseResource_Common_55_6(resid);
}
void ReleaseResource_Common_55_6(unsigned char resid){
	unsigned char i;
	signed int return_value_is_alloc_0;
	is_alloc_28_6(resid);
	return_value_is_alloc_0 = 2; 
	Resource_Table[1].alloc = 0; 
	current_prio = 2; 
	i = 0; 
	signed int return_value_is_alloc;
	is_alloc_29_16(i);
	return_value_is_alloc = 0; 
	i = 1; 
	is_alloc_29_17(i);
	return_value_is_alloc = 0; 
	i = 2; 
	is_alloc_29_18(i);
	return_value_is_alloc = 0; 
	i = 3; 
	task_dyn_info[2].dyn_prio = 2; 
	reschedule_30_6((API)(5), current_tid);
}
void is_alloc_28_6(unsigned char res){
	__iv__return_expr_is_alloc = 2; 
}
void is_alloc_29_16(unsigned char res){
	__iv__return_expr_is_alloc = 0; 
}
void is_alloc_29_17(unsigned char res){
	__iv__return_expr_is_alloc = 0; 
}
void is_alloc_29_18(unsigned char res){
	__iv__return_expr_is_alloc = 0; 
}
void reschedule_30_6(API reschedule__api, unsigned char tid){
}
void postjob_35_104(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_104();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_207(aid);
	aid = 2; 
	ALARM_handler_6_208(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_104(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_207(signed int aid){
	alarm_info[1].next_alarm_tick = 17; 
}
void ALARM_handler_6_208(signed int aid){
	alarm_info[2].next_alarm_tick = 47; 
}
void check_property_36_104(){
}
void is_active_obj_exists_32_105(){
	signed int i;
	i = 1; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 0; 
	i = 2; 
	tmp_if_expr = 1; 
	__iv__return_expr_is_active_obj_exists = 1; 
}
void Func_ControlTask_34_11(){
	ctl_size = data.size;
	position = data.position;
	__CPROVER_assume((!(((ctl_size >= 1) && (position >= 1)))));
	TerminateTask_66_3();
	current_pc[2] = 4; 
}
void TerminateTask_66_3(){
	TerminateTask_Common_44_7();
}
void TerminateTask_Common_44_7(){
	task_dyn_info[2].act_cnt = 0; 
	task_state[2] = 0; 
	reschedule_78_7((API)(1), current_tid);
}
void reschedule_78_7(API reschedule__api, unsigned char tid){
	get_task_from_readyQ_92_7();
}
void get_task_from_readyQ_92_7(){
	current_tid = 0; 
	current_prio = 0; 
	readyQ[0][3].tid = 0; 
	front[0] = 0; 
	size[0] = 0; 
	wholesize = 0; 
	max_prio = 0; 
	task_state[0] = 2; 
}
void postjob_35_105(){
	signed int return_value_is_active_alarm_exists;
	is_active_alarm_exists_5_105();
	return_value_is_active_alarm_exists = 1; 
	signed int aid;
	aid = 1; 
	ALARM_handler_6_209(aid);
	aid = 2; 
	ALARM_handler_6_210(aid);
	aid = 3; 
}
void is_active_alarm_exists_5_105(){
	signed int i;
	i = 1; 
	__iv__return_expr_is_active_alarm_exists = 1; 
}
void ALARM_handler_6_209(signed int aid){
	alarm_info[1].next_alarm_tick = 16; 
}
void ALARM_handler_6_210(signed int aid){
	alarm_info[2].next_alarm_tick = 46; 
}
void check_property_36_105(){
	if (!((!((ctl_size >= 84)) || (new_speed < 0)))) __CPROVER_printf("violated property: Node_20_449");assert((!((ctl_size >= 84)) || (new_speed < 0)));
}
