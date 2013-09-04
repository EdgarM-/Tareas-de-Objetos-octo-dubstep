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

class Tablero;

class Bloque {

public:
    int b_x;
    int b_y;
public:

 	Bloque()
 		: b_x(-1), b_y(-1)
 	{ }
 	Bloque(int z, int w)
 		: b_x(z), b_y(w)
 	{ }

    void setx(int x)
    {
    	b_x = x;
    }

    void sety(int y)
    {
    	b_y = y;
    }
    void set_xy(int x, int y)
    {
    	b_x = x;
    	b_y = y;
    }
    int getx() const
    {
    	return b_x;
    }
    int gety() const
    {
    	return b_y;
    }

    void print_xy() const
    {
		std::cout << "(" << b_x
            << "," << b_y << ")"
            << std::endl;	
	}

	void print_xy2() const
    {
		std::cout << "(" << b_x
            << "," << b_y << ")";	
	}

	bool operator==(const Bloque& block2) const
	{
		return this->getx() == block2.getx() && this->gety() == block2.gety() ? true : false;
	}

    ~Bloque()
    { }
 	


};

#endif // Bloque_h
