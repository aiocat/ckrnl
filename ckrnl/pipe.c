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
    HANDLE createdInstance = CreateFile(
        PIPE_PATH,
        GENERIC_READ | GENERIC_WRITE,
        FILE_SHARE_READ | FILE_SHARE_WRITE,
        NULL,
        OPEN_EXISTING,
        FILE_ATTRIBUTE_NORMAL,
        NULL);
    if (!createdInstance)
        return 0;

    DWORD dwBytesWrite;
    uint8_t result = WriteFile(createdInstance, input, (strlen(input) + 1) * sizeof(char), &dwBytesWrite, NULL);
    CloseHandle(createdInstance);

    return result;
}