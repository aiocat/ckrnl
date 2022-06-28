/**
 * Copyright (c) 2022 aiocat
 * 
 * This software is released under the MIT License.
 * https://opensource.org/licenses/MIT
 */

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