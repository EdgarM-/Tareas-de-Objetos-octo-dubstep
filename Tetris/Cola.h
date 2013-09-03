#ifndef Cola_h
#define Cola_h

#include "Figura.h"
#include "Tablero.h"
class Figura;

class Cola {

 public:
 	std::vector<Figura> figuras;

    /**
     * @element-type Tablero
     */
    Tablero *myTablero;
    
    Figura pop()
    {
    	srand (time(NULL));
    	int random = rand() % 7;
    	std::cout<< random << std::endl;
        Figura lol(random);
        return lol;
    }

    void push();

 public:
 	Cola()
 	{}

 	//Cola(Tablero tab)
 	//:myTablero(tab)
 	//{}

    /**
     * @element-type Figura
     */
    //Figura *myFigura;
};

#endif // Cola_h
