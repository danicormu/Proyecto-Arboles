// ProyectoArboles.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"

void Menu();
void menuSecudario();

void Menu(){
	
	int opc = 0;
	do{
		cout << "---- Arbol Rojo y Negro ----"<< endl;	
		cout << "( 1 ) Menu Secundario "<< endl;
		cout << "( 2 ) Insertar"<< endl;
		cout << "( 3 ) Buscar"<< endl;
		cout << "( 4 ) Eliminar"<< endl;
		cout << "( 5 ) Rotaciones"<< endl;
		cout << "( 0 ) Salir ---->"<< endl;
		
		switch (opc)
		{
		case 1: {
				menuSecudario();
				break;
				}
				
		case 2: {
				
			cout << "Insercion " << endl;
			break;
			}

		case 3: {

			cout << "Buscar" << endl;
			break;
			}

		case 4: {

			cout << "Eliminar " << endl;
			break;
			}

		case 5: {
			cout << "Rotaciones " << endl;
			break;
			}


		default:
			cout << "Opcion invalida" << endl; 
			break;
		}
	system("pause");
	}while(opc != 0);
}


void menuSecudario(){

	int opc;
	do{
		cout << "---- Menu secundario ----"<< endl;	
		cout << "---- Verificar el arbol ----"<< endl;	
		cout << "( 1 ) Lleno "<< endl;
		cout << "( 2 ) Completo"<< endl;
		cout << "( 3 ) Balanceado"<< endl;
		cout << "( 4 ) Totalmente balanceado"<< endl;
		cout << "( 0 ) Salir ---->"<< endl;
	
		switch (opc)
		{
		case 1:{
				cout << "Lleno" << endl;

			   break;
			   }

		case 2:{
				cout << "Completo" << endl;

			   break;
			   }

		case 3:{
				cout << "Balanceado" << endl;

			   break;
			   }

		case 4:{
				cout << "Totalmente balanceado" << endl;

			   break;
			   }
		default:
			cout << "Opcion invalida" << endl; 
			break;
		}
	}
	while(opc != 0);

}
int _tmain(int argc, _TCHAR* argv[])
{
	Menu();
	return 0;
}

