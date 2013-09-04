#ifndef Tablero_h
#define Tablero_h

#include "Bloque.h"
#include "Cola.h"

class Tablero {

 public:
    /**
     * @element-type Cola
     */
    Cola t_queue;
    std::vector<std::vector<Bloque>> tab;//Matriz de Bloques(Tablero)
    int full;//Indica si esta lleno el tablero
    size_t rows,cols;//Indica el numero de filas y columnas del tablero

 public:
    Tablero()//Inicializadora por defecto
    :rows{0},cols{0}
    {}

    Tablero(size_t n_rows, size_t n_cols, Cola &Queue)//Inicializadora con 3 parametros, los 2 primeros indican Filas y columnas, el tercero es una referencia a uan Cola
    : tab{n_rows}, rows{n_rows}, cols{n_cols}, t_queue{Queue}
  	{
    	for (auto& row: tab)
      		row.resize(cols);
 	}

    void revisartablero()//Revisa si el tablero esta lleno
    {

    }

    void insertar_F()//Inserta ficha aleatoria en el Tablero
    {
    	Figura* game_fig;
      	game_fig = t_queue.pop();
      	game_fig -> F_setpos(cols/2,rows-4);
    	for (auto& b: game_fig -> bloques)
      	{	
      		tab[b.gety()][b.getx()]=b;
      	}
    }
    void revisarfila()//Revisa si la fila esta llena
    {

    }
    void jugar()//Se llama a las otras funciones desde aqui
    {
    	std::cout<<"Bienvenido al Tetris"<<std::endl;
    	insertar_F();
    	t_print();

      	




      
    }

    void t_print() const//Imprime el tablero
  	{
  		int i,j;
  		i = (int)rows-1;
  		j = (int)cols-1;
    	for(auto row: tab) 
    	{
    		if(i<(int)rows)
          		std::cout<<std::endl;
          	if(i < 0)
    			i = (int)rows-1;
    		if(j < 0)
    			j = (int)cols-1;
      		for (auto block : row)
      		{
      			block.print_xy();
      			std::cout<<"x= "<<j<<"y= "<<i<<std::endl;
      			//std::cout<<"block == Nb: "<<(block == Bloque::Bloque(j,i) ? "True" : "False")<<std::endl;
      			if(block == Bloque::Bloque(j,i))
    					std::cout<<"X";
    			//else std::cout<<"-";
      			--j;
      		}

    	--i;
    	}
    	std::cout<<std::endl;
  	}

    ~Tablero()//Destructor de Tablero
    { }




};

#endif // Tablero_h
