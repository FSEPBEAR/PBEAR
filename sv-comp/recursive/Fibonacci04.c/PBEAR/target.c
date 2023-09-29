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
signed int __iv__fibonacci_stub(signed int n);
int main() {
	signed int x;
	x = __VERIFIER_nondet_signed_int();
	__CPROVER_printf("__iv__test_case:%d", x);
	signed int result;
	result = __iv__fibonacci_stub(x);
	if (!(((x != 5) || (result == 3)))) goto Node_0_16;
	return 0;
	Node_0_16:;
	reach_error();
	abort();
}
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
void reach_error() {
	if (!(FALSE)) __CPROVER_printf("violated property: Node_2_45");
	assert(FALSE);
	// End of Function
}
signed int __iv__fibonacci_stub(signed int n){
	__CPROVER_printf("__iv__stub_call:fibonacci");
	__CPROVER_printf("__iv__stub_input:n=%d", n);
	signed int __iv__return_expr_fibonacci;
	if(2>=(15-n)) if(5==(n-8)) __iv__return_expr_fibonacci = ((n*8)+((3*(5+n))+75)); else __iv__return_expr_fibonacci = ((1-(3*n))*(0-(5+n))); else if(n==10) __iv__return_expr_fibonacci = (5+(5*n)); else if((n>=2)&&(n<5)) __iv__return_expr_fibonacci = (n-1); else if((1>=n)||(5==n)) __iv__return_expr_fibonacci = n; else __iv__return_expr_fibonacci = (n*n); 
	__CPROVER_printf("__iv__stub_output:__iv__return_expr_fibonacci=%d", __iv__return_expr_fibonacci);
	return __iv__return_expr_fibonacci;
}
