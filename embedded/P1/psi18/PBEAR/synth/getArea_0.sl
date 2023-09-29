(set-logic LIA)

(synth-fun getArea ( (__iv__input_0_ Int) (__iv__input_1_ Int) (__iv__input_2_ Int) (__iv__input_3_ Int) (__iv__input_4_ Int) (__iv__input_5_ Int) (__iv__input_6_ Int) (__iv__input_7_ Int) (__iv__input_8_ Int) (__iv__input_9_ Int) (__iv__input_10_ Int) (__iv__input_11_ Int) (__iv__input_12_ Int) (__iv__input_13_ Int) (__iv__input_14_ Int) (__iv__input_15_ Int) (__iv__input_16_ Int) (__iv__input_17_ Int) (__iv__input_18_ Int) (__iv__input_19_ Int) (__iv__input_20_ Int) (__iv__input_21_ Int) (__iv__input_22_ Int) (__iv__input_23_ Int) (__iv__input_24_ Int) (__iv__input_25_ Int) (__iv__input_26_ Int) (__iv__input_27_ Int) (__iv__input_28_ Int) (__iv__input_29_ Int) (__iv__input_30_ Int) (__iv__input_31_ Int) (__iv__input_32_ Int) (__iv__input_33_ Int) (__iv__input_34_ Int) (__iv__input_35_ Int) (__iv__input_36_ Int) (__iv__input_37_ Int) (__iv__input_38_ Int) (__iv__input_39_ Int) (__iv__input_40_ Int) (__iv__input_41_ Int)) Int
((Start Int (ntInt))
(ntInt Int (
	0 1 2 3 -1 5 
	__iv__input_0_ __iv__input_1_ __iv__input_2_ __iv__input_3_ __iv__input_4_ __iv__input_5_ __iv__input_6_ __iv__input_7_ __iv__input_8_ __iv__input_9_ __iv__input_10_ __iv__input_11_ __iv__input_12_ __iv__input_13_ __iv__input_14_ __iv__input_15_ __iv__input_16_ __iv__input_17_ __iv__input_18_ __iv__input_19_ __iv__input_20_ __iv__input_21_ __iv__input_22_ __iv__input_23_ __iv__input_24_ __iv__input_25_ __iv__input_26_ __iv__input_27_ __iv__input_28_ __iv__input_29_ __iv__input_30_ __iv__input_31_ __iv__input_32_ __iv__input_33_ __iv__input_34_ __iv__input_35_ __iv__input_36_ __iv__input_37_ __iv__input_38_ __iv__input_39_ __iv__input_40_ __iv__input_41_ 
	(* ntInt ntInt)
	(+ ntInt ntInt)
	(ite ntBool ntInt ntInt)
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

(constraint (=(getArea 0 1 0 1 0 101 20 0 21 0 23 0 0 198 0 0 0 0 231 0 0 0 0 0 0 1 101 0 0 25 0 0 0 0 0 0 0 0 2 0 9 0) 0))
(constraint (=(getArea 6 5 0 0 0 0 0 11 0 0 0 153 2 0 0 116 0 1 0 0 0 144 15 0 0 5 21 5 0 138 0 0 0 0 6 0 0 0 0 0 0 0) 2793))
(constraint (=(getArea 2 4 0 0 0 161 183 0 0 0 0 0 0 0 0 0 115 7 0 0 0 0 173 0 0 0 0 0 0 0 0 0 6 7 0 0 0 0 0 0 127 0) 29463))
(constraint (=(getArea 2 8 0 0 0 207 35 0 0 134 0 0 0 0 3 0 0 0 0 0 4 0 8 208 0 0 0 0 0 3 1 0 0 0 0 0 0 0 0 3 0 67) 7245))
(constraint (=(getArea 3 1 0 0 0 0 7 0 0 0 1 3 0 0 0 0 0 0 0 0 0 0 0 0 0 0 87 0 0 0 0 0 0 0 0 0 0 0 7 0 3 0) 3))
(constraint (=(getArea 4 2 0 0 0 0 0 0 0 0 40 0 0 0 0 4 3 0 84 0 24 102 0 0 0 0 0 5 0 0 0 0 0 0 0 4 0 0 6 0 0 0) 324))
(constraint (=(getArea 3 6 0 0 0 0 0 6 7 0 0 6 190 37 0 0 0 0 0 0 4 0 113 0 0 0 0 0 0 0 0 1 0 0 94 0 0 0 0 0 0 2) 222))
(check-synth)