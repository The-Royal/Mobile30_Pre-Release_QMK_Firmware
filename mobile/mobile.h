#pragma once

#include "quantum.h"

#define XXX KC_NO

#define LAYOUT_mobile( \
    k01, k02, k03, k04, k05, k06, k07, k08, k09, k010, \
       k11, k12, k13, k14, k15, k16, k17, k18, k19,    \
    k21,    k22, k23, k24, k25, k26, k27, k28,   k210, \
    k31,    k32, k33,        k36,         k39,   k310 \
) \
{ \
    { k01, k02, k03, k04, k05, k06, k07, k08, k09, k010 }, \
    { k11, k12, k13, k14, k15, k16, k17, k18, k19, XXX  }, \
    { k21, k22, k23, k24, k25, k26, k27, k28, XXX, k210 }, \
    { k31, k32, k33, XXX, XXX, k36, XXX, XXX, k39, k310 }  \
}

#define LAYOUT_mobile_split_all( \
    k01, k02, k03, k04, k05, k06, k07, k08, k09, k010, \
       k11, k12, k13, k14, k15, k16, k17, k18, k19,    \
    k21,    k22, k23, k24, k25, k26, k27, k28,   k210, \
    k31, k32, k33, k34, k35, k36, k37, k38, k39, k310  \
) \
{ \
    { k01, k02, k03, k04, k05, k06, k07, k08, k09, k010 }, \
    { k11, k12, k13, k14, k15, k16, k17, k18, k19, XXX  }, \
    { k21, k22, k23, k24, k25, k26, k27, k28, XXX, k210 }, \
    { k31, k32, k33, k34, k35, k36, k37, k38, k39, k310 }  \
}