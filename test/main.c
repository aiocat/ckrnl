#include "../ckrnl/ckrnl.c"
#include <stdio.h>

int main(void)
{
    // Injection
    puts("Injecting...");
    InjectionStatus result = Inject();

    // Waiting to inject
    while (!IsInjected()) {}
    puts("Injected!");

    // Run a command
    Execute("print(1 + 5)");
}