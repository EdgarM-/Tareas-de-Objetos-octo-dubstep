#ifndef Tablero_h
#define Tablero_h

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
    void actualizar_F2(Figura* game_fig)//Deja la figura lista por si se nesecita volver a actualizar la posicion
    {
      for (auto& b: game_fig -> bloques)
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
    size_t rows,cols;//Indica el numero de filas y columnas del tablero
    friend std::ostream& operator<<(std::ostream& o , Tablero& Tablero);//Funcion amiga que ayuda a imprimir mas facilmente
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

    void rotar(Figura* game_fig)//Rota la figura teniendo en cuenta que no se valla a salir del tablero
    {

    }
    void devolver(Figura* game_fig)//Rota la figura teniendo en cuenta que no se valla a salir del tablero
    {
      
    }
    void moverder(Figura* game_fig)//Mueve la figura teniendo en cuenta que no se valla a salir del tablero
    {

    }
    void moverizq(Figura* game_fig)//Mueve la figura teniendo en cuenta que no se valla a salir del tablero
    {

    }
    void bajar(Figura* game_fig)//Baja la figura teniendo en cuenta que no se valla a salir del tablero o estrellar con otro bloque
    {

    }

    Figura* insertar_F(Figura* game_fig)//Inserta ficha aleatoria en el Tablero
    {
      
        game_fig = t_queue.pop();
        game_fig -> F_setpos(cols-4,0);
      for (auto& b: game_fig -> bloques)
        { 
          tab[b.gety()][b.getx()] = 1;
        }
        return game_fig;
    }

    void actualizar_F(Figura* game_fig)//Actualiza la posicion de la figura
    {
      for (auto& b: game_fig -> bloques)
        { 
          tab[b.gety()][b.getx()] = 2;
        }
      limpiatablero();
      actualizar_F2(game_fig);
    }
    void dejar_F(Figura* game_fig)//Deja la figura en la posicion
    {
      for (auto& b: game_fig -> bloques)
        { 
          tab[b.gety()][b.getx()] = 2;
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
        if(i == (int)cols)
          std::cout<<"BOOM"<<std::endl;
      }
    }

    void t_print() const//Imprime el tablero
  	{

      std::cout<<"---Tetris---"<<std::endl;
    	for(auto row: tab) 
    	{
      		std::cout<<std::endl;
      		for (auto block : row)
      			std::cout<<((block == 1 || block == 2) ? "X" : " ");

    	}
    	std::cout<<std::endl<<"-----------"<<std::endl;
  	}

    ~Tablero()//Destructor de Tablero
    { }




};

std::ostream& operator<<(std::ostream& o , Tablero& Tablero)//Se sobrecarga el operador<< para poder imprimir el objeto mas facilmente
{
  o<<"---Tetris---"<<std::endl;
  for(auto row: Tablero.tab) 
  {
      o<<std::endl;
      for (auto block : row)
      {
        o<<((block == 1 || block == 2) ? "X" : " ");
      }
  }
  o<<std::endl;
  o<<"-----------"<<std::endl;
  return o;
}

#endif // Tablero_h
//vlc -V caca videofile