#ifndef Cola_h
#define Cola_h

#include "Figuras.h"

class Tablero;
class Figura;

class Cola {

 public:

    virtual void pop();

    virtual void push();

 public:
    Figuras cola<Figura>;

 public:

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
