(set-logic LIA)

(synth-fun elev_get_button_signal ( (__iv__input_0_ Int) (__iv__input_1_ Int) (__iv__input_2_ Int)) Int
((Start Int (ntInt))
(ntInt Int (
	0 1 2 3 -1 5 
	__iv__input_0_ __iv__input_1_ __iv__input_2_ 
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

(constraint (=(elev_get_button_signal 0 1 1) 0))
(constraint (=(elev_get_button_signal 1 0 0) 1))
(check-synth)