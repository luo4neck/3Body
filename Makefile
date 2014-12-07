all: main.cpp class_Star.hpp store.hpp
	g++ -Wall -c -fPIC main.cpp -o main.o -I /usr/include/python2.7/
	g++ -Wall main.o -shared -o libmain.so -I /usr/include/python2.7/

test: all
	python py_star.py

clean:
	rm *.dat *.o *.so
