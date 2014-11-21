import ctypes

Main = ctypes.CDLL("./main.so")
print 'fine here\n'
Main.Main()
