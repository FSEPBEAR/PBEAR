#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define __CPROVER_assume(a) if (!(a)) exit(0)
typedef _Bool __CPROVER_bool;
int __iv__max_path;
int __iv__nondet_call_counter;
FILE *__iv__fp;
#include <assert.h>
#include <stdlib.h>
#ifndef TRUE
#define TRUE 1
#endif
#ifndef FALSE
#define FALSE 0
#endif
// void __VERIFIER_assert(int cond);
// void assume_abort_if_not(signed int cond);
// float f(float x);
// float fp(float x);
signed char gcd_test(signed char a, signed char b);
// signed int main1();
// signed int main2();
// void reach_error();
signed char gcd_test(signed char a, signed char b) {
	signed char t;
	__iv__max_path++;
	if (__iv__max_path >= 10000) return 0;
	printf("Node_8_89:%d\n", !(((signed int)(a) < 0))); fflush(stdout);
	if (!(((signed int)(a) < 0))) goto Node_8_91;
	a = (signed char)(-(signed int)(a));
	Node_8_91:;
	__iv__max_path++;
	if (__iv__max_path >= 10000) return 0;
	printf("Node_8_92:%d\n", !(((signed int)(b) < 0))); fflush(stdout);
	if (!(((signed int)(b) < 0))) goto Node_8_94;
	b = (signed char)(-(signed int)(b));
	Node_8_94:;
	Node_8_95:;
	__iv__max_path++;
	if (__iv__max_path >= 10000) return 0;
	printf("Node_8_95:%d\n", !(((signed int)(b) != 0))); fflush(stdout);
	if (!(((signed int)(b) != 0))) goto Node_8_100;
	t = b;
	b = (signed char)(((signed int)(a) % (signed int)(b)));
	a = t;
	goto Node_8_95;
	Node_8_100:;
	return a;
}
int main(int argc, char* argv[]) {
	__iv__fp = fopen(argv[1], "r");
	signed char a;
	signed char b;
	signed char __iv__return_expr_gcd_test;
	for (int __iv__i = 0; __iv__i < 1; __iv__i++) {
		printf("input:\n"); fflush(stdout);
		fscanf(__iv__fp, "%hhd", &a);
		printf("a=%hhd\n", a); fflush(stdout);
		fscanf(__iv__fp, "%hhd", &b);
		printf("b=%hhd\n", b); fflush(stdout);
		printf("path:\n"); fflush(stdout);
		__iv__return_expr_gcd_test=gcd_test(a,b);
		__iv__nondet_call_counter = 0;
		if (__iv__max_path >= 10000) {__iv__max_path = 0; continue;}
		printf("output:\n"); fflush(stdout);
		printf("__iv__return_expr_gcd_test=%hhd\n", __iv__return_expr_gcd_test); fflush(stdout);
	}}
