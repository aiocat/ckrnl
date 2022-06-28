/**
 * Copyright (c) 2022 aiocat
 * 
 * This software is released under the MIT License.
 * https://opensource.org/licenses/MIT
 */

#include "./headers/ckrnl.h"

void SetFrameRate(uint16_t frameRate) {
    if (IsInjected()) {
        char formatted[128];
        sprintf(formatted, "setfpscap(%d)", frameRate);

        Execute(formatted);
    }
}