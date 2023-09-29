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

(constraint (=(gcd_test 1 -70) 1))
(constraint (=(gcd_test 99 118) 1))
(constraint (=(gcd_test 87 -6) 3))
(constraint (=(gcd_test 2 -6) 2))
(constraint (=(gcd_test 2 -1) 1))
(constraint (=(gcd_test -66 -70) 2))
(constraint (=(gcd_test 2 0) 2))
(constraint (=(gcd_test 4 34) 2))
(constraint (=(gcd_test -26 97) 1))
(constraint (=(gcd_test 1 3) 1))
(constraint (=(gcd_test -111 11) 1))
(constraint (=(gcd_test 73 -8) 1))
(constraint (=(gcd_test 1 -63) 1))
(check-synth)