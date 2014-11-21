#! /usr/bin/python

import ctypes

so = ctypes.CDLL("./libmain.so")
so.Run()

print 'fine here\n'
for i in range (5,20):
	print so.Dis(i)
