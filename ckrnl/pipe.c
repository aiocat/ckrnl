/**
 * Copyright (c) 2022 aiocat
 *
 * This software is released under the MIT License.
 * https://opensource.org/licenses/MIT
 */

#include "./headers/pipe.h"

uint8_t PipeActive(void)
{
    FILE *pipe = fopen(PIPE_PATH, "r");
    if (!pipe)
        return 0;

    fclose(pipe);
    return 1;
}

uint8_t SendToPipe(char *input)
{
    FILE *pipe = fopen(PIPE_PATH, "w");
    if (!pipe)
        return 0;

    fputs(input, pipe);
    fclose(pipe);

    return 1;
}