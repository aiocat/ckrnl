from ctypes import *
import time

# load ckrnl
ckrnl = cdll.LoadLibrary(".\\libckrnl.dll")

# inject krnl
ckrnl.Inject()

# waiting the injection
while not ckrnl.PipeActive():
    pass

# execute some lua
ckrnl.SendToPipe(b"print(\"Hello from Python!\")")
ckrnl.SendToPipe(b"print(\"This is an example dynamic library usage in Python.\")")