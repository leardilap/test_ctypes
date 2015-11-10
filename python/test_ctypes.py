#! /usr/bin/env python

from ctypes import *

test_lib = cdll.LoadLibrary("/home/ws/anka-lab-det-0001/luis/test_ctypes/build/libtest_ctypes.so")

reset = test_lib.reset
reset.restype = c_int

reset()