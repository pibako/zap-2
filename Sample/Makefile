main: main.o list.o
	g++ -o a.out main.o list.o

list.o: list.cpp
	g++ -c list.cpp -o list.o

main.o: main.cpp
	g++ -c main.cpp -o main.o

check-syntax:
	g++ -o nul -S ${CHK_SOURCES}

all:
	main
