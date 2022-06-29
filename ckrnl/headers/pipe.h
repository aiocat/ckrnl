/**
 * Copyright (c) 2022 aiocat
 *
 * This software is released under the MIT License.
 * https://opensource.org/licenses/MIT
 */

#ifndef _CKRNL_PIPE_H
#define _CKRNL_PIPE_H

#include <stdint.h>
#include <stdio.h>

#define PIPE_PATH "\\\\.\\pipe\\krnlpipe"

uint8_t PipeActive(void);
uint8_t SendToPipe(char *);

#endif