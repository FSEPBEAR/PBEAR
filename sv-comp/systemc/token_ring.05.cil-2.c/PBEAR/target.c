#include <assert.h>
#include <stdlib.h>
#ifndef TRUE
#define TRUE 1
#endif
#ifndef FALSE
#define FALSE 0
#endif
void activate_threads(void);
void error(void);
void eval(void);
signed int exists_runnable_thread(void);
void fire_delta_events(void);
void fire_time_events(void);
void immediate_notify(void);
void init_model(void);
void init_threads(void);
signed int is_master_triggered(void);
signed int is_transmit1_triggered(void);
signed int is_transmit2_triggered(void);
signed int is_transmit3_triggered(void);
signed int is_transmit4_triggered(void);
signed int is_transmit5_triggered(void);
void master(void);
void reach_error();
void reset_delta_events(void);
void reset_time_events(void);
void start_simulation(void);
signed int stop_simulation(void);
void transmit1(void);
void transmit2(void);
void transmit3(void);
void transmit4(void);
void transmit5(void);
void update_channels(void);
signed int E_1=2;
signed int E_2=2;
signed int E_3=2;
signed int E_4=2;
signed int E_5=2;
signed int E_M=2;
signed int M_E=2;
signed int T1_E=2;
signed int T2_E=2;
signed int T3_E=2;
signed int T4_E=2;
signed int T5_E=2;
signed int local;
signed int m_i;
signed int m_pc=0;
signed int m_st;
signed int t1_i;
signed int t1_pc=0;
signed int t1_st;
signed int t2_i;
signed int t2_pc=0;
signed int t2_st;
signed int t3_i;
signed int t3_pc=0;
signed int t3_st;
signed int t4_i;
signed int t4_pc=0;
signed int t4_st;
signed int t5_i;
signed int t5_pc=0;
signed int t5_st;
signed int token;
extern signed int __VERIFIER_nondet_signed_int();
signed int __iv__exists_runnable_thread_stub();
int main() {
	signed int __retres1;
	init_model();
	start_simulation();
	__retres1 = 0;
	return __retres1;
}
void start_simulation() {
	signed int kernel_st;
	signed int tmp;
	signed int tmp___0;
	kernel_st = 0;
	update_channels();
	init_threads();
	fire_delta_events();
	activate_threads();
	reset_delta_events();
	Node_2_22:;
	if (!((1 != 0))) goto Node_2_44;
	kernel_st = 1;
	eval();
	kernel_st = 2;
	update_channels();
	kernel_st = 3;
	fire_delta_events();
	activate_threads();
	reset_delta_events();
	tmp = exists_runnable_thread();
	if (!((tmp == 0))) goto Node_2_38;
	kernel_st = 4;
	fire_time_events();
	activate_threads();
	reset_time_events();
	Node_2_38:;
	tmp___0 = stop_simulation();
	if ((tmp___0 != 0)) goto Node_2_45;
	goto Node_2_22;
	Node_2_44:;
	Node_2_45:;
	goto Node_2_50;
	Node_2_50:;
	// End of Function
}
void error() {
	reach_error();
	abort();
}
signed int is_transmit4_triggered() {
	signed int __retres1;
	if (!((t4_pc == 1))) goto Node_4_61;
	if (!((E_4 == 1))) goto Node_4_60;
	__retres1 = 1;
	goto Node_4_63;
	Node_4_60:;
	Node_4_61:;
	__retres1 = 0;
	Node_4_63:;
	return __retres1;
}
void reach_error() {
	if (!(FALSE)) __CPROVER_printf("violated property: Node_5_67");
	assert(FALSE);
	// End of Function
}
signed int stop_simulation() {
	signed int tmp;
	signed int __retres2;
	tmp = exists_runnable_thread();
	if (!((tmp != 0))) goto Node_6_75;
	__retres2 = 0;
	goto Node_6_77;
	Node_6_75:;
	__retres2 = 1;
	Node_6_77:;
	return __retres2;
}
void eval() {
	signed int tmp;
	Node_7_83:;
	if (!((1 != 0))) goto Node_7_144;
	tmp = __iv__exists_runnable_thread_stub();
	if (!((tmp != 0))) goto Node_7_145;
	if (!((m_st == 0))) goto Node_7_97;
	signed int tmp_ndt_1;
	tmp_ndt_1 = __VERIFIER_nondet_signed_int();
	__CPROVER_printf("__iv__test_case:%d", tmp_ndt_1);
	if (!((tmp_ndt_1 != 0))) goto Node_7_95;
	m_st = 1;
	master();
	Node_7_95:;
	Node_7_97:;
	if (!((t1_st == 0))) goto Node_7_106;
	signed int tmp_ndt_2;
	tmp_ndt_2 = __VERIFIER_nondet_signed_int();
	__CPROVER_printf("__iv__test_case:%d", tmp_ndt_2);
	if (!((tmp_ndt_2 != 0))) goto Node_7_104;
	t1_st = 1;
	transmit1();
	Node_7_104:;
	Node_7_106:;
	if (!((t2_st == 0))) goto Node_7_115;
	signed int tmp_ndt_3;
	tmp_ndt_3 = __VERIFIER_nondet_signed_int();
	__CPROVER_printf("__iv__test_case:%d", tmp_ndt_3);
	if (!((tmp_ndt_3 != 0))) goto Node_7_113;
	t2_st = 1;
	transmit2();
	Node_7_113:;
	Node_7_115:;
	if (!((t3_st == 0))) goto Node_7_124;
	signed int tmp_ndt_4;
	tmp_ndt_4 = __VERIFIER_nondet_signed_int();
	__CPROVER_printf("__iv__test_case:%d", tmp_ndt_4);
	if (!((tmp_ndt_4 != 0))) goto Node_7_122;
	t3_st = 1;
	transmit3();
	Node_7_122:;
	Node_7_124:;
	if (!((t4_st == 0))) goto Node_7_133;
	signed int tmp_ndt_5;
	tmp_ndt_5 = __VERIFIER_nondet_signed_int();
	__CPROVER_printf("__iv__test_case:%d", tmp_ndt_5);
	if (!((tmp_ndt_5 != 0))) goto Node_7_131;
	t4_st = 1;
	transmit4();
	Node_7_131:;
	Node_7_133:;
	if (!((t5_st == 0))) goto Node_7_142;
	signed int tmp_ndt_6;
	tmp_ndt_6 = __VERIFIER_nondet_signed_int();
	__CPROVER_printf("__iv__test_case:%d", tmp_ndt_6);
	if (!((tmp_ndt_6 != 0))) goto Node_7_140;
	t5_st = 1;
	transmit5();
	Node_7_140:;
	Node_7_142:;
	goto Node_7_83;
	Node_7_144:;
	Node_7_145:;
	goto Node_7_148;
	Node_7_148:;
	// End of Function
}
signed int is_transmit3_triggered() {
	signed int __retres1;
	if (!((t3_pc == 1))) goto Node_8_155;
	if (!((E_3 == 1))) goto Node_8_154;
	__retres1 = 1;
	goto Node_8_157;
	Node_8_154:;
	Node_8_155:;
	__retres1 = 0;
	Node_8_157:;
	return __retres1;
}
void transmit1() {
	if (!((t1_pc == 0))) goto Node_9_164;
	goto Node_9_168;
	Node_9_164:;
	if ((t1_pc == 1)) goto Node_9_174;
	Node_9_168:;
	Node_9_169:;
	if (!((1 != 0))) goto Node_9_179;
	t1_pc = 1;
	t1_st = 2;
	goto Node_9_181;
	Node_9_174:;
	token = (token + 1);
	E_2 = 1;
	immediate_notify();
	E_2 = 2;
	goto Node_9_169;
	Node_9_179:;
	Node_9_181:;
	goto Node_9_182;
	Node_9_182:;
	// End of Function
}
void transmit2() {
	if (!((t2_pc == 0))) goto Node_10_186;
	goto Node_10_190;
	Node_10_186:;
	if ((t2_pc == 1)) goto Node_10_196;
	Node_10_190:;
	Node_10_191:;
	if (!((1 != 0))) goto Node_10_201;
	t2_pc = 1;
	t2_st = 2;
	goto Node_10_203;
	Node_10_196:;
	token = (token + 1);
	E_3 = 1;
	immediate_notify();
	E_3 = 2;
	goto Node_10_191;
	Node_10_201:;
	Node_10_203:;
	goto Node_10_204;
	Node_10_204:;
	// End of Function
}
signed int is_transmit5_triggered() {
	signed int __retres1;
	if (!((t5_pc == 1))) goto Node_11_211;
	if (!((E_5 == 1))) goto Node_11_210;
	__retres1 = 1;
	goto Node_11_213;
	Node_11_210:;
	Node_11_211:;
	__retres1 = 0;
	Node_11_213:;
	return __retres1;
}
signed int is_transmit1_triggered() {
	signed int __retres1;
	if (!((t1_pc == 1))) goto Node_13_275;
	if (!((E_1 == 1))) goto Node_13_274;
	__retres1 = 1;
	goto Node_13_277;
	Node_13_274:;
	Node_13_275:;
	__retres1 = 0;
	Node_13_277:;
	return __retres1;
}
void fire_time_events() {
	M_E = 1;
	goto Node_14_283;
	Node_14_283:;
	// End of Function
}
void reset_delta_events() {
	if (!((M_E == 1))) goto Node_15_286;
	M_E = 2;
	Node_15_286:;
	if (!((T1_E == 1))) goto Node_15_289;
	T1_E = 2;
	Node_15_289:;
	if (!((T2_E == 1))) goto Node_15_292;
	T2_E = 2;
	Node_15_292:;
	if (!((T3_E == 1))) goto Node_15_295;
	T3_E = 2;
	Node_15_295:;
	if (!((T4_E == 1))) goto Node_15_298;
	T4_E = 2;
	Node_15_298:;
	if (!((T5_E == 1))) goto Node_15_301;
	T5_E = 2;
	Node_15_301:;
	if (!((E_M == 1))) goto Node_15_304;
	E_M = 2;
	Node_15_304:;
	if (!((E_1 == 1))) goto Node_15_307;
	E_1 = 2;
	Node_15_307:;
	if (!((E_2 == 1))) goto Node_15_310;
	E_2 = 2;
	Node_15_310:;
	if (!((E_3 == 1))) goto Node_15_313;
	E_3 = 2;
	Node_15_313:;
	if (!((E_4 == 1))) goto Node_15_316;
	E_4 = 2;
	Node_15_316:;
	if (!((E_5 == 1))) goto Node_15_319;
	E_5 = 2;
	Node_15_319:;
	goto Node_15_321;
	Node_15_321:;
	// End of Function
}
void immediate_notify() {
	activate_threads();
	goto Node_16_324;
	Node_16_324:;
	// End of Function
}
void reset_time_events() {
	if (!((M_E == 1))) goto Node_17_327;
	M_E = 2;
	Node_17_327:;
	if (!((T1_E == 1))) goto Node_17_330;
	T1_E = 2;
	Node_17_330:;
	if (!((T2_E == 1))) goto Node_17_333;
	T2_E = 2;
	Node_17_333:;
	if (!((T3_E == 1))) goto Node_17_336;
	T3_E = 2;
	Node_17_336:;
	if (!((T4_E == 1))) goto Node_17_339;
	T4_E = 2;
	Node_17_339:;
	if (!((T5_E == 1))) goto Node_17_342;
	T5_E = 2;
	Node_17_342:;
	if (!((E_M == 1))) goto Node_17_345;
	E_M = 2;
	Node_17_345:;
	if (!((E_1 == 1))) goto Node_17_348;
	E_1 = 2;
	Node_17_348:;
	if (!((E_2 == 1))) goto Node_17_351;
	E_2 = 2;
	Node_17_351:;
	if (!((E_3 == 1))) goto Node_17_354;
	E_3 = 2;
	Node_17_354:;
	if (!((E_4 == 1))) goto Node_17_357;
	E_4 = 2;
	Node_17_357:;
	if (!((E_5 == 1))) goto Node_17_360;
	E_5 = 2;
	Node_17_360:;
	goto Node_17_362;
	Node_17_362:;
	// End of Function
}
void activate_threads() {
	signed int tmp;
	signed int tmp___0;
	signed int tmp___1;
	signed int tmp___2;
	signed int tmp___3;
	signed int tmp___4;
	tmp = is_master_triggered();
	if (!((tmp != 0))) goto Node_18_372;
	m_st = 0;
	Node_18_372:;
	tmp___0 = is_transmit1_triggered();
	if (!((tmp___0 != 0))) goto Node_18_376;
	t1_st = 0;
	Node_18_376:;
	tmp___1 = is_transmit2_triggered();
	if (!((tmp___1 != 0))) goto Node_18_380;
	t2_st = 0;
	Node_18_380:;
	tmp___2 = is_transmit3_triggered();
	if (!((tmp___2 != 0))) goto Node_18_384;
	t3_st = 0;
	Node_18_384:;
	tmp___3 = is_transmit4_triggered();
	if (!((tmp___3 != 0))) goto Node_18_388;
	t4_st = 0;
	Node_18_388:;
	tmp___4 = is_transmit5_triggered();
	if (!((tmp___4 != 0))) goto Node_18_392;
	t5_st = 0;
	Node_18_392:;
	goto Node_18_400;
	Node_18_400:;
	// End of Function
}
void init_threads() {
	if (!((m_i == 1))) goto Node_19_404;
	m_st = 0;
	goto Node_19_405;
	Node_19_404:;
	m_st = 2;
	Node_19_405:;
	if (!((t1_i == 1))) goto Node_19_409;
	t1_st = 0;
	goto Node_19_410;
	Node_19_409:;
	t1_st = 2;
	Node_19_410:;
	if (!((t2_i == 1))) goto Node_19_414;
	t2_st = 0;
	goto Node_19_415;
	Node_19_414:;
	t2_st = 2;
	Node_19_415:;
	if (!((t3_i == 1))) goto Node_19_419;
	t3_st = 0;
	goto Node_19_420;
	Node_19_419:;
	t3_st = 2;
	Node_19_420:;
	if (!((t4_i == 1))) goto Node_19_424;
	t4_st = 0;
	goto Node_19_425;
	Node_19_424:;
	t4_st = 2;
	Node_19_425:;
	if (!((t5_i == 1))) goto Node_19_429;
	t5_st = 0;
	goto Node_19_430;
	Node_19_429:;
	t5_st = 2;
	Node_19_430:;
	goto Node_19_432;
	Node_19_432:;
	// End of Function
}
void transmit4() {
	if (!((t4_pc == 0))) goto Node_20_436;
	goto Node_20_440;
	Node_20_436:;
	if ((t4_pc == 1)) goto Node_20_446;
	Node_20_440:;
	Node_20_441:;
	if (!((1 != 0))) goto Node_20_451;
	t4_pc = 1;
	t4_st = 2;
	goto Node_20_453;
	Node_20_446:;
	token = (token + 1);
	E_5 = 1;
	immediate_notify();
	E_5 = 2;
	goto Node_20_441;
	Node_20_451:;
	Node_20_453:;
	goto Node_20_454;
	Node_20_454:;
	// End of Function
}
void fire_delta_events() {
	if (!((M_E == 0))) goto Node_21_457;
	M_E = 1;
	Node_21_457:;
	if (!((T1_E == 0))) goto Node_21_460;
	T1_E = 1;
	Node_21_460:;
	if (!((T2_E == 0))) goto Node_21_463;
	T2_E = 1;
	Node_21_463:;
	if (!((T3_E == 0))) goto Node_21_466;
	T3_E = 1;
	Node_21_466:;
	if (!((T4_E == 0))) goto Node_21_469;
	T4_E = 1;
	Node_21_469:;
	if (!((T5_E == 0))) goto Node_21_472;
	T5_E = 1;
	Node_21_472:;
	if (!((E_M == 0))) goto Node_21_475;
	E_M = 1;
	Node_21_475:;
	if (!((E_1 == 0))) goto Node_21_478;
	E_1 = 1;
	Node_21_478:;
	if (!((E_2 == 0))) goto Node_21_481;
	E_2 = 1;
	Node_21_481:;
	if (!((E_3 == 0))) goto Node_21_484;
	E_3 = 1;
	Node_21_484:;
	if (!((E_4 == 0))) goto Node_21_487;
	E_4 = 1;
	Node_21_487:;
	if (!((E_5 == 0))) goto Node_21_490;
	E_5 = 1;
	Node_21_490:;
	goto Node_21_492;
	Node_21_492:;
	// End of Function
}
void transmit5() {
	if (!((t5_pc == 0))) goto Node_22_496;
	goto Node_22_500;
	Node_22_496:;
	if ((t5_pc == 1)) goto Node_22_506;
	Node_22_500:;
	Node_22_501:;
	if (!((1 != 0))) goto Node_22_511;
	t5_pc = 1;
	t5_st = 2;
	goto Node_22_513;
	Node_22_506:;
	token = (token + 1);
	E_M = 1;
	immediate_notify();
	E_M = 2;
	goto Node_22_501;
	Node_22_511:;
	Node_22_513:;
	goto Node_22_514;
	Node_22_514:;
	// End of Function
}
signed int is_master_triggered() {
	signed int __retres1;
	if (!((m_pc == 1))) goto Node_23_521;
	if (!((E_M == 1))) goto Node_23_520;
	__retres1 = 1;
	goto Node_23_523;
	Node_23_520:;
	Node_23_521:;
	__retres1 = 0;
	Node_23_523:;
	return __retres1;
}
void update_channels() {
	goto Node_24_528;
	Node_24_528:;
	// End of Function
}
signed int is_transmit2_triggered() {
	signed int __retres1;
	if (!((t2_pc == 1))) goto Node_25_535;
	if (!((E_2 == 1))) goto Node_25_534;
	__retres1 = 1;
	goto Node_25_537;
	Node_25_534:;
	Node_25_535:;
	__retres1 = 0;
	Node_25_537:;
	return __retres1;
}
void master() {
	signed int tmp_var;
	tmp_var = __VERIFIER_nondet_signed_int();
	__CPROVER_printf("__iv__test_case:%d", tmp_var);
	if (!((m_pc == 0))) goto Node_26_548;
	goto Node_26_552;
	Node_26_548:;
	if ((m_pc == 1)) goto Node_26_563;
	Node_26_552:;
	Node_26_553:;
	if (!((1 != 0))) goto Node_26_580;
	token = __VERIFIER_nondet_signed_int();
	__CPROVER_printf("__iv__test_case:%d", token);
	local = token;
	E_1 = 1;
	immediate_notify();
	E_1 = 2;
	m_pc = 1;
	m_st = 2;
	goto Node_26_582;
	Node_26_563:;
	if (!((token != (local + 5)))) goto Node_26_567;
	error();
	goto Node_26_578;
	Node_26_567:;
	if (!((tmp_var <= 5))) goto Node_26_570;
	if ((tmp_var >= 5)) goto Node_26_569;
	Node_26_569:;
	Node_26_570:;
	if (!((tmp_var <= 5))) goto Node_26_577;
	if (!((tmp_var >= 5))) goto Node_26_576;
	if (!((tmp_var == 5))) goto Node_26_575;
	error();
	Node_26_575:;
	Node_26_576:;
	Node_26_577:;
	Node_26_578:;
	goto Node_26_553;
	Node_26_580:;
	Node_26_582:;
	goto Node_26_585;
	Node_26_585:;
	// End of Function
}
void transmit3() {
	if (!((t3_pc == 0))) goto Node_27_589;
	goto Node_27_593;
	Node_27_589:;
	if ((t3_pc == 1)) goto Node_27_599;
	Node_27_593:;
	Node_27_594:;
	if (!((1 != 0))) goto Node_27_604;
	t3_pc = 1;
	t3_st = 2;
	goto Node_27_606;
	Node_27_599:;
	token = (token + 1);
	E_4 = 1;
	immediate_notify();
	E_4 = 2;
	goto Node_27_594;
	Node_27_604:;
	Node_27_606:;
	goto Node_27_607;
	Node_27_607:;
	// End of Function
}
signed int exists_runnable_thread() {
	signed int __retres1;
	if (!((m_st == 0))) goto Node_28_613;
	__retres1 = 1;
	goto Node_28_639;
	Node_28_613:;
	if (!((t1_st == 0))) goto Node_28_617;
	__retres1 = 1;
	goto Node_28_639;
	Node_28_617:;
	if (!((t2_st == 0))) goto Node_28_621;
	__retres1 = 1;
	goto Node_28_639;
	Node_28_621:;
	if (!((t3_st == 0))) goto Node_28_625;
	__retres1 = 1;
	goto Node_28_639;
	Node_28_625:;
	if (!((t4_st == 0))) goto Node_28_629;
	__retres1 = 1;
	goto Node_28_639;
	Node_28_629:;
	if (!((t5_st == 0))) goto Node_28_632;
	__retres1 = 1;
	goto Node_28_639;
	Node_28_632:;
	__retres1 = 0;
	Node_28_639:;
	return __retres1;
}
void init_model() {
	m_i = 1;
	t1_i = 1;
	t2_i = 1;
	t3_i = 1;
	t4_i = 1;
	t5_i = 1;
	goto Node_29_650;
	Node_29_650:;
	// End of Function
}
signed int __iv__exists_runnable_thread_stub(){
	__CPROVER_printf("__iv__stub_call:exists_runnable_thread");
	__CPROVER_printf("__iv__stub_input:t1_st=%d", t1_st);
	__CPROVER_printf("__iv__stub_input:t2_st=%d", t2_st);
	__CPROVER_printf("__iv__stub_input:t3_st=%d", t3_st);
	__CPROVER_printf("__iv__stub_input:t4_st=%d", t4_st);
	__CPROVER_printf("__iv__stub_input:t5_st=%d", t5_st);
	__CPROVER_printf("__iv__stub_input:m_st=%d", m_st);
	signed int __iv__return_expr_exists_runnable_thread = __VERIFIER_nondet_signed_int();
	__CPROVER_assume(__iv__return_expr_exists_runnable_thread == 0 || __iv__return_expr_exists_runnable_thread == 1);
	__CPROVER_printf("__iv__stub_output:__iv__return_expr_exists_runnable_thread=%d", __iv__return_expr_exists_runnable_thread);
	return __iv__return_expr_exists_runnable_thread;
}
