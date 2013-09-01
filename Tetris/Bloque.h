#ifndef Bloque_h
#define Bloque_h

#include "int.h"

class Tablero;

class Bloque {

 public:

    virtual void setx();

    virtual void sety();

    virtual void getx();

    virtual void gety();

 public:
    int x;
    int y;

 public:

    /**
     * @element-type Tablero
     */
    Tablero *myTablero;


};

#endif // Bloque_h
