(set-logic LIA)

(synth-fun isReadable ( (__iv__input_0_ Int) (__iv__input_1_ Int) (__iv__input_2_ Int) (__iv__input_3_ Int)) Int
((Start Int (ntInt))
(ntInt Int (
	0 1 2 3 -1 5 
	__iv__input_0_ __iv__input_1_ __iv__input_2_ __iv__input_3_ 
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

(constraint (=(isReadable 126 48 -76 8) 1))
(constraint (=(isReadable -4 -11 -1 2) 0))
(constraint (=(isReadable 19 13 22 2) 0))
(constraint (=(isReadable 9 -22 0 2) 1))
(constraint (=(isReadable -1 4 -9 1) 0))
(constraint (=(isReadable 0 21 -2 1) 1))
(check-synth)