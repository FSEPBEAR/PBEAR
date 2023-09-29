int __iv__current_func_call;
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
extern U8 * __VERIFIER_nondet_U8_star();
extern signed int __VERIFIER_nondet_signed_int();
extern object_data_t __VERIFIER_nondet_object_data_t();
int main() {
__iv__current_func_call = 0;	StartOS((unsigned char)(1));
	// End of Function
}
signed int request(U8 port_id) {
	signed int return_value_i2c_busy;
__iv__current_func_call = 2;	return_value_i2c_busy = i2c_busy((signed int)(port_id));
	if (!((return_value_i2c_busy == 0))) goto Node_2_14;
__iv__current_func_call = 3;	i2c_start_transaction((signed int)(port_id), 1u, 0x42, 1, nxtcamdata, 41u, 0);
	Node_2_14:;
	// End of Function
}
signed int postjob() {
	signed int return_value_is_active_alarm_exists;
__iv__current_func_call = 5;	return_value_is_active_alarm_exists = is_active_alarm_exists();
	if ((return_value_is_active_alarm_exists == 0)) goto Node_3_35;
	signed int aid;
	aid = 1;
	Node_3_27:;
	if ((aid >= 3)) goto Node_3_33;
	if ((alarm_state[(signed long int)(aid)] == 0)) goto Node_3_30;
__iv__current_func_call = 6;	ALARM_handler(aid);
	Node_3_30:;
	aid = (aid + 1);
	goto Node_3_27;
	Node_3_33:;
	Node_3_35:;
	// End of Function
}
signed int i2c_start_transaction(signed int port, unsigned int address, signed int internal_address, signed int n_internal_address_bytes, unsigned char* i2c_start_transaction__data, unsigned int nbytes, signed int write) {
	signed int i2c_start_transaction_ret;
	i2c_start_transaction_ret = __VERIFIER_nondet_signed_int();
	signed int i;
	unsigned char return_value___VERIFIER_nondet_unsigned_char;
	signed int return_value_nondet_unsigned_char;
	return_value_nondet_unsigned_char = __VERIFIER_nondet_signed_int();
	return_value___VERIFIER_nondet_unsigned_char = (unsigned char)(return_value_nondet_unsigned_char);
	i2c_start_transaction__data[0l] = return_value___VERIFIER_nondet_unsigned_char;
	__CPROVER_assume(((signed int)(i2c_start_transaction__data[0l]) <= 8));
	i = 1;
	Node_4_53:;
	if (((unsigned int)(i) >= nbytes)) goto Node_4_63;
	unsigned char return_value___VERIFIER_nondet_unsigned_char_0;
	signed int return_value_nondet_unsigned_char_0;
	return_value_nondet_unsigned_char_0 = __VERIFIER_nondet_signed_int();
	return_value___VERIFIER_nondet_unsigned_char_0 = (unsigned char)(return_value_nondet_unsigned_char_0);
	i2c_start_transaction__data[(signed long int)(i)] = return_value___VERIFIER_nondet_unsigned_char_0;
	i = (i + 1);
	goto Node_4_53;
	Node_4_63:;
	return i2c_start_transaction_ret;
}
signed int i2c_busy(signed int port) {
	signed int i2c_busy_ret;
	i2c_busy_ret = __VERIFIER_nondet_signed_int();
	return i2c_busy_ret;
}
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
__iv__current_func_call = 13;	getbiggestrect__1__1__1__1__area = getArea((U8)(i));
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
void Func_AcquisitionTask() {
	if ((current_pc[1] == 1)) goto Node_7_122;
	if ((current_pc[1] == 2)) goto Node_7_123;
	if ((current_pc[1] == 3)) goto Node_7_124;
	if ((current_pc[1] == 4)) goto Node_7_125;
	goto Node_7_126;
	Node_7_122:;
	goto Node_7_126;
	Node_7_123:;
	goto Node_7_151;
	Node_7_124:;
	goto Node_7_158;
	Node_7_125:;
	goto Node_7_162;
	Node_7_126:;
	if (((signed int)(tracking_enabled) == 0)) goto Node_7_138;
	signed int return_value_send_nxtcam_command;
__iv__current_func_call = 14;	return_value_send_nxtcam_command = send_nxtcam_command((U8)(2), (U8)(69));
	tracking_enabled = (S8)(return_value_send_nxtcam_command);
	goto Node_7_158;
	Node_7_138:;
__iv__current_func_call = 15;	request((U8)(2));
__iv__current_func_call = 16;	rectindex = getbiggestrect((U8)(0), -1);
	if (!((rectindex >= 0))) goto Node_7_158;
__iv__current_func_call = 17;	area = getArea((U8)(rectindex));
__iv__current_func_call = 18;	area = median_filter(area);
__iv__current_func_call = 19;	acq_size = fisqrt(area);
__iv__current_func_call = 20;	x = getX((U8)(rectindex));
__iv__current_func_call = 21;	GetResource((unsigned char)(1));
	current_pc[1] = 2;
	goto Node_7_164;
	Node_7_151:;
	objData.position = x;
	objData.size = acq_size;
__iv__current_func_call = 22;	ReleaseResource((unsigned char)(1));
	current_pc[1] = 3;
	goto Node_7_164;
	Node_7_158:;
__iv__current_func_call = 23;	TerminateTask();
	current_pc[1] = 4;
	goto Node_7_164;
	Node_7_162:;
	current_pc[1] = 1;
	Node_7_164:;
	// End of Function
}
signed int speedPIDController(signed int d) {
	signed int error;
	error = (50 - d);
	integral = (integral + error);
	signed int derivative;
	derivative = (error - prevError);
	signed int out;
	out = (signed int)((((1.5 * (double)(error)) + (double)((0 * integral))) + (double)((0 * derivative))));
	return out;
}
SINT send_nxtcam_command(U8 port_id, U8 command) {
	signed int return_value_i2c_busy;
	Node_9_180:;
__iv__current_func_call = 24;	return_value_i2c_busy = i2c_busy((signed int)(port_id));
	if ((return_value_i2c_busy == 0)) goto Node_9_185;
	if ((1 != 0)) goto Node_9_180;
	Node_9_185:;
	nxtcambuffer[0] = command;
	SINT ret;
__iv__current_func_call = 25;	ret = i2c_start_transaction((signed int)(port_id), 1u, 0x41, 1, nxtcambuffer, 1u, 1);
	return ret;
}
data_t median_filter(data_t datum) {
	struct pair *successor;
	struct pair *scan;
	struct pair *scanold;
	struct pair *median;
	unsigned int i;
	datpoint = (datpoint + 1l);
	if (!(((datpoint - buffer) >= 15l))) goto Node_10_208;
	datpoint = buffer;
	Node_10_208:;
	datpoint->value = datum;
	successor = datpoint->point;
	median = &big;
	scan = &big;
	if (!((scan->point == datpoint))) goto Node_10_215;
	scan->point = successor;
	Node_10_215:;
	scanold = scan;
	scan = scan->point;
	i = 0u;
	Node_10_220:;
	if ((i >= 15u)) goto Node_10_250;
	if (!((scan->point == datpoint))) goto Node_10_223;
	scan->point = successor;
	Node_10_223:;
	if ((scan->value >= datum)) goto Node_10_228;
	datpoint->point = scanold->point;
	scanold->point = datpoint;
	datum = 0;
	Node_10_228:;
	median = median->point;
	if ((scan == &small)) goto Node_10_250;
	scanold = scan;
	scan = scan->point;
	if (!((scan->point == datpoint))) goto Node_10_237;
	scan->point = successor;
	Node_10_237:;
	if ((scan->value >= datum)) goto Node_10_242;
	datpoint->point = scanold->point;
	scanold->point = datpoint;
	datum = 0;
	Node_10_242:;
	if ((scan == &small)) goto Node_10_250;
	scanold = scan;
	scan = scan->point;
	i = (i + 1u);
	goto Node_10_220;
	Node_10_250:;
	return median->value;
}
signed int is_active_obj_exists() {
	signed int i;
	i = 1;
	Node_11_262:;
	if ((i >= 4)) goto Node_11_278;
	__CPROVER_bool tmp_if_expr;
	if (!(((signed int)(task_state[(signed long int)(i)]) == 2))) goto Node_11_267;
	tmp_if_expr = (1 != 0);
	goto Node_11_268;
	Node_11_267:;
	tmp_if_expr = (((signed int)(task_state[(signed long int)(i)]) == 1) ? 1 : 0 != 0);
	Node_11_268:;
	if (!tmp_if_expr) goto Node_11_274;
	return 1;
	Node_11_274:;
	i = (i + 1);
	goto Node_11_262;
	Node_11_278:;
	i = 1;
	Node_11_281:;
	if ((i >= 4)) goto Node_11_289;
	if ((alarm_state[(signed long int)(i)] == 0)) goto Node_11_286;
	return 1;
	Node_11_286:;
	i = (i + 1);
	goto Node_11_281;
	Node_11_289:;
	return 0;
}
signed int is_active_alarm_exists() {
	signed int i;
	i = 1;
	Node_12_297:;
	if ((i >= 4)) goto Node_12_305;
	if ((alarm_state[(signed long int)(i)] == 0)) goto Node_12_302;
	return 1;
	Node_12_302:;
	i = (i + 1);
	goto Node_12_297;
	Node_12_305:;
	return 0;
}
signed int getArea(U8 getArea__rectindex) {
	signed int return_value_getWidth;
__iv__current_func_call = 26;	return_value_getWidth = getWidth(getArea__rectindex);
	signed int return_value_getHeight;
__iv__current_func_call = 27;	return_value_getHeight = getHeight(getArea__rectindex);
	return (return_value_getWidth * return_value_getHeight);
}
signed int getX(U8 getX__rectindex) {
	signed int xul;
	xul = (signed int)(nxtcamdata[(signed long int)((((5 * (signed int)(getX__rectindex)) + 1) + 1))]);
	signed int xlr;
	xlr = (signed int)(nxtcamdata[(signed long int)((((5 * (signed int)(getX__rectindex)) + 1) + 3))]);
	return ((xlr + xul) / 2);
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
signed int ReleaseResource_Common(unsigned char resid) {
	unsigned char i;
	signed int return_value_is_alloc_0;
	if (!((!(((signed int)(resid) >= 0)) || ((signed int)(resid) >= 3)))) goto Node_17_357;
	goto Node_17_390;
	Node_17_357:;
__iv__current_func_call = 28;	return_value_is_alloc_0 = is_alloc(resid);
	if ((return_value_is_alloc_0 == (signed int)(current_tid))) goto Node_17_361;
	goto Node_17_390;
	Node_17_361:;
	if ((Resource_Table[(signed long int)(resid)].c_prio >= (unsigned int)(task_static_info[(signed long int)(current_tid)].prio))) goto Node_17_364;
	goto Node_17_390;
	Node_17_364:;
	Resource_Table[(signed long int)(resid)].alloc = (unsigned char)(0);
	if (((unsigned int)(task_static_info[(signed long int)(current_tid)].prio) >= Resource_Table[(signed long int)(resid)].c_prio)) goto Node_17_383;
	current_prio = task_static_info[(signed long int)(current_tid)].prio;
	i = (unsigned char)(0);
	Node_17_368:;
	if (((signed int)(i) >= 3)) goto Node_17_382;
	signed int return_value_is_alloc;
__iv__current_func_call = 29;	return_value_is_alloc = is_alloc(i);
	if (!((return_value_is_alloc == (signed int)(current_tid)))) goto Node_17_377;
	if (((unsigned int)(current_prio) >= Resource_Table[(signed long int)(resid)].c_prio)) goto Node_17_376;
	current_prio = (unsigned char)(Resource_Table[(signed long int)(i)].c_prio);
	Node_17_376:;
	Node_17_377:;
	i = (unsigned char)(((signed int)(i) + 1));
	goto Node_17_368;
	Node_17_382:;
	Node_17_383:;
	task_dyn_info[(signed long int)(current_tid)].dyn_prio = current_prio;
__iv__current_func_call = 30;	reschedule((API)(5), current_tid);
	goto Node_17_390;
	Node_17_390:;
	// End of Function
}
void app() {
	signed int count;
	count = 0;
	current_pc[1] = 1;
	current_pc[2] = 1;
	signed int return_value_is_active_obj_exists;
	Node_18_400:;
__iv__current_func_call = 32;	return_value_is_active_obj_exists = is_active_obj_exists();
	if ((return_value_is_active_obj_exists == 0)) goto Node_18_421;
	if (!((os_on == ON))) goto Node_18_421;
	if ((count >= 600)) goto Node_18_421;
	if (!(((signed int)(current_tid) == 1))) goto Node_18_413;
__iv__current_func_call = 33;	Func_AcquisitionTask();
	goto Node_18_416;
	Node_18_413:;
	if (!(((signed int)(current_tid) == 2))) goto Node_18_415;
__iv__current_func_call = 34;	Func_ControlTask();
	Node_18_415:;
	Node_18_416:;
__iv__current_func_call = 35;	postjob();
__iv__current_func_call = 36;	check_property();
	count = (count + 1);
	if ((1 != 0)) goto Node_18_400;
	Node_18_421:;
	// End of Function
}
signed int ActivateTask_Common(unsigned char reftask) {
	if (!((!(((signed int)(reftask) >= 1)) || ((signed int)(reftask) >= 5)))) goto Node_19_428;
	goto Node_19_445;
	Node_19_428:;
	if (((signed int)(task_dyn_info[(signed long int)(reftask)].act_cnt) >= (signed int)(task_static_info[(signed long int)(reftask)].max_act_cnt))) goto Node_19_443;
	if (!(((signed int)(task_state[(signed long int)(reftask)]) == 0))) goto Node_19_439;
	signed int i;
	i = 0;
	Node_19_433:;
	if ((i >= 3)) goto Node_19_437;
	Event_Table[(signed long int)(i)].task_alloc[(signed long int)(reftask)] = (Evt_State)(0);
	i = (i + 1);
	goto Node_19_433;
	Node_19_437:;
	Node_19_439:;
	task_dyn_info[(signed long int)(reftask)].act_cnt = (unsigned char)(((signed int)(task_dyn_info[(signed long int)(reftask)].act_cnt) + 1));
__iv__current_func_call = 37;	push_task_into_readyQ(reftask, task_static_info[(signed long int)(reftask)].prio, 0, (push_type)(0));
__iv__current_func_call = 38;	reschedule((API)(0), current_tid);
	Node_19_443:;
	Node_19_445:;
	// End of Function
}
void check_property() {
	(void)sizeof(signed int)  ;
	assert((!((ctl_size >= 84)) || (new_speed < 0)));
	// End of Function
}
signed int is_alloc(unsigned char res) {
	return (signed int)(Resource_Table[(signed long int)(res)].alloc);
}
signed int WaitEvent_Common(unsigned char eventid) {
	goto Node_22_456;
	Node_22_456:;
	// End of Function
}
signed int WaitEvent(unsigned char eventid) {
__iv__current_func_call = 42;	WaitEvent_Common(eventid);
	// End of Function
}
signed int TerminateTask() {
__iv__current_func_call = 44;	TerminateTask_Common();
	// End of Function
}
void StartOS(unsigned char app_mode) {
	if (!((os_on == OFF))) goto Node_25_470;
	os_on = ON;
__iv__current_func_call = 46;	initialize();
__iv__current_func_call = 47;	startup_process();
__iv__current_func_call = 48;	app();
	Node_25_470:;
	// End of Function
}
void ShutDownOS() {
	// End of Function
}
signed int SetRelAlarm_Common(unsigned char alarmID, signed int increment, signed int cycle) {
	// End of Function
}
signed int SetRelAlarm(unsigned char alarmID, signed int increment, signed int cycle) {
	// End of Function
}
signed int SetEvent(unsigned char reftask, unsigned char eventid) {
__iv__current_func_call = 51;	SetEvent_Common(reftask, eventid);
	// End of Function
}
signed int GetResource_Common(unsigned char resid) {
	signed int return_value_is_alloc;
	__CPROVER_bool tmp_if_expr;
	if (!((!(((signed int)(resid) >= 0)) || ((signed int)(resid) >= 3)))) goto Node_30_488;
	goto Node_30_503;
	Node_30_488:;
__iv__current_func_call = 53;	return_value_is_alloc = is_alloc(resid);
	if (!((return_value_is_alloc >= 1))) goto Node_30_492;
	tmp_if_expr = (1 != 0);
	goto Node_30_493;
	Node_30_492:;
	tmp_if_expr = (((unsigned int)(task_static_info[(signed long int)(current_tid)].prio) > Resource_Table[(signed long int)(resid)].c_prio) ? 1 : 0 != 0);
	Node_30_493:;
	if (!tmp_if_expr) goto Node_30_497;
	goto Node_30_503;
	Node_30_497:;
	Resource_Table[(signed long int)(resid)].alloc = current_tid;
	if (((unsigned int)(task_dyn_info[(signed long int)(current_tid)].dyn_prio) >= Resource_Table[(signed long int)(resid)].c_prio)) goto Node_30_500;
	task_dyn_info[(signed long int)(current_tid)].dyn_prio = (unsigned char)(Resource_Table[(signed long int)(resid)].c_prio);
	Node_30_500:;
	Node_30_503:;
	// End of Function
}
signed int ReleaseResource(unsigned char resid) {
__iv__current_func_call = 55;	ReleaseResource_Common(resid);
	// End of Function
}
signed int GetResource(unsigned char resid) {
__iv__current_func_call = 57;	GetResource_Common(resid);
	// End of Function
}
signed int ClearEvent_Common(unsigned char eventid) {
	// End of Function
}
void ALARM_handler(signed int aid) {
	if (!((alarm_state[(signed long int)(aid)] == 1))) goto Node_34_523;
	alarm_info[(signed long int)(aid)].next_alarm_tick = (alarm_info[(signed long int)(aid)].next_alarm_tick - 1u);
	if (!((alarm_info[(signed long int)(aid)].next_alarm_tick == 0u))) goto Node_34_522;
	alarm_info[(signed long int)(aid)].next_alarm_tick = alarm_info[(signed long int)(aid)].cycle;
	alarm_state[(signed long int)(aid)] = 2;
	Node_34_522:;
	Node_34_523:;
	if (!((alarm_state[(signed long int)(aid)] == 2))) goto Node_34_537;
	if (!(((signed int)(alarm_info[(signed long int)(aid)].api) == 0))) goto Node_34_528;
__iv__current_func_call = 60;	ActivateTask_Common(alarm_info[(signed long int)(aid)].param1);
	goto Node_34_531;
	Node_34_528:;
	if (!(((signed int)(alarm_info[(signed long int)(aid)].api) == 6))) goto Node_34_530;
__iv__current_func_call = 61;	SetEvent_Common(alarm_info[(signed long int)(aid)].param1, alarm_info[(signed long int)(aid)].param2);
	Node_34_530:;
	Node_34_531:;
	if (!((alarm_info[(signed long int)(aid)].cycle >= 1u))) goto Node_34_535;
	alarm_state[(signed long int)(aid)] = 1;
	goto Node_34_536;
	Node_34_535:;
	alarm_state[(signed long int)(aid)] = 0;
	Node_34_536:;
	Node_34_537:;
	// End of Function
}
void Func_ControlTask() {
	if ((current_pc[2] == 1)) goto Node_35_545;
	if ((current_pc[2] == 2)) goto Node_35_546;
	if ((current_pc[2] == 3)) goto Node_35_547;
	if ((current_pc[2] == 4)) goto Node_35_548;
	goto Node_35_549;
	Node_35_545:;
	goto Node_35_549;
	Node_35_546:;
	goto Node_35_553;
	Node_35_547:;
	goto Node_35_559;
	Node_35_548:;
	goto Node_35_571;
	Node_35_549:;
__iv__current_func_call = 62;	GetResource((unsigned char)(1));
	current_pc[2] = 2;
	goto Node_35_573;
	Node_35_553:;
	data = objData;
__iv__current_func_call = 63;	ReleaseResource((unsigned char)(1));
	current_pc[2] = 3;
	goto Node_35_573;
	Node_35_559:;
	ctl_size = data.size;
	position = data.position;
	if (!(((ctl_size >= 1) && (position >= 1)))) goto Node_35_567;
__iv__current_func_call = 64;	speed_deviation = speedPIDController(ctl_size);
	new_speed = (50 + speed_deviation);
	new_speed = (new_speed > 100) ? 100 : new_speed;
__iv__current_func_call = 65;	directionPIDController(position);
	Node_35_567:;
__iv__current_func_call = 66;	TerminateTask();
	current_pc[2] = 4;
	goto Node_35_573;
	Node_35_571:;
	current_pc[2] = 1;
	Node_35_573:;
	// End of Function
}
signed int SetEvent_Common(unsigned char reftask, unsigned char eventid) {
	if (!((!(((signed int)(reftask) >= 1)) || ((signed int)(reftask) >= 5)))) goto Node_36_578;
	goto Node_36_593;
	Node_36_578:;
	if (!(((signed int)(task_static_info[(signed long int)(reftask)].extended) == 0))) goto Node_36_581;
	goto Node_36_593;
	Node_36_581:;
	if (((signed int)(task_state[(signed long int)(reftask)]) == 0)) goto Node_36_593;
	if (((signed int)(Event_Table[(signed long int)(eventid)].task_alloc[(signed long int)(reftask)]) == 1)) goto Node_36_592;
	Event_Table[(signed long int)(eventid)].task_alloc[(signed long int)(reftask)] = (Evt_State)(1);
	if (!(((signed int)(task_state[(signed long int)(reftask)]) == 3))) goto Node_36_590;
__iv__current_func_call = 67;	push_task_into_readyQ(reftask, task_static_info[(signed long int)(reftask)].prio, current_pc[(signed long int)(reftask)], (push_type)(2));
	Node_36_590:;
__iv__current_func_call = 68;	reschedule((API)(6), current_tid);
	Node_36_592:;
	Node_36_593:;
	// End of Function
}
signed int Schedule_Common() {
__iv__current_func_call = 70;	reschedule((API)(3), current_tid);
	// End of Function
}
signed int ChainTask_Common(unsigned char reftask) {
	goto Node_38_603;
	Node_38_603:;
	// End of Function
}
signed int ActivateTask(unsigned char reftask) {
__iv__current_func_call = 73;	ActivateTask_Common(reftask);
	// End of Function
}
signed int ClearEvent(unsigned char eventid) {
	// End of Function
}
signed int Schedule() {
__iv__current_func_call = 76;	Schedule_Common();
	// End of Function
}
signed int TerminateTask_Common() {
	if (!(((signed int)(task_dyn_info[(signed long int)(current_tid)].act_cnt) >= 1))) goto Node_43_687;
	task_dyn_info[(signed long int)(current_tid)].act_cnt = (unsigned char)(((signed int)(task_dyn_info[(signed long int)(current_tid)].act_cnt) - 1));
	Node_43_687:;
	if (!(((signed int)(task_dyn_info[(signed long int)(current_tid)].act_cnt) >= 1))) goto Node_43_691;
	task_state[(signed long int)(current_tid)] = (unsigned char)(1);
	goto Node_43_692;
	Node_43_691:;
	task_state[(signed long int)(current_tid)] = (unsigned char)(0);
	Node_43_692:;
__iv__current_func_call = 78;	reschedule((API)(1), current_tid);
	// End of Function
}
signed int ChainTask(unsigned char reftask) {
__iv__current_func_call = 80;	ChainTask_Common(reftask);
	// End of Function
}
void term_nxtcam(U8 port_id) {
	// End of Function
}
signed int CancelAlarm(unsigned char alarmID) {
	// End of Function
}
signed int CancelAlarm_Common(unsigned char alarmID) {
	// End of Function
}
signed int fisqrt(signed int val) {
	signed int cnt;
	cnt = 0;
	signed int t;
	t = val;
	Node_48_712:;
	if ((t == 0)) goto Node_48_716;
	cnt = (cnt + 1);
	t = (t >> 1);
	goto Node_48_712;
	Node_48_716:;
	if ((cnt >= 7)) goto Node_48_720;
	t = (val << (6 - cnt));
	goto Node_48_721;
	Node_48_720:;
	t = (val >> (cnt - 6));
	Node_48_721:;
	return ((ftbl[(signed long int)(cnt)] * ftbl2[(signed long int)((t & 31))]) >> 15);
}
void update_prop_automata() {
	// End of Function
}
void user_1ms_isr_type2() {
	// End of Function
}
signed int getY(U8 getY__rectindex) {
	// End of Function
}
U8* getdata() {
	// End of Function
}
void startup_process() {
	unsigned int i;
	i = 0u;
	Node_53_740:;
	if ((i >= 4u)) goto Node_53_749;
	if (((signed int)(task_static_info[(signed long int)(i)].autostart) == 0)) goto Node_53_746;
	task_dyn_info[(signed long int)(i)].act_cnt = (unsigned char)(((signed int)(task_dyn_info[(signed long int)(i)].act_cnt) + 1));
	current_prio = task_static_info[(signed long int)(i)].prio;
__iv__current_func_call = 86;	push_task_into_readyQ((unsigned char)(i), current_prio, 0, (push_type)(0));
	task_state[(signed long int)(i)] = (unsigned char)(1);
	Node_53_746:;
	i = (i + 1u);
	goto Node_53_740;
	Node_53_749:;
	if ((wholesize == 0)) goto Node_53_753;
__iv__current_func_call = 87;	get_task_from_readyQ();
	task_state[(signed long int)(current_tid)] = (unsigned char)(2);
	Node_53_753:;
	// End of Function
}
signed int directionPIDController(signed int d) {
	signed int error;
	error = (83 - d);
	integral = (integral + error);
	prevError = error;
	// End of Function
}
void display_goto_xy(signed int display_goto_xy__x, signed int y) {
	// End of Function
}
void display_int(signed int val, unsigned int places) {
	// End of Function
}
void display_string(char* str) {
	// End of Function
}
void display_update() {
	// End of Function
}
void ecrobot_device_initialize() {
	// End of Function
}
void ecrobot_device_terminate() {
	// End of Function
}
object_data_t getData() {
__iv__current_func_call = 89;	GetResource((unsigned char)(1));
__iv__current_func_call = 90;	ReleaseResource((unsigned char)(1));
	// End of Function
}
void get_task_from_readyQ() {
	if (!((wholesize == 0))) goto Node_62_783;
	current_tid = (unsigned char)(0);
	current_prio = (unsigned char)(0);
	goto Node_62_799;
	Node_62_783:;
	current_tid = readyQ[(signed long int)(max_prio)][(signed long int)(front[(signed long int)(max_prio)])].tid;
	current_prio = max_prio;
	readyQ[(signed long int)(max_prio)][(signed long int)(front[(signed long int)(max_prio)])].tid = (unsigned char)(0);
	front[(signed long int)(max_prio)] = ((front[(signed long int)(max_prio)] + 1) % 4);
	size[(signed long int)(current_prio)] = (size[(signed long int)(current_prio)] - 1);
	wholesize = (wholesize - 1);
	max_prio = current_prio;
	Node_62_791:;
	if (!((size[(signed long int)(max_prio)] == 0))) goto Node_62_797;
	if (((signed int)(max_prio) == 0)) goto Node_62_797;
	max_prio = (unsigned char)(((signed int)(max_prio) - 1));
	goto Node_62_791;
	Node_62_797:;
	task_state[(signed long int)(current_tid)] = (unsigned char)(2);
	Node_62_799:;
	// End of Function
}
void handleISR() {
	// End of Function
}
void i2c_disable(signed int port) {
	// End of Function
}
void i2c_enable(signed int port) {
	// End of Function
}
void init_nxtcam(U8 port_id) {
	// End of Function
}
void initialize() {
	task_static_info[0].max_act_cnt = (unsigned char)(1);
	task_static_info[0].preemptable = (unsigned char)(1);
	task_static_info[0].prio = (unsigned char)(0);
	task_static_info[0].autostart = (unsigned char)(0);
	task_static_info[0].extended = (unsigned char)(0);
	task_static_info[1].max_act_cnt = (unsigned char)(1);
	task_static_info[1].preemptable = (unsigned char)(1);
	task_static_info[1].prio = (unsigned char)(3);
	task_static_info[1].autostart = (unsigned char)(0);
	task_static_info[1].extended = (unsigned char)(0);
	task_static_info[2].max_act_cnt = (unsigned char)(1);
	task_static_info[2].preemptable = (unsigned char)(1);
	task_static_info[2].prio = (unsigned char)(2);
	task_static_info[2].autostart = (unsigned char)(1);
	task_static_info[2].extended = (unsigned char)(0);
	task_dyn_info[1].dyn_prio = task_static_info[1].prio;
	task_dyn_info[1].act_cnt = (unsigned char)(0);
	task_dyn_info[2].dyn_prio = task_static_info[2].prio;
	task_dyn_info[2].act_cnt = (unsigned char)(0);
	alarm_state[1] = 1;
	alarm_info[1].cycle = 30u;
	alarm_info[1].next_alarm_tick = 1u;
	alarm_info[1].api = (API)(0);
	alarm_info[1].param1 = (unsigned char)(1);
	alarm_info[1].param2 = (unsigned char)(0);
	alarm_state[2] = 1;
	alarm_info[2].cycle = 50u;
	alarm_info[2].next_alarm_tick = 1u;
	alarm_info[2].api = (API)(0);
	alarm_info[2].param1 = (unsigned char)(2);
	alarm_info[2].param2 = (unsigned char)(0);
	Resource_Table[1].c_prio = 4u;
	// End of Function
}
void nxt_avr_set_input_power(unsigned char a, signed int b) {
	// End of Function
}
void nxt_motor_set_speed(unsigned int n, signed int speed_percent, signed int brake) {
	// End of Function
}
void push_task_into_readyQ(unsigned char t, unsigned char p, signed int pc, push_type pushkind) {
	if ((size[(signed long int)(p)] == 3)) goto Node_70_863;
	if (!(((signed int)(pushkind) == 1))) goto Node_70_853;
	task_state[(signed long int)(t)] = (unsigned char)(1);
	front[(signed long int)(p)] = (((4 + front[(signed long int)(p)]) - 1) % 4);
	k = (unsigned char)(front[(signed long int)(p)]);
	readyQ[(signed long int)(p)][(signed long int)(k)].tid = t;
	goto Node_70_857;
	Node_70_853:;
	task_state[(signed long int)(t)] = (unsigned char)(1);
	k = (unsigned char)(rear[(signed long int)(p)]);
	readyQ[(signed long int)(p)][(signed long int)(k)].tid = t;
	rear[(signed long int)(p)] = (((4 + (signed int)(k)) + 1) % 4);
	Node_70_857:;
	size[(signed long int)(p)] = (size[(signed long int)(p)] + 1);
	wholesize = (wholesize + 1);
	if (((signed int)(max_prio) >= (signed int)(p))) goto Node_70_862;
	max_prio = p;
	Node_70_862:;
	Node_70_863:;
	// End of Function
}
signed int reschedule(API reschedule__api, unsigned char tid) {
	if (!(((((signed int)(reschedule__api) == 1) || ((signed int)(reschedule__api) == 2)) || ((signed int)(reschedule__api) == 7)))) goto Node_71_869;
__iv__current_func_call = 92;	get_task_from_readyQ();
	goto Node_71_878;
	Node_71_869:;
	if (!(((signed int)(task_static_info[(signed long int)(tid)].preemptable) == 0) ? !(((signed int)(reschedule__api) == 3)) ? TRUE : FALSE : FALSE)) goto Node_71_872;
	goto Node_71_878;
	Node_71_872:;
	if (((signed int)(task_dyn_info[(signed long int)(tid)].dyn_prio) >= (signed int)(max_prio))) goto Node_71_875;
__iv__current_func_call = 93;	push_task_into_readyQ(tid, task_dyn_info[(signed long int)(tid)].dyn_prio, current_pc[(signed long int)(tid)], (push_type)(1));
__iv__current_func_call = 94;	get_task_from_readyQ();
	Node_71_875:;
	Node_71_878:;
	// End of Function
}
