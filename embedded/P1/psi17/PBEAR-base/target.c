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
	Node_3_42:;
	if (((unsigned int)(i) >= nbytes)) goto Node_3_52;
	unsigned char return_value___VERIFIER_nondet_unsigned_char_0;
	signed int return_value_nondet_unsigned_char_0;
	return_value_nondet_unsigned_char_0 = __VERIFIER_nondet_signed_int();
	__CPROVER_printf("__iv__test_case:%d", return_value_nondet_unsigned_char_0);
	return_value___VERIFIER_nondet_unsigned_char_0 = (unsigned char)(return_value_nondet_unsigned_char_0);
	i2c_start_transaction__data[(signed long int)(i)] = return_value___VERIFIER_nondet_unsigned_char_0;
	i = (i + 1);
	goto Node_3_42;
	Node_3_52:;
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
signed int ReleaseResource_Common(unsigned char resid) {
	unsigned char i;
	signed int return_value_is_alloc_0;
	if (!((!(((signed int)(resid) >= 0)) || ((signed int)(resid) >= 3)))) goto Node_6_110;
	goto Node_6_143;
	Node_6_110:;
	return_value_is_alloc_0 = is_alloc(resid);
	if ((return_value_is_alloc_0 == (signed int)(current_tid))) goto Node_6_114;
	goto Node_6_143;
	Node_6_114:;
	if ((Resource_Table[(signed long int)(resid)].c_prio >= (unsigned int)(task_static_info[(signed long int)(current_tid)].prio))) goto Node_6_117;
	goto Node_6_143;
	Node_6_117:;
	Resource_Table[(signed long int)(resid)].alloc = (unsigned char)(0);
	if (((unsigned int)(task_static_info[(signed long int)(current_tid)].prio) >= Resource_Table[(signed long int)(resid)].c_prio)) goto Node_6_136;
	current_prio = task_static_info[(signed long int)(current_tid)].prio;
	i = (unsigned char)(0);
	Node_6_121:;
	if (((signed int)(i) >= 3)) goto Node_6_135;
	signed int return_value_is_alloc;
	return_value_is_alloc = is_alloc(i);
	if (!((return_value_is_alloc == (signed int)(current_tid)))) goto Node_6_130;
	if (((unsigned int)(current_prio) >= Resource_Table[(signed long int)(resid)].c_prio)) goto Node_6_129;
	current_prio = (unsigned char)(Resource_Table[(signed long int)(i)].c_prio);
	Node_6_129:;
	Node_6_130:;
	i = (unsigned char)(((signed int)(i) + 1));
	goto Node_6_121;
	Node_6_135:;
	Node_6_136:;
	task_dyn_info[(signed long int)(current_tid)].dyn_prio = current_prio;
	reschedule((API)(5), current_tid);
	goto Node_6_143;
	Node_6_143:;
	// End of Function
}
signed int postjob() {
	signed int return_value_is_active_alarm_exists;
	return_value_is_active_alarm_exists = is_active_alarm_exists();
	if ((return_value_is_active_alarm_exists == 0)) goto Node_7_164;
	signed int aid;
	aid = 1;
	Node_7_156:;
	if ((aid >= 3)) goto Node_7_162;
	if ((alarm_state[(signed long int)(aid)] == 0)) goto Node_7_159;
	ALARM_handler(aid);
	Node_7_159:;
	aid = (aid + 1);
	goto Node_7_156;
	Node_7_162:;
	Node_7_164:;
	// End of Function
}
signed int is_active_alarm_exists() {
	signed int i;
	i = 1;
	Node_8_172:;
	if ((i >= 4)) goto Node_8_180;
	if ((alarm_state[(signed long int)(i)] == 0)) goto Node_8_177;
	return 1;
	Node_8_177:;
	i = (i + 1);
	goto Node_8_172;
	Node_8_180:;
	return 0;
}
data_t median_filter(data_t datum) {
	struct pair *successor;
	struct pair *scan;
	struct pair *scanold;
	struct pair *median;
	unsigned int i;
	datpoint = (datpoint + 1l);
	if (!(((datpoint - buffer) >= 15l))) goto Node_9_193;
	datpoint = buffer;
	Node_9_193:;
	datpoint->value = datum;
	successor = datpoint->point;
	median = &big;
	scan = &big;
	if (!((scan->point == datpoint))) goto Node_9_200;
	scan->point = successor;
	Node_9_200:;
	scanold = scan;
	scan = scan->point;
	i = 0u;
	Node_9_205:;
	if ((i >= 15u)) goto Node_9_235;
	if (!((scan->point == datpoint))) goto Node_9_208;
	scan->point = successor;
	Node_9_208:;
	if ((scan->value >= datum)) goto Node_9_213;
	datpoint->point = scanold->point;
	scanold->point = datpoint;
	datum = 0;
	Node_9_213:;
	median = median->point;
	if ((scan == &small)) goto Node_9_235;
	scanold = scan;
	scan = scan->point;
	if (!((scan->point == datpoint))) goto Node_9_222;
	scan->point = successor;
	Node_9_222:;
	if ((scan->value >= datum)) goto Node_9_227;
	datpoint->point = scanold->point;
	scanold->point = datpoint;
	datum = 0;
	Node_9_227:;
	if ((scan == &small)) goto Node_9_235;
	scanold = scan;
	scan = scan->point;
	i = (i + 1u);
	goto Node_9_205;
	Node_9_235:;
	return median->value;
}
signed int is_active_obj_exists() {
	signed int i;
	i = 1;
	Node_10_247:;
	if ((i >= 4)) goto Node_10_263;
	__CPROVER_bool tmp_if_expr;
	if (!(((signed int)(task_state[(signed long int)(i)]) == 2))) goto Node_10_252;
	tmp_if_expr = (1 != 0);
	goto Node_10_253;
	Node_10_252:;
	tmp_if_expr = (((signed int)(task_state[(signed long int)(i)]) == 1) ? 1 : 0 != 0);
	Node_10_253:;
	if (!tmp_if_expr) goto Node_10_259;
	return 1;
	Node_10_259:;
	i = (i + 1);
	goto Node_10_247;
	Node_10_263:;
	i = 1;
	Node_10_266:;
	if ((i >= 4)) goto Node_10_274;
	if ((alarm_state[(signed long int)(i)] == 0)) goto Node_10_271;
	return 1;
	Node_10_271:;
	i = (i + 1);
	goto Node_10_266;
	Node_10_274:;
	return 0;
}
signed int getArea(U8 getArea__rectindex) {
	signed int return_value_getWidth;
	return_value_getWidth = getWidth(getArea__rectindex);
	signed int return_value_getHeight;
	return_value_getHeight = getHeight(getArea__rectindex);
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
signed int GetResource_Common(unsigned char resid) {
	signed int return_value_is_alloc;
	__CPROVER_bool tmp_if_expr;
	if (!((!(((signed int)(resid) >= 0)) || ((signed int)(resid) >= 3)))) goto Node_15_326;
	goto Node_15_341;
	Node_15_326:;
	return_value_is_alloc = is_alloc(resid);
	if (!((return_value_is_alloc >= 1))) goto Node_15_330;
	tmp_if_expr = (1 != 0);
	goto Node_15_331;
	Node_15_330:;
	tmp_if_expr = (((unsigned int)(task_static_info[(signed long int)(current_tid)].prio) > Resource_Table[(signed long int)(resid)].c_prio) ? 1 : 0 != 0);
	Node_15_331:;
	if (!tmp_if_expr) goto Node_15_335;
	goto Node_15_341;
	Node_15_335:;
	Resource_Table[(signed long int)(resid)].alloc = current_tid;
	if (((unsigned int)(task_dyn_info[(signed long int)(current_tid)].dyn_prio) >= Resource_Table[(signed long int)(resid)].c_prio)) goto Node_15_338;
	task_dyn_info[(signed long int)(current_tid)].dyn_prio = (unsigned char)(Resource_Table[(signed long int)(resid)].c_prio);
	Node_15_338:;
	Node_15_341:;
	// End of Function
}
void check_property() {
	(void)sizeof(signed int)  ;
	if (!(!((((acq_size < 50) && (acq_size > 0)) && (x == 83))))) __CPROVER_printf("violated property: Node_16_347");
	assert(!((((acq_size < 50) && (acq_size > 0)) && (x == 83))));
	// End of Function
}
void app() {
	signed int count;
	count = 0;
	current_pc[1] = 1;
	current_pc[2] = 1;
	signed int return_value_is_active_obj_exists;
	Node_17_354:;
	return_value_is_active_obj_exists = is_active_obj_exists();
	if ((return_value_is_active_obj_exists == 0)) goto Node_17_375;
	if (!((os_on == ON))) goto Node_17_375;
	if ((count >= 600)) goto Node_17_375;
	if (!(((signed int)(current_tid) == 1))) goto Node_17_367;
	Func_AcquisitionTask();
	goto Node_17_370;
	Node_17_367:;
	if (!(((signed int)(current_tid) == 2))) goto Node_17_369;
	Func_ControlTask();
	Node_17_369:;
	Node_17_370:;
	postjob();
	check_property();
	count = (count + 1);
	if ((1 != 0)) goto Node_17_354;
	Node_17_375:;
	// End of Function
}
void startup_process() {
	unsigned int i;
	i = 0u;
	Node_18_382:;
	if ((i >= 4u)) goto Node_18_391;
	if (((signed int)(task_static_info[(signed long int)(i)].autostart) == 0)) goto Node_18_388;
	task_dyn_info[(signed long int)(i)].act_cnt = (unsigned char)(((signed int)(task_dyn_info[(signed long int)(i)].act_cnt) + 1));
	current_prio = task_static_info[(signed long int)(i)].prio;
	push_task_into_readyQ((unsigned char)(i), current_prio, 0, (push_type)(0));
	task_state[(signed long int)(i)] = (unsigned char)(1);
	Node_18_388:;
	i = (i + 1u);
	goto Node_18_382;
	Node_18_391:;
	if ((wholesize == 0)) goto Node_18_395;
	get_task_from_readyQ();
	task_state[(signed long int)(current_tid)] = (unsigned char)(2);
	Node_18_395:;
	// End of Function
}
signed int WaitEvent_Common(unsigned char eventid) {
	goto Node_19_400;
	Node_19_400:;
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
	if (!((os_on == OFF))) goto Node_22_414;
	os_on = ON;
	initialize();
	startup_process();
	app();
	Node_22_414:;
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
signed int ReleaseResource(unsigned char resid) {
	ReleaseResource_Common(resid);
	// End of Function
}
signed int GetResource(unsigned char resid) {
	GetResource_Common(resid);
	// End of Function
}
void Func_AcquisitionTask() {
	if ((current_pc[1] == 1)) goto Node_29_439;
	if ((current_pc[1] == 2)) goto Node_29_440;
	if ((current_pc[1] == 3)) goto Node_29_441;
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
	if (((signed int)(tracking_enabled) == 0)) goto Node_29_455;
	signed int return_value_send_nxtcam_command;
	return_value_send_nxtcam_command = send_nxtcam_command((U8)(2), (U8)(69));
	tracking_enabled = (S8)(return_value_send_nxtcam_command);
	goto Node_29_473;
	Node_29_455:;
	request((U8)(2));
	rectindex = __iv__getbiggestrect_stub((U8)(0), -1);
	if (!((rectindex >= 0))) goto Node_29_473;
	area = getArea((U8)(rectindex));
	area = median_filter(area);
	acq_size = fisqrt(area);
	x = getX((U8)(rectindex));
	GetResource((unsigned char)(1));
	current_pc[1] = 2;
	goto Node_29_479;
	Node_29_468:;
	ReleaseResource((unsigned char)(1));
	current_pc[1] = 3;
	goto Node_29_479;
	Node_29_473:;
	TerminateTask();
	current_pc[1] = 4;
	goto Node_29_479;
	Node_29_477:;
	current_pc[1] = 1;
	Node_29_479:;
	// End of Function
}
signed int ClearEvent_Common(unsigned char eventid) {
	// End of Function
}
void ALARM_handler(signed int aid) {
	if (!((alarm_state[(signed long int)(aid)] == 1))) goto Node_31_490;
	alarm_info[(signed long int)(aid)].next_alarm_tick = (alarm_info[(signed long int)(aid)].next_alarm_tick - 1u);
	if (!((alarm_info[(signed long int)(aid)].next_alarm_tick == 0u))) goto Node_31_489;
	alarm_info[(signed long int)(aid)].next_alarm_tick = alarm_info[(signed long int)(aid)].cycle;
	alarm_state[(signed long int)(aid)] = 2;
	Node_31_489:;
	Node_31_490:;
	if (!((alarm_state[(signed long int)(aid)] == 2))) goto Node_31_504;
	if (!(((signed int)(alarm_info[(signed long int)(aid)].api) == 0))) goto Node_31_495;
	ActivateTask_Common(alarm_info[(signed long int)(aid)].param1);
	goto Node_31_498;
	Node_31_495:;
	if (!(((signed int)(alarm_info[(signed long int)(aid)].api) == 6))) goto Node_31_497;
	SetEvent_Common(alarm_info[(signed long int)(aid)].param1, alarm_info[(signed long int)(aid)].param2);
	Node_31_497:;
	Node_31_498:;
	if (!((alarm_info[(signed long int)(aid)].cycle >= 1u))) goto Node_31_502;
	alarm_state[(signed long int)(aid)] = 1;
	goto Node_31_503;
	Node_31_502:;
	alarm_state[(signed long int)(aid)] = 0;
	Node_31_503:;
	Node_31_504:;
	// End of Function
}
void Func_ControlTask() {
	if ((current_pc[2] == 1)) goto Node_32_512;
	if ((current_pc[2] == 2)) goto Node_32_513;
	if ((current_pc[2] == 3)) goto Node_32_514;
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
	GetResource((unsigned char)(1));
	current_pc[2] = 2;
	goto Node_32_531;
	Node_32_520:;
	ReleaseResource((unsigned char)(1));
	current_pc[2] = 3;
	goto Node_32_531;
	Node_32_525:;
	TerminateTask();
	current_pc[2] = 4;
	goto Node_32_531;
	Node_32_529:;
	current_pc[2] = 1;
	Node_32_531:;
	// End of Function
}
signed int SetEvent_Common(unsigned char reftask, unsigned char eventid) {
	if (!((!(((signed int)(reftask) >= 1)) || ((signed int)(reftask) >= 5)))) goto Node_33_536;
	goto Node_33_551;
	Node_33_536:;
	if (!(((signed int)(task_static_info[(signed long int)(reftask)].extended) == 0))) goto Node_33_539;
	goto Node_33_551;
	Node_33_539:;
	if (((signed int)(task_state[(signed long int)(reftask)]) == 0)) goto Node_33_551;
	if (((signed int)(Event_Table[(signed long int)(eventid)].task_alloc[(signed long int)(reftask)]) == 1)) goto Node_33_550;
	Event_Table[(signed long int)(eventid)].task_alloc[(signed long int)(reftask)] = (Evt_State)(1);
	if (!(((signed int)(task_state[(signed long int)(reftask)]) == 3))) goto Node_33_548;
	push_task_into_readyQ(reftask, task_static_info[(signed long int)(reftask)].prio, current_pc[(signed long int)(reftask)], (push_type)(2));
	Node_33_548:;
	reschedule((API)(6), current_tid);
	Node_33_550:;
	Node_33_551:;
	// End of Function
}
signed int Schedule_Common() {
	reschedule((API)(3), current_tid);
	// End of Function
}
signed int ChainTask_Common(unsigned char reftask) {
	goto Node_35_561;
	Node_35_561:;
	// End of Function
}
signed int ActivateTask(unsigned char reftask) {
	ActivateTask_Common(reftask);
	// End of Function
}
signed int ClearEvent(unsigned char eventid) {
	// End of Function
}
signed int is_alloc(unsigned char res) {
	return (signed int)(Resource_Table[(signed long int)(res)].alloc);
}
signed int Schedule() {
	Schedule_Common();
	// End of Function
}
signed int TerminateTask_Common() {
	if (!(((signed int)(task_dyn_info[(signed long int)(current_tid)].act_cnt) >= 1))) goto Node_41_646;
	task_dyn_info[(signed long int)(current_tid)].act_cnt = (unsigned char)(((signed int)(task_dyn_info[(signed long int)(current_tid)].act_cnt) - 1));
	Node_41_646:;
	if (!(((signed int)(task_dyn_info[(signed long int)(current_tid)].act_cnt) >= 1))) goto Node_41_650;
	task_state[(signed long int)(current_tid)] = (unsigned char)(1);
	goto Node_41_651;
	Node_41_650:;
	task_state[(signed long int)(current_tid)] = (unsigned char)(0);
	Node_41_651:;
	reschedule((API)(1), current_tid);
	// End of Function
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
signed int ChainTask(unsigned char reftask) {
	ChainTask_Common(reftask);
	// End of Function
}
signed int ActivateTask_Common(unsigned char reftask) {
	if (!((!(((signed int)(reftask) >= 1)) || ((signed int)(reftask) >= 5)))) goto Node_44_681;
	goto Node_44_698;
	Node_44_681:;
	if (((signed int)(task_dyn_info[(signed long int)(reftask)].act_cnt) >= (signed int)(task_static_info[(signed long int)(reftask)].max_act_cnt))) goto Node_44_696;
	if (!(((signed int)(task_state[(signed long int)(reftask)]) == 0))) goto Node_44_692;
	signed int i;
	i = 0;
	Node_44_686:;
	if ((i >= 3)) goto Node_44_690;
	Event_Table[(signed long int)(i)].task_alloc[(signed long int)(reftask)] = (Evt_State)(0);
	i = (i + 1);
	goto Node_44_686;
	Node_44_690:;
	Node_44_692:;
	task_dyn_info[(signed long int)(reftask)].act_cnt = (unsigned char)(((signed int)(task_dyn_info[(signed long int)(reftask)].act_cnt) + 1));
	push_task_into_readyQ(reftask, task_static_info[(signed long int)(reftask)].prio, 0, (push_type)(0));
	reschedule((API)(0), current_tid);
	Node_44_696:;
	Node_44_698:;
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
signed int request(U8 port_id) {
	signed int return_value_i2c_busy;
	return_value_i2c_busy = i2c_busy((signed int)(port_id));
	if (!((return_value_i2c_busy == 0))) goto Node_48_715;
	i2c_start_transaction((signed int)(port_id), 1u, 0x42, 1, nxtcamdata, 41u, 0);
	Node_48_715:;
	// End of Function
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
	GetResource((unsigned char)(1));
	ReleaseResource((unsigned char)(1));
	// End of Function
}
void get_task_from_readyQ() {
	if (!((wholesize == 0))) goto Node_61_753;
	current_tid = (unsigned char)(0);
	current_prio = (unsigned char)(0);
	goto Node_61_769;
	Node_61_753:;
	current_tid = readyQ[(signed long int)(max_prio)][(signed long int)(front[(signed long int)(max_prio)])].tid;
	current_prio = max_prio;
	readyQ[(signed long int)(max_prio)][(signed long int)(front[(signed long int)(max_prio)])].tid = (unsigned char)(0);
	front[(signed long int)(max_prio)] = ((front[(signed long int)(max_prio)] + 1) % 4);
	size[(signed long int)(current_prio)] = (size[(signed long int)(current_prio)] - 1);
	wholesize = (wholesize - 1);
	max_prio = current_prio;
	Node_61_761:;
	if (!((size[(signed long int)(max_prio)] == 0))) goto Node_61_767;
	if (((signed int)(max_prio) == 0)) goto Node_61_767;
	max_prio = (unsigned char)(((signed int)(max_prio) - 1));
	goto Node_61_761;
	Node_61_767:;
	task_state[(signed long int)(current_tid)] = (unsigned char)(2);
	Node_61_769:;
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
	if ((size[(signed long int)(p)] == 3)) goto Node_69_833;
	if (!(((signed int)(pushkind) == 1))) goto Node_69_823;
	task_state[(signed long int)(t)] = (unsigned char)(1);
	front[(signed long int)(p)] = (((4 + front[(signed long int)(p)]) - 1) % 4);
	k = (unsigned char)(front[(signed long int)(p)]);
	readyQ[(signed long int)(p)][(signed long int)(k)].tid = t;
	goto Node_69_827;
	Node_69_823:;
	task_state[(signed long int)(t)] = (unsigned char)(1);
	k = (unsigned char)(rear[(signed long int)(p)]);
	readyQ[(signed long int)(p)][(signed long int)(k)].tid = t;
	rear[(signed long int)(p)] = (((4 + (signed int)(k)) + 1) % 4);
	Node_69_827:;
	size[(signed long int)(p)] = (size[(signed long int)(p)] + 1);
	wholesize = (wholesize + 1);
	if (((signed int)(max_prio) >= (signed int)(p))) goto Node_69_832;
	max_prio = p;
	Node_69_832:;
	Node_69_833:;
	// End of Function
}
signed int reschedule(API reschedule__api, unsigned char tid) {
	if (!(((((signed int)(reschedule__api) == 1) || ((signed int)(reschedule__api) == 2)) || ((signed int)(reschedule__api) == 7)))) goto Node_70_839;
	get_task_from_readyQ();
	goto Node_70_848;
	Node_70_839:;
	if (!(((signed int)(task_static_info[(signed long int)(tid)].preemptable) == 0) ? !(((signed int)(reschedule__api) == 3)) ? TRUE : FALSE : FALSE)) goto Node_70_842;
	goto Node_70_848;
	Node_70_842:;
	if (((signed int)(task_dyn_info[(signed long int)(tid)].dyn_prio) >= (signed int)(max_prio))) goto Node_70_845;
	push_task_into_readyQ(tid, task_dyn_info[(signed long int)(tid)].dyn_prio, current_pc[(signed long int)(tid)], (push_type)(1));
	get_task_from_readyQ();
	Node_70_845:;
	Node_70_848:;
	// End of Function
}
signed int speedPIDController(signed int d) {
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
	__CPROVER_printf("__iv__stub_input:nxtcamdata[23]=%u", nxtcamdata[23]);
	__CPROVER_printf("__iv__stub_input:pcolorid=%u", pcolorid);
	__CPROVER_printf("__iv__stub_input:nxtcamdata[24]=%u", nxtcamdata[24]);
	__CPROVER_printf("__iv__stub_input:pminarea=%d", pminarea);
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
	if(nxtcamdata[4]==nxtcamdata[40]) if(nxtcamdata[34]==nxtcamdata[2]) __iv__return_expr_getbiggestrect = (-1); else __iv__return_expr_getbiggestrect = 6; else if(nxtcamdata[37]==nxtcamdata[34]) __iv__return_expr_getbiggestrect = 6; else if(3==nxtcamdata[39]) __iv__return_expr_getbiggestrect = 5; else if(nxtcamdata[5]==nxtcamdata[37]) __iv__return_expr_getbiggestrect = 5; else if(nxtcamdata[34]<nxtcamdata[0]) if(2==nxtcamdata[2]) __iv__return_expr_getbiggestrect = 3; else if(2>=nxtcamdata[39]) __iv__return_expr_getbiggestrect = 7; else __iv__return_expr_getbiggestrect = 5; else if(2==nxtcamdata[21]) __iv__return_expr_getbiggestrect = (-1); else if(5==nxtcamdata[33]) __iv__return_expr_getbiggestrect = (-1); else if(nxtcamdata[40]==nxtcamdata[14]) __iv__return_expr_getbiggestrect = (-1); else if(1==nxtcamdata[13]) __iv__return_expr_getbiggestrect = 7; else if(5==nxtcamdata[13]) __iv__return_expr_getbiggestrect = 2; else if(1==nxtcamdata[5]) __iv__return_expr_getbiggestrect = 6; else if(nxtcamdata[40]==nxtcamdata[3]) __iv__return_expr_getbiggestrect = nxtcamdata[24]; else if(pminarea==nxtcamdata[4]) __iv__return_expr_getbiggestrect = 7; else if(nxtcamdata[39]==nxtcamdata[31]) __iv__return_expr_getbiggestrect = 1; else if(3==nxtcamdata[40]) __iv__return_expr_getbiggestrect = 2; else if(nxtcamdata[39]==nxtcamdata[21]) __iv__return_expr_getbiggestrect = 2; else if(1==nxtcamdata[1]) __iv__return_expr_getbiggestrect = 4; else if(nxtcamdata[32]==nxtcamdata[24]) __iv__return_expr_getbiggestrect = nxtcamdata[2]; else if(2==nxtcamdata[32]) __iv__return_expr_getbiggestrect = 3; else if(nxtcamdata[34]<pcolorid) __iv__return_expr_getbiggestrect = (-1); else if(nxtcamdata[30]<pcolorid) __iv__return_expr_getbiggestrect = (-1); else if(nxtcamdata[22]<pcolorid) __iv__return_expr_getbiggestrect = (-1); else if(nxtcamdata[21]<pcolorid) __iv__return_expr_getbiggestrect = (-1); else if(3==nxtcamdata[17]) __iv__return_expr_getbiggestrect = pcolorid; else if(pcolorid>=5) __iv__return_expr_getbiggestrect = nxtcamdata[8]; else if(2==nxtcamdata[6]) __iv__return_expr_getbiggestrect = 6; else if(0>=nxtcamdata[0]) __iv__return_expr_getbiggestrect = (-1); else if(nxtcamdata[16]==nxtcamdata[12]) __iv__return_expr_getbiggestrect = 7; else if(nxtcamdata[23]==nxtcamdata[0]) __iv__return_expr_getbiggestrect = 7; else if(nxtcamdata[38]==nxtcamdata[27]) __iv__return_expr_getbiggestrect = 7; else if(nxtcamdata[35]==nxtcamdata[17]) __iv__return_expr_getbiggestrect = 1; else if(2==nxtcamdata[13]) __iv__return_expr_getbiggestrect = nxtcamdata[16]; else if(nxtcamdata[2]==nxtcamdata[19]) __iv__return_expr_getbiggestrect = 6; else if(nxtcamdata[5]==nxtcamdata[3]) __iv__return_expr_getbiggestrect = 3; else if(1==nxtcamdata[8]) __iv__return_expr_getbiggestrect = 3; else if(nxtcamdata[27]==nxtcamdata[0]) if(nxtcamdata[27]<nxtcamdata[26]) __iv__return_expr_getbiggestrect = 0; else __iv__return_expr_getbiggestrect = 1; else if(2==nxtcamdata[37]) __iv__return_expr_getbiggestrect = 1; else if(5==nxtcamdata[36]) __iv__return_expr_getbiggestrect = 1; else if(nxtcamdata[22]==nxtcamdata[19]) __iv__return_expr_getbiggestrect = nxtcamdata[27]; else if(nxtcamdata[8]==nxtcamdata[3]) if(1==nxtcamdata[11]) __iv__return_expr_getbiggestrect = (-1); else __iv__return_expr_getbiggestrect = 4; else if(nxtcamdata[4]==nxtcamdata[11]) __iv__return_expr_getbiggestrect = nxtcamdata[30]; else if(nxtcamdata[9]==nxtcamdata[4]) __iv__return_expr_getbiggestrect = nxtcamdata[26]; else if(nxtcamdata[37]==nxtcamdata[10]) __iv__return_expr_getbiggestrect = (-1); else if(nxtcamdata[37]>=nxtcamdata[6]) if(3==nxtcamdata[9]) __iv__return_expr_getbiggestrect = 1; else if(5==nxtcamdata[29]) __iv__return_expr_getbiggestrect = nxtcamdata[23]; else if(2==nxtcamdata[25]) __iv__return_expr_getbiggestrect = 2; else if(2==nxtcamdata[27]) __iv__return_expr_getbiggestrect = 1; else __iv__return_expr_getbiggestrect = 0; else __iv__return_expr_getbiggestrect = (-1); 
	__CPROVER_assume((-1 <= __iv__return_expr_getbiggestrect && __iv__return_expr_getbiggestrect <= 7));
	__CPROVER_printf("__iv__stub_output:__iv__return_expr_getbiggestrect=%d", __iv__return_expr_getbiggestrect);
	return __iv__return_expr_getbiggestrect;
}
