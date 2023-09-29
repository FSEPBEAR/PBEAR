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
void master(void);
void reach_error();
void reset_delta_events(void);
void reset_time_events(void);
void start_simulation(void);
signed int stop_simulation(void);
void transmit1(void);
void update_channels(void);
signed int E_1=2;
signed int E_M=2;
signed int M_E=2;
signed int T1_E=2;
signed int local;
signed int m_i;
signed int m_pc=0;
signed int m_st;
signed int t1_i;
signed int t1_pc=0;
signed int t1_st;
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
void master() {
	signed int tmp_var;
	tmp_var = __VERIFIER_nondet_signed_int();
	__CPROVER_printf("__iv__test_case:%d", tmp_var);
	if (!((m_pc == 0))) goto Node_2_20;
	goto Node_2_24;
	Node_2_20:;
	if ((m_pc == 1)) goto Node_2_35;
	Node_2_24:;
	Node_2_25:;
	if (!((1 != 0))) goto Node_2_52;
	token = __VERIFIER_nondet_signed_int();
	__CPROVER_printf("__iv__test_case:%d", token);
	local = token;
	E_1 = 1;
	immediate_notify();
	E_1 = 2;
	m_pc = 1;
	m_st = 2;
	goto Node_2_54;
	Node_2_35:;
	if (!((token != (local + 1)))) goto Node_2_39;
	error();
	goto Node_2_50;
	Node_2_39:;
	if (!((tmp_var <= 5))) goto Node_2_42;
	if ((tmp_var >= 5)) goto Node_2_41;
	Node_2_41:;
	Node_2_42:;
	if (!((tmp_var <= 5))) goto Node_2_49;
	if (!((tmp_var >= 5))) goto Node_2_48;
	if (!((tmp_var == 5))) goto Node_2_47;
	error();
	Node_2_47:;
	Node_2_48:;
	Node_2_49:;
	Node_2_50:;
	goto Node_2_25;
	Node_2_52:;
	Node_2_54:;
	goto Node_2_57;
	Node_2_57:;
	// End of Function
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
	Node_3_67:;
	if (!((1 != 0))) goto Node_3_89;
	kernel_st = 1;
	eval();
	kernel_st = 2;
	update_channels();
	kernel_st = 3;
	fire_delta_events();
	activate_threads();
	reset_delta_events();
	tmp = exists_runnable_thread();
	if (!((tmp == 0))) goto Node_3_83;
	kernel_st = 4;
	fire_time_events();
	activate_threads();
	reset_time_events();
	Node_3_83:;
	tmp___0 = stop_simulation();
	if ((tmp___0 != 0)) goto Node_3_90;
	goto Node_3_67;
	Node_3_89:;
	Node_3_90:;
	goto Node_3_95;
	Node_3_95:;
	// End of Function
}
void init_model() {
	m_i = 1;
	t1_i = 1;
	goto Node_4_99;
	Node_4_99:;
	// End of Function
}
void reset_time_events() {
	if (!((M_E == 1))) goto Node_5_102;
	M_E = 2;
	Node_5_102:;
	if (!((T1_E == 1))) goto Node_5_105;
	T1_E = 2;
	Node_5_105:;
	if (!((E_M == 1))) goto Node_5_108;
	E_M = 2;
	Node_5_108:;
	if (!((E_1 == 1))) goto Node_5_111;
	E_1 = 2;
	Node_5_111:;
	goto Node_5_113;
	Node_5_113:;
	// End of Function
}
void fire_time_events() {
	M_E = 1;
	goto Node_6_116;
	Node_6_116:;
	// End of Function
}
void eval() {
	signed int tmp;
	Node_7_118:;
	if (!((1 != 0))) goto Node_7_143;
	tmp = __iv__exists_runnable_thread_stub();
	if (!((tmp != 0))) goto Node_7_144;
	if (!((m_st == 0))) goto Node_7_132;
	signed int tmp_ndt_1;
	tmp_ndt_1 = __VERIFIER_nondet_signed_int();
	__CPROVER_printf("__iv__test_case:%d", tmp_ndt_1);
	if (!((tmp_ndt_1 != 0))) goto Node_7_130;
	m_st = 1;
	master();
	Node_7_130:;
	Node_7_132:;
	if (!((t1_st == 0))) goto Node_7_141;
	signed int tmp_ndt_2;
	tmp_ndt_2 = __VERIFIER_nondet_signed_int();
	__CPROVER_printf("__iv__test_case:%d", tmp_ndt_2);
	if (!((tmp_ndt_2 != 0))) goto Node_7_139;
	t1_st = 1;
	transmit1();
	Node_7_139:;
	Node_7_141:;
	goto Node_7_118;
	Node_7_143:;
	Node_7_144:;
	goto Node_7_147;
	Node_7_147:;
	// End of Function
}
signed int exists_runnable_thread() {
	signed int __retres1;
	if (!((m_st == 0))) goto Node_8_153;
	__retres1 = 1;
	goto Node_8_159;
	Node_8_153:;
	if (!((t1_st == 0))) goto Node_8_156;
	__retres1 = 1;
	goto Node_8_159;
	Node_8_156:;
	__retres1 = 0;
	Node_8_159:;
	return __retres1;
}
signed int is_transmit1_triggered() {
	signed int __retres1;
	if (!((t1_pc == 1))) goto Node_9_169;
	if (!((E_1 == 1))) goto Node_9_168;
	__retres1 = 1;
	goto Node_9_171;
	Node_9_168:;
	Node_9_169:;
	__retres1 = 0;
	Node_9_171:;
	return __retres1;
}
void transmit1() {
	if (!((t1_pc == 0))) goto Node_10_178;
	goto Node_10_182;
	Node_10_178:;
	if ((t1_pc == 1)) goto Node_10_188;
	Node_10_182:;
	Node_10_183:;
	if (!((1 != 0))) goto Node_10_193;
	t1_pc = 1;
	t1_st = 2;
	goto Node_10_195;
	Node_10_188:;
	token = (token + 1);
	E_M = 1;
	immediate_notify();
	E_M = 2;
	goto Node_10_183;
	Node_10_193:;
	Node_10_195:;
	goto Node_10_196;
	Node_10_196:;
	// End of Function
}
signed int stop_simulation() {
	signed int tmp;
	signed int __retres2;
	tmp = exists_runnable_thread();
	if (!((tmp != 0))) goto Node_11_203;
	__retres2 = 0;
	goto Node_11_205;
	Node_11_203:;
	__retres2 = 1;
	Node_11_205:;
	return __retres2;
}
void activate_threads() {
	signed int tmp;
	signed int tmp___0;
	tmp = is_master_triggered();
	if (!((tmp != 0))) goto Node_12_215;
	m_st = 0;
	Node_12_215:;
	tmp___0 = is_transmit1_triggered();
	if (!((tmp___0 != 0))) goto Node_12_219;
	t1_st = 0;
	Node_12_219:;
	goto Node_12_223;
	Node_12_223:;
	// End of Function
}
signed int is_master_triggered() {
	signed int __retres1;
	if (!((m_pc == 1))) goto Node_14_262;
	if (!((E_M == 1))) goto Node_14_261;
	__retres1 = 1;
	goto Node_14_264;
	Node_14_261:;
	Node_14_262:;
	__retres1 = 0;
	Node_14_264:;
	return __retres1;
}
void init_threads() {
	if (!((m_i == 1))) goto Node_15_271;
	m_st = 0;
	goto Node_15_272;
	Node_15_271:;
	m_st = 2;
	Node_15_272:;
	if (!((t1_i == 1))) goto Node_15_276;
	t1_st = 0;
	goto Node_15_277;
	Node_15_276:;
	t1_st = 2;
	Node_15_277:;
	goto Node_15_279;
	Node_15_279:;
	// End of Function
}
void immediate_notify() {
	activate_threads();
	goto Node_16_282;
	Node_16_282:;
	// End of Function
}
void update_channels() {
	goto Node_17_284;
	Node_17_284:;
	// End of Function
}
void fire_delta_events() {
	if (!((M_E == 0))) goto Node_18_287;
	M_E = 1;
	Node_18_287:;
	if (!((T1_E == 0))) goto Node_18_290;
	T1_E = 1;
	Node_18_290:;
	if (!((E_M == 0))) goto Node_18_293;
	E_M = 1;
	Node_18_293:;
	if (!((E_1 == 0))) goto Node_18_296;
	E_1 = 1;
	Node_18_296:;
	goto Node_18_298;
	Node_18_298:;
	// End of Function
}
void reach_error() {
	if (!(FALSE)) __CPROVER_printf("violated property: Node_19_299");
	assert(FALSE);
	// End of Function
}
void error() {
	reach_error();
	abort();
}
void reset_delta_events() {
	if (!((M_E == 1))) goto Node_21_307;
	M_E = 2;
	Node_21_307:;
	if (!((T1_E == 1))) goto Node_21_310;
	T1_E = 2;
	Node_21_310:;
	if (!((E_M == 1))) goto Node_21_313;
	E_M = 2;
	Node_21_313:;
	if (!((E_1 == 1))) goto Node_21_316;
	E_1 = 2;
	Node_21_316:;
	goto Node_21_318;
	Node_21_318:;
	// End of Function
}
signed int __iv__exists_runnable_thread_stub(){
	__CPROVER_printf("__iv__stub_call:exists_runnable_thread");
	__CPROVER_printf("__iv__stub_input:m_st=%d", m_st);
	__CPROVER_printf("__iv__stub_input:t1_st=%d", t1_st);
	signed int __iv__return_expr_exists_runnable_thread = __VERIFIER_nondet_signed_int();
	__CPROVER_assume(__iv__return_expr_exists_runnable_thread == 0 || __iv__return_expr_exists_runnable_thread == 1);
	__CPROVER_printf("__iv__stub_output:__iv__return_expr_exists_runnable_thread=%d", __iv__return_expr_exists_runnable_thread);
	return __iv__return_expr_exists_runnable_thread;
}
