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

(constraint (=(isButtonPressed -88 -28 5 -11 46 90 -89 47 -22 -57 -3 -47) 0))
(constraint (=(isButtonPressed -51 -94 36 -62 -10 100 -7 12 114 -61 35 -66) 0))
(constraint (=(isButtonPressed -85 14 14 17 29 71 -89 11 1 -63 -21 -57) 1))
(constraint (=(isButtonPressed -40 -3 -30 33 -13 12 -2 17 40 27 -29 -6) 0))
(constraint (=(isButtonPressed 28 7 18 -9 -50 78 -8 16 31 41 3 -7) 0))
(constraint (=(isButtonPressed -2 -2 9 -10 -2 -52 -11 11 -2 1 0 0) 1))
(constraint (=(isButtonPressed -8 -68 -53 -2 4 -16 -26 17 45 -9 -10 1) 1))
(constraint (=(isButtonPressed -10 -2 18 -12 -2 1 0 -5 0 9 -24 0) 1))
(constraint (=(isButtonPressed -1 -19 56 13 1 57 -18 22 60 52 13 -5) 1))
(constraint (=(isButtonPressed -85 -39 14 -26 85 47 -105 34 25 -56 29 -74) 0))
(constraint (=(isButtonPressed -10 -104 14 44 8 80 5 12 40 36 15 -30) 0))
(check-synth)