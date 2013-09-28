#ifndef Cola_h
#define Cola_h

#include "Figura.h"


class Cola {    

 public:    
    std::vector<Figura> figuras;
 	
    Figura randomfigura(int x)//Devuelve una figura dependiendo del x
    {
        Figura figran;
        //Figuras
        if (x == 0)
        {
            //Square
            figran = Square::Square();
        }
        else if (x == 1)
        {
            //Up Stick
            figran = Stick::Stick();
        }
        else if (x == 2)
        {
            //L block
            figran = Lblock::Lblock();
        }
        else if (x == 3)
        {
            //Z block
            figran = Zblock::Zblock();
        }
        else if (x == 4)
        {
            //L inverse block
            figran = Liblock::Liblock();
        }
        else if (x == 5)
        {
            //Z inverse Block
            figran = Ziblock::Ziblock();
        }
        else if (x == 6)
        {
            // T block
            figran = Tblock::Tblock();
        }

        return figran;
    }

    Cola()//Constructor por defecto
    	:figuras(16)
 	{	
 		srand (time(NULL));
        for (int i = 0; i < (int)figuras.size(); ++i)
       	{ 
	       	figuras[i] = randomfigura(rand() % 7);            
       	}
    }

    void push()//Pone la primer figura al final y corre el resto hacia adelante
    {
        Figura tmp;
        tmp = figuras.front();
        for (int i = 0; i < (int)figuras.size()-1; ++i)
        	figuras.at(i) = figuras.at(i+1);
        figuras.back() = tmp;
    }


    Figura pop()//Devuelve la primer figura, la figura que devuelve es random
    {
        return figuras[0];
    }

  //  void shownext()
  //  {
   // 	std::cout<<"La siguiente figura es: "<<figuras[1]<<std::endl;
   // }
    ~Cola()//Destruye la cola
    { }
};

#endif // Cola_h
