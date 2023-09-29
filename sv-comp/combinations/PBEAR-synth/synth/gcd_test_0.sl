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

(constraint (=(gcd_test 100 -50) 50))
(constraint (=(gcd_test -128 -64) 64))
(constraint (=(gcd_test 58 -128) -2))
(constraint (=(gcd_test 75 125) 25))
(constraint (=(gcd_test 80 120) 40))
(constraint (=(gcd_test 68 -128) -4))
(check-synth)