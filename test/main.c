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

    SetWalkSpeed(100);
    SetJumpPower(100);

    Execute("print(1 + 7)");
}