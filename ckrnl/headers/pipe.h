#ifndef _CKRNL_PIPE_H
#define _CKRNL_PIPE_H

#include <stdint.h>
#include <stdio.h>

#define PIPE_NAME "krnlpipe"
#define PIPE_PATH "\\\\.\\pipe\\krnlpipe"

uint8_t PipeActive(void);
uint8_t SendToPipe(char *input);

#endif