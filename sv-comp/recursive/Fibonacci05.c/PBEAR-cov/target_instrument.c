int __iv__current_func_call;
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
int main() {
	signed int x;
	x = __VERIFIER_nondet_signed_int();
	signed int result;
__iv__current_func_call = 1;	result = fibonacci(x);
	if (!(((x < 8) || (result >= 34)))) goto Node_0_16;
	return 0;
	Node_0_16:;
__iv__current_func_call = 2;	reach_error();
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
__iv__current_func_call = 4;	return_value_fibonacci = fibonacci((n - 1));
	signed int return_value_fibonacci_0;
__iv__current_func_call = 5;	return_value_fibonacci_0 = fibonacci((n - 2));
	return (return_value_fibonacci + return_value_fibonacci_0);
	goto Node_1_44;
	Node_1_44:;
	// End of Function
}
void reach_error() {
	assert(FALSE);
	// End of Function
}
