(set-logic LIA)

(synth-fun init ( (__iv__input_0_ Int) (__iv__input_1_ Int) (__iv__input_2_ Int) (__iv__input_3_ Int) (__iv__input_4_ Int) (__iv__input_5_ Int) (__iv__input_6_ Int) (__iv__input_7_ Int) (__iv__input_8_ Int) (__iv__input_9_ Int) (__iv__input_10_ Int) (__iv__input_11_ Int) (__iv__input_12_ Int) (__iv__input_13_ Int) (__iv__input_14_ Int) (__iv__input_15_ Int) (__iv__input_16_ Int) (__iv__input_17_ Int) (__iv__input_18_ Int) (__iv__input_19_ Int) (__iv__input_20_ Int) (__iv__input_21_ Int) (__iv__input_22_ Int) (__iv__input_23_ Int) (__iv__input_24_ Int) (__iv__input_25_ Int) (__iv__input_26_ Int) (__iv__input_27_ Int) (__iv__input_28_ Int) (__iv__input_29_ Int)) Int
((Start Int (ntInt))
(ntInt Int (
	0 1 2 3 -1 5 
	__iv__input_0_ __iv__input_1_ __iv__input_2_ __iv__input_3_ __iv__input_4_ __iv__input_5_ __iv__input_6_ __iv__input_7_ __iv__input_8_ __iv__input_9_ __iv__input_10_ __iv__input_11_ __iv__input_12_ __iv__input_13_ __iv__input_14_ __iv__input_15_ __iv__input_16_ __iv__input_17_ __iv__input_18_ __iv__input_19_ __iv__input_20_ __iv__input_21_ __iv__input_22_ __iv__input_23_ __iv__input_24_ __iv__input_25_ __iv__input_26_ __iv__input_27_ __iv__input_28_ __iv__input_29_ 
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

(constraint (=(init -3 1 18 1 2 9 7 -9 -3 -1 1 1 0 1 1 -6 -2 -9 -14 10 31 147 75 6 11 4 -9 22 -13 25) 0))
(check-synth)