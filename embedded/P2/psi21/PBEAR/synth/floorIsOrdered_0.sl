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

(constraint (=(floorIsOrdered 1 0 0 0 1 0 0 0 0 0 0 1 0 1) 1))
(constraint (=(floorIsOrdered 2 1 0 0 1 0 1 0 1 0 0 1 1 1) 1))
(constraint (=(floorIsOrdered 2 1 0 0 1 1 1 0 1 0 0 1 1 1) 1))
(constraint (=(floorIsOrdered 2 1 1 0 1 1 1 0 1 1 1 1 1 1) 1))
(constraint (=(floorIsOrdered 2 1 1 1 1 1 1 0 1 1 1 1 1 1) 1))
(constraint (=(floorIsOrdered 2 1 1 1 1 1 1 1 1 1 1 1 1 1) 1))
(constraint (=(floorIsOrdered 1 0 1 0 1 0 1 0 0 1 1 1 0 1) 1))
(constraint (=(floorIsOrdered 1 0 1 0 1 0 1 0 1 1 1 1 1 1) 1))
(constraint (=(floorIsOrdered 1 1 1 1 0 0 0 0 1 0 0 0 1 1) 1))
(constraint (=(floorIsOrdered 1 1 1 1 0 1 0 0 1 1 0 0 1 1) 1))
(constraint (=(floorIsOrdered 1 1 1 1 0 1 0 0 1 1 0 1 1 1) 1))
(constraint (=(floorIsOrdered 1 1 1 1 0 1 1 1 1 1 0 1 1 1) 1))
(constraint (=(floorIsOrdered 3 -1 0 0 0 -1 -25 0 15 -2 15 0 0 -2) 0))
(constraint (=(floorIsOrdered 0 -42 -25 -22 -33 22 -66 -32 -45 59 -37 13 -25 29) 0))
(constraint (=(floorIsOrdered 0 15 0 22 7 0 0 -38 0 -15 1 0 -19 16) 1))
(constraint (=(floorIsOrdered 3 -16 -15 0 0 -8 -15 -3 0 0 0 0 0 -2) 0))
(constraint (=(floorIsOrdered 0 -67 -16 -28 53 14 2 -1 57 -1 23 -49 -6 -63) 0))
(constraint (=(floorIsOrdered 2 17 -18 -17 40 23 -17 -55 15 -28 -22 -14 -27 -31) 0))
(constraint (=(floorIsOrdered 0 1 1 0 0 -25 31 -2 0 0 -2 0 0 0) 1))
(constraint (=(floorIsOrdered 0 0 0 7 0 0 1 -18 -18 28 0 24 -50 -30) 1))
(constraint (=(floorIsOrdered 0 -2 -20 23 9 2 20 -51 3 -43 1 6 -1 -27) 1))
(constraint (=(floorIsOrdered 0 -4 1 53 -11 -30 45 -62 1 29 -38 -22 20 -1) 0))
(check-synth)