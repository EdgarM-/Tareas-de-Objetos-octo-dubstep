#ifndef Figura_h
#define Figura_h

#include "Bloque.h"

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
		if (x == 0)
		{
			//Square
			bloques[0]=Bloque::Bloque(0,0);
			bloques[1]=Bloque::Bloque(1,0);
			bloques[2]=Bloque::Bloque(0,1);
			bloques[3]=Bloque::Bloque(1,1);
			bloques[0].print_xy();
			bloques[1].print_xy();
			bloques[2].print_xy();
			bloques[3].print_xy();
		}
		if (x == 1)
		{
			//Up Stick
			bloques[0]=Bloque::Bloque(1,1);
			bloques[1]=Bloque::Bloque(1,2);
			bloques[2]=Bloque::Bloque(1,3);
			bloques[3]=Bloque::Bloque(1,4);
			bloques[0].print_xy();
			bloques[1].print_xy();
			bloques[2].print_xy();
			bloques[3].print_xy();
		}
		if (x == 2)
		{
			//L block
			bloques[0]=Bloque::Bloque(2,1);
			bloques[1]=Bloque::Bloque(1,1);
			bloques[2]=Bloque::Bloque(1,2);
			bloques[3]=Bloque::Bloque(1,3);
			bloques[0].print_xy();
			bloques[1].print_xy();
			bloques[2].print_xy();
			bloques[3].print_xy();
		}
		if (x == 3)
		{
			//Z block
			bloques[0]=Bloque::Bloque(0,2);
			bloques[1]=Bloque::Bloque(1,2);
			bloques[2]=Bloque::Bloque(1,1);
			bloques[3]=Bloque::Bloque(2,1);
			bloques[0].print_xy();
			bloques[1].print_xy();
			bloques[2].print_xy();
			bloques[3].print_xy();
		}
		if (x == 4)
		{
			//L inverse block
			bloques[0]=Bloque::Bloque(0,1);
			bloques[1]=Bloque::Bloque(1,1);
			bloques[2]=Bloque::Bloque(1,2);
			bloques[3]=Bloque::Bloque(1,3);
			bloques[0].print_xy();
			bloques[1].print_xy();
			bloques[2].print_xy();
			bloques[3].print_xy();
		}
		if (x == 5)
		{
			//Z inverse Block
			bloques[0]=Bloque::Bloque(0,1);
			bloques[1]=Bloque::Bloque(1,1);
			bloques[2]=Bloque::Bloque(1,2);
			bloques[3]=Bloque::Bloque(2,2);
			bloques[0].print_xy();
			bloques[1].print_xy();
			bloques[2].print_xy();
			bloques[3].print_xy();
		}
		if (x == 5)
		{
			// Lateral stick
			bloques[0]=Bloque::Bloque(1,1);
			bloques[1]=Bloque::Bloque(2,1);
			bloques[2]=Bloque::Bloque(3,1);
			bloques[3]=Bloque::Bloque(4,1);
			bloques[0].print_xy();
			bloques[1].print_xy();
			bloques[2].print_xy();
			bloques[3].print_xy();
		}
	}

    void rotarderecha();

    void rotarizquierda();

    ~Figura()
    { }

};

#endif // Figura_h
