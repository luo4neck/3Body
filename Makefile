all: main.cpp Class_Star.hpp
	g++ -c -fPIC main.cpp -o main.o -I /usr/include/python2.7/
	g++ -shared -Wl,-soname,libmain.so -o main.so -I /usr/include/python2.7/

test: all
	python call.py

clean:
	rm *.o *.so main
