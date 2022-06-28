/**
 * Copyright (c) 2022 aiocat
 * 
 * This software is released under the MIT License.
 * https://opensource.org/licenses/MIT
 */

#include "./headers/inject.h"

InjectionStatus Inject(void)
{
    HANDLE injectorDll = LoadLibrary(TEXT("E:\\Hersey\\Acatp\\ckrnl\\test\\injector.dll"));
    if (!injectorDll)
        return Failure;

    INJECT_FUNCTION injectFunction = (INJECT_FUNCTION)GetProcAddress(injectorDll, "inject");
    InjectionStatus result = (*injectFunction)("E:\\Hersey\\Acatp\\ckrnl\\test\\krnl.dll");

    FreeLibrary(injectorDll);
    return result;
}