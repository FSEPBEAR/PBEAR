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
signed int __iv__getbiggestrect_stub(U8 pcolorid, signed int pminarea);
int main() {
	StartOS((unsigned char)(1));
	// End of Function
}
SINT send_nxtcam_command(U8 port_id, U8 command) {
	signed int return_value_i2c_busy;
	Node_2_9:;
	return_value_i2c_busy = i2c_busy((signed int)(port_id));
	if ((return_value_i2c_busy == 0)) goto Node_2_14;
	if ((1 != 0)) goto Node_2_9;
	Node_2_14:;
	nxtcambuffer[0] = command;
	SINT ret;
	ret = i2c_start_transaction((signed int)(port_id), 1u, 0x41, 1, nxtcambuffer, 1u, 1);
	return ret;
}
signed int request(U8 port_id) {
	signed int return_value_i2c_busy;
	return_value_i2c_busy = i2c_busy((signed int)(port_id));
	if (!((return_value_i2c_busy == 0))) goto Node_3_35;
	i2c_start_transaction((signed int)(port_id), 1u, 0x42, 1, nxtcamdata, 41u, 0);
	Node_3_35:;
	// End of Function
}
signed int postjob() {
	signed int return_value_is_active_alarm_exists;
	return_value_is_active_alarm_exists = is_active_alarm_exists();
	if ((return_value_is_active_alarm_exists == 0)) goto Node_4_56;
	signed int aid;
	aid = 1;
	Node_4_48:;
	if ((aid >= 3)) goto Node_4_54;
	if ((alarm_state[(signed long int)(aid)] == 0)) goto Node_4_51;
	ALARM_handler(aid);
	Node_4_51:;
	aid = (aid + 1);
	goto Node_4_48;
	Node_4_54:;
	Node_4_56:;
	// End of Function
}
signed int i2c_start_transaction(signed int port, unsigned int address, signed int internal_address, signed int n_internal_address_bytes, unsigned char* i2c_start_transaction__data, unsigned int nbytes, signed int write) {
	signed int i2c_start_transaction_ret;
	i2c_start_transaction_ret = __VERIFIER_nondet_signed_int();
	__CPROVER_printf("__iv__test_case:%d", i2c_start_transaction_ret);
	signed int i;
	unsigned char return_value___VERIFIER_nondet_unsigned_char;
	signed int return_value_nondet_unsigned_char;
	return_value_nondet_unsigned_char = __VERIFIER_nondet_signed_int();
	__CPROVER_printf("__iv__test_case:%d", return_value_nondet_unsigned_char);
	return_value___VERIFIER_nondet_unsigned_char = (unsigned char)(return_value_nondet_unsigned_char);
	i2c_start_transaction__data[0l] = return_value___VERIFIER_nondet_unsigned_char;
	__CPROVER_assume(((signed int)(i2c_start_transaction__data[0l]) <= 8));
	i = 1;
	Node_5_74:;
	if (((unsigned int)(i) >= nbytes)) goto Node_5_84;
	unsigned char return_value___VERIFIER_nondet_unsigned_char_0;
	signed int return_value_nondet_unsigned_char_0;
	return_value_nondet_unsigned_char_0 = __VERIFIER_nondet_signed_int();
	__CPROVER_printf("__iv__test_case:%d", return_value_nondet_unsigned_char_0);
	return_value___VERIFIER_nondet_unsigned_char_0 = (unsigned char)(return_value_nondet_unsigned_char_0);
	i2c_start_transaction__data[(signed long int)(i)] = return_value___VERIFIER_nondet_unsigned_char_0;
	i = (i + 1);
	goto Node_5_74;
	Node_5_84:;
	return i2c_start_transaction_ret;
}
signed int i2c_busy(signed int port) {
	signed int i2c_busy_ret;
	i2c_busy_ret = __VERIFIER_nondet_signed_int();
	__CPROVER_printf("__iv__test_case:%d", i2c_busy_ret);
	return i2c_busy_ret;
}
signed int getbiggestrect(U8 pcolorid, signed int pminarea) {
	signed int getbiggestrect__1__rectindex;
	getbiggestrect__1__rectindex = -1;
	signed int i;
	signed int maxarea;
	maxarea = pminarea;
	i = 0;
	Node_7_109:;
	if ((i >= (signed int)(nxtcamdata[0]))) goto Node_7_130;
	signed int colorid;
	colorid = (signed int)(nxtcamdata[(signed long int)(((1 + (5 * i)) + 0))]);
	if (!((colorid == (signed int)(pcolorid)))) goto Node_7_126;
	signed int getbiggestrect__1__1__1__1__area;
	getbiggestrect__1__1__1__1__area = getArea((U8)(i));
	if (!((getbiggestrect__1__1__1__1__area >= maxarea))) goto Node_7_122;
	maxarea = getbiggestrect__1__1__1__1__area;
	getbiggestrect__1__rectindex = i;
	Node_7_122:;
	Node_7_126:;
	i = (i + 1);
	goto Node_7_109;
	Node_7_130:;
	return getbiggestrect__1__rectindex;
}
signed int getArea(U8 getArea__rectindex) {
	signed int return_value_getWidth;
	return_value_getWidth = getWidth(getArea__rectindex);
	signed int return_value_getHeight;
	return_value_getHeight = getHeight(getArea__rectindex);
	return (return_value_getWidth * return_value_getHeight);
}
signed int ReleaseResource_Common(unsigned char resid) {
	unsigned char i;
	signed int return_value_is_alloc_0;
	if (!((!(((signed int)(resid) >= 0)) || ((signed int)(resid) >= 3)))) goto Node_9_157;
	goto Node_9_190;
	Node_9_157:;
	return_value_is_alloc_0 = is_alloc(resid);
	if ((return_value_is_alloc_0 == (signed int)(current_tid))) goto Node_9_161;
	goto Node_9_190;
	Node_9_161:;
	if ((Resource_Table[(signed long int)(resid)].c_prio >= (unsigned int)(task_static_info[(signed long int)(current_tid)].prio))) goto Node_9_164;
	goto Node_9_190;
	Node_9_164:;
	Resource_Table[(signed long int)(resid)].alloc = (unsigned char)(0);
	if (((unsigned int)(task_static_info[(signed long int)(current_tid)].prio) >= Resource_Table[(signed long int)(resid)].c_prio)) goto Node_9_183;
	current_prio = task_static_info[(signed long int)(current_tid)].prio;
	i = (unsigned char)(0);
	Node_9_168:;
	if (((signed int)(i) >= 3)) goto Node_9_182;
	signed int return_value_is_alloc;
	return_value_is_alloc = is_alloc(i);
	if (!((return_value_is_alloc == (signed int)(current_tid)))) goto Node_9_177;
	if (((unsigned int)(current_prio) >= Resource_Table[(signed long int)(resid)].c_prio)) goto Node_9_176;
	current_prio = (unsigned char)(Resource_Table[(signed long int)(i)].c_prio);
	Node_9_176:;
	Node_9_177:;
	i = (unsigned char)(((signed int)(i) + 1));
	goto Node_9_168;
	Node_9_182:;
	Node_9_183:;
	task_dyn_info[(signed long int)(current_tid)].dyn_prio = current_prio;
	reschedule((API)(5), current_tid);
	goto Node_9_190;
	Node_9_190:;
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
data_t median_filter(data_t datum) {
	struct pair *successor;
	struct pair *scan;
	struct pair *scanold;
	struct pair *median;
	unsigned int i;
	datpoint = (datpoint + 1l);
	if (!(((datpoint - buffer) >= 15l))) goto Node_11_216;
	datpoint = buffer;
	Node_11_216:;
	datpoint->value = datum;
	successor = datpoint->point;
	median = &big;
	scan = &big;
	if (!((scan->point == datpoint))) goto Node_11_223;
	scan->point = successor;
	Node_11_223:;
	scanold = scan;
	scan = scan->point;
	i = 0u;
	Node_11_228:;
	if ((i >= 15u)) goto Node_11_258;
	if (!((scan->point == datpoint))) goto Node_11_231;
	scan->point = successor;
	Node_11_231:;
	if ((scan->value >= datum)) goto Node_11_236;
	datpoint->point = scanold->point;
	scanold->point = datpoint;
	datum = 0;
	Node_11_236:;
	median = median->point;
	if ((scan == &small)) goto Node_11_258;
	scanold = scan;
	scan = scan->point;
	if (!((scan->point == datpoint))) goto Node_11_245;
	scan->point = successor;
	Node_11_245:;
	if ((scan->value >= datum)) goto Node_11_250;
	datpoint->point = scanold->point;
	scanold->point = datpoint;
	datum = 0;
	Node_11_250:;
	if ((scan == &small)) goto Node_11_258;
	scanold = scan;
	scan = scan->point;
	i = (i + 1u);
	goto Node_11_228;
	Node_11_258:;
	return median->value;
}
signed int is_active_obj_exists() {
	signed int i;
	i = 1;
	Node_12_270:;
	if ((i >= 4)) goto Node_12_286;
	__CPROVER_bool tmp_if_expr;
	if (!(((signed int)(task_state[(signed long int)(i)]) == 2))) goto Node_12_275;
	tmp_if_expr = (1 != 0);
	goto Node_12_276;
	Node_12_275:;
	tmp_if_expr = (((signed int)(task_state[(signed long int)(i)]) == 1) ? 1 : 0 != 0);
	Node_12_276:;
	if (!tmp_if_expr) goto Node_12_282;
	return 1;
	Node_12_282:;
	i = (i + 1);
	goto Node_12_270;
	Node_12_286:;
	i = 1;
	Node_12_289:;
	if ((i >= 4)) goto Node_12_297;
	if ((alarm_state[(signed long int)(i)] == 0)) goto Node_12_294;
	return 1;
	Node_12_294:;
	i = (i + 1);
	goto Node_12_289;
	Node_12_297:;
	return 0;
}
signed int is_active_alarm_exists() {
	signed int i;
	i = 1;
	Node_13_305:;
	if ((i >= 4)) goto Node_13_313;
	if ((alarm_state[(signed long int)(i)] == 0)) goto Node_13_310;
	return 1;
	Node_13_310:;
	i = (i + 1);
	goto Node_13_305;
	Node_13_313:;
	return 0;
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
void Func_AcquisitionTask() {
	if ((current_pc[1] == 1)) goto Node_17_351;
	if ((current_pc[1] == 2)) goto Node_17_352;
	if ((current_pc[1] == 3)) goto Node_17_353;
	if ((current_pc[1] == 4)) goto Node_17_354;
	goto Node_17_355;
	Node_17_351:;
	goto Node_17_355;
	Node_17_352:;
	goto Node_17_380;
	Node_17_353:;
	goto Node_17_387;
	Node_17_354:;
	goto Node_17_391;
	Node_17_355:;
	if (((signed int)(tracking_enabled) == 0)) goto Node_17_367;
	signed int return_value_send_nxtcam_command;
	return_value_send_nxtcam_command = send_nxtcam_command((U8)(2), (U8)(69));
	tracking_enabled = (S8)(return_value_send_nxtcam_command);
	goto Node_17_387;
	Node_17_367:;
	request((U8)(2));
	rectindex = __iv__getbiggestrect_stub((U8)(0), -1);
	if (!((rectindex >= 0))) goto Node_17_387;
	area = getArea((U8)(rectindex));
	area = median_filter(area);
	acq_size = fisqrt(area);
	x = getX((U8)(rectindex));
	GetResource((unsigned char)(1));
	current_pc[1] = 2;
	goto Node_17_393;
	Node_17_380:;
	objData.position = x;
	objData.size = acq_size;
	ReleaseResource((unsigned char)(1));
	current_pc[1] = 3;
	goto Node_17_393;
	Node_17_387:;
	TerminateTask();
	current_pc[1] = 4;
	goto Node_17_393;
	Node_17_391:;
	current_pc[1] = 1;
	Node_17_393:;
	// End of Function
}
void app() {
	signed int count;
	count = 0;
	current_pc[1] = 1;
	current_pc[2] = 1;
	signed int return_value_is_active_obj_exists;
	Node_18_400:;
	return_value_is_active_obj_exists = is_active_obj_exists();
	if ((return_value_is_active_obj_exists == 0)) goto Node_18_422;
	if (!((os_on == ON))) goto Node_18_422;
	if ((count >= 600)) goto Node_18_422;
	if (!(((signed int)(current_tid) == 1))) goto Node_18_413;
	Func_AcquisitionTask();
	goto Node_18_416;
	Node_18_413:;
	if (!(((signed int)(current_tid) == 2))) goto Node_18_415;
	Func_ControlTask();
	Node_18_415:;
	Node_18_416:;
	postjob();
	update_prop_automata();
	check_property();
	count = (count + 1);
	if ((1 != 0)) goto Node_18_400;
	Node_18_422:;
	// End of Function
}
signed int ActivateTask_Common(unsigned char reftask) {
	if (!((!(((signed int)(reftask) >= 1)) || ((signed int)(reftask) >= 5)))) goto Node_19_429;
	goto Node_19_446;
	Node_19_429:;
	if (((signed int)(task_dyn_info[(signed long int)(reftask)].act_cnt) >= (signed int)(task_static_info[(signed long int)(reftask)].max_act_cnt))) goto Node_19_444;
	if (!(((signed int)(task_state[(signed long int)(reftask)]) == 0))) goto Node_19_440;
	signed int i;
	i = 0;
	Node_19_434:;
	if ((i >= 3)) goto Node_19_438;
	Event_Table[(signed long int)(i)].task_alloc[(signed long int)(reftask)] = (Evt_State)(0);
	i = (i + 1);
	goto Node_19_434;
	Node_19_438:;
	Node_19_440:;
	task_dyn_info[(signed long int)(reftask)].act_cnt = (unsigned char)(((signed int)(task_dyn_info[(signed long int)(reftask)].act_cnt) + 1));
	push_task_into_readyQ(reftask, task_static_info[(signed long int)(reftask)].prio, 0, (push_type)(0));
	reschedule((API)(0), current_tid);
	Node_19_444:;
	Node_19_446:;
	// End of Function
}
void check_property() {
	(void)sizeof(signed int)  ;
	if (!((state != 2))) __CPROVER_printf("violated property: Node_20_450");
	assert((state != 2));
	// End of Function
}
signed int is_alloc(unsigned char res) {
	return (signed int)(Resource_Table[(signed long int)(res)].alloc);
}
signed int WaitEvent_Common(unsigned char eventid) {
	goto Node_22_457;
	Node_22_457:;
	// End of Function
}
signed int WaitEvent(unsigned char eventid) {
	WaitEvent_Common(eventid);
	// End of Function
}
signed int TerminateTask() {
	TerminateTask_Common();
	// End of Function
}
void StartOS(unsigned char app_mode) {
	if (!((os_on == OFF))) goto Node_25_471;
	os_on = ON;
	initialize();
	startup_process();
	app();
	Node_25_471:;
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
	SetEvent_Common(reftask, eventid);
	// End of Function
}
signed int GetResource_Common(unsigned char resid) {
	signed int return_value_is_alloc;
	__CPROVER_bool tmp_if_expr;
	if (!((!(((signed int)(resid) >= 0)) || ((signed int)(resid) >= 3)))) goto Node_30_489;
	goto Node_30_504;
	Node_30_489:;
	return_value_is_alloc = is_alloc(resid);
	if (!((return_value_is_alloc >= 1))) goto Node_30_493;
	tmp_if_expr = (1 != 0);
	goto Node_30_494;
	Node_30_493:;
	tmp_if_expr = (((unsigned int)(task_static_info[(signed long int)(current_tid)].prio) > Resource_Table[(signed long int)(resid)].c_prio) ? 1 : 0 != 0);
	Node_30_494:;
	if (!tmp_if_expr) goto Node_30_498;
	goto Node_30_504;
	Node_30_498:;
	Resource_Table[(signed long int)(resid)].alloc = current_tid;
	if (((unsigned int)(task_dyn_info[(signed long int)(current_tid)].dyn_prio) >= Resource_Table[(signed long int)(resid)].c_prio)) goto Node_30_501;
	task_dyn_info[(signed long int)(current_tid)].dyn_prio = (unsigned char)(Resource_Table[(signed long int)(resid)].c_prio);
	Node_30_501:;
	Node_30_504:;
	// End of Function
}
signed int ReleaseResource(unsigned char resid) {
	ReleaseResource_Common(resid);
	// End of Function
}
signed int GetResource(unsigned char resid) {
	GetResource_Common(resid);
	// End of Function
}
signed int ClearEvent_Common(unsigned char eventid) {
	// End of Function
}
void ALARM_handler(signed int aid) {
	if (!((alarm_state[(signed long int)(aid)] == 1))) goto Node_34_524;
	alarm_info[(signed long int)(aid)].next_alarm_tick = (alarm_info[(signed long int)(aid)].next_alarm_tick - 1u);
	if (!((alarm_info[(signed long int)(aid)].next_alarm_tick == 0u))) goto Node_34_523;
	alarm_info[(signed long int)(aid)].next_alarm_tick = alarm_info[(signed long int)(aid)].cycle;
	alarm_state[(signed long int)(aid)] = 2;
	Node_34_523:;
	Node_34_524:;
	if (!((alarm_state[(signed long int)(aid)] == 2))) goto Node_34_538;
	if (!(((signed int)(alarm_info[(signed long int)(aid)].api) == 0))) goto Node_34_529;
	ActivateTask_Common(alarm_info[(signed long int)(aid)].param1);
	goto Node_34_532;
	Node_34_529:;
	if (!(((signed int)(alarm_info[(signed long int)(aid)].api) == 6))) goto Node_34_531;
	SetEvent_Common(alarm_info[(signed long int)(aid)].param1, alarm_info[(signed long int)(aid)].param2);
	Node_34_531:;
	Node_34_532:;
	if (!((alarm_info[(signed long int)(aid)].cycle >= 1u))) goto Node_34_536;
	alarm_state[(signed long int)(aid)] = 1;
	goto Node_34_537;
	Node_34_536:;
	alarm_state[(signed long int)(aid)] = 0;
	Node_34_537:;
	Node_34_538:;
	// End of Function
}
void Func_ControlTask() {
	if ((current_pc[2] == 1)) goto Node_35_546;
	if ((current_pc[2] == 2)) goto Node_35_547;
	if ((current_pc[2] == 3)) goto Node_35_548;
	if ((current_pc[2] == 4)) goto Node_35_549;
	goto Node_35_550;
	Node_35_546:;
	goto Node_35_550;
	Node_35_547:;
	goto Node_35_554;
	Node_35_548:;
	goto Node_35_560;
	Node_35_549:;
	goto Node_35_572;
	Node_35_550:;
	GetResource((unsigned char)(1));
	current_pc[2] = 2;
	goto Node_35_574;
	Node_35_554:;
	data = objData;
	ReleaseResource((unsigned char)(1));
	current_pc[2] = 3;
	goto Node_35_574;
	Node_35_560:;
	ctl_size = data.size;
	position = data.position;
	if (!(((ctl_size >= 1) && (position >= 1)))) goto Node_35_568;
	speed_deviation = speedPIDController(ctl_size);
	new_speed = (50 + speed_deviation);
	new_speed = (new_speed > 100) ? 100 : new_speed;
	directionPIDController(position);
	Node_35_568:;
	TerminateTask();
	current_pc[2] = 4;
	goto Node_35_574;
	Node_35_572:;
	current_pc[2] = 1;
	Node_35_574:;
	// End of Function
}
signed int SetEvent_Common(unsigned char reftask, unsigned char eventid) {
	if (!((!(((signed int)(reftask) >= 1)) || ((signed int)(reftask) >= 5)))) goto Node_36_579;
	goto Node_36_594;
	Node_36_579:;
	if (!(((signed int)(task_static_info[(signed long int)(reftask)].extended) == 0))) goto Node_36_582;
	goto Node_36_594;
	Node_36_582:;
	if (((signed int)(task_state[(signed long int)(reftask)]) == 0)) goto Node_36_594;
	if (((signed int)(Event_Table[(signed long int)(eventid)].task_alloc[(signed long int)(reftask)]) == 1)) goto Node_36_593;
	Event_Table[(signed long int)(eventid)].task_alloc[(signed long int)(reftask)] = (Evt_State)(1);
	if (!(((signed int)(task_state[(signed long int)(reftask)]) == 3))) goto Node_36_591;
	push_task_into_readyQ(reftask, task_static_info[(signed long int)(reftask)].prio, current_pc[(signed long int)(reftask)], (push_type)(2));
	Node_36_591:;
	reschedule((API)(6), current_tid);
	Node_36_593:;
	Node_36_594:;
	// End of Function
}
signed int Schedule_Common() {
	reschedule((API)(3), current_tid);
	// End of Function
}
signed int ChainTask_Common(unsigned char reftask) {
	goto Node_38_604;
	Node_38_604:;
	// End of Function
}
signed int ActivateTask(unsigned char reftask) {
	ActivateTask_Common(reftask);
	// End of Function
}
signed int ClearEvent(unsigned char eventid) {
	// End of Function
}
signed int Schedule() {
	Schedule_Common();
	// End of Function
}
signed int TerminateTask_Common() {
	if (!(((signed int)(task_dyn_info[(signed long int)(current_tid)].act_cnt) >= 1))) goto Node_43_688;
	task_dyn_info[(signed long int)(current_tid)].act_cnt = (unsigned char)(((signed int)(task_dyn_info[(signed long int)(current_tid)].act_cnt) - 1));
	Node_43_688:;
	if (!(((signed int)(task_dyn_info[(signed long int)(current_tid)].act_cnt) >= 1))) goto Node_43_692;
	task_state[(signed long int)(current_tid)] = (unsigned char)(1);
	goto Node_43_693;
	Node_43_692:;
	task_state[(signed long int)(current_tid)] = (unsigned char)(0);
	Node_43_693:;
	reschedule((API)(1), current_tid);
	// End of Function
}
signed int ChainTask(unsigned char reftask) {
	ChainTask_Common(reftask);
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
	Node_48_713:;
	if ((t == 0)) goto Node_48_717;
	cnt = (cnt + 1);
	t = (t >> 1);
	goto Node_48_713;
	Node_48_717:;
	if ((cnt >= 7)) goto Node_48_721;
	t = (val << (6 - cnt));
	goto Node_48_722;
	Node_48_721:;
	t = (val >> (cnt - 6));
	Node_48_722:;
	return ((ftbl[(signed long int)(cnt)] * ftbl2[(signed long int)((t & 31))]) >> 15);
}
void update_prop_automata() {
	if (!((state == 0))) goto Node_49_733;
	if (!((new_speed >= 71))) goto Node_49_731;
	state = 1;
	Node_49_731:;
	goto Node_49_744;
	Node_49_733:;
	if (!((state == 1))) goto Node_49_743;
	if ((new_speed >= 10)) goto Node_49_737;
	state = 2;
	goto Node_49_742;
	Node_49_737:;
	if (!((new_speed >= 71))) goto Node_49_740;
	state = 1;
	goto Node_49_741;
	Node_49_740:;
	state = 0;
	Node_49_741:;
	Node_49_742:;
	Node_49_743:;
	Node_49_744:;
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
	Node_53_757:;
	if ((i >= 4u)) goto Node_53_766;
	if (((signed int)(task_static_info[(signed long int)(i)].autostart) == 0)) goto Node_53_763;
	task_dyn_info[(signed long int)(i)].act_cnt = (unsigned char)(((signed int)(task_dyn_info[(signed long int)(i)].act_cnt) + 1));
	current_prio = task_static_info[(signed long int)(i)].prio;
	push_task_into_readyQ((unsigned char)(i), current_prio, 0, (push_type)(0));
	task_state[(signed long int)(i)] = (unsigned char)(1);
	Node_53_763:;
	i = (i + 1u);
	goto Node_53_757;
	Node_53_766:;
	if ((wholesize == 0)) goto Node_53_770;
	get_task_from_readyQ();
	task_state[(signed long int)(current_tid)] = (unsigned char)(2);
	Node_53_770:;
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
	GetResource((unsigned char)(1));
	ReleaseResource((unsigned char)(1));
	// End of Function
}
void get_task_from_readyQ() {
	if (!((wholesize == 0))) goto Node_62_800;
	current_tid = (unsigned char)(0);
	current_prio = (unsigned char)(0);
	goto Node_62_816;
	Node_62_800:;
	current_tid = readyQ[(signed long int)(max_prio)][(signed long int)(front[(signed long int)(max_prio)])].tid;
	current_prio = max_prio;
	readyQ[(signed long int)(max_prio)][(signed long int)(front[(signed long int)(max_prio)])].tid = (unsigned char)(0);
	front[(signed long int)(max_prio)] = ((front[(signed long int)(max_prio)] + 1) % 4);
	size[(signed long int)(current_prio)] = (size[(signed long int)(current_prio)] - 1);
	wholesize = (wholesize - 1);
	max_prio = current_prio;
	Node_62_808:;
	if (!((size[(signed long int)(max_prio)] == 0))) goto Node_62_814;
	if (((signed int)(max_prio) == 0)) goto Node_62_814;
	max_prio = (unsigned char)(((signed int)(max_prio) - 1));
	goto Node_62_808;
	Node_62_814:;
	task_state[(signed long int)(current_tid)] = (unsigned char)(2);
	Node_62_816:;
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
	if ((size[(signed long int)(p)] == 3)) goto Node_70_880;
	if (!(((signed int)(pushkind) == 1))) goto Node_70_870;
	task_state[(signed long int)(t)] = (unsigned char)(1);
	front[(signed long int)(p)] = (((4 + front[(signed long int)(p)]) - 1) % 4);
	k = (unsigned char)(front[(signed long int)(p)]);
	readyQ[(signed long int)(p)][(signed long int)(k)].tid = t;
	goto Node_70_874;
	Node_70_870:;
	task_state[(signed long int)(t)] = (unsigned char)(1);
	k = (unsigned char)(rear[(signed long int)(p)]);
	readyQ[(signed long int)(p)][(signed long int)(k)].tid = t;
	rear[(signed long int)(p)] = (((4 + (signed int)(k)) + 1) % 4);
	Node_70_874:;
	size[(signed long int)(p)] = (size[(signed long int)(p)] + 1);
	wholesize = (wholesize + 1);
	if (((signed int)(max_prio) >= (signed int)(p))) goto Node_70_879;
	max_prio = p;
	Node_70_879:;
	Node_70_880:;
	// End of Function
}
signed int reschedule(API reschedule__api, unsigned char tid) {
	if (!(((((signed int)(reschedule__api) == 1) || ((signed int)(reschedule__api) == 2)) || ((signed int)(reschedule__api) == 7)))) goto Node_71_886;
	get_task_from_readyQ();
	goto Node_71_895;
	Node_71_886:;
	if (!(((signed int)(task_static_info[(signed long int)(tid)].preemptable) == 0) ? !(((signed int)(reschedule__api) == 3)) ? TRUE : FALSE : FALSE)) goto Node_71_889;
	goto Node_71_895;
	Node_71_889:;
	if (((signed int)(task_dyn_info[(signed long int)(tid)].dyn_prio) >= (signed int)(max_prio))) goto Node_71_892;
	push_task_into_readyQ(tid, task_dyn_info[(signed long int)(tid)].dyn_prio, current_pc[(signed long int)(tid)], (push_type)(1));
	get_task_from_readyQ();
	Node_71_892:;
	Node_71_895:;
	// End of Function
}
signed int __iv__getbiggestrect_stub(U8 pcolorid, signed int pminarea){
	__CPROVER_printf("__iv__stub_call:getbiggestrect");
	__CPROVER_printf("__iv__stub_input:nxtcamdata[0]=%u", nxtcamdata[0]);
	__CPROVER_printf("__iv__stub_input:nxtcamdata[1]=%u", nxtcamdata[1]);
	__CPROVER_printf("__iv__stub_input:nxtcamdata[2]=%u", nxtcamdata[2]);
	__CPROVER_printf("__iv__stub_input:nxtcamdata[3]=%u", nxtcamdata[3]);
	__CPROVER_printf("__iv__stub_input:nxtcamdata[4]=%u", nxtcamdata[4]);
	__CPROVER_printf("__iv__stub_input:nxtcamdata[5]=%u", nxtcamdata[5]);
	__CPROVER_printf("__iv__stub_input:nxtcamdata[6]=%u", nxtcamdata[6]);
	__CPROVER_printf("__iv__stub_input:nxtcamdata[7]=%u", nxtcamdata[7]);
	__CPROVER_printf("__iv__stub_input:nxtcamdata[8]=%u", nxtcamdata[8]);
	__CPROVER_printf("__iv__stub_input:nxtcamdata[9]=%u", nxtcamdata[9]);
	__CPROVER_printf("__iv__stub_input:nxtcamdata[10]=%u", nxtcamdata[10]);
	__CPROVER_printf("__iv__stub_input:nxtcamdata[11]=%u", nxtcamdata[11]);
	__CPROVER_printf("__iv__stub_input:nxtcamdata[12]=%u", nxtcamdata[12]);
	__CPROVER_printf("__iv__stub_input:nxtcamdata[13]=%u", nxtcamdata[13]);
	__CPROVER_printf("__iv__stub_input:nxtcamdata[14]=%u", nxtcamdata[14]);
	__CPROVER_printf("__iv__stub_input:nxtcamdata[15]=%u", nxtcamdata[15]);
	__CPROVER_printf("__iv__stub_input:nxtcamdata[16]=%u", nxtcamdata[16]);
	__CPROVER_printf("__iv__stub_input:nxtcamdata[17]=%u", nxtcamdata[17]);
	__CPROVER_printf("__iv__stub_input:nxtcamdata[18]=%u", nxtcamdata[18]);
	__CPROVER_printf("__iv__stub_input:nxtcamdata[19]=%u", nxtcamdata[19]);
	__CPROVER_printf("__iv__stub_input:nxtcamdata[20]=%u", nxtcamdata[20]);
	__CPROVER_printf("__iv__stub_input:nxtcamdata[21]=%u", nxtcamdata[21]);
	__CPROVER_printf("__iv__stub_input:nxtcamdata[22]=%u", nxtcamdata[22]);
	__CPROVER_printf("__iv__stub_input:pcolorid=%u", pcolorid);
	__CPROVER_printf("__iv__stub_input:nxtcamdata[23]=%u", nxtcamdata[23]);
	__CPROVER_printf("__iv__stub_input:pminarea=%d", pminarea);
	__CPROVER_printf("__iv__stub_input:nxtcamdata[24]=%u", nxtcamdata[24]);
	__CPROVER_printf("__iv__stub_input:nxtcamdata[25]=%u", nxtcamdata[25]);
	__CPROVER_printf("__iv__stub_input:nxtcamdata[26]=%u", nxtcamdata[26]);
	__CPROVER_printf("__iv__stub_input:nxtcamdata[27]=%u", nxtcamdata[27]);
	__CPROVER_printf("__iv__stub_input:nxtcamdata[28]=%u", nxtcamdata[28]);
	__CPROVER_printf("__iv__stub_input:nxtcamdata[29]=%u", nxtcamdata[29]);
	__CPROVER_printf("__iv__stub_input:nxtcamdata[30]=%u", nxtcamdata[30]);
	__CPROVER_printf("__iv__stub_input:nxtcamdata[31]=%u", nxtcamdata[31]);
	__CPROVER_printf("__iv__stub_input:nxtcamdata[32]=%u", nxtcamdata[32]);
	__CPROVER_printf("__iv__stub_input:nxtcamdata[33]=%u", nxtcamdata[33]);
	__CPROVER_printf("__iv__stub_input:nxtcamdata[34]=%u", nxtcamdata[34]);
	__CPROVER_printf("__iv__stub_input:nxtcamdata[35]=%u", nxtcamdata[35]);
	__CPROVER_printf("__iv__stub_input:nxtcamdata[36]=%u", nxtcamdata[36]);
	__CPROVER_printf("__iv__stub_input:nxtcamdata[37]=%u", nxtcamdata[37]);
	__CPROVER_printf("__iv__stub_input:nxtcamdata[38]=%u", nxtcamdata[38]);
	__CPROVER_printf("__iv__stub_input:nxtcamdata[39]=%u", nxtcamdata[39]);
	__CPROVER_printf("__iv__stub_input:nxtcamdata[40]=%u", nxtcamdata[40]);
	signed int __iv__return_expr_getbiggestrect;
	if(pcolorid==nxtcamdata[36]) if(nxtcamdata[0]>=nxtcamdata[15]) __iv__return_expr_getbiggestrect = 6; else if(nxtcamdata[1]>=nxtcamdata[9]) __iv__return_expr_getbiggestrect = nxtcamdata[6]; else __iv__return_expr_getbiggestrect = 7; else if(pcolorid==nxtcamdata[1]) if(nxtcamdata[12]<nxtcamdata[40]) if(3==nxtcamdata[38]) __iv__return_expr_getbiggestrect = nxtcamdata[38]; else __iv__return_expr_getbiggestrect = 5; else if(nxtcamdata[18]>=nxtcamdata[20]) if(nxtcamdata[31]==nxtcamdata[29]) __iv__return_expr_getbiggestrect = nxtcamdata[17]; else __iv__return_expr_getbiggestrect = 1; else __iv__return_expr_getbiggestrect = 0; else if(pcolorid==nxtcamdata[21]) __iv__return_expr_getbiggestrect = 4; else __iv__return_expr_getbiggestrect = (-1); 
	__CPROVER_assume((-1 <= __iv__return_expr_getbiggestrect && __iv__return_expr_getbiggestrect <= 7));
	__CPROVER_printf("__iv__stub_output:__iv__return_expr_getbiggestrect=%d", __iv__return_expr_getbiggestrect);
	return __iv__return_expr_getbiggestrect;
}
