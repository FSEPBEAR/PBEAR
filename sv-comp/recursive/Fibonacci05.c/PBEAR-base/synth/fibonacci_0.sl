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

(constraint (!=(fibonacci 268435567) -2147445136))
(constraint (!=(fibonacci 646314612) 3))
(constraint (=(fibonacci 12) 144))
(constraint (=(fibonacci 10) 55))
(constraint (=(fibonacci 16) 987))
(constraint (=(fibonacci 1) 1))
(constraint (=(fibonacci 13) 233))
(constraint (=(fibonacci 5) 5))
(constraint (=(fibonacci 4) 3))
(constraint (=(fibonacci 3) 2))
(check-synth)