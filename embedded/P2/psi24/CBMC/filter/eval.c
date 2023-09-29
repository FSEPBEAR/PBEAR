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
enum anonymous { INIT=0, IDLE=1, RUN=2, STOP=3, EMERGENCY=-1 };
struct comedi_t;
enum tag_elev_lamp_type { BUTTON_CALL_UP=0, BUTTON_CALL_DOWN=1, BUTTON_COMMAND=2 };
enum tag_elev_motor_direction { DIRN_DOWN=-1, DIRN_STOP=0, DIRN_UP=1 };
typedef signed long int clock_t;
typedef struct comedi_t comedi_t;
typedef enum anonymous elevState;
typedef enum tag_elev_lamp_type elev_button_type_t;
typedef enum tag_elev_motor_direction elev_motor_direction_t;
void check_property();
clock_t clock();
void comedi_data_read(comedi_t *comedi_data_read__it_g, signed int port, signed int channel, signed int i, signed int j, signed int *data);
void comedi_data_write(comedi_t *comedi_data_write__it_g, signed int port, signed int channel, signed int i, signed int j, signed int mode);
signed int comedi_dio_config(comedi_t *comedi_dio_config__it_g, signed int port, signed int i, signed int mode);
void comedi_dio_read(comedi_t *comedi_dio_read__it_g, signed int port, signed int i, signed int *data);
void comedi_dio_write(comedi_t *comedi_dio_write__it_g, signed int port, signed int i, signed int mode);
comedi_t * comedi_open( char *src);
signed int elev_get_button_signal(elev_button_type_t button, signed int floor);
signed int elev_get_floor_sensor_signal(void);
signed int elev_get_obstruction_signal(void);
signed int elev_get_stop_signal(void);
signed int elev_init(void);
void elev_set_button_lamp(elev_button_type_t button, signed int floor, signed int value);
void elev_set_door_open_lamp(signed int value);
void elev_set_floor_indicator(signed int floor);
void elev_set_motor_direction(elev_motor_direction_t dirn);
void elev_set_stop_lamp(signed int value);
signed int emergencyStopHandler();
signed int floorIsOrdered(signed int floorNum, signed int motorDir);
void flushOrders();
signed int getTimerStatus();
void initStates();
void io_clear_bit(signed int channel);
signed int io_init();
signed int io_read_analog(signed int channel);
signed int io_read_bit(signed int channel);
void io_set_bit(signed int channel);
void io_write_analog(signed int channel, signed int value);
signed int isButtonPressed();
signed int isTimerActive();
void removeFromOrderMatrix(signed int floorNum);
signed int setDirection(signed int currentFloor, signed int lastDirection);
void setOrdersHigh();
void startTimer(double length);
void stateController();
void timerDeactivate();
void update_prop_automata();
struct comedi_t
{
  char stub;
};
static  signed int button_channel_matrix[4l][3l]={ { 0x300 + 17, -1, 0x300 + 21 }, { 0x300 + 16, 0x200 + 0, 0x300 + 20 }, { 0x200 + 1, 0x200 + 2, 0x300 + 19 }, { -1, 0x200 + 3, 0x300 + 18 } };
signed int currentFloorLocation=-1;
elevState currentState=/*enum*/INIT;
signed int dstFloor;
static double duration;
signed long int elev_clock=0l;
signed int elev_floor;
signed int elev_motor;
static comedi_t *it_g=((comedi_t *)NULL);
signed int lastFloorAfterEmergency=-1;
signed int motorDirection=0;
signed int myFloor;
signed int orderMatrix[3l][4l]={ { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 } };
signed int previousMainFloor=-1;
elevState previousState=/*enum*/INIT;
signed int state=0;
clock_t timer=0l;
static signed int timerActive=0;
static clock_t timerStarted;
signed int __VERIFIER_nondet_signed_int(){ signed int __iv_temp; if (-1 == fscanf(__iv__fp, "%d", &__iv_temp)) exit(0); return __iv_temp; }
int main(int argc, char* argv[]) {
	__iv__fp = fopen(argv[1], "r");
	myFloor = __VERIFIER_nondet_signed_int();
	__CPROVER_assume(((0 <= myFloor) && (myFloor <= 3)));
	dstFloor = __VERIFIER_nondet_signed_int();
	__CPROVER_assume(((0 <= dstFloor) && (dstFloor <= 3)));
	__CPROVER_assume((myFloor != dstFloor));
	signed int return_value_elev_init;
	return_value_elev_init = elev_init();
	if ((return_value_elev_init == 0)) goto Node_0_17;
	initStates();
	Node_0_11:;
	if (!((1 != 0))) goto Node_0_16;
	stateController();
	update_prop_automata();
	check_property();
	goto Node_0_11;
	Node_0_16:;
	Node_0_17:;
	// End of Function
}
signed int getTimerStatus() {
	long double deltaTime;
	clock_t return_value_clock;
	return_value_clock = clock();
	deltaTime = ((long double)((return_value_clock - timerStarted)) / 1.0l);
	if (!(((deltaTime >= (long double)(duration)) && !((timerActive == 0))))) goto Node_1_35;
	return 1;
	Node_1_35:;
	return 0;
}
signed int elev_get_stop_signal() {
	signed int return_value_io_read_bit;
	return_value_io_read_bit = io_read_bit((0x300 + 22));
	return return_value_io_read_bit;
}
signed int elev_get_floor_sensor_signal() {
	signed int return_value_isTimerActive;
	return_value_isTimerActive = isTimerActive();
	if ((return_value_isTimerActive == 0)) goto Node_3_86;
	if ((elev_motor == 0)) goto Node_3_85;
	signed int return_value_getTimerStatus;
	return_value_getTimerStatus = getTimerStatus();
	if ((return_value_getTimerStatus == 0)) goto Node_3_76;
	timerDeactivate();
	elev_floor = (elev_floor + elev_motor);
	__CPROVER_assume(((0 <= elev_floor) && (elev_floor < 4)));
	return elev_floor;
	Node_3_76:;
	return -1;
	Node_3_85:;
	Node_3_86:;
	return elev_floor;
}
void stateController() {
	setOrdersHigh();
	currentFloorLocation = elev_get_floor_sensor_signal();
	signed int return_value_isButtonPressed;
	signed int return_value_floorIsOrdered;
	signed int return_value_isTimerActive;
	signed int return_value_elev_get_floor_sensor_signal;
	signed int return_value_isTimerActive_0;
	signed int return_value_getTimerStatus;
	if (!((!((currentFloorLocation == -1)) || !((lastFloorAfterEmergency == -1))))) goto Node_4_158;
	if ((lastFloorAfterEmergency == -1)) goto Node_4_104;
	previousMainFloor = lastFloorAfterEmergency;
	goto Node_4_105;
	Node_4_104:;
	previousMainFloor = currentFloorLocation;
	Node_4_105:;
	elev_set_floor_indicator(previousMainFloor);
	if (((signed int)(previousState) == 0)) goto Node_4_114;
	if (((signed int)(previousState) == 1)) goto Node_4_115;
	if (((signed int)(previousState) == 2)) goto Node_4_122;
	if (((signed int)(previousState) == 3)) goto Node_4_128;
	if (((signed int)(previousState) == -1)) goto Node_4_156;
	goto Node_4_157;
	Node_4_114:;
	goto Node_4_157;
	Node_4_115:;
	return_value_isButtonPressed = isButtonPressed();
	if ((return_value_isButtonPressed == 0)) goto Node_4_120;
	motorDirection = setDirection(previousMainFloor, motorDirection);
	elev_set_motor_direction((elev_motor_direction_t)(motorDirection));
	previousState = (elevState)(2);
	Node_4_120:;
	goto Node_4_157;
	Node_4_122:;
	return_value_floorIsOrdered = floorIsOrdered(previousMainFloor, motorDirection);
	if ((return_value_floorIsOrdered == 0)) goto Node_4_125;
	previousState = (elevState)(3);
	Node_4_125:;
	lastFloorAfterEmergency = -1;
	goto Node_4_157;
	Node_4_128:;
	elev_set_motor_direction((elev_motor_direction_t)(0));
	motorDirection = 0;
	return_value_isTimerActive = isTimerActive();
	if (!((return_value_isTimerActive == 0))) goto Node_4_136;
	return_value_elev_get_floor_sensor_signal = elev_get_floor_sensor_signal();
	if ((return_value_elev_get_floor_sensor_signal == -1)) goto Node_4_135;
	startTimer(3.0);
	Node_4_135:;
	Node_4_136:;
	return_value_isTimerActive_0 = isTimerActive();
	if (!((return_value_isTimerActive_0 == 1))) goto Node_4_149;
	signed int return_value_floorIsOrdered_0;
	return_value_floorIsOrdered_0 = floorIsOrdered(previousMainFloor, motorDirection);
	if ((return_value_floorIsOrdered_0 == 0)) goto Node_4_146;
	startTimer(3.0);
	removeFromOrderMatrix(previousMainFloor);
	Node_4_146:;
	Node_4_149:;
	return_value_getTimerStatus = getTimerStatus();
	if ((return_value_getTimerStatus == 0)) goto Node_4_154;
	previousState = (elevState)(1);
	timerDeactivate();
	Node_4_154:;
	goto Node_4_157;
	Node_4_156:;
	Node_4_157:;
	Node_4_158:;
	signed int return_value_elev_get_stop_signal;
	return_value_elev_get_stop_signal = elev_get_stop_signal();
	if ((return_value_elev_get_stop_signal == 0)) goto Node_4_177;
	__CPROVER_assume((0 != 0));
	signed int return_value_emergencyStopHandler;
	return_value_emergencyStopHandler = emergencyStopHandler();
	if (!((return_value_emergencyStopHandler == -1))) goto Node_4_173;
	previousState = (elevState)(1);
	lastFloorAfterEmergency = previousMainFloor;
	goto Node_4_174;
	Node_4_173:;
	previousState = (elevState)(3);
	Node_4_174:;
	Node_4_177:;
	elev_clock = (elev_clock + 1l);
	// End of Function
}
signed int emergencyStopHandler() {
	signed int return_value_elev_get_floor_sensor_signal;
	signed int return_value_elev_get_stop_signal;
	signed int return_value_elev_get_floor_sensor_signal_0;
	if (((signed int)(currentState) == 0)) goto Node_5_198;
	if (((signed int)(currentState) == 1)) goto Node_5_203;
	if (((signed int)(currentState) == 2)) goto Node_5_206;
	if (((signed int)(currentState) == 3)) goto Node_5_213;
	if (((signed int)(currentState) == -1)) goto Node_5_216;
	goto Node_5_240;
	Node_5_198:;
	return 0;
	Node_5_203:;
	currentState = (elevState)(-1);
	elev_set_motor_direction((elev_motor_direction_t)(0));
	goto Node_5_240;
	Node_5_206:;
	currentState = (elevState)(-1);
	elev_set_motor_direction((elev_motor_direction_t)(0));
	return_value_elev_get_floor_sensor_signal = elev_get_floor_sensor_signal();
	if (!((return_value_elev_get_floor_sensor_signal == -1))) goto Node_5_211;
	currentState = (elevState)(1);
	Node_5_211:;
	goto Node_5_240;
	Node_5_213:;
	currentState = (elevState)(-1);
	currentState = (elevState)(1);
	goto Node_5_240;
	Node_5_216:;
	flushOrders();
	elev_set_motor_direction((elev_motor_direction_t)(0));
	Node_5_218:;
	return_value_elev_get_stop_signal = elev_get_stop_signal();
	if ((return_value_elev_get_stop_signal == 0)) goto Node_5_223;
	if ((1 != 0)) goto Node_5_218;
	Node_5_223:;
	return_value_elev_get_floor_sensor_signal_0 = elev_get_floor_sensor_signal();
	if (!((return_value_elev_get_floor_sensor_signal_0 == -1))) goto Node_5_233;
	currentState = (elevState)(1);
	return -1;
	Node_5_233:;
	currentState = (elevState)(3);
	return 1;
	Node_5_240:;
	return -1;
}
void setOrdersHigh() {
	signed int button;
	button = 0;
	Node_6_255:;
	if ((button >= 3)) goto Node_6_276;
	signed int floorNum;
	floorNum = 0;
	Node_6_259:;
	if ((floorNum >= 4)) goto Node_6_272;
	signed int return_value_elev_get_button_signal;
	return_value_elev_get_button_signal = elev_get_button_signal((elev_button_type_t)(button), floorNum);
	if ((return_value_elev_get_button_signal == 0)) goto Node_6_267;
	orderMatrix[(signed long int)(button)][(signed long int)(floorNum)] = 1;
	elev_set_button_lamp((elev_button_type_t)(button), floorNum, 1);
	Node_6_267:;
	floorNum = (floorNum + 1);
	goto Node_6_259;
	Node_6_272:;
	button = (button + 1);
	goto Node_6_255;
	Node_6_276:;
	// End of Function
}
signed int setDirection(signed int currentFloor, signed int lastDirection) {
	__CPROVER_assume((currentFloor >= 0));
	__CPROVER_assume((currentFloor < 4));
	signed int return_value_elev_get_floor_sensor_signal;
	return_value_elev_get_floor_sensor_signal = elev_get_floor_sensor_signal();
	if (!((return_value_elev_get_floor_sensor_signal == -1))) goto Node_7_287;
	currentFloor = (signed int)(((double)(currentFloor) + ((double)(lastDirection) / 2.0)));
	Node_7_287:;
	signed int upOrders;
	upOrders = 0;
	signed int downOrders;
	downOrders = 0;
	signed int button;
	button = 0;
	Node_7_295:;
	if ((button >= 3)) goto Node_7_313;
	signed int floorNum;
	floorNum = 0;
	Node_7_299:;
	if ((floorNum >= 4)) goto Node_7_309;
	if (!((orderMatrix[(signed long int)(button)][(signed long int)(floorNum)] == 1))) goto Node_7_306;
	if ((currentFloor >= floorNum)) goto Node_7_304;
	upOrders = (upOrders + 1);
	goto Node_7_305;
	Node_7_304:;
	downOrders = (downOrders + 1);
	Node_7_305:;
	Node_7_306:;
	floorNum = (floorNum + 1);
	goto Node_7_299;
	Node_7_309:;
	button = (button + 1);
	goto Node_7_295;
	Node_7_313:;
	if ((downOrders >= upOrders)) goto Node_7_323;
	return 1;
	Node_7_323:;
	return -1;
}
signed int isButtonPressed() {
	signed int button;
	button = 0;
	Node_8_341:;
	if ((button >= 3)) goto Node_8_358;
	signed int floorNum;
	floorNum = 0;
	Node_8_345:;
	if ((floorNum >= 4)) goto Node_8_354;
	if (!((orderMatrix[(signed long int)(button)][(signed long int)(floorNum)] == 1))) goto Node_8_351;
	return 1;
	Node_8_351:;
	floorNum = (floorNum + 1);
	goto Node_8_345;
	Node_8_354:;
	button = (button + 1);
	goto Node_8_341;
	Node_8_358:;
	return 0;
}
signed int io_read_bit(signed int channel) {
	unsigned int data;
	data = 0u;
	comedi_dio_read(it_g, (channel >> 8), (channel & 0xFF), (signed int*)(&data));
	return (signed int)(data);
}
signed int io_init() {
	signed int i;
	signed int status;
	status = 0;
	it_g = comedi_open("/dev/comedi0");
	if (!((it_g == (comedi_t*)((void*)(0))))) goto Node_10_380;
	return 0;
	Node_10_380:;
	i = 0;
	Node_10_382:;
	if ((i >= 8)) goto Node_10_413;
	signed int return_value_comedi_dio_config;
	return_value_comedi_dio_config = comedi_dio_config(it_g, 2, i, 0);
	status = (status | return_value_comedi_dio_config);
	signed int return_value_comedi_dio_config_0;
	return_value_comedi_dio_config_0 = comedi_dio_config(it_g, 3, i, 1);
	status = (status | return_value_comedi_dio_config_0);
	signed int return_value_comedi_dio_config_1;
	return_value_comedi_dio_config_1 = comedi_dio_config(it_g, 3, (i + 8), 1);
	status = (status | return_value_comedi_dio_config_1);
	signed int return_value_comedi_dio_config_2;
	return_value_comedi_dio_config_2 = comedi_dio_config(it_g, 3, (i + 16), 0);
	status = (status | return_value_comedi_dio_config_2);
	i = (i + 1);
	goto Node_10_382;
	Node_10_413:;
	return (signed int)((status == 0));
}
signed int comedi_dio_config(comedi_t* comedi_dio_config__it_g, signed int port, signed int i, signed int mode) {
	signed int status;
	signed int return_value___VERIFIER_nondet_signed_int;
	return_value___VERIFIER_nondet_signed_int = __VERIFIER_nondet_signed_int();
	status = return_value___VERIFIER_nondet_signed_int;
	__CPROVER_assume(((0 <= status) && (status <= 1)));
	return status;
}
void initStates() {
	signed int return_value_elev_get_floor_sensor_signal_0;
	signed int return_value_elev_get_floor_sensor_signal;
	return_value_elev_get_floor_sensor_signal_0 = elev_get_floor_sensor_signal();
	if (!((return_value_elev_get_floor_sensor_signal_0 == -1))) goto Node_12_449;
	elev_set_motor_direction((elev_motor_direction_t)(1));
	Node_12_443:;
	return_value_elev_get_floor_sensor_signal = elev_get_floor_sensor_signal();
	if (!((return_value_elev_get_floor_sensor_signal == -1))) goto Node_12_448;
	if ((1 != 0)) goto Node_12_443;
	Node_12_448:;
	Node_12_449:;
	elev_set_motor_direction((elev_motor_direction_t)(0));
	previousState = (elevState)(1);
	currentState = (elevState)(1);
	// End of Function
}
void flushOrders() {
	signed int button;
	button = 0;
	Node_13_460:;
	if ((button >= 3)) goto Node_13_473;
	signed int floorNum;
	floorNum = 0;
	Node_13_464:;
	if ((floorNum >= 4)) goto Node_13_469;
	orderMatrix[(signed long int)(button)][(signed long int)(floorNum)] = 0;
	elev_set_button_lamp((elev_button_type_t)(button), floorNum, 0);
	floorNum = (floorNum + 1);
	goto Node_13_464;
	Node_13_469:;
	button = (button + 1);
	goto Node_13_460;
	Node_13_473:;
	// End of Function
}
signed int floorIsOrdered(signed int floorNum, signed int motorDir) {
	signed int floorBeyond;
	if (!((orderMatrix[2][(signed long int)(floorNum)] == 1))) goto Node_14_482;
	return 1;
	Node_14_482:;
	if (!((motorDir == 0))) goto Node_14_496;
	__CPROVER_bool tmp_if_expr;
	if (!((orderMatrix[0][(signed long int)(floorNum)] == 1))) goto Node_14_487;
	tmp_if_expr = (1 != 0);
	goto Node_14_488;
	Node_14_487:;
	tmp_if_expr = ((orderMatrix[1][(signed long int)(floorNum)] == 1) ? 1 : 0 != 0);
	Node_14_488:;
	if (!tmp_if_expr) goto Node_14_494;
	return 1;
	Node_14_494:;
	Node_14_496:;
	if (!((motorDir == 1))) goto Node_14_534;
	floorBeyond = 0;
	signed int button;
	button = 0;
	Node_14_502:;
	if ((button >= 2)) goto Node_14_514;
	signed int i;
	i = (floorNum + 1);
	Node_14_506:;
	if ((i >= 4)) goto Node_14_510;
	floorBeyond = (floorBeyond + orderMatrix[(signed long int)(button)][(signed long int)(i)]);
	i = (i + 1);
	goto Node_14_506;
	Node_14_510:;
	button = (button + 1);
	goto Node_14_502;
	Node_14_514:;
	if (!((orderMatrix[0][(signed long int)(floorNum)] == 1))) goto Node_14_520;
	return 1;
	Node_14_520:;
	if (!((orderMatrix[1][(signed long int)(floorNum)] == 0))) goto Node_14_524;
	goto Node_14_534;
	Node_14_524:;
	if ((floorBeyond == 0)) goto Node_14_528;
	goto Node_14_534;
	Node_14_528:;
	return 1;
	Node_14_534:;
	if (!((motorDir == -1))) goto Node_14_572;
	floorBeyond = 0;
	signed int floorIsOrdered__1__4__1__button;
	floorIsOrdered__1__4__1__button = 0;
	Node_14_540:;
	if ((floorIsOrdered__1__4__1__button >= 2)) goto Node_14_552;
	signed int floorIsOrdered__1__4__1__1__1__i;
	floorIsOrdered__1__4__1__1__1__i = 0;
	Node_14_544:;
	if ((floorIsOrdered__1__4__1__1__1__i >= floorNum)) goto Node_14_548;
	floorBeyond = (floorBeyond + orderMatrix[(signed long int)(floorIsOrdered__1__4__1__button)][(signed long int)(floorIsOrdered__1__4__1__1__1__i)]);
	floorIsOrdered__1__4__1__1__1__i = (floorIsOrdered__1__4__1__1__1__i + 1);
	goto Node_14_544;
	Node_14_548:;
	floorIsOrdered__1__4__1__button = (floorIsOrdered__1__4__1__button + 1);
	goto Node_14_540;
	Node_14_552:;
	if (!((orderMatrix[1][(signed long int)(floorNum)] == 1))) goto Node_14_558;
	return 1;
	Node_14_558:;
	if (!((orderMatrix[0][(signed long int)(floorNum)] == 0))) goto Node_14_562;
	goto Node_14_572;
	Node_14_562:;
	if ((floorBeyond == 0)) goto Node_14_566;
	goto Node_14_572;
	Node_14_566:;
	return 1;
	Node_14_572:;
	return 0;
}
signed int elev_init() {
	signed int i;
	signed int return_value_io_init;
	return_value_io_init = io_init();
	if (!((return_value_io_init == 0))) goto Node_15_594;
	return 0;
	Node_15_594:;
	i = 0;
	Node_15_596:;
	if ((i >= 4)) goto Node_15_606;
	if ((i == 0)) goto Node_15_599;
	elev_set_button_lamp((elev_button_type_t)(1), i, 0);
	Node_15_599:;
	if ((i == 3)) goto Node_15_602;
	elev_set_button_lamp((elev_button_type_t)(0), i, 0);
	Node_15_602:;
	elev_set_button_lamp((elev_button_type_t)(2), i, 0);
	i = (i + 1);
	goto Node_15_596;
	Node_15_606:;
	elev_set_floor_indicator(0);
	return 1;
}
signed int isTimerActive() {
	return timerActive;
}
signed int elev_get_button_signal(elev_button_type_t button, signed int floor) {
	__CPROVER_assume((floor >= 0));
	__CPROVER_assume((floor < 4));
	__CPROVER_assume(((((signed int)(button) == 0) || ((signed int)(button) == 1)) || ((signed int)(button) == 2)));
	signed int return_value_io_read_bit;
	return_value_io_read_bit = io_read_bit(button_channel_matrix[(signed long int)(floor)][(signed long int)(button)]);
	if ((return_value_io_read_bit == 0)) goto Node_17_635;
	return 1;
	Node_17_635:;
	return 0;
}
comedi_t* comedi_open(char* src) {
	comedi_t *pointer;
	comedi_t pointed;
	pointer = &pointed;
	return pointer;
}
void comedi_dio_read(comedi_t* comedi_dio_read__it_g, signed int port, signed int i, signed int* data) {
	signed int read;
	signed int return_value___VERIFIER_nondet_signed_int;
	return_value___VERIFIER_nondet_signed_int = __VERIFIER_nondet_signed_int();
	read = return_value___VERIFIER_nondet_signed_int;
	__CPROVER_assume(((0 <= read) && (read <= 1)));
	*data = read;
	// End of Function
}
clock_t clock() {
	return elev_clock;
}
void update_prop_automata() {
	if (!((state == 0))) goto Node_21_673;
	timer = 0l;
	if (!(((currentFloorLocation == myFloor) && ((signed int)(previousState) == 3)))) goto Node_21_671;
	state = 1;
	Node_21_671:;
	goto Node_21_691;
	Node_21_673:;
	if (!((state == 1))) goto Node_21_678;
	if (!((orderMatrix[2][(signed long int)(dstFloor)] == 1))) goto Node_21_676;
	state = 2;
	Node_21_676:;
	goto Node_21_690;
	Node_21_678:;
	if (!((state == 2))) goto Node_21_689;
	timer = (timer + 1l);
	if (!((orderMatrix[2][(signed long int)(dstFloor)] == 0) ? TRUE : ((currentFloorLocation == dstFloor) && ((signed int)(previousState) == 3)) ? TRUE : FALSE)) goto Node_21_685;
	state = 0;
	goto Node_21_688;
	Node_21_685:;
	if (!((timer >= 300l))) goto Node_21_687;
	state = 3;
	Node_21_687:;
	Node_21_688:;
	Node_21_689:;
	Node_21_690:;
	Node_21_691:;
	// End of Function
}
void timerDeactivate() {
	timerActive = 0;
	// End of Function
}
void startTimer(double length) {
	timerStarted = clock();
	duration = length;
	timerActive = 1;
	// End of Function
}
signed int io_read_analog(signed int channel) {
	// End of Function
}
void io_write_analog(signed int channel, signed int value) {
	// End of Function
}
void comedi_data_read(comedi_t* comedi_data_read__it_g, signed int port, signed int channel, signed int i, signed int j, signed int* data) {
	// End of Function
}
void check_property() {
	(void)sizeof(signed int)  ;
	if(!((state != 3))) printf("vioated property: Node_27_707\n"); fflush(stdout);
	assert((state != 3));
	// End of Function
}
void io_set_bit(signed int channel) {
	// End of Function
}
void io_clear_bit(signed int channel) {
	// End of Function
}
void comedi_data_write(comedi_t* comedi_data_write__it_g, signed int port, signed int channel, signed int i, signed int j, signed int mode) {
	// End of Function
}
void removeFromOrderMatrix(signed int floorNum) {
	signed int button;
	button = 0;
	Node_32_723:;
	if ((button >= 3)) goto Node_32_728;
	orderMatrix[(signed long int)(button)][(signed long int)(floorNum)] = 0;
	elev_set_button_lamp((elev_button_type_t)(button), floorNum, 0);
	button = (button + 1);
	goto Node_32_723;
	Node_32_728:;
	// End of Function
}
void comedi_dio_write(comedi_t* comedi_dio_write__it_g, signed int port, signed int i, signed int mode) {
	// End of Function
}
signed int elev_get_obstruction_signal() {
	io_read_bit((0x300 + 23));
	// End of Function
}
void elev_set_button_lamp(elev_button_type_t button, signed int floor, signed int value) {
	__CPROVER_assume((floor >= 0));
	__CPROVER_assume((floor < 4));
	__CPROVER_assume(((((signed int)(button) == 0) || ((signed int)(button) == 1)) || ((signed int)(button) == 2)));
	// End of Function
}
void elev_set_door_open_lamp(signed int value) {
	// End of Function
}
void elev_set_floor_indicator(signed int floor) {
	__CPROVER_assume((floor >= 0));
	__CPROVER_assume((floor < 4));
	// End of Function
}
void elev_set_motor_direction(elev_motor_direction_t dirn) {
	if (!(((signed int)(dirn) == 0))) goto Node_39_787;
	elev_motor = 0;
	goto Node_39_796;
	Node_39_787:;
	if (!(((signed int)(dirn) >= 1))) goto Node_39_791;
	elev_motor = 1;
	startTimer(3.0);
	goto Node_39_795;
	Node_39_791:;
	if (((signed int)(dirn) >= 0)) goto Node_39_794;
	elev_motor = -1;
	startTimer(3.0);
	Node_39_794:;
	Node_39_795:;
	Node_39_796:;
	// End of Function
}
void elev_set_stop_lamp(signed int value) {
	// End of Function
}
