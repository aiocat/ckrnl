#include "./headers/pipe.h"

uint8_t PipeActive()
{
    FILE *pipe = fopen(PIPE_PATH, "r");
    if (!pipe)
    {
        return 0;
    }
    else
    {
        fclose(pipe);
        return 1;
    }
}

uint8_t SendToPipe(char *input)
{
    FILE *pipe = fopen(PIPE_PATH, "w");
    if (!pipe)
    {
        return 0;
    }

    fputs(input, pipe);
    fclose(pipe);

    return 1;
}