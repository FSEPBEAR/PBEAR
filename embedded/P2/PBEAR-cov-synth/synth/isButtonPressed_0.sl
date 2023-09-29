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

(constraint (=(isButtonPressed 12 -35 -25 -2 -14 -8 45 25 24 -45 -44 -58) 0))
(constraint (=(isButtonPressed -3 0 27 16 0 0 0 0 33 0 7 0) 0))
(constraint (=(isButtonPressed 22 35 -27 -8 -2 -31 27 1 86 0 -13 -19) 1))
(constraint (=(isButtonPressed -2 -24 -2 29 17 -29 -45 11 13 -27 51 57) 0))
(constraint (=(isButtonPressed -2 -26 28 -2 -64 -4 26 -16 0 0 -26 17) 0))
(constraint (=(isButtonPressed -47 8 19 -39 29 69 -77 55 1 -71 6 -31) 1))
(constraint (=(isButtonPressed -14 14 33 12 -35 41 50 -25 33 25 31 -6) 0))
(constraint (=(isButtonPressed -7 25 -43 62 -126 -65 25 -63 -35 5 -16 -31) 0))
(constraint (=(isButtonPressed -40 21 2 -13 0 40 -18 -24 45 -34 27 3) 0))
(constraint (=(isButtonPressed 15 -2 -5 -14 -2 1 0 -34 0 17 -24 0) 1))
(constraint (=(isButtonPressed 3 -75 -3 97 58 94 -2 58 -13 -7 -34 42) 0))
(constraint (=(isButtonPressed 16 -2 26 20 22 27 32 19 -8 25 16 46) 0))
(constraint (=(isButtonPressed -2 -1 -2 1 0 27 0 0 0 0 0 0) 1))
(constraint (=(isButtonPressed 28 -15 18 -9 -50 78 -8 0 31 29 3 0) 0))
(constraint (=(isButtonPressed 1 -11 9 50 29 28 0 30 0 28 0 0) 1))
(constraint (=(isButtonPressed -23 1 -79 28 -8 40 14 12 41 40 51 30) 1))
(check-synth)