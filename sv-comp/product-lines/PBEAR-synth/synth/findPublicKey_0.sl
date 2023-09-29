(set-logic LIA)

(synth-fun findPublicKey ( (__iv__input_0_ Int) (__iv__input_1_ Int) (__iv__input_2_ Int) (__iv__input_3_ Int) (__iv__input_4_ Int) (__iv__input_5_ Int) (__iv__input_6_ Int) (__iv__input_7_ Int) (__iv__input_8_ Int) (__iv__input_9_ Int) (__iv__input_10_ Int) (__iv__input_11_ Int) (__iv__input_12_ Int) (__iv__input_13_ Int)) Int
((Start Int (ntInt))
(ntInt Int (
	0 1 2 3 -1 5 
	__iv__input_0_ __iv__input_1_ __iv__input_2_ __iv__input_3_ __iv__input_4_ __iv__input_5_ __iv__input_6_ __iv__input_7_ __iv__input_8_ __iv__input_9_ __iv__input_10_ __iv__input_11_ __iv__input_12_ __iv__input_13_ 
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

(constraint (=(findPublicKey -29 0 -1 0 0 0 0 27 35 23 0 0 3 0) 35))
(constraint (=(findPublicKey 0 0 0 0 0 -28 21 -1 -27 -9 0 30 2 -1) -28))
(constraint (=(findPublicKey -16 15 8 0 -19 -11 0 0 0 -22 -1 21 1 0) 15))
(constraint (=(findPublicKey 10 -10 0 0 0 15 -19 0 2 -33 0 29 1 0) 10))
(constraint (=(findPublicKey 16 0 -22 0 0 40 -25 -1 0 0 0 0 2 -1) 40))
(constraint (=(findPublicKey -10 2 27 1 52 0 0 -22 19 -15 7 -11 2 0) 52))
(constraint (=(findPublicKey 0 26 0 -18 4 2 0 -11 -43 -48 0 0 3 0) -43))
(constraint (=(findPublicKey -7 9 -11 -17 -93 -44 -31 0 0 -29 -9 -69 2 0) -44))
(constraint (=(findPublicKey 49 -3 -35 45 -40 -39 11 28 -12 -38 -16 6 -2 6) 0))
(constraint (=(findPublicKey 0 -49 8 35 0 14 -23 -1 -29 -10 -10 -28 -29 -1) 0))
(constraint (=(findPublicKey 39 22 0 0 -12 -16 19 13 -2 41 30 23 1 0) 39))
(constraint (=(findPublicKey -7 -29 0 12 -18 -51 6 -1 -6 -9 0 -3 2 -1) -51))
(constraint (=(findPublicKey 0 71 -2 -1 -9 -5 14 0 0 -17 0 0 1 -1) 71))
(constraint (=(findPublicKey 9 15 -5 0 -47 0 0 0 -3 -29 0 0 2 0) -47))
(constraint (=(findPublicKey 0 -28 8 0 -19 0 0 -26 0 -24 30 -17 2 0) -19))
(constraint (=(findPublicKey -5 23 8 16 -84 -41 0 21 0 -24 -42 22 2 0) -84))
(constraint (=(findPublicKey -1 -30 2 0 56 -50 0 -1 0 0 21 0 2 -1) -50))
(constraint (=(findPublicKey 10 51 -2 3 -6 0 -31 -9 -5 27 -6 -34 23 20) 0))
(constraint (=(findPublicKey 31 -2 4 -7 72 5 -3 33 -42 48 -33 14 4 -5) 0))
(check-synth)