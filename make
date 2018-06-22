exe:	main.o personas.o
	g++ main.o personas.o
main.o:	main.cpp personas.h
	g++ -c main.cpp
personas.o:	personas.h personas.cpp
	g++ -c personas.cpp
