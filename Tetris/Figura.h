#ifndef Figura_h
#define Figura_h

#include "Bloque.h"

class Figura {

 public:
    std::vector<Bloque> bloques;//Vector que contiene los bloques, que forman la figura

 public:
 	Figura()//Constructor por defecto
		: bloques(4)
	{ }

	Figura(int x)//Constructor con un parametro, la figura depende del parametro
	{
		bloques.resize(4);
		//Figuras
		if (x == 0)
		{
			//Square
			bloques = {{0,0},{1,0},{0,1},{1,1}};
		}
		else if (x == 1)
		{
			//Up Stick
			bloques = {{0,0},{0,1},{0,2},{0,3}};
		}
		else if (x == 2)
		{
			//L block
			bloques = {{0,0},{0,1},{0,2},{1,0}};
		}
		else if (x == 3)
		{
			//Z block
			bloques = {{0,0},{1,0},{0,1},{-1,1}};
		}
		else if (x == 4)
		{
			//L inverse block
			bloques = {{0,0},{0,1},{0,2},{-1,0}};
		}
		else if (x == 5)
		{
			//Z inverse Block
			bloques = {{0,0},{-1,0},{0,1},{1,1}};
		}
		else if (x == 6)
		{
			// T block
			bloques = {{0,0},{1,1},{-1,0},{1,0}};
		}
	}

    void rotar()//Rota la figura, se lleva al origen y despues de aplica matriz de rotacion simplificada, asumiendo giros de 90 grados
    {
    	int x,y;
    	x = bloques[0].getx();
    	y = bloques[0].gety();
		int a = -1;
		for (auto& Bloque: bloques)
		{
      		Bloque.setx(Bloque.getx()-x);
      		Bloque.sety(Bloque.gety()-y);
		}

		int temp, temp2, temp3;
		bloques[0].setx(bloques[0].getx()+x);
		bloques[0].sety(bloques[0].gety()+y);
    	temp = bloques[1].getx();
    	bloques[1].setx(a*bloques[1].gety()+x);
    	bloques[1].sety(temp+y);
    	temp2 = bloques[2].getx();
    	bloques[2].setx(a*bloques[2].gety()+x);
    	bloques[2].sety(temp2+y);
    	temp3 = bloques[3].getx();
    	bloques[3].setx(a*bloques[3].gety()+x);
    	bloques[3].sety(temp3+y);
    }
    void moverder()//Se mueve la figura en X hacia la derecha
    {
    	for (auto& Bloque: bloques)
      		Bloque.setx(Bloque.getx()+1);
    }
    void moverizq()//Se mueve la figura en X hacia la izquierda
    {
    	for (auto& Bloque: bloques)
      		Bloque.setx(Bloque.getx()-1);
    }
    void bajar()//Se mueve la figura en y hacia la abajo
    {
    	for (auto& Bloque: bloques)
      		Bloque.sety(Bloque.gety()-1);
    }

    void print() const//Se imprime la figura, imprimiendo todas las posiciones de los bloques contenidos
    {
    	std::cout<<"---Figura---"<<std::endl;
		for (auto Bloque: bloques)
      		Bloque.print_xy();
    	std::cout<<"------------"<<std::endl;
    }

    void F_setpos(int x, int y)//Se asigna una posicion a la figura, teniendo en cuenta que el x,y va a ser el centro de la figura
    {
    	for (auto& Bloque: bloques)
		{
      		Bloque.setx(Bloque.getx()+x);
      		Bloque.sety(Bloque.gety()+y);
		}
    }

    ~Figura()//Destructor de Figura
    { }

};

#endif // Figura_h
