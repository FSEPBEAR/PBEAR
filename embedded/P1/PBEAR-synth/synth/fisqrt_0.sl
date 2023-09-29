(set-logic LIA)

(synth-fun fisqrt ( (__iv__input_0_ Int)) Int
((Start Int (ntInt))
(ntInt Int (
	11 42566 -1 40132 362 0 1 2 3 4 5 33276 90 45241 32 
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

(constraint (=(fisqrt 191) 13))
(constraint (=(fisqrt 269) 16))
(constraint (=(fisqrt 109) 10))
(check-synth)