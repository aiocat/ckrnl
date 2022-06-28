: dynamic library compile script

gcc -c -Wall -Werror -fpic .\ckrnl\ckrnl.c

:checkpoint
if exist dylib (
    move .\ckrnl.o .\dylib\ckrnl.o
    gcc -shared -o .\dylib\libckrnl.dll .\dylib\ckrnl.o
) else (
    mkdir dylib
    goto :checkpoint
)