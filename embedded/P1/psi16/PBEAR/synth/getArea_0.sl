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

(constraint (=(getArea 4 0 17 0 0 0 0 0 64 0 64 0 0 0 0 55 0 201 0 0 18 3 0 64 0 3 0 0 136 68 1 0 0 0 4 0 0 0 1 1 0 1) 0))
(constraint (=(getArea 5 1 3 0 0 0 0 0 0 0 151 0 0 0 32 0 0 0 0 0 0 35 0 0 0 0 0 230 130 30 7 2 0 0 0 0 1 0 0 0 16 0) 0))
(constraint (=(getArea 3 8 173 240 0 0 0 172 0 0 30 0 5 0 0 15 0 61 1 0 0 0 0 69 4 2 0 0 35 48 0 0 0 0 4 128 0 0 0 0 5 0) 0))
(constraint (=(getArea 7 8 247 204 225 0 0 5 8 0 0 128 0 0 4 0 16 2 84 0 0 1 0 19 16 8 7 0 181 230 48 0 0 0 1 1 0 0 0 1 8 0) 0))
(constraint (=(getArea 5 4 1 0 0 0 0 0 4 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 104 248 0 0 0 0 0 0 0 0 0 0 0 0) 0))
(constraint (=(getArea 0 8 1 0 1 19 0 1 6 0 1 0 0 1 0 0 255 127 128 5 0 1 1 0 1 0 0 130 199 185 0 1 128 1 3 0 0 0 19 0 0 0) 0))
(constraint (=(getArea 0 8 0 0 0 64 0 9 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 176 236 0 0 41 0 0 0 0 0 8 0 0 0) 0))
(constraint (=(getArea 0 8 15 0 5 2 0 133 3 0 64 1 5 0 10 0 77 32 98 0 0 131 1 4 64 35 255 88 192 96 13 1 129 32 129 7 4 251 133 192 0 0) 0))
(constraint (=(getArea 3 0 17 5 22 0 0 1 0 1 5 1 4 167 5 60 56 28 0 104 1 9 199 3 43 93 3 11 121 251 0 1 0 0 183 64 0 16 0 0 167 1) 0))
(constraint (=(getArea 4 5 211 0 5 8 207 207 2 0 0 0 0 0 0 0 12 0 28 25 89 81 160 0 109 0 132 2 63 200 0 2 4 1 130 2 0 60 128 0 16 214) 0))
(constraint (=(getArea 7 5 4 3 0 0 0 135 3 0 72 8 0 0 1 2 0 16 1 3 0 19 0 0 3 1 69 73 8 0 0 0 0 0 0 45 0 0 2 0 24 4) 0))
(constraint (=(getArea 2 4 2 0 0 0 0 128 0 1 29 64 0 64 0 0 0 0 0 128 4 67 0 0 1 16 0 0 187 33 0 0 0 0 64 19 0 16 64 0 0 0) 0))
(constraint (=(getArea 7 2 32 0 0 82 0 0 1 0 0 0 0 0 0 0 0 0 1 0 32 0 4 0 0 0 0 0 199 246 0 0 0 0 64 0 0 0 0 1 0 0) 0))
(constraint (=(getArea 0 8 0 2 0 0 0 0 1 0 0 0 32 0 1 0 0 0 0 1 0 0 0 0 0 1 0 0 96 173 0 0 0 0 0 0 0 0 1 0 0 0) 0))
(constraint (=(getArea 0 2 15 252 1 0 0 39 0 0 152 1 5 0 1 2 91 2 32 8 8 179 0 1 1 0 0 64 104 224 90 1 0 0 32 2 0 192 1 8 204 0) 160))
(constraint (=(getArea 0 2 0 88 0 0 0 1 0 0 234 224 0 0 3 0 0 0 0 0 0 0 0 0 0 0 0 24 214 193 0 0 0 0 0 0 0 0 64 0 0 0) 0))
(constraint (=(getArea 0 8 0 1 0 0 0 0 8 0 0 0 128 0 64 0 0 0 0 16 0 0 0 0 0 1 0 0 0 53 0 0 0 0 0 0 0 0 128 0 0 0) 0))
(constraint (=(getArea 4 8 2 0 0 0 0 0 0 0 254 0 0 0 0 0 0 0 222 0 0 0 0 1 0 0 0 123 255 1 0 0 0 4 0 0 0 0 91 0 15 0) 0))
(constraint (=(getArea 0 1 1 0 0 0 0 0 2 0 0 0 1 0 0 0 0 0 0 17 0 0 0 0 0 1 0 0 32 224 0 0 0 0 1 0 0 0 0 0 0 0) 0))
(constraint (=(getArea 2 4 0 253 0 0 0 197 0 0 6 2 4 0 1 7 233 7 254 130 1 2 0 131 1 0 7 2 192 240 193 1 0 0 5 3 0 1 133 0 6 0) 0))
(constraint (=(getArea 3 8 215 32 4 0 0 228 8 0 248 0 129 0 1 0 132 0 8 7 0 19 192 1 163 102 1 148 4 0 0 16 2 229 13 238 0 1 215 7 192 15) 0))
(constraint (=(getArea 4 4 35 0 1 128 0 17 2 0 0 0 127 0 0 0 251 0 0 128 7 2 1 0 57 0 153 66 196 209 0 0 1 2 3 4 0 32 1 1 20 35) 0))
(constraint (=(getArea 4 0 0 148 0 0 0 0 0 10 243 0 5 0 0 0 0 0 158 1 0 0 0 3 0 0 4 159 3 0 0 0 0 0 0 0 0 0 0 0 202 0) 0))
(constraint (=(getArea 5 0 0 0 0 0 0 0 0 128 0 0 0 0 28 0 0 0 0 0 0 0 0 0 0 0 0 0 0 245 1 0 0 0 0 0 0 0 0 0 0 0) 0))
(constraint (=(getArea 7 1 61 195 1 25 0 62 0 0 25 0 4 0 1 0 165 64 250 0 1 1 167 4 0 3 4 34 107 122 4 0 0 0 3 96 1 0 0 8 255 65) 0))
(constraint (=(getArea 2 0 0 0 0 0 0 0 5 0 0 0 0 0 0 0 0 0 0 5 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 32) 0))
(constraint (=(getArea 7 2 128 0 0 0 0 96 2 0 0 0 0 0 0 0 0 0 0 0 64 0 0 0 0 0 0 0 254 102 0 0 0 0 0 0 4 0 0 0 0 0) 0))
(constraint (=(getArea 3 6 241 252 114 0 0 77 3 0 7 0 5 0 2 0 0 196 188 2 59 0 6 1 0 1 0 102 109 0 0 0 0 0 1 0 0 0 28 2 221 0) 0))
(constraint (=(getArea 7 8 0 1 0 0 0 0 8 0 0 0 128 0 64 0 0 0 0 16 0 0 0 0 0 1 0 0 0 53 0 0 0 0 0 0 0 0 128 0 0 0) 0))
(constraint (=(getArea 7 8 0 2 0 0 0 0 1 0 0 0 32 0 1 0 0 0 0 1 0 0 0 0 0 1 0 0 96 173 0 0 0 0 0 0 0 0 1 0 0 0) 0))
(constraint (=(getArea 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 235 0 0 0 0 0 0 0 0 0 0 0 0 0) 0))
(constraint (=(getArea 7 2 198 0 0 9 0 197 2 0 0 0 0 0 0 0 199 0 0 65 0 2 1 0 2 0 65 0 226 78 0 0 60 0 16 0 0 1 1 0 1 9) 0))
(constraint (=(getArea 0 8 224 132 0 0 0 4 0 8 0 0 5 0 9 0 228 0 132 3 5 11 4 2 5 1 7 3 208 179 90 1 0 0 64 11 0 64 5 3 0 1) 0))
(constraint (=(getArea 0 1 24 1 5 7 130 249 0 0 128 0 0 48 0 0 224 251 39 64 1 0 0 0 65 0 0 6 128 0 0 0 0 0 71 7 0 0 3 0 0 0) 0))
(constraint (=(getArea 6 0 0 0 0 7 0 0 0 3 0 0 0 0 0 0 0 0 0 0 0 0 77 5 0 0 0 0 2 116 5 64 0 0 194 0 3 188 4 0 7 216) 232))
(constraint (=(getArea 7 7 3 0 0 3 0 2 1 3 162 63 7 0 3 64 8 129 0 5 3 2 4 0 5 0 1 112 64 128 0 1 0 0 121 64 0 158 1 0 64 1) 64))
(constraint (=(getArea 0 8 29 27 34 0 0 7 2 3 32 0 4 0 0 0 96 2 1 9 7 19 0 5 10 182 255 129 111 179 4 1 0 0 15 2 4 133 7 9 0 0) 118))
(constraint (=(getArea 7 1 103 84 0 0 0 7 0 0 254 0 0 0 0 2 0 2 224 2 7 0 0 2 2 65 7 96 2 0 0 0 0 1 0 52 0 0 0 0 255 0) 52))
(constraint (=(getArea 0 7 7 7 0 0 0 64 0 0 1 0 133 0 32 1 1 1 1 231 3 128 5 3 230 3 7 2 128 64 0 0 0 1 1 0 0 0 10 230 5 0) 3))
(constraint (=(getArea 7 3 3 211 0 0 1 1 1 11 150 0 13 0 240 1 211 128 79 7 3 1 43 7 11 125 0 111 195 119 7 150 34 110 226 8 1 128 1 6 226 0) 1040))
(constraint (=(getArea 0 8 4 191 0 2 0 1 99 2 99 0 0 0 1 28 156 93 64 8 0 0 1 4 0 128 0 48 219 243 4 0 0 57 0 1 21 220 0 219 149 0) 3740))
(constraint (=(getArea 5 5 0 35 82 0 0 5 0 1 0 0 4 246 201 0 82 0 103 0 1 240 0 2 3 97 7 2 213 128 0 1 0 0 129 8 5 39 0 0 32 5) 237))
(constraint (=(getArea 7 0 10 15 135 215 5 128 0 0 136 0 4 0 0 0 223 244 253 41 0 66 0 13 41 0 7 238 8 128 133 0 0 1 137 241 133 134 0 0 255 0) 241))
(constraint (=(getArea 5 1 65 0 0 3 0 65 223 255 223 127 69 0 0 0 255 0 0 1 1 2 0 2 0 128 0 41 65 0 0 0 0 0 160 2 132 65 0 0 0 0) 2))
(constraint (=(getArea 5 6 231 38 1 0 0 8 0 0 114 0 7 0 255 1 69 8 254 70 1 3 0 3 1 1 5 136 158 111 0 218 0 0 18 1 0 76 0 1 0 0) 2))
(constraint (=(getArea 0 8 33 4 252 226 0 128 1 11 3 0 0 0 0 1 225 0 0 130 1 1 0 2 128 0 7 2 192 171 0 0 128 0 4 0 0 8 132 0 5 1) 8))
(constraint (=(getArea 4 8 3 0 1 0 0 0 0 0 62 0 4 0 1 0 193 1 1 3 0 3 0 2 3 129 135 2 34 241 0 0 10 1 129 2 6 0 1 160 0 0) 192))
(constraint (=(getArea 5 8 5 128 149 3 0 5 2 0 249 0 4 0 3 2 1 3 0 9 0 38 1 2 0 0 7 128 186 89 0 157 0 0 52 112 0 6 4 8 0 0) 38))
(constraint (=(getArea 7 3 251 5 5 0 0 185 0 1 174 0 4 0 9 254 116 28 0 43 249 131 0 7 43 0 0 11 21 109 0 1 0 0 244 170 0 16 185 0 0 1) 170))
(constraint (=(getArea 0 0 243 16 0 0 0 2 0 0 128 1 0 0 0 0 0 0 0 4 1 0 0 3 0 0 1 15 232 82 1 17 70 0 0 0 0 4 4 200 64 16) 12))
(constraint (=(getArea 7 7 22 222 1 0 0 0 136 0 136 0 5 0 7 0 3 13 111 6 1 2 1 16 7 2 0 2 94 214 133 1 0 0 0 1 0 32 0 23 251 5) 1))
(constraint (=(getArea 0 5 225 73 0 0 129 103 4 2 64 0 70 0 0 0 0 1 224 4 0 162 0 4 0 0 0 160 115 128 69 162 33 0 0 130 5 250 0 119 84 0) 250))
(constraint (=(getArea 7 8 6 0 181 2 5 0 36 0 2 0 4 0 128 0 1 1 0 1 1 2 3 0 15 0 7 7 246 8 0 1 0 0 1 2 1 1 0 0 5 0) 2))
(constraint (=(getArea 7 7 0 0 4 57 16 188 0 2 1 0 0 0 0 0 119 0 1 12 0 131 1 0 129 0 0 0 228 32 0 1 15 0 0 0 0 19 7 0 0 195) 15))
(constraint (=(getArea 7 8 248 0 0 0 0 251 7 1 23 64 6 0 2 2 3 7 0 13 0 50 0 0 21 254 7 2 63 67 0 0 0 1 1 194 0 4 232 0 0 0) 194))
(constraint (=(getArea 5 8 113 146 1 0 0 129 223 0 223 0 4 0 0 0 89 72 20 130 1 3 0 28 130 3 1 0 33 184 1 0 4 1 5 0 0 1 23 9 4 4) 127))
(constraint (=(getArea 6 0 13 0 0 0 5 0 3 0 0 0 0 53 0 0 0 0 0 0 0 0 0 5 5 0 0 0 242 88 0 2 103 0 0 6 5 0 0 3 0 0) 21296))
(constraint (=(getArea 0 8 240 48 0 0 9 240 66 2 12 0 216 0 199 0 7 227 0 4 248 4 0 69 133 0 21 120 64 128 4 0 0 0 5 0 133 191 0 128 64 6) 11904))
(constraint (=(getArea 4 1 79 49 0 0 0 75 0 0 159 0 0 0 0 1 0 0 202 11 71 0 0 1 0 96 6 1 1 1 0 32 0 32 0 13 0 0 79 0 110 0) 202))
(constraint (=(getArea 7 5 238 12 0 0 0 16 5 0 20 1 4 168 120 13 231 34 96 133 0 0 0 5 133 29 0 157 229 64 5 1 4 0 160 14 127 20 0 1 40 0) 10))
(check-synth)