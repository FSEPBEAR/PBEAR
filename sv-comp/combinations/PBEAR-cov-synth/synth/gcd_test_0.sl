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

(constraint (=(gcd_test 103 -49) 1))
(constraint (=(gcd_test 83 89) 1))
(constraint (=(gcd_test -2 31) 1))
(constraint (=(gcd_test 84 -32) 4))
(constraint (=(gcd_test 54 -38) 2))
(constraint (=(gcd_test 73 116) 1))
(constraint (=(gcd_test -44 -86) 2))
(constraint (=(gcd_test 86 18) 2))
(check-synth)