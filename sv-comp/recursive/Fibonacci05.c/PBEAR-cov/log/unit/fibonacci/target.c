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
signed int fibonacci(signed int n);
// void reach_error();
signed int fibonacci(signed int n) {
	__iv__max_path++;
	if (__iv__max_path >= 10000) return 0;
	printf("Node_1_25:%d\n", !((n < 1))); fflush(stdout);
	if (!((n < 1))) goto Node_1_29;
	return 0;
	goto Node_1_44;
	Node_1_29:;
	__iv__max_path++;
	if (__iv__max_path >= 10000) return 0;
	printf("Node_1_29:%d\n", !((n == 1))); fflush(stdout);
	if (!((n == 1))) goto Node_1_33;
	return 1;
	goto Node_1_44;
	Node_1_33:;
	signed int return_value_fibonacci;
	return_value_fibonacci = fibonacci((n - 1));
	signed int return_value_fibonacci_0;
	return_value_fibonacci_0 = fibonacci((n - 2));
	return (return_value_fibonacci + return_value_fibonacci_0);
	goto Node_1_44;
	Node_1_44:;
	// End of Function
}
int main(int argc, char* argv[]) {
	__iv__fp = fopen(argv[1], "r");
	signed int n;
	signed int __iv__return_expr_fibonacci;
	for (int __iv__i = 0; __iv__i < 1; __iv__i++) {
		printf("input:\n"); fflush(stdout);
		fscanf(__iv__fp, "%d", &n);
		printf("n=%d\n", n); fflush(stdout);
		printf("path:\n"); fflush(stdout);
		__iv__return_expr_fibonacci=fibonacci(n);
		__iv__nondet_call_counter = 0;
		if (__iv__max_path >= 10000) {__iv__max_path = 0; continue;}
		printf("output:\n"); fflush(stdout);
		printf("__iv__return_expr_fibonacci=%d\n", __iv__return_expr_fibonacci); fflush(stdout);
	}}
