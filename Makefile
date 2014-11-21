all: main.cpp Class_Star.hpp
	g++ -Wall -c -fPIC main.cpp -o main.o -I /usr/include/python2.7/
	g++ -Wall main.o -shared -o libmain.so -I /usr/include/python2.7/

test: all
	python call.py

clean:
	rm *.o *.so
