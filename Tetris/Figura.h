#ifndef Figura_h
#define Figura_h

#include "Bloque.h"

class Figura {

 public:
 	friend std::ostream& operator<<(std::ostream& o , Figura& Figura);//Funcion amiga que ayuda a imprimir mas facilmente
    std::vector<Bloque> bloques;//Vector que contiene los bloques, que forman la figura
    std::string nombre;

 	Figura()//Constructor por defecto
		: bloques(4)
	{ }


    void rotar()//Rota la figura, se aplica matriz de rotacion simplificada, asumiendo giros de 90 grados
    {
		for (auto& Bloque: bloques)
			Bloque.set_xy(-Bloque.gety(),Bloque.getx());
    }
	
	void devolver()//Rota la figura en setido contrario, se aplica matriz de rotacion simplificada, asumiendo giros de 90 grados
    {
		for (auto& Bloque: bloques)
			Bloque.set_xy(Bloque.gety(),-Bloque.getx());

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
      		Bloque.sety(Bloque.gety()+1);
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
    void setname(std::string name)
    {
    	nombre = name;
    }


    ~Figura()//Destructor de Figura
    { }

};
std::ostream& operator<<(std::ostream& o , Figura& Fig)//Se sobrecarga el operador<< para poder imprimir el objeto mas facilmente
{
	o << Fig.nombre <<std::endl;
	return o;
}

class Square 
	: public Figura //Herencia de Figura
{
public:
	Square()
	{
		setname("Square");
		bloques = {{0,0},{1,0},{0,1},{1,1}};//Contructor por defecto
	}
};
class Stick
	:public Figura//Herencia de Figura
{
public:
	Stick()
	{
		setname("Stick");
		bloques = {{0,0},{0,1},{0,2},{0,3}};//Contructor por defecto
	}
};

class Lblock
	:public Figura//Herencia de Figura
{
public:
	Lblock()
	{
		setname("Block L");
		bloques = {{0,0},{0,1},{0,2},{1,0}};//Contructor por defecto
	}
};

class Liblock
	:public Figura//Herencia de Figura
{
public:
	Liblock()
	{
		setname("Inverted Block L");
		bloques = {{0,0},{0,1},{0,2},{-1,0}};//Contructor por defecto
	}
};

class Zblock
	:public Figura//Herencia de Figura
{
public:
	Zblock()
	{
		setname("Block Z");
		bloques = {{0,0},{1,0},{0,1},{-1,1}};//Contructor por defecto
	}
};

class Ziblock
	:public Figura//Herencia de Figura
{
public:
	Ziblock()
	{
		setname("Inverted Block Z");
		bloques = {{0,0},{-1,0},{0,1},{1,1}};//Contructor por defecto
	}
};

class Tblock
	:public Figura//Herencia de Figura
{
public:
	Tblock()
	{
		setname("Block T");
		bloques = {{0,0},{1,1},{-1,0},{1,0}};//Contructor por defecto
	}
};

Figura randfig(int x)//Devuelve una figura dependiendo del x
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
#endif // Figura_h
