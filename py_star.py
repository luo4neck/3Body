#! /usr/bin/python

import ctypes
# from ctypes import *

#class Loc(ctypes.Structure):
#	pass
#Loc._fields_ = [ ("X", ctypes.c_double), ("Y", ctypes.c_double), ("Z", ctypes.c_double) ]

so = ctypes.CDLL("./libmain.so")
so.Run() # running the simulation..

so.Dis.restype = ctypes.c_double # define the return value type of Dis..
so.Dis.argtype = ctypes.c_int # define the input value type of Dis..

print 'test Dis(i) here\n'
for i in range (0,8):
	print 'from python', so.Dis(i)

# copy the result from stl object into python class..

# 3d display from here.. 
