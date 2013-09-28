#pragma once

#include "Bloque.h"
#include "Cola.h"

class Tablero {

    void limpiatablero()//Limpia el tablero cuando se actualiza una figura
    {
      for (auto& row: tab)
        for(auto& col : row)
          if (col == 1)
            col = 0;
    }
    void actualizar_F2(Figura game_fig)//Deja la figura lista por si se nesecita volver a actualizar la posicion
    {
      for (auto& b: game_fig.bloques)
        { 
          tab[b.gety()][b.getx()] = 1;
        }
    }
 public:
    /**
     * @element-type Cola
     */
    Cola t_queue;
    std::vector<std::vector<short>> tab;//Matriz de enteros que representan al Tablero
    std::vector<Bloque> bloques;
    Figura fig_act;
    size_t rows,cols;//Indica el numero de filas y columnas del tablero
    Tablero()//Inicializadora por defecto
    :rows{0},cols{0}
    {}

    Tablero(size_t n_rows, size_t n_cols, Cola &Queue)//Inicializadora con 3 parametros, los 2 primeros indican Filas y columnas, el tercero es una referencia a una Cola
    : tab{n_rows}, rows{n_rows}, cols{n_cols}, t_queue{Queue}
    {
      for (auto& row: tab)
          row.resize(cols);
        for (auto& row: tab)
          for(auto& col : row)
              col = 0;
    }

    void rotar()//Rota la figura teniendo en cuenta que no se valla a salir del tablero
    {

    }
    void devolver()//Rota la figura teniendo en cuenta que no se valla a salir del tablero
    {
      
    }
    void moverder()//Mueve la figura teniendo en cuenta que no se valla a salir del tablero
    {

    }
    void moverizq()//Mueve la figura teniendo en cuenta que no se valla a salir del tablero
    {

    }
    void bajar()//Baja la figura teniendo en cuenta que no se valla a salir del tablero o estrellar con otro bloque
    {

    }

   // void nextfig()
   // {
   //   t_queue.shownext();
//    }



    Figura insertar_F()//Inserta ficha aleatoria en el Tablero
    {
        fig_act = t_queue.pop();
        fig_act.F_setpos(0,0);
        t_queue.push();
        for (auto& b: fig_act.bloques)
          tab[b.gety()+fig_act.y][b.getx()+fig_act.x] = 1;
        return fig_act;
    }

    void actualizar_F(Figura game_fig)//Actualiza la posicion de la figura
    {
      for (auto& b: game_fig.bloques)
        { 
          tab[b.gety()+fig_act.y][b.getx()+fig_act.x] = 2;
        }
      limpiatablero();
      actualizar_F2(game_fig);
    }
    void dejar_F(Figura game_fig)//Deja la figura en la posicion
    {
      for (auto& b: game_fig.bloques)
        { 
          tab[b.gety()+fig_act.y][b.getx()+fig_act.x] = 2;
        }
    }
    void revisarfila()//Revisa si la fila esta llena
    {
    	int i = 0;
    	for (auto& b: tab)
    	{
        i = 0;
    		for (auto& num: b)
    		{
    			if(num == 2)
    				++i;
            
        }
        //if(i == (int)cols-1)
          //std::cout<<"BOOM"<<std::endl;
      }
    }

   //  void t_print() const//Imprime el tablero
  	// {

   //    std::cout<<"---Tetris---"<<std::endl;
   //  	for(auto row: tab) 
   //  	{
   //    		std::cout<<std::endl;
   //    		for (auto block : row)
   //    			std::cout<<((block == 1 || block == 2) ? "X" : "-");

   //  	}
   //  	std::cout<<std::endl<<"-----------"<<std::endl;
  	// }

    ~Tablero()//Destructor de Tablero
    { }




};
//vlc -V caca videofile