CC		= g++
CFLAGS	= -std=c++11 -Wall
TARGET  = program

BUILD   = ./build
SRC    	= ./src
INCLUDE = ./include

${BUILD}/${TARGET}: ${BUILD}/Empregado.o ${BUILD}/Engenheiro.o ${BUILD}/Vendedor.o ${BUILD}/main.o
	${CC} ${CFLAGS} -o ${BUILD}/${TARGET} ${BUILD}/*.o

${BUILD}/Empregado.o: ${INCLUDE}/empregados/Empregado.hpp ${SRC}/empregados/Empregado.cpp
	${CC} ${CFLAGS} -I ${INCLUDE}/empregados/ -c ${SRC}/empregados/Empregado.cpp -o ${BUILD}/Empregado.o

${BUILD}/Engenheiro.o: ${INCLUDE}/empregados/Engenheiro.hpp ${SRC}/empregados/Engenheiro.cpp
	${CC} ${CFLAGS} -I ${INCLUDE}/empregados/ -c ${SRC}/empregados/Engenheiro.cpp -o ${BUILD}/Engenheiro.o

${BUILD}/Vendedor.o: ${INCLUDE}/empregados/Vendedor.hpp ${SRC}/empregados/Vendedor.cpp
	${CC} ${CFLAGS} -I ${INCLUDE}/empregados/ -c ${SRC}/empregados/Vendedor.cpp -o ${BUILD}/Vendedor.o

${BUILD}/main.o: ${INCLUDE}/empregados/Empregado.hpp ${INCLUDE}/empregados/Engenheiro.hpp ${INCLUDE}/empregados/Vendedor.hpp ${SRC}/main.cpp
	${CC} ${CFLAGS} -I ${INCLUDE}/empregados/ -c ${SRC}/main.cpp -o ${BUILD}/main.o
	
	
# Rulefor cleaningfiles generatedduringcompilation. 
# Call'makeclean' touse it

clean:
	rm -f main ${BUILD}/*

run:
	${BUILD}/${TARGET}
