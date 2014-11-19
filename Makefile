all: main.o
	g++ main.o -Wall -o main

main.o: main.cpp Class_Star.hpp
	g++ -c main.cpp -Wall -o main.o

test: all
	./main

clean:
	rm *.o main
