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

(constraint (=(getArea 3 8 0 0 64 0 192 0 0 0 0 16 16 0 1 144 0 0 0 0 17 0 255 0 0 16 0 0 126 9 1 239 0 33 0 0 0 0 1 0 0 0) 0))
(constraint (=(getArea 0 0 0 0 2 64 0 0 2 0 0 0 0 32 2 0 0 0 0 2 0 0 128 0 0 0 0 0 144 8 2 0 0 0 1 128 0 16 0 0 0 0) 0))
(constraint (=(getArea 0 8 0 0 160 0 112 0 32 248 0 24 8 0 128 248 0 24 0 0 69 0 1 17 0 0 34 0 128 48 0 224 0 48 0 0 255 0 64 255 0 17) 0))
(constraint (=(getArea 2 8 0 0 64 0 192 0 0 0 0 16 16 0 1 144 0 0 0 0 17 0 255 0 0 16 0 0 126 9 1 239 0 33 0 0 0 0 1 0 0 0) 0))
(constraint (=(getArea 5 8 0 0 64 0 192 0 0 0 0 16 16 0 1 144 0 0 0 0 17 0 255 0 0 16 0 0 126 9 1 239 0 33 0 0 0 0 1 0 0 0) 0))
(constraint (=(getArea 0 8 0 0 64 0 192 0 0 0 0 16 16 0 1 144 0 0 0 0 17 0 255 0 0 16 0 0 126 9 1 239 0 33 0 0 0 0 1 0 0 0) 0))
(constraint (=(getArea 2 8 0 0 160 0 112 0 32 248 0 24 8 0 128 248 0 24 0 0 69 0 1 17 0 0 34 0 128 48 0 224 0 48 0 0 255 0 64 255 0 17) 0))
(constraint (=(getArea 5 8 0 0 160 0 112 0 32 248 0 24 8 0 128 248 0 24 0 0 69 0 1 17 0 0 34 0 128 48 0 224 0 48 0 0 255 0 64 255 0 17) 0))
(constraint (=(getArea 1 8 0 1 32 0 242 0 1 146 0 126 1 0 1 144 0 128 0 1 255 0 17 15 0 1 152 0 241 255 1 224 0 49 0 0 1 0 0 255 0 17) 0))
(constraint (=(getArea 7 8 0 0 160 0 112 0 32 248 0 24 8 0 128 248 0 24 0 0 69 0 1 17 0 0 34 0 128 48 0 224 0 48 0 0 255 0 64 255 0 17) 0))
(constraint (=(getArea 0 8 0 1 32 0 242 0 1 146 0 126 1 0 1 144 0 128 0 1 255 0 17 15 0 1 152 0 241 255 1 224 0 49 0 0 1 0 0 255 0 17) 0))
(constraint (=(getArea 0 1 0 0 1 1 2 0 1 0 0 3 16 4 0 0 0 0 1 64 0 0 0 0 0 0 2 0 176 192 1 0 0 2 128 0 2 0 0 0 0 0) 256))
(constraint (=(getArea 6 8 0 0 160 0 112 0 32 248 0 24 8 0 128 248 0 24 0 0 69 0 1 17 0 0 34 0 128 48 0 224 0 48 0 0 255 0 64 255 0 17) 4512))
(constraint (=(getArea 6 0 13 0 0 0 5 0 3 0 0 0 0 53 0 0 0 0 0 0 0 0 0 5 5 0 0 0 242 88 0 2 103 0 0 6 5 0 0 3 0 0) 21296))
(constraint (=(getArea 6 0 0 0 0 7 0 0 0 3 0 0 0 0 0 0 0 0 0 0 0 0 77 5 0 0 0 0 2 116 5 64 0 0 194 0 3 188 4 0 7 216) 232))
(check-synth)