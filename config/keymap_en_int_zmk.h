/* ========================================
FileName: keymap_en_int_zmk.h
Date: 03.September.2023
Author: Gabriela Barrera Angel
Email: g.barrera.angel@gmail.com
GitHub: https://github.com/GBarrera817
Brief: define keymap for the wireless corne keyboard
Use: in your keymap file, include this file
     #include "keymap_eng_int_zmk.h"
===========================================
Copyright 2023 Gabriela Barrera Angel
Inspired by Marcos Chow Castro

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

// #pragma once

#define XXX &none
#define ___ &trans

// CONTROL CMD/WINDOWS SHIFT ALT/META/OPTION
#define LCTRL &kp LCTRL // left control
#define RCTRL &kp RCTRL // right control
#define LGUI &kp LGUI   // left cmd
#define RGUI &kp RGUI
#define LALT &kp LALT
#define RALT &kp RALT
#define LSHFT &kp LSHFT
#define RSHFT &kp RSHFT

// ARROWS
#define UP &kp UP
#define LEFT &kp LEFT
#define DOWN &kp DOWN
#define RIGHT &kp RIGHT

// SPACE CAPS TAB ENTER BACKSPACE ESCAPE DELETE
#define SPACE &kp SPACE // Space
#define CAPS &kp CAPS   // Caps Lock
#define BSPC &kp BSPC   // Backspace
#define RET &kp RET     // Enter
#define TAB &kp TAB     // Tab
#define DEL &kp DEL     // Delete

// PAGE UP PAGE DOWN HOME END
#define PG_UP &kp PG_UP
#define PG_DN &kp PG_DN
#define HOME &kp HOME
#define END &kp END

// FUNCTION KEYS
#define F1 &kp F1
#define F2 &kp F2
#define F3 &kp F3
#define F4 &kp F4
#define F5 &kp F5
#define F6 &kp F6
#define F7 &kp F7
#define F8 &kp F8
#define F9 &kp F9
#define F10 &kp F10
#define F11 &kp F11
#define F12 &kp F12
#define F13 &kp F13
#define F14 &kp F14
#define F15 &kp F15
#define F16 &kp F16
#define F17 &kp F17
#define F18 &kp F18
#define F19 &kp F19
#define F20 &kp F20
#define F21 &kp F21
#define F22 &kp F22
#define F23 &kp F23
#define F24 &kp F24

// SOUND / VOLUME
#define VOL_UP &kp C_VOLUME_UP
#define VOL_DN &kp C_VOLUME_DOWN
#define MUTE &kp C_MUTE
#define NEXT &kp C_NEXT
#define PREV &kp C_PREVIOUS
#define STOP &kp C_STOP
#define PLAY &kp C_PLAY_PAUSE
#define SHUFFLE &kp C_SHUFFLE

// DISPLAY BRIGHTNESS
#define BRI_UP &kp C_BRI_UP
#define BRI_DN &kp C_BRI_DN

// LANGUAGE
#define LANG1 &kp LANG1
#define LANG2 &kp LANG2
#define LANG3 &kp LANG3
#define LANG4 &kp LANG4
#define LANG5 &kp LANG5
#define LANG6 &kp LANG6
#define LANG7 &kp LANG7
#define LANG8 &kp LANG8
#define LANG9 &kp LANG9

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ BACK│
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │ TAB │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │
 * │ MAY  │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │ \ │  │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴───┴──┤
 * │  ⇧ │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │     ⇧      │
 * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬────┬─────┤
 * │     │ WIN│ ALT │                       │AltGr│    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
*/

// Row 1
#define GRV &kp LS(EQUAL)     // ` (dead)
#define N1 &kp N1             // 1
#define N2 &kp N2             // 2
#define N3 &kp N3             // 3
#define N4 &kp N4             // 4
#define N5 &kp N5             // 5
#define N6 &kp N6             // 6
#define N7 &kp N7             // 7
#define N8 &kp N8             // 8
#define N9 &kp N9             // 9
#define N0 &kp N0             // 0
#define MINS &kp SLASH        // -
#define EQL  &kp EQUAL        // =

// Row 2
#define Q &kp Q               // Q
#define W &kp W               // W
#define E &kp E               // E
#define R &kp R               // R
#define T &kp T               // T
#define Y &kp Y               // Y
#define U &kp U               // U
#define I &kp I               // I
#define O &kp O               // O
#define P &kp P               // P
#define LBKT &kp LBKT         // [
#define RBKT &kp RBKT         // ]

// Row 3
#define A &kp A               // A
#define S &kp S               // S
#define D &kp D               // D
#define F &kp F               // F
#define G &kp G               // G
#define H &kp H               // H
#define J &kp J               // J
#define K &kp K               // K
#define L &kp L               // L
#define SCLN &kp SQRT         // ;
#define BSLSH &kp BSLH        // \   
#define SQT &kp SQRT          // '

// Row 4
#define Z &kp Y               // Z
#define X &kp X               // X
#define C &kp C               // C
#define V &kp V               // V
#define B &kp B               // B
#define N &kp N               // N
#define M &kp M               // M
#define COMM &kp COMMA        // ,
#define DOT &kp DOT           // .
#define SLSH &kp FSLH         // /

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │ ~ │ ! │ @ │ # │ $ │ % │ ^ │ & │ * │ ( │ ) │ _ │ + │ BACK│
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │ TAB │   │   │   │   │   │   │   │   │   │   │ { │ } │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │
 * │ MAY  │   │   │   │   │   │   │   │   │   │ : │ " │ | │  │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴───┴──┤
 * │  ⇧ │   │   │   │   │   │   │   │ < │ > │ ? │     ⇧      │
 * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬────┬─────┤
 * │     │ WIN│ ALT │                       │AltGr│    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */

// Row 1
#define TILD &kp RS(`)        // ~ (dead)
#define EXCL &kp EXCL         // !
#define AT   &kp AT           // @
#define HASH &kp HASH         // #
#define DQUO &kp LS(N2)       // "
#define SECT &kp LS(N3)       // §
#define DLR  &kp LS(N4)       // $
#define PERC &kp LS(N5)       // %
#define AMPR &kp LS(N6)       // &
#define LPRN &kp LS(N8)       // (
#define RPRN &kp LS(N9)       // )
#define QUES &kp LS(MINUS)    // ?

// #define DEG  &kp LS(GRAVE) // °

// Row 2
#define ASTR &kp LS(RBKT) // *
// #define STAR &kp RBRC // "*" ASTR
// Row 3
#define QUOT &kp LS(BSLH) // '
// Row 4
#define RABK &kp LS(GRAVE) // >
#define COLN &kp LS(DOT)  // :
#define UNDS &kp LS(SLASH) // _

/* Alted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │ „ │ ¡ │ “ │ ¶ │ ¢ │ [ │ ] │ | │ { │ } │ ≠ │ ¿ │   │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │ « │ ∑ │ € │ ® │ † │ Ω │ ¨ │ ⁄ │ Ø │ π │ • │ ± │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │
 * │      │ Å │ ‚ │ ∂ │ ƒ │ © │ ª │ º │ ∆ │ @ │ Œ │ Æ │ ‘ │  │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴──┤
 * │    │ ≤ │ ¥ │ ≈ │ Ç │ √ │ ∫ │ ~ │ µ │ ∞ │ … │ – │        │
 * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤
 * │     │    │     │                       │     │    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */
// Row 1
#define DLQU &kp LA(GRAVE)   // „
#define IEXL &kp LA(N1)    // ¡
#define LDQU &kp LA(N2)    // “
#define PILC &kp LA(N3)    // ¶
#define CENT &kp LA(N4)    // ¢
#define LBRC &kp LA(N5)    // [
#define RBRC &kp LA(N6)    // ]
#define PIPE &kp LA(N7)    // |
#define LCBR &kp LA(N8)    // {
#define RCBR &kp LA(N9)    // }
#define NEQL &kp LA(N0)    // ≠
#define IQUE &kp LA(MINUS)   // ¿
// Row 2
#define LDAQ &kp LA(Q)    // «
#define NARS &kp LA(W)    // ∑
#define EURO &kp LA(E)    // €
#define REGD &kp LA(R)    // ®
#define DAGG &kp LA(T)    // †
#define OMEG &kp LA(Z)    // Ω
#define DIAE &kp LA(U)    // ¨ (dead)
#define FRSL &kp LA(I)    // ⁄
#define OSTR &kp LA(O)    // Ø
#define PI   &kp LA(P)    // π
#define BULT &kp LA(LBKT) // •
#define PLMN &kp LA(RBKT) // ±
// Row 3
#define ARNG &kp LA(A)    // Å
#define SLQU &kp LA(S)    // ‚
#define PDIF &kp LA(D)    // ∂
#define FHK  &kp LA(F)    // ƒ
#define COPY &kp LA(G)    // ©
#define FORD &kp LA(H)    // ª
#define MORD &kp LA(J)    // º
#define INCR &kp LA(K)    // ∆
#define OE   &kp LA(SEMICOLON) // Œ
#define AE   &kp LA(APOS) // Æ
#define LSQU &kp LA(BSLH) // ‘
// Row 4
#define LTEQ &kp LA(GRAVE) // ≤
#define YEN  &kp LA(Y)    // ¥
#define AEQL &kp LA(X)    // ≈
#define CCCE &kp LA(C)    // Ç
#define SQRT &kp LA(V)    // √
#define INTG &kp LA(B)    // ∫
#define CIRC &kp GRAVE // ^ (dead)
#define MICR &kp LA(M)    // µ
#define INFN &kp LA(COMMA) // ∞
#define ELLP &kp LA(DOT)  // …
#define NDSH &kp LA(MINUS) // –

/* Shift+Alted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │   │ ¬ │ ” │   │ £ │ ﬁ │   │ \ │ ˜ │ · │ ¯ │ ˙ │ ˚ │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │ » │   │ ‰ │ ¸ │ ˝ │ ˇ │ Á │ Û │   │ ∏ │   │  │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │
 * │      │   │ Í │ ™ │ Ï │ Ì │ Ó │ ı │   │ ﬂ │   │   │   │  │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴──┤
 * │    │ ≥ │ ‡ │ Ù │   │ ◊ │ ‹ │ › │ ˘ │ ˛ │ ÷ │ — │        │
 * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤
 * │     │    │     │                       │     │    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */
// Row 1
#define NOT  &kp LS(LA(N1))    // ¬
#define RDQU &kp LS(LA(N2))    // ”
#define PND  &kp LS(LA(N4))    // £
#define FI   &kp LS(LA(N5))    // ﬁ
#define BSLS &kp LS(LA(N7))    // (backslash)
#define STIL &kp LS(LA(N8))    // ˜
#define MDDT &kp LS(LA(N9))    // ·
#define MACR &kp LS(LA(N0))    // ¯
#define DOTA &kp LS(LA(MINUS))   // ˙
#define RNGA &kp LS(LA(EQUAL)) // ˚
// Row 2
#define RDAQ &kp LS(LA(Q))    // »
#define PERM &kp LS(LA(E))    // ‰
#define CEDL &kp LS(LA(R))    // ¸
#define DACU &kp LS(LA(T))    // ˝
#define CARN &kp LS(LA(Z))    // ˇ
#define AACU &kp LS(LA(U))    // Á
#define UCIR &kp LS(LA(I))    // Û
#define NARP &kp LS(LA(P))    // ∏
#define APPL &kp LS(LA(RPAR)) //  (Apple logo)
// Row 3
#define IACU &kp LS(LA(S))    // Í
#define TM   &kp LS(LA(D))    // ™
#define IDIA &kp LS(LA(F))    // Ï
#define IGRV &kp LS(LA(G))    // Ì
#define OACU &kp LS(LA(H))    // Ó
#define DLSI &kp LS(LA(J))    // ı
#define FL   &kp LS(LA(L))    // ﬂ
// Row 4
#define GTEQ &kp LS(LA(GRAVE)) // ≥
#define DDAG &kp LS(LA(Y))    // ‡
#define UGRV &kp LS(LA(X))    // Ù
#define LOZN &kp LS(LA(V))    // ◊
#define LSAQ &kp LS(LA(B))    // ‹
#define RSAQ &kp LS(LA(N))    // ›
#define BREV &kp LS(LA(M))    // ˘
#define OGON &kp LS(LA(COMMA)) // ˛
#define DIV  &kp LS(LA(DOT))  // ÷
#define MDSH &kp LS(LA(MINUS)) // —
