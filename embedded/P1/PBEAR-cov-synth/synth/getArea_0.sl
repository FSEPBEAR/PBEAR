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

(constraint (=(getArea 5 207 55 0 0 2 0 0 0 0 0 3 0 0 0 0 0 0 0 0 0 7 0 12 0 0 0 0 0 0 0 0 0 0 0 133 3 0 0 1 3 0) 0))
(constraint (=(getArea 6 0 52 7 0 0 0 0 0 1 2 129 0 3 39 0 0 0 1 0 0 0 78 5 0 0 0 0 224 0 0 0 0 7 0 0 3 0 0 0 0 4) 0))
(constraint (=(getArea 2 0 0 0 0 0 142 0 0 0 0 0 0 0 0 99 111 0 0 0 2 0 0 2 0 3 6 0 0 0 0 0 0 0 10 0 252 0 0 0 0 120) 0))
(constraint (=(getArea 0 0 197 0 5 0 0 0 0 142 2 0 0 79 0 0 0 0 0 0 0 0 0 0 0 139 0 0 0 6 0 0 0 169 0 0 0 250 0 0 0 221) 0))
(constraint (=(getArea 6 0 0 0 223 131 5 5 0 0 0 225 0 2 0 0 2 0 0 0 0 0 4 3 0 0 0 4 0 0 32 0 4 0 0 0 9 87 0 0 0 0) 0))
(constraint (=(getArea 6 0 0 7 0 142 0 0 0 0 0 0 4 0 0 0 0 0 0 179 0 0 0 5 0 0 0 0 201 155 0 0 0 0 0 0 5 0 255 0 0 0) 31155))
(constraint (=(getArea 3 0 0 0 0 0 0 122 0 6 0 83 0 3 0 0 0 0 0 3 0 0 8 9 0 0 0 0 0 189 0 7 0 0 0 0 3 0 0 0 7 0) 231))
(check-synth)