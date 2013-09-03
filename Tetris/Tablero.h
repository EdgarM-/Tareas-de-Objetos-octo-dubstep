#ifndef Tablero_h
#define Tablero_h

#include "Bloque.h"
#include "Cola.h"

class Cola;

class Tablero {

 public:

    /**
     * @element-type Bloque
     */
    Bloque myBloque;
    /**
     * @element-type Cola
     */
    Cola *myCola;
    std::vector<std::vector<Bloque>> tab;
    int full;
    size_t rows,cols;

 public:
    Tablero()
    {}

    Tablero(size_t n_rows, size_t n_cols, Cola &Queue)
    : tab{n_rows}, rows{n_rows}, cols{n_cols}, myCola(&Queue)
  	{
    	for (auto& row: tab)
      		row.resize(cols);
      	std::cout<<"Creaste le Tablero"<<std::endl;
 	}

    void revisartablero()
    {

    }

    void jugar()
    {
    	 

    }

    ~Tablero()
    { 
    	std::cout<<"Destruiste le Tablero"<<std::endl;
    }




};

#endif // Tablero_h
