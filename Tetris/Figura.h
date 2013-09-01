#ifndef Figura_h
#define Figura_h

#include "Bloques.h"

class Bloque;

class Figura {

 public:

    virtual void rotarderecha();

    virtual void rotarizquierda();

 public:
    Bloques vector<Bloque>;

 public:

    /**
     * @element-type Bloque
     */
    Bloque *myBloque;

};

#endif // Figura_h
