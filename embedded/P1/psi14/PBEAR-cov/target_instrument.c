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
extern U8 * __VERIFIER_nondet_U8_star();
extern signed int __VERIFIER_nondet_signed_int();
extern object_data_t __VERIFIER_nondet_object_data_t();
int main() {
__iv__current_func_call = 0;	StartOS((unsigned char)(1));
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
	Node_2_21:;
	if (((unsigned int)(i) >= nbytes)) goto Node_2_31;
	unsigned char return_value___VERIFIER_nondet_unsigned_char_0;
	signed int return_value_nondet_unsigned_char_0;
	return_value_nondet_unsigned_char_0 = __VERIFIER_nondet_signed_int();
	return_value___VERIFIER_nondet_unsigned_char_0 = (unsigned char)(return_value_nondet_unsigned_char_0);
	i2c_start_transaction__data[(signed long int)(i)] = return_value___VERIFIER_nondet_unsigned_char_0;
	i = (i + 1);
	goto Node_2_21;
	Node_2_31:;
	return i2c_start_transaction_ret;
}
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
__iv__current_func_call = 6;	getbiggestrect__1__1__1__1__area = getArea((U8)(i));
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
__iv__current_func_call = 7;	return_value_getWidth = getWidth(getArea__rectindex);
	signed int return_value_getHeight;
__iv__current_func_call = 8;	return_value_getHeight = getHeight(getArea__rectindex);
	return (return_value_getWidth * return_value_getHeight);
}
SINT send_nxtcam_command(U8 port_id, U8 command) {
	signed int return_value_i2c_busy;
	Node_5_91:;
__iv__current_func_call = 9;	return_value_i2c_busy = i2c_busy((signed int)(port_id));
	if ((return_value_i2c_busy == 0)) goto Node_5_96;
	if ((1 != 0)) goto Node_5_91;
	Node_5_96:;
	nxtcambuffer[0] = command;
	SINT ret;
__iv__current_func_call = 10;	ret = i2c_start_transaction((signed int)(port_id), 1u, 0x41, 1, nxtcambuffer, 1u, 1);
	return ret;
}
signed int request(U8 port_id) {
	signed int return_value_i2c_busy;
__iv__current_func_call = 11;	return_value_i2c_busy = i2c_busy((signed int)(port_id));
	if (!((return_value_i2c_busy == 0))) goto Node_6_117;
__iv__current_func_call = 12;	i2c_start_transaction((signed int)(port_id), 1u, 0x42, 1, nxtcamdata, 41u, 0);
	Node_6_117:;
	// End of Function
}
signed int i2c_busy(signed int port) {
	signed int i2c_busy_ret;
	i2c_busy_ret = __VERIFIER_nondet_signed_int();
	return i2c_busy_ret;
}
signed int postjob() {
	signed int return_value_is_active_alarm_exists;
__iv__current_func_call = 15;	return_value_is_active_alarm_exists = is_active_alarm_exists();
	if ((return_value_is_active_alarm_exists == 0)) goto Node_8_147;
	signed int aid;
	aid = 1;
	Node_8_139:;
	if ((aid >= 3)) goto Node_8_145;
	if ((alarm_state[(signed long int)(aid)] == 0)) goto Node_8_142;
__iv__current_func_call = 16;	ALARM_handler(aid);
	Node_8_142:;
	aid = (aid + 1);
	goto Node_8_139;
	Node_8_145:;
	Node_8_147:;
	// End of Function
}
signed int is_active_alarm_exists() {
	signed int i;
	i = 1;
	Node_9_155:;
	if ((i >= 4)) goto Node_9_163;
	if ((alarm_state[(signed long int)(i)] == 0)) goto Node_9_160;
	return 1;
	Node_9_160:;
	i = (i + 1);
	goto Node_9_155;
	Node_9_163:;
	return 0;
}
data_t median_filter(data_t datum) {
	struct pair *successor;
	struct pair *scan;
	struct pair *scanold;
	struct pair *median;
	unsigned int i;
	datpoint = (datpoint + 1l);
	if (!(((datpoint - buffer) >= 15l))) goto Node_10_176;
	datpoint = buffer;
	Node_10_176:;
	datpoint->value = datum;
	successor = datpoint->point;
	median = &big;
	scan = &big;
	if (!((scan->point == datpoint))) goto Node_10_183;
	scan->point = successor;
	Node_10_183:;
	scanold = scan;
	scan = scan->point;
	i = 0u;
	Node_10_188:;
	if ((i >= 15u)) goto Node_10_218;
	if (!((scan->point == datpoint))) goto Node_10_191;
	scan->point = successor;
	Node_10_191:;
	if ((scan->value >= datum)) goto Node_10_196;
	datpoint->point = scanold->point;
	scanold->point = datpoint;
	datum = 0;
	Node_10_196:;
	median = median->point;
	if ((scan == &small)) goto Node_10_218;
	scanold = scan;
	scan = scan->point;
	if (!((scan->point == datpoint))) goto Node_10_205;
	scan->point = successor;
	Node_10_205:;
	if ((scan->value >= datum)) goto Node_10_210;
	datpoint->point = scanold->point;
	scanold->point = datpoint;
	datum = 0;
	Node_10_210:;
	if ((scan == &small)) goto Node_10_218;
	scanold = scan;
	scan = scan->point;
	i = (i + 1u);
	goto Node_10_188;
	Node_10_218:;
	return median->value;
}
signed int is_active_obj_exists() {
	signed int i;
	i = 1;
	Node_11_230:;
	if ((i >= 4)) goto Node_11_246;
	__CPROVER_bool tmp_if_expr;
	if (!(((signed int)(task_state[(signed long int)(i)]) == 2))) goto Node_11_235;
	tmp_if_expr = (1 != 0);
	goto Node_11_236;
	Node_11_235:;
	tmp_if_expr = (((signed int)(task_state[(signed long int)(i)]) == 1) ? 1 : 0 != 0);
	Node_11_236:;
	if (!tmp_if_expr) goto Node_11_242;
	return 1;
	Node_11_242:;
	i = (i + 1);
	goto Node_11_230;
	Node_11_246:;
	i = 1;
	Node_11_249:;
	if ((i >= 4)) goto Node_11_257;
	if ((alarm_state[(signed long int)(i)] == 0)) goto Node_11_254;
	return 1;
	Node_11_254:;
	i = (i + 1);
	goto Node_11_249;
	Node_11_257:;
	return 0;
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
	if (!((!(((signed int)(resid) >= 0)) || ((signed int)(resid) >= 3)))) goto Node_14_285;
	goto Node_14_318;
	Node_14_285:;
__iv__current_func_call = 18;	return_value_is_alloc_0 = is_alloc(resid);
	if ((return_value_is_alloc_0 == (signed int)(current_tid))) goto Node_14_289;
	goto Node_14_318;
	Node_14_289:;
	if ((Resource_Table[(signed long int)(resid)].c_prio >= (unsigned int)(task_static_info[(signed long int)(current_tid)].prio))) goto Node_14_292;
	goto Node_14_318;
	Node_14_292:;
	Resource_Table[(signed long int)(resid)].alloc = (unsigned char)(0);
	if (((unsigned int)(task_static_info[(signed long int)(current_tid)].prio) >= Resource_Table[(signed long int)(resid)].c_prio)) goto Node_14_311;
	current_prio = task_static_info[(signed long int)(current_tid)].prio;
	i = (unsigned char)(0);
	Node_14_296:;
	if (((signed int)(i) >= 3)) goto Node_14_310;
	signed int return_value_is_alloc;
__iv__current_func_call = 19;	return_value_is_alloc = is_alloc(i);
	if (!((return_value_is_alloc == (signed int)(current_tid)))) goto Node_14_305;
	if (((unsigned int)(current_prio) >= Resource_Table[(signed long int)(resid)].c_prio)) goto Node_14_304;
	current_prio = (unsigned char)(Resource_Table[(signed long int)(i)].c_prio);
	Node_14_304:;
	Node_14_305:;
	i = (unsigned char)(((signed int)(i) + 1));
	goto Node_14_296;
	Node_14_310:;
	Node_14_311:;
	task_dyn_info[(signed long int)(current_tid)].dyn_prio = current_prio;
__iv__current_func_call = 20;	reschedule((API)(5), current_tid);
	goto Node_14_318;
	Node_14_318:;
	// End of Function
}
signed int is_alloc(unsigned char res) {
	return (signed int)(Resource_Table[(signed long int)(res)].alloc);
}
void check_property() {
	(void)sizeof(signed int)  ;
	assert((acq_size == 0));
	// End of Function
}
void app() {
	signed int count;
	count = 0;
	current_pc[1] = 1;
	current_pc[2] = 1;
	signed int return_value_is_active_obj_exists;
	Node_17_334:;
__iv__current_func_call = 23;	return_value_is_active_obj_exists = is_active_obj_exists();
	if ((return_value_is_active_obj_exists == 0)) goto Node_17_355;
	if (!((os_on == ON))) goto Node_17_355;
	if ((count >= 600)) goto Node_17_355;
	if (!(((signed int)(current_tid) == 1))) goto Node_17_347;
__iv__current_func_call = 24;	Func_AcquisitionTask();
	goto Node_17_350;
	Node_17_347:;
	if (!(((signed int)(current_tid) == 2))) goto Node_17_349;
__iv__current_func_call = 25;	Func_ControlTask();
	Node_17_349:;
	Node_17_350:;
__iv__current_func_call = 26;	postjob();
__iv__current_func_call = 27;	check_property();
	count = (count + 1);
	if ((1 != 0)) goto Node_17_334;
	Node_17_355:;
	// End of Function
}
signed int WaitEvent_Common(unsigned char eventid) {
	goto Node_18_361;
	Node_18_361:;
	// End of Function
}
signed int WaitEvent(unsigned char eventid) {
__iv__current_func_call = 29;	WaitEvent_Common(eventid);
	// End of Function
}
signed int TerminateTask() {
__iv__current_func_call = 31;	TerminateTask_Common();
	// End of Function
}
void StartOS(unsigned char app_mode) {
	if (!((os_on == OFF))) goto Node_21_375;
	os_on = ON;
__iv__current_func_call = 33;	initialize();
__iv__current_func_call = 34;	startup_process();
__iv__current_func_call = 35;	app();
	Node_21_375:;
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
__iv__current_func_call = 38;	SetEvent_Common(reftask, eventid);
	// End of Function
}
signed int ReleaseResource(unsigned char resid) {
__iv__current_func_call = 40;	ReleaseResource_Common(resid);
	// End of Function
}
signed int GetResource_Common(unsigned char resid) {
	signed int return_value_is_alloc;
	__CPROVER_bool tmp_if_expr;
	if (!((!(((signed int)(resid) >= 0)) || ((signed int)(resid) >= 3)))) goto Node_27_396;
	goto Node_27_411;
	Node_27_396:;
__iv__current_func_call = 42;	return_value_is_alloc = is_alloc(resid);
	if (!((return_value_is_alloc >= 1))) goto Node_27_400;
	tmp_if_expr = (1 != 0);
	goto Node_27_401;
	Node_27_400:;
	tmp_if_expr = (((unsigned int)(task_static_info[(signed long int)(current_tid)].prio) > Resource_Table[(signed long int)(resid)].c_prio) ? 1 : 0 != 0);
	Node_27_401:;
	if (!tmp_if_expr) goto Node_27_405;
	goto Node_27_411;
	Node_27_405:;
	Resource_Table[(signed long int)(resid)].alloc = current_tid;
	if (((unsigned int)(task_dyn_info[(signed long int)(current_tid)].dyn_prio) >= Resource_Table[(signed long int)(resid)].c_prio)) goto Node_27_408;
	task_dyn_info[(signed long int)(current_tid)].dyn_prio = (unsigned char)(Resource_Table[(signed long int)(resid)].c_prio);
	Node_27_408:;
	Node_27_411:;
	// End of Function
}
signed int GetResource(unsigned char resid) {
__iv__current_func_call = 44;	GetResource_Common(resid);
	// End of Function
}
void Func_AcquisitionTask() {
	if ((current_pc[1] == 1)) goto Node_29_425;
	if ((current_pc[1] == 2)) goto Node_29_426;
	if ((current_pc[1] == 3)) goto Node_29_427;
	if ((current_pc[1] == 4)) goto Node_29_428;
	goto Node_29_429;
	Node_29_425:;
	goto Node_29_429;
	Node_29_426:;
	goto Node_29_453;
	Node_29_427:;
	goto Node_29_458;
	Node_29_428:;
	goto Node_29_462;
	Node_29_429:;
	if (((signed int)(tracking_enabled) == 0)) goto Node_29_441;
	signed int return_value_send_nxtcam_command;
__iv__current_func_call = 46;	return_value_send_nxtcam_command = send_nxtcam_command((U8)(2), (U8)(69));
	tracking_enabled = (S8)(return_value_send_nxtcam_command);
	goto Node_29_458;
	Node_29_441:;
__iv__current_func_call = 47;	request((U8)(2));
__iv__current_func_call = 48;	rectindex = getbiggestrect((U8)(0), -1);
	if (!((rectindex >= 0))) goto Node_29_458;
__iv__current_func_call = 49;	area = getArea((U8)(rectindex));
__iv__current_func_call = 50;	area = median_filter(area);
__iv__current_func_call = 51;	acq_size = fisqrt(area);
__iv__current_func_call = 52;	GetResource((unsigned char)(1));
	current_pc[1] = 2;
	goto Node_29_464;
	Node_29_453:;
__iv__current_func_call = 53;	ReleaseResource((unsigned char)(1));
	current_pc[1] = 3;
	goto Node_29_464;
	Node_29_458:;
__iv__current_func_call = 54;	TerminateTask();
	current_pc[1] = 4;
	goto Node_29_464;
	Node_29_462:;
	current_pc[1] = 1;
	Node_29_464:;
	// End of Function
}
signed int ClearEvent_Common(unsigned char eventid) {
	// End of Function
}
void ALARM_handler(signed int aid) {
	if (!((alarm_state[(signed long int)(aid)] == 1))) goto Node_31_475;
	alarm_info[(signed long int)(aid)].next_alarm_tick = (alarm_info[(signed long int)(aid)].next_alarm_tick - 1u);
	if (!((alarm_info[(signed long int)(aid)].next_alarm_tick == 0u))) goto Node_31_474;
	alarm_info[(signed long int)(aid)].next_alarm_tick = alarm_info[(signed long int)(aid)].cycle;
	alarm_state[(signed long int)(aid)] = 2;
	Node_31_474:;
	Node_31_475:;
	if (!((alarm_state[(signed long int)(aid)] == 2))) goto Node_31_489;
	if (!(((signed int)(alarm_info[(signed long int)(aid)].api) == 0))) goto Node_31_480;
__iv__current_func_call = 56;	ActivateTask_Common(alarm_info[(signed long int)(aid)].param1);
	goto Node_31_483;
	Node_31_480:;
	if (!(((signed int)(alarm_info[(signed long int)(aid)].api) == 6))) goto Node_31_482;
__iv__current_func_call = 57;	SetEvent_Common(alarm_info[(signed long int)(aid)].param1, alarm_info[(signed long int)(aid)].param2);
	Node_31_482:;
	Node_31_483:;
	if (!((alarm_info[(signed long int)(aid)].cycle >= 1u))) goto Node_31_487;
	alarm_state[(signed long int)(aid)] = 1;
	goto Node_31_488;
	Node_31_487:;
	alarm_state[(signed long int)(aid)] = 0;
	Node_31_488:;
	Node_31_489:;
	// End of Function
}
void Func_ControlTask() {
	if ((current_pc[2] == 1)) goto Node_32_497;
	if ((current_pc[2] == 2)) goto Node_32_498;
	if ((current_pc[2] == 3)) goto Node_32_499;
	if ((current_pc[2] == 4)) goto Node_32_500;
	goto Node_32_501;
	Node_32_497:;
	goto Node_32_501;
	Node_32_498:;
	goto Node_32_505;
	Node_32_499:;
	goto Node_32_510;
	Node_32_500:;
	goto Node_32_514;
	Node_32_501:;
__iv__current_func_call = 58;	GetResource((unsigned char)(1));
	current_pc[2] = 2;
	goto Node_32_516;
	Node_32_505:;
__iv__current_func_call = 59;	ReleaseResource((unsigned char)(1));
	current_pc[2] = 3;
	goto Node_32_516;
	Node_32_510:;
__iv__current_func_call = 60;	TerminateTask();
	current_pc[2] = 4;
	goto Node_32_516;
	Node_32_514:;
	current_pc[2] = 1;
	Node_32_516:;
	// End of Function
}
signed int SetEvent_Common(unsigned char reftask, unsigned char eventid) {
	if (!((!(((signed int)(reftask) >= 1)) || ((signed int)(reftask) >= 5)))) goto Node_33_521;
	goto Node_33_536;
	Node_33_521:;
	if (!(((signed int)(task_static_info[(signed long int)(reftask)].extended) == 0))) goto Node_33_524;
	goto Node_33_536;
	Node_33_524:;
	if (((signed int)(task_state[(signed long int)(reftask)]) == 0)) goto Node_33_536;
	if (((signed int)(Event_Table[(signed long int)(eventid)].task_alloc[(signed long int)(reftask)]) == 1)) goto Node_33_535;
	Event_Table[(signed long int)(eventid)].task_alloc[(signed long int)(reftask)] = (Evt_State)(1);
	if (!(((signed int)(task_state[(signed long int)(reftask)]) == 3))) goto Node_33_533;
__iv__current_func_call = 61;	push_task_into_readyQ(reftask, task_static_info[(signed long int)(reftask)].prio, current_pc[(signed long int)(reftask)], (push_type)(2));
	Node_33_533:;
__iv__current_func_call = 62;	reschedule((API)(6), current_tid);
	Node_33_535:;
	Node_33_536:;
	// End of Function
}
signed int Schedule_Common() {
__iv__current_func_call = 64;	reschedule((API)(3), current_tid);
	// End of Function
}
signed int ChainTask_Common(unsigned char reftask) {
	goto Node_35_546;
	Node_35_546:;
	// End of Function
}
signed int ActivateTask(unsigned char reftask) {
__iv__current_func_call = 67;	ActivateTask_Common(reftask);
	// End of Function
}
signed int ClearEvent(unsigned char eventid) {
	// End of Function
}
void startup_process() {
	unsigned int i;
	i = 0u;
	Node_38_558:;
	if ((i >= 4u)) goto Node_38_567;
	if (((signed int)(task_static_info[(signed long int)(i)].autostart) == 0)) goto Node_38_564;
	task_dyn_info[(signed long int)(i)].act_cnt = (unsigned char)(((signed int)(task_dyn_info[(signed long int)(i)].act_cnt) + 1));
	current_prio = task_static_info[(signed long int)(i)].prio;
__iv__current_func_call = 70;	push_task_into_readyQ((unsigned char)(i), current_prio, 0, (push_type)(0));
	task_state[(signed long int)(i)] = (unsigned char)(1);
	Node_38_564:;
	i = (i + 1u);
	goto Node_38_558;
	Node_38_567:;
	if ((wholesize == 0)) goto Node_38_571;
__iv__current_func_call = 71;	get_task_from_readyQ();
	task_state[(signed long int)(current_tid)] = (unsigned char)(2);
	Node_38_571:;
	// End of Function
}
signed int Schedule() {
__iv__current_func_call = 72;	Schedule_Common();
	// End of Function
}
signed int TerminateTask_Common() {
	if (!(((signed int)(task_dyn_info[(signed long int)(current_tid)].act_cnt) >= 1))) goto Node_41_647;
	task_dyn_info[(signed long int)(current_tid)].act_cnt = (unsigned char)(((signed int)(task_dyn_info[(signed long int)(current_tid)].act_cnt) - 1));
	Node_41_647:;
	if (!(((signed int)(task_dyn_info[(signed long int)(current_tid)].act_cnt) >= 1))) goto Node_41_651;
	task_state[(signed long int)(current_tid)] = (unsigned char)(1);
	goto Node_41_652;
	Node_41_651:;
	task_state[(signed long int)(current_tid)] = (unsigned char)(0);
	Node_41_652:;
__iv__current_func_call = 74;	reschedule((API)(1), current_tid);
	// End of Function
}
signed int ChainTask(unsigned char reftask) {
__iv__current_func_call = 76;	ChainTask_Common(reftask);
	// End of Function
}
signed int ActivateTask_Common(unsigned char reftask) {
	if (!((!(((signed int)(reftask) >= 1)) || ((signed int)(reftask) >= 5)))) goto Node_43_662;
	goto Node_43_679;
	Node_43_662:;
	if (((signed int)(task_dyn_info[(signed long int)(reftask)].act_cnt) >= (signed int)(task_static_info[(signed long int)(reftask)].max_act_cnt))) goto Node_43_677;
	if (!(((signed int)(task_state[(signed long int)(reftask)]) == 0))) goto Node_43_673;
	signed int i;
	i = 0;
	Node_43_667:;
	if ((i >= 3)) goto Node_43_671;
	Event_Table[(signed long int)(i)].task_alloc[(signed long int)(reftask)] = (Evt_State)(0);
	i = (i + 1);
	goto Node_43_667;
	Node_43_671:;
	Node_43_673:;
	task_dyn_info[(signed long int)(reftask)].act_cnt = (unsigned char)(((signed int)(task_dyn_info[(signed long int)(reftask)].act_cnt) + 1));
__iv__current_func_call = 78;	push_task_into_readyQ(reftask, task_static_info[(signed long int)(reftask)].prio, 0, (push_type)(0));
__iv__current_func_call = 79;	reschedule((API)(0), current_tid);
	Node_43_677:;
	Node_43_679:;
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
void update_prop_automata() {
	// End of Function
}
signed int getX(U8 getX__rectindex) {
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
signed int directionPIDController(signed int d) {
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
__iv__current_func_call = 87;	GetResource((unsigned char)(1));
__iv__current_func_call = 88;	ReleaseResource((unsigned char)(1));
	// End of Function
}
void get_task_from_readyQ() {
	if (!((wholesize == 0))) goto Node_61_746;
	current_tid = (unsigned char)(0);
	current_prio = (unsigned char)(0);
	goto Node_61_762;
	Node_61_746:;
	current_tid = readyQ[(signed long int)(max_prio)][(signed long int)(front[(signed long int)(max_prio)])].tid;
	current_prio = max_prio;
	readyQ[(signed long int)(max_prio)][(signed long int)(front[(signed long int)(max_prio)])].tid = (unsigned char)(0);
	front[(signed long int)(max_prio)] = ((front[(signed long int)(max_prio)] + 1) % 4);
	size[(signed long int)(current_prio)] = (size[(signed long int)(current_prio)] - 1);
	wholesize = (wholesize - 1);
	max_prio = current_prio;
	Node_61_754:;
	if (!((size[(signed long int)(max_prio)] == 0))) goto Node_61_760;
	if (((signed int)(max_prio) == 0)) goto Node_61_760;
	max_prio = (unsigned char)(((signed int)(max_prio) - 1));
	goto Node_61_754;
	Node_61_760:;
	task_state[(signed long int)(current_tid)] = (unsigned char)(2);
	Node_61_762:;
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
	if ((size[(signed long int)(p)] == 3)) goto Node_69_826;
	if (!(((signed int)(pushkind) == 1))) goto Node_69_816;
	task_state[(signed long int)(t)] = (unsigned char)(1);
	front[(signed long int)(p)] = (((4 + front[(signed long int)(p)]) - 1) % 4);
	k = (unsigned char)(front[(signed long int)(p)]);
	readyQ[(signed long int)(p)][(signed long int)(k)].tid = t;
	goto Node_69_820;
	Node_69_816:;
	task_state[(signed long int)(t)] = (unsigned char)(1);
	k = (unsigned char)(rear[(signed long int)(p)]);
	readyQ[(signed long int)(p)][(signed long int)(k)].tid = t;
	rear[(signed long int)(p)] = (((4 + (signed int)(k)) + 1) % 4);
	Node_69_820:;
	size[(signed long int)(p)] = (size[(signed long int)(p)] + 1);
	wholesize = (wholesize + 1);
	if (((signed int)(max_prio) >= (signed int)(p))) goto Node_69_825;
	max_prio = p;
	Node_69_825:;
	Node_69_826:;
	// End of Function
}
signed int reschedule(API reschedule__api, unsigned char tid) {
	if (!(((((signed int)(reschedule__api) == 1) || ((signed int)(reschedule__api) == 2)) || ((signed int)(reschedule__api) == 7)))) goto Node_70_832;
__iv__current_func_call = 90;	get_task_from_readyQ();
	goto Node_70_841;
	Node_70_832:;
	if (!(((signed int)(task_static_info[(signed long int)(tid)].preemptable) == 0) ? !(((signed int)(reschedule__api) == 3)) ? TRUE : FALSE : FALSE)) goto Node_70_835;
	goto Node_70_841;
	Node_70_835:;
	if (((signed int)(task_dyn_info[(signed long int)(tid)].dyn_prio) >= (signed int)(max_prio))) goto Node_70_838;
__iv__current_func_call = 91;	push_task_into_readyQ(tid, task_dyn_info[(signed long int)(tid)].dyn_prio, current_pc[(signed long int)(tid)], (push_type)(1));
__iv__current_func_call = 92;	get_task_from_readyQ();
	Node_70_838:;
	Node_70_841:;
	// End of Function
}
signed int speedPIDController(signed int d) {
	// End of Function
}
