/**
 * Copyright (c) 2021 Tobias Bohnen
 *
 * This software is released under the MIT License.
 * https://opensource.org/licenses/MIT
 */

#if defined (STB_VORBIS_NO_PUSHDATA_API)
#define STB_VORBIS_HEADER_ONLY
#include "stb_vorbis.c"
#endif

#define TSF_IMPLEMENTATION
#include "tsf.h"

#define TML_IMPLEMENTATION
#include "tml.h"