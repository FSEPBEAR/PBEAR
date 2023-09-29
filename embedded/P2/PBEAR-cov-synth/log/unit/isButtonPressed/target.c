#include <stdlib.h>
#include <stdbool.h>
typedef _Bool __CPROVER_bool;
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
extern int __VERIFIER_nondet_int();
extern signed int __VERIFIER_nondet_signed_int();
signed int isButtonPressed() {
	signed int button;
	button = 0;
	Node_11_466:;
	if ((button >= 3)) goto Node_11_483;
	signed int floorNum;
	floorNum = 0;
	Node_11_470:;
	if ((floorNum >= 4)) goto Node_11_479;
	//@ assert 0 <= ((signed long int)(button)) && ((signed long int)(button)) < 3;
	//@ assert 0 <= ((signed long int)(floorNum)) && ((signed long int)(floorNum)) < 4;
	//@ assert 0 <= ((signed long int)(button)) && ((signed long int)(button)) < 3;
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
int main() {
	signed int __iv__return_expr_isButtonPressed;
	orderMatrix[0][0] = __VERIFIER_nondet_signed_int();
	orderMatrix[0][1] = __VERIFIER_nondet_signed_int();
	orderMatrix[0][2] = __VERIFIER_nondet_signed_int();
	orderMatrix[0][3] = __VERIFIER_nondet_signed_int();
	orderMatrix[1][0] = __VERIFIER_nondet_signed_int();
	orderMatrix[1][1] = __VERIFIER_nondet_signed_int();
	orderMatrix[1][2] = __VERIFIER_nondet_signed_int();
	orderMatrix[1][3] = __VERIFIER_nondet_signed_int();
	orderMatrix[2][0] = __VERIFIER_nondet_signed_int();
	orderMatrix[2][1] = __VERIFIER_nondet_signed_int();
	orderMatrix[2][2] = __VERIFIER_nondet_signed_int();
	orderMatrix[2][3] = __VERIFIER_nondet_signed_int();
	__iv__return_expr_isButtonPressed=isButtonPressed();
}
