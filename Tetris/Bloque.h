#ifndef Bloque_h
#define Bloque_h
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <string>
#include <cassert>
#include <vector>
#include <cmath>
#include <ctime>

class Bloque {

public:
    int b_x;//Posicion en x del bloque
    int b_y;//Posicion en y del bloque
    friend std::ostream& operator<<(std::ostream& o , Bloque& Bloque);//Funcion amiga que ayuda a imprimir mas facilmente

 	Bloque()//Inicializadora por defecto
 		: b_x{-1}, b_y{-1}
 	{ }
 	Bloque(int z, int w)//Incializadora con 2 parametros
 		: b_x{z}, b_y{w}
 	{ }

    void setx(int x)//Se asigna a la x un nuevo valor
    {
    	b_x = x;
    }

    void sety(int y) //Se asigna a la y un nuevo valor
    {
    	b_y = y;
    }
    void set_xy(int x, int y)//Se asigna a la x y a la y un nuevo valor
    {
    	b_x = x;
    	b_y = y;
    }
    int getx() const//Retorna el valor de x
    {
    	return b_x;
    }
    int gety() const//Restorna el valor de y
    {
    	return b_y;
    }

    void print_xy() const//Imprime el x y el y del bloque
    {
		std::cout << "(" << b_x
            << "," << b_y << ")"
            << std::endl;	
	}

	bool operator==(const Bloque& block2) const//Se sobrecarga el operador == para poder comparar dos bloques, se usa una expresion ternaria para eso.
	{
		return this->getx() == block2.getx() && this->gety() == block2.gety() ? true : false;
	}

    ~Bloque()//Destructor de Bloque
    { }
 	


};
std::ostream& operator<<(std::ostream& o , Bloque& Bloque)//Se sobrecarga el operador<< para poder imprimir el objeto mas facilmente
{
	o << "(" << Bloque.b_x << "," << Bloque.b_y << ")";
	return o;
}

#endif // Bloque_h
