// ProyectoArboles.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"

void Menu();

void Menu(){
	
	int opc = 0;
	do{
		cout << "Proyecto de Arboles "<< endl;	
		cout << "( 1 ) "<< endl;
		cout << "( 2 ) "<< endl;
		cout << "( 3 ) "<< endl;
		cout << "( 4 ) "<< endl;
		cout << "( 5 ) "<< endl;
		
	system("pause");
	}while(opc != 0);



}
int _tmain(int argc, _TCHAR* argv[])
{
	Menu();
	return 0;
}

