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

(constraint (=(fibonacci 3) 2))
(constraint (=(fibonacci -185) 0))
(constraint (=(fibonacci 14) 377))
(constraint (=(fibonacci 10) 55))
(constraint (=(fibonacci 6) 8))
(constraint (=(fibonacci 17) 1597))
(constraint (=(fibonacci 12) 144))
(constraint (=(fibonacci 9) 34))
(check-synth)