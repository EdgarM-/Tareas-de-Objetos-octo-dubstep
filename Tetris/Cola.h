#ifndef Cola_h
#define Cola_h

#include "Figura.h"


class Cola {    

 public:    
 	friend std::ostream& operator<<(std::ostream& o , Cola& C);//Se sobrecarga el operador<< para poder imprimir el objeto mas facilmente
 	
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

std::ostream& operator<<(std::ostream& o , Cola& c)//Se sobrecarga el operador<< para poder imprimir el objeto mas facilmente
{
	o << "(" <<  ")";
	return o;
}

#endif // Cola_h
