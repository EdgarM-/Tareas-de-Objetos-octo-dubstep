#ifndef Cola_h
#define Cola_h

#include "Figura.h"


class Cola {    

 public:    
    std::vector<Figura> figuras;
 	friend std::ostream& operator<<(std::ostream& o , Cola& C);//Se sobrecarga el operador<< para poder imprimir el objeto mas facilmente
 	
    Cola()//Constructor por defecto
    	:figuras(16)
 	{
 		int x;		
 		srand (time(NULL));
        for (int i = 0; i < figuras.size(); ++i)
       	{ 
	       	figuras[i] = randfig(rand() % 6);            
       	}
    }

    void push()//Pone la primer figura al final y corre el resto hacia adelante
    {
        Figura tmp;
        tmp = figuras.front();
        for (int i = 0; i < figuras.size()-1; ++i)
        	figuras.at(i) = figuras.at(i+1);
        figuras.back() = tmp;
    }


    Figura pop()//Devuelve la primer figura, la figura que devuelve es random
    {
        return figuras[0];
    }

    void shownext()
    {
    	std::cout<<"La siguiente figura es: "<<figuras[1]<<std::endl;
    }
    ~Cola()//Destruye la cola
    { }
};

std::ostream& operator<<(std::ostream& o , Cola& c)//Se sobrecarga el operador<< para poder imprimir el objeto mas facilmente
{
	o <<"---Cola---"<<std::endl;
	for (auto fig: c.figuras)
	{
      	o <<"   "<< fig <<std::endl;
	}
    o << "------------";
	return o;
}

#endif // Cola_h
