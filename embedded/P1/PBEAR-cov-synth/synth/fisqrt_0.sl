(set-logic LIA)

(synth-fun fisqrt ( (__iv__input_0_ Int)) Int
((Start Int (ntInt))
(ntInt Int (
	4096 -1 41771 40132 40548 362 0 1 2 3 4 5 38423 35708 11585 64 
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

(constraint (=(fisqrt 393) 19))
(constraint (=(fisqrt 284) 16))
(check-synth)