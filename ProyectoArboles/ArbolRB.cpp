#include "ArbolRB.h"


ArbolRB::ArbolRB(void)
{
}


ArbolRB::~ArbolRB(void)
{
}

/* ------ Metodos privados ------ */

//Metodo de rotacion a la izquierda
void ArbolRB::leftRotate(NodoRB * _x){
	NodoRB * _y;

	_y = _x->getDer();
	_x->getDer() = _y->getIzq();
	if(_y->getIzq() != NULL)
		_y->getIzq()->getPar() = _x;
		_y->getPar() = _x->getPar();
		if(_x == _y->getPar()->getIzq()){
			_x->getPar()->getIzq() = _y;
		}else {
			_x->getPar()->getDer() = _y;
		}
		_y->getIzq() = _x;
		_x->getPar() = _y;
}

//Metodo de rotacion a la derecha
void ArbolRB::rightRotate(NodoRB * _y){
	NodoRB * _x;

	_x = _y->getIzq();
	_y->getIzq() = _x->getDer();
	if(_x ->getDer() != NULL)
		_x->getDer()->getPar() = _y;
		_x->getPar() = _y->getPar();
		if(_y = _y->getPar()->getIzq()){
			_y->getPar()->getIzq() = _x;
		}else{
			_y->getPar()->getDer() = _x;
		}
		_x->getDer() = _y;
		_y->getPar() = _x;
}
/*
void TreeInsertHelp(NodoRB * _z){
	NodoRB * x;
	NodoRB * y;

	//Si no es NULL es nil
	_z->getIzq() = _z->getDer() = NULL; 
	y = raiz;
	x = raiz->getIzq();

	while(x != NULL){
		y = x;
		if ( x->key > _z->key) { 
			x = x-> getIzq();
		} else {
			x = x-> getDer();
		 }
	}
	_z->getPar() = y;
	if ( (y == raiz) || (y->key > _z->key) ) { 
		y->getIzq = _z;
	} else {
	    y->getDer() = _z;
	}
}
*/



/* ------ Metodos publicos ------ */

//Metodo de insercion
/*
NodoRB * ArbolRB::insert(ArbolRB * _new){
	NodoRB * y;
	NodoRB * x;
	NodoRB * newNodo;

	x = new NodoRB(_new);
	TreeInsertHelp(x);

	newNodo = x;
	x->
	


	

}*/
NodoRB * ArbolRB::search(int key){}
ArbolRB * ArbolRB::deleteNode(NodoRB *){}