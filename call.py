import ctypes

so = ctypes.CDLL("./main.so")
print 'fine here\n'
so.Run()
L[100] = so.vector2list()

dic = (120)
# so.Display(dic)
# dic = so.RI()
