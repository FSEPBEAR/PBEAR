#include <assert.h>
#include <stdlib.h>
#ifndef TRUE
#define TRUE 1
#endif
#ifndef FALSE
#define FALSE 0
#endif
signed int fibonacci(signed int n);
void reach_error();
extern signed int __VERIFIER_nondet_signed_int();
signed int fibonacci(signed int n) {
	if (!((n < 1))) goto Node_1_29;
	return 0;
	goto Node_1_44;
	Node_1_29:;
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
void reach_error_2_1();
extern signed int __VERIFIER_nondet_signed_int();
int __iv__return_expr_main;
signed int __iv__return_expr_fibonacci;
int main(){
	signed int x;
	x = __VERIFIER_nondet_signed_int(); __CPROVER_printf("__iv__test_case:%d", x);
	signed int result;
	result = fibonacci(x);
	__CPROVER_assume((!(((x < 8) || (result >= 34)))));
	reach_error_2_1();
}
void reach_error_2_1(){
	__CPROVER_printf("violated property: Node_2_45"); assert(0);
}
