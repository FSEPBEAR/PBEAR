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
signed int fibonacci(signed int n);
void reach_error();
signed int __VERIFIER_nondet_signed_int(){ signed int __iv_temp; if (-1 == fscanf(__iv__fp, "%d", &__iv_temp)) exit(0); return __iv_temp; }
int main(int argc, char* argv[]) {
	__iv__fp = fopen(argv[1], "r");
	signed int x;
	x = __VERIFIER_nondet_signed_int();
	signed int result;
	result = fibonacci(x);
	if (!(((x != 5) || (result == 3)))) goto Node_0_16;
	return 0;
	Node_0_16:;
	reach_error();
	exit(0);
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
	if(!(FALSE)) printf("vioated property: Node_2_45\n"); fflush(stdout);
	assert(FALSE);
	// End of Function
}
