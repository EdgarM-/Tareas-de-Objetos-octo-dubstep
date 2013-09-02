#ifndef Tablero_h
#define Tablero_h

#include "Bloque.h"

class Cola;

class Tablero {

 public:

    virtual void revisartablero();

 public:
   std::vector<std::vector<Bloque>> tab;

 public:

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
