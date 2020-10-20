CC=g++
CFLAGS=-std=c++11 -Wall

all: main

Empregado.o: Empregado.hpp Empregado.cpp
	${CC} ${CFLAGS} -c Empregado.cpp

Engenheiro.o: Engenheiro.hpp Engenheiro.cpp
	${CC} ${CFLAGS} -c Engenheiro.cpp

Vendedor.o: Vendedor.hpp Vendedor.cpp
	${CC} ${CFLAGS} -c Vendedor.cpp

main.o: Empregado.hpp Engenheiro.hpp Vendedor.hpp main.cpp
	${CC} ${CFLAGS} -c main.cpp
	
main: main.o Empregado.o Engenheiro.o Vendedor.o
	${CC} ${CFLAGS} -o main main.o Empregado.o Engenheiro.o Vendedor.o
	
# Rulefor cleaningfiles generatedduringcompilation. 
# Call'makeclean' touse it

clean:
	rm -f main *.o

run:
	./main
