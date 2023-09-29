(set-logic LIA)

(synth-fun isKeyPairValid ( (__iv__input_0_ Int) (__iv__input_1_ Int)) Int
((Start Int (ntInt))
(ntInt Int (
	0 1 2 3 -1 5 
	__iv__input_0_ __iv__input_1_ 
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

(constraint (=(isKeyPairValid -46 -52) 0))
(constraint (=(isKeyPairValid -50 -50) 1))
(constraint (=(isKeyPairValid 43 74) 0))
(check-synth)