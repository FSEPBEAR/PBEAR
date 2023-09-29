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
extern char __VERIFIER_nondet_char();
extern signed int __VERIFIER_nondet_signed_int();
extern float __VERIFIER_nondet_float();
signed char __iv__gcd_test_stub(signed char a, signed char b);
float f(float x) {
	return (((x - (((x * x) * x) / 6.0f)) + (((((x * x) * x) * x) * x) / 120.0f)) + (((((((x * x) * x) * x) * x) * x) * x) / 5040.0f));
}
int main() {
	signed int return_value___VERIFIER_nondet_int;
	return_value___VERIFIER_nondet_int = __VERIFIER_nondet_signed_int();
	__CPROVER_printf("__iv__test_case:%d", return_value___VERIFIER_nondet_int);
	if (!((return_value___VERIFIER_nondet_int != 0))) goto Node_1_8;
	main1();
	goto Node_1_9;
	Node_1_8:;
	main2();
	Node_1_9:;
	// End of Function
}
signed int main2() {
	float IN;
	IN = __VERIFIER_nondet_float();
	__CPROVER_printf("__iv__test_case:%f", IN);
	assume_abort_if_not((signed int)(((IN > -0.8f) && (IN < 0.8f))));
	float x;
	float return_value_f;
	return_value_f = f(IN);
	float return_value_fp;
	return_value_fp = fp(IN);
	x = (IN - (return_value_f / return_value_fp));
	if (((double)(x) < 0.1)) goto Node_3_31;
	reach_error();
	Node_3_31:;
	return 0;
}
float fp(float x) {
	return ((((float)(1) - ((x * x) / 2.0f)) + ((((x * x) * x) * x) / 24.0f)) + ((((((x * x) * x) * x) * x) * x) / 720.0f));
}
void assume_abort_if_not(signed int cond) {
	if ((cond != 0)) goto Node_5_45;
	abort();
	Node_5_45:;
	// End of Function
}
signed int main1() {
	signed char x;
	x = __VERIFIER_nondet_char();
	__CPROVER_printf("__iv__test_case:%d", x);
	signed char y;
	y = __VERIFIER_nondet_char();
	__CPROVER_printf("__iv__test_case:%d", y);
	signed char g;
	g = __iv__gcd_test_stub(x, y);
	if (!(((signed int)(x) > (signed int)((signed char)(0))))) goto Node_6_59;
	__VERIFIER_assert((signed int)(((signed int)(x) >= (signed int)(g))));
	Node_6_59:;
	return 0;
}
signed char gcd_test(signed char a, signed char b) {
	signed char t;
	if (!(((signed int)(a) < (signed int)((signed char)(0))))) goto Node_8_91;
	a = (signed char)(-(signed int)(a));
	Node_8_91:;
	if (!(((signed int)(b) < (signed int)((signed char)(0))))) goto Node_8_94;
	b = (signed char)(-(signed int)(b));
	Node_8_94:;
	Node_8_95:;
	if (!((b != (signed char)(0)))) goto Node_8_100;
	t = b;
	b = (signed char)(((signed int)(a) % (signed int)(b)));
	a = t;
	goto Node_8_95;
	Node_8_100:;
	return a;
}
void reach_error() {
	if (!(FALSE)) __CPROVER_printf("violated property: Node_9_105");
	assert(FALSE);
	// End of Function
}
void __VERIFIER_assert(int cond) {
	if ((cond != 0)) goto Node_10_110;
	reach_error();
	abort();
	Node_10_110:;
	goto Node_10_112;
	Node_10_112:;
	// End of Function
}
signed char __iv__gcd_test_stub(signed char a, signed char b){
	__CPROVER_printf("__iv__stub_call:gcd_test");
	__CPROVER_printf("__iv__stub_input:a=%d", a);
	__CPROVER_printf("__iv__stub_input:b=%d", b);
	signed char __iv__return_expr_gcd_test;
	if((-1)>=(b%a)) __iv__return_expr_gcd_test = (0-(b%a)); else if((-1)>=a) __iv__return_expr_gcd_test = (0-a); else __iv__return_expr_gcd_test = (a-(b%a)); 
	__CPROVER_assume(__iv__return_expr_gcd_test == -128 || (-63 <= __iv__return_expr_gcd_test && __iv__return_expr_gcd_test <= 127));
	__CPROVER_printf("__iv__stub_output:__iv__return_expr_gcd_test=%d", __iv__return_expr_gcd_test);
	return __iv__return_expr_gcd_test;
}
