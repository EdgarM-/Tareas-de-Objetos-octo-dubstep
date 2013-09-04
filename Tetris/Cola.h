#ifndef Cola_h
#define Cola_h

#include "Figura.h"


class Cola {    

 public:    
    Figura* pop()//Devuelve un puntero a figura, la figura que devuelve es random
    {
    	srand (time(NULL));
        return new Figura(rand() % 7);
    }

    Cola()//Constructor por defecto
 	{ }

    ~Cola()//Destruye la cola
    { }
};

#endif // Cola_h
