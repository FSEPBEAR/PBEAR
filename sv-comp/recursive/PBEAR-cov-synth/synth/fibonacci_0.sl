(set-logic LIA)

(synth-fun fibonacci ( (__iv__input_0_ Int)) Int
((Start Int (ntInt))
(ntInt Int (
	0 1 2 3 -1 5 
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

(constraint (=(fibonacci 5) 5))
(constraint (=(fibonacci 2) 1))
(constraint (=(fibonacci -407) 0))
(constraint (=(fibonacci 12) 144))
(constraint (=(fibonacci 4) 3))
(constraint (=(fibonacci 11) 89))
(constraint (=(fibonacci 15) 610))
(check-synth)