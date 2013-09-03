#ifndef Figura_h
#define Figura_h

#include "Bloque.h"

class Bloque;

class Figura {

 public:
    std::vector<Bloque> bloques;

 public:
 	Figura()
		: bloques(4)
	{ }

	Figura(int x)
	{
		bloques.resize(4);
		//assert(x < 0 && x > 6);
		if (x == 0)
		{
			//Square
			std::cout<<"Square"<<std::endl;
			bloques[0]=Bloque::Bloque(0,0);
			bloques[1]=Bloque::Bloque(1,0);
			bloques[2]=Bloque::Bloque(0,1);
			bloques[3]=Bloque::Bloque(1,1);
		}
		else if (x == 1)
		{
			//Up Stick
			std::cout<<"Stick"<<std::endl;
			bloques[0]=Bloque::Bloque(0,0);
			bloques[1]=Bloque::Bloque(0,1);
			bloques[2]=Bloque::Bloque(0,2);
			bloques[3]=Bloque::Bloque(0,3);
		}
		else if (x == 2)
		{
			//L block
			std::cout<<"L block"<<std::endl;
			bloques[0]=Bloque::Bloque(0,0);
			bloques[1]=Bloque::Bloque(0,1);
			bloques[2]=Bloque::Bloque(0,2);
			bloques[3]=Bloque::Bloque(1,0);
		}
		else if (x == 3)
		{
			//Z block
			std::cout<<"Z block"<<std::endl;
			bloques[0]=Bloque::Bloque(0,0);
			bloques[1]=Bloque::Bloque(1,0);
			bloques[2]=Bloque::Bloque(0,1);
			bloques[3]=Bloque::Bloque(-1,1);
		}
		else if (x == 4)
		{
			//L inverse block
			std::cout<<"L inverse block"<<std::endl;
			bloques[0]=Bloque::Bloque(0,0);
			bloques[1]=Bloque::Bloque(0,1);
			bloques[2]=Bloque::Bloque(0,2);
			bloques[3]=Bloque::Bloque(-1,0);
		}
		else if (x == 5)
		{
			//Z inverse Block
			std::cout<<"Z inverse Block"<<std::endl;
			bloques[0]=Bloque::Bloque(0,0);
			bloques[1]=Bloque::Bloque(-1,0);
			bloques[2]=Bloque::Bloque(0,1);
			bloques[3]=Bloque::Bloque(1,1);
		}
		else if (x == 6)
		{
			// T block
			std::cout<<"T block"<<std::endl;
			bloques[0]=Bloque::Bloque(0,0);
			bloques[1]=Bloque::Bloque(1,1);
			bloques[2]=Bloque::Bloque(-1,0);
			bloques[3]=Bloque::Bloque(1,0);
		}
	}

    void rotarder()
    {
		int a = -1;
		int temp, temp2, temp3, temp4;
		temp = bloques[0].b_x;
    	bloques[0].b_x = a * bloques[0].b_y;
    	bloques[0].b_y = temp;
    	temp2 = bloques[1].b_x;
    	bloques[1].b_x = a * bloques[1].b_y;
    	bloques[1].b_y = temp2;
    	temp3 = bloques[2].b_x;
    	bloques[2].b_x = a*bloques[2].b_y;
    	bloques[2].b_y = temp3;
    	temp4 = bloques[3].b_x;
    	bloques[3].b_x = a*bloques[3].b_y;
    	bloques[3].b_y = temp4;
    	std::cout<<"Rote hacia la derecha :D"<<std::endl;
    }

    void rotarizq()
    {
    	int a = -1;
		int temp, temp2, temp3, temp4;
		temp = bloques[0].b_x;
    	bloques[0].b_x = bloques[0].b_y;
    	bloques[0].b_y = a*temp;
    	temp2 = bloques[1].b_x;
    	bloques[1].b_x = bloques[1].b_y;
    	bloques[1].b_y = a*temp2;
    	temp3 = bloques[2].b_x;
    	bloques[2].b_x = bloques[2].b_y;
    	bloques[2].b_y = a*temp3;
    	temp4 = bloques[3].b_x;
    	bloques[3].b_x = bloques[3].b_y;
    	bloques[3].b_y = a*temp4;
    	std::cout<<"Rote hacia la izquierda :D"<<std::endl;
    }

    ~Figura()
    { 
    	std::cout<<"ME destrui :3"<< std::endl;
   	}

};

#endif // Figura_h
