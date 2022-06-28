#ifndef _CKRNL_INJECT_H
#define _CKRNL_INJECT_H

#include <windows.h>
#include <stdlib.h>

typedef enum InjectionStatus
{
    Failure = -1,
    Success,
    LoadImageFail,
    NoRobloxProcess,
} InjectionStatus;

typedef InjectionStatus (*INJECT_FUNCTION)(const char *);

InjectionStatus Inject(void);

#endif