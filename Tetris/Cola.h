#ifndef Cola_h
#define Cola_h

#include "Figura.h"

class Tablero;
class Figura;

class Cola {

 public:

    virtual void pop();

    virtual void push();

 public:
 	std::vector<Figura> figuras;

 public:
 	 Cola();
    /**
     * @element-type Tablero
     */
    Tablero *myTablero;

    /**
     * @element-type Figura
     */
    Figura *myFigura;
};

#endif // Cola_h
