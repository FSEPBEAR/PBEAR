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
signed int __VERIFIER_nondet_signed_int(){ signed int __iv_temp; if (-1 == fscanf(__iv__fp, "%d", &__iv_temp)) exit(0); return __iv_temp; }
#endif
#ifndef FALSE
#define FALSE 0
#endif
signed int fibonacci(signed int n);
void reach_error();
__CPROVER_bool __iv__branch_expr;
int __iv__return_expr_main;
signed int __iv__return_expr_fibonacci;
signed int __iv__fibonacci_stub(signed int n);
int main(int argc, char* argv[]) {
	__iv__fp = fopen(argv[1], "r");
	printf("_tr_node_id:Node_0_0;_tr_decl:x;\n");fflush(stdout);
	signed int x;
	printf("_tr_system_call:__VERIFIER_nondet_signed_int;_tr_call_id:0;\n");fflush(stdout);
		x = __VERIFIER_nondet_signed_int();
	printf("_tr_node_id:Node_0_3;_tr_assign:x=%d;\n", x);fflush(stdout);
	printf("_tr_node_id:Node_0_4;_tr_decl:result;\n");fflush(stdout);
	signed int result;
	printf("_tr_call:__iv__fibonacci_stub;_tr_call_id:1;\n");fflush(stdout);
		result = __iv__fibonacci_stub(x);
	printf("_tr_node_id:Node_0_7;_tr_assign:result=%d;\n", result);fflush(stdout);
	__iv__branch_expr = !(((x < 8) || (result >= 34)));
	printf("_tr_node_id:Node_0_8;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!(((x < 8) || (result >= 34)))) goto Node_0_16;
	__iv__return_expr_main = 	0;
	printf("_tr_node_id:Node_0_9;_tr_assign:__iv__return_expr_main=%d;\n", __iv__return_expr_main);fflush(stdout);
	printf("_tr_return;\n");fflush(stdout);
	return __iv__return_expr_main;
	Node_0_16:;
	printf("_tr_call:reach_error;_tr_call_id:2;\n");fflush(stdout);
	reach_error();
	printf("_tr_system_call:abort;_tr_call_id:3;\n");fflush(stdout);
	abort();
}
signed int fibonacci(signed int n) {
	__iv__branch_expr = !((n < 1));
	printf("_tr_node_id:Node_1_25;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!((n < 1))) goto Node_1_29;
	__iv__return_expr_fibonacci = 	0;
	printf("_tr_node_id:Node_1_26;_tr_assign:__iv__return_expr_fibonacci=%d;\n", __iv__return_expr_fibonacci);fflush(stdout);
	printf("_tr_return;\n");fflush(stdout);
	return __iv__return_expr_fibonacci;
	goto Node_1_44;
	Node_1_29:;
	__iv__branch_expr = !((n == 1));
	printf("_tr_node_id:Node_1_29;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!((n == 1))) goto Node_1_33;
	__iv__return_expr_fibonacci = 	1;
	printf("_tr_node_id:Node_1_30;_tr_assign:__iv__return_expr_fibonacci=%d;\n", __iv__return_expr_fibonacci);fflush(stdout);
	printf("_tr_return;\n");fflush(stdout);
	return __iv__return_expr_fibonacci;
	goto Node_1_44;
	Node_1_33:;
	printf("_tr_node_id:Node_1_33;_tr_decl:return_value_fibonacci;\n");fflush(stdout);
	signed int return_value_fibonacci;
	printf("_tr_call:fibonacci;_tr_call_id:4;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:n=%d;\n", (n - 1));fflush(stdout);
		return_value_fibonacci = fibonacci((n - 1));
	printf("_tr_node_id:Node_1_34;_tr_assign:return_value_fibonacci=%d;\n", return_value_fibonacci);fflush(stdout);
	printf("_tr_node_id:Node_1_35;_tr_decl:return_value_fibonacci_0;\n");fflush(stdout);
	signed int return_value_fibonacci_0;
	printf("_tr_call:fibonacci;_tr_call_id:5;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:n=%d;\n", (n - 2));fflush(stdout);
		return_value_fibonacci_0 = fibonacci((n - 2));
	printf("_tr_node_id:Node_1_36;_tr_assign:return_value_fibonacci_0=%d;\n", return_value_fibonacci_0);fflush(stdout);
	__iv__return_expr_fibonacci = 	(return_value_fibonacci + return_value_fibonacci_0);
	printf("_tr_node_id:Node_1_37;_tr_assign:__iv__return_expr_fibonacci=%d;\n", __iv__return_expr_fibonacci);fflush(stdout);
	printf("_tr_return;\n");fflush(stdout);
	return __iv__return_expr_fibonacci;
	goto Node_1_44;
	Node_1_44:;
	printf("_tr_return;\n");fflush(stdout);
}
void reach_error() {
	if(!(FALSE)) { printf("violated property: Node_2_45\n"); fflush(stdout); exit(0); }
	printf("_tr_return;\n");fflush(stdout);
}
signed int __iv__fibonacci_stub(signed int n){
	signed int __iv__return_expr_fibonacci;
	if(2>=(15-n)) if(5==(n-8)) __iv__return_expr_fibonacci = ((n*8)+((3*(5+n))+75)); else __iv__return_expr_fibonacci = ((1-(3*n))*(0-(5+n))); else if(n==10) __iv__return_expr_fibonacci = (5+(5*n)); else if((n>=2)&&(n<5)) __iv__return_expr_fibonacci = (n-1); else if((1>=n)||(5==n)) __iv__return_expr_fibonacci = n; else __iv__return_expr_fibonacci = (n*n); 
	printf("_tr_return;\n");fflush(stdout);
	return __iv__return_expr_fibonacci;
}
