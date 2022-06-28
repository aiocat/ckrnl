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