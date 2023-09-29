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
extern signed int __VERIFIER_nondet_signed_int();
int main() {
	myFloor = __VERIFIER_nondet_signed_int();
	__CPROVER_printf("__iv__test_case:%d", myFloor);
	__CPROVER_assume(((1 <= myFloor) && (myFloor <= 3)));
	signed int return_value_elev_init;
	return_value_elev_init = elev_init();
	if ((return_value_elev_init == 0)) goto Node_0_14;
	initStates();
	Node_0_8:;
	if (!((1 != 0))) goto Node_0_13;
	stateController();
	update_prop_automata();
	check_property();
	goto Node_0_8;
	Node_0_13:;
	Node_0_14:;
	// End of Function
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
	if (!((!((currentFloorLocation == -1)) || !((lastFloorAfterEmergency == -1))))) goto Node_1_85;
	if ((lastFloorAfterEmergency == -1)) goto Node_1_31;
	previousMainFloor = lastFloorAfterEmergency;
	goto Node_1_32;
	Node_1_31:;
	previousMainFloor = currentFloorLocation;
	Node_1_32:;
	elev_set_floor_indicator(previousMainFloor);
	if (((signed int)(previousState) == 0)) goto Node_1_41;
	if (((signed int)(previousState) == 1)) goto Node_1_42;
	if (((signed int)(previousState) == 2)) goto Node_1_49;
	if (((signed int)(previousState) == 3)) goto Node_1_55;
	if (((signed int)(previousState) == -1)) goto Node_1_83;
	goto Node_1_84;
	Node_1_41:;
	goto Node_1_84;
	Node_1_42:;
	return_value_isButtonPressed = isButtonPressed();
	if ((return_value_isButtonPressed == 0)) goto Node_1_47;
	motorDirection = setDirection(previousMainFloor, motorDirection);
	elev_set_motor_direction((elev_motor_direction_t)(motorDirection));
	previousState = (elevState)(2);
	Node_1_47:;
	goto Node_1_84;
	Node_1_49:;
	return_value_floorIsOrdered = floorIsOrdered(previousMainFloor, motorDirection);
	if ((return_value_floorIsOrdered == 0)) goto Node_1_52;
	previousState = (elevState)(3);
	Node_1_52:;
	lastFloorAfterEmergency = -1;
	goto Node_1_84;
	Node_1_55:;
	elev_set_motor_direction((elev_motor_direction_t)(0));
	motorDirection = 0;
	return_value_isTimerActive = isTimerActive();
	if (!((return_value_isTimerActive == 0))) goto Node_1_63;
	return_value_elev_get_floor_sensor_signal = elev_get_floor_sensor_signal();
	if ((return_value_elev_get_floor_sensor_signal == -1)) goto Node_1_62;
	startTimer(3.0);
	Node_1_62:;
	Node_1_63:;
	return_value_isTimerActive_0 = isTimerActive();
	if (!((return_value_isTimerActive_0 == 1))) goto Node_1_76;
	signed int return_value_floorIsOrdered_0;
	return_value_floorIsOrdered_0 = floorIsOrdered(previousMainFloor, motorDirection);
	if ((return_value_floorIsOrdered_0 == 0)) goto Node_1_73;
	startTimer(3.0);
	removeFromOrderMatrix(previousMainFloor);
	Node_1_73:;
	Node_1_76:;
	return_value_getTimerStatus = getTimerStatus();
	if ((return_value_getTimerStatus == 0)) goto Node_1_81;
	previousState = (elevState)(1);
	timerDeactivate();
	Node_1_81:;
	goto Node_1_84;
	Node_1_83:;
	Node_1_84:;
	Node_1_85:;
	signed int return_value_elev_get_stop_signal;
	return_value_elev_get_stop_signal = elev_get_stop_signal();
	if ((return_value_elev_get_stop_signal == 0)) goto Node_1_104;
	__CPROVER_assume((0 != 0));
	signed int return_value_emergencyStopHandler;
	return_value_emergencyStopHandler = emergencyStopHandler();
	if (!((return_value_emergencyStopHandler == -1))) goto Node_1_100;
	previousState = (elevState)(1);
	lastFloorAfterEmergency = previousMainFloor;
	goto Node_1_101;
	Node_1_100:;
	previousState = (elevState)(3);
	Node_1_101:;
	Node_1_104:;
	elev_clock = (elev_clock + 1l);
	// End of Function
}
signed int setDirection(signed int currentFloor, signed int lastDirection) {
	__CPROVER_assume((currentFloor >= 0));
	__CPROVER_assume((currentFloor < 4));
	signed int return_value_elev_get_floor_sensor_signal;
	return_value_elev_get_floor_sensor_signal = elev_get_floor_sensor_signal();
	if (!((return_value_elev_get_floor_sensor_signal == -1))) goto Node_2_123;
	currentFloor = (signed int)(((double)(currentFloor) + ((double)(lastDirection) / 2.0)));
	Node_2_123:;
	signed int upOrders;
	upOrders = 0;
	signed int downOrders;
	downOrders = 0;
	signed int button;
	button = 0;
	Node_2_131:;
	if ((button >= 3)) goto Node_2_149;
	signed int floorNum;
	floorNum = 0;
	Node_2_135:;
	if ((floorNum >= 4)) goto Node_2_145;
	if (!((orderMatrix[(signed long int)(button)][(signed long int)(floorNum)] == 1))) goto Node_2_142;
	if ((currentFloor >= floorNum)) goto Node_2_140;
	upOrders = (upOrders + 1);
	goto Node_2_141;
	Node_2_140:;
	downOrders = (downOrders + 1);
	Node_2_141:;
	Node_2_142:;
	floorNum = (floorNum + 1);
	goto Node_2_135;
	Node_2_145:;
	button = (button + 1);
	goto Node_2_131;
	Node_2_149:;
	if ((downOrders >= upOrders)) goto Node_2_159;
	return 1;
	Node_2_159:;
	return -1;
}
signed int io_init() {
	signed int i;
	signed int status;
	status = 0;
	it_g = comedi_open("/dev/comedi0");
	if (!((it_g == (comedi_t*)((void*)(0))))) goto Node_3_184;
	return 0;
	Node_3_184:;
	i = 0;
	Node_3_186:;
	if ((i >= 8)) goto Node_3_217;
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
	goto Node_3_186;
	Node_3_217:;
	return (signed int)((status == 0));
}
signed int elev_get_floor_sensor_signal() {
	signed int return_value_isTimerActive;
	return_value_isTimerActive = isTimerActive();
	if ((return_value_isTimerActive == 0)) goto Node_4_258;
	if ((elev_motor == 0)) goto Node_4_257;
	signed int return_value_getTimerStatus;
	return_value_getTimerStatus = getTimerStatus();
	if ((return_value_getTimerStatus == 0)) goto Node_4_248;
	timerDeactivate();
	elev_floor = (elev_floor + elev_motor);
	__CPROVER_assume(((0 <= elev_floor) && (elev_floor < 4)));
	return elev_floor;
	Node_4_248:;
	return -1;
	Node_4_257:;
	Node_4_258:;
	return elev_floor;
}
signed int elev_get_button_signal(elev_button_type_t button, signed int floor) {
	__CPROVER_assume((floor >= 0));
	__CPROVER_assume((floor < 4));
	__CPROVER_assume(((((signed int)(button) == 0) || ((signed int)(button) == 1)) || ((signed int)(button) == 2)));
	signed int return_value_io_read_bit;
	return_value_io_read_bit = io_read_bit(button_channel_matrix[(signed long int)(floor)][(signed long int)(button)]);
	if ((return_value_io_read_bit == 0)) goto Node_5_277;
	return 1;
	Node_5_277:;
	return 0;
}
signed int comedi_dio_config(comedi_t* comedi_dio_config__it_g, signed int port, signed int i, signed int mode) {
	signed int status;
	signed int return_value___VERIFIER_nondet_signed_int;
	return_value___VERIFIER_nondet_signed_int = __VERIFIER_nondet_signed_int();
	__CPROVER_printf("__iv__test_case:%d", return_value___VERIFIER_nondet_signed_int);
	status = return_value___VERIFIER_nondet_signed_int;
	__CPROVER_assume(((0 <= status) && (status <= 1)));
	return status;
}
void update_prop_automata() {
	clock_t return_value_clock;
	if (!((state == 0))) goto Node_7_306;
	timer = clock();
	if (!((orderMatrix[1][(signed long int)(myFloor)] == 1))) goto Node_7_304;
	state = 1;
	Node_7_304:;
	goto Node_7_318;
	Node_7_306:;
	if (!((state == 1))) goto Node_7_317;
	if (!((orderMatrix[1][(signed long int)(myFloor)] == 0) ? TRUE : ((previousMainFloor == myFloor) && ((signed int)(previousState) == 3)) ? TRUE : FALSE)) goto Node_7_312;
	state = 0;
	goto Node_7_316;
	Node_7_312:;
	return_value_clock = clock();
	if (!(((return_value_clock + -timer) >= 600l))) goto Node_7_315;
	state = 2;
	Node_7_315:;
	Node_7_316:;
	Node_7_317:;
	Node_7_318:;
	// End of Function
}
signed int elev_get_stop_signal() {
	signed int return_value_io_read_bit;
	return_value_io_read_bit = io_read_bit((0x300 + 22));
	return return_value_io_read_bit;
}
signed int floorIsOrdered(signed int floorNum, signed int motorDir) {
	signed int floorBeyond;
	if (!((orderMatrix[2][(signed long int)(floorNum)] == 1))) goto Node_9_336;
	return 1;
	Node_9_336:;
	if (!((motorDir == 0))) goto Node_9_350;
	__CPROVER_bool tmp_if_expr;
	if (!((orderMatrix[0][(signed long int)(floorNum)] == 1))) goto Node_9_341;
	tmp_if_expr = (1 != 0);
	goto Node_9_342;
	Node_9_341:;
	tmp_if_expr = ((orderMatrix[1][(signed long int)(floorNum)] == 1) ? 1 : 0 != 0);
	Node_9_342:;
	if (!tmp_if_expr) goto Node_9_348;
	return 1;
	Node_9_348:;
	Node_9_350:;
	if (!((motorDir == 1))) goto Node_9_388;
	floorBeyond = 0;
	signed int button;
	button = 0;
	Node_9_356:;
	if ((button >= 2)) goto Node_9_368;
	signed int floorIsOrdered__1__3__1__1__1__i;
	floorIsOrdered__1__3__1__1__1__i = (floorNum + 1);
	Node_9_360:;
	if ((floorIsOrdered__1__3__1__1__1__i >= 4)) goto Node_9_364;
	floorBeyond = (floorBeyond + orderMatrix[(signed long int)(button)][(signed long int)(floorIsOrdered__1__3__1__1__1__i)]);
	floorIsOrdered__1__3__1__1__1__i = (floorIsOrdered__1__3__1__1__1__i + 1);
	goto Node_9_360;
	Node_9_364:;
	button = (button + 1);
	goto Node_9_356;
	Node_9_368:;
	if (!((orderMatrix[0][(signed long int)(floorNum)] == 1))) goto Node_9_374;
	return 1;
	Node_9_374:;
	if (!((orderMatrix[1][(signed long int)(floorNum)] == 0))) goto Node_9_378;
	goto Node_9_388;
	Node_9_378:;
	if ((floorBeyond == 0)) goto Node_9_382;
	goto Node_9_388;
	Node_9_382:;
	return 1;
	Node_9_388:;
	if (!((motorDir == -1))) goto Node_9_426;
	floorBeyond = 0;
	signed int floorIsOrdered__1__4__1__button;
	floorIsOrdered__1__4__1__button = 0;
	Node_9_394:;
	if ((floorIsOrdered__1__4__1__button >= 2)) goto Node_9_406;
	signed int i;
	i = 0;
	Node_9_398:;
	if ((i >= floorNum)) goto Node_9_402;
	floorBeyond = (floorBeyond + orderMatrix[(signed long int)(floorIsOrdered__1__4__1__button)][(signed long int)(i)]);
	i = (i + 1);
	goto Node_9_398;
	Node_9_402:;
	floorIsOrdered__1__4__1__button = (floorIsOrdered__1__4__1__button + 1);
	goto Node_9_394;
	Node_9_406:;
	if (!((orderMatrix[1][(signed long int)(floorNum)] == 1))) goto Node_9_412;
	return 1;
	Node_9_412:;
	if (!((orderMatrix[0][(signed long int)(floorNum)] == 0))) goto Node_9_416;
	goto Node_9_426;
	Node_9_416:;
	if ((floorBeyond == 0)) goto Node_9_420;
	goto Node_9_426;
	Node_9_420:;
	return 1;
	Node_9_426:;
	return 0;
}
void setOrdersHigh() {
	signed int button;
	button = 0;
	Node_10_439:;
	if ((button >= 3)) goto Node_10_460;
	signed int floorNum;
	floorNum = 0;
	Node_10_443:;
	if ((floorNum >= 4)) goto Node_10_456;
	signed int return_value_elev_get_button_signal;
	return_value_elev_get_button_signal = elev_get_button_signal((elev_button_type_t)(button), floorNum);
	if ((return_value_elev_get_button_signal == 0)) goto Node_10_451;
	orderMatrix[(signed long int)(button)][(signed long int)(floorNum)] = 1;
	elev_set_button_lamp((elev_button_type_t)(button), floorNum, 1);
	Node_10_451:;
	floorNum = (floorNum + 1);
	goto Node_10_443;
	Node_10_456:;
	button = (button + 1);
	goto Node_10_439;
	Node_10_460:;
	// End of Function
}
signed int isButtonPressed() {
	signed int button;
	button = 0;
	Node_11_466:;
	if ((button >= 3)) goto Node_11_483;
	signed int floorNum;
	floorNum = 0;
	Node_11_470:;
	if ((floorNum >= 4)) goto Node_11_479;
	if (!((orderMatrix[(signed long int)(button)][(signed long int)(floorNum)] == 1))) goto Node_11_476;
	return 1;
	Node_11_476:;
	floorNum = (floorNum + 1);
	goto Node_11_470;
	Node_11_479:;
	button = (button + 1);
	goto Node_11_466;
	Node_11_483:;
	return 0;
}
signed int io_read_bit(signed int channel) {
	unsigned int data;
	data = 0u;
	comedi_dio_read(it_g, (channel >> 8), (channel & 0xFF), (signed int*)(&data));
	return (signed int)(data);
}
void initStates() {
	signed int return_value_elev_get_floor_sensor_signal_0;
	signed int return_value_elev_get_floor_sensor_signal;
	return_value_elev_get_floor_sensor_signal_0 = elev_get_floor_sensor_signal();
	if (!((return_value_elev_get_floor_sensor_signal_0 == -1))) goto Node_13_508;
	elev_set_motor_direction((elev_motor_direction_t)(1));
	Node_13_502:;
	return_value_elev_get_floor_sensor_signal = elev_get_floor_sensor_signal();
	if (!((return_value_elev_get_floor_sensor_signal == -1))) goto Node_13_507;
	if ((1 != 0)) goto Node_13_502;
	Node_13_507:;
	Node_13_508:;
	elev_set_motor_direction((elev_motor_direction_t)(0));
	previousState = (elevState)(1);
	currentState = (elevState)(1);
	// End of Function
}
signed int getTimerStatus() {
	long double deltaTime;
	clock_t return_value_clock;
	return_value_clock = clock();
	deltaTime = ((long double)((return_value_clock - timerStarted)) / 1.0l);
	if (!(((deltaTime >= (long double)(duration)) && !((timerActive == 0))))) goto Node_14_529;
	return 1;
	Node_14_529:;
	return 0;
}
clock_t clock() {
	return elev_clock;
}
signed int emergencyStopHandler() {
	signed int return_value_elev_get_floor_sensor_signal;
	signed int return_value_elev_get_stop_signal;
	signed int return_value_elev_get_floor_sensor_signal_0;
	if (((signed int)(currentState) == 0)) goto Node_16_553;
	if (((signed int)(currentState) == 1)) goto Node_16_558;
	if (((signed int)(currentState) == 2)) goto Node_16_561;
	if (((signed int)(currentState) == 3)) goto Node_16_568;
	if (((signed int)(currentState) == -1)) goto Node_16_571;
	goto Node_16_595;
	Node_16_553:;
	return 0;
	Node_16_558:;
	currentState = (elevState)(-1);
	elev_set_motor_direction((elev_motor_direction_t)(0));
	goto Node_16_595;
	Node_16_561:;
	currentState = (elevState)(-1);
	elev_set_motor_direction((elev_motor_direction_t)(0));
	return_value_elev_get_floor_sensor_signal = elev_get_floor_sensor_signal();
	if (!((return_value_elev_get_floor_sensor_signal == -1))) goto Node_16_566;
	currentState = (elevState)(1);
	Node_16_566:;
	goto Node_16_595;
	Node_16_568:;
	currentState = (elevState)(-1);
	currentState = (elevState)(1);
	goto Node_16_595;
	Node_16_571:;
	flushOrders();
	elev_set_motor_direction((elev_motor_direction_t)(0));
	Node_16_573:;
	return_value_elev_get_stop_signal = elev_get_stop_signal();
	if ((return_value_elev_get_stop_signal == 0)) goto Node_16_578;
	if ((1 != 0)) goto Node_16_573;
	Node_16_578:;
	return_value_elev_get_floor_sensor_signal_0 = elev_get_floor_sensor_signal();
	if (!((return_value_elev_get_floor_sensor_signal_0 == -1))) goto Node_16_588;
	currentState = (elevState)(1);
	return -1;
	Node_16_588:;
	currentState = (elevState)(3);
	return 1;
	Node_16_595:;
	return -1;
}
signed int elev_init() {
	signed int i;
	signed int return_value_io_init;
	return_value_io_init = io_init();
	if (!((return_value_io_init == 0))) goto Node_17_619;
	return 0;
	Node_17_619:;
	i = 0;
	Node_17_621:;
	if ((i >= 4)) goto Node_17_631;
	if ((i == 0)) goto Node_17_624;
	elev_set_button_lamp((elev_button_type_t)(1), i, 0);
	Node_17_624:;
	if ((i == 3)) goto Node_17_627;
	elev_set_button_lamp((elev_button_type_t)(0), i, 0);
	Node_17_627:;
	elev_set_button_lamp((elev_button_type_t)(2), i, 0);
	i = (i + 1);
	goto Node_17_621;
	Node_17_631:;
	elev_set_floor_indicator(0);
	return 1;
}
signed int isTimerActive() {
	return timerActive;
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
	__CPROVER_printf("__iv__test_case:%d", return_value___VERIFIER_nondet_signed_int);
	read = return_value___VERIFIER_nondet_signed_int;
	__CPROVER_assume(((0 <= read) && (read <= 1)));
	*data = read;
	// End of Function
}
void flushOrders() {
	signed int button;
	button = 0;
	Node_21_670:;
	if ((button >= 3)) goto Node_21_683;
	signed int floorNum;
	floorNum = 0;
	Node_21_674:;
	if ((floorNum >= 4)) goto Node_21_679;
	orderMatrix[(signed long int)(button)][(signed long int)(floorNum)] = 0;
	elev_set_button_lamp((elev_button_type_t)(button), floorNum, 0);
	floorNum = (floorNum + 1);
	goto Node_21_674;
	Node_21_679:;
	button = (button + 1);
	goto Node_21_670;
	Node_21_683:;
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
	if (!((state != 2))) __CPROVER_printf("violated property: Node_28_705");
	assert((state != 2));
	// End of Function
}
void io_set_bit(signed int channel) {
	// End of Function
}
void removeFromOrderMatrix(signed int floorNum) {
	signed int button;
	button = 0;
	Node_30_712:;
	if ((button >= 3)) goto Node_30_717;
	orderMatrix[(signed long int)(button)][(signed long int)(floorNum)] = 0;
	elev_set_button_lamp((elev_button_type_t)(button), floorNum, 0);
	button = (button + 1);
	goto Node_30_712;
	Node_30_717:;
	// End of Function
}
void io_clear_bit(signed int channel) {
	// End of Function
}
void comedi_data_write(comedi_t* comedi_data_write__it_g, signed int port, signed int channel, signed int i, signed int j, signed int mode) {
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
	if (!(((signed int)(dirn) == 0))) goto Node_39_779;
	elev_motor = 0;
	goto Node_39_788;
	Node_39_779:;
	if (!(((signed int)(dirn) >= 1))) goto Node_39_783;
	elev_motor = 1;
	startTimer(3.0);
	goto Node_39_787;
	Node_39_783:;
	if (((signed int)(dirn) >= 0)) goto Node_39_786;
	elev_motor = -1;
	startTimer(3.0);
	Node_39_786:;
	Node_39_787:;
	Node_39_788:;
	// End of Function
}
void elev_set_stop_lamp(signed int value) {
	// End of Function
}
