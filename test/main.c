#include "../ckrnl/ckrnl.c"
#include <stdio.h>

int main(void)
{
    printf("%d\n", Execute("print(1 + 5)"));

    // Injection
    puts("Injecting...");
    InjectionStatus result = Inject();

    // Waiting to inject
    while (!IsInjected()) {}
    puts("Injected!");

    // Run a command
    printf("%d\n", Execute("print(1 + 5)"));
}