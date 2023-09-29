#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define __CPROVER_assume(a) if (!(a)) exit(0)
typedef _Bool __CPROVER_bool;
FILE *__iv__fp;
#include <assert.h>
#ifndef TRUE
#define TRUE 1
#endif
#ifndef FALSE
#define FALSE 0
#endif
enum FSM { STANDBY=0, SCAN_PRIMARY=1, SCAN_SECONDARY=2, DRIVE_PATROL=3, DRIVE_TO_BEACON_FAST=4, DRIVE_TO_BEACON_SLOW=5, DRIVE_TO_WALL=6, TARGET_ACQUIRING=7, TARGET_DISPOSING=8, SIGNAL_COMPLETION=9 };
typedef enum FSM State;
signed int SensorValue(signed int sensor);
State acquireTarget();
void backUp();
void check_property();
void clearTimer(signed int t1);
State closeRangeApproach();
State disposeOfTarget();
State findAWall();
void initialize();
State longRangeApproach();
signed int medianFilter();
State onPatrol();
State primaryScan();
State secondaryScan();
State standingBy();
void stopWheels();
State taskComplete();
signed int time1(signed int t1);
void turnAround();
void update_prop_automata();
void wait1Msec(signed int sec);
signed int IRMax=0;
signed int ambientIR=5000;
signed int brobot_max_loss;
signed int brobot_signal_loss;
signed int cycle=0;
State machineState=/*enum*/STANDBY;
float motor[4l];
signed int sonarMax=0;
signed int state=0;
signed int __VERIFIER_nondet_signed_int(){ signed int __iv_temp; if (-1 == fscanf(__iv__fp, "%d", &__iv_temp)) exit(0); return __iv_temp; }
int main(int argc, char* argv[]) {
	__iv__fp = fopen(argv[1], "r");
	initialize();
	Node_0_1:;
	if (!((1 != 0))) goto Node_0_39;
	if (((signed int)(machineState) == 0)) goto Node_0_14;
	if (((signed int)(machineState) == 1)) goto Node_0_16;
	if (((signed int)(machineState) == 2)) goto Node_0_18;
	if (((signed int)(machineState) == 3)) goto Node_0_20;
	if (((signed int)(machineState) == 4)) goto Node_0_22;
	if (((signed int)(machineState) == 5)) goto Node_0_24;
	if (((signed int)(machineState) == 7)) goto Node_0_26;
	if (((signed int)(machineState) == 6)) goto Node_0_28;
	if (((signed int)(machineState) == 8)) goto Node_0_30;
	if (((signed int)(machineState) == 9)) goto Node_0_32;
	goto Node_0_34;
	Node_0_14:;
	machineState = standingBy();
	goto Node_0_35;
	Node_0_16:;
	machineState = primaryScan();
	goto Node_0_35;
	Node_0_18:;
	machineState = secondaryScan();
	goto Node_0_35;
	Node_0_20:;
	machineState = onPatrol();
	goto Node_0_35;
	Node_0_22:;
	machineState = longRangeApproach();
	goto Node_0_35;
	Node_0_24:;
	machineState = closeRangeApproach();
	goto Node_0_35;
	Node_0_26:;
	machineState = acquireTarget();
	goto Node_0_35;
	Node_0_28:;
	machineState = findAWall();
	goto Node_0_35;
	Node_0_30:;
	machineState = disposeOfTarget();
	goto Node_0_35;
	Node_0_32:;
	machineState = taskComplete();
	goto Node_0_35;
	Node_0_34:;
	Node_0_35:;
	update_prop_automata();
	check_property();
	goto Node_0_1;
	Node_0_39:;
	// End of Function
}
signed int time1(signed int t1) {
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = __VERIFIER_nondet_signed_int();
	res = return_value___VERIFIER_nondet_unsigned_int;
	__CPROVER_assume(((0 <= res) && (res <= 65535)));
	return res;
}
State standingBy() {
	stopWheels();
	signed int return_value_SensorValue;
	return_value_SensorValue = SensorValue(3);
	if ((return_value_SensorValue == 0)) goto Node_3_71;
	return (State)(1);
	Node_3_71:;
	return (State)(0);
}
State secondaryScan() {
	IRMax = 0;
	clearTimer(0);
	signed int return_value_time1;
	Node_4_83:;
	return_value_time1 = time1(0);
	if ((return_value_time1 >= 3000)) goto Node_4_99;
	signed int return_value_SensorValue;
	return_value_SensorValue = SensorValue(2);
	if ((IRMax >= return_value_SensorValue)) goto Node_4_93;
	IRMax = SensorValue(2);
	Node_4_93:;
	motor[0] = (float)((25.0 * 1.3));
	motor[1] = (float)(-25);
	if ((1 != 0)) goto Node_4_83;
	Node_4_99:;
	stopWheels();
	wait1Msec(200);
	clearTimer(0);
	signed int return_value_time1_0;
	Node_4_104:;
	return_value_time1_0 = time1(0);
	if ((return_value_time1_0 >= 6000)) goto Node_4_120;
	signed int return_value_SensorValue_0;
	return_value_SensorValue_0 = SensorValue(2);
	if (!((return_value_SensorValue_0 >= IRMax))) goto Node_4_114;
	IRMax = SensorValue(2);
	Node_4_114:;
	motor[0] = (float)(-((25.0 * 1.3)));
	motor[1] = 25.0f;
	if ((1 != 0)) goto Node_4_104;
	Node_4_120:;
	stopWheels();
	wait1Msec(200);
	clearTimer(0);
	signed int return_value_time1_1;
	Node_4_125:;
	return_value_time1_1 = time1(0);
	if ((return_value_time1_1 >= 6000)) goto Node_4_150;
	signed int return_value_SensorValue_1;
	return_value_SensorValue_1 = SensorValue(2);
	if (((IRMax + -20) >= return_value_SensorValue_1)) goto Node_4_142;
	stopWheels();
	return (State)(5);
	Node_4_142:;
	motor[0] = (float)((25.0 * 1.3));
	motor[1] = (float)(-25);
	brobot_signal_loss = (brobot_signal_loss + 1);
	__CPROVER_assume((brobot_signal_loss <= brobot_max_loss));
	if ((1 != 0)) goto Node_4_125;
	Node_4_150:;
	stopWheels();
	return (State)(3);
}
State primaryScan() {
	IRMax = 0;
	sonarMax = 0;
	clearTimer(0);
	signed int return_value_time1;
	Node_5_162:;
	return_value_time1 = time1(0);
	if ((return_value_time1 >= 4000)) goto Node_5_187;
	signed int return_value_SensorValue;
	return_value_SensorValue = SensorValue(2);
	if ((IRMax >= return_value_SensorValue)) goto Node_5_172;
	IRMax = SensorValue(2);
	Node_5_172:;
	signed int return_value_SensorValue_0;
	return_value_SensorValue_0 = SensorValue(2);
	if ((return_value_SensorValue_0 >= ambientIR)) goto Node_5_179;
	ambientIR = SensorValue(2);
	Node_5_179:;
	motor[0] = (float)(-((30.0 * 1.3)));
	motor[1] = 30.0f;
	if ((1 != 0)) goto Node_5_162;
	Node_5_187:;
	clearTimer(0);
	signed int return_value_time1_0;
	Node_5_190:;
	return_value_time1_0 = time1(0);
	if ((return_value_time1_0 >= 4000)) goto Node_5_214;
	signed int return_value_SensorValue_1;
	return_value_SensorValue_1 = SensorValue(2);
	if (((ambientIR + 50) >= return_value_SensorValue_1)) goto Node_5_206;
	stopWheels();
	return (State)(4);
	Node_5_206:;
	motor[0] = (float)(-((25.0 * 1.3)));
	motor[1] = 25.0f;
	brobot_signal_loss = (brobot_signal_loss + 1);
	__CPROVER_assume((brobot_signal_loss <= brobot_max_loss));
	if ((1 != 0)) goto Node_5_190;
	Node_5_214:;
	stopWheels();
	return (State)(3);
}
State onPatrol() {
	sonarMax = 0;
	clearTimer(0);
	signed int return_value_time1;
	Node_6_224:;
	return_value_time1 = time1(0);
	if ((return_value_time1 >= 6000)) goto Node_6_240;
	signed int return_value_SensorValue;
	return_value_SensorValue = SensorValue(1);
	if (!((return_value_SensorValue >= sonarMax))) goto Node_6_234;
	sonarMax = SensorValue(1);
	Node_6_234:;
	motor[0] = (float)(-((25.0 * 1.3)));
	motor[1] = 25.0f;
	if ((1 != 0)) goto Node_6_224;
	Node_6_240:;
	clearTimer(0);
	signed int return_value_SensorValue_0;
	Node_6_243:;
	return_value_SensorValue_0 = SensorValue(1);
	if (!(((sonarMax + -100) >= return_value_SensorValue_0))) goto Node_6_250;
	motor[0] = (float)(-((25.0 * 1.3)));
	motor[1] = 25.0f;
	if ((1 != 0)) goto Node_6_243;
	Node_6_250:;
	stopWheels();
	motor[0] = (float)((40.0 * 1.3));
	motor[1] = 40.0f;
	wait1Msec(2500);
	stopWheels();
	return (State)(1);
}
State longRangeApproach() {
	signed int return_value_medianFilter;
	return_value_medianFilter = medianFilter();
	signed int return_value_medianFilter_0;
	signed int return_value_SensorValue;
	signed int return_value_SensorValue_1;
	if ((return_value_medianFilter >= 601)) goto Node_7_277;
	return (State)(5);
	Node_7_277:;
	brobot_signal_loss = (brobot_signal_loss + 1);
	__CPROVER_assume((brobot_signal_loss <= brobot_max_loss));
	Node_7_279:;
	return_value_medianFilter_0 = medianFilter();
	if (!((return_value_medianFilter_0 >= 601))) goto Node_7_320;
	return_value_SensorValue = SensorValue(2);
	if (((ambientIR + 50) >= return_value_SensorValue)) goto Node_7_320;
	motor[0] = (float)((40.0 * 1.3));
	motor[1] = 40.0f;
	brobot_signal_loss = (brobot_signal_loss + 1);
	__CPROVER_assume((brobot_signal_loss <= brobot_max_loss));
	signed int return_value_SensorValue_0;
	return_value_SensorValue_0 = SensorValue(4);
	__CPROVER_bool tmp_if_expr;
	if ((return_value_SensorValue_0 == 0)) goto Node_7_299;
	tmp_if_expr = (1 != 0);
	goto Node_7_301;
	Node_7_299:;
	return_value_SensorValue_1 = SensorValue(5);
	tmp_if_expr = ((return_value_SensorValue_1 != 0) ? 1 : 0 != 0);
	Node_7_301:;
	if (!tmp_if_expr) goto Node_7_315;
	backUp();
	stopWheels();
	return (State)(2);
	Node_7_315:;
	if ((1 != 0)) goto Node_7_279;
	Node_7_320:;
	return (State)(2);
}
State closeRangeApproach() {
	signed int return_value_medianFilter;
	signed int return_value_SensorValue;
	signed int return_value_SensorValue_1;
	Node_9_368:;
	return_value_medianFilter = medianFilter();
	if (!((return_value_medianFilter >= 141))) goto Node_9_407;
	return_value_SensorValue = SensorValue(2);
	if (((ambientIR + 20) >= return_value_SensorValue)) goto Node_9_407;
	motor[0] = (float)((20.0 * 1.3));
	motor[1] = 20.0f;
	brobot_signal_loss = (brobot_signal_loss + 1);
	__CPROVER_assume((brobot_signal_loss <= brobot_max_loss));
	signed int return_value_SensorValue_0;
	return_value_SensorValue_0 = SensorValue(4);
	__CPROVER_bool tmp_if_expr;
	if ((return_value_SensorValue_0 == 0)) goto Node_9_388;
	tmp_if_expr = (1 != 0);
	goto Node_9_390;
	Node_9_388:;
	return_value_SensorValue_1 = SensorValue(5);
	tmp_if_expr = ((return_value_SensorValue_1 != 0) ? 1 : 0 != 0);
	Node_9_390:;
	if (!tmp_if_expr) goto Node_9_402;
	backUp();
	stopWheels();
	return (State)(2);
	Node_9_402:;
	if ((1 != 0)) goto Node_9_368;
	Node_9_407:;
	return (State)(7);
}
signed int SensorValue(signed int sensor) {
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = __VERIFIER_nondet_signed_int();
	res = return_value___VERIFIER_nondet_unsigned_int;
	__CPROVER_assume(((0 <= res) && (res <= 65535)));
	return res;
}
State findAWall() {
	backUp();
	turnAround();
	signed int return_value_medianFilter;
	signed int return_value_medianFilter_0;
	signed int return_value_medianFilter_1;
	Node_11_432:;
	return_value_medianFilter = medianFilter();
	if (!((return_value_medianFilter >= 141))) goto Node_11_479;
	motor[0] = (float)((40.0 * 1.3));
	motor[1] = 40.0f;
	signed int return_value_SensorValue;
	return_value_SensorValue = SensorValue(4);
	if ((return_value_SensorValue == 0)) goto Node_11_455;
	motor[0] = (float)(-((25.0 * 1.3)));
	motor[1] = (float)(-25);
	wait1Msec(400);
	Node_11_446:;
	return_value_medianFilter_0 = medianFilter();
	if (!((return_value_medianFilter_0 >= 141))) goto Node_11_453;
	motor[0] = (float)(-((20.0 * 1.3)));
	motor[1] = 20.0f;
	if ((1 != 0)) goto Node_11_446;
	Node_11_453:;
	goto Node_11_479;
	Node_11_455:;
	signed int return_value_SensorValue_0;
	return_value_SensorValue_0 = SensorValue(5);
	if ((return_value_SensorValue_0 == 0)) goto Node_11_473;
	motor[0] = (float)(-((25.0 * 1.3)));
	motor[1] = (float)(-25);
	wait1Msec(400);
	Node_11_464:;
	return_value_medianFilter_1 = medianFilter();
	if (!((return_value_medianFilter_1 >= 141))) goto Node_11_471;
	motor[0] = (float)((20.0 * 1.3));
	motor[1] = (float)(-20);
	if ((1 != 0)) goto Node_11_464;
	Node_11_471:;
	goto Node_11_479;
	Node_11_473:;
	if ((1 != 0)) goto Node_11_432;
	Node_11_479:;
	stopWheels();
	return (State)(8);
}
State disposeOfTarget() {
	motor[2] = (float)(-10);
	wait1Msec(800);
	motor[3] = 20.0f;
	wait1Msec(1200);
	float tmp_assign;
	tmp_assign = 0.0f;
	motor[2] = tmp_assign;
	motor[3] = tmp_assign;
	return (State)(9);
}
void clearTimer(signed int t1) {
	// End of Function
}
void check_property() {
	(void)sizeof(signed int)  ;
	(void)sizeof(signed int)  ;
	if(!((state != 2))) printf("vioated property: Node_14_503\n"); fflush(stdout);
	assert((state != 2));
	// End of Function
}
State acquireTarget() {
	stopWheels();
	motor[2] = (float)(-20);
	wait1Msec(1500);
	motor[2] = 0.0f;
	motor[3] = (float)(-10);
	wait1Msec(1000);
	motor[3] = (float)(-30);
	wait1Msec(500);
	motor[3] = (float)(-10);
	wait1Msec(200);
	motor[2] = 30.0f;
	wait1Msec(900);
	motor[2] = 10.0f;
	return (State)(6);
}
signed int medianFilter() {
	signed int first;
	first = 0;
	signed int second;
	second = 0;
	signed int third;
	third = 0;
	first = SensorValue(1);
	wait1Msec(70);
	second = SensorValue(1);
	wait1Msec(70);
	third = SensorValue(1);
	wait1Msec(70);
	if (!((((first >= second) && (third >= first)) || ((second >= first) && (first >= third))))) goto Node_16_540;
	return first;
	Node_16_540:;
	if (!((((second >= first) && (third >= second)) || ((first >= second) && (second >= third))))) goto Node_16_547;
	return second;
	Node_16_547:;
	return third;
}
void backUp() {
	stopWheels();
	wait1Msec(400);
	motor[0] = (float)(-((25.0 * 1.3)));
	motor[1] = (float)(-25);
	wait1Msec(1500);
	stopWheels();
	// End of Function
}
void initialize() {
	brobot_max_loss = 5;
	// End of Function
}
void stopWheels() {
	float tmp_assign;
	tmp_assign = 0.0f;
	motor[1] = tmp_assign;
	motor[0] = tmp_assign;
	// End of Function
}
State taskComplete() {
	stopWheels();
	backUp();
	signed int i;
	i = 0;
	Node_20_579:;
	if ((i >= 3)) goto Node_20_587;
	motor[2] = 30.0f;
	wait1Msec(2000);
	motor[2] = (float)(-30);
	wait1Msec(1000);
	turnAround();
	i = (i + 1);
	goto Node_20_579;
	Node_20_587:;
	return (State)(0);
}
void turnAround() {
	stopWheels();
	motor[0] = (float)(-((30.0 * 1.3)));
	motor[1] = 30.0f;
	wait1Msec(1000);
	stopWheels();
	// End of Function
}
void wait1Msec(signed int sec) {
	// End of Function
}
void update_prop_automata() {
	if (!((state == 0))) goto Node_23_606;
	cycle = 0;
	if (!((((signed int)(machineState) == 4) || ((signed int)(machineState) == 5)))) goto Node_23_604;
	state = 1;
	Node_23_604:;
	goto Node_23_616;
	Node_23_606:;
	if (!((state == 1))) goto Node_23_615;
	cycle = (cycle + 1);
	if (!(((signed int)(machineState) == 9))) goto Node_23_611;
	state = 0;
	goto Node_23_614;
	Node_23_611:;
	if (!((cycle >= 20))) goto Node_23_613;
	state = 2;
	Node_23_613:;
	Node_23_614:;
	Node_23_615:;
	Node_23_616:;
	// End of Function
}
