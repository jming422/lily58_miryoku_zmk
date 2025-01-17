// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku
// Customizations Copyright 2023 Jonathan Ming

#if !defined (MIRYOKU_LAYOUTMAPPING_LILY58)

#define XXX &none

#define MIRYOKU_LAYOUTMAPPING_LILY58( \
     K00, K01, K02, K03, K04,                K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                K35, K36, K37, N38, N39 \
) \
&kp ESC   &kp N1  &kp N2  &kp N3       &kp N4  &kp N5                                   &kp N6  &kp N7  &kp N8       &kp N9  &kp N0  &kp EQUAL \
&kp TAB       K00     K01     K02          K03     K04                                      K05     K06     K07          K08     K09 &kp BSLH  \
&kp LCTRL     K10     K11     K12          K13     K14                                      K15     K16     K17          K18     K19 &kp SEMI  \
&kp LSHFT     K20     K21     K22          K23     K24 &kp C_PLAY_PAUSE &kp PAUSE_BREAK     K25     K26     K27          K28     K29 &kp RSHFT \
                          &kp C_BRI_DN     K32     K33     K34              K35             K36     K37 &kp C_BRI_UP

#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 52 53
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 54 55

#endif

#define MIRYOKU_MAPPING MIRYOKU_LAYOUTMAPPING_LILY58
