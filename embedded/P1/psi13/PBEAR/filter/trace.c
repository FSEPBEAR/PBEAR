#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define __CPROVER_assume(a) if (!(a)) exit(0)
typedef _Bool __CPROVER_bool;
FILE *__iv__fp;
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
U8 * __VERIFIER_nondet_U8_star(){ U8 * __iv_temp; if (-1 == fscanf(__iv__fp, "%p", &__iv_temp)) exit(0); return __iv_temp; }
signed int __VERIFIER_nondet_signed_int(){ signed int __iv_temp; if (-1 == fscanf(__iv__fp, "%d", &__iv_temp)) exit(0); return __iv_temp; }
object_data_t __VERIFIER_nondet_object_data_t(){ object_data_t __iv_temp; if (-1 == fscanf(__iv__fp, "%p", &__iv_temp)) exit(0); return __iv_temp; }
task_dynamic_stat task_dyn_info[4l];
unsigned char task_state[4l];
task_static_config task_static_info[4l];
S8 tracking_enabled=(S8)-1;
signed int wholesize;
signed int x;
__CPROVER_bool __iv__branch_expr;
int __iv__return_expr_main;
SINT __iv__return_expr_send_nxtcam_command;
signed int __iv__return_expr_request;
signed int __iv__return_expr_postjob;
signed int __iv__return_expr_i2c_start_transaction;
signed int __iv__return_expr_getbiggestrect;
signed int __iv__return_expr_getArea;
signed int __iv__return_expr_ReleaseResource_Common;
signed int __iv__return_expr_i2c_busy;
data_t __iv__return_expr_median_filter;
signed int __iv__return_expr_is_active_obj_exists;
signed int __iv__return_expr_is_active_alarm_exists;
signed int __iv__return_expr_getX;
signed int __iv__return_expr_getWidth;
signed int __iv__return_expr_getHeight;
signed int __iv__return_expr_fisqrt;
signed int __iv__return_expr_GetResource_Common;
signed int __iv__return_expr_ActivateTask_Common;
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
signed int __iv__return_expr_is_alloc;
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
signed int __iv__return_expr_speedPIDController;
object_data_t __iv__return_expr_getData;
signed int __iv__return_expr_reschedule;
signed int __iv__getbiggestrect_stub(U8 pcolorid, signed int pminarea);
int main(int argc, char* argv[]) {
	__iv__fp = fopen(argv[1], "r");
	printf("_tr_call:StartOS;_tr_call_id:0;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:app_mode=%hhu;\n", (unsigned char)(1));fflush(stdout);
	StartOS((unsigned char)(1));
	printf("_tr_return;\n");fflush(stdout);
}
SINT send_nxtcam_command(U8 port_id, U8 command) {
	printf("_tr_node_id:Node_2_8;_tr_decl:return_value_i2c_busy;\n");fflush(stdout);
	signed int return_value_i2c_busy;
	Node_2_9:;
	printf("_tr_call:i2c_busy;_tr_call_id:2;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:port=%d;\n", (signed int)(port_id));fflush(stdout);
		return_value_i2c_busy = i2c_busy((signed int)(port_id));
	printf("_tr_node_id:Node_2_9;_tr_assign:return_value_i2c_busy=%d;\n", return_value_i2c_busy);fflush(stdout);
	__iv__branch_expr = (return_value_i2c_busy == 0);
	printf("_tr_node_id:Node_2_10;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((return_value_i2c_busy == 0)) goto Node_2_14;
	__iv__branch_expr = (1 != 0);
	printf("_tr_node_id:Node_2_13;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((1 != 0)) goto Node_2_9;
	Node_2_14:;
	unsigned int __iv__index_expr_var0 = (unsigned) (0);
		nxtcambuffer[0] = command;
	printf("_tr_node_id:Node_2_15;_tr_assign:nxtcambuffer[%u]=%hhu;\n", __iv__index_expr_var0, nxtcambuffer[__iv__index_expr_var0]);fflush(stdout);
	printf("_tr_node_id:Node_2_16;_tr_decl:ret;\n");fflush(stdout);
	SINT ret;
	printf("_tr_call:i2c_start_transaction;_tr_call_id:3;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:port=%d;\n", (signed int)(port_id));fflush(stdout);
	printf("_tr_param;_tr_assign:address=%u;\n", 1u);fflush(stdout);
	printf("_tr_param;_tr_assign:internal_address=%d;\n", 0x41);fflush(stdout);
	printf("_tr_param;_tr_assign:n_internal_address_bytes=%d;\n", 1);fflush(stdout);
	printf("_tr_param;_tr_dynamic_assign:i2c_start_transaction__data=nxtcambuffer;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:nbytes=%u;\n", 1u);fflush(stdout);
	printf("_tr_param;_tr_assign:write=%d;\n", 1);fflush(stdout);
		ret = i2c_start_transaction((signed int)(port_id), 1u, 0x41, 1, nxtcambuffer, 1u, 1);
	printf("_tr_node_id:Node_2_21;_tr_assign:ret=%d;\n", ret);fflush(stdout);
	__iv__return_expr_send_nxtcam_command = 	ret;
	printf("_tr_node_id:Node_2_22;_tr_assign:__iv__return_expr_send_nxtcam_command=%d;\n", __iv__return_expr_send_nxtcam_command);fflush(stdout);
	printf("_tr_return;\n");fflush(stdout);
	return __iv__return_expr_send_nxtcam_command;
}
signed int request(U8 port_id) {
	printf("_tr_node_id:Node_3_29;_tr_decl:return_value_i2c_busy;\n");fflush(stdout);
	signed int return_value_i2c_busy;
	printf("_tr_call:i2c_busy;_tr_call_id:4;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:port=%d;\n", (signed int)(port_id));fflush(stdout);
		return_value_i2c_busy = i2c_busy((signed int)(port_id));
	printf("_tr_node_id:Node_3_31;_tr_assign:return_value_i2c_busy=%d;\n", return_value_i2c_busy);fflush(stdout);
	__iv__branch_expr = !((return_value_i2c_busy == 0));
	printf("_tr_node_id:Node_3_33;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!((return_value_i2c_busy == 0))) goto Node_3_35;
	printf("_tr_call:i2c_start_transaction;_tr_call_id:5;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:port=%d;\n", (signed int)(port_id));fflush(stdout);
	printf("_tr_param;_tr_assign:address=%u;\n", 1u);fflush(stdout);
	printf("_tr_param;_tr_assign:internal_address=%d;\n", 0x42);fflush(stdout);
	printf("_tr_param;_tr_assign:n_internal_address_bytes=%d;\n", 1);fflush(stdout);
	printf("_tr_param;_tr_dynamic_assign:i2c_start_transaction__data=nxtcamdata;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:nbytes=%u;\n", 41u);fflush(stdout);
	printf("_tr_param;_tr_assign:write=%d;\n", 0);fflush(stdout);
	i2c_start_transaction((signed int)(port_id), 1u, 0x42, 1, nxtcamdata, 41u, 0);
	Node_3_35:;
	printf("_tr_return;\n");fflush(stdout);
}
signed int postjob() {
	printf("_tr_node_id:Node_4_40;_tr_decl:return_value_is_active_alarm_exists;\n");fflush(stdout);
	signed int return_value_is_active_alarm_exists;
	printf("_tr_call:is_active_alarm_exists;_tr_call_id:7;\n");fflush(stdout);
		return_value_is_active_alarm_exists = is_active_alarm_exists();
	printf("_tr_node_id:Node_4_42;_tr_assign:return_value_is_active_alarm_exists=%d;\n", return_value_is_active_alarm_exists);fflush(stdout);
	__iv__branch_expr = (return_value_is_active_alarm_exists == 0);
	printf("_tr_node_id:Node_4_44;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((return_value_is_active_alarm_exists == 0)) goto Node_4_56;
	printf("_tr_node_id:Node_4_45;_tr_decl:aid;\n");fflush(stdout);
	signed int aid;
		aid = 1;
	printf("_tr_node_id:Node_4_46;_tr_assign:aid=%d;\n", aid);fflush(stdout);
	Node_4_48:;
	__iv__branch_expr = (aid >= 3);
	printf("_tr_node_id:Node_4_48;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((aid >= 3)) goto Node_4_54;
	__iv__branch_expr = (alarm_state[(signed long int)(aid)] == 0);
	printf("_tr_node_id:Node_4_49;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((alarm_state[(signed long int)(aid)] == 0)) goto Node_4_51;
	printf("_tr_call:ALARM_handler;_tr_call_id:8;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:aid=%d;\n", aid);fflush(stdout);
	ALARM_handler(aid);
	Node_4_51:;
		aid = (aid + 1);
	printf("_tr_node_id:Node_4_52;_tr_assign:aid=%d;\n", aid);fflush(stdout);
	goto Node_4_48;
	Node_4_54:;
	Node_4_56:;
	printf("_tr_return;\n");fflush(stdout);
}
signed int i2c_start_transaction(signed int port, unsigned int address, signed int internal_address, signed int n_internal_address_bytes, unsigned char* i2c_start_transaction__data, unsigned int nbytes, signed int write) {
	printf("_tr_node_id:Node_5_61;_tr_decl:i2c_start_transaction_ret;\n");fflush(stdout);
	signed int i2c_start_transaction_ret;
	printf("_tr_system_call:__VERIFIER_nondet_signed_int;_tr_call_id:10;\n");fflush(stdout);
		i2c_start_transaction_ret = __VERIFIER_nondet_signed_int();
	printf("_tr_node_id:Node_5_64;_tr_assign:i2c_start_transaction_ret=%d;\n", i2c_start_transaction_ret);fflush(stdout);
	printf("_tr_node_id:Node_5_65;_tr_decl:i;\n");fflush(stdout);
	signed int i;
	printf("_tr_node_id:Node_5_66;_tr_decl:return_value___VERIFIER_nondet_unsigned_char;\n");fflush(stdout);
	unsigned char return_value___VERIFIER_nondet_unsigned_char;
	printf("_tr_node_id:Node_5_67;_tr_decl:return_value_nondet_unsigned_char;\n");fflush(stdout);
	signed int return_value_nondet_unsigned_char;
	printf("_tr_system_call:__VERIFIER_nondet_signed_int;_tr_call_id:11;\n");fflush(stdout);
		return_value_nondet_unsigned_char = __VERIFIER_nondet_signed_int();
	printf("_tr_node_id:Node_5_68;_tr_assign:return_value_nondet_unsigned_char=%d;\n", return_value_nondet_unsigned_char);fflush(stdout);
		return_value___VERIFIER_nondet_unsigned_char = (unsigned char)(return_value_nondet_unsigned_char);
	printf("_tr_node_id:Node_5_69;_tr_assign:return_value___VERIFIER_nondet_unsigned_char=%hhu;\n", return_value___VERIFIER_nondet_unsigned_char);fflush(stdout);
		i2c_start_transaction__data[0l] = return_value___VERIFIER_nondet_unsigned_char;
	printf("_tr_node_id:Node_5_70;_tr_dynamic_assign:	i2c_start_transaction__data[0l] = return_value___VERIFIER_nondet_unsigned_char;\n");fflush(stdout);
	printf("_tr_system_call:__CPROVER_assume;_tr_call_id:12;\n");fflush(stdout);
	__CPROVER_assume(((signed int)(i2c_start_transaction__data[0l]) <= 8));
		i = 1;
	printf("_tr_node_id:Node_5_72;_tr_assign:i=%d;\n", i);fflush(stdout);
	Node_5_74:;
	__iv__branch_expr = ((unsigned int)(i) >= nbytes);
	printf("_tr_node_id:Node_5_74;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (((unsigned int)(i) >= nbytes)) goto Node_5_84;
	printf("_tr_node_id:Node_5_75;_tr_decl:return_value___VERIFIER_nondet_unsigned_char_0;\n");fflush(stdout);
	unsigned char return_value___VERIFIER_nondet_unsigned_char_0;
	printf("_tr_node_id:Node_5_76;_tr_decl:return_value_nondet_unsigned_char_0;\n");fflush(stdout);
	signed int return_value_nondet_unsigned_char_0;
	printf("_tr_system_call:__VERIFIER_nondet_signed_int;_tr_call_id:13;\n");fflush(stdout);
		return_value_nondet_unsigned_char_0 = __VERIFIER_nondet_signed_int();
	printf("_tr_node_id:Node_5_77;_tr_assign:return_value_nondet_unsigned_char_0=%d;\n", return_value_nondet_unsigned_char_0);fflush(stdout);
		return_value___VERIFIER_nondet_unsigned_char_0 = (unsigned char)(return_value_nondet_unsigned_char_0);
	printf("_tr_node_id:Node_5_78;_tr_assign:return_value___VERIFIER_nondet_unsigned_char_0=%hhu;\n", return_value___VERIFIER_nondet_unsigned_char_0);fflush(stdout);
		i2c_start_transaction__data[(signed long int)(i)] = return_value___VERIFIER_nondet_unsigned_char_0;
	printf("_tr_node_id:Node_5_79;_tr_dynamic_assign:	i2c_start_transaction__data[(signed long int)(i)] = return_value___VERIFIER_nondet_unsigned_char_0;\n");fflush(stdout);
		i = (i + 1);
	printf("_tr_node_id:Node_5_82;_tr_assign:i=%d;\n", i);fflush(stdout);
	goto Node_5_74;
	Node_5_84:;
	__iv__return_expr_i2c_start_transaction = 	i2c_start_transaction_ret;
	printf("_tr_node_id:Node_5_85;_tr_assign:__iv__return_expr_i2c_start_transaction=%d;\n", __iv__return_expr_i2c_start_transaction);fflush(stdout);
	printf("_tr_return;\n");fflush(stdout);
	return __iv__return_expr_i2c_start_transaction;
}
signed int getbiggestrect(U8 pcolorid, signed int pminarea) {
	printf("_tr_node_id:Node_6_93;_tr_decl:getbiggestrect__1__rectindex;\n");fflush(stdout);
	signed int getbiggestrect__1__rectindex;
		getbiggestrect__1__rectindex = -1;
	printf("_tr_node_id:Node_6_94;_tr_assign:getbiggestrect__1__rectindex=%d;\n", getbiggestrect__1__rectindex);fflush(stdout);
	printf("_tr_node_id:Node_6_95;_tr_decl:i;\n");fflush(stdout);
	signed int i;
	printf("_tr_node_id:Node_6_96;_tr_decl:maxarea;\n");fflush(stdout);
	signed int maxarea;
		maxarea = pminarea;
	printf("_tr_node_id:Node_6_97;_tr_assign:maxarea=%d;\n", maxarea);fflush(stdout);
		i = 0;
	printf("_tr_node_id:Node_6_98;_tr_assign:i=%d;\n", i);fflush(stdout);
	Node_6_100:;
	__iv__branch_expr = (i >= (signed int)(nxtcamdata[0]));
	printf("_tr_node_id:Node_6_100;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((i >= (signed int)(nxtcamdata[0]))) goto Node_6_121;
	printf("_tr_node_id:Node_6_101;_tr_decl:colorid;\n");fflush(stdout);
	signed int colorid;
		colorid = (signed int)(nxtcamdata[(signed long int)(((1 + (5 * i)) + 0))]);
	printf("_tr_node_id:Node_6_102;_tr_assign:colorid=%d;\n", colorid);fflush(stdout);
	__iv__branch_expr = !((colorid == (signed int)(pcolorid)));
	printf("_tr_node_id:Node_6_103;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!((colorid == (signed int)(pcolorid)))) goto Node_6_117;
	printf("_tr_node_id:Node_6_104;_tr_decl:getbiggestrect__1__1__1__1__area;\n");fflush(stdout);
	signed int getbiggestrect__1__1__1__1__area;
	printf("_tr_call:getArea;_tr_call_id:14;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:getArea__rectindex=%hhu;\n", (U8)(i));fflush(stdout);
		getbiggestrect__1__1__1__1__area = getArea((U8)(i));
	printf("_tr_node_id:Node_6_109;_tr_assign:getbiggestrect__1__1__1__1__area=%d;\n", getbiggestrect__1__1__1__1__area);fflush(stdout);
	__iv__branch_expr = !((getbiggestrect__1__1__1__1__area >= maxarea));
	printf("_tr_node_id:Node_6_110;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!((getbiggestrect__1__1__1__1__area >= maxarea))) goto Node_6_113;
		maxarea = getbiggestrect__1__1__1__1__area;
	printf("_tr_node_id:Node_6_111;_tr_assign:maxarea=%d;\n", maxarea);fflush(stdout);
		getbiggestrect__1__rectindex = i;
	printf("_tr_node_id:Node_6_112;_tr_assign:getbiggestrect__1__rectindex=%d;\n", getbiggestrect__1__rectindex);fflush(stdout);
	Node_6_113:;
	Node_6_117:;
		i = (i + 1);
	printf("_tr_node_id:Node_6_119;_tr_assign:i=%d;\n", i);fflush(stdout);
	goto Node_6_100;
	Node_6_121:;
	__iv__return_expr_getbiggestrect = 	getbiggestrect__1__rectindex;
	printf("_tr_node_id:Node_6_122;_tr_assign:__iv__return_expr_getbiggestrect=%d;\n", __iv__return_expr_getbiggestrect);fflush(stdout);
	printf("_tr_return;\n");fflush(stdout);
	return __iv__return_expr_getbiggestrect;
}
signed int getArea(U8 getArea__rectindex) {
	printf("_tr_node_id:Node_7_128;_tr_decl:return_value_getWidth;\n");fflush(stdout);
	signed int return_value_getWidth;
	printf("_tr_call:getWidth;_tr_call_id:15;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:getWidth__rectindex=%hhu;\n", getArea__rectindex);fflush(stdout);
		return_value_getWidth = getWidth(getArea__rectindex);
	printf("_tr_node_id:Node_7_130;_tr_assign:return_value_getWidth=%d;\n", return_value_getWidth);fflush(stdout);
	printf("_tr_node_id:Node_7_132;_tr_decl:return_value_getHeight;\n");fflush(stdout);
	signed int return_value_getHeight;
	printf("_tr_call:getHeight;_tr_call_id:16;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:getHeight__rectindex=%hhu;\n", getArea__rectindex);fflush(stdout);
		return_value_getHeight = getHeight(getArea__rectindex);
	printf("_tr_node_id:Node_7_134;_tr_assign:return_value_getHeight=%d;\n", return_value_getHeight);fflush(stdout);
	__iv__return_expr_getArea = 	(return_value_getWidth * return_value_getHeight);
	printf("_tr_node_id:Node_7_136;_tr_assign:__iv__return_expr_getArea=%d;\n", __iv__return_expr_getArea);fflush(stdout);
	printf("_tr_return;\n");fflush(stdout);
	return __iv__return_expr_getArea;
}
signed int ReleaseResource_Common(unsigned char resid) {
	printf("_tr_node_id:Node_8_143;_tr_decl:i;\n");fflush(stdout);
	unsigned char i;
	printf("_tr_node_id:Node_8_144;_tr_decl:return_value_is_alloc_0;\n");fflush(stdout);
	signed int return_value_is_alloc_0;
	__iv__branch_expr = !((!(((signed int)(resid) >= 0)) || ((signed int)(resid) >= 3)));
	printf("_tr_node_id:Node_8_145;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!((!(((signed int)(resid) >= 0)) || ((signed int)(resid) >= 3)))) goto Node_8_148;
	goto Node_8_181;
	Node_8_148:;
	printf("_tr_call:is_alloc;_tr_call_id:17;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:res=%hhu;\n", resid);fflush(stdout);
		return_value_is_alloc_0 = is_alloc(resid);
	printf("_tr_node_id:Node_8_148;_tr_assign:return_value_is_alloc_0=%d;\n", return_value_is_alloc_0);fflush(stdout);
	__iv__branch_expr = (return_value_is_alloc_0 == (signed int)(current_tid));
	printf("_tr_node_id:Node_8_149;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((return_value_is_alloc_0 == (signed int)(current_tid))) goto Node_8_152;
	goto Node_8_181;
	Node_8_152:;
	__iv__branch_expr = (Resource_Table[(signed long int)(resid)].c_prio >= (unsigned int)(task_static_info[(signed long int)(current_tid)].prio));
	printf("_tr_node_id:Node_8_152;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((Resource_Table[(signed long int)(resid)].c_prio >= (unsigned int)(task_static_info[(signed long int)(current_tid)].prio))) goto Node_8_155;
	goto Node_8_181;
	Node_8_155:;
	unsigned int __iv__index_expr_var1 = (unsigned) ((signed long int)(resid));
		Resource_Table[(signed long int)(resid)].alloc = (unsigned char)(0);
	printf("_tr_node_id:Node_8_155;_tr_assign:Resource_Table[%u].alloc=%hhu;\n", __iv__index_expr_var1, Resource_Table[__iv__index_expr_var1].alloc);fflush(stdout);
	__iv__branch_expr = ((unsigned int)(task_static_info[(signed long int)(current_tid)].prio) >= Resource_Table[(signed long int)(resid)].c_prio);
	printf("_tr_node_id:Node_8_156;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (((unsigned int)(task_static_info[(signed long int)(current_tid)].prio) >= Resource_Table[(signed long int)(resid)].c_prio)) goto Node_8_174;
		current_prio = task_static_info[(signed long int)(current_tid)].prio;
	printf("_tr_node_id:Node_8_157;_tr_assign:current_prio=%hhu;\n", current_prio);fflush(stdout);
		i = (unsigned char)(0);
	printf("_tr_node_id:Node_8_158;_tr_assign:i=%hhu;\n", i);fflush(stdout);
	Node_8_159:;
	__iv__branch_expr = ((signed int)(i) >= 3);
	printf("_tr_node_id:Node_8_159;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (((signed int)(i) >= 3)) goto Node_8_173;
	printf("_tr_node_id:Node_8_160;_tr_decl:return_value_is_alloc;\n");fflush(stdout);
	signed int return_value_is_alloc;
	printf("_tr_call:is_alloc;_tr_call_id:18;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:res=%hhu;\n", i);fflush(stdout);
		return_value_is_alloc = is_alloc(i);
	printf("_tr_node_id:Node_8_162;_tr_assign:return_value_is_alloc=%d;\n", return_value_is_alloc);fflush(stdout);
	__iv__branch_expr = !((return_value_is_alloc == (signed int)(current_tid)));
	printf("_tr_node_id:Node_8_164;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!((return_value_is_alloc == (signed int)(current_tid)))) goto Node_8_168;
	__iv__branch_expr = ((unsigned int)(current_prio) >= Resource_Table[(signed long int)(resid)].c_prio);
	printf("_tr_node_id:Node_8_165;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (((unsigned int)(current_prio) >= Resource_Table[(signed long int)(resid)].c_prio)) goto Node_8_167;
		current_prio = (unsigned char)(Resource_Table[(signed long int)(i)].c_prio);
	printf("_tr_node_id:Node_8_166;_tr_assign:current_prio=%hhu;\n", current_prio);fflush(stdout);
	Node_8_167:;
	Node_8_168:;
		i = (unsigned char)(((signed int)(i) + 1));
	printf("_tr_node_id:Node_8_169;_tr_assign:i=%hhu;\n", i);fflush(stdout);
	goto Node_8_159;
	Node_8_173:;
	Node_8_174:;
	unsigned int __iv__index_expr_var2 = (unsigned) ((signed long int)(current_tid));
		task_dyn_info[(signed long int)(current_tid)].dyn_prio = current_prio;
	printf("_tr_node_id:Node_8_175;_tr_assign:task_dyn_info[%u].dyn_prio=%hhu;\n", __iv__index_expr_var2, task_dyn_info[__iv__index_expr_var2].dyn_prio);fflush(stdout);
	printf("_tr_call:reschedule;_tr_call_id:19;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:reschedule__api=%d;\n", (API)(5));fflush(stdout);
	printf("_tr_param;_tr_assign:tid=%hhu;\n", current_tid);fflush(stdout);
	reschedule((API)(5), current_tid);
	goto Node_8_181;
	Node_8_181:;
	printf("_tr_return;\n");fflush(stdout);
}
void Func_AcquisitionTask() {
	__iv__branch_expr = (current_pc[1] == 1);
	printf("_tr_node_id:Node_9_187;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((current_pc[1] == 1)) goto Node_9_192;
	__iv__branch_expr = (current_pc[1] == 2);
	printf("_tr_node_id:Node_9_188;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((current_pc[1] == 2)) goto Node_9_193;
	__iv__branch_expr = (current_pc[1] == 3);
	printf("_tr_node_id:Node_9_189;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((current_pc[1] == 3)) goto Node_9_194;
	__iv__branch_expr = (current_pc[1] == 4);
	printf("_tr_node_id:Node_9_190;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((current_pc[1] == 4)) goto Node_9_195;
	goto Node_9_196;
	Node_9_192:;
	goto Node_9_196;
	Node_9_193:;
	goto Node_9_221;
	Node_9_194:;
	goto Node_9_228;
	Node_9_195:;
	goto Node_9_232;
	Node_9_196:;
	__iv__branch_expr = ((signed int)(tracking_enabled) == 0);
	printf("_tr_node_id:Node_9_197;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (((signed int)(tracking_enabled) == 0)) goto Node_9_208;
	printf("_tr_node_id:Node_9_198;_tr_decl:return_value_send_nxtcam_command;\n");fflush(stdout);
	signed int return_value_send_nxtcam_command;
	printf("_tr_call:send_nxtcam_command;_tr_call_id:21;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:port_id=%hhu;\n", (U8)(2));fflush(stdout);
	printf("_tr_param;_tr_assign:command=%hhu;\n", (U8)(69));fflush(stdout);
		return_value_send_nxtcam_command = send_nxtcam_command((U8)(2), (U8)(69));
	printf("_tr_node_id:Node_9_200;_tr_assign:return_value_send_nxtcam_command=%d;\n", return_value_send_nxtcam_command);fflush(stdout);
		tracking_enabled = (S8)(return_value_send_nxtcam_command);
	printf("_tr_node_id:Node_9_202;_tr_assign:tracking_enabled=%hhd;\n", tracking_enabled);fflush(stdout);
	goto Node_9_228;
	Node_9_208:;
	printf("_tr_call:request;_tr_call_id:22;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:port_id=%hhu;\n", (U8)(2));fflush(stdout);
	request((U8)(2));
	printf("_tr_call:__iv__getbiggestrect_stub;_tr_call_id:23;\n");fflush(stdout);
		rectindex = __iv__getbiggestrect_stub((U8)(0), -1);
	printf("_tr_node_id:Node_9_210;_tr_assign:rectindex=%d;\n", rectindex);fflush(stdout);
	__iv__branch_expr = !((rectindex >= 0));
	printf("_tr_node_id:Node_9_211;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!((rectindex >= 0))) goto Node_9_228;
	printf("_tr_call:getArea;_tr_call_id:24;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:getArea__rectindex=%hhu;\n", (U8)(rectindex));fflush(stdout);
		area = getArea((U8)(rectindex));
	printf("_tr_node_id:Node_9_214;_tr_assign:area=%d;\n", area);fflush(stdout);
	printf("_tr_call:median_filter;_tr_call_id:25;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:datum=%d;\n", area);fflush(stdout);
		area = median_filter(area);
	printf("_tr_node_id:Node_9_215;_tr_assign:area=%d;\n", area);fflush(stdout);
	printf("_tr_call:fisqrt;_tr_call_id:26;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:val=%d;\n", area);fflush(stdout);
		acq_size = fisqrt(area);
	printf("_tr_node_id:Node_9_216;_tr_assign:acq_size=%d;\n", acq_size);fflush(stdout);
	printf("_tr_call:getX;_tr_call_id:27;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:getX__rectindex=%hhu;\n", (U8)(rectindex));fflush(stdout);
		x = getX((U8)(rectindex));
	printf("_tr_node_id:Node_9_217;_tr_assign:x=%d;\n", x);fflush(stdout);
	printf("_tr_call:GetResource;_tr_call_id:28;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:resid=%hhu;\n", (unsigned char)(1));fflush(stdout);
	GetResource((unsigned char)(1));
	unsigned int __iv__index_expr_var3 = (unsigned) (1);
		current_pc[1] = 2;
	printf("_tr_node_id:Node_9_219;_tr_assign:current_pc[%u]=%d;\n", __iv__index_expr_var3, current_pc[__iv__index_expr_var3]);fflush(stdout);
	goto Node_9_234;
	Node_9_221:;
		objData.position = x;
	printf("_tr_node_id:Node_9_223;_tr_assign:objData.position=%d;\n", objData.position);fflush(stdout);
		objData.size = acq_size;
	printf("_tr_node_id:Node_9_224;_tr_assign:objData.size=%d;\n", objData.size);fflush(stdout);
	printf("_tr_call:ReleaseResource;_tr_call_id:29;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:resid=%hhu;\n", (unsigned char)(1));fflush(stdout);
	ReleaseResource((unsigned char)(1));
	unsigned int __iv__index_expr_var4 = (unsigned) (1);
		current_pc[1] = 3;
	printf("_tr_node_id:Node_9_226;_tr_assign:current_pc[%u]=%d;\n", __iv__index_expr_var4, current_pc[__iv__index_expr_var4]);fflush(stdout);
	goto Node_9_234;
	Node_9_228:;
	printf("_tr_call:TerminateTask;_tr_call_id:30;\n");fflush(stdout);
	TerminateTask();
	unsigned int __iv__index_expr_var5 = (unsigned) (1);
		current_pc[1] = 4;
	printf("_tr_node_id:Node_9_230;_tr_assign:current_pc[%u]=%d;\n", __iv__index_expr_var5, current_pc[__iv__index_expr_var5]);fflush(stdout);
	goto Node_9_234;
	Node_9_232:;
	unsigned int __iv__index_expr_var6 = (unsigned) (1);
		current_pc[1] = 1;
	printf("_tr_node_id:Node_9_233;_tr_assign:current_pc[%u]=%d;\n", __iv__index_expr_var6, current_pc[__iv__index_expr_var6]);fflush(stdout);
	Node_9_234:;
	printf("_tr_return;\n");fflush(stdout);
}
signed int i2c_busy(signed int port) {
	printf("_tr_node_id:Node_10_236;_tr_decl:i2c_busy_ret;\n");fflush(stdout);
	signed int i2c_busy_ret;
	printf("_tr_system_call:__VERIFIER_nondet_signed_int;_tr_call_id:31;\n");fflush(stdout);
		i2c_busy_ret = __VERIFIER_nondet_signed_int();
	printf("_tr_node_id:Node_10_239;_tr_assign:i2c_busy_ret=%d;\n", i2c_busy_ret);fflush(stdout);
	__iv__return_expr_i2c_busy = 	i2c_busy_ret;
	printf("_tr_node_id:Node_10_240;_tr_assign:__iv__return_expr_i2c_busy=%d;\n", __iv__return_expr_i2c_busy);fflush(stdout);
	printf("_tr_return;\n");fflush(stdout);
	return __iv__return_expr_i2c_busy;
}
data_t median_filter(data_t datum) {
	printf("_tr_node_id:Node_11_245;_tr_decl:successor;\n");fflush(stdout);
	struct pair *successor;
	printf("_tr_node_id:Node_11_246;_tr_decl:scan;\n");fflush(stdout);
	struct pair *scan;
	printf("_tr_node_id:Node_11_247;_tr_decl:scanold;\n");fflush(stdout);
	struct pair *scanold;
	printf("_tr_node_id:Node_11_248;_tr_decl:median;\n");fflush(stdout);
	struct pair *median;
	printf("_tr_node_id:Node_11_249;_tr_decl:i;\n");fflush(stdout);
	unsigned int i;
		datpoint = (datpoint + 1l);
	printf("_tr_node_id:Node_11_250;_tr_dynamic_assign:	datpoint = (datpoint + 1l);\n");fflush(stdout);
	__iv__branch_expr = !(((datpoint - buffer) >= 15l));
	printf("_tr_node_id:Node_11_251;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!(((datpoint - buffer) >= 15l))) goto Node_11_253;
		datpoint = buffer;
	printf("_tr_node_id:Node_11_252;_tr_dynamic_assign:	datpoint = buffer;\n");fflush(stdout);
	Node_11_253:;
		datpoint->value = datum;
	printf("_tr_node_id:Node_11_254;_tr_assign:datpoint->value=%d;\n", datpoint->value);fflush(stdout);
		successor = datpoint->point;
	printf("_tr_node_id:Node_11_255;_tr_dynamic_assign:	successor = datpoint->point;\n");fflush(stdout);
		median = &big;
	printf("_tr_node_id:Node_11_256;_tr_dynamic_assign:	median = &big;\n");fflush(stdout);
		scan = &big;
	printf("_tr_node_id:Node_11_257;_tr_dynamic_assign:	scan = &big;\n");fflush(stdout);
	__iv__branch_expr = !((scan->point == datpoint));
	printf("_tr_node_id:Node_11_258;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!((scan->point == datpoint))) goto Node_11_260;
		scan->point = successor;
	printf("_tr_node_id:Node_11_259;_tr_dynamic_assign:	scan->point = successor;\n");fflush(stdout);
	Node_11_260:;
		scanold = scan;
	printf("_tr_node_id:Node_11_261;_tr_dynamic_assign:	scanold = scan;\n");fflush(stdout);
		scan = scan->point;
	printf("_tr_node_id:Node_11_262;_tr_dynamic_assign:	scan = scan->point;\n");fflush(stdout);
		i = 0u;
	printf("_tr_node_id:Node_11_263;_tr_assign:i=%u;\n", i);fflush(stdout);
	Node_11_265:;
	__iv__branch_expr = (i >= 15u);
	printf("_tr_node_id:Node_11_265;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((i >= 15u)) goto Node_11_295;
	__iv__branch_expr = !((scan->point == datpoint));
	printf("_tr_node_id:Node_11_266;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!((scan->point == datpoint))) goto Node_11_268;
		scan->point = successor;
	printf("_tr_node_id:Node_11_267;_tr_dynamic_assign:	scan->point = successor;\n");fflush(stdout);
	Node_11_268:;
	__iv__branch_expr = (scan->value >= datum);
	printf("_tr_node_id:Node_11_269;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((scan->value >= datum)) goto Node_11_273;
		datpoint->point = scanold->point;
	printf("_tr_node_id:Node_11_270;_tr_dynamic_assign:	datpoint->point = scanold->point;\n");fflush(stdout);
		scanold->point = datpoint;
	printf("_tr_node_id:Node_11_271;_tr_dynamic_assign:	scanold->point = datpoint;\n");fflush(stdout);
		datum = 0;
	printf("_tr_node_id:Node_11_272;_tr_assign:datum=%d;\n", datum);fflush(stdout);
	Node_11_273:;
		median = median->point;
	printf("_tr_node_id:Node_11_274;_tr_dynamic_assign:	median = median->point;\n");fflush(stdout);
	__iv__branch_expr = (scan == &small);
	printf("_tr_node_id:Node_11_275;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((scan == &small)) goto Node_11_295;
		scanold = scan;
	printf("_tr_node_id:Node_11_278;_tr_dynamic_assign:	scanold = scan;\n");fflush(stdout);
		scan = scan->point;
	printf("_tr_node_id:Node_11_279;_tr_dynamic_assign:	scan = scan->point;\n");fflush(stdout);
	__iv__branch_expr = !((scan->point == datpoint));
	printf("_tr_node_id:Node_11_280;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!((scan->point == datpoint))) goto Node_11_282;
		scan->point = successor;
	printf("_tr_node_id:Node_11_281;_tr_dynamic_assign:	scan->point = successor;\n");fflush(stdout);
	Node_11_282:;
	__iv__branch_expr = (scan->value >= datum);
	printf("_tr_node_id:Node_11_283;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((scan->value >= datum)) goto Node_11_287;
		datpoint->point = scanold->point;
	printf("_tr_node_id:Node_11_284;_tr_dynamic_assign:	datpoint->point = scanold->point;\n");fflush(stdout);
		scanold->point = datpoint;
	printf("_tr_node_id:Node_11_285;_tr_dynamic_assign:	scanold->point = datpoint;\n");fflush(stdout);
		datum = 0;
	printf("_tr_node_id:Node_11_286;_tr_assign:datum=%d;\n", datum);fflush(stdout);
	Node_11_287:;
	__iv__branch_expr = (scan == &small);
	printf("_tr_node_id:Node_11_288;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((scan == &small)) goto Node_11_295;
		scanold = scan;
	printf("_tr_node_id:Node_11_291;_tr_dynamic_assign:	scanold = scan;\n");fflush(stdout);
		scan = scan->point;
	printf("_tr_node_id:Node_11_292;_tr_dynamic_assign:	scan = scan->point;\n");fflush(stdout);
		i = (i + 1u);
	printf("_tr_node_id:Node_11_293;_tr_assign:i=%u;\n", i);fflush(stdout);
	goto Node_11_265;
	Node_11_295:;
	__iv__return_expr_median_filter = 	median->value;
	printf("_tr_node_id:Node_11_296;_tr_assign:__iv__return_expr_median_filter=%d;\n", __iv__return_expr_median_filter);fflush(stdout);
	printf("_tr_return;\n");fflush(stdout);
	return __iv__return_expr_median_filter;
}
signed int is_active_obj_exists() {
	printf("_tr_node_id:Node_12_304;_tr_decl:i;\n");fflush(stdout);
	signed int i;
		i = 1;
	printf("_tr_node_id:Node_12_305;_tr_assign:i=%d;\n", i);fflush(stdout);
	Node_12_307:;
	__iv__branch_expr = (i >= 4);
	printf("_tr_node_id:Node_12_307;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((i >= 4)) goto Node_12_323;
	printf("_tr_node_id:Node_12_308;_tr_decl:tmp_if_expr;\n");fflush(stdout);
	__CPROVER_bool tmp_if_expr;
	__iv__branch_expr = !(((signed int)(task_state[(signed long int)(i)]) == 2));
	printf("_tr_node_id:Node_12_309;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!(((signed int)(task_state[(signed long int)(i)]) == 2))) goto Node_12_312;
		tmp_if_expr = (1 != 0);
	printf("_tr_node_id:Node_12_310;_tr_assign:tmp_if_expr=%hhu;\n", tmp_if_expr);fflush(stdout);
	goto Node_12_313;
	Node_12_312:;
		tmp_if_expr = (((signed int)(task_state[(signed long int)(i)]) == 1) ? 1 : 0 != 0);
	printf("_tr_node_id:Node_12_312;_tr_assign:tmp_if_expr=%hhu;\n", tmp_if_expr);fflush(stdout);
	Node_12_313:;
	__iv__branch_expr = !tmp_if_expr;
	printf("_tr_node_id:Node_12_314;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!tmp_if_expr) goto Node_12_319;
	__iv__return_expr_is_active_obj_exists = 	1;
	printf("_tr_node_id:Node_12_315;_tr_assign:__iv__return_expr_is_active_obj_exists=%d;\n", __iv__return_expr_is_active_obj_exists);fflush(stdout);
	printf("_tr_return;\n");fflush(stdout);
	return __iv__return_expr_is_active_obj_exists;
	Node_12_319:;
		i = (i + 1);
	printf("_tr_node_id:Node_12_321;_tr_assign:i=%d;\n", i);fflush(stdout);
	goto Node_12_307;
	Node_12_323:;
		i = 1;
	printf("_tr_node_id:Node_12_324;_tr_assign:i=%d;\n", i);fflush(stdout);
	Node_12_326:;
	__iv__branch_expr = (i >= 4);
	printf("_tr_node_id:Node_12_326;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((i >= 4)) goto Node_12_334;
	__iv__branch_expr = (alarm_state[(signed long int)(i)] == 0);
	printf("_tr_node_id:Node_12_327;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((alarm_state[(signed long int)(i)] == 0)) goto Node_12_331;
	__iv__return_expr_is_active_obj_exists = 	1;
	printf("_tr_node_id:Node_12_328;_tr_assign:__iv__return_expr_is_active_obj_exists=%d;\n", __iv__return_expr_is_active_obj_exists);fflush(stdout);
	printf("_tr_return;\n");fflush(stdout);
	return __iv__return_expr_is_active_obj_exists;
	Node_12_331:;
		i = (i + 1);
	printf("_tr_node_id:Node_12_332;_tr_assign:i=%d;\n", i);fflush(stdout);
	goto Node_12_326;
	Node_12_334:;
	__iv__return_expr_is_active_obj_exists = 	0;
	printf("_tr_node_id:Node_12_335;_tr_assign:__iv__return_expr_is_active_obj_exists=%d;\n", __iv__return_expr_is_active_obj_exists);fflush(stdout);
	printf("_tr_return;\n");fflush(stdout);
	return __iv__return_expr_is_active_obj_exists;
}
signed int is_active_alarm_exists() {
	printf("_tr_node_id:Node_13_339;_tr_decl:i;\n");fflush(stdout);
	signed int i;
		i = 1;
	printf("_tr_node_id:Node_13_340;_tr_assign:i=%d;\n", i);fflush(stdout);
	Node_13_342:;
	__iv__branch_expr = (i >= 4);
	printf("_tr_node_id:Node_13_342;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((i >= 4)) goto Node_13_350;
	__iv__branch_expr = (alarm_state[(signed long int)(i)] == 0);
	printf("_tr_node_id:Node_13_343;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((alarm_state[(signed long int)(i)] == 0)) goto Node_13_347;
	__iv__return_expr_is_active_alarm_exists = 	1;
	printf("_tr_node_id:Node_13_344;_tr_assign:__iv__return_expr_is_active_alarm_exists=%d;\n", __iv__return_expr_is_active_alarm_exists);fflush(stdout);
	printf("_tr_return;\n");fflush(stdout);
	return __iv__return_expr_is_active_alarm_exists;
	Node_13_347:;
		i = (i + 1);
	printf("_tr_node_id:Node_13_348;_tr_assign:i=%d;\n", i);fflush(stdout);
	goto Node_13_342;
	Node_13_350:;
	__iv__return_expr_is_active_alarm_exists = 	0;
	printf("_tr_node_id:Node_13_351;_tr_assign:__iv__return_expr_is_active_alarm_exists=%d;\n", __iv__return_expr_is_active_alarm_exists);fflush(stdout);
	printf("_tr_return;\n");fflush(stdout);
	return __iv__return_expr_is_active_alarm_exists;
}
signed int getX(U8 getX__rectindex) {
	printf("_tr_node_id:Node_14_355;_tr_decl:xul;\n");fflush(stdout);
	signed int xul;
		xul = (signed int)(nxtcamdata[(signed long int)((((5 * (signed int)(getX__rectindex)) + 1) + 1))]);
	printf("_tr_node_id:Node_14_356;_tr_assign:xul=%d;\n", xul);fflush(stdout);
	printf("_tr_node_id:Node_14_357;_tr_decl:xlr;\n");fflush(stdout);
	signed int xlr;
		xlr = (signed int)(nxtcamdata[(signed long int)((((5 * (signed int)(getX__rectindex)) + 1) + 3))]);
	printf("_tr_node_id:Node_14_358;_tr_assign:xlr=%d;\n", xlr);fflush(stdout);
	__iv__return_expr_getX = 	((xlr + xul) / 2);
	printf("_tr_node_id:Node_14_359;_tr_assign:__iv__return_expr_getX=%d;\n", __iv__return_expr_getX);fflush(stdout);
	printf("_tr_return;\n");fflush(stdout);
	return __iv__return_expr_getX;
}
signed int getWidth(U8 getWidth__rectindex) {
	printf("_tr_node_id:Node_15_364;_tr_decl:xul;\n");fflush(stdout);
	signed int xul;
		xul = (signed int)(nxtcamdata[(signed long int)((((5 * (signed int)(getWidth__rectindex)) + 1) + 1))]);
	printf("_tr_node_id:Node_15_365;_tr_assign:xul=%d;\n", xul);fflush(stdout);
	printf("_tr_node_id:Node_15_366;_tr_decl:xlr;\n");fflush(stdout);
	signed int xlr;
		xlr = (signed int)(nxtcamdata[(signed long int)((((5 * (signed int)(getWidth__rectindex)) + 1) + 3))]);
	printf("_tr_node_id:Node_15_367;_tr_assign:xlr=%d;\n", xlr);fflush(stdout);
	__iv__return_expr_getWidth = 	((xlr - xul) >= 0) ? (xlr - xul) : -((xlr - xul));
	printf("_tr_node_id:Node_15_368;_tr_assign:__iv__return_expr_getWidth=%d;\n", __iv__return_expr_getWidth);fflush(stdout);
	printf("_tr_return;\n");fflush(stdout);
	return __iv__return_expr_getWidth;
}
signed int getHeight(U8 getHeight__rectindex) {
	printf("_tr_node_id:Node_16_373;_tr_decl:yul;\n");fflush(stdout);
	signed int yul;
		yul = (signed int)(nxtcamdata[(signed long int)((((5 * (signed int)(getHeight__rectindex)) + 1) + 2))]);
	printf("_tr_node_id:Node_16_374;_tr_assign:yul=%d;\n", yul);fflush(stdout);
	printf("_tr_node_id:Node_16_375;_tr_decl:ylr;\n");fflush(stdout);
	signed int ylr;
		ylr = (signed int)(nxtcamdata[(signed long int)((((5 * (signed int)(getHeight__rectindex)) + 1) + 4))]);
	printf("_tr_node_id:Node_16_376;_tr_assign:ylr=%d;\n", ylr);fflush(stdout);
	__iv__return_expr_getHeight = 	((ylr - yul) >= 0) ? (ylr - yul) : -((ylr - yul));
	printf("_tr_node_id:Node_16_377;_tr_assign:__iv__return_expr_getHeight=%d;\n", __iv__return_expr_getHeight);fflush(stdout);
	printf("_tr_return;\n");fflush(stdout);
	return __iv__return_expr_getHeight;
}
signed int fisqrt(signed int val) {
	printf("_tr_node_id:Node_17_382;_tr_decl:cnt;\n");fflush(stdout);
	signed int cnt;
		cnt = 0;
	printf("_tr_node_id:Node_17_383;_tr_assign:cnt=%d;\n", cnt);fflush(stdout);
	printf("_tr_node_id:Node_17_384;_tr_decl:t;\n");fflush(stdout);
	signed int t;
		t = val;
	printf("_tr_node_id:Node_17_385;_tr_assign:t=%d;\n", t);fflush(stdout);
	Node_17_387:;
	__iv__branch_expr = (t == 0);
	printf("_tr_node_id:Node_17_387;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((t == 0)) goto Node_17_391;
		cnt = (cnt + 1);
	printf("_tr_node_id:Node_17_388;_tr_assign:cnt=%d;\n", cnt);fflush(stdout);
		t = (t >> 1);
	printf("_tr_node_id:Node_17_389;_tr_assign:t=%d;\n", t);fflush(stdout);
	goto Node_17_387;
	Node_17_391:;
	__iv__branch_expr = (cnt >= 7);
	printf("_tr_node_id:Node_17_392;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((cnt >= 7)) goto Node_17_395;
		t = (val << (6 - cnt));
	printf("_tr_node_id:Node_17_393;_tr_assign:t=%d;\n", t);fflush(stdout);
	goto Node_17_396;
	Node_17_395:;
		t = (val >> (cnt - 6));
	printf("_tr_node_id:Node_17_395;_tr_assign:t=%d;\n", t);fflush(stdout);
	Node_17_396:;
	__iv__return_expr_fisqrt = 	((ftbl[(signed long int)(cnt)] * ftbl2[(signed long int)((t & 31))]) >> 15);
	printf("_tr_node_id:Node_17_397;_tr_assign:__iv__return_expr_fisqrt=%d;\n", __iv__return_expr_fisqrt);fflush(stdout);
	printf("_tr_return;\n");fflush(stdout);
	return __iv__return_expr_fisqrt;
}
void app() {
	printf("_tr_node_id:Node_18_402;_tr_decl:count;\n");fflush(stdout);
	signed int count;
		count = 0;
	printf("_tr_node_id:Node_18_403;_tr_assign:count=%d;\n", count);fflush(stdout);
	unsigned int __iv__index_expr_var7 = (unsigned) (1);
		current_pc[1] = 1;
	printf("_tr_node_id:Node_18_404;_tr_assign:current_pc[%u]=%d;\n", __iv__index_expr_var7, current_pc[__iv__index_expr_var7]);fflush(stdout);
	unsigned int __iv__index_expr_var8 = (unsigned) (2);
		current_pc[2] = 1;
	printf("_tr_node_id:Node_18_405;_tr_assign:current_pc[%u]=%d;\n", __iv__index_expr_var8, current_pc[__iv__index_expr_var8]);fflush(stdout);
	printf("_tr_node_id:Node_18_406;_tr_decl:return_value_is_active_obj_exists;\n");fflush(stdout);
	signed int return_value_is_active_obj_exists;
	Node_18_407:;
	printf("_tr_call:is_active_obj_exists;_tr_call_id:32;\n");fflush(stdout);
		return_value_is_active_obj_exists = is_active_obj_exists();
	printf("_tr_node_id:Node_18_407;_tr_assign:return_value_is_active_obj_exists=%d;\n", return_value_is_active_obj_exists);fflush(stdout);
	__iv__branch_expr = (return_value_is_active_obj_exists == 0);
	printf("_tr_node_id:Node_18_408;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((return_value_is_active_obj_exists == 0)) goto Node_18_428;
	__iv__branch_expr = !((os_on == ON));
	printf("_tr_node_id:Node_18_411;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!((os_on == ON))) goto Node_18_428;
	__iv__branch_expr = (count >= 600);
	printf("_tr_node_id:Node_18_414;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((count >= 600)) goto Node_18_428;
	__iv__branch_expr = !(((signed int)(current_tid) == 1));
	printf("_tr_node_id:Node_18_417;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!(((signed int)(current_tid) == 1))) goto Node_18_420;
	printf("_tr_call:Func_AcquisitionTask;_tr_call_id:33;\n");fflush(stdout);
	Func_AcquisitionTask();
	goto Node_18_423;
	Node_18_420:;
	__iv__branch_expr = !(((signed int)(current_tid) == 2));
	printf("_tr_node_id:Node_18_420;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!(((signed int)(current_tid) == 2))) goto Node_18_422;
	printf("_tr_call:Func_ControlTask;_tr_call_id:34;\n");fflush(stdout);
	Func_ControlTask();
	Node_18_422:;
	Node_18_423:;
	printf("_tr_call:postjob;_tr_call_id:35;\n");fflush(stdout);
	postjob();
	printf("_tr_call:check_property;_tr_call_id:36;\n");fflush(stdout);
	check_property();
		count = (count + 1);
	printf("_tr_node_id:Node_18_426;_tr_assign:count=%d;\n", count);fflush(stdout);
	__iv__branch_expr = (1 != 0);
	printf("_tr_node_id:Node_18_427;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((1 != 0)) goto Node_18_407;
	Node_18_428:;
	printf("_tr_return;\n");fflush(stdout);
}
signed int GetResource_Common(unsigned char resid) {
	printf("_tr_node_id:Node_19_432;_tr_decl:return_value_is_alloc;\n");fflush(stdout);
	signed int return_value_is_alloc;
	printf("_tr_node_id:Node_19_433;_tr_decl:tmp_if_expr;\n");fflush(stdout);
	__CPROVER_bool tmp_if_expr;
	__iv__branch_expr = !((!(((signed int)(resid) >= 0)) || ((signed int)(resid) >= 3)));
	printf("_tr_node_id:Node_19_434;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!((!(((signed int)(resid) >= 0)) || ((signed int)(resid) >= 3)))) goto Node_19_437;
	goto Node_19_452;
	Node_19_437:;
	printf("_tr_call:is_alloc;_tr_call_id:37;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:res=%hhu;\n", resid);fflush(stdout);
		return_value_is_alloc = is_alloc(resid);
	printf("_tr_node_id:Node_19_437;_tr_assign:return_value_is_alloc=%d;\n", return_value_is_alloc);fflush(stdout);
	__iv__branch_expr = !((return_value_is_alloc >= 1));
	printf("_tr_node_id:Node_19_438;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!((return_value_is_alloc >= 1))) goto Node_19_441;
		tmp_if_expr = (1 != 0);
	printf("_tr_node_id:Node_19_439;_tr_assign:tmp_if_expr=%hhu;\n", tmp_if_expr);fflush(stdout);
	goto Node_19_442;
	Node_19_441:;
		tmp_if_expr = (((unsigned int)(task_static_info[(signed long int)(current_tid)].prio) > Resource_Table[(signed long int)(resid)].c_prio) ? 1 : 0 != 0);
	printf("_tr_node_id:Node_19_441;_tr_assign:tmp_if_expr=%hhu;\n", tmp_if_expr);fflush(stdout);
	Node_19_442:;
	__iv__branch_expr = !tmp_if_expr;
	printf("_tr_node_id:Node_19_443;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!tmp_if_expr) goto Node_19_446;
	goto Node_19_452;
	Node_19_446:;
	unsigned int __iv__index_expr_var9 = (unsigned) ((signed long int)(resid));
		Resource_Table[(signed long int)(resid)].alloc = current_tid;
	printf("_tr_node_id:Node_19_446;_tr_assign:Resource_Table[%u].alloc=%hhu;\n", __iv__index_expr_var9, Resource_Table[__iv__index_expr_var9].alloc);fflush(stdout);
	__iv__branch_expr = ((unsigned int)(task_dyn_info[(signed long int)(current_tid)].dyn_prio) >= Resource_Table[(signed long int)(resid)].c_prio);
	printf("_tr_node_id:Node_19_447;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (((unsigned int)(task_dyn_info[(signed long int)(current_tid)].dyn_prio) >= Resource_Table[(signed long int)(resid)].c_prio)) goto Node_19_449;
	unsigned int __iv__index_expr_var10 = (unsigned) ((signed long int)(current_tid));
		task_dyn_info[(signed long int)(current_tid)].dyn_prio = (unsigned char)(Resource_Table[(signed long int)(resid)].c_prio);
	printf("_tr_node_id:Node_19_448;_tr_assign:task_dyn_info[%u].dyn_prio=%hhu;\n", __iv__index_expr_var10, task_dyn_info[__iv__index_expr_var10].dyn_prio);fflush(stdout);
	Node_19_449:;
	Node_19_452:;
	printf("_tr_return;\n");fflush(stdout);
}
signed int ActivateTask_Common(unsigned char reftask) {
	__iv__branch_expr = !((!(((signed int)(reftask) >= 1)) || ((signed int)(reftask) >= 5)));
	printf("_tr_node_id:Node_20_457;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!((!(((signed int)(reftask) >= 1)) || ((signed int)(reftask) >= 5)))) goto Node_20_460;
	goto Node_20_477;
	Node_20_460:;
	__iv__branch_expr = ((signed int)(task_dyn_info[(signed long int)(reftask)].act_cnt) >= (signed int)(task_static_info[(signed long int)(reftask)].max_act_cnt));
	printf("_tr_node_id:Node_20_460;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (((signed int)(task_dyn_info[(signed long int)(reftask)].act_cnt) >= (signed int)(task_static_info[(signed long int)(reftask)].max_act_cnt))) goto Node_20_475;
	__iv__branch_expr = !(((signed int)(task_state[(signed long int)(reftask)]) == 0));
	printf("_tr_node_id:Node_20_461;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!(((signed int)(task_state[(signed long int)(reftask)]) == 0))) goto Node_20_471;
	printf("_tr_node_id:Node_20_462;_tr_decl:i;\n");fflush(stdout);
	signed int i;
		i = 0;
	printf("_tr_node_id:Node_20_463;_tr_assign:i=%d;\n", i);fflush(stdout);
	Node_20_465:;
	__iv__branch_expr = (i >= 3);
	printf("_tr_node_id:Node_20_465;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((i >= 3)) goto Node_20_469;
	unsigned int __iv__index_expr_var11 = (unsigned) ((signed long int)(i));
	unsigned int __iv__index_expr_var12 = (unsigned) ((signed long int)(reftask));
		Event_Table[(signed long int)(i)].task_alloc[(signed long int)(reftask)] = (Evt_State)(0);
	printf("_tr_node_id:Node_20_466;_tr_assign:Event_Table[%u].task_alloc[%u]=%d;\n", __iv__index_expr_var11, __iv__index_expr_var12, Event_Table[__iv__index_expr_var11].task_alloc[__iv__index_expr_var12]);fflush(stdout);
		i = (i + 1);
	printf("_tr_node_id:Node_20_467;_tr_assign:i=%d;\n", i);fflush(stdout);
	goto Node_20_465;
	Node_20_469:;
	Node_20_471:;
	unsigned int __iv__index_expr_var13 = (unsigned) ((signed long int)(reftask));
		task_dyn_info[(signed long int)(reftask)].act_cnt = (unsigned char)(((signed int)(task_dyn_info[(signed long int)(reftask)].act_cnt) + 1));
	printf("_tr_node_id:Node_20_472;_tr_assign:task_dyn_info[%u].act_cnt=%hhu;\n", __iv__index_expr_var13, task_dyn_info[__iv__index_expr_var13].act_cnt);fflush(stdout);
	printf("_tr_call:push_task_into_readyQ;_tr_call_id:39;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:t=%hhu;\n", reftask);fflush(stdout);
	printf("_tr_param;_tr_assign:p=%hhu;\n", task_static_info[(signed long int)(reftask)].prio);fflush(stdout);
	printf("_tr_param;_tr_assign:pc=%d;\n", 0);fflush(stdout);
	printf("_tr_param;_tr_assign:pushkind=%d;\n", (push_type)(0));fflush(stdout);
	push_task_into_readyQ(reftask, task_static_info[(signed long int)(reftask)].prio, 0, (push_type)(0));
	printf("_tr_call:reschedule;_tr_call_id:40;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:reschedule__api=%d;\n", (API)(0));fflush(stdout);
	printf("_tr_param;_tr_assign:tid=%hhu;\n", current_tid);fflush(stdout);
	reschedule((API)(0), current_tid);
	Node_20_475:;
	Node_20_477:;
	printf("_tr_return;\n");fflush(stdout);
}
void check_property() {
	(void)sizeof(signed int)  ;
	if(!(((direction_adjustment < 20) && (direction_adjustment > -20)))) { printf("violated property: Node_21_481\n"); fflush(stdout); exit(0); }
	printf("_tr_return;\n");fflush(stdout);
}
signed int WaitEvent_Common(unsigned char eventid) {
	goto Node_22_485;
	Node_22_485:;
	printf("_tr_return;\n");fflush(stdout);
}
signed int WaitEvent(unsigned char eventid) {
	printf("_tr_call:WaitEvent_Common;_tr_call_id:44;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:eventid=%hhu;\n", eventid);fflush(stdout);
	WaitEvent_Common(eventid);
	printf("_tr_return;\n");fflush(stdout);
}
signed int TerminateTask() {
	printf("_tr_call:TerminateTask_Common;_tr_call_id:46;\n");fflush(stdout);
	TerminateTask_Common();
	printf("_tr_return;\n");fflush(stdout);
}
void StartOS(unsigned char app_mode) {
	__iv__branch_expr = !((os_on == OFF));
	printf("_tr_node_id:Node_25_494;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!((os_on == OFF))) goto Node_25_499;
		os_on = ON;
	printf("_tr_node_id:Node_25_495;_tr_assign:os_on=%d;\n", os_on);fflush(stdout);
	printf("_tr_call:initialize;_tr_call_id:48;\n");fflush(stdout);
	initialize();
	printf("_tr_call:startup_process;_tr_call_id:49;\n");fflush(stdout);
	startup_process();
	printf("_tr_call:app;_tr_call_id:50;\n");fflush(stdout);
	app();
	Node_25_499:;
	printf("_tr_return;\n");fflush(stdout);
}
void ShutDownOS() {
	printf("_tr_return;\n");fflush(stdout);
}
signed int SetRelAlarm_Common(unsigned char alarmID, signed int increment, signed int cycle) {
	printf("_tr_return;\n");fflush(stdout);
}
signed int SetRelAlarm(unsigned char alarmID, signed int increment, signed int cycle) {
	printf("_tr_return;\n");fflush(stdout);
}
signed int SetEvent(unsigned char reftask, unsigned char eventid) {
	printf("_tr_call:SetEvent_Common;_tr_call_id:53;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:reftask=%hhu;\n", reftask);fflush(stdout);
	printf("_tr_param;_tr_assign:eventid=%hhu;\n", eventid);fflush(stdout);
	SetEvent_Common(reftask, eventid);
	printf("_tr_return;\n");fflush(stdout);
}
signed int ReleaseResource(unsigned char resid) {
	printf("_tr_call:ReleaseResource_Common;_tr_call_id:55;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:resid=%hhu;\n", resid);fflush(stdout);
	ReleaseResource_Common(resid);
	printf("_tr_return;\n");fflush(stdout);
}
signed int GetResource(unsigned char resid) {
	printf("_tr_call:GetResource_Common;_tr_call_id:57;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:resid=%hhu;\n", resid);fflush(stdout);
	GetResource_Common(resid);
	printf("_tr_return;\n");fflush(stdout);
}
signed int ClearEvent_Common(unsigned char eventid) {
	printf("_tr_return;\n");fflush(stdout);
}
void ALARM_handler(signed int aid) {
	__iv__branch_expr = !((alarm_state[(signed long int)(aid)] == 1));
	printf("_tr_node_id:Node_33_521;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!((alarm_state[(signed long int)(aid)] == 1))) goto Node_33_527;
	unsigned int __iv__index_expr_var14 = (unsigned) ((signed long int)(aid));
		alarm_info[(signed long int)(aid)].next_alarm_tick = (alarm_info[(signed long int)(aid)].next_alarm_tick - 1u);
	printf("_tr_node_id:Node_33_522;_tr_assign:alarm_info[%u].next_alarm_tick=%u;\n", __iv__index_expr_var14, alarm_info[__iv__index_expr_var14].next_alarm_tick);fflush(stdout);
	__iv__branch_expr = !((alarm_info[(signed long int)(aid)].next_alarm_tick == 0u));
	printf("_tr_node_id:Node_33_523;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!((alarm_info[(signed long int)(aid)].next_alarm_tick == 0u))) goto Node_33_526;
	unsigned int __iv__index_expr_var15 = (unsigned) ((signed long int)(aid));
		alarm_info[(signed long int)(aid)].next_alarm_tick = alarm_info[(signed long int)(aid)].cycle;
	printf("_tr_node_id:Node_33_524;_tr_assign:alarm_info[%u].next_alarm_tick=%u;\n", __iv__index_expr_var15, alarm_info[__iv__index_expr_var15].next_alarm_tick);fflush(stdout);
	unsigned int __iv__index_expr_var16 = (unsigned) ((signed long int)(aid));
		alarm_state[(signed long int)(aid)] = 2;
	printf("_tr_node_id:Node_33_525;_tr_assign:alarm_state[%u]=%d;\n", __iv__index_expr_var16, alarm_state[__iv__index_expr_var16]);fflush(stdout);
	Node_33_526:;
	Node_33_527:;
	__iv__branch_expr = !((alarm_state[(signed long int)(aid)] == 2));
	printf("_tr_node_id:Node_33_528;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!((alarm_state[(signed long int)(aid)] == 2))) goto Node_33_541;
	__iv__branch_expr = !(((signed int)(alarm_info[(signed long int)(aid)].api) == 0));
	printf("_tr_node_id:Node_33_529;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!(((signed int)(alarm_info[(signed long int)(aid)].api) == 0))) goto Node_33_532;
	printf("_tr_call:ActivateTask_Common;_tr_call_id:60;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:reftask=%hhu;\n", alarm_info[(signed long int)(aid)].param1);fflush(stdout);
	ActivateTask_Common(alarm_info[(signed long int)(aid)].param1);
	goto Node_33_535;
	Node_33_532:;
	__iv__branch_expr = !(((signed int)(alarm_info[(signed long int)(aid)].api) == 6));
	printf("_tr_node_id:Node_33_532;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!(((signed int)(alarm_info[(signed long int)(aid)].api) == 6))) goto Node_33_534;
	printf("_tr_call:SetEvent_Common;_tr_call_id:61;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:reftask=%hhu;\n", alarm_info[(signed long int)(aid)].param1);fflush(stdout);
	printf("_tr_param;_tr_assign:eventid=%hhu;\n", alarm_info[(signed long int)(aid)].param2);fflush(stdout);
	SetEvent_Common(alarm_info[(signed long int)(aid)].param1, alarm_info[(signed long int)(aid)].param2);
	Node_33_534:;
	Node_33_535:;
	__iv__branch_expr = !((alarm_info[(signed long int)(aid)].cycle >= 1u));
	printf("_tr_node_id:Node_33_536;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!((alarm_info[(signed long int)(aid)].cycle >= 1u))) goto Node_33_539;
	unsigned int __iv__index_expr_var17 = (unsigned) ((signed long int)(aid));
		alarm_state[(signed long int)(aid)] = 1;
	printf("_tr_node_id:Node_33_537;_tr_assign:alarm_state[%u]=%d;\n", __iv__index_expr_var17, alarm_state[__iv__index_expr_var17]);fflush(stdout);
	goto Node_33_540;
	Node_33_539:;
	unsigned int __iv__index_expr_var18 = (unsigned) ((signed long int)(aid));
		alarm_state[(signed long int)(aid)] = 0;
	printf("_tr_node_id:Node_33_539;_tr_assign:alarm_state[%u]=%d;\n", __iv__index_expr_var18, alarm_state[__iv__index_expr_var18]);fflush(stdout);
	Node_33_540:;
	Node_33_541:;
	printf("_tr_return;\n");fflush(stdout);
}
void Func_ControlTask() {
	__iv__branch_expr = (current_pc[2] == 1);
	printf("_tr_node_id:Node_34_544;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((current_pc[2] == 1)) goto Node_34_549;
	__iv__branch_expr = (current_pc[2] == 2);
	printf("_tr_node_id:Node_34_545;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((current_pc[2] == 2)) goto Node_34_550;
	__iv__branch_expr = (current_pc[2] == 3);
	printf("_tr_node_id:Node_34_546;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((current_pc[2] == 3)) goto Node_34_551;
	__iv__branch_expr = (current_pc[2] == 4);
	printf("_tr_node_id:Node_34_547;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((current_pc[2] == 4)) goto Node_34_552;
	goto Node_34_553;
	Node_34_549:;
	goto Node_34_553;
	Node_34_550:;
	goto Node_34_557;
	Node_34_551:;
	goto Node_34_563;
	Node_34_552:;
	goto Node_34_573;
	Node_34_553:;
	printf("_tr_call:GetResource;_tr_call_id:62;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:resid=%hhu;\n", (unsigned char)(1));fflush(stdout);
	GetResource((unsigned char)(1));
	unsigned int __iv__index_expr_var19 = (unsigned) (2);
		current_pc[2] = 2;
	printf("_tr_node_id:Node_34_555;_tr_assign:current_pc[%u]=%d;\n", __iv__index_expr_var19, current_pc[__iv__index_expr_var19]);fflush(stdout);
	goto Node_34_575;
	Node_34_557:;
		data = objData;
	printf("_tr_node_id:Node_34_559;_tr_dynamic_assign:	data = objData;\n");fflush(stdout);
	printf("_tr_call:ReleaseResource;_tr_call_id:63;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:resid=%hhu;\n", (unsigned char)(1));fflush(stdout);
	ReleaseResource((unsigned char)(1));
	unsigned int __iv__index_expr_var20 = (unsigned) (2);
		current_pc[2] = 3;
	printf("_tr_node_id:Node_34_561;_tr_assign:current_pc[%u]=%d;\n", __iv__index_expr_var20, current_pc[__iv__index_expr_var20]);fflush(stdout);
	goto Node_34_575;
	Node_34_563:;
		ctl_size = data.size;
	printf("_tr_node_id:Node_34_564;_tr_assign:ctl_size=%d;\n", ctl_size);fflush(stdout);
		position = data.position;
	printf("_tr_node_id:Node_34_565;_tr_assign:position=%d;\n", position);fflush(stdout);
	__iv__branch_expr = !(((ctl_size >= 1) && (position >= 1)));
	printf("_tr_node_id:Node_34_566;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!(((ctl_size >= 1) && (position >= 1)))) goto Node_34_569;
	printf("_tr_call:speedPIDController;_tr_call_id:64;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:d=%d;\n", ctl_size);fflush(stdout);
	speedPIDController(ctl_size);
	printf("_tr_call:directionPIDController;_tr_call_id:65;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:d=%d;\n", position);fflush(stdout);
		direction_adjustment = directionPIDController(position);
	printf("_tr_node_id:Node_34_568;_tr_assign:direction_adjustment=%d;\n", direction_adjustment);fflush(stdout);
	Node_34_569:;
	printf("_tr_call:TerminateTask;_tr_call_id:66;\n");fflush(stdout);
	TerminateTask();
	unsigned int __iv__index_expr_var21 = (unsigned) (2);
		current_pc[2] = 4;
	printf("_tr_node_id:Node_34_571;_tr_assign:current_pc[%u]=%d;\n", __iv__index_expr_var21, current_pc[__iv__index_expr_var21]);fflush(stdout);
	goto Node_34_575;
	Node_34_573:;
	unsigned int __iv__index_expr_var22 = (unsigned) (2);
		current_pc[2] = 1;
	printf("_tr_node_id:Node_34_574;_tr_assign:current_pc[%u]=%d;\n", __iv__index_expr_var22, current_pc[__iv__index_expr_var22]);fflush(stdout);
	Node_34_575:;
	printf("_tr_return;\n");fflush(stdout);
}
signed int SetEvent_Common(unsigned char reftask, unsigned char eventid) {
	__iv__branch_expr = !((!(((signed int)(reftask) >= 1)) || ((signed int)(reftask) >= 5)));
	printf("_tr_node_id:Node_35_577;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!((!(((signed int)(reftask) >= 1)) || ((signed int)(reftask) >= 5)))) goto Node_35_580;
	goto Node_35_595;
	Node_35_580:;
	__iv__branch_expr = !(((signed int)(task_static_info[(signed long int)(reftask)].extended) == 0));
	printf("_tr_node_id:Node_35_580;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!(((signed int)(task_static_info[(signed long int)(reftask)].extended) == 0))) goto Node_35_583;
	goto Node_35_595;
	Node_35_583:;
	__iv__branch_expr = ((signed int)(task_state[(signed long int)(reftask)]) == 0);
	printf("_tr_node_id:Node_35_583;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (((signed int)(task_state[(signed long int)(reftask)]) == 0)) goto Node_35_595;
	__iv__branch_expr = ((signed int)(Event_Table[(signed long int)(eventid)].task_alloc[(signed long int)(reftask)]) == 1);
	printf("_tr_node_id:Node_35_588;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (((signed int)(Event_Table[(signed long int)(eventid)].task_alloc[(signed long int)(reftask)]) == 1)) goto Node_35_594;
	unsigned int __iv__index_expr_var23 = (unsigned) ((signed long int)(eventid));
	unsigned int __iv__index_expr_var24 = (unsigned) ((signed long int)(reftask));
		Event_Table[(signed long int)(eventid)].task_alloc[(signed long int)(reftask)] = (Evt_State)(1);
	printf("_tr_node_id:Node_35_589;_tr_assign:Event_Table[%u].task_alloc[%u]=%d;\n", __iv__index_expr_var23, __iv__index_expr_var24, Event_Table[__iv__index_expr_var23].task_alloc[__iv__index_expr_var24]);fflush(stdout);
	__iv__branch_expr = !(((signed int)(task_state[(signed long int)(reftask)]) == 3));
	printf("_tr_node_id:Node_35_590;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!(((signed int)(task_state[(signed long int)(reftask)]) == 3))) goto Node_35_592;
	printf("_tr_call:push_task_into_readyQ;_tr_call_id:67;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:t=%hhu;\n", reftask);fflush(stdout);
	printf("_tr_param;_tr_assign:p=%hhu;\n", task_static_info[(signed long int)(reftask)].prio);fflush(stdout);
	printf("_tr_param;_tr_assign:pc=%d;\n", current_pc[(signed long int)(reftask)]);fflush(stdout);
	printf("_tr_param;_tr_assign:pushkind=%d;\n", (push_type)(2));fflush(stdout);
	push_task_into_readyQ(reftask, task_static_info[(signed long int)(reftask)].prio, current_pc[(signed long int)(reftask)], (push_type)(2));
	Node_35_592:;
	printf("_tr_call:reschedule;_tr_call_id:68;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:reschedule__api=%d;\n", (API)(6));fflush(stdout);
	printf("_tr_param;_tr_assign:tid=%hhu;\n", current_tid);fflush(stdout);
	reschedule((API)(6), current_tid);
	Node_35_594:;
	Node_35_595:;
	printf("_tr_return;\n");fflush(stdout);
}
signed int is_alloc(unsigned char res) {
	__iv__return_expr_is_alloc = 	(signed int)(Resource_Table[(signed long int)(res)].alloc);
	printf("_tr_node_id:Node_36_598;_tr_assign:__iv__return_expr_is_alloc=%d;\n", __iv__return_expr_is_alloc);fflush(stdout);
	printf("_tr_return;\n");fflush(stdout);
	return __iv__return_expr_is_alloc;
}
signed int Schedule_Common() {
	printf("_tr_call:reschedule;_tr_call_id:70;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:reschedule__api=%d;\n", (API)(3));fflush(stdout);
	printf("_tr_param;_tr_assign:tid=%hhu;\n", current_tid);fflush(stdout);
	reschedule((API)(3), current_tid);
	printf("_tr_return;\n");fflush(stdout);
}
signed int ChainTask_Common(unsigned char reftask) {
	goto Node_38_608;
	Node_38_608:;
	printf("_tr_return;\n");fflush(stdout);
}
signed int ActivateTask(unsigned char reftask) {
	printf("_tr_call:ActivateTask_Common;_tr_call_id:73;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:reftask=%hhu;\n", reftask);fflush(stdout);
	ActivateTask_Common(reftask);
	printf("_tr_return;\n");fflush(stdout);
}
signed int ClearEvent(unsigned char eventid) {
	printf("_tr_return;\n");fflush(stdout);
}
signed int Schedule() {
	printf("_tr_call:Schedule_Common;_tr_call_id:76;\n");fflush(stdout);
	Schedule_Common();
	printf("_tr_return;\n");fflush(stdout);
}
signed int TerminateTask_Common() {
	__iv__branch_expr = !(((signed int)(task_dyn_info[(signed long int)(current_tid)].act_cnt) >= 1));
	printf("_tr_node_id:Node_43_690;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!(((signed int)(task_dyn_info[(signed long int)(current_tid)].act_cnt) >= 1))) goto Node_43_692;
	unsigned int __iv__index_expr_var25 = (unsigned) ((signed long int)(current_tid));
		task_dyn_info[(signed long int)(current_tid)].act_cnt = (unsigned char)(((signed int)(task_dyn_info[(signed long int)(current_tid)].act_cnt) - 1));
	printf("_tr_node_id:Node_43_691;_tr_assign:task_dyn_info[%u].act_cnt=%hhu;\n", __iv__index_expr_var25, task_dyn_info[__iv__index_expr_var25].act_cnt);fflush(stdout);
	Node_43_692:;
	__iv__branch_expr = !(((signed int)(task_dyn_info[(signed long int)(current_tid)].act_cnt) >= 1));
	printf("_tr_node_id:Node_43_693;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!(((signed int)(task_dyn_info[(signed long int)(current_tid)].act_cnt) >= 1))) goto Node_43_696;
	unsigned int __iv__index_expr_var26 = (unsigned) ((signed long int)(current_tid));
		task_state[(signed long int)(current_tid)] = (unsigned char)(1);
	printf("_tr_node_id:Node_43_694;_tr_assign:task_state[%u]=%hhu;\n", __iv__index_expr_var26, task_state[__iv__index_expr_var26]);fflush(stdout);
	goto Node_43_697;
	Node_43_696:;
	unsigned int __iv__index_expr_var27 = (unsigned) ((signed long int)(current_tid));
		task_state[(signed long int)(current_tid)] = (unsigned char)(0);
	printf("_tr_node_id:Node_43_696;_tr_assign:task_state[%u]=%hhu;\n", __iv__index_expr_var27, task_state[__iv__index_expr_var27]);fflush(stdout);
	Node_43_697:;
	printf("_tr_call:reschedule;_tr_call_id:78;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:reschedule__api=%d;\n", (API)(1));fflush(stdout);
	printf("_tr_param;_tr_assign:tid=%hhu;\n", current_tid);fflush(stdout);
	reschedule((API)(1), current_tid);
	printf("_tr_return;\n");fflush(stdout);
}
signed int ChainTask(unsigned char reftask) {
	printf("_tr_call:ChainTask_Common;_tr_call_id:80;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:reftask=%hhu;\n", reftask);fflush(stdout);
	ChainTask_Common(reftask);
	printf("_tr_return;\n");fflush(stdout);
}
void term_nxtcam(U8 port_id) {
	printf("_tr_return;\n");fflush(stdout);
}
signed int CancelAlarm(unsigned char alarmID) {
	printf("_tr_return;\n");fflush(stdout);
}
signed int CancelAlarm_Common(unsigned char alarmID) {
	printf("_tr_return;\n");fflush(stdout);
}
void update_prop_automata() {
	printf("_tr_return;\n");fflush(stdout);
}
void user_1ms_isr_type2() {
	printf("_tr_return;\n");fflush(stdout);
}
signed int directionPIDController(signed int d) {
	printf("_tr_node_id:Node_50_716;_tr_decl:error;\n");fflush(stdout);
	signed int error;
		error = (83 - d);
	printf("_tr_node_id:Node_50_717;_tr_assign:error=%d;\n", error);fflush(stdout);
		integral = (integral + error);
	printf("_tr_node_id:Node_50_718;_tr_assign:integral=%d;\n", integral);fflush(stdout);
	printf("_tr_node_id:Node_50_719;_tr_decl:derivative;\n");fflush(stdout);
	signed int derivative;
		derivative = (error - prevError);
	printf("_tr_node_id:Node_50_720;_tr_assign:derivative=%d;\n", derivative);fflush(stdout);
	printf("_tr_node_id:Node_50_721;_tr_decl:out;\n");fflush(stdout);
	signed int out;
		out = (signed int)((((0.2 * (double)(error)) + (double)((0 * integral))) + (double)((0 * derivative))));
	printf("_tr_node_id:Node_50_722;_tr_assign:out=%d;\n", out);fflush(stdout);
	__iv__return_expr_directionPIDController = 	out;
	printf("_tr_node_id:Node_50_723;_tr_assign:__iv__return_expr_directionPIDController=%d;\n", __iv__return_expr_directionPIDController);fflush(stdout);
	printf("_tr_return;\n");fflush(stdout);
	return __iv__return_expr_directionPIDController;
}
signed int getY(U8 getY__rectindex) {
	printf("_tr_return;\n");fflush(stdout);
}
U8* getdata() {
	printf("_tr_return;\n");fflush(stdout);
}
void startup_process() {
	printf("_tr_node_id:Node_53_735;_tr_decl:i;\n");fflush(stdout);
	unsigned int i;
		i = 0u;
	printf("_tr_node_id:Node_53_736;_tr_assign:i=%u;\n", i);fflush(stdout);
	Node_53_738:;
	__iv__branch_expr = (i >= 4u);
	printf("_tr_node_id:Node_53_738;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((i >= 4u)) goto Node_53_747;
	__iv__branch_expr = ((signed int)(task_static_info[(signed long int)(i)].autostart) == 0);
	printf("_tr_node_id:Node_53_739;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (((signed int)(task_static_info[(signed long int)(i)].autostart) == 0)) goto Node_53_744;
	unsigned int __iv__index_expr_var28 = (unsigned) ((signed long int)(i));
		task_dyn_info[(signed long int)(i)].act_cnt = (unsigned char)(((signed int)(task_dyn_info[(signed long int)(i)].act_cnt) + 1));
	printf("_tr_node_id:Node_53_740;_tr_assign:task_dyn_info[%u].act_cnt=%hhu;\n", __iv__index_expr_var28, task_dyn_info[__iv__index_expr_var28].act_cnt);fflush(stdout);
		current_prio = task_static_info[(signed long int)(i)].prio;
	printf("_tr_node_id:Node_53_741;_tr_assign:current_prio=%hhu;\n", current_prio);fflush(stdout);
	printf("_tr_call:push_task_into_readyQ;_tr_call_id:86;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:t=%hhu;\n", (unsigned char)(i));fflush(stdout);
	printf("_tr_param;_tr_assign:p=%hhu;\n", current_prio);fflush(stdout);
	printf("_tr_param;_tr_assign:pc=%d;\n", 0);fflush(stdout);
	printf("_tr_param;_tr_assign:pushkind=%d;\n", (push_type)(0));fflush(stdout);
	push_task_into_readyQ((unsigned char)(i), current_prio, 0, (push_type)(0));
	unsigned int __iv__index_expr_var29 = (unsigned) ((signed long int)(i));
		task_state[(signed long int)(i)] = (unsigned char)(1);
	printf("_tr_node_id:Node_53_743;_tr_assign:task_state[%u]=%hhu;\n", __iv__index_expr_var29, task_state[__iv__index_expr_var29]);fflush(stdout);
	Node_53_744:;
		i = (i + 1u);
	printf("_tr_node_id:Node_53_745;_tr_assign:i=%u;\n", i);fflush(stdout);
	goto Node_53_738;
	Node_53_747:;
	__iv__branch_expr = (wholesize == 0);
	printf("_tr_node_id:Node_53_748;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((wholesize == 0)) goto Node_53_751;
	printf("_tr_call:get_task_from_readyQ;_tr_call_id:87;\n");fflush(stdout);
	get_task_from_readyQ();
	unsigned int __iv__index_expr_var30 = (unsigned) ((signed long int)(current_tid));
		task_state[(signed long int)(current_tid)] = (unsigned char)(2);
	printf("_tr_node_id:Node_53_750;_tr_assign:task_state[%u]=%hhu;\n", __iv__index_expr_var30, task_state[__iv__index_expr_var30]);fflush(stdout);
	Node_53_751:;
	printf("_tr_return;\n");fflush(stdout);
}
void display_goto_xy(signed int display_goto_xy__x, signed int y) {
	printf("_tr_return;\n");fflush(stdout);
}
void display_int(signed int val, unsigned int places) {
	printf("_tr_return;\n");fflush(stdout);
}
signed int speedPIDController(signed int d) {
	printf("_tr_node_id:Node_56_758;_tr_decl:error;\n");fflush(stdout);
	signed int error;
		error = (50 - d);
	printf("_tr_node_id:Node_56_759;_tr_assign:error=%d;\n", error);fflush(stdout);
		integral = (integral + error);
	printf("_tr_node_id:Node_56_760;_tr_assign:integral=%d;\n", integral);fflush(stdout);
		prevError = error;
	printf("_tr_node_id:Node_56_761;_tr_assign:prevError=%d;\n", prevError);fflush(stdout);
	printf("_tr_return;\n");fflush(stdout);
}
void display_string(char* str) {
	printf("_tr_return;\n");fflush(stdout);
}
void display_update() {
	printf("_tr_return;\n");fflush(stdout);
}
void ecrobot_device_initialize() {
	printf("_tr_return;\n");fflush(stdout);
}
void ecrobot_device_terminate() {
	printf("_tr_return;\n");fflush(stdout);
}
object_data_t getData() {
	printf("_tr_call:GetResource;_tr_call_id:89;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:resid=%hhu;\n", (unsigned char)(1));fflush(stdout);
	GetResource((unsigned char)(1));
	printf("_tr_call:ReleaseResource;_tr_call_id:90;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:resid=%hhu;\n", (unsigned char)(1));fflush(stdout);
	ReleaseResource((unsigned char)(1));
	printf("_tr_return;\n");fflush(stdout);
}
void get_task_from_readyQ() {
	__iv__branch_expr = !((wholesize == 0));
	printf("_tr_node_id:Node_62_777;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!((wholesize == 0))) goto Node_62_781;
		current_tid = (unsigned char)(0);
	printf("_tr_node_id:Node_62_778;_tr_assign:current_tid=%hhu;\n", current_tid);fflush(stdout);
		current_prio = (unsigned char)(0);
	printf("_tr_node_id:Node_62_779;_tr_assign:current_prio=%hhu;\n", current_prio);fflush(stdout);
	goto Node_62_797;
	Node_62_781:;
		current_tid = readyQ[(signed long int)(max_prio)][(signed long int)(front[(signed long int)(max_prio)])].tid;
	printf("_tr_node_id:Node_62_781;_tr_assign:current_tid=%hhu;\n", current_tid);fflush(stdout);
		current_prio = max_prio;
	printf("_tr_node_id:Node_62_782;_tr_assign:current_prio=%hhu;\n", current_prio);fflush(stdout);
	unsigned int __iv__index_expr_var31 = (unsigned) ((signed long int)(max_prio));
	unsigned int __iv__index_expr_var32 = (unsigned) ((signed long int)(front[(signed long int)(max_prio)]));
		readyQ[(signed long int)(max_prio)][(signed long int)(front[(signed long int)(max_prio)])].tid = (unsigned char)(0);
	printf("_tr_node_id:Node_62_783;_tr_assign:readyQ[%u][%u].tid=%hhu;\n", __iv__index_expr_var31, __iv__index_expr_var32, readyQ[__iv__index_expr_var31][__iv__index_expr_var32].tid);fflush(stdout);
	unsigned int __iv__index_expr_var33 = (unsigned) ((signed long int)(max_prio));
		front[(signed long int)(max_prio)] = ((front[(signed long int)(max_prio)] + 1) % 4);
	printf("_tr_node_id:Node_62_784;_tr_assign:front[%u]=%d;\n", __iv__index_expr_var33, front[__iv__index_expr_var33]);fflush(stdout);
	unsigned int __iv__index_expr_var34 = (unsigned) ((signed long int)(current_prio));
		size[(signed long int)(current_prio)] = (size[(signed long int)(current_prio)] - 1);
	printf("_tr_node_id:Node_62_785;_tr_assign:size[%u]=%d;\n", __iv__index_expr_var34, size[__iv__index_expr_var34]);fflush(stdout);
		wholesize = (wholesize - 1);
	printf("_tr_node_id:Node_62_786;_tr_assign:wholesize=%d;\n", wholesize);fflush(stdout);
		max_prio = current_prio;
	printf("_tr_node_id:Node_62_787;_tr_assign:max_prio=%hhu;\n", max_prio);fflush(stdout);
	Node_62_789:;
	__iv__branch_expr = !((size[(signed long int)(max_prio)] == 0));
	printf("_tr_node_id:Node_62_789;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!((size[(signed long int)(max_prio)] == 0))) goto Node_62_795;
	__iv__branch_expr = ((signed int)(max_prio) == 0);
	printf("_tr_node_id:Node_62_790;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (((signed int)(max_prio) == 0)) goto Node_62_795;
		max_prio = (unsigned char)(((signed int)(max_prio) - 1));
	printf("_tr_node_id:Node_62_793;_tr_assign:max_prio=%hhu;\n", max_prio);fflush(stdout);
	goto Node_62_789;
	Node_62_795:;
	unsigned int __iv__index_expr_var35 = (unsigned) ((signed long int)(current_tid));
		task_state[(signed long int)(current_tid)] = (unsigned char)(2);
	printf("_tr_node_id:Node_62_796;_tr_assign:task_state[%u]=%hhu;\n", __iv__index_expr_var35, task_state[__iv__index_expr_var35]);fflush(stdout);
	Node_62_797:;
	printf("_tr_return;\n");fflush(stdout);
}
void handleISR() {
	printf("_tr_return;\n");fflush(stdout);
}
void i2c_disable(signed int port) {
	printf("_tr_return;\n");fflush(stdout);
}
void i2c_enable(signed int port) {
	printf("_tr_return;\n");fflush(stdout);
}
void init_nxtcam(U8 port_id) {
	printf("_tr_return;\n");fflush(stdout);
}
void initialize() {
	unsigned int __iv__index_expr_var36 = (unsigned) (0);
		task_static_info[0].max_act_cnt = (unsigned char)(1);
	printf("_tr_node_id:Node_67_807;_tr_assign:task_static_info[%u].max_act_cnt=%hhu;\n", __iv__index_expr_var36, task_static_info[__iv__index_expr_var36].max_act_cnt);fflush(stdout);
	unsigned int __iv__index_expr_var37 = (unsigned) (0);
		task_static_info[0].preemptable = (unsigned char)(1);
	printf("_tr_node_id:Node_67_808;_tr_assign:task_static_info[%u].preemptable=%hhu;\n", __iv__index_expr_var37, task_static_info[__iv__index_expr_var37].preemptable);fflush(stdout);
	unsigned int __iv__index_expr_var38 = (unsigned) (0);
		task_static_info[0].prio = (unsigned char)(0);
	printf("_tr_node_id:Node_67_809;_tr_assign:task_static_info[%u].prio=%hhu;\n", __iv__index_expr_var38, task_static_info[__iv__index_expr_var38].prio);fflush(stdout);
	unsigned int __iv__index_expr_var39 = (unsigned) (0);
		task_static_info[0].autostart = (unsigned char)(0);
	printf("_tr_node_id:Node_67_810;_tr_assign:task_static_info[%u].autostart=%hhu;\n", __iv__index_expr_var39, task_static_info[__iv__index_expr_var39].autostart);fflush(stdout);
	unsigned int __iv__index_expr_var40 = (unsigned) (0);
		task_static_info[0].extended = (unsigned char)(0);
	printf("_tr_node_id:Node_67_811;_tr_assign:task_static_info[%u].extended=%hhu;\n", __iv__index_expr_var40, task_static_info[__iv__index_expr_var40].extended);fflush(stdout);
	unsigned int __iv__index_expr_var41 = (unsigned) (1);
		task_static_info[1].max_act_cnt = (unsigned char)(1);
	printf("_tr_node_id:Node_67_812;_tr_assign:task_static_info[%u].max_act_cnt=%hhu;\n", __iv__index_expr_var41, task_static_info[__iv__index_expr_var41].max_act_cnt);fflush(stdout);
	unsigned int __iv__index_expr_var42 = (unsigned) (1);
		task_static_info[1].preemptable = (unsigned char)(1);
	printf("_tr_node_id:Node_67_813;_tr_assign:task_static_info[%u].preemptable=%hhu;\n", __iv__index_expr_var42, task_static_info[__iv__index_expr_var42].preemptable);fflush(stdout);
	unsigned int __iv__index_expr_var43 = (unsigned) (1);
		task_static_info[1].prio = (unsigned char)(3);
	printf("_tr_node_id:Node_67_814;_tr_assign:task_static_info[%u].prio=%hhu;\n", __iv__index_expr_var43, task_static_info[__iv__index_expr_var43].prio);fflush(stdout);
	unsigned int __iv__index_expr_var44 = (unsigned) (1);
		task_static_info[1].autostart = (unsigned char)(0);
	printf("_tr_node_id:Node_67_815;_tr_assign:task_static_info[%u].autostart=%hhu;\n", __iv__index_expr_var44, task_static_info[__iv__index_expr_var44].autostart);fflush(stdout);
	unsigned int __iv__index_expr_var45 = (unsigned) (1);
		task_static_info[1].extended = (unsigned char)(0);
	printf("_tr_node_id:Node_67_816;_tr_assign:task_static_info[%u].extended=%hhu;\n", __iv__index_expr_var45, task_static_info[__iv__index_expr_var45].extended);fflush(stdout);
	unsigned int __iv__index_expr_var46 = (unsigned) (2);
		task_static_info[2].max_act_cnt = (unsigned char)(1);
	printf("_tr_node_id:Node_67_817;_tr_assign:task_static_info[%u].max_act_cnt=%hhu;\n", __iv__index_expr_var46, task_static_info[__iv__index_expr_var46].max_act_cnt);fflush(stdout);
	unsigned int __iv__index_expr_var47 = (unsigned) (2);
		task_static_info[2].preemptable = (unsigned char)(1);
	printf("_tr_node_id:Node_67_818;_tr_assign:task_static_info[%u].preemptable=%hhu;\n", __iv__index_expr_var47, task_static_info[__iv__index_expr_var47].preemptable);fflush(stdout);
	unsigned int __iv__index_expr_var48 = (unsigned) (2);
		task_static_info[2].prio = (unsigned char)(2);
	printf("_tr_node_id:Node_67_819;_tr_assign:task_static_info[%u].prio=%hhu;\n", __iv__index_expr_var48, task_static_info[__iv__index_expr_var48].prio);fflush(stdout);
	unsigned int __iv__index_expr_var49 = (unsigned) (2);
		task_static_info[2].autostart = (unsigned char)(1);
	printf("_tr_node_id:Node_67_820;_tr_assign:task_static_info[%u].autostart=%hhu;\n", __iv__index_expr_var49, task_static_info[__iv__index_expr_var49].autostart);fflush(stdout);
	unsigned int __iv__index_expr_var50 = (unsigned) (2);
		task_static_info[2].extended = (unsigned char)(0);
	printf("_tr_node_id:Node_67_821;_tr_assign:task_static_info[%u].extended=%hhu;\n", __iv__index_expr_var50, task_static_info[__iv__index_expr_var50].extended);fflush(stdout);
	unsigned int __iv__index_expr_var51 = (unsigned) (1);
		task_dyn_info[1].dyn_prio = task_static_info[1].prio;
	printf("_tr_node_id:Node_67_822;_tr_assign:task_dyn_info[%u].dyn_prio=%hhu;\n", __iv__index_expr_var51, task_dyn_info[__iv__index_expr_var51].dyn_prio);fflush(stdout);
	unsigned int __iv__index_expr_var52 = (unsigned) (1);
		task_dyn_info[1].act_cnt = (unsigned char)(0);
	printf("_tr_node_id:Node_67_823;_tr_assign:task_dyn_info[%u].act_cnt=%hhu;\n", __iv__index_expr_var52, task_dyn_info[__iv__index_expr_var52].act_cnt);fflush(stdout);
	unsigned int __iv__index_expr_var53 = (unsigned) (2);
		task_dyn_info[2].dyn_prio = task_static_info[2].prio;
	printf("_tr_node_id:Node_67_824;_tr_assign:task_dyn_info[%u].dyn_prio=%hhu;\n", __iv__index_expr_var53, task_dyn_info[__iv__index_expr_var53].dyn_prio);fflush(stdout);
	unsigned int __iv__index_expr_var54 = (unsigned) (2);
		task_dyn_info[2].act_cnt = (unsigned char)(0);
	printf("_tr_node_id:Node_67_825;_tr_assign:task_dyn_info[%u].act_cnt=%hhu;\n", __iv__index_expr_var54, task_dyn_info[__iv__index_expr_var54].act_cnt);fflush(stdout);
	unsigned int __iv__index_expr_var55 = (unsigned) (1);
		alarm_state[1] = 1;
	printf("_tr_node_id:Node_67_826;_tr_assign:alarm_state[%u]=%d;\n", __iv__index_expr_var55, alarm_state[__iv__index_expr_var55]);fflush(stdout);
	unsigned int __iv__index_expr_var56 = (unsigned) (1);
		alarm_info[1].cycle = 30u;
	printf("_tr_node_id:Node_67_827;_tr_assign:alarm_info[%u].cycle=%u;\n", __iv__index_expr_var56, alarm_info[__iv__index_expr_var56].cycle);fflush(stdout);
	unsigned int __iv__index_expr_var57 = (unsigned) (1);
		alarm_info[1].next_alarm_tick = 1u;
	printf("_tr_node_id:Node_67_828;_tr_assign:alarm_info[%u].next_alarm_tick=%u;\n", __iv__index_expr_var57, alarm_info[__iv__index_expr_var57].next_alarm_tick);fflush(stdout);
	unsigned int __iv__index_expr_var58 = (unsigned) (1);
		alarm_info[1].api = (API)(0);
	printf("_tr_node_id:Node_67_829;_tr_assign:alarm_info[%u].api=%d;\n", __iv__index_expr_var58, alarm_info[__iv__index_expr_var58].api);fflush(stdout);
	unsigned int __iv__index_expr_var59 = (unsigned) (1);
		alarm_info[1].param1 = (unsigned char)(1);
	printf("_tr_node_id:Node_67_830;_tr_assign:alarm_info[%u].param1=%hhu;\n", __iv__index_expr_var59, alarm_info[__iv__index_expr_var59].param1);fflush(stdout);
	unsigned int __iv__index_expr_var60 = (unsigned) (1);
		alarm_info[1].param2 = (unsigned char)(0);
	printf("_tr_node_id:Node_67_831;_tr_assign:alarm_info[%u].param2=%hhu;\n", __iv__index_expr_var60, alarm_info[__iv__index_expr_var60].param2);fflush(stdout);
	unsigned int __iv__index_expr_var61 = (unsigned) (2);
		alarm_state[2] = 1;
	printf("_tr_node_id:Node_67_832;_tr_assign:alarm_state[%u]=%d;\n", __iv__index_expr_var61, alarm_state[__iv__index_expr_var61]);fflush(stdout);
	unsigned int __iv__index_expr_var62 = (unsigned) (2);
		alarm_info[2].cycle = 50u;
	printf("_tr_node_id:Node_67_833;_tr_assign:alarm_info[%u].cycle=%u;\n", __iv__index_expr_var62, alarm_info[__iv__index_expr_var62].cycle);fflush(stdout);
	unsigned int __iv__index_expr_var63 = (unsigned) (2);
		alarm_info[2].next_alarm_tick = 1u;
	printf("_tr_node_id:Node_67_834;_tr_assign:alarm_info[%u].next_alarm_tick=%u;\n", __iv__index_expr_var63, alarm_info[__iv__index_expr_var63].next_alarm_tick);fflush(stdout);
	unsigned int __iv__index_expr_var64 = (unsigned) (2);
		alarm_info[2].api = (API)(0);
	printf("_tr_node_id:Node_67_835;_tr_assign:alarm_info[%u].api=%d;\n", __iv__index_expr_var64, alarm_info[__iv__index_expr_var64].api);fflush(stdout);
	unsigned int __iv__index_expr_var65 = (unsigned) (2);
		alarm_info[2].param1 = (unsigned char)(2);
	printf("_tr_node_id:Node_67_836;_tr_assign:alarm_info[%u].param1=%hhu;\n", __iv__index_expr_var65, alarm_info[__iv__index_expr_var65].param1);fflush(stdout);
	unsigned int __iv__index_expr_var66 = (unsigned) (2);
		alarm_info[2].param2 = (unsigned char)(0);
	printf("_tr_node_id:Node_67_837;_tr_assign:alarm_info[%u].param2=%hhu;\n", __iv__index_expr_var66, alarm_info[__iv__index_expr_var66].param2);fflush(stdout);
	unsigned int __iv__index_expr_var67 = (unsigned) (1);
		Resource_Table[1].c_prio = 4u;
	printf("_tr_node_id:Node_67_838;_tr_assign:Resource_Table[%u].c_prio=%u;\n", __iv__index_expr_var67, Resource_Table[__iv__index_expr_var67].c_prio);fflush(stdout);
	printf("_tr_return;\n");fflush(stdout);
}
void nxt_avr_set_input_power(unsigned char a, signed int b) {
	printf("_tr_return;\n");fflush(stdout);
}
void nxt_motor_set_speed(unsigned int n, signed int speed_percent, signed int brake) {
	printf("_tr_return;\n");fflush(stdout);
}
void push_task_into_readyQ(unsigned char t, unsigned char p, signed int pc, push_type pushkind) {
	__iv__branch_expr = (size[(signed long int)(p)] == 3);
	printf("_tr_node_id:Node_70_844;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((size[(signed long int)(p)] == 3)) goto Node_70_861;
	__iv__branch_expr = !(((signed int)(pushkind) == 1));
	printf("_tr_node_id:Node_70_845;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!(((signed int)(pushkind) == 1))) goto Node_70_851;
	unsigned int __iv__index_expr_var68 = (unsigned) ((signed long int)(t));
		task_state[(signed long int)(t)] = (unsigned char)(1);
	printf("_tr_node_id:Node_70_846;_tr_assign:task_state[%u]=%hhu;\n", __iv__index_expr_var68, task_state[__iv__index_expr_var68]);fflush(stdout);
	unsigned int __iv__index_expr_var69 = (unsigned) ((signed long int)(p));
		front[(signed long int)(p)] = (((4 + front[(signed long int)(p)]) - 1) % 4);
	printf("_tr_node_id:Node_70_847;_tr_assign:front[%u]=%d;\n", __iv__index_expr_var69, front[__iv__index_expr_var69]);fflush(stdout);
		k = (unsigned char)(front[(signed long int)(p)]);
	printf("_tr_node_id:Node_70_848;_tr_assign:k=%hhu;\n", k);fflush(stdout);
	unsigned int __iv__index_expr_var70 = (unsigned) ((signed long int)(p));
	unsigned int __iv__index_expr_var71 = (unsigned) ((signed long int)(k));
		readyQ[(signed long int)(p)][(signed long int)(k)].tid = t;
	printf("_tr_node_id:Node_70_849;_tr_assign:readyQ[%u][%u].tid=%hhu;\n", __iv__index_expr_var70, __iv__index_expr_var71, readyQ[__iv__index_expr_var70][__iv__index_expr_var71].tid);fflush(stdout);
	goto Node_70_855;
	Node_70_851:;
	unsigned int __iv__index_expr_var72 = (unsigned) ((signed long int)(t));
		task_state[(signed long int)(t)] = (unsigned char)(1);
	printf("_tr_node_id:Node_70_851;_tr_assign:task_state[%u]=%hhu;\n", __iv__index_expr_var72, task_state[__iv__index_expr_var72]);fflush(stdout);
		k = (unsigned char)(rear[(signed long int)(p)]);
	printf("_tr_node_id:Node_70_852;_tr_assign:k=%hhu;\n", k);fflush(stdout);
	unsigned int __iv__index_expr_var73 = (unsigned) ((signed long int)(p));
	unsigned int __iv__index_expr_var74 = (unsigned) ((signed long int)(k));
		readyQ[(signed long int)(p)][(signed long int)(k)].tid = t;
	printf("_tr_node_id:Node_70_853;_tr_assign:readyQ[%u][%u].tid=%hhu;\n", __iv__index_expr_var73, __iv__index_expr_var74, readyQ[__iv__index_expr_var73][__iv__index_expr_var74].tid);fflush(stdout);
	unsigned int __iv__index_expr_var75 = (unsigned) ((signed long int)(p));
		rear[(signed long int)(p)] = (((4 + (signed int)(k)) + 1) % 4);
	printf("_tr_node_id:Node_70_854;_tr_assign:rear[%u]=%d;\n", __iv__index_expr_var75, rear[__iv__index_expr_var75]);fflush(stdout);
	Node_70_855:;
	unsigned int __iv__index_expr_var76 = (unsigned) ((signed long int)(p));
		size[(signed long int)(p)] = (size[(signed long int)(p)] + 1);
	printf("_tr_node_id:Node_70_856;_tr_assign:size[%u]=%d;\n", __iv__index_expr_var76, size[__iv__index_expr_var76]);fflush(stdout);
		wholesize = (wholesize + 1);
	printf("_tr_node_id:Node_70_857;_tr_assign:wholesize=%d;\n", wholesize);fflush(stdout);
	__iv__branch_expr = ((signed int)(max_prio) >= (signed int)(p));
	printf("_tr_node_id:Node_70_858;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (((signed int)(max_prio) >= (signed int)(p))) goto Node_70_860;
		max_prio = p;
	printf("_tr_node_id:Node_70_859;_tr_assign:max_prio=%hhu;\n", max_prio);fflush(stdout);
	Node_70_860:;
	Node_70_861:;
	printf("_tr_return;\n");fflush(stdout);
}
signed int reschedule(API reschedule__api, unsigned char tid) {
	__iv__branch_expr = !(((((signed int)(reschedule__api) == 1) || ((signed int)(reschedule__api) == 2)) || ((signed int)(reschedule__api) == 7)));
	printf("_tr_node_id:Node_71_863;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!(((((signed int)(reschedule__api) == 1) || ((signed int)(reschedule__api) == 2)) || ((signed int)(reschedule__api) == 7)))) goto Node_71_867;
	printf("_tr_call:get_task_from_readyQ;_tr_call_id:92;\n");fflush(stdout);
	get_task_from_readyQ();
	goto Node_71_876;
	Node_71_867:;
	__iv__branch_expr = !(((signed int)(task_static_info[(signed long int)(tid)].preemptable) == 0) ? !(((signed int)(reschedule__api) == 3)) ? TRUE : FALSE : FALSE);
	printf("_tr_node_id:Node_71_867;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!(((signed int)(task_static_info[(signed long int)(tid)].preemptable) == 0) ? !(((signed int)(reschedule__api) == 3)) ? TRUE : FALSE : FALSE)) goto Node_71_870;
	goto Node_71_876;
	Node_71_870:;
	__iv__branch_expr = ((signed int)(task_dyn_info[(signed long int)(tid)].dyn_prio) >= (signed int)(max_prio));
	printf("_tr_node_id:Node_71_870;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (((signed int)(task_dyn_info[(signed long int)(tid)].dyn_prio) >= (signed int)(max_prio))) goto Node_71_873;
	printf("_tr_call:push_task_into_readyQ;_tr_call_id:93;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:t=%hhu;\n", tid);fflush(stdout);
	printf("_tr_param;_tr_assign:p=%hhu;\n", task_dyn_info[(signed long int)(tid)].dyn_prio);fflush(stdout);
	printf("_tr_param;_tr_assign:pc=%d;\n", current_pc[(signed long int)(tid)]);fflush(stdout);
	printf("_tr_param;_tr_assign:pushkind=%d;\n", (push_type)(1));fflush(stdout);
	push_task_into_readyQ(tid, task_dyn_info[(signed long int)(tid)].dyn_prio, current_pc[(signed long int)(tid)], (push_type)(1));
	printf("_tr_call:get_task_from_readyQ;_tr_call_id:94;\n");fflush(stdout);
	get_task_from_readyQ();
	Node_71_873:;
	Node_71_876:;
	printf("_tr_return;\n");fflush(stdout);
}
signed int __iv__getbiggestrect_stub(U8 pcolorid, signed int pminarea){
	signed int __iv__return_expr_getbiggestrect;
	if(pcolorid==nxtcamdata[36]) if(nxtcamdata[0]>=nxtcamdata[15]) __iv__return_expr_getbiggestrect = 6; else if(nxtcamdata[1]>=nxtcamdata[9]) __iv__return_expr_getbiggestrect = nxtcamdata[6]; else __iv__return_expr_getbiggestrect = 7; else if(pcolorid==nxtcamdata[1]) if(nxtcamdata[12]<nxtcamdata[40]) if(3==nxtcamdata[38]) __iv__return_expr_getbiggestrect = nxtcamdata[38]; else __iv__return_expr_getbiggestrect = 5; else if(nxtcamdata[18]>=nxtcamdata[20]) if(nxtcamdata[31]==nxtcamdata[29]) __iv__return_expr_getbiggestrect = nxtcamdata[17]; else __iv__return_expr_getbiggestrect = 1; else __iv__return_expr_getbiggestrect = 0; else if(pcolorid==nxtcamdata[21]) __iv__return_expr_getbiggestrect = 4; else __iv__return_expr_getbiggestrect = (-1); 
	__CPROVER_assume((-1 <= __iv__return_expr_getbiggestrect && __iv__return_expr_getbiggestrect <= 7));
	printf("_tr_return;\n");fflush(stdout);
	return __iv__return_expr_getbiggestrect;
}
