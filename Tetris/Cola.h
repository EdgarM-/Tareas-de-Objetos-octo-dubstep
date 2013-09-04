#ifndef Cola_h
#define Cola_h

#include "Figura.h"


class Cola {    

 public:    
    Figura* pop()
    {
    	srand (time(NULL));
        return new Figura(rand() % 7);
    }

    Cola()
 	{ }

    ~Cola()
    {
        std::cout<<"Se destruyo la cola"<<std::endl;
    }
};

#endif // Cola_h
