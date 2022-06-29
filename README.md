# CKrnl

Krnl API re-written in C99.

## Note

Since Krnl is using 32-bit options, You should compile the library in 32-bit mode. [Download i686-dwarf MinGW.](https://sourceforge.net/projects/mingw-w64/files/Toolchains%20targetting%20Win32/Personal%20Builds/mingw-builds/8.1.0/threads-win32/dwarf/i686-8.1.0-release-win32-dwarf-rt_v6-rev0.7z)

## Why?

Krnl API is using C#, which makes the development painful if you don't prefer dotNet.

I re-wrote the simple API utility in C to make it easier to use for every platform by using C bindings. (or can use directly in C/C++)

## Example

You need to add **injector.dll** and **krnl.dll** to the current path, otherwise it won't work.

```c
// you must compile for 32-bit arch

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
```

Or, use the dynamic library. You can download it [here](https://github.com/aiocat/ckrnl/releases/latest).

```py
from ctypes import *

# load ckrnl
ckrnl = cdll.LoadLibrary(".\\libckrnl.dll")

# inject krnl
ckrnl.Inject()

# waiting the injection
while not ckrnl.PipeActive():
    pass

# execute some lua
ckrnl.SendToPipe(b"print(5 + 5)")
```

## License

CKrnl is distributed under the MIT license.
