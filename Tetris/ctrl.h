#pragma once
#include "Tablero.h"
class Controller
{
public:
	Tablero tab;
	Controller()
	{
		Cola col;
		Tablero lol(40,50,col);
		tab = lol;
		tab.insertar_F();
	}
	~Controller()
	{}

};