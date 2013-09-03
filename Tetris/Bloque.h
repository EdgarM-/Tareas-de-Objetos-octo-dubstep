#ifndef Bloque_h
#define Bloque_h
#include <iostream>
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
 		: b_x(0), b_y(0)
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
    int getx()
    {
    	return b_x;
    }
    int gety()
    {
    	return b_y;
    }

    void print_xy() const
    {
		std::cout << "(" << b_x
            << "," << b_y << ")"
            << std::endl;	
	}

    ~Bloque()
    { }
 	


};

#endif // Bloque_h
