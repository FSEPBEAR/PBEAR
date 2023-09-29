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
extern signed int __VERIFIER_nondet_signed_int();
signed int SensorValue(signed int sensor) {
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = __VERIFIER_nondet_signed_int();
	__CPROVER_printf("__iv__test_case:%d", return_value___VERIFIER_nondet_unsigned_int);
	res = return_value___VERIFIER_nondet_unsigned_int;
	__CPROVER_assume(((0 <= res) && (res <= 65535)));
	return res;
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
void wait1Msec(signed int sec) {
	// End of Function
}
void initialize_0_1();
void standingBy_1_1();
void stopWheels_16_1();
void SensorValue_17_1(signed int sensor);
void update_prop_automata_11_1();
void check_property_12_1();
void primaryScan_2_1();
void clearTimer_36_1(signed int t1);
void time1_37_1(signed int t1);
void SensorValue_38_1(signed int sensor);
void SensorValue_40_1(signed int sensor);
void SensorValue_41_1(signed int sensor);
void time1_37_2(signed int t1);
void SensorValue_38_2(signed int sensor);
void SensorValue_40_2(signed int sensor);
void time1_37_3(signed int t1);
void SensorValue_38_3(signed int sensor);
void SensorValue_40_3(signed int sensor);
void SensorValue_41_2(signed int sensor);
void time1_37_4(signed int t1);
void SensorValue_38_4(signed int sensor);
void SensorValue_40_4(signed int sensor);
void SensorValue_41_3(signed int sensor);
void time1_37_5(signed int t1);
void SensorValue_38_5(signed int sensor);
void SensorValue_40_5(signed int sensor);
void SensorValue_41_4(signed int sensor);
void time1_37_6(signed int t1);
void SensorValue_38_6(signed int sensor);
void SensorValue_40_6(signed int sensor);
void time1_37_7(signed int t1);
void clearTimer_42_1(signed int t1);
void time1_43_1(signed int t1);
void SensorValue_44_1(signed int sensor);
void time1_43_2(signed int t1);
void stopWheels_47_1();
void update_prop_automata_11_2();
void check_property_12_2();
void onPatrol_4_1();
void clearTimer_48_1(signed int t1);
void time1_49_1(signed int t1);
void clearTimer_52_1(signed int t1);
void SensorValue_53_1(signed int sensor);
void stopWheels_54_1();
void wait1Msec_55_1(signed int sec);
void stopWheels_56_1();
void update_prop_automata_11_3();
void check_property_12_3();
void primaryScan_2_2();
void clearTimer_36_2(signed int t1);
void time1_37_8(signed int t1);
void clearTimer_42_2(signed int t1);
void time1_43_3(signed int t1);
void SensorValue_44_2(signed int sensor);
void time1_43_4(signed int t1);
void SensorValue_44_3(signed int sensor);
void stopWheels_45_1();
void update_prop_automata_11_4();
void check_property_12_4();
void longRangeApproach_5_1();
void SensorValue_60_1(signed int sensor);
void SensorValue_62_1(signed int sensor);
void SensorValue_63_1(signed int sensor);
void backUp_64_1();
void stopWheels_100_1();
void wait1Msec_101_1(signed int sec);
void wait1Msec_102_1(signed int sec);
void stopWheels_103_1();
void stopWheels_65_1();
void update_prop_automata_11_5();
void check_property_12_5();
void secondaryScan_3_1();
void clearTimer_18_1(signed int t1);
void time1_19_1(signed int t1);
void SensorValue_20_1(signed int sensor);
void time1_19_2(signed int t1);
void stopWheels_22_1();
void wait1Msec_23_1(signed int sec);
void clearTimer_24_1(signed int t1);
void time1_25_1(signed int t1);
void SensorValue_26_1(signed int sensor);
void SensorValue_27_1(signed int sensor);
void time1_25_2(signed int t1);
void stopWheels_28_1();
void wait1Msec_29_1(signed int sec);
void clearTimer_30_1(signed int t1);
void time1_31_1(signed int t1);
void SensorValue_32_1(signed int sensor);
void stopWheels_33_1();
void update_prop_automata_11_6();
void check_property_12_6();
void closeRangeApproach_6_1();
void SensorValue_67_1(signed int sensor);
void SensorValue_69_1(signed int sensor);
void backUp_71_1();
void stopWheels_100_2();
void wait1Msec_101_2(signed int sec);
void wait1Msec_102_2(signed int sec);
void stopWheels_103_2();
void stopWheels_72_1();
void update_prop_automata_11_7();
void check_property_12_7();
void secondaryScan_3_2();
void clearTimer_18_2(signed int t1);
void time1_19_3(signed int t1);
void SensorValue_20_2(signed int sensor);
void time1_19_4(signed int t1);
void SensorValue_20_3(signed int sensor);
void SensorValue_21_1(signed int sensor);
void time1_19_5(signed int t1);
void SensorValue_20_4(signed int sensor);
void time1_19_6(signed int t1);
void SensorValue_20_5(signed int sensor);
void time1_19_7(signed int t1);
void SensorValue_20_6(signed int sensor);
void time1_19_8(signed int t1);
void SensorValue_20_7(signed int sensor);
void time1_19_9(signed int t1);
void SensorValue_20_8(signed int sensor);
void SensorValue_21_2(signed int sensor);
void time1_19_10(signed int t1);
void SensorValue_20_9(signed int sensor);
void time1_19_11(signed int t1);
void SensorValue_20_10(signed int sensor);
void time1_19_12(signed int t1);
void SensorValue_20_11(signed int sensor);
void time1_19_13(signed int t1);
void SensorValue_20_12(signed int sensor);
void time1_19_14(signed int t1);
void SensorValue_20_13(signed int sensor);
void SensorValue_21_3(signed int sensor);
void time1_19_15(signed int t1);
void SensorValue_20_14(signed int sensor);
void time1_19_16(signed int t1);
void SensorValue_20_15(signed int sensor);
void time1_19_17(signed int t1);
void SensorValue_20_16(signed int sensor);
void time1_19_18(signed int t1);
void SensorValue_20_17(signed int sensor);
void time1_19_19(signed int t1);
void SensorValue_20_18(signed int sensor);
void time1_19_20(signed int t1);
void SensorValue_20_19(signed int sensor);
void SensorValue_21_4(signed int sensor);
void time1_19_21(signed int t1);
void stopWheels_22_2();
void wait1Msec_23_2(signed int sec);
void clearTimer_24_2(signed int t1);
void time1_25_3(signed int t1);
void SensorValue_26_2(signed int sensor);
void time1_25_4(signed int t1);
void SensorValue_26_3(signed int sensor);
void SensorValue_27_2(signed int sensor);
void time1_25_5(signed int t1);
void SensorValue_26_4(signed int sensor);
void SensorValue_27_3(signed int sensor);
void time1_25_6(signed int t1);
void SensorValue_26_5(signed int sensor);
void SensorValue_27_4(signed int sensor);
void time1_25_7(signed int t1);
void SensorValue_26_6(signed int sensor);
void time1_25_8(signed int t1);
void SensorValue_26_7(signed int sensor);
void time1_25_9(signed int t1);
void SensorValue_26_8(signed int sensor);
void SensorValue_27_5(signed int sensor);
void time1_25_10(signed int t1);
void SensorValue_26_9(signed int sensor);
void SensorValue_27_6(signed int sensor);
void time1_25_11(signed int t1);
void SensorValue_26_10(signed int sensor);
void time1_25_12(signed int t1);
void SensorValue_26_11(signed int sensor);
void time1_25_13(signed int t1);
void SensorValue_26_12(signed int sensor);
void time1_25_14(signed int t1);
void SensorValue_26_13(signed int sensor);
void time1_25_15(signed int t1);
void SensorValue_26_14(signed int sensor);
void time1_25_16(signed int t1);
void SensorValue_26_15(signed int sensor);
void time1_25_17(signed int t1);
void SensorValue_26_16(signed int sensor);
void time1_25_18(signed int t1);
void SensorValue_26_17(signed int sensor);
void time1_25_19(signed int t1);
void SensorValue_26_18(signed int sensor);
void time1_25_20(signed int t1);
void SensorValue_26_19(signed int sensor);
void time1_25_21(signed int t1);
void SensorValue_26_20(signed int sensor);
void SensorValue_27_7(signed int sensor);
void time1_25_22(signed int t1);
void SensorValue_26_21(signed int sensor);
void time1_25_23(signed int t1);
void SensorValue_26_22(signed int sensor);
void time1_25_24(signed int t1);
void SensorValue_26_23(signed int sensor);
void SensorValue_27_8(signed int sensor);
void time1_25_25(signed int t1);
void SensorValue_26_24(signed int sensor);
void time1_25_26(signed int t1);
void SensorValue_26_25(signed int sensor);
void time1_25_27(signed int t1);
void SensorValue_26_26(signed int sensor);
void time1_25_28(signed int t1);
void SensorValue_26_27(signed int sensor);
void time1_25_29(signed int t1);
void stopWheels_28_2();
void wait1Msec_29_2(signed int sec);
void clearTimer_30_2(signed int t1);
void time1_31_2(signed int t1);
void stopWheels_35_1();
void update_prop_automata_11_8();
void check_property_12_8();
void onPatrol_4_2();
void clearTimer_48_2(signed int t1);
void time1_49_2(signed int t1);
void SensorValue_50_1(signed int sensor);
void SensorValue_51_1(signed int sensor);
void time1_49_3(signed int t1);
void SensorValue_50_2(signed int sensor);
void time1_49_4(signed int t1);
void SensorValue_50_3(signed int sensor);
void time1_49_5(signed int t1);
void SensorValue_50_4(signed int sensor);
void SensorValue_51_2(signed int sensor);
void time1_49_6(signed int t1);
void SensorValue_50_5(signed int sensor);
void time1_49_7(signed int t1);
void SensorValue_50_6(signed int sensor);
void SensorValue_51_3(signed int sensor);
void time1_49_8(signed int t1);
void SensorValue_50_7(signed int sensor);
void time1_49_9(signed int t1);
void SensorValue_50_8(signed int sensor);
void time1_49_10(signed int t1);
void SensorValue_50_9(signed int sensor);
void time1_49_11(signed int t1);
void SensorValue_50_10(signed int sensor);
void SensorValue_51_4(signed int sensor);
void time1_49_12(signed int t1);
void SensorValue_50_11(signed int sensor);
void time1_49_13(signed int t1);
void clearTimer_52_2(signed int t1);
void SensorValue_53_2(signed int sensor);
void SensorValue_53_3(signed int sensor);
void SensorValue_53_4(signed int sensor);
void SensorValue_53_5(signed int sensor);
void SensorValue_53_6(signed int sensor);
void SensorValue_53_7(signed int sensor);
void SensorValue_53_8(signed int sensor);
void SensorValue_53_9(signed int sensor);
void SensorValue_53_10(signed int sensor);
void SensorValue_53_11(signed int sensor);
void SensorValue_53_12(signed int sensor);
void SensorValue_53_13(signed int sensor);
void SensorValue_53_14(signed int sensor);
void SensorValue_53_15(signed int sensor);
void SensorValue_53_16(signed int sensor);
void SensorValue_53_17(signed int sensor);
void stopWheels_54_2();
void wait1Msec_55_2(signed int sec);
void stopWheels_56_2();
void update_prop_automata_11_9();
void check_property_12_9();
void primaryScan_2_3();
void clearTimer_36_3(signed int t1);
void time1_37_9(signed int t1);
void SensorValue_38_7(signed int sensor);
void SensorValue_40_7(signed int sensor);
void SensorValue_41_5(signed int sensor);
void time1_37_10(signed int t1);
void clearTimer_42_3(signed int t1);
void time1_43_5(signed int t1);
void stopWheels_47_2();
void update_prop_automata_11_10();
void check_property_12_10();
void onPatrol_4_3();
void clearTimer_48_3(signed int t1);
void time1_49_14(signed int t1);
void clearTimer_52_3(signed int t1);
void SensorValue_53_18(signed int sensor);
void stopWheels_54_3();
void wait1Msec_55_3(signed int sec);
void stopWheels_56_3();
void update_prop_automata_11_11();
void check_property_12_11();
void primaryScan_2_4();
void clearTimer_36_4(signed int t1);
void time1_37_11(signed int t1);
void SensorValue_38_8(signed int sensor);
void SensorValue_39_1(signed int sensor);
void SensorValue_40_8(signed int sensor);
void time1_37_12(signed int t1);
void clearTimer_42_4(signed int t1);
void time1_43_6(signed int t1);
void stopWheels_47_3();
void update_prop_automata_11_12();
void check_property_12_12();
void onPatrol_4_4();
void clearTimer_48_4(signed int t1);
void time1_49_15(signed int t1);
void SensorValue_50_12(signed int sensor);
void SensorValue_51_5(signed int sensor);
void time1_49_16(signed int t1);
void clearTimer_52_4(signed int t1);
void SensorValue_53_19(signed int sensor);
void stopWheels_54_4();
void wait1Msec_55_4(signed int sec);
void stopWheels_56_4();
void update_prop_automata_11_13();
void check_property_12_13();
void primaryScan_2_5();
void clearTimer_36_5(signed int t1);
void time1_37_13(signed int t1);
void clearTimer_42_5(signed int t1);
void time1_43_7(signed int t1);
void stopWheels_47_4();
void update_prop_automata_11_14();
void check_property_12_14();
void onPatrol_4_5();
void clearTimer_48_5(signed int t1);
void time1_49_17(signed int t1);
void SensorValue_50_13(signed int sensor);
void SensorValue_51_6(signed int sensor);
void time1_49_18(signed int t1);
void SensorValue_50_14(signed int sensor);
void SensorValue_51_7(signed int sensor);
void time1_49_19(signed int t1);
void SensorValue_50_15(signed int sensor);
void SensorValue_51_8(signed int sensor);
void time1_49_20(signed int t1);
void SensorValue_50_16(signed int sensor);
void time1_49_21(signed int t1);
void clearTimer_52_5(signed int t1);
void SensorValue_53_20(signed int sensor);
void SensorValue_53_21(signed int sensor);
void stopWheels_54_5();
void wait1Msec_55_5(signed int sec);
void stopWheels_56_5();
void update_prop_automata_11_15();
void check_property_12_15();
void primaryScan_2_6();
void clearTimer_36_6(signed int t1);
void time1_37_14(signed int t1);
void clearTimer_42_6(signed int t1);
void time1_43_8(signed int t1);
void stopWheels_47_5();
void update_prop_automata_11_16();
void check_property_12_16();
void onPatrol_4_6();
void clearTimer_48_6(signed int t1);
void time1_49_22(signed int t1);
void SensorValue_50_17(signed int sensor);
void SensorValue_51_9(signed int sensor);
void time1_49_23(signed int t1);
void SensorValue_50_18(signed int sensor);
void SensorValue_51_10(signed int sensor);
void time1_49_24(signed int t1);
void clearTimer_52_6(signed int t1);
void SensorValue_53_22(signed int sensor);
void stopWheels_54_6();
void wait1Msec_55_6(signed int sec);
void stopWheels_56_6();
void update_prop_automata_11_17();
void check_property_12_17();
void primaryScan_2_7();
void clearTimer_36_7(signed int t1);
void time1_37_15(signed int t1);
void SensorValue_38_9(signed int sensor);
void SensorValue_40_9(signed int sensor);
void time1_37_16(signed int t1);
void SensorValue_38_10(signed int sensor);
void SensorValue_39_2(signed int sensor);
void SensorValue_40_10(signed int sensor);
void time1_37_17(signed int t1);
void SensorValue_38_11(signed int sensor);
void SensorValue_39_3(signed int sensor);
void SensorValue_40_11(signed int sensor);
void time1_37_18(signed int t1);
void SensorValue_38_12(signed int sensor);
void SensorValue_40_12(signed int sensor);
void time1_37_19(signed int t1);
void SensorValue_38_13(signed int sensor);
void SensorValue_40_13(signed int sensor);
void time1_37_20(signed int t1);
void SensorValue_38_14(signed int sensor);
void SensorValue_40_14(signed int sensor);
void time1_37_21(signed int t1);
void SensorValue_38_15(signed int sensor);
void SensorValue_40_15(signed int sensor);
void time1_37_22(signed int t1);
void SensorValue_38_16(signed int sensor);
void SensorValue_40_16(signed int sensor);
void time1_37_23(signed int t1);
void clearTimer_42_7(signed int t1);
void time1_43_9(signed int t1);
void stopWheels_47_6();
void update_prop_automata_11_18();
void check_property_12_18();
void onPatrol_4_7();
void clearTimer_48_7(signed int t1);
void time1_49_25(signed int t1);
void clearTimer_52_7(signed int t1);
void SensorValue_53_23(signed int sensor);
void stopWheels_54_7();
void wait1Msec_55_7(signed int sec);
void stopWheels_56_7();
void update_prop_automata_11_19();
void check_property_12_19();
void primaryScan_2_8();
void clearTimer_36_8(signed int t1);
void time1_37_24(signed int t1);
void SensorValue_38_17(signed int sensor);
void SensorValue_39_4(signed int sensor);
void SensorValue_40_17(signed int sensor);
void time1_37_25(signed int t1);
void clearTimer_42_8(signed int t1);
void time1_43_10(signed int t1);
void stopWheels_47_7();
void update_prop_automata_11_20();
void check_property_12_20();
void onPatrol_4_8();
void clearTimer_48_8(signed int t1);
void time1_49_26(signed int t1);
void clearTimer_52_8(signed int t1);
void SensorValue_53_24(signed int sensor);
void stopWheels_54_8();
void wait1Msec_55_8(signed int sec);
void stopWheels_56_8();
void update_prop_automata_11_21();
void check_property_12_21();
void primaryScan_2_9();
void clearTimer_36_9(signed int t1);
void time1_37_26(signed int t1);
void SensorValue_38_18(signed int sensor);
void SensorValue_40_18(signed int sensor);
void time1_37_27(signed int t1);
void SensorValue_38_19(signed int sensor);
void SensorValue_39_5(signed int sensor);
void SensorValue_40_19(signed int sensor);
void time1_37_28(signed int t1);
void SensorValue_38_20(signed int sensor);
void SensorValue_40_20(signed int sensor);
void time1_37_29(signed int t1);
void SensorValue_38_21(signed int sensor);
void SensorValue_39_6(signed int sensor);
void SensorValue_40_21(signed int sensor);
void time1_37_30(signed int t1);
void SensorValue_38_22(signed int sensor);
void SensorValue_40_22(signed int sensor);
void time1_37_31(signed int t1);
void SensorValue_38_23(signed int sensor);
void SensorValue_40_23(signed int sensor);
void time1_37_32(signed int t1);
void SensorValue_38_24(signed int sensor);
void SensorValue_40_24(signed int sensor);
void time1_37_33(signed int t1);
void SensorValue_38_25(signed int sensor);
void SensorValue_40_25(signed int sensor);
void time1_37_34(signed int t1);
void SensorValue_38_26(signed int sensor);
void SensorValue_40_26(signed int sensor);
void time1_37_35(signed int t1);
void SensorValue_38_27(signed int sensor);
void SensorValue_39_7(signed int sensor);
void SensorValue_40_27(signed int sensor);
void time1_37_36(signed int t1);
void SensorValue_38_28(signed int sensor);
void SensorValue_40_28(signed int sensor);
void time1_37_37(signed int t1);
void SensorValue_38_29(signed int sensor);
void SensorValue_39_8(signed int sensor);
void SensorValue_40_29(signed int sensor);
void time1_37_38(signed int t1);
void SensorValue_38_30(signed int sensor);
void SensorValue_40_30(signed int sensor);
void time1_37_39(signed int t1);
void SensorValue_38_31(signed int sensor);
void SensorValue_39_9(signed int sensor);
void SensorValue_40_31(signed int sensor);
void time1_37_40(signed int t1);
void SensorValue_38_32(signed int sensor);
void SensorValue_39_10(signed int sensor);
void SensorValue_40_32(signed int sensor);
void time1_37_41(signed int t1);
void SensorValue_38_33(signed int sensor);
void SensorValue_40_33(signed int sensor);
void time1_37_42(signed int t1);
void SensorValue_38_34(signed int sensor);
void SensorValue_40_34(signed int sensor);
void time1_37_43(signed int t1);
void SensorValue_38_35(signed int sensor);
void SensorValue_40_35(signed int sensor);
void time1_37_44(signed int t1);
void SensorValue_38_36(signed int sensor);
void SensorValue_40_36(signed int sensor);
void time1_37_45(signed int t1);
void SensorValue_38_37(signed int sensor);
void SensorValue_40_37(signed int sensor);
void time1_37_46(signed int t1);
void SensorValue_38_38(signed int sensor);
void SensorValue_39_11(signed int sensor);
void SensorValue_40_38(signed int sensor);
void time1_37_47(signed int t1);
void SensorValue_38_39(signed int sensor);
void SensorValue_39_12(signed int sensor);
void SensorValue_40_39(signed int sensor);
void time1_37_48(signed int t1);
void SensorValue_38_40(signed int sensor);
void SensorValue_39_13(signed int sensor);
void SensorValue_40_40(signed int sensor);
void time1_37_49(signed int t1);
void SensorValue_38_41(signed int sensor);
void SensorValue_39_14(signed int sensor);
void SensorValue_40_41(signed int sensor);
void time1_37_50(signed int t1);
void SensorValue_38_42(signed int sensor);
void SensorValue_39_15(signed int sensor);
void SensorValue_40_42(signed int sensor);
void time1_37_51(signed int t1);
void SensorValue_38_43(signed int sensor);
void SensorValue_40_43(signed int sensor);
void time1_37_52(signed int t1);
void SensorValue_38_44(signed int sensor);
void SensorValue_40_44(signed int sensor);
void time1_37_53(signed int t1);
void clearTimer_42_9(signed int t1);
void time1_43_11(signed int t1);
void stopWheels_47_8();
void update_prop_automata_11_22();
void check_property_12_22();
void onPatrol_4_9();
void clearTimer_48_9(signed int t1);
void time1_49_27(signed int t1);
void clearTimer_52_9(signed int t1);
void SensorValue_53_25(signed int sensor);
void stopWheels_54_9();
void wait1Msec_55_9(signed int sec);
void stopWheels_56_9();
void update_prop_automata_11_23();
void check_property_12_23();
void primaryScan_2_10();
void clearTimer_36_10(signed int t1);
void time1_37_54(signed int t1);
void SensorValue_38_45(signed int sensor);
void SensorValue_40_45(signed int sensor);
void time1_37_55(signed int t1);
void clearTimer_42_10(signed int t1);
void time1_43_12(signed int t1);
void stopWheels_47_9();
void update_prop_automata_11_24();
void check_property_12_24();
extern signed int __VERIFIER_nondet_signed_int();
int __iv__return_expr_main;
signed int __iv__return_expr_time1;
State __iv__return_expr_standingBy;
State __iv__return_expr_secondaryScan;
State __iv__return_expr_primaryScan;
State __iv__return_expr_onPatrol;
State __iv__return_expr_longRangeApproach;
State __iv__return_expr_closeRangeApproach;
signed int __iv__return_expr_SensorValue;
State __iv__return_expr_findAWall;
State __iv__return_expr_disposeOfTarget;
State __iv__return_expr_acquireTarget;
signed int __iv__return_expr_medianFilter;
State __iv__return_expr_taskComplete;
int main(){
	initialize_0_1();
	standingBy_1_1();
	machineState = 1; 
	update_prop_automata_11_1();
	check_property_12_1();
	primaryScan_2_1();
	machineState = 3; 
	update_prop_automata_11_2();
	check_property_12_2();
	onPatrol_4_1();
	machineState = 1; 
	update_prop_automata_11_3();
	check_property_12_3();
	primaryScan_2_2();
	machineState = 4; 
	update_prop_automata_11_4();
	check_property_12_4();
	longRangeApproach_5_1();
	machineState = 2; 
	update_prop_automata_11_5();
	check_property_12_5();
	secondaryScan_3_1();
	machineState = 5; 
	update_prop_automata_11_6();
	check_property_12_6();
	closeRangeApproach_6_1();
	machineState = 2; 
	update_prop_automata_11_7();
	check_property_12_7();
	secondaryScan_3_2();
	machineState = 3; 
	update_prop_automata_11_8();
	check_property_12_8();
	onPatrol_4_2();
	machineState = 1; 
	update_prop_automata_11_9();
	check_property_12_9();
	primaryScan_2_3();
	machineState = 3; 
	update_prop_automata_11_10();
	check_property_12_10();
	onPatrol_4_3();
	machineState = 1; 
	update_prop_automata_11_11();
	check_property_12_11();
	primaryScan_2_4();
	machineState = 3; 
	update_prop_automata_11_12();
	check_property_12_12();
	onPatrol_4_4();
	machineState = 1; 
	update_prop_automata_11_13();
	check_property_12_13();
	primaryScan_2_5();
	machineState = 3; 
	update_prop_automata_11_14();
	check_property_12_14();
	onPatrol_4_5();
	machineState = 1; 
	update_prop_automata_11_15();
	check_property_12_15();
	primaryScan_2_6();
	machineState = 3; 
	update_prop_automata_11_16();
	check_property_12_16();
	onPatrol_4_6();
	machineState = 1; 
	update_prop_automata_11_17();
	check_property_12_17();
	primaryScan_2_7();
	machineState = 3; 
	update_prop_automata_11_18();
	check_property_12_18();
	onPatrol_4_7();
	machineState = 1; 
	update_prop_automata_11_19();
	check_property_12_19();
	primaryScan_2_8();
	machineState = 3; 
	update_prop_automata_11_20();
	check_property_12_20();
	onPatrol_4_8();
	machineState = 1; 
	update_prop_automata_11_21();
	check_property_12_21();
	primaryScan_2_9();
	machineState = 3; 
	update_prop_automata_11_22();
	check_property_12_22();
	onPatrol_4_9();
	machineState = 1; 
	update_prop_automata_11_23();
	check_property_12_23();
	primaryScan_2_10();
	machineState = 3; 
	update_prop_automata_11_24();
	check_property_12_24();
}
void initialize_0_1(){
	brobot_max_loss = 5; 
}
void standingBy_1_1(){
	stopWheels_16_1();
	signed int return_value_SensorValue;
	SensorValue_17_1(3);
	return_value_SensorValue = 4; 
	__iv__return_expr_standingBy = 1; 
}
void stopWheels_16_1(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void SensorValue_17_1(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 4; 
	res = 4; 
	__iv__return_expr_SensorValue = 4; 
}
void update_prop_automata_11_1(){
	cycle = 0; 
}
void check_property_12_1(){
}
void primaryScan_2_1(){
	IRMax = 0; 
	sonarMax = 0; 
	clearTimer_36_1(0);
	signed int return_value_time1;
	time1_37_1(0);
	return_value_time1 = 2; 
	signed int return_value_SensorValue;
	SensorValue_38_1(2);
	return_value_SensorValue = 0; 
	signed int return_value_SensorValue_0;
	SensorValue_40_1(2);
	return_value_SensorValue_0 = 1; 
	SensorValue_41_1(2);
	ambientIR = 387; 
	motor[0] = -39.000000; 
	motor[1] = 30.000000; 
	time1_37_2(0);
	return_value_time1 = 32; 
	SensorValue_38_2(2);
	return_value_SensorValue = 0; 
	SensorValue_40_2(2);
	return_value_SensorValue_0 = 387; 
	motor[0] = -39.000000; 
	motor[1] = 30.000000; 
	time1_37_3(0);
	return_value_time1 = 2; 
	SensorValue_38_3(2);
	return_value_SensorValue = 0; 
	SensorValue_40_3(2);
	return_value_SensorValue_0 = 131; 
	SensorValue_41_2(2);
	ambientIR = 30470; 
	motor[0] = -39.000000; 
	motor[1] = 30.000000; 
	time1_37_4(0);
	return_value_time1 = 1; 
	SensorValue_38_4(2);
	return_value_SensorValue = 0; 
	SensorValue_40_4(2);
	return_value_SensorValue_0 = 26375; 
	SensorValue_41_3(2);
	ambientIR = 22278; 
	motor[0] = -39.000000; 
	motor[1] = 30.000000; 
	time1_37_5(0);
	return_value_time1 = 16; 
	SensorValue_38_5(2);
	return_value_SensorValue = 0; 
	SensorValue_40_5(2);
	return_value_SensorValue_0 = 1830; 
	SensorValue_41_4(2);
	ambientIR = 18318; 
	motor[0] = -39.000000; 
	motor[1] = 30.000000; 
	time1_37_6(0);
	return_value_time1 = 1; 
	SensorValue_38_6(2);
	return_value_SensorValue = 0; 
	SensorValue_40_6(2);
	return_value_SensorValue_0 = 18318; 
	motor[0] = -39.000000; 
	motor[1] = 30.000000; 
	time1_37_7(0);
	return_value_time1 = 4097; 
	clearTimer_42_1(0);
	signed int return_value_time1_0;
	time1_43_1(0);
	return_value_time1_0 = 4; 
	signed int return_value_SensorValue_1;
	SensorValue_44_1(2);
	return_value_SensorValue_1 = 18130; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	brobot_signal_loss = 1; 
	time1_43_2(0);
	return_value_time1_0 = 32896; 
	stopWheels_47_1();
	__iv__return_expr_primaryScan = 3; 
}
void clearTimer_36_1(signed int t1){
}
void time1_37_1(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 2; 
	res = 2; 
	__iv__return_expr_time1 = 2; 
}
void SensorValue_38_1(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void SensorValue_40_1(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_SensorValue = 1; 
}
void SensorValue_41_1(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 387; 
	res = 387; 
	__iv__return_expr_SensorValue = 387; 
}
void time1_37_2(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 32; 
	res = 32; 
	__iv__return_expr_time1 = 32; 
}
void SensorValue_38_2(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void SensorValue_40_2(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 387; 
	res = 387; 
	__iv__return_expr_SensorValue = 387; 
}
void time1_37_3(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 2; 
	res = 2; 
	__iv__return_expr_time1 = 2; 
}
void SensorValue_38_3(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void SensorValue_40_3(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 131; 
	res = 131; 
	__iv__return_expr_SensorValue = 131; 
}
void SensorValue_41_2(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 30470; 
	res = 30470; 
	__iv__return_expr_SensorValue = 30470; 
}
void time1_37_4(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_38_4(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void SensorValue_40_4(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 26375; 
	res = 26375; 
	__iv__return_expr_SensorValue = 26375; 
}
void SensorValue_41_3(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 22278; 
	res = 22278; 
	__iv__return_expr_SensorValue = 22278; 
}
void time1_37_5(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 16; 
	res = 16; 
	__iv__return_expr_time1 = 16; 
}
void SensorValue_38_5(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void SensorValue_40_5(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1830; 
	res = 1830; 
	__iv__return_expr_SensorValue = 1830; 
}
void SensorValue_41_4(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 18318; 
	res = 18318; 
	__iv__return_expr_SensorValue = 18318; 
}
void time1_37_6(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_38_6(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void SensorValue_40_6(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 18318; 
	res = 18318; 
	__iv__return_expr_SensorValue = 18318; 
}
void time1_37_7(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 4097; 
	res = 4097; 
	__iv__return_expr_time1 = 4097; 
}
void clearTimer_42_1(signed int t1){
}
void time1_43_1(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 4; 
	res = 4; 
	__iv__return_expr_time1 = 4; 
}
void SensorValue_44_1(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 18130; 
	res = 18130; 
	__iv__return_expr_SensorValue = 18130; 
}
void time1_43_2(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 32896; 
	res = 32896; 
	__iv__return_expr_time1 = 32896; 
}
void stopWheels_47_1(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void update_prop_automata_11_2(){
	cycle = 0; 
}
void check_property_12_2(){
}
void onPatrol_4_1(){
	sonarMax = 0; 
	clearTimer_48_1(0);
	signed int return_value_time1;
	time1_49_1(0);
	return_value_time1 = 6145; 
	clearTimer_52_1(0);
	signed int return_value_SensorValue_0;
	SensorValue_53_1(1);
	return_value_SensorValue_0 = 32664; 
	stopWheels_54_1();
	motor[0] = 52.000000; 
	motor[1] = 40.000000; 
	wait1Msec_55_1(2500);
	stopWheels_56_1();
	__iv__return_expr_onPatrol = 1; 
}
void clearTimer_48_1(signed int t1){
}
void time1_49_1(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 6145; 
	res = 6145; 
	__iv__return_expr_time1 = 6145; 
}
void clearTimer_52_1(signed int t1){
}
void SensorValue_53_1(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 32664; 
	res = 32664; 
	__iv__return_expr_SensorValue = 32664; 
}
void stopWheels_54_1(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void wait1Msec_55_1(signed int sec){
}
void stopWheels_56_1(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void update_prop_automata_11_3(){
	cycle = 0; 
}
void check_property_12_3(){
}
void primaryScan_2_2(){
	IRMax = 0; 
	sonarMax = 0; 
	clearTimer_36_2(0);
	signed int return_value_time1;
	time1_37_8(0);
	return_value_time1 = 32772; 
	clearTimer_42_2(0);
	signed int return_value_time1_0;
	time1_43_3(0);
	return_value_time1_0 = 1; 
	signed int return_value_SensorValue_1;
	SensorValue_44_2(2);
	return_value_SensorValue_1 = 512; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	brobot_signal_loss = 2; 
	time1_43_4(0);
	return_value_time1_0 = 1; 
	SensorValue_44_3(2);
	return_value_SensorValue_1 = 18369; 
	stopWheels_45_1();
	__iv__return_expr_primaryScan = 4; 
}
void clearTimer_36_2(signed int t1){
}
void time1_37_8(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 32772; 
	res = 32772; 
	__iv__return_expr_time1 = 32772; 
}
void clearTimer_42_2(signed int t1){
}
void time1_43_3(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_44_2(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 512; 
	res = 512; 
	__iv__return_expr_SensorValue = 512; 
}
void time1_43_4(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_44_3(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 18369; 
	res = 18369; 
	__iv__return_expr_SensorValue = 18369; 
}
void stopWheels_45_1(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void update_prop_automata_11_4(){
	cycle = 0; 
	state = 1; 
}
void check_property_12_4(){
}
void longRangeApproach_5_1(){
	signed int return_value_medianFilter;
	__CPROVER_printf("__iv__stub_call:__iv__start"); return_value_medianFilter = medianFilter(); __CPROVER_printf("__iv__stub_call:__iv__end");
	signed int return_value_medianFilter_0;
	signed int return_value_SensorValue;
	signed int return_value_SensorValue_1;
	__CPROVER_assume(((return_value_medianFilter >= 601)));
	brobot_signal_loss = 3; 
	__CPROVER_printf("__iv__stub_call:__iv__start"); return_value_medianFilter_0 = medianFilter(); __CPROVER_printf("__iv__stub_call:__iv__end");
	__CPROVER_assume(!(!((return_value_medianFilter_0 >= 601))));
	SensorValue_60_1(2);
	return_value_SensorValue = 18371; 
	motor[0] = 52.000000; 
	motor[1] = 40.000000; 
	brobot_signal_loss = 4; 
	signed int return_value_SensorValue_0;
	SensorValue_62_1(4);
	return_value_SensorValue_0 = 0; 
	__CPROVER_bool tmp_if_expr;
	SensorValue_63_1(5);
	return_value_SensorValue_1 = 16384; 
	tmp_if_expr = 1; 
	backUp_64_1();
	stopWheels_65_1();
	__iv__return_expr_longRangeApproach = 2; 
}
void SensorValue_60_1(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 18371; 
	res = 18371; 
	__iv__return_expr_SensorValue = 18371; 
}
void SensorValue_62_1(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void SensorValue_63_1(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 16384; 
	res = 16384; 
	__iv__return_expr_SensorValue = 16384; 
}
void backUp_64_1(){
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
void stopWheels_65_1(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void update_prop_automata_11_5(){
	cycle = 1; 
}
void check_property_12_5(){
}
void secondaryScan_3_1(){
	IRMax = 0; 
	clearTimer_18_1(0);
	signed int return_value_time1;
	time1_19_1(0);
	return_value_time1 = 1; 
	signed int return_value_SensorValue;
	SensorValue_20_1(2);
	return_value_SensorValue = 0; 
	motor[0] = 32.500000; 
	motor[1] = -25.000000; 
	time1_19_2(0);
	return_value_time1 = 3001; 
	stopWheels_22_1();
	wait1Msec_23_1(200);
	clearTimer_24_1(0);
	signed int return_value_time1_0;
	time1_25_1(0);
	return_value_time1_0 = 1; 
	signed int return_value_SensorValue_0;
	SensorValue_26_1(2);
	return_value_SensorValue_0 = 1; 
	SensorValue_27_1(2);
	IRMax = 32775; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	time1_25_2(0);
	return_value_time1_0 = 6001; 
	stopWheels_28_1();
	wait1Msec_29_1(200);
	clearTimer_30_1(0);
	signed int return_value_time1_1;
	time1_31_1(0);
	return_value_time1_1 = 1; 
	signed int return_value_SensorValue_1;
	SensorValue_32_1(2);
	return_value_SensorValue_1 = 32759; 
	stopWheels_33_1();
	__iv__return_expr_secondaryScan = 5; 
}
void clearTimer_18_1(signed int t1){
}
void time1_19_1(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_20_1(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void time1_19_2(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 3001; 
	res = 3001; 
	__iv__return_expr_time1 = 3001; 
}
void stopWheels_22_1(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void wait1Msec_23_1(signed int sec){
}
void clearTimer_24_1(signed int t1){
}
void time1_25_1(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_26_1(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_SensorValue = 1; 
}
void SensorValue_27_1(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 32775; 
	res = 32775; 
	__iv__return_expr_SensorValue = 32775; 
}
void time1_25_2(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 6001; 
	res = 6001; 
	__iv__return_expr_time1 = 6001; 
}
void stopWheels_28_1(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void wait1Msec_29_1(signed int sec){
}
void clearTimer_30_1(signed int t1){
}
void time1_31_1(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_32_1(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 32759; 
	res = 32759; 
	__iv__return_expr_SensorValue = 32759; 
}
void stopWheels_33_1(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void update_prop_automata_11_6(){
	cycle = 2; 
}
void check_property_12_6(){
}
void closeRangeApproach_6_1(){
	signed int return_value_medianFilter;
	signed int return_value_SensorValue;
	signed int return_value_SensorValue_1;
	__CPROVER_printf("__iv__stub_call:__iv__start"); return_value_medianFilter = medianFilter(); __CPROVER_printf("__iv__stub_call:__iv__end");
	__CPROVER_assume(!(!((return_value_medianFilter >= 141))));
	SensorValue_67_1(2);
	return_value_SensorValue = 20258; 
	motor[0] = 26.000000; 
	motor[1] = 20.000000; 
	brobot_signal_loss = 5; 
	signed int return_value_SensorValue_0;
	SensorValue_69_1(4);
	return_value_SensorValue_0 = 32768; 
	__CPROVER_bool tmp_if_expr;
	tmp_if_expr = 1; 
	backUp_71_1();
	stopWheels_72_1();
	__iv__return_expr_closeRangeApproach = 2; 
}
void SensorValue_67_1(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 20258; 
	res = 20258; 
	__iv__return_expr_SensorValue = 20258; 
}
void SensorValue_69_1(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 32768; 
	res = 32768; 
	__iv__return_expr_SensorValue = 32768; 
}
void backUp_71_1(){
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
void stopWheels_72_1(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void update_prop_automata_11_7(){
	cycle = 3; 
}
void check_property_12_7(){
}
void secondaryScan_3_2(){
	IRMax = 0; 
	clearTimer_18_2(0);
	signed int return_value_time1;
	time1_19_3(0);
	return_value_time1 = 953; 
	signed int return_value_SensorValue;
	SensorValue_20_2(2);
	return_value_SensorValue = 0; 
	motor[0] = 32.500000; 
	motor[1] = -25.000000; 
	time1_19_4(0);
	return_value_time1 = 1; 
	SensorValue_20_3(2);
	return_value_SensorValue = 1; 
	SensorValue_21_1(2);
	IRMax = 3; 
	motor[0] = 32.500000; 
	motor[1] = -25.000000; 
	time1_19_5(0);
	return_value_time1 = 1; 
	SensorValue_20_4(2);
	return_value_SensorValue = 2; 
	motor[0] = 32.500000; 
	motor[1] = -25.000000; 
	time1_19_6(0);
	return_value_time1 = 1; 
	SensorValue_20_5(2);
	return_value_SensorValue = 2; 
	motor[0] = 32.500000; 
	motor[1] = -25.000000; 
	time1_19_7(0);
	return_value_time1 = 1; 
	SensorValue_20_6(2);
	return_value_SensorValue = 2; 
	motor[0] = 32.500000; 
	motor[1] = -25.000000; 
	time1_19_8(0);
	return_value_time1 = 1; 
	SensorValue_20_7(2);
	return_value_SensorValue = 2; 
	motor[0] = 32.500000; 
	motor[1] = -25.000000; 
	time1_19_9(0);
	return_value_time1 = 1; 
	SensorValue_20_8(2);
	return_value_SensorValue = 8194; 
	SensorValue_21_2(2);
	IRMax = 4096; 
	motor[0] = 32.500000; 
	motor[1] = -25.000000; 
	time1_19_10(0);
	return_value_time1 = 1; 
	SensorValue_20_9(2);
	return_value_SensorValue = 1; 
	motor[0] = 32.500000; 
	motor[1] = -25.000000; 
	time1_19_11(0);
	return_value_time1 = 1; 
	SensorValue_20_10(2);
	return_value_SensorValue = 1; 
	motor[0] = 32.500000; 
	motor[1] = -25.000000; 
	time1_19_12(0);
	return_value_time1 = 1; 
	SensorValue_20_11(2);
	return_value_SensorValue = 1; 
	motor[0] = 32.500000; 
	motor[1] = -25.000000; 
	time1_19_13(0);
	return_value_time1 = 1; 
	SensorValue_20_12(2);
	return_value_SensorValue = 1; 
	motor[0] = 32.500000; 
	motor[1] = -25.000000; 
	time1_19_14(0);
	return_value_time1 = 1; 
	SensorValue_20_13(2);
	return_value_SensorValue = 4097; 
	SensorValue_21_3(2);
	IRMax = 3; 
	motor[0] = 32.500000; 
	motor[1] = -25.000000; 
	time1_19_15(0);
	return_value_time1 = 1; 
	SensorValue_20_14(2);
	return_value_SensorValue = 2; 
	motor[0] = 32.500000; 
	motor[1] = -25.000000; 
	time1_19_16(0);
	return_value_time1 = 1; 
	SensorValue_20_15(2);
	return_value_SensorValue = 2; 
	motor[0] = 32.500000; 
	motor[1] = -25.000000; 
	time1_19_17(0);
	return_value_time1 = 57; 
	SensorValue_20_16(2);
	return_value_SensorValue = 2; 
	motor[0] = 32.500000; 
	motor[1] = -25.000000; 
	time1_19_18(0);
	return_value_time1 = 185; 
	SensorValue_20_17(2);
	return_value_SensorValue = 3; 
	motor[0] = 32.500000; 
	motor[1] = -25.000000; 
	time1_19_19(0);
	return_value_time1 = 1; 
	SensorValue_20_18(2);
	return_value_SensorValue = 2; 
	motor[0] = 32.500000; 
	motor[1] = -25.000000; 
	time1_19_20(0);
	return_value_time1 = 1; 
	SensorValue_20_19(2);
	return_value_SensorValue = 8194; 
	SensorValue_21_4(2);
	IRMax = 2; 
	motor[0] = 32.500000; 
	motor[1] = -25.000000; 
	time1_19_21(0);
	return_value_time1 = 32769; 
	stopWheels_22_2();
	wait1Msec_23_2(200);
	clearTimer_24_2(0);
	signed int return_value_time1_0;
	time1_25_3(0);
	return_value_time1_0 = 1; 
	signed int return_value_SensorValue_0;
	SensorValue_26_2(2);
	return_value_SensorValue_0 = 1; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	time1_25_4(0);
	return_value_time1_0 = 2; 
	SensorValue_26_3(2);
	return_value_SensorValue_0 = 3; 
	SensorValue_27_2(2);
	IRMax = 2; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	time1_25_5(0);
	return_value_time1_0 = 1; 
	SensorValue_26_4(2);
	return_value_SensorValue_0 = 3; 
	SensorValue_27_3(2);
	IRMax = 0; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	time1_25_6(0);
	return_value_time1_0 = 0; 
	SensorValue_26_5(2);
	return_value_SensorValue_0 = 1; 
	SensorValue_27_4(2);
	IRMax = 2562; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	time1_25_7(0);
	return_value_time1_0 = 1; 
	SensorValue_26_6(2);
	return_value_SensorValue_0 = 2561; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	time1_25_8(0);
	return_value_time1_0 = 1; 
	SensorValue_26_7(2);
	return_value_SensorValue_0 = 16; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	time1_25_9(0);
	return_value_time1_0 = 1; 
	SensorValue_26_8(2);
	return_value_SensorValue_0 = 2562; 
	SensorValue_27_5(2);
	IRMax = 2562; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	time1_25_10(0);
	return_value_time1_0 = 113; 
	SensorValue_26_9(2);
	return_value_SensorValue_0 = 2625; 
	SensorValue_27_6(2);
	IRMax = 32770; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	time1_25_11(0);
	return_value_time1_0 = 113; 
	SensorValue_26_10(2);
	return_value_SensorValue_0 = 32769; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	time1_25_12(0);
	return_value_time1_0 = 1; 
	SensorValue_26_11(2);
	return_value_SensorValue_0 = 3; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	time1_25_13(0);
	return_value_time1_0 = 1; 
	SensorValue_26_12(2);
	return_value_SensorValue_0 = 32769; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	time1_25_14(0);
	return_value_time1_0 = 0; 
	SensorValue_26_13(2);
	return_value_SensorValue_0 = 32769; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	time1_25_15(0);
	return_value_time1_0 = 1; 
	SensorValue_26_14(2);
	return_value_SensorValue_0 = 256; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	time1_25_16(0);
	return_value_time1_0 = 1; 
	SensorValue_26_15(2);
	return_value_SensorValue_0 = 32; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	time1_25_17(0);
	return_value_time1_0 = 0; 
	SensorValue_26_16(2);
	return_value_SensorValue_0 = 32769; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	time1_25_18(0);
	return_value_time1_0 = 1; 
	SensorValue_26_17(2);
	return_value_SensorValue_0 = 3; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	time1_25_19(0);
	return_value_time1_0 = 1; 
	SensorValue_26_18(2);
	return_value_SensorValue_0 = 32769; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	time1_25_20(0);
	return_value_time1_0 = 1; 
	SensorValue_26_19(2);
	return_value_SensorValue_0 = 34; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	time1_25_21(0);
	return_value_time1_0 = 1; 
	SensorValue_26_20(2);
	return_value_SensorValue_0 = 32771; 
	SensorValue_27_7(2);
	IRMax = 64; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	time1_25_22(0);
	return_value_time1_0 = 1; 
	SensorValue_26_21(2);
	return_value_SensorValue_0 = 1; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	time1_25_23(0);
	return_value_time1_0 = 1; 
	SensorValue_26_22(2);
	return_value_SensorValue_0 = 32; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	time1_25_24(0);
	return_value_time1_0 = 1; 
	SensorValue_26_23(2);
	return_value_SensorValue_0 = 65; 
	SensorValue_27_8(2);
	IRMax = 16384; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	time1_25_25(0);
	return_value_time1_0 = 1; 
	SensorValue_26_24(2);
	return_value_SensorValue_0 = 1; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	time1_25_26(0);
	return_value_time1_0 = 1; 
	SensorValue_26_25(2);
	return_value_SensorValue_0 = 0; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	time1_25_27(0);
	return_value_time1_0 = 1; 
	SensorValue_26_26(2);
	return_value_SensorValue_0 = 1; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	time1_25_28(0);
	return_value_time1_0 = 0; 
	SensorValue_26_27(2);
	return_value_SensorValue_0 = 2048; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	time1_25_29(0);
	return_value_time1_0 = 16512; 
	stopWheels_28_2();
	wait1Msec_29_2(200);
	clearTimer_30_2(0);
	signed int return_value_time1_1;
	time1_31_2(0);
	return_value_time1_1 = 6016; 
	stopWheels_35_1();
	__iv__return_expr_secondaryScan = 3; 
}
void clearTimer_18_2(signed int t1){
}
void time1_19_3(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 953; 
	res = 953; 
	__iv__return_expr_time1 = 953; 
}
void SensorValue_20_2(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void time1_19_4(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_20_3(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_SensorValue = 1; 
}
void SensorValue_21_1(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 3; 
	res = 3; 
	__iv__return_expr_SensorValue = 3; 
}
void time1_19_5(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_20_4(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 2; 
	res = 2; 
	__iv__return_expr_SensorValue = 2; 
}
void time1_19_6(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_20_5(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 2; 
	res = 2; 
	__iv__return_expr_SensorValue = 2; 
}
void time1_19_7(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_20_6(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 2; 
	res = 2; 
	__iv__return_expr_SensorValue = 2; 
}
void time1_19_8(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_20_7(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 2; 
	res = 2; 
	__iv__return_expr_SensorValue = 2; 
}
void time1_19_9(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_20_8(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 8194; 
	res = 8194; 
	__iv__return_expr_SensorValue = 8194; 
}
void SensorValue_21_2(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 4096; 
	res = 4096; 
	__iv__return_expr_SensorValue = 4096; 
}
void time1_19_10(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_20_9(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_SensorValue = 1; 
}
void time1_19_11(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_20_10(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_SensorValue = 1; 
}
void time1_19_12(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_20_11(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_SensorValue = 1; 
}
void time1_19_13(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_20_12(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_SensorValue = 1; 
}
void time1_19_14(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_20_13(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 4097; 
	res = 4097; 
	__iv__return_expr_SensorValue = 4097; 
}
void SensorValue_21_3(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 3; 
	res = 3; 
	__iv__return_expr_SensorValue = 3; 
}
void time1_19_15(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_20_14(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 2; 
	res = 2; 
	__iv__return_expr_SensorValue = 2; 
}
void time1_19_16(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_20_15(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 2; 
	res = 2; 
	__iv__return_expr_SensorValue = 2; 
}
void time1_19_17(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 57; 
	res = 57; 
	__iv__return_expr_time1 = 57; 
}
void SensorValue_20_16(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 2; 
	res = 2; 
	__iv__return_expr_SensorValue = 2; 
}
void time1_19_18(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 185; 
	res = 185; 
	__iv__return_expr_time1 = 185; 
}
void SensorValue_20_17(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 3; 
	res = 3; 
	__iv__return_expr_SensorValue = 3; 
}
void time1_19_19(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_20_18(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 2; 
	res = 2; 
	__iv__return_expr_SensorValue = 2; 
}
void time1_19_20(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_20_19(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 8194; 
	res = 8194; 
	__iv__return_expr_SensorValue = 8194; 
}
void SensorValue_21_4(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 2; 
	res = 2; 
	__iv__return_expr_SensorValue = 2; 
}
void time1_19_21(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 32769; 
	res = 32769; 
	__iv__return_expr_time1 = 32769; 
}
void stopWheels_22_2(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void wait1Msec_23_2(signed int sec){
}
void clearTimer_24_2(signed int t1){
}
void time1_25_3(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_26_2(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_SensorValue = 1; 
}
void time1_25_4(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 2; 
	res = 2; 
	__iv__return_expr_time1 = 2; 
}
void SensorValue_26_3(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 3; 
	res = 3; 
	__iv__return_expr_SensorValue = 3; 
}
void SensorValue_27_2(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 2; 
	res = 2; 
	__iv__return_expr_SensorValue = 2; 
}
void time1_25_5(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_26_4(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 3; 
	res = 3; 
	__iv__return_expr_SensorValue = 3; 
}
void SensorValue_27_3(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void time1_25_6(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_time1 = 0; 
}
void SensorValue_26_5(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_SensorValue = 1; 
}
void SensorValue_27_4(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 2562; 
	res = 2562; 
	__iv__return_expr_SensorValue = 2562; 
}
void time1_25_7(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_26_6(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 2561; 
	res = 2561; 
	__iv__return_expr_SensorValue = 2561; 
}
void time1_25_8(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_26_7(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 16; 
	res = 16; 
	__iv__return_expr_SensorValue = 16; 
}
void time1_25_9(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_26_8(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 2562; 
	res = 2562; 
	__iv__return_expr_SensorValue = 2562; 
}
void SensorValue_27_5(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 2562; 
	res = 2562; 
	__iv__return_expr_SensorValue = 2562; 
}
void time1_25_10(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 113; 
	res = 113; 
	__iv__return_expr_time1 = 113; 
}
void SensorValue_26_9(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 2625; 
	res = 2625; 
	__iv__return_expr_SensorValue = 2625; 
}
void SensorValue_27_6(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 32770; 
	res = 32770; 
	__iv__return_expr_SensorValue = 32770; 
}
void time1_25_11(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 113; 
	res = 113; 
	__iv__return_expr_time1 = 113; 
}
void SensorValue_26_10(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 32769; 
	res = 32769; 
	__iv__return_expr_SensorValue = 32769; 
}
void time1_25_12(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_26_11(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 3; 
	res = 3; 
	__iv__return_expr_SensorValue = 3; 
}
void time1_25_13(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_26_12(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 32769; 
	res = 32769; 
	__iv__return_expr_SensorValue = 32769; 
}
void time1_25_14(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_time1 = 0; 
}
void SensorValue_26_13(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 32769; 
	res = 32769; 
	__iv__return_expr_SensorValue = 32769; 
}
void time1_25_15(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_26_14(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 256; 
	res = 256; 
	__iv__return_expr_SensorValue = 256; 
}
void time1_25_16(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_26_15(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 32; 
	res = 32; 
	__iv__return_expr_SensorValue = 32; 
}
void time1_25_17(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_time1 = 0; 
}
void SensorValue_26_16(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 32769; 
	res = 32769; 
	__iv__return_expr_SensorValue = 32769; 
}
void time1_25_18(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_26_17(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 3; 
	res = 3; 
	__iv__return_expr_SensorValue = 3; 
}
void time1_25_19(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_26_18(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 32769; 
	res = 32769; 
	__iv__return_expr_SensorValue = 32769; 
}
void time1_25_20(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_26_19(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 34; 
	res = 34; 
	__iv__return_expr_SensorValue = 34; 
}
void time1_25_21(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_26_20(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 32771; 
	res = 32771; 
	__iv__return_expr_SensorValue = 32771; 
}
void SensorValue_27_7(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 64; 
	res = 64; 
	__iv__return_expr_SensorValue = 64; 
}
void time1_25_22(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_26_21(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_SensorValue = 1; 
}
void time1_25_23(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_26_22(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 32; 
	res = 32; 
	__iv__return_expr_SensorValue = 32; 
}
void time1_25_24(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_26_23(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 65; 
	res = 65; 
	__iv__return_expr_SensorValue = 65; 
}
void SensorValue_27_8(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 16384; 
	res = 16384; 
	__iv__return_expr_SensorValue = 16384; 
}
void time1_25_25(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_26_24(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_SensorValue = 1; 
}
void time1_25_26(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_26_25(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void time1_25_27(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_26_26(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_SensorValue = 1; 
}
void time1_25_28(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_time1 = 0; 
}
void SensorValue_26_27(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 2048; 
	res = 2048; 
	__iv__return_expr_SensorValue = 2048; 
}
void time1_25_29(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 16512; 
	res = 16512; 
	__iv__return_expr_time1 = 16512; 
}
void stopWheels_28_2(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void wait1Msec_29_2(signed int sec){
}
void clearTimer_30_2(signed int t1){
}
void time1_31_2(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 6016; 
	res = 6016; 
	__iv__return_expr_time1 = 6016; 
}
void stopWheels_35_1(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void update_prop_automata_11_8(){
	cycle = 4; 
}
void check_property_12_8(){
}
void onPatrol_4_2(){
	sonarMax = 0; 
	clearTimer_48_2(0);
	signed int return_value_time1;
	time1_49_2(0);
	return_value_time1 = 0; 
	signed int return_value_SensorValue;
	SensorValue_50_1(1);
	return_value_SensorValue = 0; 
	SensorValue_51_1(1);
	sonarMax = 19; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	time1_49_3(0);
	return_value_time1 = 0; 
	SensorValue_50_2(1);
	return_value_SensorValue = 3; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	time1_49_4(0);
	return_value_time1 = 0; 
	SensorValue_50_3(1);
	return_value_SensorValue = 18; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	time1_49_5(0);
	return_value_time1 = 1; 
	SensorValue_50_4(1);
	return_value_SensorValue = 16402; 
	SensorValue_51_2(1);
	sonarMax = 1; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	time1_49_6(0);
	return_value_time1 = 0; 
	SensorValue_50_5(1);
	return_value_SensorValue = 0; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	time1_49_7(0);
	return_value_time1 = 0; 
	SensorValue_50_6(1);
	return_value_SensorValue = 1; 
	SensorValue_51_3(1);
	sonarMax = 8194; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	time1_49_8(0);
	return_value_time1 = 2; 
	SensorValue_50_7(1);
	return_value_SensorValue = 0; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	time1_49_9(0);
	return_value_time1 = 0; 
	SensorValue_50_8(1);
	return_value_SensorValue = 3; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	time1_49_10(0);
	return_value_time1 = 8; 
	SensorValue_50_9(1);
	return_value_SensorValue = 8193; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	time1_49_11(0);
	return_value_time1 = 1; 
	SensorValue_50_10(1);
	return_value_SensorValue = 32771; 
	SensorValue_51_4(1);
	sonarMax = 104; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	time1_49_12(0);
	return_value_time1 = 0; 
	SensorValue_50_11(1);
	return_value_SensorValue = 96; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	time1_49_13(0);
	return_value_time1 = 6001; 
	clearTimer_52_2(0);
	signed int return_value_SensorValue_0;
	SensorValue_53_2(1);
	return_value_SensorValue_0 = 0; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	SensorValue_53_3(1);
	return_value_SensorValue_0 = 1; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	SensorValue_53_4(1);
	return_value_SensorValue_0 = 0; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	SensorValue_53_5(1);
	return_value_SensorValue_0 = 1; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	SensorValue_53_6(1);
	return_value_SensorValue_0 = 1; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	SensorValue_53_7(1);
	return_value_SensorValue_0 = 1; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	SensorValue_53_8(1);
	return_value_SensorValue_0 = 2; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	SensorValue_53_9(1);
	return_value_SensorValue_0 = 0; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	SensorValue_53_10(1);
	return_value_SensorValue_0 = 0; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	SensorValue_53_11(1);
	return_value_SensorValue_0 = 0; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	SensorValue_53_12(1);
	return_value_SensorValue_0 = 0; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	SensorValue_53_13(1);
	return_value_SensorValue_0 = 0; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	SensorValue_53_14(1);
	return_value_SensorValue_0 = 0; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	SensorValue_53_15(1);
	return_value_SensorValue_0 = 0; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	SensorValue_53_16(1);
	return_value_SensorValue_0 = 0; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	SensorValue_53_17(1);
	return_value_SensorValue_0 = 16528; 
	stopWheels_54_2();
	motor[0] = 52.000000; 
	motor[1] = 40.000000; 
	wait1Msec_55_2(2500);
	stopWheels_56_2();
	__iv__return_expr_onPatrol = 1; 
}
void clearTimer_48_2(signed int t1){
}
void time1_49_2(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_time1 = 0; 
}
void SensorValue_50_1(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void SensorValue_51_1(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 19; 
	res = 19; 
	__iv__return_expr_SensorValue = 19; 
}
void time1_49_3(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_time1 = 0; 
}
void SensorValue_50_2(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 3; 
	res = 3; 
	__iv__return_expr_SensorValue = 3; 
}
void time1_49_4(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_time1 = 0; 
}
void SensorValue_50_3(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 18; 
	res = 18; 
	__iv__return_expr_SensorValue = 18; 
}
void time1_49_5(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_50_4(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 16402; 
	res = 16402; 
	__iv__return_expr_SensorValue = 16402; 
}
void SensorValue_51_2(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_SensorValue = 1; 
}
void time1_49_6(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_time1 = 0; 
}
void SensorValue_50_5(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void time1_49_7(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_time1 = 0; 
}
void SensorValue_50_6(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_SensorValue = 1; 
}
void SensorValue_51_3(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 8194; 
	res = 8194; 
	__iv__return_expr_SensorValue = 8194; 
}
void time1_49_8(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 2; 
	res = 2; 
	__iv__return_expr_time1 = 2; 
}
void SensorValue_50_7(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void time1_49_9(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_time1 = 0; 
}
void SensorValue_50_8(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 3; 
	res = 3; 
	__iv__return_expr_SensorValue = 3; 
}
void time1_49_10(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 8; 
	res = 8; 
	__iv__return_expr_time1 = 8; 
}
void SensorValue_50_9(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 8193; 
	res = 8193; 
	__iv__return_expr_SensorValue = 8193; 
}
void time1_49_11(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_50_10(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 32771; 
	res = 32771; 
	__iv__return_expr_SensorValue = 32771; 
}
void SensorValue_51_4(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 104; 
	res = 104; 
	__iv__return_expr_SensorValue = 104; 
}
void time1_49_12(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_time1 = 0; 
}
void SensorValue_50_11(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 96; 
	res = 96; 
	__iv__return_expr_SensorValue = 96; 
}
void time1_49_13(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 6001; 
	res = 6001; 
	__iv__return_expr_time1 = 6001; 
}
void clearTimer_52_2(signed int t1){
}
void SensorValue_53_2(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void SensorValue_53_3(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_SensorValue = 1; 
}
void SensorValue_53_4(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void SensorValue_53_5(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_SensorValue = 1; 
}
void SensorValue_53_6(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_SensorValue = 1; 
}
void SensorValue_53_7(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_SensorValue = 1; 
}
void SensorValue_53_8(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 2; 
	res = 2; 
	__iv__return_expr_SensorValue = 2; 
}
void SensorValue_53_9(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void SensorValue_53_10(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void SensorValue_53_11(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void SensorValue_53_12(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void SensorValue_53_13(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void SensorValue_53_14(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void SensorValue_53_15(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void SensorValue_53_16(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void SensorValue_53_17(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 16528; 
	res = 16528; 
	__iv__return_expr_SensorValue = 16528; 
}
void stopWheels_54_2(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void wait1Msec_55_2(signed int sec){
}
void stopWheels_56_2(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void update_prop_automata_11_9(){
	cycle = 5; 
}
void check_property_12_9(){
}
void primaryScan_2_3(){
	IRMax = 0; 
	sonarMax = 0; 
	clearTimer_36_3(0);
	signed int return_value_time1;
	time1_37_9(0);
	return_value_time1 = 0; 
	signed int return_value_SensorValue;
	SensorValue_38_7(2);
	return_value_SensorValue = 0; 
	signed int return_value_SensorValue_0;
	SensorValue_40_7(2);
	return_value_SensorValue_0 = 17932; 
	SensorValue_41_5(2);
	ambientIR = 0; 
	motor[0] = -39.000000; 
	motor[1] = 30.000000; 
	time1_37_10(0);
	return_value_time1 = 8193; 
	clearTimer_42_3(0);
	signed int return_value_time1_0;
	time1_43_5(0);
	return_value_time1_0 = 4001; 
	stopWheels_47_2();
	__iv__return_expr_primaryScan = 3; 
}
void clearTimer_36_3(signed int t1){
}
void time1_37_9(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_time1 = 0; 
}
void SensorValue_38_7(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void SensorValue_40_7(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 17932; 
	res = 17932; 
	__iv__return_expr_SensorValue = 17932; 
}
void SensorValue_41_5(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void time1_37_10(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 8193; 
	res = 8193; 
	__iv__return_expr_time1 = 8193; 
}
void clearTimer_42_3(signed int t1){
}
void time1_43_5(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 4001; 
	res = 4001; 
	__iv__return_expr_time1 = 4001; 
}
void stopWheels_47_2(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void update_prop_automata_11_10(){
	cycle = 6; 
}
void check_property_12_10(){
}
void onPatrol_4_3(){
	sonarMax = 0; 
	clearTimer_48_3(0);
	signed int return_value_time1;
	time1_49_14(0);
	return_value_time1 = 6001; 
	clearTimer_52_3(0);
	signed int return_value_SensorValue_0;
	SensorValue_53_18(1);
	return_value_SensorValue_0 = 65436; 
	stopWheels_54_3();
	motor[0] = 52.000000; 
	motor[1] = 40.000000; 
	wait1Msec_55_3(2500);
	stopWheels_56_3();
	__iv__return_expr_onPatrol = 1; 
}
void clearTimer_48_3(signed int t1){
}
void time1_49_14(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 6001; 
	res = 6001; 
	__iv__return_expr_time1 = 6001; 
}
void clearTimer_52_3(signed int t1){
}
void SensorValue_53_18(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 65436; 
	res = 65436; 
	__iv__return_expr_SensorValue = 65436; 
}
void stopWheels_54_3(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void wait1Msec_55_3(signed int sec){
}
void stopWheels_56_3(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void update_prop_automata_11_11(){
	cycle = 7; 
}
void check_property_12_11(){
}
void primaryScan_2_4(){
	IRMax = 0; 
	sonarMax = 0; 
	clearTimer_36_4(0);
	signed int return_value_time1;
	time1_37_11(0);
	return_value_time1 = 1; 
	signed int return_value_SensorValue;
	SensorValue_38_8(2);
	return_value_SensorValue = 32768; 
	SensorValue_39_1(2);
	IRMax = 64; 
	signed int return_value_SensorValue_0;
	SensorValue_40_8(2);
	return_value_SensorValue_0 = 0; 
	motor[0] = -39.000000; 
	motor[1] = 30.000000; 
	time1_37_12(0);
	return_value_time1 = 4001; 
	clearTimer_42_4(0);
	signed int return_value_time1_0;
	time1_43_6(0);
	return_value_time1_0 = 4001; 
	stopWheels_47_3();
	__iv__return_expr_primaryScan = 3; 
}
void clearTimer_36_4(signed int t1){
}
void time1_37_11(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_38_8(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 32768; 
	res = 32768; 
	__iv__return_expr_SensorValue = 32768; 
}
void SensorValue_39_1(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 64; 
	res = 64; 
	__iv__return_expr_SensorValue = 64; 
}
void SensorValue_40_8(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void time1_37_12(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 4001; 
	res = 4001; 
	__iv__return_expr_time1 = 4001; 
}
void clearTimer_42_4(signed int t1){
}
void time1_43_6(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 4001; 
	res = 4001; 
	__iv__return_expr_time1 = 4001; 
}
void stopWheels_47_3(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void update_prop_automata_11_12(){
	cycle = 8; 
}
void check_property_12_12(){
}
void onPatrol_4_4(){
	sonarMax = 0; 
	clearTimer_48_4(0);
	signed int return_value_time1;
	time1_49_15(0);
	return_value_time1 = 1; 
	signed int return_value_SensorValue;
	SensorValue_50_12(1);
	return_value_SensorValue = 1; 
	SensorValue_51_5(1);
	sonarMax = 98; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	time1_49_16(0);
	return_value_time1 = 6001; 
	clearTimer_52_4(0);
	signed int return_value_SensorValue_0;
	SensorValue_53_19(1);
	return_value_SensorValue_0 = 65534; 
	stopWheels_54_4();
	motor[0] = 52.000000; 
	motor[1] = 40.000000; 
	wait1Msec_55_4(2500);
	stopWheels_56_4();
	__iv__return_expr_onPatrol = 1; 
}
void clearTimer_48_4(signed int t1){
}
void time1_49_15(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_50_12(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_SensorValue = 1; 
}
void SensorValue_51_5(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 98; 
	res = 98; 
	__iv__return_expr_SensorValue = 98; 
}
void time1_49_16(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 6001; 
	res = 6001; 
	__iv__return_expr_time1 = 6001; 
}
void clearTimer_52_4(signed int t1){
}
void SensorValue_53_19(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 65534; 
	res = 65534; 
	__iv__return_expr_SensorValue = 65534; 
}
void stopWheels_54_4(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void wait1Msec_55_4(signed int sec){
}
void stopWheels_56_4(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void update_prop_automata_11_13(){
	cycle = 9; 
}
void check_property_12_13(){
}
void primaryScan_2_5(){
	IRMax = 0; 
	sonarMax = 0; 
	clearTimer_36_5(0);
	signed int return_value_time1;
	time1_37_13(0);
	return_value_time1 = 4001; 
	clearTimer_42_5(0);
	signed int return_value_time1_0;
	time1_43_7(0);
	return_value_time1_0 = 16385; 
	stopWheels_47_4();
	__iv__return_expr_primaryScan = 3; 
}
void clearTimer_36_5(signed int t1){
}
void time1_37_13(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 4001; 
	res = 4001; 
	__iv__return_expr_time1 = 4001; 
}
void clearTimer_42_5(signed int t1){
}
void time1_43_7(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 16385; 
	res = 16385; 
	__iv__return_expr_time1 = 16385; 
}
void stopWheels_47_4(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void update_prop_automata_11_14(){
	cycle = 10; 
}
void check_property_12_14(){
}
void onPatrol_4_5(){
	sonarMax = 0; 
	clearTimer_48_5(0);
	signed int return_value_time1;
	time1_49_17(0);
	return_value_time1 = 0; 
	signed int return_value_SensorValue;
	SensorValue_50_13(1);
	return_value_SensorValue = 32768; 
	SensorValue_51_6(1);
	sonarMax = 2; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	time1_49_18(0);
	return_value_time1 = 5986; 
	SensorValue_50_14(1);
	return_value_SensorValue = 2; 
	SensorValue_51_7(1);
	sonarMax = 8193; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	time1_49_19(0);
	return_value_time1 = 5986; 
	SensorValue_50_15(1);
	return_value_SensorValue = 16388; 
	SensorValue_51_8(1);
	sonarMax = 8192; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	time1_49_20(0);
	return_value_time1 = 5984; 
	SensorValue_50_16(1);
	return_value_SensorValue = 0; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	time1_49_21(0);
	return_value_time1 = 38768; 
	clearTimer_52_5(0);
	signed int return_value_SensorValue_0;
	SensorValue_53_20(1);
	return_value_SensorValue_0 = 0; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	SensorValue_53_21(1);
	return_value_SensorValue_0 = 33792; 
	stopWheels_54_5();
	motor[0] = 52.000000; 
	motor[1] = 40.000000; 
	wait1Msec_55_5(2500);
	stopWheels_56_5();
	__iv__return_expr_onPatrol = 1; 
}
void clearTimer_48_5(signed int t1){
}
void time1_49_17(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_time1 = 0; 
}
void SensorValue_50_13(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 32768; 
	res = 32768; 
	__iv__return_expr_SensorValue = 32768; 
}
void SensorValue_51_6(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 2; 
	res = 2; 
	__iv__return_expr_SensorValue = 2; 
}
void time1_49_18(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 5986; 
	res = 5986; 
	__iv__return_expr_time1 = 5986; 
}
void SensorValue_50_14(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 2; 
	res = 2; 
	__iv__return_expr_SensorValue = 2; 
}
void SensorValue_51_7(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 8193; 
	res = 8193; 
	__iv__return_expr_SensorValue = 8193; 
}
void time1_49_19(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 5986; 
	res = 5986; 
	__iv__return_expr_time1 = 5986; 
}
void SensorValue_50_15(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 16388; 
	res = 16388; 
	__iv__return_expr_SensorValue = 16388; 
}
void SensorValue_51_8(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 8192; 
	res = 8192; 
	__iv__return_expr_SensorValue = 8192; 
}
void time1_49_20(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 5984; 
	res = 5984; 
	__iv__return_expr_time1 = 5984; 
}
void SensorValue_50_16(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void time1_49_21(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 38768; 
	res = 38768; 
	__iv__return_expr_time1 = 38768; 
}
void clearTimer_52_5(signed int t1){
}
void SensorValue_53_20(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void SensorValue_53_21(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 33792; 
	res = 33792; 
	__iv__return_expr_SensorValue = 33792; 
}
void stopWheels_54_5(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void wait1Msec_55_5(signed int sec){
}
void stopWheels_56_5(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void update_prop_automata_11_15(){
	cycle = 11; 
}
void check_property_12_15(){
}
void primaryScan_2_6(){
	IRMax = 0; 
	sonarMax = 0; 
	clearTimer_36_6(0);
	signed int return_value_time1;
	time1_37_14(0);
	return_value_time1 = 4000; 
	clearTimer_42_6(0);
	signed int return_value_time1_0;
	time1_43_8(0);
	return_value_time1_0 = 4001; 
	stopWheels_47_5();
	__iv__return_expr_primaryScan = 3; 
}
void clearTimer_36_6(signed int t1){
}
void time1_37_14(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 4000; 
	res = 4000; 
	__iv__return_expr_time1 = 4000; 
}
void clearTimer_42_6(signed int t1){
}
void time1_43_8(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 4001; 
	res = 4001; 
	__iv__return_expr_time1 = 4001; 
}
void stopWheels_47_5(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void update_prop_automata_11_16(){
	cycle = 12; 
}
void check_property_12_16(){
}
void onPatrol_4_6(){
	sonarMax = 0; 
	clearTimer_48_6(0);
	signed int return_value_time1;
	time1_49_22(0);
	return_value_time1 = 1; 
	signed int return_value_SensorValue;
	SensorValue_50_17(1);
	return_value_SensorValue = 128; 
	SensorValue_51_9(1);
	sonarMax = 8; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	time1_49_23(0);
	return_value_time1 = 1; 
	SensorValue_50_18(1);
	return_value_SensorValue = 17; 
	SensorValue_51_10(1);
	sonarMax = 26; 
	motor[0] = -32.500000; 
	motor[1] = 25.000000; 
	time1_49_24(0);
	return_value_time1 = 17408; 
	clearTimer_52_6(0);
	signed int return_value_SensorValue_0;
	SensorValue_53_22(1);
	return_value_SensorValue_0 = 33072; 
	stopWheels_54_6();
	motor[0] = 52.000000; 
	motor[1] = 40.000000; 
	wait1Msec_55_6(2500);
	stopWheels_56_6();
	__iv__return_expr_onPatrol = 1; 
}
void clearTimer_48_6(signed int t1){
}
void time1_49_22(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_50_17(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 128; 
	res = 128; 
	__iv__return_expr_SensorValue = 128; 
}
void SensorValue_51_9(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 8; 
	res = 8; 
	__iv__return_expr_SensorValue = 8; 
}
void time1_49_23(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_50_18(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 17; 
	res = 17; 
	__iv__return_expr_SensorValue = 17; 
}
void SensorValue_51_10(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 26; 
	res = 26; 
	__iv__return_expr_SensorValue = 26; 
}
void time1_49_24(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 17408; 
	res = 17408; 
	__iv__return_expr_time1 = 17408; 
}
void clearTimer_52_6(signed int t1){
}
void SensorValue_53_22(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 33072; 
	res = 33072; 
	__iv__return_expr_SensorValue = 33072; 
}
void stopWheels_54_6(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void wait1Msec_55_6(signed int sec){
}
void stopWheels_56_6(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void update_prop_automata_11_17(){
	cycle = 13; 
}
void check_property_12_17(){
}
void primaryScan_2_7(){
	IRMax = 0; 
	sonarMax = 0; 
	clearTimer_36_7(0);
	signed int return_value_time1;
	time1_37_15(0);
	return_value_time1 = 8; 
	signed int return_value_SensorValue;
	SensorValue_38_9(2);
	return_value_SensorValue = 0; 
	signed int return_value_SensorValue_0;
	SensorValue_40_9(2);
	return_value_SensorValue_0 = 0; 
	motor[0] = -39.000000; 
	motor[1] = 30.000000; 
	time1_37_16(0);
	return_value_time1 = 32; 
	SensorValue_38_10(2);
	return_value_SensorValue = 32768; 
	SensorValue_39_2(2);
	IRMax = 2056; 
	SensorValue_40_10(2);
	return_value_SensorValue_0 = 0; 
	motor[0] = -39.000000; 
	motor[1] = 30.000000; 
	time1_37_17(0);
	return_value_time1 = 64; 
	SensorValue_38_11(2);
	return_value_SensorValue = 2176; 
	SensorValue_39_3(2);
	IRMax = 4; 
	SensorValue_40_11(2);
	return_value_SensorValue_0 = 2; 
	motor[0] = -39.000000; 
	motor[1] = 30.000000; 
	time1_37_18(0);
	return_value_time1 = 4; 
	SensorValue_38_12(2);
	return_value_SensorValue = 0; 
	SensorValue_40_12(2);
	return_value_SensorValue_0 = 1; 
	motor[0] = -39.000000; 
	motor[1] = 30.000000; 
	time1_37_19(0);
	return_value_time1 = 512; 
	SensorValue_38_13(2);
	return_value_SensorValue = 0; 
	SensorValue_40_13(2);
	return_value_SensorValue_0 = 64; 
	motor[0] = -39.000000; 
	motor[1] = 30.000000; 
	time1_37_20(0);
	return_value_time1 = 1024; 
	SensorValue_38_14(2);
	return_value_SensorValue = 2; 
	SensorValue_40_14(2);
	return_value_SensorValue_0 = 2; 
	motor[0] = -39.000000; 
	motor[1] = 30.000000; 
	time1_37_21(0);
	return_value_time1 = 1024; 
	SensorValue_38_15(2);
	return_value_SensorValue = 0; 
	SensorValue_40_15(2);
	return_value_SensorValue_0 = 0; 
	motor[0] = -39.000000; 
	motor[1] = 30.000000; 
	time1_37_22(0);
	return_value_time1 = 0; 
	SensorValue_38_16(2);
	return_value_SensorValue = 0; 
	SensorValue_40_16(2);
	return_value_SensorValue_0 = 8; 
	motor[0] = -39.000000; 
	motor[1] = 30.000000; 
	time1_37_23(0);
	return_value_time1 = 8320; 
	clearTimer_42_7(0);
	signed int return_value_time1_0;
	time1_43_9(0);
	return_value_time1_0 = 4001; 
	stopWheels_47_6();
	__iv__return_expr_primaryScan = 3; 
}
void clearTimer_36_7(signed int t1){
}
void time1_37_15(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 8; 
	res = 8; 
	__iv__return_expr_time1 = 8; 
}
void SensorValue_38_9(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void SensorValue_40_9(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void time1_37_16(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 32; 
	res = 32; 
	__iv__return_expr_time1 = 32; 
}
void SensorValue_38_10(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 32768; 
	res = 32768; 
	__iv__return_expr_SensorValue = 32768; 
}
void SensorValue_39_2(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 2056; 
	res = 2056; 
	__iv__return_expr_SensorValue = 2056; 
}
void SensorValue_40_10(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void time1_37_17(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 64; 
	res = 64; 
	__iv__return_expr_time1 = 64; 
}
void SensorValue_38_11(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 2176; 
	res = 2176; 
	__iv__return_expr_SensorValue = 2176; 
}
void SensorValue_39_3(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 4; 
	res = 4; 
	__iv__return_expr_SensorValue = 4; 
}
void SensorValue_40_11(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 2; 
	res = 2; 
	__iv__return_expr_SensorValue = 2; 
}
void time1_37_18(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 4; 
	res = 4; 
	__iv__return_expr_time1 = 4; 
}
void SensorValue_38_12(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void SensorValue_40_12(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_SensorValue = 1; 
}
void time1_37_19(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 512; 
	res = 512; 
	__iv__return_expr_time1 = 512; 
}
void SensorValue_38_13(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void SensorValue_40_13(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 64; 
	res = 64; 
	__iv__return_expr_SensorValue = 64; 
}
void time1_37_20(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1024; 
	res = 1024; 
	__iv__return_expr_time1 = 1024; 
}
void SensorValue_38_14(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 2; 
	res = 2; 
	__iv__return_expr_SensorValue = 2; 
}
void SensorValue_40_14(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 2; 
	res = 2; 
	__iv__return_expr_SensorValue = 2; 
}
void time1_37_21(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1024; 
	res = 1024; 
	__iv__return_expr_time1 = 1024; 
}
void SensorValue_38_15(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void SensorValue_40_15(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void time1_37_22(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_time1 = 0; 
}
void SensorValue_38_16(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void SensorValue_40_16(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 8; 
	res = 8; 
	__iv__return_expr_SensorValue = 8; 
}
void time1_37_23(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 8320; 
	res = 8320; 
	__iv__return_expr_time1 = 8320; 
}
void clearTimer_42_7(signed int t1){
}
void time1_43_9(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 4001; 
	res = 4001; 
	__iv__return_expr_time1 = 4001; 
}
void stopWheels_47_6(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void update_prop_automata_11_18(){
	cycle = 14; 
}
void check_property_12_18(){
}
void onPatrol_4_7(){
	sonarMax = 0; 
	clearTimer_48_7(0);
	signed int return_value_time1;
	time1_49_25(0);
	return_value_time1 = 6001; 
	clearTimer_52_7(0);
	signed int return_value_SensorValue_0;
	SensorValue_53_23(1);
	return_value_SensorValue_0 = 0; 
	stopWheels_54_7();
	motor[0] = 52.000000; 
	motor[1] = 40.000000; 
	wait1Msec_55_7(2500);
	stopWheels_56_7();
	__iv__return_expr_onPatrol = 1; 
}
void clearTimer_48_7(signed int t1){
}
void time1_49_25(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 6001; 
	res = 6001; 
	__iv__return_expr_time1 = 6001; 
}
void clearTimer_52_7(signed int t1){
}
void SensorValue_53_23(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void stopWheels_54_7(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void wait1Msec_55_7(signed int sec){
}
void stopWheels_56_7(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void update_prop_automata_11_19(){
	cycle = 15; 
}
void check_property_12_19(){
}
void primaryScan_2_8(){
	IRMax = 0; 
	sonarMax = 0; 
	clearTimer_36_8(0);
	signed int return_value_time1;
	time1_37_24(0);
	return_value_time1 = 1; 
	signed int return_value_SensorValue;
	SensorValue_38_17(2);
	return_value_SensorValue = 2; 
	SensorValue_39_4(2);
	IRMax = 2304; 
	signed int return_value_SensorValue_0;
	SensorValue_40_17(2);
	return_value_SensorValue_0 = 0; 
	motor[0] = -39.000000; 
	motor[1] = 30.000000; 
	time1_37_25(0);
	return_value_time1 = 4001; 
	clearTimer_42_8(0);
	signed int return_value_time1_0;
	time1_43_10(0);
	return_value_time1_0 = 4001; 
	stopWheels_47_7();
	__iv__return_expr_primaryScan = 3; 
}
void clearTimer_36_8(signed int t1){
}
void time1_37_24(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_38_17(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 2; 
	res = 2; 
	__iv__return_expr_SensorValue = 2; 
}
void SensorValue_39_4(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 2304; 
	res = 2304; 
	__iv__return_expr_SensorValue = 2304; 
}
void SensorValue_40_17(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void time1_37_25(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 4001; 
	res = 4001; 
	__iv__return_expr_time1 = 4001; 
}
void clearTimer_42_8(signed int t1){
}
void time1_43_10(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 4001; 
	res = 4001; 
	__iv__return_expr_time1 = 4001; 
}
void stopWheels_47_7(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void update_prop_automata_11_20(){
	cycle = 16; 
}
void check_property_12_20(){
}
void onPatrol_4_8(){
	sonarMax = 0; 
	clearTimer_48_8(0);
	signed int return_value_time1;
	time1_49_26(0);
	return_value_time1 = 6001; 
	clearTimer_52_8(0);
	signed int return_value_SensorValue_0;
	SensorValue_53_24(1);
	return_value_SensorValue_0 = 65436; 
	stopWheels_54_8();
	motor[0] = 52.000000; 
	motor[1] = 40.000000; 
	wait1Msec_55_8(2500);
	stopWheels_56_8();
	__iv__return_expr_onPatrol = 1; 
}
void clearTimer_48_8(signed int t1){
}
void time1_49_26(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 6001; 
	res = 6001; 
	__iv__return_expr_time1 = 6001; 
}
void clearTimer_52_8(signed int t1){
}
void SensorValue_53_24(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 65436; 
	res = 65436; 
	__iv__return_expr_SensorValue = 65436; 
}
void stopWheels_54_8(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void wait1Msec_55_8(signed int sec){
}
void stopWheels_56_8(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void update_prop_automata_11_21(){
	cycle = 17; 
}
void check_property_12_21(){
}
void primaryScan_2_9(){
	IRMax = 0; 
	sonarMax = 0; 
	clearTimer_36_9(0);
	signed int return_value_time1;
	time1_37_26(0);
	return_value_time1 = 1; 
	signed int return_value_SensorValue;
	SensorValue_38_18(2);
	return_value_SensorValue = 0; 
	signed int return_value_SensorValue_0;
	SensorValue_40_18(2);
	return_value_SensorValue_0 = 32768; 
	motor[0] = -39.000000; 
	motor[1] = 30.000000; 
	time1_37_27(0);
	return_value_time1 = 0; 
	SensorValue_38_19(2);
	return_value_SensorValue = 1; 
	SensorValue_39_5(2);
	IRMax = 0; 
	SensorValue_40_19(2);
	return_value_SensorValue_0 = 0; 
	motor[0] = -39.000000; 
	motor[1] = 30.000000; 
	time1_37_28(0);
	return_value_time1 = 0; 
	SensorValue_38_20(2);
	return_value_SensorValue = 0; 
	SensorValue_40_20(2);
	return_value_SensorValue_0 = 0; 
	motor[0] = -39.000000; 
	motor[1] = 30.000000; 
	time1_37_29(0);
	return_value_time1 = 1; 
	SensorValue_38_21(2);
	return_value_SensorValue = 1; 
	SensorValue_39_6(2);
	IRMax = 4096; 
	SensorValue_40_21(2);
	return_value_SensorValue_0 = 0; 
	motor[0] = -39.000000; 
	motor[1] = 30.000000; 
	time1_37_30(0);
	return_value_time1 = 3968; 
	SensorValue_38_22(2);
	return_value_SensorValue = 0; 
	SensorValue_40_22(2);
	return_value_SensorValue_0 = 0; 
	motor[0] = -39.000000; 
	motor[1] = 30.000000; 
	time1_37_31(0);
	return_value_time1 = 3968; 
	SensorValue_38_23(2);
	return_value_SensorValue = 0; 
	SensorValue_40_23(2);
	return_value_SensorValue_0 = 0; 
	motor[0] = -39.000000; 
	motor[1] = 30.000000; 
	time1_37_32(0);
	return_value_time1 = 3968; 
	SensorValue_38_24(2);
	return_value_SensorValue = 0; 
	SensorValue_40_24(2);
	return_value_SensorValue_0 = 0; 
	motor[0] = -39.000000; 
	motor[1] = 30.000000; 
	time1_37_33(0);
	return_value_time1 = 3968; 
	SensorValue_38_25(2);
	return_value_SensorValue = 0; 
	SensorValue_40_25(2);
	return_value_SensorValue_0 = 0; 
	motor[0] = -39.000000; 
	motor[1] = 30.000000; 
	time1_37_34(0);
	return_value_time1 = 3968; 
	SensorValue_38_26(2);
	return_value_SensorValue = 1; 
	SensorValue_40_26(2);
	return_value_SensorValue_0 = 0; 
	motor[0] = -39.000000; 
	motor[1] = 30.000000; 
	time1_37_35(0);
	return_value_time1 = 3968; 
	SensorValue_38_27(2);
	return_value_SensorValue = 4097; 
	SensorValue_39_7(2);
	IRMax = 49152; 
	SensorValue_40_27(2);
	return_value_SensorValue_0 = 0; 
	motor[0] = -39.000000; 
	motor[1] = 30.000000; 
	time1_37_36(0);
	return_value_time1 = 1953; 
	SensorValue_38_28(2);
	return_value_SensorValue = 2048; 
	SensorValue_40_28(2);
	return_value_SensorValue_0 = 0; 
	motor[0] = -39.000000; 
	motor[1] = 30.000000; 
	time1_37_37(0);
	return_value_time1 = 3968; 
	SensorValue_38_29(2);
	return_value_SensorValue = 49153; 
	SensorValue_39_8(2);
	IRMax = 16384; 
	SensorValue_40_29(2);
	return_value_SensorValue_0 = 0; 
	motor[0] = -39.000000; 
	motor[1] = 30.000000; 
	time1_37_38(0);
	return_value_time1 = 3968; 
	SensorValue_38_30(2);
	return_value_SensorValue = 4; 
	SensorValue_40_30(2);
	return_value_SensorValue_0 = 0; 
	motor[0] = -39.000000; 
	motor[1] = 30.000000; 
	time1_37_39(0);
	return_value_time1 = 3968; 
	SensorValue_38_31(2);
	return_value_SensorValue = 16385; 
	SensorValue_39_9(2);
	IRMax = 2; 
	SensorValue_40_31(2);
	return_value_SensorValue_0 = 0; 
	motor[0] = -39.000000; 
	motor[1] = 30.000000; 
	time1_37_40(0);
	return_value_time1 = 3968; 
	SensorValue_38_32(2);
	return_value_SensorValue = 3; 
	SensorValue_39_10(2);
	IRMax = 16384; 
	SensorValue_40_32(2);
	return_value_SensorValue_0 = 0; 
	motor[0] = -39.000000; 
	motor[1] = 30.000000; 
	time1_37_41(0);
	return_value_time1 = 0; 
	SensorValue_38_33(2);
	return_value_SensorValue = 16384; 
	SensorValue_40_33(2);
	return_value_SensorValue_0 = 0; 
	motor[0] = -39.000000; 
	motor[1] = 30.000000; 
	time1_37_42(0);
	return_value_time1 = 3968; 
	SensorValue_38_34(2);
	return_value_SensorValue = 1; 
	SensorValue_40_34(2);
	return_value_SensorValue_0 = 0; 
	motor[0] = -39.000000; 
	motor[1] = 30.000000; 
	time1_37_43(0);
	return_value_time1 = 3968; 
	SensorValue_38_35(2);
	return_value_SensorValue = 1; 
	SensorValue_40_35(2);
	return_value_SensorValue_0 = 0; 
	motor[0] = -39.000000; 
	motor[1] = 30.000000; 
	time1_37_44(0);
	return_value_time1 = 3968; 
	SensorValue_38_36(2);
	return_value_SensorValue = 0; 
	SensorValue_40_36(2);
	return_value_SensorValue_0 = 0; 
	motor[0] = -39.000000; 
	motor[1] = 30.000000; 
	time1_37_45(0);
	return_value_time1 = 3968; 
	SensorValue_38_37(2);
	return_value_SensorValue = 1; 
	SensorValue_40_37(2);
	return_value_SensorValue_0 = 0; 
	motor[0] = -39.000000; 
	motor[1] = 30.000000; 
	time1_37_46(0);
	return_value_time1 = 3968; 
	SensorValue_38_38(2);
	return_value_SensorValue = 32769; 
	SensorValue_39_11(2);
	IRMax = 0; 
	SensorValue_40_38(2);
	return_value_SensorValue_0 = 0; 
	motor[0] = -39.000000; 
	motor[1] = 30.000000; 
	time1_37_47(0);
	return_value_time1 = 3968; 
	SensorValue_38_39(2);
	return_value_SensorValue = 1; 
	SensorValue_39_12(2);
	IRMax = 2; 
	SensorValue_40_39(2);
	return_value_SensorValue_0 = 0; 
	motor[0] = -39.000000; 
	motor[1] = 30.000000; 
	time1_37_48(0);
	return_value_time1 = 2977; 
	SensorValue_38_40(2);
	return_value_SensorValue = 3; 
	SensorValue_39_13(2);
	IRMax = 2; 
	SensorValue_40_40(2);
	return_value_SensorValue_0 = 0; 
	motor[0] = -39.000000; 
	motor[1] = 30.000000; 
	time1_37_49(0);
	return_value_time1 = 3968; 
	SensorValue_38_41(2);
	return_value_SensorValue = 3; 
	SensorValue_39_14(2);
	IRMax = 2; 
	SensorValue_40_41(2);
	return_value_SensorValue_0 = 32768; 
	motor[0] = -39.000000; 
	motor[1] = 30.000000; 
	time1_37_50(0);
	return_value_time1 = 3968; 
	SensorValue_38_42(2);
	return_value_SensorValue = 3; 
	SensorValue_39_15(2);
	IRMax = 16384; 
	SensorValue_40_42(2);
	return_value_SensorValue_0 = 0; 
	motor[0] = -39.000000; 
	motor[1] = 30.000000; 
	time1_37_51(0);
	return_value_time1 = 3968; 
	SensorValue_38_43(2);
	return_value_SensorValue = 1; 
	SensorValue_40_43(2);
	return_value_SensorValue_0 = 0; 
	motor[0] = -39.000000; 
	motor[1] = 30.000000; 
	time1_37_52(0);
	return_value_time1 = 3968; 
	SensorValue_38_44(2);
	return_value_SensorValue = 3; 
	SensorValue_40_44(2);
	return_value_SensorValue_0 = 0; 
	motor[0] = -39.000000; 
	motor[1] = 30.000000; 
	time1_37_53(0);
	return_value_time1 = 4001; 
	clearTimer_42_9(0);
	signed int return_value_time1_0;
	time1_43_11(0);
	return_value_time1_0 = 16385; 
	stopWheels_47_8();
	__iv__return_expr_primaryScan = 3; 
}
void clearTimer_36_9(signed int t1){
}
void time1_37_26(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_38_18(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void SensorValue_40_18(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 32768; 
	res = 32768; 
	__iv__return_expr_SensorValue = 32768; 
}
void time1_37_27(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_time1 = 0; 
}
void SensorValue_38_19(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_SensorValue = 1; 
}
void SensorValue_39_5(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void SensorValue_40_19(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void time1_37_28(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_time1 = 0; 
}
void SensorValue_38_20(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void SensorValue_40_20(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void time1_37_29(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_time1 = 1; 
}
void SensorValue_38_21(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_SensorValue = 1; 
}
void SensorValue_39_6(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 4096; 
	res = 4096; 
	__iv__return_expr_SensorValue = 4096; 
}
void SensorValue_40_21(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void time1_37_30(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 3968; 
	res = 3968; 
	__iv__return_expr_time1 = 3968; 
}
void SensorValue_38_22(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void SensorValue_40_22(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void time1_37_31(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 3968; 
	res = 3968; 
	__iv__return_expr_time1 = 3968; 
}
void SensorValue_38_23(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void SensorValue_40_23(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void time1_37_32(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 3968; 
	res = 3968; 
	__iv__return_expr_time1 = 3968; 
}
void SensorValue_38_24(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void SensorValue_40_24(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void time1_37_33(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 3968; 
	res = 3968; 
	__iv__return_expr_time1 = 3968; 
}
void SensorValue_38_25(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void SensorValue_40_25(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void time1_37_34(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 3968; 
	res = 3968; 
	__iv__return_expr_time1 = 3968; 
}
void SensorValue_38_26(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_SensorValue = 1; 
}
void SensorValue_40_26(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void time1_37_35(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 3968; 
	res = 3968; 
	__iv__return_expr_time1 = 3968; 
}
void SensorValue_38_27(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 4097; 
	res = 4097; 
	__iv__return_expr_SensorValue = 4097; 
}
void SensorValue_39_7(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 49152; 
	res = 49152; 
	__iv__return_expr_SensorValue = 49152; 
}
void SensorValue_40_27(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void time1_37_36(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1953; 
	res = 1953; 
	__iv__return_expr_time1 = 1953; 
}
void SensorValue_38_28(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 2048; 
	res = 2048; 
	__iv__return_expr_SensorValue = 2048; 
}
void SensorValue_40_28(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void time1_37_37(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 3968; 
	res = 3968; 
	__iv__return_expr_time1 = 3968; 
}
void SensorValue_38_29(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 49153; 
	res = 49153; 
	__iv__return_expr_SensorValue = 49153; 
}
void SensorValue_39_8(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 16384; 
	res = 16384; 
	__iv__return_expr_SensorValue = 16384; 
}
void SensorValue_40_29(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void time1_37_38(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 3968; 
	res = 3968; 
	__iv__return_expr_time1 = 3968; 
}
void SensorValue_38_30(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 4; 
	res = 4; 
	__iv__return_expr_SensorValue = 4; 
}
void SensorValue_40_30(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void time1_37_39(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 3968; 
	res = 3968; 
	__iv__return_expr_time1 = 3968; 
}
void SensorValue_38_31(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 16385; 
	res = 16385; 
	__iv__return_expr_SensorValue = 16385; 
}
void SensorValue_39_9(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 2; 
	res = 2; 
	__iv__return_expr_SensorValue = 2; 
}
void SensorValue_40_31(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void time1_37_40(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 3968; 
	res = 3968; 
	__iv__return_expr_time1 = 3968; 
}
void SensorValue_38_32(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 3; 
	res = 3; 
	__iv__return_expr_SensorValue = 3; 
}
void SensorValue_39_10(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 16384; 
	res = 16384; 
	__iv__return_expr_SensorValue = 16384; 
}
void SensorValue_40_32(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void time1_37_41(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_time1 = 0; 
}
void SensorValue_38_33(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 16384; 
	res = 16384; 
	__iv__return_expr_SensorValue = 16384; 
}
void SensorValue_40_33(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void time1_37_42(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 3968; 
	res = 3968; 
	__iv__return_expr_time1 = 3968; 
}
void SensorValue_38_34(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_SensorValue = 1; 
}
void SensorValue_40_34(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void time1_37_43(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 3968; 
	res = 3968; 
	__iv__return_expr_time1 = 3968; 
}
void SensorValue_38_35(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_SensorValue = 1; 
}
void SensorValue_40_35(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void time1_37_44(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 3968; 
	res = 3968; 
	__iv__return_expr_time1 = 3968; 
}
void SensorValue_38_36(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void SensorValue_40_36(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void time1_37_45(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 3968; 
	res = 3968; 
	__iv__return_expr_time1 = 3968; 
}
void SensorValue_38_37(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_SensorValue = 1; 
}
void SensorValue_40_37(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void time1_37_46(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 3968; 
	res = 3968; 
	__iv__return_expr_time1 = 3968; 
}
void SensorValue_38_38(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 32769; 
	res = 32769; 
	__iv__return_expr_SensorValue = 32769; 
}
void SensorValue_39_11(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void SensorValue_40_38(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void time1_37_47(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 3968; 
	res = 3968; 
	__iv__return_expr_time1 = 3968; 
}
void SensorValue_38_39(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_SensorValue = 1; 
}
void SensorValue_39_12(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 2; 
	res = 2; 
	__iv__return_expr_SensorValue = 2; 
}
void SensorValue_40_39(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void time1_37_48(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 2977; 
	res = 2977; 
	__iv__return_expr_time1 = 2977; 
}
void SensorValue_38_40(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 3; 
	res = 3; 
	__iv__return_expr_SensorValue = 3; 
}
void SensorValue_39_13(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 2; 
	res = 2; 
	__iv__return_expr_SensorValue = 2; 
}
void SensorValue_40_40(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void time1_37_49(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 3968; 
	res = 3968; 
	__iv__return_expr_time1 = 3968; 
}
void SensorValue_38_41(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 3; 
	res = 3; 
	__iv__return_expr_SensorValue = 3; 
}
void SensorValue_39_14(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 2; 
	res = 2; 
	__iv__return_expr_SensorValue = 2; 
}
void SensorValue_40_41(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 32768; 
	res = 32768; 
	__iv__return_expr_SensorValue = 32768; 
}
void time1_37_50(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 3968; 
	res = 3968; 
	__iv__return_expr_time1 = 3968; 
}
void SensorValue_38_42(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 3; 
	res = 3; 
	__iv__return_expr_SensorValue = 3; 
}
void SensorValue_39_15(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 16384; 
	res = 16384; 
	__iv__return_expr_SensorValue = 16384; 
}
void SensorValue_40_42(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void time1_37_51(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 3968; 
	res = 3968; 
	__iv__return_expr_time1 = 3968; 
}
void SensorValue_38_43(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 1; 
	res = 1; 
	__iv__return_expr_SensorValue = 1; 
}
void SensorValue_40_43(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void time1_37_52(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 3968; 
	res = 3968; 
	__iv__return_expr_time1 = 3968; 
}
void SensorValue_38_44(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 3; 
	res = 3; 
	__iv__return_expr_SensorValue = 3; 
}
void SensorValue_40_44(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void time1_37_53(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 4001; 
	res = 4001; 
	__iv__return_expr_time1 = 4001; 
}
void clearTimer_42_9(signed int t1){
}
void time1_43_11(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 16385; 
	res = 16385; 
	__iv__return_expr_time1 = 16385; 
}
void stopWheels_47_8(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void update_prop_automata_11_22(){
	cycle = 18; 
}
void check_property_12_22(){
}
void onPatrol_4_9(){
	sonarMax = 0; 
	clearTimer_48_9(0);
	signed int return_value_time1;
	time1_49_27(0);
	return_value_time1 = 6001; 
	clearTimer_52_9(0);
	signed int return_value_SensorValue_0;
	SensorValue_53_25(1);
	return_value_SensorValue_0 = 65436; 
	stopWheels_54_9();
	motor[0] = 52.000000; 
	motor[1] = 40.000000; 
	wait1Msec_55_9(2500);
	stopWheels_56_9();
	__iv__return_expr_onPatrol = 1; 
}
void clearTimer_48_9(signed int t1){
}
void time1_49_27(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 6001; 
	res = 6001; 
	__iv__return_expr_time1 = 6001; 
}
void clearTimer_52_9(signed int t1){
}
void SensorValue_53_25(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 65436; 
	res = 65436; 
	__iv__return_expr_SensorValue = 65436; 
}
void stopWheels_54_9(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void wait1Msec_55_9(signed int sec){
}
void stopWheels_56_9(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void update_prop_automata_11_23(){
	cycle = 19; 
}
void check_property_12_23(){
}
void primaryScan_2_10(){
	IRMax = 0; 
	sonarMax = 0; 
	clearTimer_36_10(0);
	signed int return_value_time1;
	time1_37_54(0);
	return_value_time1 = 3745; 
	signed int return_value_SensorValue;
	SensorValue_38_45(2);
	return_value_SensorValue = 0; 
	signed int return_value_SensorValue_0;
	SensorValue_40_45(2);
	return_value_SensorValue_0 = 512; 
	motor[0] = -39.000000; 
	motor[1] = 30.000000; 
	time1_37_55(0);
	return_value_time1 = 36736; 
	clearTimer_42_10(0);
	signed int return_value_time1_0;
	time1_43_12(0);
	return_value_time1_0 = 4001; 
	stopWheels_47_9();
	__iv__return_expr_primaryScan = 3; 
}
void clearTimer_36_10(signed int t1){
}
void time1_37_54(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 3745; 
	res = 3745; 
	__iv__return_expr_time1 = 3745; 
}
void SensorValue_38_45(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 0; 
	res = 0; 
	__iv__return_expr_SensorValue = 0; 
}
void SensorValue_40_45(signed int sensor){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 512; 
	res = 512; 
	__iv__return_expr_SensorValue = 512; 
}
void time1_37_55(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 36736; 
	res = 36736; 
	__iv__return_expr_time1 = 36736; 
}
void clearTimer_42_10(signed int t1){
}
void time1_43_12(signed int t1){
	signed int res;
	signed int return_value___VERIFIER_nondet_unsigned_int;
	return_value___VERIFIER_nondet_unsigned_int = 4001; 
	res = 4001; 
	__iv__return_expr_time1 = 4001; 
}
void stopWheels_47_9(){
	float tmp_assign;
	tmp_assign = 0.000000; 
	motor[1] = 0.000000; 
	motor[0] = 0.000000; 
}
void update_prop_automata_11_24(){
	cycle = 20; 
	state = 2; 
}
void check_property_12_24(){
	__CPROVER_printf("violated property: Node_14_503"); assert(0);
}
