(set-logic LIA)

(synth-fun gcd_test ( (__iv__input_0_ Int) (__iv__input_1_ Int)) Int
((Start Int (ntInt))
(ntInt Int (
	0 1 2 3 -1 5 
	__iv__input_0_ __iv__input_1_ 
	(% ntInt ntInt)
	(* ntInt ntInt)
	(ite ntBool ntInt ntInt)
	(+ ntInt ntInt)
	(- ntInt ntInt)
))
(ntBool Bool (
	(not ntBool)
	(or ntBool ntBool)
	(and ntBool ntBool)
	(< ntInt ntInt)
	(= ntInt ntInt)
	(>= ntInt ntInt)
))
))

(constraint (=(gcd_test 64 64) 64))
(constraint (=(gcd_test 0 64) 64))
(constraint (=(gcd_test 0 1) 1))
(constraint (=(gcd_test -116 -67) 1))
(constraint (=(gcd_test 87 123) 3))
(constraint (=(gcd_test -102 32) 2))
(constraint (=(gcd_test 52 -63) 1))
(constraint (=(gcd_test 74 -18) 2))
(constraint (=(gcd_test 41 66) 1))
(constraint (=(gcd_test 67 95) 1))
(check-synth)