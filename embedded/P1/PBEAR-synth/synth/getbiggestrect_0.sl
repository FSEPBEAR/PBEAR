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

(constraint (=(getbiggestrect 8 126 0 146 153 240 155 0 0 51 0 218 153 0 2 38 148 55 0 60 97 128 0 32 0 101 48 159 236 4 192 175 224 143 0 14 142 0 45 102 126 0 26) 6))
(constraint (=(getbiggestrect 1 188 71 120 178 240 187 0 93 160 24 0 164 4 248 64 135 67 0 176 73 68 166 198 7 188 88 59 203 247 71 0 3 208 127 235 231 87 193 3 235 0 1510) 0))
(constraint (=(getbiggestrect 8 236 0 38 0 224 88 0 52 2 192 0 146 44 0 15 8 243 3 0 6 190 40 177 9 9 159 66 32 0 65 78 4 13 16 110 212 0 56 1 158 0 13930) 1))
(constraint (=(getbiggestrect 8 132 0 0 241 196 247 0 59 63 64 0 213 0 40 233 236 244 0 0 79 128 157 0 0 0 200 128 0 0 213 166 163 5 197 159 248 0 49 0 128 0 496) 6))
(constraint (=(getbiggestrect 8 185 3 1 178 240 194 0 89 160 24 0 166 0 239 65 128 65 0 172 66 148 168 196 74 2 85 54 203 255 73 2 0 208 131 242 231 224 205 0 231 53 1539) -1))
(constraint (=(getbiggestrect 8 240 0 90 232 128 249 0 192 130 197 0 201 0 133 65 235 65 0 1 93 143 37 255 0 0 127 128 15 0 2 188 137 132 213 72 247 0 0 10 191 0 3220) 1))
(constraint (=(getbiggestrect 8 140 0 0 131 0 190 0 64 224 104 0 227 0 25 156 224 176 0 20 242 195 224 94 0 0 0 128 238 158 0 0 0 130 6 225 164 7 53 13 187 0 7650) 6))
(constraint (=(getbiggestrect 8 230 87 31 58 237 67 243 216 142 71 100 149 0 73 131 154 199 219 4 185 128 89 54 120 20 140 16 178 1 31 63 237 96 31 111 212 1 81 99 222 0 2944) 4))
(constraint (=(getbiggestrect 4 191 0 3 0 133 84 0 4 130 129 0 168 199 245 0 64 219 1 16 54 148 0 255 0 44 57 204 192 0 245 0 0 64 128 42 118 236 45 15 168 4 2594) -1))
(constraint (=(getbiggestrect 8 123 4 19 82 199 145 12 78 135 194 0 216 131 85 30 171 206 0 34 225 184 22 184 3 155 11 155 28 80 252 15 255 82 229 98 133 223 23 213 221 145 3410) -1))
(constraint (=(getbiggestrect 1 110 2 157 144 236 234 204 69 36 128 12 181 97 17 15 74 175 7 55 105 141 124 115 176 57 5 186 17 0 135 108 19 112 187 129 224 177 181 155 227 236 378) -1))
(constraint (=(getbiggestrect 8 192 0 32 113 241 159 0 8 169 163 0 189 0 8 0 99 25 0 33 81 96 71 105 0 89 220 192 57 0 12 27 192 132 205 128 249 0 1 64 211 0 6638) 7))
(constraint (=(getbiggestrect 8 228 98 36 64 245 83 238 2 153 78 0 155 0 78 131 160 199 230 8 180 125 72 251 162 14 136 250 185 1 25 63 235 97 30 108 206 187 84 100 217 0 2897) 4))
(constraint (=(getbiggestrect 7 192 0 0 176 240 191 0 2 160 24 0 160 0 0 64 128 64 0 0 66 1 161 192 0 0 88 59 203 0 0 0 157 212 0 242 231 0 192 0 231 0 1539) 1))
(constraint (=(getbiggestrect 8 126 0 15 82 208 145 0 80 136 192 0 219 0 88 26 168 206 0 34 0 192 0 181 0 11 155 32 154 0 0 251 238 87 5 74 133 0 24 1 227 0 3404) 7))
(constraint (=(getbiggestrect 8 219 202 14 128 48 223 0 128 4 128 0 20 23 64 206 138 216 0 96 87 239 112 35 151 34 139 128 224 0 208 93 3 0 60 128 151 245 8 0 40 0 2416) 5))
(constraint (=(getbiggestrect 5 182 0 184 179 240 189 2 102 169 24 0 165 0 250 59 130 64 0 183 61 1 163 206 0 1 100 59 210 255 80 0 0 205 133 244 236 0 192 0 231 0 1563) 1))
(constraint (=(getbiggestrect 8 187 64 1 178 240 181 0 95 160 24 0 164 4 248 64 128 67 0 176 66 68 166 197 7 192 94 56 203 255 66 0 3 208 127 242 231 87 193 4 235 0 1539) 5))
(constraint (=(getbiggestrect 8 32 0 7 121 133 180 0 85 23 128 0 128 0 70 128 192 157 0 100 249 200 6 254 1 223 215 0 112 0 0 200 34 224 241 213 248 2 0 0 255 1 4968) 6))
(constraint (=(getbiggestrect 8 40 0 4 128 240 146 0 18 68 247 0 84 0 20 83 96 84 0 52 195 171 70 206 0 153 196 72 8 0 48 0 128 65 255 168 84 0 128 63 239 0 1862) 7))
(constraint (=(getbiggestrect 8 208 0 20 51 128 52 0 5 9 224 0 85 0 0 48 8 192 0 58 0 128 112 251 0 199 174 8 67 0 218 32 65 0 240 128 7 0 154 2 233 0 137) 7))
(constraint (=(getbiggestrect 6 128 0 0 240 204 254 0 121 106 128 0 197 0 25 0 80 55 0 65 0 128 192 125 0 0 0 0 0 0 0 0 0 0 0 209 2 0 38 1 73 0 34) 5))
(constraint (=(getbiggestrect 8 230 92 31 70 237 77 244 2 151 71 102 149 0 73 131 160 199 217 4 188 124 80 54 2 17 135 246 178 1 31 63 237 94 26 111 211 1 83 99 222 0 2944) 4))
(constraint (=(getbiggestrect 8 192 0 96 32 141 180 0 64 0 80 0 125 0 128 128 219 243 0 95 102 128 20 127 255 0 0 0 0 0 102 32 17 0 192 64 128 0 65 0 135 0 5632) 7))
(constraint (=(getbiggestrect 8 248 4 64 7 227 20 0 20 207 248 0 234 0 200 3 24 161 0 106 27 124 114 240 217 141 218 107 203 0 248 28 198 216 221 200 242 0 194 130 154 237 2604) -1))
(constraint (=(getbiggestrect 3 190 0 5 176 243 192 1 0 157 24 0 156 0 1 64 121 64 0 0 55 187 161 196 1 167 86 66 203 255 0 0 0 213 0 243 231 0 201 144 231 0 1537) 2))
(constraint (=(getbiggestrect 8 230 80 36 64 238 77 251 2 151 71 102 159 31 73 131 160 205 218 6 187 128 79 252 6 14 140 239 178 5 31 63 227 96 26 101 212 185 88 107 222 0 2944) -1))
(constraint (=(getbiggestrect 8 128 4 19 82 199 145 13 80 135 194 0 216 128 85 30 172 206 0 34 224 176 22 184 4 155 11 155 28 81 252 15 1 82 229 93 133 217 21 213 219 146 3410) -1))
(constraint (=(getbiggestrect 8 30 0 134 138 248 146 0 0 83 170 0 93 0 0 130 192 137 0 130 253 142 33 64 0 34 110 136 191 0 6 128 8 41 194 142 51 0 129 0 210 0 1064) 6))
(constraint (=(getbiggestrect 8 188 64 1 175 245 181 0 95 160 23 119 168 4 248 58 128 67 0 176 71 73 164 198 7 1 88 54 203 255 79 0 3 208 127 242 231 87 193 0 239 0 1539) 5))
(constraint (=(getbiggestrect 8 68 0 0 176 210 176 0 64 232 131 0 234 0 0 192 128 197 0 16 197 224 74 148 0 112 71 199 191 0 255 0 128 225 160 219 228 0 100 61 210 0 435) 7))
(constraint (=(getbiggestrect 3 253 0 68 2 234 21 0 23 200 238 0 234 8 194 202 24 159 1 113 14 124 119 248 6 143 214 111 196 0 228 28 206 215 228 200 242 0 194 137 255 241 2612) -1))
(constraint (=(getbiggestrect 2 188 64 1 175 245 181 0 95 160 23 119 168 4 248 58 128 67 0 176 66 73 166 198 7 1 88 54 203 255 79 0 3 208 127 242 231 87 193 2 239 0 1539) -1))
(constraint (=(getbiggestrect 8 93 2 64 65 125 173 0 127 128 160 0 217 0 88 67 224 119 0 128 9 212 32 220 0 33 170 245 112 182 48 128 236 144 253 156 149 0 33 0 199 0 1331) 5))
(constraint (=(getbiggestrect 4 128 241 64 112 197 124 4 105 246 247 33 247 7 21 185 241 55 3 42 243 224 119 66 54 112 60 184 238 1 37 224 192 58 7 131 209 0 52 16 180 14 1434) -1))
(constraint (=(getbiggestrect 1 176 0 6 169 240 185 186 88 156 30 189 161 0 245 84 125 62 4 186 56 21 161 204 203 3 85 56 209 250 73 37 233 209 118 242 228 221 206 69 226 237 1514) -1))
(constraint (=(getbiggestrect 8 228 0 64 0 58 197 0 119 163 138 0 177 0 8 72 27 183 0 9 176 151 0 241 0 0 0 128 254 252 0 0 0 64 0 5 91 0 3 10 151 0 135) 6))
(constraint (=(getbiggestrect 8 116 0 27 192 192 212 0 1 0 128 0 195 0 0 0 123 148 0 0 119 0 126 223 0 241 64 144 37 1 8 0 137 28 228 126 145 0 190 0 237 0 -3) 3))
(check-synth)