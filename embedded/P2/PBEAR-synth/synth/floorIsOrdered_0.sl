(set-logic LIA)

(synth-fun floorIsOrdered ( (__iv__input_0_ Int) (__iv__input_1_ Int) (__iv__input_2_ Int) (__iv__input_3_ Int) (__iv__input_4_ Int) (__iv__input_5_ Int) (__iv__input_6_ Int) (__iv__input_7_ Int) (__iv__input_8_ Int) (__iv__input_9_ Int) (__iv__input_10_ Int) (__iv__input_11_ Int) (__iv__input_12_ Int) (__iv__input_13_ Int)) Int
((Start Int (ntInt))
(ntInt Int (
	0 1 2 3 4 -1 5 
	__iv__input_0_ __iv__input_1_ __iv__input_2_ __iv__input_3_ __iv__input_4_ __iv__input_5_ __iv__input_6_ __iv__input_7_ __iv__input_8_ __iv__input_9_ __iv__input_10_ __iv__input_11_ __iv__input_12_ __iv__input_13_ 
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

(constraint (=(floorIsOrdered 0 -19 -46 15 18 9 63 -28 -15 -15 15 -48 -33 -35) 0))
(constraint (=(floorIsOrdered 1 -1 0 -11 -8 -8 -10 42 0 0 0 -2 -16 0) 0))
(constraint (=(floorIsOrdered 0 7 0 0 0 0 24 0 30 0 1 3 18 0) 1))
(constraint (=(floorIsOrdered 0 0 1 -30 0 0 0 0 12 0 -2 0 0 0) 1))
(constraint (=(floorIsOrdered 3 -1 18 0 0 19 -16 -28 0 -3 4 -2 0 -2) 0))
(constraint (=(floorIsOrdered 2 -18 0 0 28 0 13 29 -1 0 0 0 -2 3) 0))
(constraint (=(floorIsOrdered 1 -28 -3 7 -19 0 -19 -1 -15 7 -11 -23 0 0) 0))
(constraint (=(floorIsOrdered 1 -1 0 0 -13 0 -46 1 -30 0 -21 -10 0 -22) 1))
(constraint (=(floorIsOrdered 0 -100 7 41 -50 27 -41 22 116 -44 1 -13 80 -37) 1))
(constraint (=(floorIsOrdered 3 1 29 0 3 -8 -1 -27 0 31 0 24 0 -2) 1))
(check-synth)