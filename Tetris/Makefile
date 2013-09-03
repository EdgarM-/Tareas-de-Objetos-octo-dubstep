
CC = clang++
#CC = g++-4.8

tetris :	main.cpp
	${CC}  -o tetris main.cpp -std=c++11

Bloque.o : Bloque.cpp Bloque.h
	${CC} -std=c++11 -c Bloque.cpp

Cola.o : Cola.cpp Cola.h
	${CC} -std=c++11 -c Cola.cpp

Figura.o : Figura.cpp Figura.h
	${CC} -std=c++11 -c Figura.cpp

Tablero.o : Tablero.cpp Tablero.h
	${CC} -std=c++11 -c Tablero.cpp



clean :
	rm *.o tetris