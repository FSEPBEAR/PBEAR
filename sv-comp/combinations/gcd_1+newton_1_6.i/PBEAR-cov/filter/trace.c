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
float __VERIFIER_nondet_float(){ float __iv_temp; if (-1 == fscanf(__iv__fp, "%f", &__iv_temp)) exit(0); return __iv_temp; }
signed int __VERIFIER_nondet_signed_int(){ signed int __iv_temp; if (-1 == fscanf(__iv__fp, "%d", &__iv_temp)) exit(0); return __iv_temp; }
char __VERIFIER_nondet_char(){ char __iv_temp; if (-1 == fscanf(__iv__fp, "%hhd", &__iv_temp)) exit(0); return __iv_temp; }
float f(float x);
float fp(float x);
signed char gcd_test(signed char a, signed char b);
signed int main1();
signed int main2();
void reach_error();
__CPROVER_bool __iv__branch_expr;
float __iv__return_expr_f;
int __iv__return_expr_main;
signed int __iv__return_expr_main2;
float __iv__return_expr_fp;
signed int __iv__return_expr_main1;
signed char __iv__return_expr_gcd_test;
signed char __iv__gcd_test_stub(signed char a, signed char b);
float f(float x) {
	__iv__return_expr_f = 	(((x - (((x * x) * x) / 6.0f)) + (((((x * x) * x) * x) * x) / 120.0f)) + (((((((x * x) * x) * x) * x) * x) * x) / 5040.0f));
	printf("_tr_node_id:Node_0_0;_tr_assign:__iv__return_expr_f=%f;\n", __iv__return_expr_f);fflush(stdout);
	printf("_tr_return;\n");fflush(stdout);
	return __iv__return_expr_f;
}
int main(int argc, char* argv[]) {
	__iv__fp = fopen(argv[1], "r");
	printf("_tr_node_id:Node_1_3;_tr_decl:return_value___VERIFIER_nondet_int;\n");fflush(stdout);
	signed int return_value___VERIFIER_nondet_int;
	printf("_tr_system_call:__VERIFIER_nondet_signed_int;_tr_call_id:0;\n");fflush(stdout);
		return_value___VERIFIER_nondet_int = __VERIFIER_nondet_signed_int();
	printf("_tr_node_id:Node_1_4;_tr_assign:return_value___VERIFIER_nondet_int=%d;\n", return_value___VERIFIER_nondet_int);fflush(stdout);
	__iv__branch_expr = !((return_value___VERIFIER_nondet_int != 0));
	printf("_tr_node_id:Node_1_5;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!((return_value___VERIFIER_nondet_int != 0))) goto Node_1_8;
	printf("_tr_call:main1;_tr_call_id:1;\n");fflush(stdout);
	main1();
	goto Node_1_9;
	Node_1_8:;
	printf("_tr_call:main2;_tr_call_id:2;\n");fflush(stdout);
	main2();
	Node_1_9:;
	printf("_tr_return;\n");fflush(stdout);
}
signed int main2() {
	printf("_tr_node_id:Node_3_18;_tr_decl:IN;\n");fflush(stdout);
	float IN;
	printf("_tr_system_call:__VERIFIER_nondet_float;_tr_call_id:4;\n");fflush(stdout);
		IN = __VERIFIER_nondet_float();
	printf("_tr_node_id:Node_3_21;_tr_assign:IN=%f;\n", IN);fflush(stdout);
	printf("_tr_call:assume_abort_if_not;_tr_call_id:5;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:cond=%d;\n", (signed int)(((IN > -1.2f) && (IN < 1.2f))));fflush(stdout);
	assume_abort_if_not((signed int)(((IN > -1.2f) && (IN < 1.2f))));
	printf("_tr_node_id:Node_3_23;_tr_decl:x;\n");fflush(stdout);
	float x;
	printf("_tr_node_id:Node_3_24;_tr_decl:return_value_f;\n");fflush(stdout);
	float return_value_f;
	printf("_tr_call:f;_tr_call_id:6;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:x=%f;\n", IN);fflush(stdout);
		return_value_f = f(IN);
	printf("_tr_node_id:Node_3_25;_tr_assign:return_value_f=%f;\n", return_value_f);fflush(stdout);
	printf("_tr_node_id:Node_3_26;_tr_decl:return_value_fp;\n");fflush(stdout);
	float return_value_fp;
	printf("_tr_call:fp;_tr_call_id:7;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:x=%f;\n", IN);fflush(stdout);
		return_value_fp = fp(IN);
	printf("_tr_node_id:Node_3_27;_tr_assign:return_value_fp=%f;\n", return_value_fp);fflush(stdout);
		x = (IN - (return_value_f / return_value_fp));
	printf("_tr_node_id:Node_3_28;_tr_assign:x=%f;\n", x);fflush(stdout);
	__iv__branch_expr = ((double)(x) < 0.1);
	printf("_tr_node_id:Node_3_29;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (((double)(x) < 0.1)) goto Node_3_31;
	printf("_tr_call:reach_error;_tr_call_id:8;\n");fflush(stdout);
	reach_error();
	Node_3_31:;
	__iv__return_expr_main2 = 	0;
	printf("_tr_node_id:Node_3_32;_tr_assign:__iv__return_expr_main2=%d;\n", __iv__return_expr_main2);fflush(stdout);
	printf("_tr_return;\n");fflush(stdout);
	return __iv__return_expr_main2;
}
float fp(float x) {
	__iv__return_expr_fp = 	((((float)(1) - ((x * x) / 2.0f)) + ((((x * x) * x) * x) / 24.0f)) + ((((((x * x) * x) * x) * x) * x) / 720.0f));
	printf("_tr_node_id:Node_4_40;_tr_assign:__iv__return_expr_fp=%f;\n", __iv__return_expr_fp);fflush(stdout);
	printf("_tr_return;\n");fflush(stdout);
	return __iv__return_expr_fp;
}
void assume_abort_if_not(signed int cond) {
	__iv__branch_expr = (cond != 0);
	printf("_tr_node_id:Node_5_43;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((cond != 0)) goto Node_5_45;
	printf("_tr_system_call:abort;_tr_call_id:9;\n");fflush(stdout);
	abort();
	Node_5_45:;
	printf("_tr_return;\n");fflush(stdout);
}
signed int main1() {
	printf("_tr_node_id:Node_6_47;_tr_decl:x;\n");fflush(stdout);
	signed char x;
	printf("_tr_system_call:__VERIFIER_nondet_char;_tr_call_id:10;\n");fflush(stdout);
		x = __VERIFIER_nondet_char();
	printf("_tr_node_id:Node_6_50;_tr_assign:x=%hhd;\n", x);fflush(stdout);
	printf("_tr_node_id:Node_6_51;_tr_decl:y;\n");fflush(stdout);
	signed char y;
	printf("_tr_system_call:__VERIFIER_nondet_char;_tr_call_id:11;\n");fflush(stdout);
		y = __VERIFIER_nondet_char();
	printf("_tr_node_id:Node_6_54;_tr_assign:y=%hhd;\n", y);fflush(stdout);
	printf("_tr_node_id:Node_6_55;_tr_decl:g;\n");fflush(stdout);
	signed char g;
	__iv__branch_expr = !((((signed int)(y) > 0) && (((signed int)(x) % (signed int)(y)) == 0)));
	printf("_tr_node_id:Node_6_56;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!((((signed int)(y) > 0) && (((signed int)(x) % (signed int)(y)) == 0)))) goto Node_6_59;
	printf("_tr_call:__iv__gcd_test_stub;_tr_call_id:12;\n");fflush(stdout);
		g = __iv__gcd_test_stub(x, y);
	printf("_tr_node_id:Node_6_57;_tr_assign:g=%hhd;\n", g);fflush(stdout);
	printf("_tr_call:__VERIFIER_assert;_tr_call_id:13;\n");fflush(stdout);
	printf("_tr_param;_tr_assign:cond=%d;\n", (signed int)((g == y)));fflush(stdout);
	__VERIFIER_assert((signed int)((g == y)));
	Node_6_59:;
	__iv__return_expr_main1 = 	0;
	printf("_tr_node_id:Node_6_60;_tr_assign:__iv__return_expr_main1=%d;\n", __iv__return_expr_main1);fflush(stdout);
	printf("_tr_return;\n");fflush(stdout);
	return __iv__return_expr_main1;
}
signed char gcd_test(signed char a, signed char b) {
	printf("_tr_node_id:Node_8_88;_tr_decl:t;\n");fflush(stdout);
	signed char t;
	__iv__branch_expr = !(((signed int)(a) < 0));
	printf("_tr_node_id:Node_8_89;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!(((signed int)(a) < 0))) goto Node_8_91;
		a = (signed char)(-(signed int)(a));
	printf("_tr_node_id:Node_8_90;_tr_assign:a=%hhd;\n", a);fflush(stdout);
	Node_8_91:;
	__iv__branch_expr = !(((signed int)(b) < 0));
	printf("_tr_node_id:Node_8_92;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!(((signed int)(b) < 0))) goto Node_8_94;
		b = (signed char)(-(signed int)(b));
	printf("_tr_node_id:Node_8_93;_tr_assign:b=%hhd;\n", b);fflush(stdout);
	Node_8_94:;
	Node_8_95:;
	__iv__branch_expr = !(((signed int)(b) != 0));
	printf("_tr_node_id:Node_8_95;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if (!(((signed int)(b) != 0))) goto Node_8_100;
		t = b;
	printf("_tr_node_id:Node_8_96;_tr_assign:t=%hhd;\n", t);fflush(stdout);
		b = (signed char)(((signed int)(a) % (signed int)(b)));
	printf("_tr_node_id:Node_8_97;_tr_assign:b=%hhd;\n", b);fflush(stdout);
		a = t;
	printf("_tr_node_id:Node_8_98;_tr_assign:a=%hhd;\n", a);fflush(stdout);
	goto Node_8_95;
	Node_8_100:;
	__iv__return_expr_gcd_test = 	a;
	printf("_tr_node_id:Node_8_101;_tr_assign:__iv__return_expr_gcd_test=%hhd;\n", __iv__return_expr_gcd_test);fflush(stdout);
	printf("_tr_return;\n");fflush(stdout);
	return __iv__return_expr_gcd_test;
}
void reach_error() {
	if(!(FALSE)) { printf("violated property: Node_9_105\n"); fflush(stdout); exit(0); }
	printf("_tr_return;\n");fflush(stdout);
}
void __VERIFIER_assert(int cond) {
	__iv__branch_expr = (cond != 0);
	printf("_tr_node_id:Node_10_107;_tr_assign:__iv__branch_expr=%d;\n", __iv__branch_expr);fflush(stdout);
	if ((cond != 0)) goto Node_10_110;
	printf("_tr_call:reach_error;_tr_call_id:15;\n");fflush(stdout);
	reach_error();
	printf("_tr_system_call:abort;_tr_call_id:16;\n");fflush(stdout);
	abort();
	Node_10_110:;
	goto Node_10_112;
	Node_10_112:;
	printf("_tr_return;\n");fflush(stdout);
}
signed char __iv__gcd_test_stub(signed char a, signed char b){
	signed char __iv__return_expr_gcd_test;
	__iv__return_expr_gcd_test = (1+(((a*a)-1)%(2+(b%2))));
	__CPROVER_assume(__iv__return_expr_gcd_test == -128 || (-63 <= __iv__return_expr_gcd_test && __iv__return_expr_gcd_test <= 127));
	printf("_tr_return;\n");fflush(stdout);
	return __iv__return_expr_gcd_test;
}
