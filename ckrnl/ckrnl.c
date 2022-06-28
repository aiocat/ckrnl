#include "./headers/ckrnl.h"

void SetFrameRate(uint16_t frameRate) {

    if (IsInjected()) {
        char formatted[128];
        sprintf(formatted, "setfpscap(%d)", frameRate);

        Execute(formatted);
    }
}