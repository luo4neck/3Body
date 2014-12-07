#! /usr/bin/python

import ctypes

so = ctypes.CDLL("./libmain.so")
so.Run() # running the simulation..

print 'fine here\n'
for i in range (5,8):
	print so.Dis(i)

# copy the result from stl object into python class..

# 3d display from here.. 
