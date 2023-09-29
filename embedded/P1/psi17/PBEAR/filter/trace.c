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
signed int i2c_start_transaction(signed int port, unsigned int address, signed int internal_address, signed int n_internal_address_bytes, unsigned char* i2c_start_transaction__data, unsigned int nbytes, signed int write) {
	printf("_tr_node_id:Node_3_29;_tr_decl:i2c_start_transaction_ret;\n");fflush(stdout);
	signed int i2c_start_transaction_ret;
	printf("_tr_system_call:__VERIFIER_nondet_signed_int;_tr_call_id:4;\n");fflush(stdout);
		i2c_start_transaction_ret = __VERIFIER_nondet_signed_int();
	printf("_tr_node_id:Node_3_32;_tr_assign:i2c_start_transaction_ret=%d;\n", i2c_start_transaction_ret);fflush(stdout);
	printf("_tr_node_id:Node_3_33;_tr_decl:i;\n");fflush(stdout);
	signed int i;
	printf("_tr_node_id:Node_3_34;_tr_decl:return_value___VERIFIER_nondet_unsigned_char;\n");fflush(stdout);
	unsigned char return_value___VERIFIER_nondet_unsigned_char;
	printf("_tr_node_id:Node_3_35;_tr_decl:return_value_nondet_unsigned_char;\n");fflush(stdout);
	signed int return_value_nondet_unsigned_char;
	printf("_tr_system_call:__VERIFIER_nondet_signed_int;_tr_call_id:5;\n");fflush(stdout);
		return_value_nondet_unsigned_char = __VERIFIER_nondet_signed_int();
	printf("_tr_node_id:Node_3_36;_tr_assign:return_value_nondet_unsigned_char=%d;\n", return_value_nondet_unsigned_char);fflush(stdout);
		return_value___VERIFIER_nondet_unsigned_char = (unsigned char)(return_value_nondet_unsigned_char);
	printf("_tr_node_id:Node_3_37;_tr_assign:return_value___VERIFIER_nondet_unsigned_char=%hhu;\n", return_value___VERIFIER_nondet_unsigned_char);fflush(stdout);
		i2c_start_transaction__data[0l] = return_value___VERIFIER_nondet_unsigned_char;
	printf("_tr_node_id:Node_3_38;_tr_dynamic_assign:	i2c_start_transaction__data[0l] = return_value___VERIFIER_nondet_unsigned_char;\n");fflush(stdout);
	printf("_tr_system_call:__CPROVER_assume;_tr_call_id:6;\n");fflush(stdout);
	__CPROVER_assume(((signed int)(i2c_start_transaction__data[0l]) <= 8));
		i = 1;
	printf("_tr_node_id:Node_3_40;_tr_assign:i=%d;\n", i);fflush(stdout);
	Node_3_42:;
	__iv__branch_expr = ((unsigned int)(i) >= nbytes);
	printf("_tr_node_id:Node_3_42;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (((unsigned int)(i) >= nbytes)) goto Node_3_52;
	printf("_tr_node_id:Node_3_43;_tr_decl:return_value___VERIFIER_nondet_unsigned_char_0;\n");fflush(stdout);
	unsigned char return_value___VERIFIER_nondet_unsigned_char_0;
	printf("_tr_node_id:Node_3_44;_tr_decl:return_value_nondet_unsigned_char_0;\n");fflush(stdout);
	signed int return_value_nondet_unsigned_char_0;
	printf("_tr_system_call:__VERIFIER_nondet_signed_int;_tr_call_id:7;\n");fflush(stdout);
		return_value_nondet_unsigned_char_0 = __VERIFIER_nondet_signed_int();
	printf("_tr_node_id:Node_3_45;_tr_assign:return_value_nondet_unsigned_char_0=%d;\n", return_value_nondet_unsigned_char_0);fflush(stdout);
		return_value___VERIFIER_nondet_unsigned_char_0 = (unsigned char)(return_value_nondet_unsigned_char_0);
	printf("_tr_node_id:Node_3_46;_tr_assign:return_value___VERIFIER_nondet_unsigned_char_0=%hhu;\n", return_value___VERIFIER_nondet_unsigned_char_0);fflush(stdout);
		i2c_start_transaction__data[(signed long int)(i)] = return_value___VERIFIER_nondet_unsigned_char_0;
	printf("_tr_node_id:Node_3_47;_tr_dynamic_assign:	i2c_start_transaction__data[(signed long int)(i)] = return_value___VERIFIER_nondet_unsigned_char_0;\n");fflush(stdout);
		i = (i + 1);
	printf("_tr_node_id:Node_3_50;_tr_assign:i=%d;\n", i);fflush(stdout);
	goto Node_3_42;
	Node_3_52:;
	__iv__return_expr_i2c_start_transaction = 	i2c_start_transaction_ret;
	printf("_tr_node_id:Node_3_53;_tr_assign:__iv__return_expr_i2c_start_transaction=%d;\n", __iv__return_expr_i2c_start_transaction);fflush(stdout);
	printf("_tr_return;\n");fflush(stdout);
	return __iv__return_expr_i2c_start_transaction;
}
signed int i2c_busy(signed int port) {
	printf("_tr_node_id:Node_4_61;_tr_decl:i2c_busy_ret;\n");fflush(stdout);
	signed int i2c_busy_ret;
	printf("_tr_system_call:__VERIFIER_nondet_signed_int;_tr_call_id:8;\n");fflush(stdout);
		i2c_busy_ret = __VERIFIER_nondet_signed_int();
	printf("_tr_node_id:Node_4_64;_tr_assign:i2c_busy_ret=%d;\n", i2c_busy_ret);fflush(stdout);
	__iv__return_expr_i2c_busy = 	i2c_busy_ret;
	printf("_tr_node_id:Node_4_65;_tr_assign:__iv__return_expr_i2c_busy=%d;\n", __iv__return_expr_i2c_busy);fflush(stdout);
	printf("_tr_return;\n");fflush(stdout);
	return __iv__return_expr_i2c_busy;
}
signed int getbiggestrect(U8 pcolorid, signed int pminarea) {
	printf("_tr_node_id:Node_5_70;_tr_decl:getbiggestrect__1__rectindex;\n");fflush(stdout);
	signed int getbiggestrect__1__rectindex;
		getbiggestrect__1__rectindex = -1;
	printf("_tr_node_id:Node_5_71;_tr_assign:getbiggestrect__1__rectindex=%d;\n", getbiggestrect__1__rectindex);fflush(stdout);
	printf("_tr_node_id:Node_5_72;_tr_decl:i;\n");fflush(stdout);
	signed int i;
	printf("_tr_node_id:Node_5_73;_tr_decl:maxarea;\n");fflush(stdout);
	signed int maxarea;
		maxarea = pminarea;
	printf("_tr_node_id:Node_5_74;_tr_assign:maxarea=%d;\n", maxarea);fflush(stdout);
		i = 0;
	printf("_tr_node_id:Node_5_75;_tr_assign:i=%d;\n", i);fflush(stdout);
	Node_5_77:;
	__iv__branch_expr = (i >= (signed int)(nxtcamdata[0]));
	printf("_tr_node_id:Node_5_77;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((i >= (signed int)(nxtcamdata[0]))) goto Node_5_98;
	printf("_tr_node_id:Node_5_78;_tr_decl:colorid;\n");fflush(stdout);
	signed int colorid;
		colorid = (signed int)(nxtcamdata[(signed long int)(((1 + (5 * i)) + 0))]);
	printf("_tr_node_id:Node_5_79;_tr_assign:colorid=%d;\n", colorid);fflush(stdout);
	__iv__branch_expr = !((colorid == (signed int)(pcolorid)));
	printf("_tr_node_id:Node_5_80;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!((colorid == (signed int)(pcolorid)))) goto Node_5_94;
	printf("_tr_node_id:Node_5_81;_tr_decl:getbiggestrect__1__1__1__1__area;\n");fflush(stdout);
	signed int getbiggestrect__1__1__1__1__area;
	printf("_tr_call:getArea;_tr_call_id:9;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:getArea__rectindex=%hhu;\n", (U8)(i));fflush(stdout);
		getbiggestrect__1__1__1__1__area = getArea((U8)(i));
	printf("_tr_node_id:Node_5_86;_tr_assign:getbiggestrect__1__1__1__1__area=%d;\n", getbiggestrect__1__1__1__1__area);fflush(stdout);
	__iv__branch_expr = !((getbiggestrect__1__1__1__1__area >= maxarea));
	printf("_tr_node_id:Node_5_87;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!((getbiggestrect__1__1__1__1__area >= maxarea))) goto Node_5_90;
		maxarea = getbiggestrect__1__1__1__1__area;
	printf("_tr_node_id:Node_5_88;_tr_assign:maxarea=%d;\n", maxarea);fflush(stdout);
		getbiggestrect__1__rectindex = i;
	printf("_tr_node_id:Node_5_89;_tr_assign:getbiggestrect__1__rectindex=%d;\n", getbiggestrect__1__rectindex);fflush(stdout);
	Node_5_90:;
	Node_5_94:;
		i = (i + 1);
	printf("_tr_node_id:Node_5_96;_tr_assign:i=%d;\n", i);fflush(stdout);
	goto Node_5_77;
	Node_5_98:;
	__iv__return_expr_getbiggestrect = 	getbiggestrect__1__rectindex;
	printf("_tr_node_id:Node_5_99;_tr_assign:__iv__return_expr_getbiggestrect=%d;\n", __iv__return_expr_getbiggestrect);fflush(stdout);
	printf("_tr_return;\n");fflush(stdout);
	return __iv__return_expr_getbiggestrect;
}
signed int ReleaseResource_Common(unsigned char resid) {
	printf("_tr_node_id:Node_6_105;_tr_decl:i;\n");fflush(stdout);
	unsigned char i;
	printf("_tr_node_id:Node_6_106;_tr_decl:return_value_is_alloc_0;\n");fflush(stdout);
	signed int return_value_is_alloc_0;
	__iv__branch_expr = !((!(((signed int)(resid) >= 0)) || ((signed int)(resid) >= 3)));
	printf("_tr_node_id:Node_6_107;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!((!(((signed int)(resid) >= 0)) || ((signed int)(resid) >= 3)))) goto Node_6_110;
	goto Node_6_143;
	Node_6_110:;
	printf("_tr_call:is_alloc;_tr_call_id:10;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:res=%hhu;\n", resid);fflush(stdout);
		return_value_is_alloc_0 = is_alloc(resid);
	printf("_tr_node_id:Node_6_110;_tr_assign:return_value_is_alloc_0=%d;\n", return_value_is_alloc_0);fflush(stdout);
	__iv__branch_expr = (return_value_is_alloc_0 == (signed int)(current_tid));
	printf("_tr_node_id:Node_6_111;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((return_value_is_alloc_0 == (signed int)(current_tid))) goto Node_6_114;
	goto Node_6_143;
	Node_6_114:;
	__iv__branch_expr = (Resource_Table[(signed long int)(resid)].c_prio >= (unsigned int)(task_static_info[(signed long int)(current_tid)].prio));
	printf("_tr_node_id:Node_6_114;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((Resource_Table[(signed long int)(resid)].c_prio >= (unsigned int)(task_static_info[(signed long int)(current_tid)].prio))) goto Node_6_117;
	goto Node_6_143;
	Node_6_117:;
	unsigned int __iv__index_expr_var1 = (unsigned) ((signed long int)(resid));
		Resource_Table[(signed long int)(resid)].alloc = (unsigned char)(0);
	printf("_tr_node_id:Node_6_117;_tr_assign:Resource_Table[%u].alloc=%hhu;\n", __iv__index_expr_var1, Resource_Table[__iv__index_expr_var1].alloc);fflush(stdout);
	__iv__branch_expr = ((unsigned int)(task_static_info[(signed long int)(current_tid)].prio) >= Resource_Table[(signed long int)(resid)].c_prio);
	printf("_tr_node_id:Node_6_118;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (((unsigned int)(task_static_info[(signed long int)(current_tid)].prio) >= Resource_Table[(signed long int)(resid)].c_prio)) goto Node_6_136;
		current_prio = task_static_info[(signed long int)(current_tid)].prio;
	printf("_tr_node_id:Node_6_119;_tr_assign:current_prio=%hhu;\n", current_prio);fflush(stdout);
		i = (unsigned char)(0);
	printf("_tr_node_id:Node_6_120;_tr_assign:i=%hhu;\n", i);fflush(stdout);
	Node_6_121:;
	__iv__branch_expr = ((signed int)(i) >= 3);
	printf("_tr_node_id:Node_6_121;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (((signed int)(i) >= 3)) goto Node_6_135;
	printf("_tr_node_id:Node_6_122;_tr_decl:return_value_is_alloc;\n");fflush(stdout);
	signed int return_value_is_alloc;
	printf("_tr_call:is_alloc;_tr_call_id:11;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:res=%hhu;\n", i);fflush(stdout);
		return_value_is_alloc = is_alloc(i);
	printf("_tr_node_id:Node_6_124;_tr_assign:return_value_is_alloc=%d;\n", return_value_is_alloc);fflush(stdout);
	__iv__branch_expr = !((return_value_is_alloc == (signed int)(current_tid)));
	printf("_tr_node_id:Node_6_126;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!((return_value_is_alloc == (signed int)(current_tid)))) goto Node_6_130;
	__iv__branch_expr = ((unsigned int)(current_prio) >= Resource_Table[(signed long int)(resid)].c_prio);
	printf("_tr_node_id:Node_6_127;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (((unsigned int)(current_prio) >= Resource_Table[(signed long int)(resid)].c_prio)) goto Node_6_129;
		current_prio = (unsigned char)(Resource_Table[(signed long int)(i)].c_prio);
	printf("_tr_node_id:Node_6_128;_tr_assign:current_prio=%hhu;\n", current_prio);fflush(stdout);
	Node_6_129:;
	Node_6_130:;
		i = (unsigned char)(((signed int)(i) + 1));
	printf("_tr_node_id:Node_6_131;_tr_assign:i=%hhu;\n", i);fflush(stdout);
	goto Node_6_121;
	Node_6_135:;
	Node_6_136:;
	unsigned int __iv__index_expr_var2 = (unsigned) ((signed long int)(current_tid));
		task_dyn_info[(signed long int)(current_tid)].dyn_prio = current_prio;
	printf("_tr_node_id:Node_6_137;_tr_assign:task_dyn_info[%u].dyn_prio=%hhu;\n", __iv__index_expr_var2, task_dyn_info[__iv__index_expr_var2].dyn_prio);fflush(stdout);
	printf("_tr_call:reschedule;_tr_call_id:12;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:reschedule__api=%d;\n", (API)(5));fflush(stdout);
	printf("_tr_param;_tr_assign:tid=%hhu;\n", current_tid);fflush(stdout);
	reschedule((API)(5), current_tid);
	goto Node_6_143;
	Node_6_143:;
	printf("_tr_return;\n");fflush(stdout);
}
signed int postjob() {
	printf("_tr_node_id:Node_7_148;_tr_decl:return_value_is_active_alarm_exists;\n");fflush(stdout);
	signed int return_value_is_active_alarm_exists;
	printf("_tr_call:is_active_alarm_exists;_tr_call_id:14;\n");fflush(stdout);
		return_value_is_active_alarm_exists = is_active_alarm_exists();
	printf("_tr_node_id:Node_7_150;_tr_assign:return_value_is_active_alarm_exists=%d;\n", return_value_is_active_alarm_exists);fflush(stdout);
	__iv__branch_expr = (return_value_is_active_alarm_exists == 0);
	printf("_tr_node_id:Node_7_152;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((return_value_is_active_alarm_exists == 0)) goto Node_7_164;
	printf("_tr_node_id:Node_7_153;_tr_decl:aid;\n");fflush(stdout);
	signed int aid;
		aid = 1;
	printf("_tr_node_id:Node_7_154;_tr_assign:aid=%d;\n", aid);fflush(stdout);
	Node_7_156:;
	__iv__branch_expr = (aid >= 3);
	printf("_tr_node_id:Node_7_156;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((aid >= 3)) goto Node_7_162;
	__iv__branch_expr = (alarm_state[(signed long int)(aid)] == 0);
	printf("_tr_node_id:Node_7_157;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((alarm_state[(signed long int)(aid)] == 0)) goto Node_7_159;
	printf("_tr_call:ALARM_handler;_tr_call_id:15;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:aid=%d;\n", aid);fflush(stdout);
	ALARM_handler(aid);
	Node_7_159:;
		aid = (aid + 1);
	printf("_tr_node_id:Node_7_160;_tr_assign:aid=%d;\n", aid);fflush(stdout);
	goto Node_7_156;
	Node_7_162:;
	Node_7_164:;
	printf("_tr_return;\n");fflush(stdout);
}
signed int is_active_alarm_exists() {
	printf("_tr_node_id:Node_8_169;_tr_decl:i;\n");fflush(stdout);
	signed int i;
		i = 1;
	printf("_tr_node_id:Node_8_170;_tr_assign:i=%d;\n", i);fflush(stdout);
	Node_8_172:;
	__iv__branch_expr = (i >= 4);
	printf("_tr_node_id:Node_8_172;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((i >= 4)) goto Node_8_180;
	__iv__branch_expr = (alarm_state[(signed long int)(i)] == 0);
	printf("_tr_node_id:Node_8_173;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((alarm_state[(signed long int)(i)] == 0)) goto Node_8_177;
	__iv__return_expr_is_active_alarm_exists = 	1;
	printf("_tr_node_id:Node_8_174;_tr_assign:__iv__return_expr_is_active_alarm_exists=%d;\n", __iv__return_expr_is_active_alarm_exists);fflush(stdout);
	printf("_tr_return;\n");fflush(stdout);
	return __iv__return_expr_is_active_alarm_exists;
	Node_8_177:;
		i = (i + 1);
	printf("_tr_node_id:Node_8_178;_tr_assign:i=%d;\n", i);fflush(stdout);
	goto Node_8_172;
	Node_8_180:;
	__iv__return_expr_is_active_alarm_exists = 	0;
	printf("_tr_node_id:Node_8_181;_tr_assign:__iv__return_expr_is_active_alarm_exists=%d;\n", __iv__return_expr_is_active_alarm_exists);fflush(stdout);
	printf("_tr_return;\n");fflush(stdout);
	return __iv__return_expr_is_active_alarm_exists;
}
data_t median_filter(data_t datum) {
	printf("_tr_node_id:Node_9_185;_tr_decl:successor;\n");fflush(stdout);
	struct pair *successor;
	printf("_tr_node_id:Node_9_186;_tr_decl:scan;\n");fflush(stdout);
	struct pair *scan;
	printf("_tr_node_id:Node_9_187;_tr_decl:scanold;\n");fflush(stdout);
	struct pair *scanold;
	printf("_tr_node_id:Node_9_188;_tr_decl:median;\n");fflush(stdout);
	struct pair *median;
	printf("_tr_node_id:Node_9_189;_tr_decl:i;\n");fflush(stdout);
	unsigned int i;
		datpoint = (datpoint + 1l);
	printf("_tr_node_id:Node_9_190;_tr_dynamic_assign:	datpoint = (datpoint + 1l);\n");fflush(stdout);
	__iv__branch_expr = !(((datpoint - buffer) >= 15l));
	printf("_tr_node_id:Node_9_191;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!(((datpoint - buffer) >= 15l))) goto Node_9_193;
		datpoint = buffer;
	printf("_tr_node_id:Node_9_192;_tr_dynamic_assign:	datpoint = buffer;\n");fflush(stdout);
	Node_9_193:;
		datpoint->value = datum;
	printf("_tr_node_id:Node_9_194;_tr_assign:datpoint->value=%d;\n", datpoint->value);fflush(stdout);
		successor = datpoint->point;
	printf("_tr_node_id:Node_9_195;_tr_dynamic_assign:	successor = datpoint->point;\n");fflush(stdout);
		median = &big;
	printf("_tr_node_id:Node_9_196;_tr_dynamic_assign:	median = &big;\n");fflush(stdout);
		scan = &big;
	printf("_tr_node_id:Node_9_197;_tr_dynamic_assign:	scan = &big;\n");fflush(stdout);
	__iv__branch_expr = !((scan->point == datpoint));
	printf("_tr_node_id:Node_9_198;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!((scan->point == datpoint))) goto Node_9_200;
		scan->point = successor;
	printf("_tr_node_id:Node_9_199;_tr_dynamic_assign:	scan->point = successor;\n");fflush(stdout);
	Node_9_200:;
		scanold = scan;
	printf("_tr_node_id:Node_9_201;_tr_dynamic_assign:	scanold = scan;\n");fflush(stdout);
		scan = scan->point;
	printf("_tr_node_id:Node_9_202;_tr_dynamic_assign:	scan = scan->point;\n");fflush(stdout);
		i = 0u;
	printf("_tr_node_id:Node_9_203;_tr_assign:i=%u;\n", i);fflush(stdout);
	Node_9_205:;
	__iv__branch_expr = (i >= 15u);
	printf("_tr_node_id:Node_9_205;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((i >= 15u)) goto Node_9_235;
	__iv__branch_expr = !((scan->point == datpoint));
	printf("_tr_node_id:Node_9_206;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!((scan->point == datpoint))) goto Node_9_208;
		scan->point = successor;
	printf("_tr_node_id:Node_9_207;_tr_dynamic_assign:	scan->point = successor;\n");fflush(stdout);
	Node_9_208:;
	__iv__branch_expr = (scan->value >= datum);
	printf("_tr_node_id:Node_9_209;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((scan->value >= datum)) goto Node_9_213;
		datpoint->point = scanold->point;
	printf("_tr_node_id:Node_9_210;_tr_dynamic_assign:	datpoint->point = scanold->point;\n");fflush(stdout);
		scanold->point = datpoint;
	printf("_tr_node_id:Node_9_211;_tr_dynamic_assign:	scanold->point = datpoint;\n");fflush(stdout);
		datum = 0;
	printf("_tr_node_id:Node_9_212;_tr_assign:datum=%d;\n", datum);fflush(stdout);
	Node_9_213:;
		median = median->point;
	printf("_tr_node_id:Node_9_214;_tr_dynamic_assign:	median = median->point;\n");fflush(stdout);
	__iv__branch_expr = (scan == &small);
	printf("_tr_node_id:Node_9_215;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((scan == &small)) goto Node_9_235;
		scanold = scan;
	printf("_tr_node_id:Node_9_218;_tr_dynamic_assign:	scanold = scan;\n");fflush(stdout);
		scan = scan->point;
	printf("_tr_node_id:Node_9_219;_tr_dynamic_assign:	scan = scan->point;\n");fflush(stdout);
	__iv__branch_expr = !((scan->point == datpoint));
	printf("_tr_node_id:Node_9_220;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!((scan->point == datpoint))) goto Node_9_222;
		scan->point = successor;
	printf("_tr_node_id:Node_9_221;_tr_dynamic_assign:	scan->point = successor;\n");fflush(stdout);
	Node_9_222:;
	__iv__branch_expr = (scan->value >= datum);
	printf("_tr_node_id:Node_9_223;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((scan->value >= datum)) goto Node_9_227;
		datpoint->point = scanold->point;
	printf("_tr_node_id:Node_9_224;_tr_dynamic_assign:	datpoint->point = scanold->point;\n");fflush(stdout);
		scanold->point = datpoint;
	printf("_tr_node_id:Node_9_225;_tr_dynamic_assign:	scanold->point = datpoint;\n");fflush(stdout);
		datum = 0;
	printf("_tr_node_id:Node_9_226;_tr_assign:datum=%d;\n", datum);fflush(stdout);
	Node_9_227:;
	__iv__branch_expr = (scan == &small);
	printf("_tr_node_id:Node_9_228;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((scan == &small)) goto Node_9_235;
		scanold = scan;
	printf("_tr_node_id:Node_9_231;_tr_dynamic_assign:	scanold = scan;\n");fflush(stdout);
		scan = scan->point;
	printf("_tr_node_id:Node_9_232;_tr_dynamic_assign:	scan = scan->point;\n");fflush(stdout);
		i = (i + 1u);
	printf("_tr_node_id:Node_9_233;_tr_assign:i=%u;\n", i);fflush(stdout);
	goto Node_9_205;
	Node_9_235:;
	__iv__return_expr_median_filter = 	median->value;
	printf("_tr_node_id:Node_9_236;_tr_assign:__iv__return_expr_median_filter=%d;\n", __iv__return_expr_median_filter);fflush(stdout);
	printf("_tr_return;\n");fflush(stdout);
	return __iv__return_expr_median_filter;
}
signed int is_active_obj_exists() {
	printf("_tr_node_id:Node_10_244;_tr_decl:i;\n");fflush(stdout);
	signed int i;
		i = 1;
	printf("_tr_node_id:Node_10_245;_tr_assign:i=%d;\n", i);fflush(stdout);
	Node_10_247:;
	__iv__branch_expr = (i >= 4);
	printf("_tr_node_id:Node_10_247;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((i >= 4)) goto Node_10_263;
	printf("_tr_node_id:Node_10_248;_tr_decl:tmp_if_expr;\n");fflush(stdout);
	__CPROVER_bool tmp_if_expr;
	__iv__branch_expr = !(((signed int)(task_state[(signed long int)(i)]) == 2));
	printf("_tr_node_id:Node_10_249;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!(((signed int)(task_state[(signed long int)(i)]) == 2))) goto Node_10_252;
		tmp_if_expr = (1 != 0);
	printf("_tr_node_id:Node_10_250;_tr_assign:tmp_if_expr=%hhu;\n", tmp_if_expr);fflush(stdout);
	goto Node_10_253;
	Node_10_252:;
		tmp_if_expr = (((signed int)(task_state[(signed long int)(i)]) == 1) ? 1 : 0 != 0);
	printf("_tr_node_id:Node_10_252;_tr_assign:tmp_if_expr=%hhu;\n", tmp_if_expr);fflush(stdout);
	Node_10_253:;
	__iv__branch_expr = !tmp_if_expr;
	printf("_tr_node_id:Node_10_254;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!tmp_if_expr) goto Node_10_259;
	__iv__return_expr_is_active_obj_exists = 	1;
	printf("_tr_node_id:Node_10_255;_tr_assign:__iv__return_expr_is_active_obj_exists=%d;\n", __iv__return_expr_is_active_obj_exists);fflush(stdout);
	printf("_tr_return;\n");fflush(stdout);
	return __iv__return_expr_is_active_obj_exists;
	Node_10_259:;
		i = (i + 1);
	printf("_tr_node_id:Node_10_261;_tr_assign:i=%d;\n", i);fflush(stdout);
	goto Node_10_247;
	Node_10_263:;
		i = 1;
	printf("_tr_node_id:Node_10_264;_tr_assign:i=%d;\n", i);fflush(stdout);
	Node_10_266:;
	__iv__branch_expr = (i >= 4);
	printf("_tr_node_id:Node_10_266;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((i >= 4)) goto Node_10_274;
	__iv__branch_expr = (alarm_state[(signed long int)(i)] == 0);
	printf("_tr_node_id:Node_10_267;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((alarm_state[(signed long int)(i)] == 0)) goto Node_10_271;
	__iv__return_expr_is_active_obj_exists = 	1;
	printf("_tr_node_id:Node_10_268;_tr_assign:__iv__return_expr_is_active_obj_exists=%d;\n", __iv__return_expr_is_active_obj_exists);fflush(stdout);
	printf("_tr_return;\n");fflush(stdout);
	return __iv__return_expr_is_active_obj_exists;
	Node_10_271:;
		i = (i + 1);
	printf("_tr_node_id:Node_10_272;_tr_assign:i=%d;\n", i);fflush(stdout);
	goto Node_10_266;
	Node_10_274:;
	__iv__return_expr_is_active_obj_exists = 	0;
	printf("_tr_node_id:Node_10_275;_tr_assign:__iv__return_expr_is_active_obj_exists=%d;\n", __iv__return_expr_is_active_obj_exists);fflush(stdout);
	printf("_tr_return;\n");fflush(stdout);
	return __iv__return_expr_is_active_obj_exists;
}
signed int getArea(U8 getArea__rectindex) {
	printf("_tr_node_id:Node_11_279;_tr_decl:return_value_getWidth;\n");fflush(stdout);
	signed int return_value_getWidth;
	printf("_tr_call:getWidth;_tr_call_id:17;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:getWidth__rectindex=%hhu;\n", getArea__rectindex);fflush(stdout);
		return_value_getWidth = getWidth(getArea__rectindex);
	printf("_tr_node_id:Node_11_281;_tr_assign:return_value_getWidth=%d;\n", return_value_getWidth);fflush(stdout);
	printf("_tr_node_id:Node_11_283;_tr_decl:return_value_getHeight;\n");fflush(stdout);
	signed int return_value_getHeight;
	printf("_tr_call:getHeight;_tr_call_id:18;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:getHeight__rectindex=%hhu;\n", getArea__rectindex);fflush(stdout);
		return_value_getHeight = getHeight(getArea__rectindex);
	printf("_tr_node_id:Node_11_285;_tr_assign:return_value_getHeight=%d;\n", return_value_getHeight);fflush(stdout);
	__iv__return_expr_getArea = 	(return_value_getWidth * return_value_getHeight);
	printf("_tr_node_id:Node_11_287;_tr_assign:__iv__return_expr_getArea=%d;\n", __iv__return_expr_getArea);fflush(stdout);
	printf("_tr_return;\n");fflush(stdout);
	return __iv__return_expr_getArea;
}
signed int getX(U8 getX__rectindex) {
	printf("_tr_node_id:Node_12_294;_tr_decl:xul;\n");fflush(stdout);
	signed int xul;
		xul = (signed int)(nxtcamdata[(signed long int)((((5 * (signed int)(getX__rectindex)) + 1) + 1))]);
	printf("_tr_node_id:Node_12_295;_tr_assign:xul=%d;\n", xul);fflush(stdout);
	printf("_tr_node_id:Node_12_296;_tr_decl:xlr;\n");fflush(stdout);
	signed int xlr;
		xlr = (signed int)(nxtcamdata[(signed long int)((((5 * (signed int)(getX__rectindex)) + 1) + 3))]);
	printf("_tr_node_id:Node_12_297;_tr_assign:xlr=%d;\n", xlr);fflush(stdout);
	__iv__return_expr_getX = 	((xlr + xul) / 2);
	printf("_tr_node_id:Node_12_298;_tr_assign:__iv__return_expr_getX=%d;\n", __iv__return_expr_getX);fflush(stdout);
	printf("_tr_return;\n");fflush(stdout);
	return __iv__return_expr_getX;
}
signed int getWidth(U8 getWidth__rectindex) {
	printf("_tr_node_id:Node_13_303;_tr_decl:xul;\n");fflush(stdout);
	signed int xul;
		xul = (signed int)(nxtcamdata[(signed long int)((((5 * (signed int)(getWidth__rectindex)) + 1) + 1))]);
	printf("_tr_node_id:Node_13_304;_tr_assign:xul=%d;\n", xul);fflush(stdout);
	printf("_tr_node_id:Node_13_305;_tr_decl:xlr;\n");fflush(stdout);
	signed int xlr;
		xlr = (signed int)(nxtcamdata[(signed long int)((((5 * (signed int)(getWidth__rectindex)) + 1) + 3))]);
	printf("_tr_node_id:Node_13_306;_tr_assign:xlr=%d;\n", xlr);fflush(stdout);
	__iv__return_expr_getWidth = 	((xlr - xul) >= 0) ? (xlr - xul) : -((xlr - xul));
	printf("_tr_node_id:Node_13_307;_tr_assign:__iv__return_expr_getWidth=%d;\n", __iv__return_expr_getWidth);fflush(stdout);
	printf("_tr_return;\n");fflush(stdout);
	return __iv__return_expr_getWidth;
}
signed int getHeight(U8 getHeight__rectindex) {
	printf("_tr_node_id:Node_14_312;_tr_decl:yul;\n");fflush(stdout);
	signed int yul;
		yul = (signed int)(nxtcamdata[(signed long int)((((5 * (signed int)(getHeight__rectindex)) + 1) + 2))]);
	printf("_tr_node_id:Node_14_313;_tr_assign:yul=%d;\n", yul);fflush(stdout);
	printf("_tr_node_id:Node_14_314;_tr_decl:ylr;\n");fflush(stdout);
	signed int ylr;
		ylr = (signed int)(nxtcamdata[(signed long int)((((5 * (signed int)(getHeight__rectindex)) + 1) + 4))]);
	printf("_tr_node_id:Node_14_315;_tr_assign:ylr=%d;\n", ylr);fflush(stdout);
	__iv__return_expr_getHeight = 	((ylr - yul) >= 0) ? (ylr - yul) : -((ylr - yul));
	printf("_tr_node_id:Node_14_316;_tr_assign:__iv__return_expr_getHeight=%d;\n", __iv__return_expr_getHeight);fflush(stdout);
	printf("_tr_return;\n");fflush(stdout);
	return __iv__return_expr_getHeight;
}
signed int GetResource_Common(unsigned char resid) {
	printf("_tr_node_id:Node_15_321;_tr_decl:return_value_is_alloc;\n");fflush(stdout);
	signed int return_value_is_alloc;
	printf("_tr_node_id:Node_15_322;_tr_decl:tmp_if_expr;\n");fflush(stdout);
	__CPROVER_bool tmp_if_expr;
	__iv__branch_expr = !((!(((signed int)(resid) >= 0)) || ((signed int)(resid) >= 3)));
	printf("_tr_node_id:Node_15_323;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!((!(((signed int)(resid) >= 0)) || ((signed int)(resid) >= 3)))) goto Node_15_326;
	goto Node_15_341;
	Node_15_326:;
	printf("_tr_call:is_alloc;_tr_call_id:19;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:res=%hhu;\n", resid);fflush(stdout);
		return_value_is_alloc = is_alloc(resid);
	printf("_tr_node_id:Node_15_326;_tr_assign:return_value_is_alloc=%d;\n", return_value_is_alloc);fflush(stdout);
	__iv__branch_expr = !((return_value_is_alloc >= 1));
	printf("_tr_node_id:Node_15_327;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!((return_value_is_alloc >= 1))) goto Node_15_330;
		tmp_if_expr = (1 != 0);
	printf("_tr_node_id:Node_15_328;_tr_assign:tmp_if_expr=%hhu;\n", tmp_if_expr);fflush(stdout);
	goto Node_15_331;
	Node_15_330:;
		tmp_if_expr = (((unsigned int)(task_static_info[(signed long int)(current_tid)].prio) > Resource_Table[(signed long int)(resid)].c_prio) ? 1 : 0 != 0);
	printf("_tr_node_id:Node_15_330;_tr_assign:tmp_if_expr=%hhu;\n", tmp_if_expr);fflush(stdout);
	Node_15_331:;
	__iv__branch_expr = !tmp_if_expr;
	printf("_tr_node_id:Node_15_332;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!tmp_if_expr) goto Node_15_335;
	goto Node_15_341;
	Node_15_335:;
	unsigned int __iv__index_expr_var3 = (unsigned) ((signed long int)(resid));
		Resource_Table[(signed long int)(resid)].alloc = current_tid;
	printf("_tr_node_id:Node_15_335;_tr_assign:Resource_Table[%u].alloc=%hhu;\n", __iv__index_expr_var3, Resource_Table[__iv__index_expr_var3].alloc);fflush(stdout);
	__iv__branch_expr = ((unsigned int)(task_dyn_info[(signed long int)(current_tid)].dyn_prio) >= Resource_Table[(signed long int)(resid)].c_prio);
	printf("_tr_node_id:Node_15_336;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (((unsigned int)(task_dyn_info[(signed long int)(current_tid)].dyn_prio) >= Resource_Table[(signed long int)(resid)].c_prio)) goto Node_15_338;
	unsigned int __iv__index_expr_var4 = (unsigned) ((signed long int)(current_tid));
		task_dyn_info[(signed long int)(current_tid)].dyn_prio = (unsigned char)(Resource_Table[(signed long int)(resid)].c_prio);
	printf("_tr_node_id:Node_15_337;_tr_assign:task_dyn_info[%u].dyn_prio=%hhu;\n", __iv__index_expr_var4, task_dyn_info[__iv__index_expr_var4].dyn_prio);fflush(stdout);
	Node_15_338:;
	Node_15_341:;
	printf("_tr_return;\n");fflush(stdout);
}
void check_property() {
	(void)sizeof(signed int)  ;
	if(!(!((((acq_size < 50) && (acq_size > 0)) && (x == 83))))) { printf("violated property: Node_16_347\n"); fflush(stdout); exit(0); }
	printf("_tr_return;\n");fflush(stdout);
}
void app() {
	printf("_tr_node_id:Node_17_349;_tr_decl:count;\n");fflush(stdout);
	signed int count;
		count = 0;
	printf("_tr_node_id:Node_17_350;_tr_assign:count=%d;\n", count);fflush(stdout);
	unsigned int __iv__index_expr_var5 = (unsigned) (1);
		current_pc[1] = 1;
	printf("_tr_node_id:Node_17_351;_tr_assign:current_pc[%u]=%d;\n", __iv__index_expr_var5, current_pc[__iv__index_expr_var5]);fflush(stdout);
	unsigned int __iv__index_expr_var6 = (unsigned) (2);
		current_pc[2] = 1;
	printf("_tr_node_id:Node_17_352;_tr_assign:current_pc[%u]=%d;\n", __iv__index_expr_var6, current_pc[__iv__index_expr_var6]);fflush(stdout);
	printf("_tr_node_id:Node_17_353;_tr_decl:return_value_is_active_obj_exists;\n");fflush(stdout);
	signed int return_value_is_active_obj_exists;
	Node_17_354:;
	printf("_tr_call:is_active_obj_exists;_tr_call_id:22;\n");fflush(stdout);
		return_value_is_active_obj_exists = is_active_obj_exists();
	printf("_tr_node_id:Node_17_354;_tr_assign:return_value_is_active_obj_exists=%d;\n", return_value_is_active_obj_exists);fflush(stdout);
	__iv__branch_expr = (return_value_is_active_obj_exists == 0);
	printf("_tr_node_id:Node_17_355;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((return_value_is_active_obj_exists == 0)) goto Node_17_375;
	__iv__branch_expr = !((os_on == ON));
	printf("_tr_node_id:Node_17_358;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!((os_on == ON))) goto Node_17_375;
	__iv__branch_expr = (count >= 600);
	printf("_tr_node_id:Node_17_361;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((count >= 600)) goto Node_17_375;
	__iv__branch_expr = !(((signed int)(current_tid) == 1));
	printf("_tr_node_id:Node_17_364;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!(((signed int)(current_tid) == 1))) goto Node_17_367;
	printf("_tr_call:Func_AcquisitionTask;_tr_call_id:23;\n");fflush(stdout);
	Func_AcquisitionTask();
	goto Node_17_370;
	Node_17_367:;
	__iv__branch_expr = !(((signed int)(current_tid) == 2));
	printf("_tr_node_id:Node_17_367;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!(((signed int)(current_tid) == 2))) goto Node_17_369;
	printf("_tr_call:Func_ControlTask;_tr_call_id:24;\n");fflush(stdout);
	Func_ControlTask();
	Node_17_369:;
	Node_17_370:;
	printf("_tr_call:postjob;_tr_call_id:25;\n");fflush(stdout);
	postjob();
	printf("_tr_call:check_property;_tr_call_id:26;\n");fflush(stdout);
	check_property();
		count = (count + 1);
	printf("_tr_node_id:Node_17_373;_tr_assign:count=%d;\n", count);fflush(stdout);
	__iv__branch_expr = (1 != 0);
	printf("_tr_node_id:Node_17_374;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((1 != 0)) goto Node_17_354;
	Node_17_375:;
	printf("_tr_return;\n");fflush(stdout);
}
void startup_process() {
	printf("_tr_node_id:Node_18_379;_tr_decl:i;\n");fflush(stdout);
	unsigned int i;
		i = 0u;
	printf("_tr_node_id:Node_18_380;_tr_assign:i=%u;\n", i);fflush(stdout);
	Node_18_382:;
	__iv__branch_expr = (i >= 4u);
	printf("_tr_node_id:Node_18_382;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((i >= 4u)) goto Node_18_391;
	__iv__branch_expr = ((signed int)(task_static_info[(signed long int)(i)].autostart) == 0);
	printf("_tr_node_id:Node_18_383;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (((signed int)(task_static_info[(signed long int)(i)].autostart) == 0)) goto Node_18_388;
	unsigned int __iv__index_expr_var7 = (unsigned) ((signed long int)(i));
		task_dyn_info[(signed long int)(i)].act_cnt = (unsigned char)(((signed int)(task_dyn_info[(signed long int)(i)].act_cnt) + 1));
	printf("_tr_node_id:Node_18_384;_tr_assign:task_dyn_info[%u].act_cnt=%hhu;\n", __iv__index_expr_var7, task_dyn_info[__iv__index_expr_var7].act_cnt);fflush(stdout);
		current_prio = task_static_info[(signed long int)(i)].prio;
	printf("_tr_node_id:Node_18_385;_tr_assign:current_prio=%hhu;\n", current_prio);fflush(stdout);
	printf("_tr_call:push_task_into_readyQ;_tr_call_id:27;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:t=%hhu;\n", (unsigned char)(i));fflush(stdout);
	printf("_tr_param;_tr_assign:p=%hhu;\n", current_prio);fflush(stdout);
	printf("_tr_param;_tr_assign:pc=%d;\n", 0);fflush(stdout);
	printf("_tr_param;_tr_assign:pushkind=%d;\n", (push_type)(0));fflush(stdout);
	push_task_into_readyQ((unsigned char)(i), current_prio, 0, (push_type)(0));
	unsigned int __iv__index_expr_var8 = (unsigned) ((signed long int)(i));
		task_state[(signed long int)(i)] = (unsigned char)(1);
	printf("_tr_node_id:Node_18_387;_tr_assign:task_state[%u]=%hhu;\n", __iv__index_expr_var8, task_state[__iv__index_expr_var8]);fflush(stdout);
	Node_18_388:;
		i = (i + 1u);
	printf("_tr_node_id:Node_18_389;_tr_assign:i=%u;\n", i);fflush(stdout);
	goto Node_18_382;
	Node_18_391:;
	__iv__branch_expr = (wholesize == 0);
	printf("_tr_node_id:Node_18_392;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((wholesize == 0)) goto Node_18_395;
	printf("_tr_call:get_task_from_readyQ;_tr_call_id:28;\n");fflush(stdout);
	get_task_from_readyQ();
	unsigned int __iv__index_expr_var9 = (unsigned) ((signed long int)(current_tid));
		task_state[(signed long int)(current_tid)] = (unsigned char)(2);
	printf("_tr_node_id:Node_18_394;_tr_assign:task_state[%u]=%hhu;\n", __iv__index_expr_var9, task_state[__iv__index_expr_var9]);fflush(stdout);
	Node_18_395:;
	printf("_tr_return;\n");fflush(stdout);
}
signed int WaitEvent_Common(unsigned char eventid) {
	goto Node_19_400;
	Node_19_400:;
	printf("_tr_return;\n");fflush(stdout);
}
signed int WaitEvent(unsigned char eventid) {
	printf("_tr_call:WaitEvent_Common;_tr_call_id:30;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:eventid=%hhu;\n", eventid);fflush(stdout);
	WaitEvent_Common(eventid);
	printf("_tr_return;\n");fflush(stdout);
}
signed int TerminateTask() {
	printf("_tr_call:TerminateTask_Common;_tr_call_id:32;\n");fflush(stdout);
	TerminateTask_Common();
	printf("_tr_return;\n");fflush(stdout);
}
void StartOS(unsigned char app_mode) {
	__iv__branch_expr = !((os_on == OFF));
	printf("_tr_node_id:Node_22_409;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!((os_on == OFF))) goto Node_22_414;
		os_on = ON;
	printf("_tr_node_id:Node_22_410;_tr_assign:os_on=%d;\n", os_on);fflush(stdout);
	printf("_tr_call:initialize;_tr_call_id:34;\n");fflush(stdout);
	initialize();
	printf("_tr_call:startup_process;_tr_call_id:35;\n");fflush(stdout);
	startup_process();
	printf("_tr_call:app;_tr_call_id:36;\n");fflush(stdout);
	app();
	Node_22_414:;
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
	printf("_tr_call:SetEvent_Common;_tr_call_id:39;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:reftask=%hhu;\n", reftask);fflush(stdout);
	printf("_tr_param;_tr_assign:eventid=%hhu;\n", eventid);fflush(stdout);
	SetEvent_Common(reftask, eventid);
	printf("_tr_return;\n");fflush(stdout);
}
signed int ReleaseResource(unsigned char resid) {
	printf("_tr_call:ReleaseResource_Common;_tr_call_id:41;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:resid=%hhu;\n", resid);fflush(stdout);
	ReleaseResource_Common(resid);
	printf("_tr_return;\n");fflush(stdout);
}
signed int GetResource(unsigned char resid) {
	printf("_tr_call:GetResource_Common;_tr_call_id:43;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:resid=%hhu;\n", resid);fflush(stdout);
	GetResource_Common(resid);
	printf("_tr_return;\n");fflush(stdout);
}
void Func_AcquisitionTask() {
	__iv__branch_expr = (current_pc[1] == 1);
	printf("_tr_node_id:Node_29_434;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((current_pc[1] == 1)) goto Node_29_439;
	__iv__branch_expr = (current_pc[1] == 2);
	printf("_tr_node_id:Node_29_435;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((current_pc[1] == 2)) goto Node_29_440;
	__iv__branch_expr = (current_pc[1] == 3);
	printf("_tr_node_id:Node_29_436;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((current_pc[1] == 3)) goto Node_29_441;
	__iv__branch_expr = (current_pc[1] == 4);
	printf("_tr_node_id:Node_29_437;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((current_pc[1] == 4)) goto Node_29_442;
	goto Node_29_443;
	Node_29_439:;
	goto Node_29_443;
	Node_29_440:;
	goto Node_29_468;
	Node_29_441:;
	goto Node_29_473;
	Node_29_442:;
	goto Node_29_477;
	Node_29_443:;
	__iv__branch_expr = ((signed int)(tracking_enabled) == 0);
	printf("_tr_node_id:Node_29_444;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (((signed int)(tracking_enabled) == 0)) goto Node_29_455;
	printf("_tr_node_id:Node_29_445;_tr_decl:return_value_send_nxtcam_command;\n");fflush(stdout);
	signed int return_value_send_nxtcam_command;
	printf("_tr_call:send_nxtcam_command;_tr_call_id:45;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:port_id=%hhu;\n", (U8)(2));fflush(stdout);
	printf("_tr_param;_tr_assign:command=%hhu;\n", (U8)(69));fflush(stdout);
		return_value_send_nxtcam_command = send_nxtcam_command((U8)(2), (U8)(69));
	printf("_tr_node_id:Node_29_447;_tr_assign:return_value_send_nxtcam_command=%d;\n", return_value_send_nxtcam_command);fflush(stdout);
		tracking_enabled = (S8)(return_value_send_nxtcam_command);
	printf("_tr_node_id:Node_29_449;_tr_assign:tracking_enabled=%hhd;\n", tracking_enabled);fflush(stdout);
	goto Node_29_473;
	Node_29_455:;
	printf("_tr_call:request;_tr_call_id:46;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:port_id=%hhu;\n", (U8)(2));fflush(stdout);
	request((U8)(2));
	printf("_tr_call:__iv__getbiggestrect_stub;_tr_call_id:47;\n");fflush(stdout);
		rectindex = __iv__getbiggestrect_stub((U8)(0), -1);
	printf("_tr_node_id:Node_29_457;_tr_assign:rectindex=%d;\n", rectindex);fflush(stdout);
	__iv__branch_expr = !((rectindex >= 0));
	printf("_tr_node_id:Node_29_458;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!((rectindex >= 0))) goto Node_29_473;
	printf("_tr_call:getArea;_tr_call_id:48;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:getArea__rectindex=%hhu;\n", (U8)(rectindex));fflush(stdout);
		area = getArea((U8)(rectindex));
	printf("_tr_node_id:Node_29_461;_tr_assign:area=%d;\n", area);fflush(stdout);
	printf("_tr_call:median_filter;_tr_call_id:49;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:datum=%d;\n", area);fflush(stdout);
		area = median_filter(area);
	printf("_tr_node_id:Node_29_462;_tr_assign:area=%d;\n", area);fflush(stdout);
	printf("_tr_call:fisqrt;_tr_call_id:50;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:val=%d;\n", area);fflush(stdout);
		acq_size = fisqrt(area);
	printf("_tr_node_id:Node_29_463;_tr_assign:acq_size=%d;\n", acq_size);fflush(stdout);
	printf("_tr_call:getX;_tr_call_id:51;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:getX__rectindex=%hhu;\n", (U8)(rectindex));fflush(stdout);
		x = getX((U8)(rectindex));
	printf("_tr_node_id:Node_29_464;_tr_assign:x=%d;\n", x);fflush(stdout);
	printf("_tr_call:GetResource;_tr_call_id:52;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:resid=%hhu;\n", (unsigned char)(1));fflush(stdout);
	GetResource((unsigned char)(1));
	unsigned int __iv__index_expr_var10 = (unsigned) (1);
		current_pc[1] = 2;
	printf("_tr_node_id:Node_29_466;_tr_assign:current_pc[%u]=%d;\n", __iv__index_expr_var10, current_pc[__iv__index_expr_var10]);fflush(stdout);
	goto Node_29_479;
	Node_29_468:;
	printf("_tr_call:ReleaseResource;_tr_call_id:53;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:resid=%hhu;\n", (unsigned char)(1));fflush(stdout);
	ReleaseResource((unsigned char)(1));
	unsigned int __iv__index_expr_var11 = (unsigned) (1);
		current_pc[1] = 3;
	printf("_tr_node_id:Node_29_471;_tr_assign:current_pc[%u]=%d;\n", __iv__index_expr_var11, current_pc[__iv__index_expr_var11]);fflush(stdout);
	goto Node_29_479;
	Node_29_473:;
	printf("_tr_call:TerminateTask;_tr_call_id:54;\n");fflush(stdout);
	TerminateTask();
	unsigned int __iv__index_expr_var12 = (unsigned) (1);
		current_pc[1] = 4;
	printf("_tr_node_id:Node_29_475;_tr_assign:current_pc[%u]=%d;\n", __iv__index_expr_var12, current_pc[__iv__index_expr_var12]);fflush(stdout);
	goto Node_29_479;
	Node_29_477:;
	unsigned int __iv__index_expr_var13 = (unsigned) (1);
		current_pc[1] = 1;
	printf("_tr_node_id:Node_29_478;_tr_assign:current_pc[%u]=%d;\n", __iv__index_expr_var13, current_pc[__iv__index_expr_var13]);fflush(stdout);
	Node_29_479:;
	printf("_tr_return;\n");fflush(stdout);
}
signed int ClearEvent_Common(unsigned char eventid) {
	printf("_tr_return;\n");fflush(stdout);
}
void ALARM_handler(signed int aid) {
	__iv__branch_expr = !((alarm_state[(signed long int)(aid)] == 1));
	printf("_tr_node_id:Node_31_484;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!((alarm_state[(signed long int)(aid)] == 1))) goto Node_31_490;
	unsigned int __iv__index_expr_var14 = (unsigned) ((signed long int)(aid));
		alarm_info[(signed long int)(aid)].next_alarm_tick = (alarm_info[(signed long int)(aid)].next_alarm_tick - 1u);
	printf("_tr_node_id:Node_31_485;_tr_assign:alarm_info[%u].next_alarm_tick=%u;\n", __iv__index_expr_var14, alarm_info[__iv__index_expr_var14].next_alarm_tick);fflush(stdout);
	__iv__branch_expr = !((alarm_info[(signed long int)(aid)].next_alarm_tick == 0u));
	printf("_tr_node_id:Node_31_486;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!((alarm_info[(signed long int)(aid)].next_alarm_tick == 0u))) goto Node_31_489;
	unsigned int __iv__index_expr_var15 = (unsigned) ((signed long int)(aid));
		alarm_info[(signed long int)(aid)].next_alarm_tick = alarm_info[(signed long int)(aid)].cycle;
	printf("_tr_node_id:Node_31_487;_tr_assign:alarm_info[%u].next_alarm_tick=%u;\n", __iv__index_expr_var15, alarm_info[__iv__index_expr_var15].next_alarm_tick);fflush(stdout);
	unsigned int __iv__index_expr_var16 = (unsigned) ((signed long int)(aid));
		alarm_state[(signed long int)(aid)] = 2;
	printf("_tr_node_id:Node_31_488;_tr_assign:alarm_state[%u]=%d;\n", __iv__index_expr_var16, alarm_state[__iv__index_expr_var16]);fflush(stdout);
	Node_31_489:;
	Node_31_490:;
	__iv__branch_expr = !((alarm_state[(signed long int)(aid)] == 2));
	printf("_tr_node_id:Node_31_491;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!((alarm_state[(signed long int)(aid)] == 2))) goto Node_31_504;
	__iv__branch_expr = !(((signed int)(alarm_info[(signed long int)(aid)].api) == 0));
	printf("_tr_node_id:Node_31_492;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!(((signed int)(alarm_info[(signed long int)(aid)].api) == 0))) goto Node_31_495;
	printf("_tr_call:ActivateTask_Common;_tr_call_id:56;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:reftask=%hhu;\n", alarm_info[(signed long int)(aid)].param1);fflush(stdout);
	ActivateTask_Common(alarm_info[(signed long int)(aid)].param1);
	goto Node_31_498;
	Node_31_495:;
	__iv__branch_expr = !(((signed int)(alarm_info[(signed long int)(aid)].api) == 6));
	printf("_tr_node_id:Node_31_495;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!(((signed int)(alarm_info[(signed long int)(aid)].api) == 6))) goto Node_31_497;
	printf("_tr_call:SetEvent_Common;_tr_call_id:57;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:reftask=%hhu;\n", alarm_info[(signed long int)(aid)].param1);fflush(stdout);
	printf("_tr_param;_tr_assign:eventid=%hhu;\n", alarm_info[(signed long int)(aid)].param2);fflush(stdout);
	SetEvent_Common(alarm_info[(signed long int)(aid)].param1, alarm_info[(signed long int)(aid)].param2);
	Node_31_497:;
	Node_31_498:;
	__iv__branch_expr = !((alarm_info[(signed long int)(aid)].cycle >= 1u));
	printf("_tr_node_id:Node_31_499;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!((alarm_info[(signed long int)(aid)].cycle >= 1u))) goto Node_31_502;
	unsigned int __iv__index_expr_var17 = (unsigned) ((signed long int)(aid));
		alarm_state[(signed long int)(aid)] = 1;
	printf("_tr_node_id:Node_31_500;_tr_assign:alarm_state[%u]=%d;\n", __iv__index_expr_var17, alarm_state[__iv__index_expr_var17]);fflush(stdout);
	goto Node_31_503;
	Node_31_502:;
	unsigned int __iv__index_expr_var18 = (unsigned) ((signed long int)(aid));
		alarm_state[(signed long int)(aid)] = 0;
	printf("_tr_node_id:Node_31_502;_tr_assign:alarm_state[%u]=%d;\n", __iv__index_expr_var18, alarm_state[__iv__index_expr_var18]);fflush(stdout);
	Node_31_503:;
	Node_31_504:;
	printf("_tr_return;\n");fflush(stdout);
}
void Func_ControlTask() {
	__iv__branch_expr = (current_pc[2] == 1);
	printf("_tr_node_id:Node_32_507;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((current_pc[2] == 1)) goto Node_32_512;
	__iv__branch_expr = (current_pc[2] == 2);
	printf("_tr_node_id:Node_32_508;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((current_pc[2] == 2)) goto Node_32_513;
	__iv__branch_expr = (current_pc[2] == 3);
	printf("_tr_node_id:Node_32_509;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((current_pc[2] == 3)) goto Node_32_514;
	__iv__branch_expr = (current_pc[2] == 4);
	printf("_tr_node_id:Node_32_510;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((current_pc[2] == 4)) goto Node_32_515;
	goto Node_32_516;
	Node_32_512:;
	goto Node_32_516;
	Node_32_513:;
	goto Node_32_520;
	Node_32_514:;
	goto Node_32_525;
	Node_32_515:;
	goto Node_32_529;
	Node_32_516:;
	printf("_tr_call:GetResource;_tr_call_id:58;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:resid=%hhu;\n", (unsigned char)(1));fflush(stdout);
	GetResource((unsigned char)(1));
	unsigned int __iv__index_expr_var19 = (unsigned) (2);
		current_pc[2] = 2;
	printf("_tr_node_id:Node_32_518;_tr_assign:current_pc[%u]=%d;\n", __iv__index_expr_var19, current_pc[__iv__index_expr_var19]);fflush(stdout);
	goto Node_32_531;
	Node_32_520:;
	printf("_tr_call:ReleaseResource;_tr_call_id:59;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:resid=%hhu;\n", (unsigned char)(1));fflush(stdout);
	ReleaseResource((unsigned char)(1));
	unsigned int __iv__index_expr_var20 = (unsigned) (2);
		current_pc[2] = 3;
	printf("_tr_node_id:Node_32_523;_tr_assign:current_pc[%u]=%d;\n", __iv__index_expr_var20, current_pc[__iv__index_expr_var20]);fflush(stdout);
	goto Node_32_531;
	Node_32_525:;
	printf("_tr_call:TerminateTask;_tr_call_id:60;\n");fflush(stdout);
	TerminateTask();
	unsigned int __iv__index_expr_var21 = (unsigned) (2);
		current_pc[2] = 4;
	printf("_tr_node_id:Node_32_527;_tr_assign:current_pc[%u]=%d;\n", __iv__index_expr_var21, current_pc[__iv__index_expr_var21]);fflush(stdout);
	goto Node_32_531;
	Node_32_529:;
	unsigned int __iv__index_expr_var22 = (unsigned) (2);
		current_pc[2] = 1;
	printf("_tr_node_id:Node_32_530;_tr_assign:current_pc[%u]=%d;\n", __iv__index_expr_var22, current_pc[__iv__index_expr_var22]);fflush(stdout);
	Node_32_531:;
	printf("_tr_return;\n");fflush(stdout);
}
signed int SetEvent_Common(unsigned char reftask, unsigned char eventid) {
	__iv__branch_expr = !((!(((signed int)(reftask) >= 1)) || ((signed int)(reftask) >= 5)));
	printf("_tr_node_id:Node_33_533;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!((!(((signed int)(reftask) >= 1)) || ((signed int)(reftask) >= 5)))) goto Node_33_536;
	goto Node_33_551;
	Node_33_536:;
	__iv__branch_expr = !(((signed int)(task_static_info[(signed long int)(reftask)].extended) == 0));
	printf("_tr_node_id:Node_33_536;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!(((signed int)(task_static_info[(signed long int)(reftask)].extended) == 0))) goto Node_33_539;
	goto Node_33_551;
	Node_33_539:;
	__iv__branch_expr = ((signed int)(task_state[(signed long int)(reftask)]) == 0);
	printf("_tr_node_id:Node_33_539;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (((signed int)(task_state[(signed long int)(reftask)]) == 0)) goto Node_33_551;
	__iv__branch_expr = ((signed int)(Event_Table[(signed long int)(eventid)].task_alloc[(signed long int)(reftask)]) == 1);
	printf("_tr_node_id:Node_33_544;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (((signed int)(Event_Table[(signed long int)(eventid)].task_alloc[(signed long int)(reftask)]) == 1)) goto Node_33_550;
	unsigned int __iv__index_expr_var23 = (unsigned) ((signed long int)(eventid));
	unsigned int __iv__index_expr_var24 = (unsigned) ((signed long int)(reftask));
		Event_Table[(signed long int)(eventid)].task_alloc[(signed long int)(reftask)] = (Evt_State)(1);
	printf("_tr_node_id:Node_33_545;_tr_assign:Event_Table[%u].task_alloc[%u]=%d;\n", __iv__index_expr_var23, __iv__index_expr_var24, Event_Table[__iv__index_expr_var23].task_alloc[__iv__index_expr_var24]);fflush(stdout);
	__iv__branch_expr = !(((signed int)(task_state[(signed long int)(reftask)]) == 3));
	printf("_tr_node_id:Node_33_546;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!(((signed int)(task_state[(signed long int)(reftask)]) == 3))) goto Node_33_548;
	printf("_tr_call:push_task_into_readyQ;_tr_call_id:61;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:t=%hhu;\n", reftask);fflush(stdout);
	printf("_tr_param;_tr_assign:p=%hhu;\n", task_static_info[(signed long int)(reftask)].prio);fflush(stdout);
	printf("_tr_param;_tr_assign:pc=%d;\n", current_pc[(signed long int)(reftask)]);fflush(stdout);
	printf("_tr_param;_tr_assign:pushkind=%d;\n", (push_type)(2));fflush(stdout);
	push_task_into_readyQ(reftask, task_static_info[(signed long int)(reftask)].prio, current_pc[(signed long int)(reftask)], (push_type)(2));
	Node_33_548:;
	printf("_tr_call:reschedule;_tr_call_id:62;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:reschedule__api=%d;\n", (API)(6));fflush(stdout);
	printf("_tr_param;_tr_assign:tid=%hhu;\n", current_tid);fflush(stdout);
	reschedule((API)(6), current_tid);
	Node_33_550:;
	Node_33_551:;
	printf("_tr_return;\n");fflush(stdout);
}
signed int Schedule_Common() {
	printf("_tr_call:reschedule;_tr_call_id:64;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:reschedule__api=%d;\n", (API)(3));fflush(stdout);
	printf("_tr_param;_tr_assign:tid=%hhu;\n", current_tid);fflush(stdout);
	reschedule((API)(3), current_tid);
	printf("_tr_return;\n");fflush(stdout);
}
signed int ChainTask_Common(unsigned char reftask) {
	goto Node_35_561;
	Node_35_561:;
	printf("_tr_return;\n");fflush(stdout);
}
signed int ActivateTask(unsigned char reftask) {
	printf("_tr_call:ActivateTask_Common;_tr_call_id:67;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:reftask=%hhu;\n", reftask);fflush(stdout);
	ActivateTask_Common(reftask);
	printf("_tr_return;\n");fflush(stdout);
}
signed int ClearEvent(unsigned char eventid) {
	printf("_tr_return;\n");fflush(stdout);
}
signed int is_alloc(unsigned char res) {
	__iv__return_expr_is_alloc = 	(signed int)(Resource_Table[(signed long int)(res)].alloc);
	printf("_tr_node_id:Node_38_570;_tr_assign:__iv__return_expr_is_alloc=%d;\n", __iv__return_expr_is_alloc);fflush(stdout);
	printf("_tr_return;\n");fflush(stdout);
	return __iv__return_expr_is_alloc;
}
signed int Schedule() {
	printf("_tr_call:Schedule_Common;_tr_call_id:70;\n");fflush(stdout);
	Schedule_Common();
	printf("_tr_return;\n");fflush(stdout);
}
signed int TerminateTask_Common() {
	__iv__branch_expr = !(((signed int)(task_dyn_info[(signed long int)(current_tid)].act_cnt) >= 1));
	printf("_tr_node_id:Node_41_644;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!(((signed int)(task_dyn_info[(signed long int)(current_tid)].act_cnt) >= 1))) goto Node_41_646;
	unsigned int __iv__index_expr_var25 = (unsigned) ((signed long int)(current_tid));
		task_dyn_info[(signed long int)(current_tid)].act_cnt = (unsigned char)(((signed int)(task_dyn_info[(signed long int)(current_tid)].act_cnt) - 1));
	printf("_tr_node_id:Node_41_645;_tr_assign:task_dyn_info[%u].act_cnt=%hhu;\n", __iv__index_expr_var25, task_dyn_info[__iv__index_expr_var25].act_cnt);fflush(stdout);
	Node_41_646:;
	__iv__branch_expr = !(((signed int)(task_dyn_info[(signed long int)(current_tid)].act_cnt) >= 1));
	printf("_tr_node_id:Node_41_647;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!(((signed int)(task_dyn_info[(signed long int)(current_tid)].act_cnt) >= 1))) goto Node_41_650;
	unsigned int __iv__index_expr_var26 = (unsigned) ((signed long int)(current_tid));
		task_state[(signed long int)(current_tid)] = (unsigned char)(1);
	printf("_tr_node_id:Node_41_648;_tr_assign:task_state[%u]=%hhu;\n", __iv__index_expr_var26, task_state[__iv__index_expr_var26]);fflush(stdout);
	goto Node_41_651;
	Node_41_650:;
	unsigned int __iv__index_expr_var27 = (unsigned) ((signed long int)(current_tid));
		task_state[(signed long int)(current_tid)] = (unsigned char)(0);
	printf("_tr_node_id:Node_41_650;_tr_assign:task_state[%u]=%hhu;\n", __iv__index_expr_var27, task_state[__iv__index_expr_var27]);fflush(stdout);
	Node_41_651:;
	printf("_tr_call:reschedule;_tr_call_id:72;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:reschedule__api=%d;\n", (API)(1));fflush(stdout);
	printf("_tr_param;_tr_assign:tid=%hhu;\n", current_tid);fflush(stdout);
	reschedule((API)(1), current_tid);
	printf("_tr_return;\n");fflush(stdout);
}
signed int fisqrt(signed int val) {
	printf("_tr_node_id:Node_42_655;_tr_decl:cnt;\n");fflush(stdout);
	signed int cnt;
		cnt = 0;
	printf("_tr_node_id:Node_42_656;_tr_assign:cnt=%d;\n", cnt);fflush(stdout);
	printf("_tr_node_id:Node_42_657;_tr_decl:t;\n");fflush(stdout);
	signed int t;
		t = val;
	printf("_tr_node_id:Node_42_658;_tr_assign:t=%d;\n", t);fflush(stdout);
	Node_42_660:;
	__iv__branch_expr = (t == 0);
	printf("_tr_node_id:Node_42_660;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((t == 0)) goto Node_42_664;
		cnt = (cnt + 1);
	printf("_tr_node_id:Node_42_661;_tr_assign:cnt=%d;\n", cnt);fflush(stdout);
		t = (t >> 1);
	printf("_tr_node_id:Node_42_662;_tr_assign:t=%d;\n", t);fflush(stdout);
	goto Node_42_660;
	Node_42_664:;
	__iv__branch_expr = (cnt >= 7);
	printf("_tr_node_id:Node_42_665;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((cnt >= 7)) goto Node_42_668;
		t = (val << (6 - cnt));
	printf("_tr_node_id:Node_42_666;_tr_assign:t=%d;\n", t);fflush(stdout);
	goto Node_42_669;
	Node_42_668:;
		t = (val >> (cnt - 6));
	printf("_tr_node_id:Node_42_668;_tr_assign:t=%d;\n", t);fflush(stdout);
	Node_42_669:;
	__iv__return_expr_fisqrt = 	((ftbl[(signed long int)(cnt)] * ftbl2[(signed long int)((t & 31))]) >> 15);
	printf("_tr_node_id:Node_42_670;_tr_assign:__iv__return_expr_fisqrt=%d;\n", __iv__return_expr_fisqrt);fflush(stdout);
	printf("_tr_return;\n");fflush(stdout);
	return __iv__return_expr_fisqrt;
}
signed int ChainTask(unsigned char reftask) {
	printf("_tr_call:ChainTask_Common;_tr_call_id:74;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:reftask=%hhu;\n", reftask);fflush(stdout);
	ChainTask_Common(reftask);
	printf("_tr_return;\n");fflush(stdout);
}
signed int ActivateTask_Common(unsigned char reftask) {
	__iv__branch_expr = !((!(((signed int)(reftask) >= 1)) || ((signed int)(reftask) >= 5)));
	printf("_tr_node_id:Node_44_678;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!((!(((signed int)(reftask) >= 1)) || ((signed int)(reftask) >= 5)))) goto Node_44_681;
	goto Node_44_698;
	Node_44_681:;
	__iv__branch_expr = ((signed int)(task_dyn_info[(signed long int)(reftask)].act_cnt) >= (signed int)(task_static_info[(signed long int)(reftask)].max_act_cnt));
	printf("_tr_node_id:Node_44_681;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (((signed int)(task_dyn_info[(signed long int)(reftask)].act_cnt) >= (signed int)(task_static_info[(signed long int)(reftask)].max_act_cnt))) goto Node_44_696;
	__iv__branch_expr = !(((signed int)(task_state[(signed long int)(reftask)]) == 0));
	printf("_tr_node_id:Node_44_682;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!(((signed int)(task_state[(signed long int)(reftask)]) == 0))) goto Node_44_692;
	printf("_tr_node_id:Node_44_683;_tr_decl:i;\n");fflush(stdout);
	signed int i;
		i = 0;
	printf("_tr_node_id:Node_44_684;_tr_assign:i=%d;\n", i);fflush(stdout);
	Node_44_686:;
	__iv__branch_expr = (i >= 3);
	printf("_tr_node_id:Node_44_686;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((i >= 3)) goto Node_44_690;
	unsigned int __iv__index_expr_var28 = (unsigned) ((signed long int)(i));
	unsigned int __iv__index_expr_var29 = (unsigned) ((signed long int)(reftask));
		Event_Table[(signed long int)(i)].task_alloc[(signed long int)(reftask)] = (Evt_State)(0);
	printf("_tr_node_id:Node_44_687;_tr_assign:Event_Table[%u].task_alloc[%u]=%d;\n", __iv__index_expr_var28, __iv__index_expr_var29, Event_Table[__iv__index_expr_var28].task_alloc[__iv__index_expr_var29]);fflush(stdout);
		i = (i + 1);
	printf("_tr_node_id:Node_44_688;_tr_assign:i=%d;\n", i);fflush(stdout);
	goto Node_44_686;
	Node_44_690:;
	Node_44_692:;
	unsigned int __iv__index_expr_var30 = (unsigned) ((signed long int)(reftask));
		task_dyn_info[(signed long int)(reftask)].act_cnt = (unsigned char)(((signed int)(task_dyn_info[(signed long int)(reftask)].act_cnt) + 1));
	printf("_tr_node_id:Node_44_693;_tr_assign:task_dyn_info[%u].act_cnt=%hhu;\n", __iv__index_expr_var30, task_dyn_info[__iv__index_expr_var30].act_cnt);fflush(stdout);
	printf("_tr_call:push_task_into_readyQ;_tr_call_id:76;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:t=%hhu;\n", reftask);fflush(stdout);
	printf("_tr_param;_tr_assign:p=%hhu;\n", task_static_info[(signed long int)(reftask)].prio);fflush(stdout);
	printf("_tr_param;_tr_assign:pc=%d;\n", 0);fflush(stdout);
	printf("_tr_param;_tr_assign:pushkind=%d;\n", (push_type)(0));fflush(stdout);
	push_task_into_readyQ(reftask, task_static_info[(signed long int)(reftask)].prio, 0, (push_type)(0));
	printf("_tr_call:reschedule;_tr_call_id:77;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:reschedule__api=%d;\n", (API)(0));fflush(stdout);
	printf("_tr_param;_tr_assign:tid=%hhu;\n", current_tid);fflush(stdout);
	reschedule((API)(0), current_tid);
	Node_44_696:;
	Node_44_698:;
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
signed int request(U8 port_id) {
	printf("_tr_node_id:Node_48_709;_tr_decl:return_value_i2c_busy;\n");fflush(stdout);
	signed int return_value_i2c_busy;
	printf("_tr_call:i2c_busy;_tr_call_id:81;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:port=%d;\n", (signed int)(port_id));fflush(stdout);
		return_value_i2c_busy = i2c_busy((signed int)(port_id));
	printf("_tr_node_id:Node_48_711;_tr_assign:return_value_i2c_busy=%d;\n", return_value_i2c_busy);fflush(stdout);
	__iv__branch_expr = !((return_value_i2c_busy == 0));
	printf("_tr_node_id:Node_48_713;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!((return_value_i2c_busy == 0))) goto Node_48_715;
	printf("_tr_call:i2c_start_transaction;_tr_call_id:82;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:port=%d;\n", (signed int)(port_id));fflush(stdout);
	printf("_tr_param;_tr_assign:address=%u;\n", 1u);fflush(stdout);
	printf("_tr_param;_tr_assign:internal_address=%d;\n", 0x42);fflush(stdout);
	printf("_tr_param;_tr_assign:n_internal_address_bytes=%d;\n", 1);fflush(stdout);
	printf("_tr_param;_tr_dynamic_assign:i2c_start_transaction__data=nxtcamdata;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:nbytes=%u;\n", 41u);fflush(stdout);
	printf("_tr_param;_tr_assign:write=%d;\n", 0);fflush(stdout);
	i2c_start_transaction((signed int)(port_id), 1u, 0x42, 1, nxtcamdata, 41u, 0);
	Node_48_715:;
	printf("_tr_return;\n");fflush(stdout);
}
void update_prop_automata() {
	printf("_tr_return;\n");fflush(stdout);
}
void user_1ms_isr_type2() {
	printf("_tr_return;\n");fflush(stdout);
}
signed int getY(U8 getY__rectindex) {
	printf("_tr_return;\n");fflush(stdout);
}
U8* getdata() {
	printf("_tr_return;\n");fflush(stdout);
}
signed int directionPIDController(signed int d) {
	printf("_tr_return;\n");fflush(stdout);
}
void display_goto_xy(signed int display_goto_xy__x, signed int y) {
	printf("_tr_return;\n");fflush(stdout);
}
void display_int(signed int val, unsigned int places) {
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
	printf("_tr_call:GetResource;_tr_call_id:87;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:resid=%hhu;\n", (unsigned char)(1));fflush(stdout);
	GetResource((unsigned char)(1));
	printf("_tr_call:ReleaseResource;_tr_call_id:88;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:resid=%hhu;\n", (unsigned char)(1));fflush(stdout);
	ReleaseResource((unsigned char)(1));
	printf("_tr_return;\n");fflush(stdout);
}
void get_task_from_readyQ() {
	__iv__branch_expr = !((wholesize == 0));
	printf("_tr_node_id:Node_61_749;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!((wholesize == 0))) goto Node_61_753;
		current_tid = (unsigned char)(0);
	printf("_tr_node_id:Node_61_750;_tr_assign:current_tid=%hhu;\n", current_tid);fflush(stdout);
		current_prio = (unsigned char)(0);
	printf("_tr_node_id:Node_61_751;_tr_assign:current_prio=%hhu;\n", current_prio);fflush(stdout);
	goto Node_61_769;
	Node_61_753:;
		current_tid = readyQ[(signed long int)(max_prio)][(signed long int)(front[(signed long int)(max_prio)])].tid;
	printf("_tr_node_id:Node_61_753;_tr_assign:current_tid=%hhu;\n", current_tid);fflush(stdout);
		current_prio = max_prio;
	printf("_tr_node_id:Node_61_754;_tr_assign:current_prio=%hhu;\n", current_prio);fflush(stdout);
	unsigned int __iv__index_expr_var31 = (unsigned) ((signed long int)(max_prio));
	unsigned int __iv__index_expr_var32 = (unsigned) ((signed long int)(front[(signed long int)(max_prio)]));
		readyQ[(signed long int)(max_prio)][(signed long int)(front[(signed long int)(max_prio)])].tid = (unsigned char)(0);
	printf("_tr_node_id:Node_61_755;_tr_assign:readyQ[%u][%u].tid=%hhu;\n", __iv__index_expr_var31, __iv__index_expr_var32, readyQ[__iv__index_expr_var31][__iv__index_expr_var32].tid);fflush(stdout);
	unsigned int __iv__index_expr_var33 = (unsigned) ((signed long int)(max_prio));
		front[(signed long int)(max_prio)] = ((front[(signed long int)(max_prio)] + 1) % 4);
	printf("_tr_node_id:Node_61_756;_tr_assign:front[%u]=%d;\n", __iv__index_expr_var33, front[__iv__index_expr_var33]);fflush(stdout);
	unsigned int __iv__index_expr_var34 = (unsigned) ((signed long int)(current_prio));
		size[(signed long int)(current_prio)] = (size[(signed long int)(current_prio)] - 1);
	printf("_tr_node_id:Node_61_757;_tr_assign:size[%u]=%d;\n", __iv__index_expr_var34, size[__iv__index_expr_var34]);fflush(stdout);
		wholesize = (wholesize - 1);
	printf("_tr_node_id:Node_61_758;_tr_assign:wholesize=%d;\n", wholesize);fflush(stdout);
		max_prio = current_prio;
	printf("_tr_node_id:Node_61_759;_tr_assign:max_prio=%hhu;\n", max_prio);fflush(stdout);
	Node_61_761:;
	__iv__branch_expr = !((size[(signed long int)(max_prio)] == 0));
	printf("_tr_node_id:Node_61_761;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!((size[(signed long int)(max_prio)] == 0))) goto Node_61_767;
	__iv__branch_expr = ((signed int)(max_prio) == 0);
	printf("_tr_node_id:Node_61_762;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (((signed int)(max_prio) == 0)) goto Node_61_767;
		max_prio = (unsigned char)(((signed int)(max_prio) - 1));
	printf("_tr_node_id:Node_61_765;_tr_assign:max_prio=%hhu;\n", max_prio);fflush(stdout);
	goto Node_61_761;
	Node_61_767:;
	unsigned int __iv__index_expr_var35 = (unsigned) ((signed long int)(current_tid));
		task_state[(signed long int)(current_tid)] = (unsigned char)(2);
	printf("_tr_node_id:Node_61_768;_tr_assign:task_state[%u]=%hhu;\n", __iv__index_expr_var35, task_state[__iv__index_expr_var35]);fflush(stdout);
	Node_61_769:;
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
	printf("_tr_node_id:Node_66_779;_tr_assign:task_static_info[%u].max_act_cnt=%hhu;\n", __iv__index_expr_var36, task_static_info[__iv__index_expr_var36].max_act_cnt);fflush(stdout);
	unsigned int __iv__index_expr_var37 = (unsigned) (0);
		task_static_info[0].preemptable = (unsigned char)(1);
	printf("_tr_node_id:Node_66_780;_tr_assign:task_static_info[%u].preemptable=%hhu;\n", __iv__index_expr_var37, task_static_info[__iv__index_expr_var37].preemptable);fflush(stdout);
	unsigned int __iv__index_expr_var38 = (unsigned) (0);
		task_static_info[0].prio = (unsigned char)(0);
	printf("_tr_node_id:Node_66_781;_tr_assign:task_static_info[%u].prio=%hhu;\n", __iv__index_expr_var38, task_static_info[__iv__index_expr_var38].prio);fflush(stdout);
	unsigned int __iv__index_expr_var39 = (unsigned) (0);
		task_static_info[0].autostart = (unsigned char)(0);
	printf("_tr_node_id:Node_66_782;_tr_assign:task_static_info[%u].autostart=%hhu;\n", __iv__index_expr_var39, task_static_info[__iv__index_expr_var39].autostart);fflush(stdout);
	unsigned int __iv__index_expr_var40 = (unsigned) (0);
		task_static_info[0].extended = (unsigned char)(0);
	printf("_tr_node_id:Node_66_783;_tr_assign:task_static_info[%u].extended=%hhu;\n", __iv__index_expr_var40, task_static_info[__iv__index_expr_var40].extended);fflush(stdout);
	unsigned int __iv__index_expr_var41 = (unsigned) (1);
		task_static_info[1].max_act_cnt = (unsigned char)(1);
	printf("_tr_node_id:Node_66_784;_tr_assign:task_static_info[%u].max_act_cnt=%hhu;\n", __iv__index_expr_var41, task_static_info[__iv__index_expr_var41].max_act_cnt);fflush(stdout);
	unsigned int __iv__index_expr_var42 = (unsigned) (1);
		task_static_info[1].preemptable = (unsigned char)(1);
	printf("_tr_node_id:Node_66_785;_tr_assign:task_static_info[%u].preemptable=%hhu;\n", __iv__index_expr_var42, task_static_info[__iv__index_expr_var42].preemptable);fflush(stdout);
	unsigned int __iv__index_expr_var43 = (unsigned) (1);
		task_static_info[1].prio = (unsigned char)(3);
	printf("_tr_node_id:Node_66_786;_tr_assign:task_static_info[%u].prio=%hhu;\n", __iv__index_expr_var43, task_static_info[__iv__index_expr_var43].prio);fflush(stdout);
	unsigned int __iv__index_expr_var44 = (unsigned) (1);
		task_static_info[1].autostart = (unsigned char)(0);
	printf("_tr_node_id:Node_66_787;_tr_assign:task_static_info[%u].autostart=%hhu;\n", __iv__index_expr_var44, task_static_info[__iv__index_expr_var44].autostart);fflush(stdout);
	unsigned int __iv__index_expr_var45 = (unsigned) (1);
		task_static_info[1].extended = (unsigned char)(0);
	printf("_tr_node_id:Node_66_788;_tr_assign:task_static_info[%u].extended=%hhu;\n", __iv__index_expr_var45, task_static_info[__iv__index_expr_var45].extended);fflush(stdout);
	unsigned int __iv__index_expr_var46 = (unsigned) (2);
		task_static_info[2].max_act_cnt = (unsigned char)(1);
	printf("_tr_node_id:Node_66_789;_tr_assign:task_static_info[%u].max_act_cnt=%hhu;\n", __iv__index_expr_var46, task_static_info[__iv__index_expr_var46].max_act_cnt);fflush(stdout);
	unsigned int __iv__index_expr_var47 = (unsigned) (2);
		task_static_info[2].preemptable = (unsigned char)(1);
	printf("_tr_node_id:Node_66_790;_tr_assign:task_static_info[%u].preemptable=%hhu;\n", __iv__index_expr_var47, task_static_info[__iv__index_expr_var47].preemptable);fflush(stdout);
	unsigned int __iv__index_expr_var48 = (unsigned) (2);
		task_static_info[2].prio = (unsigned char)(2);
	printf("_tr_node_id:Node_66_791;_tr_assign:task_static_info[%u].prio=%hhu;\n", __iv__index_expr_var48, task_static_info[__iv__index_expr_var48].prio);fflush(stdout);
	unsigned int __iv__index_expr_var49 = (unsigned) (2);
		task_static_info[2].autostart = (unsigned char)(1);
	printf("_tr_node_id:Node_66_792;_tr_assign:task_static_info[%u].autostart=%hhu;\n", __iv__index_expr_var49, task_static_info[__iv__index_expr_var49].autostart);fflush(stdout);
	unsigned int __iv__index_expr_var50 = (unsigned) (2);
		task_static_info[2].extended = (unsigned char)(0);
	printf("_tr_node_id:Node_66_793;_tr_assign:task_static_info[%u].extended=%hhu;\n", __iv__index_expr_var50, task_static_info[__iv__index_expr_var50].extended);fflush(stdout);
	unsigned int __iv__index_expr_var51 = (unsigned) (1);
		task_dyn_info[1].dyn_prio = task_static_info[1].prio;
	printf("_tr_node_id:Node_66_794;_tr_assign:task_dyn_info[%u].dyn_prio=%hhu;\n", __iv__index_expr_var51, task_dyn_info[__iv__index_expr_var51].dyn_prio);fflush(stdout);
	unsigned int __iv__index_expr_var52 = (unsigned) (1);
		task_dyn_info[1].act_cnt = (unsigned char)(0);
	printf("_tr_node_id:Node_66_795;_tr_assign:task_dyn_info[%u].act_cnt=%hhu;\n", __iv__index_expr_var52, task_dyn_info[__iv__index_expr_var52].act_cnt);fflush(stdout);
	unsigned int __iv__index_expr_var53 = (unsigned) (2);
		task_dyn_info[2].dyn_prio = task_static_info[2].prio;
	printf("_tr_node_id:Node_66_796;_tr_assign:task_dyn_info[%u].dyn_prio=%hhu;\n", __iv__index_expr_var53, task_dyn_info[__iv__index_expr_var53].dyn_prio);fflush(stdout);
	unsigned int __iv__index_expr_var54 = (unsigned) (2);
		task_dyn_info[2].act_cnt = (unsigned char)(0);
	printf("_tr_node_id:Node_66_797;_tr_assign:task_dyn_info[%u].act_cnt=%hhu;\n", __iv__index_expr_var54, task_dyn_info[__iv__index_expr_var54].act_cnt);fflush(stdout);
	unsigned int __iv__index_expr_var55 = (unsigned) (1);
		alarm_state[1] = 1;
	printf("_tr_node_id:Node_66_798;_tr_assign:alarm_state[%u]=%d;\n", __iv__index_expr_var55, alarm_state[__iv__index_expr_var55]);fflush(stdout);
	unsigned int __iv__index_expr_var56 = (unsigned) (1);
		alarm_info[1].cycle = 30u;
	printf("_tr_node_id:Node_66_799;_tr_assign:alarm_info[%u].cycle=%u;\n", __iv__index_expr_var56, alarm_info[__iv__index_expr_var56].cycle);fflush(stdout);
	unsigned int __iv__index_expr_var57 = (unsigned) (1);
		alarm_info[1].next_alarm_tick = 1u;
	printf("_tr_node_id:Node_66_800;_tr_assign:alarm_info[%u].next_alarm_tick=%u;\n", __iv__index_expr_var57, alarm_info[__iv__index_expr_var57].next_alarm_tick);fflush(stdout);
	unsigned int __iv__index_expr_var58 = (unsigned) (1);
		alarm_info[1].api = (API)(0);
	printf("_tr_node_id:Node_66_801;_tr_assign:alarm_info[%u].api=%d;\n", __iv__index_expr_var58, alarm_info[__iv__index_expr_var58].api);fflush(stdout);
	unsigned int __iv__index_expr_var59 = (unsigned) (1);
		alarm_info[1].param1 = (unsigned char)(1);
	printf("_tr_node_id:Node_66_802;_tr_assign:alarm_info[%u].param1=%hhu;\n", __iv__index_expr_var59, alarm_info[__iv__index_expr_var59].param1);fflush(stdout);
	unsigned int __iv__index_expr_var60 = (unsigned) (1);
		alarm_info[1].param2 = (unsigned char)(0);
	printf("_tr_node_id:Node_66_803;_tr_assign:alarm_info[%u].param2=%hhu;\n", __iv__index_expr_var60, alarm_info[__iv__index_expr_var60].param2);fflush(stdout);
	unsigned int __iv__index_expr_var61 = (unsigned) (2);
		alarm_state[2] = 1;
	printf("_tr_node_id:Node_66_804;_tr_assign:alarm_state[%u]=%d;\n", __iv__index_expr_var61, alarm_state[__iv__index_expr_var61]);fflush(stdout);
	unsigned int __iv__index_expr_var62 = (unsigned) (2);
		alarm_info[2].cycle = 50u;
	printf("_tr_node_id:Node_66_805;_tr_assign:alarm_info[%u].cycle=%u;\n", __iv__index_expr_var62, alarm_info[__iv__index_expr_var62].cycle);fflush(stdout);
	unsigned int __iv__index_expr_var63 = (unsigned) (2);
		alarm_info[2].next_alarm_tick = 1u;
	printf("_tr_node_id:Node_66_806;_tr_assign:alarm_info[%u].next_alarm_tick=%u;\n", __iv__index_expr_var63, alarm_info[__iv__index_expr_var63].next_alarm_tick);fflush(stdout);
	unsigned int __iv__index_expr_var64 = (unsigned) (2);
		alarm_info[2].api = (API)(0);
	printf("_tr_node_id:Node_66_807;_tr_assign:alarm_info[%u].api=%d;\n", __iv__index_expr_var64, alarm_info[__iv__index_expr_var64].api);fflush(stdout);
	unsigned int __iv__index_expr_var65 = (unsigned) (2);
		alarm_info[2].param1 = (unsigned char)(2);
	printf("_tr_node_id:Node_66_808;_tr_assign:alarm_info[%u].param1=%hhu;\n", __iv__index_expr_var65, alarm_info[__iv__index_expr_var65].param1);fflush(stdout);
	unsigned int __iv__index_expr_var66 = (unsigned) (2);
		alarm_info[2].param2 = (unsigned char)(0);
	printf("_tr_node_id:Node_66_809;_tr_assign:alarm_info[%u].param2=%hhu;\n", __iv__index_expr_var66, alarm_info[__iv__index_expr_var66].param2);fflush(stdout);
	unsigned int __iv__index_expr_var67 = (unsigned) (1);
		Resource_Table[1].c_prio = 4u;
	printf("_tr_node_id:Node_66_810;_tr_assign:Resource_Table[%u].c_prio=%u;\n", __iv__index_expr_var67, Resource_Table[__iv__index_expr_var67].c_prio);fflush(stdout);
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
	printf("_tr_node_id:Node_69_816;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((size[(signed long int)(p)] == 3)) goto Node_69_833;
	__iv__branch_expr = !(((signed int)(pushkind) == 1));
	printf("_tr_node_id:Node_69_817;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!(((signed int)(pushkind) == 1))) goto Node_69_823;
	unsigned int __iv__index_expr_var68 = (unsigned) ((signed long int)(t));
		task_state[(signed long int)(t)] = (unsigned char)(1);
	printf("_tr_node_id:Node_69_818;_tr_assign:task_state[%u]=%hhu;\n", __iv__index_expr_var68, task_state[__iv__index_expr_var68]);fflush(stdout);
	unsigned int __iv__index_expr_var69 = (unsigned) ((signed long int)(p));
		front[(signed long int)(p)] = (((4 + front[(signed long int)(p)]) - 1) % 4);
	printf("_tr_node_id:Node_69_819;_tr_assign:front[%u]=%d;\n", __iv__index_expr_var69, front[__iv__index_expr_var69]);fflush(stdout);
		k = (unsigned char)(front[(signed long int)(p)]);
	printf("_tr_node_id:Node_69_820;_tr_assign:k=%hhu;\n", k);fflush(stdout);
	unsigned int __iv__index_expr_var70 = (unsigned) ((signed long int)(p));
	unsigned int __iv__index_expr_var71 = (unsigned) ((signed long int)(k));
		readyQ[(signed long int)(p)][(signed long int)(k)].tid = t;
	printf("_tr_node_id:Node_69_821;_tr_assign:readyQ[%u][%u].tid=%hhu;\n", __iv__index_expr_var70, __iv__index_expr_var71, readyQ[__iv__index_expr_var70][__iv__index_expr_var71].tid);fflush(stdout);
	goto Node_69_827;
	Node_69_823:;
	unsigned int __iv__index_expr_var72 = (unsigned) ((signed long int)(t));
		task_state[(signed long int)(t)] = (unsigned char)(1);
	printf("_tr_node_id:Node_69_823;_tr_assign:task_state[%u]=%hhu;\n", __iv__index_expr_var72, task_state[__iv__index_expr_var72]);fflush(stdout);
		k = (unsigned char)(rear[(signed long int)(p)]);
	printf("_tr_node_id:Node_69_824;_tr_assign:k=%hhu;\n", k);fflush(stdout);
	unsigned int __iv__index_expr_var73 = (unsigned) ((signed long int)(p));
	unsigned int __iv__index_expr_var74 = (unsigned) ((signed long int)(k));
		readyQ[(signed long int)(p)][(signed long int)(k)].tid = t;
	printf("_tr_node_id:Node_69_825;_tr_assign:readyQ[%u][%u].tid=%hhu;\n", __iv__index_expr_var73, __iv__index_expr_var74, readyQ[__iv__index_expr_var73][__iv__index_expr_var74].tid);fflush(stdout);
	unsigned int __iv__index_expr_var75 = (unsigned) ((signed long int)(p));
		rear[(signed long int)(p)] = (((4 + (signed int)(k)) + 1) % 4);
	printf("_tr_node_id:Node_69_826;_tr_assign:rear[%u]=%d;\n", __iv__index_expr_var75, rear[__iv__index_expr_var75]);fflush(stdout);
	Node_69_827:;
	unsigned int __iv__index_expr_var76 = (unsigned) ((signed long int)(p));
		size[(signed long int)(p)] = (size[(signed long int)(p)] + 1);
	printf("_tr_node_id:Node_69_828;_tr_assign:size[%u]=%d;\n", __iv__index_expr_var76, size[__iv__index_expr_var76]);fflush(stdout);
		wholesize = (wholesize + 1);
	printf("_tr_node_id:Node_69_829;_tr_assign:wholesize=%d;\n", wholesize);fflush(stdout);
	__iv__branch_expr = ((signed int)(max_prio) >= (signed int)(p));
	printf("_tr_node_id:Node_69_830;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (((signed int)(max_prio) >= (signed int)(p))) goto Node_69_832;
		max_prio = p;
	printf("_tr_node_id:Node_69_831;_tr_assign:max_prio=%hhu;\n", max_prio);fflush(stdout);
	Node_69_832:;
	Node_69_833:;
	printf("_tr_return;\n");fflush(stdout);
}
signed int reschedule(API reschedule__api, unsigned char tid) {
	__iv__branch_expr = !(((((signed int)(reschedule__api) == 1) || ((signed int)(reschedule__api) == 2)) || ((signed int)(reschedule__api) == 7)));
	printf("_tr_node_id:Node_70_835;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!(((((signed int)(reschedule__api) == 1) || ((signed int)(reschedule__api) == 2)) || ((signed int)(reschedule__api) == 7)))) goto Node_70_839;
	printf("_tr_call:get_task_from_readyQ;_tr_call_id:90;\n");fflush(stdout);
	get_task_from_readyQ();
	goto Node_70_848;
	Node_70_839:;
	__iv__branch_expr = !(((signed int)(task_static_info[(signed long int)(tid)].preemptable) == 0) ? !(((signed int)(reschedule__api) == 3)) ? TRUE : FALSE : FALSE);
	printf("_tr_node_id:Node_70_839;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!(((signed int)(task_static_info[(signed long int)(tid)].preemptable) == 0) ? !(((signed int)(reschedule__api) == 3)) ? TRUE : FALSE : FALSE)) goto Node_70_842;
	goto Node_70_848;
	Node_70_842:;
	__iv__branch_expr = ((signed int)(task_dyn_info[(signed long int)(tid)].dyn_prio) >= (signed int)(max_prio));
	printf("_tr_node_id:Node_70_842;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (((signed int)(task_dyn_info[(signed long int)(tid)].dyn_prio) >= (signed int)(max_prio))) goto Node_70_845;
	printf("_tr_call:push_task_into_readyQ;_tr_call_id:91;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:t=%hhu;\n", tid);fflush(stdout);
	printf("_tr_param;_tr_assign:p=%hhu;\n", task_dyn_info[(signed long int)(tid)].dyn_prio);fflush(stdout);
	printf("_tr_param;_tr_assign:pc=%d;\n", current_pc[(signed long int)(tid)]);fflush(stdout);
	printf("_tr_param;_tr_assign:pushkind=%d;\n", (push_type)(1));fflush(stdout);
	push_task_into_readyQ(tid, task_dyn_info[(signed long int)(tid)].dyn_prio, current_pc[(signed long int)(tid)], (push_type)(1));
	printf("_tr_call:get_task_from_readyQ;_tr_call_id:92;\n");fflush(stdout);
	get_task_from_readyQ();
	Node_70_845:;
	Node_70_848:;
	printf("_tr_return;\n");fflush(stdout);
}
signed int speedPIDController(signed int d) {
	printf("_tr_return;\n");fflush(stdout);
}
signed int __iv__getbiggestrect_stub(U8 pcolorid, signed int pminarea){
	signed int __iv__return_expr_getbiggestrect;
	if(pcolorid==nxtcamdata[36]) if(nxtcamdata[0]>=nxtcamdata[15]) __iv__return_expr_getbiggestrect = 6; else if(nxtcamdata[1]>=nxtcamdata[9]) __iv__return_expr_getbiggestrect = nxtcamdata[6]; else __iv__return_expr_getbiggestrect = 7; else if(pcolorid==nxtcamdata[1]) if(nxtcamdata[12]<nxtcamdata[40]) if(3==nxtcamdata[38]) __iv__return_expr_getbiggestrect = nxtcamdata[38]; else __iv__return_expr_getbiggestrect = 5; else if(nxtcamdata[18]>=nxtcamdata[20]) if(nxtcamdata[31]==nxtcamdata[29]) __iv__return_expr_getbiggestrect = nxtcamdata[17]; else __iv__return_expr_getbiggestrect = 1; else __iv__return_expr_getbiggestrect = 0; else if(pcolorid==nxtcamdata[21]) __iv__return_expr_getbiggestrect = 4; else __iv__return_expr_getbiggestrect = (-1); 
	__CPROVER_assume((-1 <= __iv__return_expr_getbiggestrect && __iv__return_expr_getbiggestrect <= 7));
	printf("_tr_return;\n");fflush(stdout);
	return __iv__return_expr_getbiggestrect;
}
