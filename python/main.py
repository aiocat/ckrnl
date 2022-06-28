# Copyright (c) 2022 aiocat
# 
# This software is released under the MIT License.
# https://opensource.org/licenses/MIT

# this code can be interpreted with python 3.6+ 32-bit
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