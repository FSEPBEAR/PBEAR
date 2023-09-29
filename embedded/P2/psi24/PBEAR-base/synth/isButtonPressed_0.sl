(set-logic LIA)

(synth-fun isButtonPressed ( (__iv__input_0_ Int) (__iv__input_1_ Int) (__iv__input_2_ Int) (__iv__input_3_ Int) (__iv__input_4_ Int) (__iv__input_5_ Int) (__iv__input_6_ Int) (__iv__input_7_ Int) (__iv__input_8_ Int) (__iv__input_9_ Int) (__iv__input_10_ Int) (__iv__input_11_ Int)) Int
((Start Int (ntInt))
(ntInt Int (
	0 1 2 3 4 -1 5 
	__iv__input_0_ __iv__input_1_ __iv__input_2_ __iv__input_3_ __iv__input_4_ __iv__input_5_ __iv__input_6_ __iv__input_7_ __iv__input_8_ __iv__input_9_ __iv__input_10_ __iv__input_11_ 
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

(constraint (=(isButtonPressed 0 0 1 1 0 1 0 0 0 1 1 0) 1))
(constraint (=(isButtonPressed 0 0 0 0 0 0 1 0 1 0 0 0) 1))
(constraint (=(isButtonPressed -16 53 98 45 13 -16 20 47 -24 22 -1 -15) 0))
(constraint (=(isButtonPressed -2 -2 -1 5 -2 11 -2 18 33 -2 11 16) 0))
(constraint (=(isButtonPressed -21 -2 -2 1 0 0 0 15 0 0 0 0) 1))
(constraint (=(isButtonPressed -2 -2 -2 -2 -2 17 6 29 0 0 0 0) 0))
(constraint (=(isButtonPressed 19 -64 6 9 6 109 -25 -12 107 39 -43 23) 0))
(constraint (=(isButtonPressed -43 -76 38 -3 34 67 5 -13 103 13 16 -43) 0))
(constraint (=(isButtonPressed 1 -2 28 5 -8 -3 26 47 0 0 20 12) 1))
(constraint (=(isButtonPressed 26 -16 -30 5 -28 -11 3 67 40 27 -47 -4) 0))
(constraint (=(isButtonPressed -7 80 -59 39 -13 -2 -49 78 106 1 -84 -8) 1))
(constraint (=(isButtonPressed -2 -2 -7 -28 -24 -2 -2 -2 -2 1 14 20) 1))
(check-synth)