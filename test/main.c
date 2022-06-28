#include "../ckrnl/inject.c"
#include <stdio.h>

int main(void)
{
    puts("Injecting...");
    InjectionStatus result = Inject();
    printf("Got: %d\n", result);
}