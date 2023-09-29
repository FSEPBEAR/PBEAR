(set-logic LIA)

(synth-fun fisqrt ( (__iv__input_0_ Int)) Int
((Start Int (ntInt))
(ntInt Int (
	0 1 2 3 -1 16 5 38423 43733 32 
	__iv__input_0_ 
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

(constraint (=(fisqrt 0) 0))
(constraint (=(fisqrt 186) 13))
(constraint (=(fisqrt 148) 11))
(constraint (=(fisqrt 58) 6))
(constraint (=(fisqrt 48) 6))
(constraint (=(fisqrt 65) 8))
(constraint (=(fisqrt 235) 14))
(constraint (=(fisqrt 280) 16))
(constraint (=(fisqrt 57150) 237))
(constraint (=(fisqrt 451) 21))
(check-synth)