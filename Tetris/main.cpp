#include <utility>
#include "Tablero.h"
#include "Figura.h"
using namespace std;
int main(int argc, char const *argv[])
{
	Cola lol4;
	Figura* lol3 = lol4.pop();
	lol3->print();
	lol3->rotarder();
	lol3->rotarizq();
	lol3->print();
	delete lol3;
	//Cola asdad;
	//Tablero dsa(12,10,asdad);
	//cout<<"lol1"<<endl;
	//Figura lol (2);
	//Figura lol2(1);
	//lol.print();
	//cout<<"lol2"<<endl;
	//lol2.print();
	//cout<<"lol1"<<endl;
//
	//lol.rotarder();
	//lol.rotarizq();
	//lol.print();
	//cout<<"lol2"<<endl;
	//lol2.print();
	//lol2.rotarder();
	//lol2.rotarizq();




	//Cola paul;
	//paul.pop();
	return 0;
}