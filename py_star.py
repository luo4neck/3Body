#! /usr/bin/python

import ctypes

so = ctypes.CDLL("./libmain.so")
so.Run() # running the simulation..

so.show()

x5 = so.Dis(5)
print x5

print 'test Dis(i) here\n'
for i in range (5,8):
	print 'from python', so.Dis(i)

so.show()

# copy the result from stl object into python class..

# 3d display from here.. 
