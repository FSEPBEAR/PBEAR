(set-logic LIA)

(synth-fun fisqrt ( (__iv__input_0_ Int)) Int
((Start Int (ntInt))
(ntInt Int (
	15 -1 45977 44869 40548 0 23170 34755 1 2 3 4 2048 5 
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
(constraint (=(fisqrt 274) 16))
(constraint (=(fisqrt 7) 2))
(constraint (=(fisqrt 461) 21))
(constraint (=(fisqrt 42) 5))
(constraint (=(fisqrt 30) 5))
(constraint (=(fisqrt 519) 22))
(check-synth)