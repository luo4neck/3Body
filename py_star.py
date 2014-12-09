#! /usr/bin/python

import ctypes

class locs:
	def __init__(self, x, y, z):
		self.X = x
		self.Y = y
		self.Z = z

so = ctypes.CDLL("./libmain.so")

so.DisX.restype = ctypes.c_double 
# define the return value type of DisX..
so.DisX.argtype = ctypes.c_int 
# define the input value type of DisX..
so.DisY.restype = ctypes.c_double 
so.DisY.argtype = ctypes.c_int
so.DisZ.restype = ctypes.c_double
so.DisZ.argtype = ctypes.c_int
so.Run.restype = ctypes.c_int # for Run..

loc_size = so.Run() # running the simulation..

for i in range (0,8): # just to test if the values are working fine..
	print 'from python', so.DisX(i)

# copy the result from stl object into python class..
Locs = []
print 'the length of list is:', len(Locs) 

print 'Start Copy from vector to Python list'
for i in range (0, loc_size): # copy the values from vector to Locs..
	Locs.append( locs( so.DisX(i), so.DisY(i), so.DisZ(i) ))
print 'Copy Finish'
so.FreeVec() # free the memory of vector..
print 'Mem of Vector is freed'
print 'the length of list is:', len(Locs) 

# 3d display from here.. 

print '3D'
