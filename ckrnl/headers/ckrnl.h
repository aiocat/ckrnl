/**
 * Copyright (c) 2022 aiocat
 * 
 * This software is released under the MIT License.
 * https://opensource.org/licenses/MIT
 */

#ifndef _CKRNL_H
#define _CKRNL_H

#include "../inject.c"
#include "../pipe.c"
#include <string.h>

#define IsInjected PipeActive
#define Execute SendToPipe

void SetFrameRate(uint16_t);

#endif