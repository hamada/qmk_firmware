#pragma once

#include "quantum.h"

#define LAYOUT_ortho_2x4( \
    L00, L01, L02, L03, L04, L05, L06, L07\
    ) \
    { \
      { L00, L01, L02, L03 }, \
      { L04, L05, L06, L07 } \
    }
