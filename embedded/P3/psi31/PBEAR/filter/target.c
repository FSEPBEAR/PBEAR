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
signed int isAllReached=0;
State machineState=/*enum*/STANDBY;
float motor[4l];
signed int reachedStates[10l]={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
signed int sonarMax=0;
extern signed int __VERIFIER_nondet_signed_int();
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
	if (!((((first >= second) && (third >= first)) || ((second >= first) && (first >= third))))) goto Node_3_159;
	return first;
	Node_3_159:;
	if (!((((second >= first) && (third >= second)) || ((first >= second) && (second >= third))))) goto Node_3_166;
	return second;
	Node_3_166:;
	return third;
}
signed int SensorValue(signed int sensor) {
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = __VERIFIER_nondet_signed_int();
	__CPROVER_printf("__iv__test_case:%d", return_value___VERIFIER_nondet_unsigned_int);
	res = return_value___VERIFIER_nondet_unsigned_int;
	__CPROVER_assume(((0 <= res) && (res <= 65535)));
	return res;
}
void wait1Msec(signed int sec) {
	// End of Function
}
void initialize_0_1();
void standingBy_1_1();
void stopWheels_14_1();
void SensorValue_15_1(signed int sensor);
void update_prop_automata_11_1();
void check_property_12_1();
void primaryScan_2_1();
void clearTimer_80_1(signed int t1);
void time1_81_1(signed int t1);
void SensorValue_82_1(signed int sensor);
void SensorValue_84_1(signed int sensor);
void SensorValue_85_1(signed int sensor);
void time1_81_2(signed int t1);
void clearTimer_86_1(signed int t1);
void time1_87_1(signed int t1);
void SensorValue_88_1(signed int sensor);
void stopWheels_89_1();
void update_prop_automata_11_2();
void check_property_12_2();
void longRangeApproach_5_1();
void SensorValue_50_1(signed int sensor);
void SensorValue_52_1(signed int sensor);
void SensorValue_53_1(signed int sensor);
void SensorValue_50_2(signed int sensor);
void SensorValue_52_2(signed int sensor);
void backUp_54_1();
void stopWheels_100_1();
void wait1Msec_101_1(signed int sec);
void wait1Msec_102_1(signed int sec);
void stopWheels_103_1();
void stopWheels_55_1();
void update_prop_automata_11_3();
void check_property_12_3();
void secondaryScan_3_1();
void clearTimer_16_1(signed int t1);
void time1_17_1(signed int t1);
void SensorValue_18_1(signed int sensor);
void SensorValue_19_1(signed int sensor);
void time1_17_2(signed int t1);
void SensorValue_18_2(signed int sensor);
void time1_17_3(signed int t1);
void SensorValue_18_3(signed int sensor);
void SensorValue_19_2(signed int sensor);
void time1_17_4(signed int t1);
void SensorValue_18_4(signed int sensor);
void SensorValue_19_3(signed int sensor);
void time1_17_5(signed int t1);
void SensorValue_18_5(signed int sensor);
void time1_17_6(signed int t1);
void SensorValue_18_6(signed int sensor);
void SensorValue_19_4(signed int sensor);
void time1_17_7(signed int t1);
void SensorValue_18_7(signed int sensor);
void time1_17_8(signed int t1);
void SensorValue_18_8(signed int sensor);
void SensorValue_19_5(signed int sensor);
void time1_17_9(signed int t1);
void SensorValue_18_9(signed int sensor);
void time1_17_10(signed int t1);
void SensorValue_18_10(signed int sensor);
void SensorValue_19_6(signed int sensor);
void time1_17_11(signed int t1);
void SensorValue_18_11(signed int sensor);
void time1_17_12(signed int t1);
void SensorValue_18_12(signed int sensor);
void SensorValue_19_7(signed int sensor);
void time1_17_13(signed int t1);
void SensorValue_18_13(signed int sensor);
void time1_17_14(signed int t1);
void SensorValue_18_14(signed int sensor);
void SensorValue_19_8(signed int sensor);
void time1_17_15(signed int t1);
void SensorValue_18_15(signed int sensor);
void time1_17_16(signed int t1);
void SensorValue_18_16(signed int sensor);
void time1_17_17(signed int t1);
void SensorValue_18_17(signed int sensor);
void time1_17_18(signed int t1);
void SensorValue_18_18(signed int sensor);
void SensorValue_19_9(signed int sensor);
void time1_17_19(signed int t1);
void stopWheels_20_1();
void wait1Msec_21_1(signed int sec);
void clearTimer_22_1(signed int t1);
void time1_23_1(signed int t1);
void SensorValue_24_1(signed int sensor);
void SensorValue_25_1(signed int sensor);
void time1_23_2(signed int t1);
void SensorValue_24_2(signed int sensor);
void time1_23_3(signed int t1);
void SensorValue_24_3(signed int sensor);
void SensorValue_25_2(signed int sensor);
void time1_23_4(signed int t1);
void stopWheels_26_1();
void wait1Msec_27_1(signed int sec);
void clearTimer_28_1(signed int t1);
void time1_29_1(signed int t1);
void stopWheels_33_1();
void update_prop_automata_11_4();
void check_property_12_4();
void onPatrol_4_1();
void clearTimer_70_1(signed int t1);
void time1_71_1(signed int t1);
void SensorValue_72_1(signed int sensor);
void SensorValue_73_1(signed int sensor);
void time1_71_2(signed int t1);
void clearTimer_74_1(signed int t1);
void SensorValue_75_1(signed int sensor);
void stopWheels_76_1();
void wait1Msec_77_1(signed int sec);
void stopWheels_78_1();
void update_prop_automata_11_5();
void check_property_12_5();
void primaryScan_2_2();
void clearTimer_80_2(signed int t1);
void time1_81_3(signed int t1);
void clearTimer_86_2(signed int t1);
void time1_87_2(signed int t1);
void SensorValue_88_2(signed int sensor);
void time1_87_3(signed int t1);
void SensorValue_88_3(signed int sensor);
void stopWheels_89_2();
void update_prop_automata_11_6();
void check_property_12_6();
void longRangeApproach_5_2();
void update_prop_automata_11_7();
void check_property_12_7();
void closeRangeApproach_6_1();
void SensorValue_41_1(signed int sensor);
void update_prop_automata_11_8();
void check_property_12_8();
void acquireTarget_7_1();
void stopWheels_94_1();
void wait1Msec_95_1(signed int sec);
void wait1Msec_96_1(signed int sec);
void wait1Msec_97_1(signed int sec);
void wait1Msec_98_1(signed int sec);
void wait1Msec_99_1(signed int sec);
void update_prop_automata_11_9();
void check_property_12_9();
void findAWall_8_1();
void backUp_58_1();
void stopWheels_100_2();
void wait1Msec_101_2(signed int sec);
void wait1Msec_102_2(signed int sec);
void stopWheels_103_2();
void turnAround_59_1();
void stopWheels_109_1();
void wait1Msec_110_1(signed int sec);
void stopWheels_111_1();
void stopWheels_67_1();
void update_prop_automata_11_10();
void check_property_12_10();
void disposeOfTarget_9_1();
void wait1Msec_68_1(signed int sec);
void wait1Msec_69_1(signed int sec);
void update_prop_automata_11_11();
void check_property_12_11();
void taskComplete_10_1();
void stopWheels_104_1();
void backUp_105_1();
void stopWheels_100_3();
void wait1Msec_101_3(signed int sec);
void wait1Msec_102_3(signed int sec);
void stopWheels_103_3();
void wait1Msec_106_1(signed int sec);
void wait1Msec_107_1(signed int sec);
void turnAround_108_1();
void stopWheels_109_2();
void wait1Msec_110_2(signed int sec);
void stopWheels_111_2();
void wait1Msec_106_2(signed int sec);
void wait1Msec_107_2(signed int sec);
void turnAround_108_2();
void stopWheels_109_3();
void wait1Msec_110_3(signed int sec);
void stopWheels_111_3();
void wait1Msec_106_3(signed int sec);
void wait1Msec_107_3(signed int sec);
void turnAround_108_3();
void stopWheels_109_4();
void wait1Msec_110_4(signed int sec);
void stopWheels_111_4();
void update_prop_automata_11_12();
void check_property_12_12();
extern signed int __VERIFIER_nondet_signed_int();
int __iv__return_expr_main;
State __iv__return_expr_standingBy;
State __iv__return_expr_secondaryScan;
signed int __iv__return_expr_medianFilter;
State __iv__return_expr_closeRangeApproach;
State __iv__return_expr_longRangeApproach;
signed int __iv__return_expr_SensorValue;
State __iv__return_expr_findAWall;
State __iv__return_expr_disposeOfTarget;
State __iv__return_expr_onPatrol;
State __iv__return_expr_primaryScan;
signed int __iv__return_expr_time1;
State __iv__return_expr_acquireTarget;
State __iv__return_expr_taskComplete;
int main(){
	initialize_0_1();
	standingBy_1_1();
	machineState = 1; 
	update_prop_automata_11_1();
	check_property_12_1();
	primaryScan_2_1();
	machineState = 4; 
	update_prop_automata_11_2();
	check_property_12_2();
	longRangeApproach_5_1();
	machineState = 2; 
	update_prop_automata_11_3();
	check_property_12_3();
	secondaryScan_3_1();
	machineState = 3; 
	update_prop_automata_11_4();
	check_property_12_4();
	onPatrol_4_1();
	machineState = 1; 
	update_prop_automata_11_5();
	check_property_12_5();
	primaryScan_2_2();
	machineState = 4; 
	update_prop_automata_11_6();
	check_property_12_6();
	longRangeApproach_5_2();
	machineState = 5; 
	update_prop_automata_11_7();
	check_property_12_7();
	closeRangeApproach_6_1();
	machineState = 7; 
	update_prop_automata_11_8();
	check_property_12_8();
	acquireTarget_7_1();
	machineState = 6; 
	update_prop_automata_11_9();
	check_property_12_9();
	findAWall_8_1();
	machineState = 8; 
	update_prop_automata_11_10();
	check_property_12_10();
	disposeOfTarget_9_1();
	machineState = 9; 
	update_prop_automata_11_11();
	check_property_12_11();
	taskComplete_10_1();
	machineState = 0; 
	update_prop_automata_11_12();
	check_property_12_12();
}
void initialize_0_1(){
	brobot_max_loss = 5; 
}
void standingBy_1_1(){
	stopWheels_14_1();
	signed int return_value_SensorValue;
	SensorValue_15_1(3);
	return_value_SensorValue = 2048; 
	__iv__return_expr_standingBy = 1; 
}
void stopWheels_14_1(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void SensorValue_15_1(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 2048; 
	res = 2048; 
	__iv__return_expr_SensorValue = 2048; 
}
void update_prop_automata_11_1(){
	reachedStates[1] = 1; 
	isAllReached = 1; 
	signed int i;
	i = 0; 
	isAllReached = 0; 
}
void check_property_12_1(){
}
void primaryScan_2_1(){
	IRMax = 0; 
	sonarMax = 0; 
	clearTimer_80_1(0);
	signed int return_value_time1;
	time1_81_1(0);
	return_value_time1 = 0; 
	signed int return_value_SensorValue;
	SensorValue_82_1(2);
	return_value_SensorValue = 0; 
	signed int return_value_SensorValue_0;
	SensorValue_84_1(2);
	return_value_SensorValue_0 = 1; 
	SensorValue_85_1(2);
	ambientIR = 32742; 
	motor[0] = -39.000000; 
	motor[1] = 30.000000; 
	time1_81_2(0);
	return_value_time1 = 4001; 
	clearTimer_86_1(0);
	signed int return_value_time1_0;
	time1_87_1(0);
	return_value_time1_0 = 66; 
	signed int return_value_SensorValue_1;
	SensorValue_88_1(2);
	return_value_SensorValue_1 = 33408; 
	stopWheels_89_1();
	__iv__return_expr_primaryScan = 4; 
}
void clearTimer_80_1(signed int t1){
}
void time1_81_1(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_time1 = 0; 
}
void SensorValue_82_1(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void SensorValue_84_1(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_SensorValue = 1; 
}
void SensorValue_85_1(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 32742; 
	res = 32742; 
	__iv__return_expr_SensorValue = 32742; 
}
void time1_81_2(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 4001; 
	res = 4001; 
	__iv__return_expr_time1 = 4001; 
}
void clearTimer_86_1(signed int t1){
}
void time1_87_1(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 66; 
	res = 66; 
	__iv__return_expr_time1 = 66; 
}
void SensorValue_88_1(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 33408; 
	res = 33408; 
	__iv__return_expr_SensorValue = 33408; 
}
void stopWheels_89_1(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void update_prop_automata_11_2(){
	reachedStates[4] = 1; 
	isAllReached = 1; 
	signed int i;
	i = 0; 
	isAllReached = 0; 
}
void check_property_12_2(){
}
void longRangeApproach_5_1(){
	signed int return_value_medianFilter;
	__CPROVER_printf("__iv__stub_call:__iv__start"); return_value_medianFilter = medianFilter(); __CPROVER_printf("__iv__stub_call:__iv__end");
	signed int return_value_medianFilter_0;
	signed int return_value_SensorValue;
	signed int return_value_SensorValue_1;
	__CPROVER_assume(((return_value_medianFilter >= 601)));
	brobot_signal_loss = 1; 
	__CPROVER_printf("__iv__stub_call:__iv__start"); return_value_medianFilter_0 = medianFilter(); __CPROVER_printf("__iv__stub_call:__iv__end");
	__CPROVER_assume(!(!((return_value_medianFilter_0 >= 601))));
	SensorValue_50_1(2);
	return_value_SensorValue = 32848; 
	motor[0] = 52.000000; 
	motor[1] = 40.000000; 
	brobot_signal_loss = 2; 
	signed int return_value_SensorValue_0;
	SensorValue_52_1(4);
	return_value_SensorValue_0 = 0; 
	__CPROVER_bool tmp_if_expr;
	SensorValue_53_1(5);
	return_value_SensorValue_1 = 0; 
	tmp_if_expr = 0; 
	__CPROVER_printf("__iv__stub_call:__iv__start"); return_value_medianFilter_0 = medianFilter(); __CPROVER_printf("__iv__stub_call:__iv__end");
	__CPROVER_assume(!(!((return_value_medianFilter_0 >= 601))));
	SensorValue_50_2(2);
	return_value_SensorValue = 32832; 
	motor[0] = 52.000000; 
	motor[1] = 40.000000; 
	brobot_signal_loss = 3; 
	SensorValue_52_2(4);
	return_value_SensorValue_0 = 32768; 
	tmp_if_expr = 1; 
	backUp_54_1();
	stopWheels_55_1();
	__iv__return_expr_longRangeApproach = 2; 
}
void SensorValue_50_1(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 32848; 
	res = 32848; 
	__iv__return_expr_SensorValue = 32848; 
}
void SensorValue_52_1(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void SensorValue_53_1(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void SensorValue_50_2(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 32832; 
	res = 32832; 
	__iv__return_expr_SensorValue = 32832; 
}
void SensorValue_52_2(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 32768; 
	res = 32768; 
	__iv__return_expr_SensorValue = 32768; 
}
void backUp_54_1(){
	stopWheels_100_1();
	wait1Msec_101_1(400);
	motor[0] = -32.500000; 
	motor[1] = -25.000000; 
	wait1Msec_102_1(1500);
	stopWheels_103_1();
}
void stopWheels_100_1(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void wait1Msec_101_1(signed int sec){
}
void wait1Msec_102_1(signed int sec){
}
void stopWheels_103_1(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void stopWheels_55_1(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void update_prop_automata_11_3(){
	reachedStates[2] = 1; 
	isAllReached = 1; 
	signed int i;
	i = 0; 
	isAllReached = 0; 
}
void check_property_12_3(){
}
void secondaryScan_3_1(){
	IRMax = 0; 
	clearTimer_16_1(0);
	signed int return_value_time1;
	time1_17_1(0);
	return_value_time1 = 16; 
	signed int return_value_SensorValue;
	SensorValue_18_1(2);
	return_value_SensorValue = 2; 
	SensorValue_19_1(2);
	IRMax = 17; 
	motor[0] = 32.500000; 
	motor[1] = -25.000000; 
	time1_17_2(0);
	return_value_time1 = 512; 
	SensorValue_18_2(2);
	return_value_SensorValue = 16; 
	motor[0] = 32.500000; 
	motor[1] = -25.000000; 
	time1_17_3(0);
	return_value_time1 = 1; 
	SensorValue_18_3(2);
	return_value_SensorValue = 8208; 
	SensorValue_19_2(2);
	IRMax = 8; 
	motor[0] = 32.500000; 
	motor[1] = -25.000000; 
	time1_17_4(0);
	return_value_time1 = 1; 
	SensorValue_18_4(2);
	return_value_SensorValue = 49152; 
	SensorValue_19_3(2);
	IRMax = 8193; 
	motor[0] = 32.500000; 
	motor[1] = -25.000000; 
	time1_17_5(0);
	return_value_time1 = 4; 
	SensorValue_18_5(2);
	return_value_SensorValue = 8193; 
	motor[0] = 32.500000; 
	motor[1] = -25.000000; 
	time1_17_6(0);
	return_value_time1 = 1; 
	SensorValue_18_6(2);
	return_value_SensorValue = 8704; 
	SensorValue_19_4(2);
	IRMax = 28796; 
	motor[0] = 32.500000; 
	motor[1] = -25.000000; 
	time1_17_7(0);
	return_value_time1 = 1; 
	SensorValue_18_7(2);
	return_value_SensorValue = 28796; 
	motor[0] = 32.500000; 
	motor[1] = -25.000000; 
	time1_17_8(0);
	return_value_time1 = 1; 
	SensorValue_18_8(2);
	return_value_SensorValue = 36864; 
	SensorValue_19_5(2);
	IRMax = 5; 
	motor[0] = 32.500000; 
	motor[1] = -25.000000; 
	time1_17_9(0);
	return_value_time1 = 4; 
	SensorValue_18_9(2);
	return_value_SensorValue = 5; 
	motor[0] = 32.500000; 
	motor[1] = -25.000000; 
	time1_17_10(0);
	return_value_time1 = 60; 
	SensorValue_18_10(2);
	return_value_SensorValue = 32772; 
	SensorValue_19_6(2);
	IRMax = 5139; 
	motor[0] = 32.500000; 
	motor[1] = -25.000000; 
	time1_17_11(0);
	return_value_time1 = 2; 
	SensorValue_18_11(2);
	return_value_SensorValue = 5139; 
	motor[0] = 32.500000; 
	motor[1] = -25.000000; 
	time1_17_12(0);
	return_value_time1 = 1; 
	SensorValue_18_12(2);
	return_value_SensorValue = 32768; 
	SensorValue_19_7(2);
	IRMax = 25596; 
	motor[0] = 32.500000; 
	motor[1] = -25.000000; 
	time1_17_13(0);
	return_value_time1 = 58; 
	SensorValue_18_13(2);
	return_value_SensorValue = 25596; 
	motor[0] = 32.500000; 
	motor[1] = -25.000000; 
	time1_17_14(0);
	return_value_time1 = 16; 
	SensorValue_18_14(2);
	return_value_SensorValue = 33406; 
	SensorValue_19_8(2);
	IRMax = 37187; 
	motor[0] = 32.500000; 
	motor[1] = -25.000000; 
	time1_17_15(0);
	return_value_time1 = 8; 
	SensorValue_18_15(2);
	return_value_SensorValue = 37187; 
	motor[0] = 32.500000; 
	motor[1] = -25.000000; 
	time1_17_16(0);
	return_value_time1 = 32; 
	SensorValue_18_16(2);
	return_value_SensorValue = 37187; 
	motor[0] = 32.500000; 
	motor[1] = -25.000000; 
	time1_17_17(0);
	return_value_time1 = 12; 
	SensorValue_18_17(2);
	return_value_SensorValue = 36931; 
	motor[0] = 32.500000; 
	motor[1] = -25.000000; 
	time1_17_18(0);
	return_value_time1 = 4; 
	SensorValue_18_18(2);
	return_value_SensorValue = 41026; 
	SensorValue_19_9(2);
	IRMax = 5; 
	motor[0] = 32.500000; 
	motor[1] = -25.000000; 
	time1_17_19(0);
	return_value_time1 = 3008; 
	stopWheels_20_1();
	wait1Msec_21_1(200);
	clearTimer_22_1(0);
	signed int return_value_time1_0;
	time1_23_1(0);
	return_value_time1_0 = 1; 
	signed int return_value_SensorValue_0;
	SensorValue_24_1(2);
	return_value_SensorValue_0 = 5; 
	SensorValue_25_1(2);
	IRMax = 16896; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	time1_23_2(0);
	return_value_time1_0 = 369; 
	SensorValue_24_2(2);
	return_value_SensorValue_0 = 16400; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	time1_23_3(0);
	return_value_time1_0 = 2; 
	SensorValue_24_3(2);
	return_value_SensorValue_0 = 49152; 
	SensorValue_25_2(2);
	IRMax = 32768; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	time1_23_4(0);
	return_value_time1_0 = 6145; 
	stopWheels_26_1();
	wait1Msec_27_1(200);
	clearTimer_28_1(0);
	signed int return_value_time1_1;
	time1_29_1(0);
	return_value_time1_1 = 8192; 
	stopWheels_33_1();
	__iv__return_expr_secondaryScan = 3; 
}
void clearTimer_16_1(signed int t1){
}
void time1_17_1(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 16; 
	res = 16; 
	__iv__return_expr_time1 = 16; 
}
void SensorValue_18_1(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 2; 
	res = 2; 
	__iv__return_expr_SensorValue = 2; 
}
void SensorValue_19_1(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 17; 
	res = 17; 
	__iv__return_expr_SensorValue = 17; 
}
void time1_17_2(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 512; 
	res = 512; 
	__iv__return_expr_time1 = 512; 
}
void SensorValue_18_2(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 16; 
	res = 16; 
	__iv__return_expr_SensorValue = 16; 
}
void time1_17_3(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_18_3(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 8208; 
	res = 8208; 
	__iv__return_expr_SensorValue = 8208; 
}
void SensorValue_19_2(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 8; 
	res = 8; 
	__iv__return_expr_SensorValue = 8; 
}
void time1_17_4(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_18_4(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 49152; 
	res = 49152; 
	__iv__return_expr_SensorValue = 49152; 
}
void SensorValue_19_3(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 8193; 
	res = 8193; 
	__iv__return_expr_SensorValue = 8193; 
}
void time1_17_5(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 4; 
	res = 4; 
	__iv__return_expr_time1 = 4; 
}
void SensorValue_18_5(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 8193; 
	res = 8193; 
	__iv__return_expr_SensorValue = 8193; 
}
void time1_17_6(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_18_6(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 8704; 
	res = 8704; 
	__iv__return_expr_SensorValue = 8704; 
}
void SensorValue_19_4(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 28796; 
	res = 28796; 
	__iv__return_expr_SensorValue = 28796; 
}
void time1_17_7(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_18_7(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 28796; 
	res = 28796; 
	__iv__return_expr_SensorValue = 28796; 
}
void time1_17_8(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_18_8(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 36864; 
	res = 36864; 
	__iv__return_expr_SensorValue = 36864; 
}
void SensorValue_19_5(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 5; 
	res = 5; 
	__iv__return_expr_SensorValue = 5; 
}
void time1_17_9(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 4; 
	res = 4; 
	__iv__return_expr_time1 = 4; 
}
void SensorValue_18_9(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 5; 
	res = 5; 
	__iv__return_expr_SensorValue = 5; 
}
void time1_17_10(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 60; 
	res = 60; 
	__iv__return_expr_time1 = 60; 
}
void SensorValue_18_10(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 32772; 
	res = 32772; 
	__iv__return_expr_SensorValue = 32772; 
}
void SensorValue_19_6(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 5139; 
	res = 5139; 
	__iv__return_expr_SensorValue = 5139; 
}
void time1_17_11(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 2; 
	res = 2; 
	__iv__return_expr_time1 = 2; 
}
void SensorValue_18_11(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 5139; 
	res = 5139; 
	__iv__return_expr_SensorValue = 5139; 
}
void time1_17_12(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_18_12(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 32768; 
	res = 32768; 
	__iv__return_expr_SensorValue = 32768; 
}
void SensorValue_19_7(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 25596; 
	res = 25596; 
	__iv__return_expr_SensorValue = 25596; 
}
void time1_17_13(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 58; 
	res = 58; 
	__iv__return_expr_time1 = 58; 
}
void SensorValue_18_13(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 25596; 
	res = 25596; 
	__iv__return_expr_SensorValue = 25596; 
}
void time1_17_14(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 16; 
	res = 16; 
	__iv__return_expr_time1 = 16; 
}
void SensorValue_18_14(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 33406; 
	res = 33406; 
	__iv__return_expr_SensorValue = 33406; 
}
void SensorValue_19_8(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 37187; 
	res = 37187; 
	__iv__return_expr_SensorValue = 37187; 
}
void time1_17_15(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 8; 
	res = 8; 
	__iv__return_expr_time1 = 8; 
}
void SensorValue_18_15(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 37187; 
	res = 37187; 
	__iv__return_expr_SensorValue = 37187; 
}
void time1_17_16(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 32; 
	res = 32; 
	__iv__return_expr_time1 = 32; 
}
void SensorValue_18_16(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 37187; 
	res = 37187; 
	__iv__return_expr_SensorValue = 37187; 
}
void time1_17_17(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 12; 
	res = 12; 
	__iv__return_expr_time1 = 12; 
}
void SensorValue_18_17(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 36931; 
	res = 36931; 
	__iv__return_expr_SensorValue = 36931; 
}
void time1_17_18(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 4; 
	res = 4; 
	__iv__return_expr_time1 = 4; 
}
void SensorValue_18_18(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 41026; 
	res = 41026; 
	__iv__return_expr_SensorValue = 41026; 
}
void SensorValue_19_9(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 5; 
	res = 5; 
	__iv__return_expr_SensorValue = 5; 
}
void time1_17_19(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 3008; 
	res = 3008; 
	__iv__return_expr_time1 = 3008; 
}
void stopWheels_20_1(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void wait1Msec_21_1(signed int sec){
}
void clearTimer_22_1(signed int t1){
}
void time1_23_1(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_24_1(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 5; 
	res = 5; 
	__iv__return_expr_SensorValue = 5; 
}
void SensorValue_25_1(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 16896; 
	res = 16896; 
	__iv__return_expr_SensorValue = 16896; 
}
void time1_23_2(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 369; 
	res = 369; 
	__iv__return_expr_time1 = 369; 
}
void SensorValue_24_2(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 16400; 
	res = 16400; 
	__iv__return_expr_SensorValue = 16400; 
}
void time1_23_3(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 2; 
	res = 2; 
	__iv__return_expr_time1 = 2; 
}
void SensorValue_24_3(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 49152; 
	res = 49152; 
	__iv__return_expr_SensorValue = 49152; 
}
void SensorValue_25_2(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 32768; 
	res = 32768; 
	__iv__return_expr_SensorValue = 32768; 
}
void time1_23_4(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 6145; 
	res = 6145; 
	__iv__return_expr_time1 = 6145; 
}
void stopWheels_26_1(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void wait1Msec_27_1(signed int sec){
}
void clearTimer_28_1(signed int t1){
}
void time1_29_1(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 8192; 
	res = 8192; 
	__iv__return_expr_time1 = 8192; 
}
void stopWheels_33_1(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void update_prop_automata_11_4(){
	reachedStates[3] = 1; 
	isAllReached = 1; 
	signed int i;
	i = 0; 
	isAllReached = 0; 
}
void check_property_12_4(){
}
void onPatrol_4_1(){
	sonarMax = 0; 
	clearTimer_70_1(0);
	signed int return_value_time1;
	time1_71_1(0);
	return_value_time1 = 1; 
	signed int return_value_SensorValue;
	SensorValue_72_1(1);
	return_value_SensorValue = 1; 
	SensorValue_73_1(1);
	sonarMax = 21093; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	time1_71_2(0);
	return_value_time1 = 6208; 
	clearTimer_74_1(0);
	signed int return_value_SensorValue_0;
	SensorValue_75_1(1);
	return_value_SensorValue_0 = 32776; 
	stopWheels_76_1();
	motor[0] = 52.000000; 
	motor[1] = 40.000000; 
	wait1Msec_77_1(2500);
	stopWheels_78_1();
	__iv__return_expr_onPatrol = 1; 
}
void clearTimer_70_1(signed int t1){
}
void time1_71_1(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_72_1(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_SensorValue = 1; 
}
void SensorValue_73_1(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 21093; 
	res = 21093; 
	__iv__return_expr_SensorValue = 21093; 
}
void time1_71_2(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 6208; 
	res = 6208; 
	__iv__return_expr_time1 = 6208; 
}
void clearTimer_74_1(signed int t1){
}
void SensorValue_75_1(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 32776; 
	res = 32776; 
	__iv__return_expr_SensorValue = 32776; 
}
void stopWheels_76_1(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void wait1Msec_77_1(signed int sec){
}
void stopWheels_78_1(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void update_prop_automata_11_5(){
	reachedStates[1] = 2; 
	isAllReached = 1; 
	signed int i;
	i = 0; 
	isAllReached = 0; 
}
void check_property_12_5(){
}
void primaryScan_2_2(){
	IRMax = 0; 
	sonarMax = 0; 
	clearTimer_80_2(0);
	signed int return_value_time1;
	time1_81_3(0);
	return_value_time1 = 4001; 
	clearTimer_86_2(0);
	signed int return_value_time1_0;
	time1_87_2(0);
	return_value_time1_0 = 128; 
	signed int return_value_SensorValue_1;
	SensorValue_88_2(2);
	return_value_SensorValue_1 = 32792; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	brobot_signal_loss = 4; 
	time1_87_3(0);
	return_value_time1_0 = 417; 
	SensorValue_88_3(2);
	return_value_SensorValue_1 = 49152; 
	stopWheels_89_2();
	__iv__return_expr_primaryScan = 4; 
}
void clearTimer_80_2(signed int t1){
}
void time1_81_3(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 4001; 
	res = 4001; 
	__iv__return_expr_time1 = 4001; 
}
void clearTimer_86_2(signed int t1){
}
void time1_87_2(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 128; 
	res = 128; 
	__iv__return_expr_time1 = 128; 
}
void SensorValue_88_2(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 32792; 
	res = 32792; 
	__iv__return_expr_SensorValue = 32792; 
}
void time1_87_3(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 417; 
	res = 417; 
	__iv__return_expr_time1 = 417; 
}
void SensorValue_88_3(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 49152; 
	res = 49152; 
	__iv__return_expr_SensorValue = 49152; 
}
void stopWheels_89_2(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void update_prop_automata_11_6(){
	reachedStates[4] = 2; 
	isAllReached = 1; 
	signed int i;
	i = 0; 
	isAllReached = 0; 
}
void check_property_12_6(){
}
void longRangeApproach_5_2(){
	signed int return_value_medianFilter;
	__CPROVER_printf("__iv__stub_call:__iv__start"); return_value_medianFilter = medianFilter(); __CPROVER_printf("__iv__stub_call:__iv__end");
	signed int return_value_medianFilter_0;
	signed int return_value_SensorValue;
	signed int return_value_SensorValue_1;
	__CPROVER_assume(!((return_value_medianFilter >= 601)));
	__iv__return_expr_longRangeApproach = 5; 
}
void update_prop_automata_11_7(){
	reachedStates[5] = 1; 
	isAllReached = 1; 
	signed int i;
	i = 0; 
	isAllReached = 0; 
}
void check_property_12_7(){
}
void closeRangeApproach_6_1(){
	signed int return_value_medianFilter;
	signed int return_value_SensorValue;
	signed int return_value_SensorValue_1;
	__CPROVER_printf("__iv__stub_call:__iv__start"); return_value_medianFilter = medianFilter(); __CPROVER_printf("__iv__stub_call:__iv__end");
	__CPROVER_assume(!(!((return_value_medianFilter >= 141))));
	SensorValue_41_1(2);
	return_value_SensorValue = 32762; 
	__iv__return_expr_closeRangeApproach = 7; 
}
void SensorValue_41_1(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 32762; 
	res = 32762; 
	__iv__return_expr_SensorValue = 32762; 
}
void update_prop_automata_11_8(){
	reachedStates[7] = 1; 
	isAllReached = 1; 
	signed int i;
	i = 0; 
	isAllReached = 0; 
}
void check_property_12_8(){
}
void acquireTarget_7_1(){
	stopWheels_94_1();
	motor[2] = -20.000000; 
	wait1Msec_95_1(1500);
	motor[2] = 0.000000; 
	motor[3] = -10.000000; 
	wait1Msec_96_1(1000);
	motor[3] = -30.000000; 
	wait1Msec_97_1(500);
	motor[3] = -10.000000; 
	wait1Msec_98_1(200);
	motor[2] = 30.000000; 
	wait1Msec_99_1(900);
	motor[2] = 10.000000; 
	__iv__return_expr_acquireTarget = 6; 
}
void stopWheels_94_1(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void wait1Msec_95_1(signed int sec){
}
void wait1Msec_96_1(signed int sec){
}
void wait1Msec_97_1(signed int sec){
}
void wait1Msec_98_1(signed int sec){
}
void wait1Msec_99_1(signed int sec){
}
void update_prop_automata_11_9(){
	reachedStates[6] = 1; 
	isAllReached = 1; 
	signed int i;
	i = 0; 
	isAllReached = 0; 
}
void check_property_12_9(){
}
void findAWall_8_1(){
	backUp_58_1();
	turnAround_59_1();
	signed int return_value_medianFilter;
	signed int return_value_medianFilter_0;
	signed int return_value_medianFilter_1;
	__CPROVER_printf("__iv__stub_call:__iv__start"); return_value_medianFilter = medianFilter(); __CPROVER_printf("__iv__stub_call:__iv__end");
	__CPROVER_assume((!((return_value_medianFilter >= 141))));
	stopWheels_67_1();
	__iv__return_expr_findAWall = 8; 
}
void backUp_58_1(){
	stopWheels_100_2();
	wait1Msec_101_2(400);
	motor[0] = -32.500000; 
	motor[1] = -25.000000; 
	wait1Msec_102_2(1500);
	stopWheels_103_2();
}
void stopWheels_100_2(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void wait1Msec_101_2(signed int sec){
}
void wait1Msec_102_2(signed int sec){
}
void stopWheels_103_2(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void turnAround_59_1(){
	stopWheels_109_1();
	motor[0] = -39.000000; 
	motor[1] = 30.000000; 
	wait1Msec_110_1(1000);
	stopWheels_111_1();
}
void stopWheels_109_1(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void wait1Msec_110_1(signed int sec){
}
void stopWheels_111_1(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void stopWheels_67_1(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void update_prop_automata_11_10(){
	reachedStates[8] = 1; 
	isAllReached = 1; 
	signed int i;
	i = 0; 
	isAllReached = 0; 
}
void check_property_12_10(){
}
void disposeOfTarget_9_1(){
	motor[2] = -10.000000; 
	wait1Msec_68_1(800);
	motor[3] = 20.000000; 
	wait1Msec_69_1(1200);
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[2] = 0.000000; 
	motor[3] = 0.000000; 
	__iv__return_expr_disposeOfTarget = 9; 
}
void wait1Msec_68_1(signed int sec){
}
void wait1Msec_69_1(signed int sec){
}
void update_prop_automata_11_11(){
	reachedStates[9] = 1; 
	isAllReached = 1; 
	signed int i;
	i = 0; 
	isAllReached = 0; 
}
void check_property_12_11(){
}
void taskComplete_10_1(){
	stopWheels_104_1();
	backUp_105_1();
	signed int i;
	i = 0; 
	motor[2] = 30.000000; 
	wait1Msec_106_1(2000);
	motor[2] = -30.000000; 
	wait1Msec_107_1(1000);
	turnAround_108_1();
	i = 1; 
	motor[2] = 30.000000; 
	wait1Msec_106_2(2000);
	motor[2] = -30.000000; 
	wait1Msec_107_2(1000);
	turnAround_108_2();
	i = 2; 
	motor[2] = 30.000000; 
	wait1Msec_106_3(2000);
	motor[2] = -30.000000; 
	wait1Msec_107_3(1000);
	turnAround_108_3();
	i = 3; 
	__iv__return_expr_taskComplete = 0; 
}
void stopWheels_104_1(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void backUp_105_1(){
	stopWheels_100_3();
	wait1Msec_101_3(400);
	motor[0] = -32.500000; 
	motor[1] = -25.000000; 
	wait1Msec_102_3(1500);
	stopWheels_103_3();
}
void stopWheels_100_3(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void wait1Msec_101_3(signed int sec){
}
void wait1Msec_102_3(signed int sec){
}
void stopWheels_103_3(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void wait1Msec_106_1(signed int sec){
}
void wait1Msec_107_1(signed int sec){
}
void turnAround_108_1(){
	stopWheels_109_2();
	motor[0] = -39.000000; 
	motor[1] = 30.000000; 
	wait1Msec_110_2(1000);
	stopWheels_111_2();
}
void stopWheels_109_2(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void wait1Msec_110_2(signed int sec){
}
void stopWheels_111_2(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void wait1Msec_106_2(signed int sec){
}
void wait1Msec_107_2(signed int sec){
}
void turnAround_108_2(){
	stopWheels_109_3();
	motor[0] = -39.000000; 
	motor[1] = 30.000000; 
	wait1Msec_110_3(1000);
	stopWheels_111_3();
}
void stopWheels_109_3(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void wait1Msec_110_3(signed int sec){
}
void stopWheels_111_3(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void wait1Msec_106_3(signed int sec){
}
void wait1Msec_107_3(signed int sec){
}
void turnAround_108_3(){
	stopWheels_109_4();
	motor[0] = -39.000000; 
	motor[1] = 30.000000; 
	wait1Msec_110_4(1000);
	stopWheels_111_4();
}
void stopWheels_109_4(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void wait1Msec_110_4(signed int sec){
}
void stopWheels_111_4(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void update_prop_automata_11_12(){
	reachedStates[0] = 1; 
	isAllReached = 1; 
	signed int i;
	i = 0; 
	i = 1; 
	i = 2; 
	i = 3; 
	i = 4; 
	i = 5; 
	i = 6; 
	i = 7; 
	i = 8; 
	i = 9; 
	i = 10; 
}
void check_property_12_12(){
	__CPROVER_printf("violated property: Node_12_433"); assert(0);
}
