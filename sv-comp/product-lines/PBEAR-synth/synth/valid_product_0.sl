(set-logic LIA)

(synth-fun valid_product ( (__iv__input_0_ Int) (__iv__input_1_ Int) (__iv__input_2_ Int) (__iv__input_3_ Int) (__iv__input_4_ Int) (__iv__input_5_ Int)) Int
((Start Int (ntInt))
(ntInt Int (
	0 1 2 3 -1 5 
	__iv__input_0_ __iv__input_1_ __iv__input_2_ __iv__input_3_ __iv__input_4_ __iv__input_5_ 
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

(constraint (=(valid_product 0 0 0 -24 -36 30) 0))
(constraint (=(valid_product 14 11 0 12 27 -15) 0))
(constraint (=(valid_product -1 -1 -4 -1 0 0) 1))
(constraint (=(valid_product 4 0 -33 31 -35 72) 0))
(constraint (=(valid_product 7 -14 13 -38 -137 -30) 1))
(constraint (=(valid_product -1 0 30 30 25 -42) 0))
(constraint (=(valid_product -21 0 5 13 -18 29) 0))
(constraint (=(valid_product 2 12 25 0 0 0) 0))
(check-synth)