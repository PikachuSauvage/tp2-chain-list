all: main

main: Vector.o Node.o List.o main.o
	g++ -g Vector.o Node.o List.o main.o -o main

main.o: main.cpp Vector.h Node.h List.h
	g++ -g -c main.cpp -o main.o -std=c++11

Node.o: Node.cpp Node.h
	g++ -g -c Node.cpp -o Node.o -std=c++11

Vector.o: Vector.cpp Vector.h
	g++ -g -c Vector.cpp -o Vector.o -std=c++11

List.o: List.cpp List.h Node.h
	g++ -g -c List.cpp -o List.o -std=c++11

clean:
	rm -f *.o
