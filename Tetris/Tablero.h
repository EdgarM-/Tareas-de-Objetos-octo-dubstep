#ifndef Tablero_h
#define Tablero_h

#include "Bloque.h"
#include "Bloques.h"

class Cola;

class Tablero {

 public:

    virtual void revisartablero();

 public:
    Bloques matriz<Bloque>;

 public:

    /**
     * @element-type Bloque
     */
    Bloque myBloque;

    /**
     * @element-type Bloque
     */
    Bloque myBloque;

    /**
     * @element-type Cola
     */
    Cola *myCola;
};

#endif // Tablero_h