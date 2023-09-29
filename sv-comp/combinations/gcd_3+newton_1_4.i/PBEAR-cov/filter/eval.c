#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define __CPROVER_assume(a) if (!(a)) exit(0)
typedef _Bool __CPROVER_bool;
FILE *__iv__fp;
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
float f(float x) {
	return (((x - (((x * x) * x) / 6.0f)) + (((((x * x) * x) * x) * x) / 120.0f)) + (((((((x * x) * x) * x) * x) * x) * x) / 5040.0f));
}
char __VERIFIER_nondet_char(){ char __iv_temp; if (-1 == fscanf(__iv__fp, "%hhd", &__iv_temp)) exit(0); return __iv_temp; }
signed int __VERIFIER_nondet_signed_int(){ signed int __iv_temp; if (-1 == fscanf(__iv__fp, "%d", &__iv_temp)) exit(0); return __iv_temp; }
float __VERIFIER_nondet_float(){ float __iv_temp; if (-1 == fscanf(__iv__fp, "%f", &__iv_temp)) exit(0); return __iv_temp; }
int main(int argc, char* argv[]) {
	__iv__fp = fopen(argv[1], "r");
	signed int return_value___VERIFIER_nondet_int;
	return_value___VERIFIER_nondet_int = __VERIFIER_nondet_signed_int();
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
	exit(0);
	Node_5_45:;
	// End of Function
}
signed int main1() {
	signed char x;
	x = __VERIFIER_nondet_char();
	signed char y;
	y = __VERIFIER_nondet_char();
	signed char g;
	g = gcd_test(x, y);
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
	if(!(FALSE)) printf("vioated property: Node_9_105\n"); fflush(stdout);
	assert(FALSE);
	// End of Function
}
void __VERIFIER_assert(int cond) {
	if ((cond != 0)) goto Node_10_110;
	reach_error();
	exit(0);
	Node_10_110:;
	goto Node_10_112;
	Node_10_112:;
	// End of Function
}
