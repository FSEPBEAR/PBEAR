int __iv__current_func_call;
#include <assert.h>
#include <stdlib.h>
#ifndef TRUE
#define TRUE 1
#endif
#ifndef FALSE
#define FALSE 0
#endif
void __VERIFIER_assert(int cond);
void assume_abort_if_not(signed int cond);
float f(float x);
float fp(float x);
signed char gcd_test(signed char a, signed char b);
signed int main1();
signed int main2();
void reach_error();
extern float __VERIFIER_nondet_float();
extern signed int __VERIFIER_nondet_signed_int();
extern char __VERIFIER_nondet_char();
float f(float x) {
	return (((x - (((x * x) * x) / 6.0f)) + (((((x * x) * x) * x) * x) / 120.0f)) + (((((((x * x) * x) * x) * x) * x) * x) / 5040.0f));
}
int main() {
	signed int return_value___VERIFIER_nondet_int;
	return_value___VERIFIER_nondet_int = __VERIFIER_nondet_signed_int();
	if (!((return_value___VERIFIER_nondet_int != 0))) goto Node_1_8;
__iv__current_func_call = 1;	main1();
	goto Node_1_9;
	Node_1_8:;
__iv__current_func_call = 2;	main2();
	Node_1_9:;
	// End of Function
}
signed int main2() {
	float IN;
	IN = __VERIFIER_nondet_float();
__iv__current_func_call = 5;	assume_abort_if_not((signed int)(((IN > -1.4f) && (IN < 1.4f))));
	float x;
	float return_value_f;
__iv__current_func_call = 6;	return_value_f = f(IN);
	float return_value_fp;
__iv__current_func_call = 7;	return_value_fp = fp(IN);
	x = (IN - (return_value_f / return_value_fp));
	float return_value_f_0;
__iv__current_func_call = 8;	return_value_f_0 = f(x);
	float return_value_fp_0;
__iv__current_func_call = 9;	return_value_fp_0 = fp(x);
	x = (x - (return_value_f_0 / return_value_fp_0));
	float return_value_f_1;
__iv__current_func_call = 10;	return_value_f_1 = f(x);
	float return_value_fp_1;
__iv__current_func_call = 11;	return_value_fp_1 = fp(x);
	x = (x - (return_value_f_1 / return_value_fp_1));
	if (((double)(x) < 0.1)) goto Node_3_41;
__iv__current_func_call = 12;	reach_error();
	Node_3_41:;
	return 0;
}
float fp(float x) {
	return ((((float)(1) - ((x * x) / 2.0f)) + ((((x * x) * x) * x) / 24.0f)) + ((((((x * x) * x) * x) * x) * x) / 720.0f));
}
void assume_abort_if_not(signed int cond) {
	if ((cond != 0)) goto Node_5_59;
	abort();
	Node_5_59:;
	// End of Function
}
signed int main1() {
	signed char x;
	x = __VERIFIER_nondet_char();
	signed char y;
	y = __VERIFIER_nondet_char();
	signed char g;
__iv__current_func_call = 16;	g = gcd_test(x, y);
	if (!(((signed int)(x) > (signed int)((signed char)(0))))) goto Node_6_73;
__iv__current_func_call = 17;	__VERIFIER_assert((signed int)(((signed int)(x) >= (signed int)(g))));
	Node_6_73:;
	return 0;
}
signed char gcd_test(signed char a, signed char b) {
	signed char t;
	if (!(((signed int)(a) < (signed int)((signed char)(0))))) goto Node_8_105;
	a = (signed char)(-(signed int)(a));
	Node_8_105:;
	if (!(((signed int)(b) < (signed int)((signed char)(0))))) goto Node_8_108;
	b = (signed char)(-(signed int)(b));
	Node_8_108:;
	Node_8_109:;
	if (!((b != (signed char)(0)))) goto Node_8_114;
	t = b;
	b = (signed char)(((signed int)(a) % (signed int)(b)));
	a = t;
	goto Node_8_109;
	Node_8_114:;
	return a;
}
void reach_error() {
	assert(FALSE);
	// End of Function
}
void __VERIFIER_assert(int cond) {
	if ((cond != 0)) goto Node_10_124;
__iv__current_func_call = 19;	reach_error();
	abort();
	Node_10_124:;
	goto Node_10_126;
	Node_10_126:;
	// End of Function
}
