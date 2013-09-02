#ifndef Figura_h
#define Figura_h

#include "Bloque.h"
#include <cassert>

class Bloque;

class Figura {

 public:
    std::vector<Bloque> bloques;

 public:

    /**
     * @element-type Bloque
     */
    Bloque *myBloque;

 public:
 	Figura()
		: bloques(4), myBloque(nullptr)
	{ }

	Figura(int x)
		:myBloque(nullptr)
	{
		bloques.resize(4);
		assert(x < 0 && x > 6);
		if (x == 0)
		{
			//Square
			bloques[0]=Bloque::Bloque(0,0);
			bloques[1]=Bloque::Bloque(1,0);
			bloques[2]=Bloque::Bloque(0,1);
			bloques[3]=Bloque::Bloque(1,1);
		}
		else if (x == 1)
		{
			//Up Stick
			bloques[0]=Bloque::Bloque(1,1);
			bloques[1]=Bloque::Bloque(1,2);
			bloques[2]=Bloque::Bloque(1,3);
			bloques[3]=Bloque::Bloque(1,4);
		}
		else if (x == 2)
		{
			//L block
			bloques[0]=Bloque::Bloque(2,1);
			bloques[1]=Bloque::Bloque(1,1);
			bloques[2]=Bloque::Bloque(1,2);
			bloques[3]=Bloque::Bloque(1,3);
		}
		else if (x == 3)
		{
			//Z block
			bloques[0]=Bloque::Bloque(0,2);
			bloques[1]=Bloque::Bloque(1,2);
			bloques[2]=Bloque::Bloque(1,1);
			bloques[3]=Bloque::Bloque(2,1);
		}
		else if (x == 4)
		{
			//L inverse block
			bloques[0]=Bloque::Bloque(0,1);
			bloques[1]=Bloque::Bloque(1,1);
			bloques[2]=Bloque::Bloque(1,2);
			bloques[3]=Bloque::Bloque(1,3);
		}
		else if (x == 5)
		{
			//Z inverse Block
			bloques[0]=Bloque::Bloque(0,1);
			bloques[1]=Bloque::Bloque(1,1);
			bloques[2]=Bloque::Bloque(1,2);
			bloques[3]=Bloque::Bloque(2,2);
		}
		else if (x == 6)
		{
			// T block
			bloques[0]=Bloque::Bloque(0,1);
			bloques[1]=Bloque::Bloque(1,1);
			bloques[2]=Bloque::Bloque(1,2);
			bloques[3]=Bloque::Bloque(2,1);
		}
	}

    void rotarderecha();

    void rotarizquierda();

    ~Figura()
    { }

};

#endif // Figura_h
