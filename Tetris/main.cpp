#include <utility>
#include "Tablero.h"
#include "Figura.h"
int main(int argc, char const *argv[])
{
	Cola queueT;
	Tablero test(10,10,queueT);
	Figura* game_fig;
	std::cout<<"Bienvenido al Tetris"<<std::endl;
	game_fig = test.insertar_F(game_fig);
	game_fig->rotar();  	
	game_fig->bajar();  	
	game_fig->bajar();  	
	game_fig->moverder();  	
	game_fig->moverder();  	
	game_fig->moverder();  	
	test.t_print();
	test.actualizar_F(game_fig);
	test.t_print();

	Stick lol;
	std::cout<<lol<<std::endl;

	return 0;
}