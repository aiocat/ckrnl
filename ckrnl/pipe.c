#include <winbase.h>
#include <stdint.h>
#include <string.h>

#define PIPE_NAME "krnlpipe"
#define PIPE_PATH "\\\\.\\pipe\\krnlpipe"

uint8_t PipeActive()
{
    if (WaitNamedPipe(PIPE_PATH, 0) == 0)
        return 0;
    else
        return 1;
}