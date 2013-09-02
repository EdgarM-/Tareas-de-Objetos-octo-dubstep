#ifndef Bloque_h
#define Bloque_h
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <string>
#include <vector>

class Tablero;

class Bloque {

public:
    int x;
    int y;

public:

    /**
     * @element-type Tablero
     */
    Tablero *myTablero;

 public:

 	Bloque()
 		: x(0), y(0)
 	{ }
 	Bloque(int z, int w)
 		: x(z), y(w)
 	{ }

    void setx(int);

    void sety(int);

    void print_xy() const;

    ~Bloque()
    { }
 


};

#endif // Bloque_h
