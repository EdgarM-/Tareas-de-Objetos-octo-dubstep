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
 	{
        std::cout<<"Creaste le cola"<<std::endl;
    }

    ~Cola()
    {
        std::cout<<"Destruiste le cola"<<std::endl;
    }
};

#endif // Cola_h
