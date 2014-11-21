all: main.cpp Class_Star.hpp
	g++ main.cpp -Wall -shared -fPIC -o main.so

test: all
	python Call.py

clean:
	rm *.o *.so main
