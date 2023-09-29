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
float f(float x) {
	return (((x - (((x * x) * x) / 6.0f)) + (((((x * x) * x) * x) * x) / 120.0f)) + (((((((x * x) * x) * x) * x) * x) * x) / 5040.0f));
}
signed int main2() {
	float IN;
	IN = __VERIFIER_nondet_float();
	__CPROVER_printf("__iv__test_case:%f", IN);
	assume_abort_if_not((signed int)(((IN > -1.2f) && (IN < 1.2f))));
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
	if (!((((signed int)(y) > 0) && (((signed int)(x) % (signed int)(y)) == 0)))) goto Node_6_59;
	g = gcd_test(x, y);
	__VERIFIER_assert((signed int)((g == y)));
	Node_6_59:;
	return 0;
}
signed char gcd_test(signed char a, signed char b) {
	signed char t;
	if (!(((signed int)(a) < 0))) goto Node_8_91;
	a = (signed char)(-(signed int)(a));
	Node_8_91:;
	if (!(((signed int)(b) < 0))) goto Node_8_94;
	b = (signed char)(-(signed int)(b));
	Node_8_94:;
	Node_8_95:;
	if (!(((signed int)(b) != 0))) goto Node_8_100;
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
void main1_1_1();
void __VERIFIER_assert_13_1(int cond);
void reach_error_15_1();
signed char __iv__gcd_test_stub(signed char a, signed char b);
extern char __VERIFIER_nondet_char();
extern signed int __VERIFIER_nondet_signed_int();
extern float __VERIFIER_nondet_float();
float __iv__return_expr_f;
int __iv__return_expr_main;
signed int __iv__return_expr_main2;
float __iv__return_expr_fp;
signed int __iv__return_expr_main1;
signed char __iv__return_expr_gcd_test;
int main(){
	signed int return_value___VERIFIER_nondet_int;
	return_value___VERIFIER_nondet_int = 2048; 
	main1_1_1();
}
void main1_1_1(){
	signed char x;
	x = __VERIFIER_nondet_char(); __CPROVER_printf("__iv__test_case:%d", x);
	signed char y;
	y = __VERIFIER_nondet_char(); __CPROVER_printf("__iv__test_case:%d", y);
	signed char g;
	__CPROVER_assume(!(!((((signed int)(y) > 0) && (((signed int)(x) % (signed int)(y)) == 0)))));
	g = __iv__gcd_test_stub(x, y);
	__VERIFIER_assert_13_1((signed int)((g == y)));
}
void __VERIFIER_assert_13_1(int cond){
	__CPROVER_assume(!((cond != 0)));
	reach_error_15_1();
}
void reach_error_15_1(){
	__CPROVER_printf("violated property: Node_9_105"); assert(0);
}
signed char __iv__gcd_test_stub(signed char a, signed char b){
	__CPROVER_printf("__iv__stub_call:gcd_test");
	__CPROVER_printf("__iv__stub_input:a=%d", a);
	__CPROVER_printf("__iv__stub_input:b=%d", b);
	signed char __iv__return_expr_gcd_test;
	if((-1)>=(b%3)) __iv__return_expr_gcd_test = 17; else if(0>=b) if(1==(a%5)) __iv__return_expr_gcd_test = a; else __iv__return_expr_gcd_test = (0-a); else if(0==(b+a)) __iv__return_expr_gcd_test = b; else if(0==a) __iv__return_expr_gcd_test = b; else if(3<(b%5)) __iv__return_expr_gcd_test = b; else if(a==(b+b)) __iv__return_expr_gcd_test = b; else if(a==(3*b)) __iv__return_expr_gcd_test = b; else if(3==(b%5)) __iv__return_expr_gcd_test = b; else if(b>=2) if(a==(5*b)) __iv__return_expr_gcd_test = b; else if((-1)==(a%5)) __iv__return_expr_gcd_test = b; else if(a<b) if((a%3)>=2) __iv__return_expr_gcd_test = (b-a); else __iv__return_expr_gcd_test = b; else __iv__return_expr_gcd_test = b; else __iv__return_expr_gcd_test = 1; 
	__CPROVER_assume(__iv__return_expr_gcd_test == -128 || (-63 <= __iv__return_expr_gcd_test && __iv__return_expr_gcd_test <= 127));
	__CPROVER_printf("__iv__stub_output:__iv__return_expr_gcd_test=%d", __iv__return_expr_gcd_test);
	return __iv__return_expr_gcd_test;
}
