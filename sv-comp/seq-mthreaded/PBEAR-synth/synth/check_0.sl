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

(constraint (=(check 0 0 0 0 7 0 0 0 0 0 0) 0))
(constraint (=(check 0 0 0 0 0 0 0 1 0 -1 0) 1))
(constraint (=(check 0 0 0 -1 0 0 1 -2 0 1 0) 0))
(constraint (=(check -2 1 0 0 1 1 0 6 0 0 0) 0))
(constraint (=(check -7 0 0 8 0 0 0 -9 1 0 7) 0))
(constraint (=(check -1 0 0 1 0 1 2 0 0 0 -2) 1))
(constraint (=(check -59 8 -107 -103 126 0 70 0 3 -76 -116) 0))
(constraint (=(check -1 -67 -1 46 5 38 -67 -4 -5 45 -1) 0))
(constraint (=(check -1 7 -6 -5 -4 0 0 -7 7 1 0) 0))
(constraint (=(check -1 0 0 1 -6 3 2 0 0 -5 -2) 0))
(constraint (=(check -1 7 -8 0 0 2 0 -7 7 3 0) 0))
(constraint (=(check -125 1 127 0 1 32 126 0 -5 -4 6) 0))
(constraint (=(check 0 0 0 -5 0 0 0 1 0 0 -1) 0))
(constraint (=(check -1 0 0 1 0 10 0 0 0 0 0) 0))
(check-synth)