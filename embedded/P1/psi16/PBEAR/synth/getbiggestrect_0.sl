(set-logic LIA)

(synth-fun getbiggestrect ( (__iv__input_0_ Int) (__iv__input_1_ Int) (__iv__input_2_ Int) (__iv__input_3_ Int) (__iv__input_4_ Int) (__iv__input_5_ Int) (__iv__input_6_ Int) (__iv__input_7_ Int) (__iv__input_8_ Int) (__iv__input_9_ Int) (__iv__input_10_ Int) (__iv__input_11_ Int) (__iv__input_12_ Int) (__iv__input_13_ Int) (__iv__input_14_ Int) (__iv__input_15_ Int) (__iv__input_16_ Int) (__iv__input_17_ Int) (__iv__input_18_ Int) (__iv__input_19_ Int) (__iv__input_20_ Int) (__iv__input_21_ Int) (__iv__input_22_ Int) (__iv__input_23_ Int) (__iv__input_24_ Int) (__iv__input_25_ Int) (__iv__input_26_ Int) (__iv__input_27_ Int) (__iv__input_28_ Int) (__iv__input_29_ Int) (__iv__input_30_ Int) (__iv__input_31_ Int) (__iv__input_32_ Int) (__iv__input_33_ Int) (__iv__input_34_ Int) (__iv__input_35_ Int) (__iv__input_36_ Int) (__iv__input_37_ Int) (__iv__input_38_ Int) (__iv__input_39_ Int) (__iv__input_40_ Int) (__iv__input_41_ Int) (__iv__input_42_ Int)) Int
((Start Int (ntInt))
(ntInt Int (
	0 1 2 3 -1 5 
	__iv__input_0_ __iv__input_1_ __iv__input_2_ __iv__input_3_ __iv__input_4_ __iv__input_5_ __iv__input_6_ __iv__input_7_ __iv__input_8_ __iv__input_9_ __iv__input_10_ __iv__input_11_ __iv__input_12_ __iv__input_13_ __iv__input_14_ __iv__input_15_ __iv__input_16_ __iv__input_17_ __iv__input_18_ __iv__input_19_ __iv__input_20_ __iv__input_21_ __iv__input_22_ __iv__input_23_ __iv__input_24_ __iv__input_25_ __iv__input_26_ __iv__input_27_ __iv__input_28_ __iv__input_29_ __iv__input_30_ __iv__input_31_ __iv__input_32_ __iv__input_33_ __iv__input_34_ __iv__input_35_ __iv__input_36_ __iv__input_37_ __iv__input_38_ __iv__input_39_ __iv__input_40_ __iv__input_41_ __iv__input_42_ 
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

(constraint (!=(getbiggestrect 40 0 8 0 0 0 104 0 0 0 0 0 0 33 0 33 0 0 0 0 0 9 0 0 0 9 0 8 0 1 0 1 33 0 0 0 1 0 0 0 0 0 -1) 0))
(constraint (!=(getbiggestrect 65 0 131 0 0 0 65 0 0 0 32 0 0 65 0 3 0 0 0 0 0 1 0 0 0 128 0 1 0 57 0 32 1 0 128 0 1 0 0 3 0 0 -1) 0))
(constraint (=(getbiggestrect 3 190 3 5 176 246 191 0 0 157 24 0 163 117 1 62 121 64 0 0 55 183 161 199 1 167 86 63 202 255 0 1 0 213 0 238 235 0 201 144 231 0 1565) 0))
(constraint (=(getbiggestrect 8 228 98 36 64 245 83 238 2 153 78 0 155 4 78 131 160 199 230 8 180 125 72 251 2 14 136 250 185 1 29 62 242 97 30 108 206 187 83 100 217 0 2897) 0))
(constraint (=(getbiggestrect 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 16 0 0 0 0 0 0 0 0 0 0 0 0 -1) -1))
(constraint (=(getbiggestrect 5 182 0 184 179 240 189 2 102 169 24 0 165 0 250 59 130 64 0 183 61 1 163 206 0 1 100 59 210 255 80 0 0 205 133 244 236 0 192 0 231 0 1563) 1))
(constraint (=(getbiggestrect 1 232 92 27 64 235 77 243 3 151 69 102 147 0 73 131 160 199 219 4 185 123 80 49 2 21 135 246 178 95 31 65 237 96 26 118 212 6 83 102 222 243 2916) -1))
(constraint (=(getbiggestrect 1 110 2 157 144 236 234 204 69 36 128 12 181 97 17 15 74 175 7 55 105 141 124 115 176 57 5 186 17 0 135 108 19 112 187 129 224 177 181 155 227 236 378) -1))
(constraint (=(getbiggestrect 8 126 0 140 153 240 155 0 0 51 0 0 162 0 0 44 143 55 0 60 92 128 0 32 0 106 48 159 236 0 192 175 2 143 3 14 144 0 38 105 121 0 14) 7))
(constraint (=(getbiggestrect 8 190 0 5 176 240 191 0 2 160 24 0 160 0 0 64 121 64 0 0 61 1 162 196 1 167 88 59 203 255 0 0 0 212 0 242 231 0 194 144 231 0 1539) 2))
(constraint (=(getbiggestrect 8 235 87 31 58 237 70 244 216 144 71 109 149 2 73 131 157 199 219 4 179 132 86 54 120 27 143 242 178 191 33 63 237 96 23 107 212 1 81 99 216 0 2940) -1))
(constraint (=(getbiggestrect 0 30 0 157 254 124 30 0 8 0 192 9 0 0 48 16 178 194 0 16 6 226 16 120 65 8 32 136 160 0 128 174 34 130 253 65 4 5 210 244 8 0 -1) -1))
(constraint (=(getbiggestrect 8 133 114 140 153 241 155 6 5 59 0 218 150 0 8 44 148 55 0 60 100 139 0 32 0 101 51 159 236 0 192 175 225 143 0 14 144 6 50 102 126 0 7) 6))
(constraint (=(getbiggestrect 8 110 223 166 144 250 229 0 76 35 128 0 186 92 13 15 69 171 7 50 104 133 126 115 177 52 2 176 16 0 141 108 21 102 192 129 229 170 175 69 248 236 378) -1))
(constraint (=(getbiggestrect 8 7 0 5 0 7 0 0 0 0 0 2 0 4 0 0 134 0 131 0 0 0 192 0 0 0 164 0 0 1 1 0 0 0 0 192 16 37 3 0 0 0 -1) 6))
(constraint (=(getbiggestrect 7 128 0 2 5 239 5 0 72 248 248 0 250 0 113 158 160 221 0 7 195 128 65 248 0 128 149 0 1 0 0 0 0 128 0 193 146 0 128 41 199 0 2304) 6))
(constraint (=(getbiggestrect 7 192 3 90 38 141 174 0 64 153 84 73 125 4 124 128 213 246 6 95 96 128 20 121 0 102 32 11 193 211 6 41 39 0 7 56 128 0 52 4 141 7 5626) -1))
(constraint (=(getbiggestrect 8 235 99 25 62 244 89 238 3 159 76 10 154 4 78 131 149 188 228 15 180 126 77 254 2 7 143 252 185 19 29 66 251 98 21 108 203 185 90 96 221 4 2932) 4))
(constraint (=(getbiggestrect 7 254 0 0 1 0 129 0 0 33 0 0 193 0 9 64 224 168 0 34 1 128 24 129 0 131 4 127 0 0 5 0 0 56 0 230 185 0 8 5 251 2 26574) -1))
(constraint (=(getbiggestrect 8 240 253 33 0 96 5 0 21 84 128 0 118 82 36 206 192 235 0 28 143 96 101 52 0 250 7 191 195 0 65 128 128 44 255 255 49 0 231 8 254 0 770) 6))
(constraint (=(getbiggestrect 8 191 5 8 1 133 87 0 6 129 128 0 168 3 245 0 64 219 1 23 52 156 0 254 2 50 53 202 191 0 252 6 0 62 123 50 111 242 45 19 165 0 2530) 7))
(constraint (=(getbiggestrect 8 250 0 120 191 132 255 0 29 71 128 0 152 0 16 32 144 102 0 0 64 241 64 241 255 0 0 0 0 0 255 0 2 116 240 160 170 0 216 0 254 0 5184) 7))
(constraint (=(getbiggestrect 8 250 0 0 75 16 235 0 31 117 73 0 226 7 16 23 150 248 0 0 0 251 80 234 255 0 0 0 0 220 1 17 252 128 255 120 255 0 49 0 199 0 5080) 5))
(constraint (=(getbiggestrect 0 0 0 223 192 1 1 0 4 8 0 0 64 1 3 224 0 225 0 0 59 1 1 252 1 0 120 1 185 1 0 221 0 0 223 0 0 6 1 0 0 0 -1) -1))
(constraint (=(getbiggestrect 7 192 3 90 43 141 174 0 59 153 89 73 125 7 124 137 213 246 6 99 96 128 20 121 0 102 32 11 191 255 6 39 39 0 7 56 128 1 52 4 144 7 5607) 4))
(constraint (=(getbiggestrect 8 192 64 1 178 240 188 0 95 155 24 0 164 4 247 64 128 67 0 176 66 68 166 198 7 1 88 60 203 255 73 0 3 208 131 242 233 92 193 0 231 0 1539) 5))
(constraint (=(getbiggestrect 0 0 64 0 0 0 2 0 0 0 8 0 0 0 0 2 0 0 0 0 0 1 0 0 0 17 0 2 3 192 0 66 1 0 128 0 0 0 0 1 0 0 -1) -1))
(constraint (=(getbiggestrect 8 225 102 36 64 242 78 238 2 150 76 0 161 5 78 131 166 199 230 12 180 125 72 254 1 17 136 250 189 4 21 62 235 97 33 108 212 1 83 100 217 246 2928) -1))
(constraint (=(getbiggestrect 8 128 0 0 129 125 219 0 101 19 125 36 251 0 0 135 123 204 209 0 238 128 60 144 0 20 197 181 147 0 17 96 128 176 210 149 216 0 15 80 249 0 3560) 7))
(constraint (=(getbiggestrect 8 224 0 36 68 245 82 0 2 155 81 0 155 0 78 6 160 194 0 8 180 128 69 251 2 16 139 250 183 1 20 63 235 93 30 107 212 0 79 96 220 0 2928) 1))
(constraint (=(getbiggestrect 8 192 0 0 176 240 191 0 2 160 24 0 160 0 0 64 128 64 0 0 66 1 161 192 0 0 88 59 203 255 0 159 0 212 0 242 231 0 192 0 231 0 1539) 1))
(constraint (=(getbiggestrect 8 92 0 64 65 125 171 0 128 128 160 0 217 0 88 63 230 119 0 128 16 208 32 220 0 170 32 112 245 0 48 128 242 137 248 153 148 0 33 0 199 0 1331) 7))
(constraint (=(getbiggestrect 8 230 87 31 58 237 67 243 216 142 73 100 149 0 73 131 154 199 219 4 185 128 89 54 120 20 143 16 178 1 31 63 237 103 31 111 212 1 81 99 222 0 2918) 4))
(constraint (=(getbiggestrect 0 0 130 0 0 0 1 0 5 0 131 0 0 129 0 1 0 0 0 0 0 64 0 0 0 4 0 3 0 131 0 4 3 128 131 242 0 0 0 2 0 0 -1) -1))
(constraint (=(getbiggestrect 8 234 94 26 71 237 83 249 2 146 71 101 147 0 78 131 160 205 219 11 181 128 80 48 6 21 132 241 183 1 31 59 237 96 30 111 212 113 73 96 218 0 2969) 4))
(constraint (=(getbiggestrect 3 176 0 6 169 240 185 190 88 156 30 189 159 0 246 79 125 67 4 186 56 13 161 204 207 3 88 56 209 250 73 33 233 207 120 242 236 221 197 61 226 237 1513) -1))
(constraint (=(getbiggestrect 8 192 0 1 239 248 244 0 2 102 160 0 247 0 147 228 192 250 0 0 64 179 97 229 255 0 0 0 0 117 56 0 45 0 149 152 63 0 62 0 211 0 3465) 5))
(constraint (=(getbiggestrect 8 115 0 160 144 240 234 0 80 32 132 0 186 104 14 15 76 172 7 53 102 136 126 115 0 46 6 176 16 168 142 3 19 103 192 129 229 170 182 1 255 0 378) 3))
(constraint (=(getbiggestrect 8 192 0 54 160 192 164 0 111 62 128 0 85 0 0 49 0 239 0 160 80 172 167 168 0 130 221 0 216 0 84 202 0 91 73 208 114 0 123 32 128 0 738) 7))
(constraint (=(getbiggestrect 0 3 0 5 0 5 0 0 0 0 0 1 0 0 0 0 3 0 69 0 0 0 0 0 0 0 16 0 0 0 135 0 0 0 0 0 1 48 7 0 0 0 -1) -1))
(constraint (=(getbiggestrect 8 144 0 8 211 240 217 0 191 143 169 0 152 0 0 8 128 18 0 0 96 197 0 137 0 0 208 209 222 0 0 164 136 130 250 192 139 0 232 56 253 0 1728) 7))
(constraint (=(getbiggestrect 8 191 5 1 2 133 87 7 6 125 129 138 168 118 245 0 58 214 1 23 52 146 211 255 2 44 53 204 191 0 252 6 0 69 128 48 117 236 45 15 163 0 2530) 7))
(check-synth)