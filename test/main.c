#include "../ckrnl/inject.c"
#include "../ckrnl/pipe.c"
#include <stdio.h>

int main(void)
{
    printf("Before Inject Pipe Active: %d\n", PipeActive());

    puts("Injecting...");
    InjectionStatus result = Inject();

    printf("Got: %d\n", result);
    printf("Got: %d\n", SendToPipe("print(1 + 5)"));
    printf("Got: %d\n", SendToPipe("print('çüngüs')"));
}