#ifndef Tablero_h
#define Tablero_h

#include "Bloque.h"
#include "Cola.h"

class Cola;

class Tablero {

 public:
    /**
     * @element-type Cola
     */
    Cola t_queue;
    std::vector<std::vector<Bloque>> tab;
    int full;
    size_t rows,cols;

 public:
    Tablero()
    :rows{0},cols{0}
    {}

    Tablero(size_t n_rows, size_t n_cols, Cola &Queue)
    : tab{n_rows}, rows{n_rows}, cols{n_cols}, t_queue(Queue)
  	{
    	for (auto& row: tab)
      		row.resize(cols);
 	}

    void revisartablero()
    {

    }

    void jugar()
    {
    	int empezar;
    	std::cout<<"Bienvenido al Tetris"<<std::endl;



    }

    void t_print() const
  	{
  		int i,j
  		i = 0;
  		j = 0;
    	for(auto row: tab) 
    	{
    		std::cout<<std::endl;
      		for (auto block : row)
      		{
      			if(block == Bloque::Bloque(j,i))
    					std::cout<<"X";
    			else std::cout<<"-";
      			++j;
      		}

    	++i;
    	}
    	std::cout<<std::endl;
  	}

    ~Tablero()
    { 

    	std::cout<<"Destruiste le Tablero<"<std::endl;
    }




};

#endif // Tablero_h
