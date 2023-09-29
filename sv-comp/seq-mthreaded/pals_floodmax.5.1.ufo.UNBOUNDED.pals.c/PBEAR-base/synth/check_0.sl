(set-logic LIA)

(synth-fun check ( (__iv__input_0_ Int) (__iv__input_1_ Int) (__iv__input_2_ Int) (__iv__input_3_ Int) (__iv__input_4_ Int) (__iv__input_5_ Int) (__iv__input_6_ Int) (__iv__input_7_ Int) (__iv__input_8_ Int) (__iv__input_9_ Int) (__iv__input_10_ Int)) Int
((Start Int (ntInt))
(ntInt Int (
	0 1 2 3 4 -1 5 
	__iv__input_0_ __iv__input_1_ __iv__input_2_ __iv__input_3_ __iv__input_4_ __iv__input_5_ __iv__input_6_ __iv__input_7_ __iv__input_8_ __iv__input_9_ __iv__input_10_ 
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

(constraint (=(check 0 0 0 0 0 0 0 0 0 0 0) 1))
(constraint (=(check -19 -19 -122 -74 2 110 19 5 -2 68 -84) 0))
(constraint (=(check 2 -7 0 1 -7 1 0 0 0 0 0) 0))
(constraint (=(check 6 0 -2 -7 0 1 0 -6 0 0 0) 0))
(constraint (=(check -1 0 1 1 3 3 0 0 3 0 0) 0))
(constraint (=(check -2 1 0 0 1 1 1 0 1 0 5) 0))
(constraint (=(check -8 1 0 0 1 0 0 0 0 0 0) 0))
(constraint (=(check -1 0 0 1 0 0 0 1 0 0 -1) 1))
(constraint (=(check -1 -67 4 -124 -5 0 -67 7 3 45 -1) 0))
(constraint (=(check -1 0 0 1 0 7 0 0 0 0 0) 0))
(constraint (=(check -1 0 0 1 0 0 0 0 0 0 -1) 0))
(check-synth)