#include "ArbolRB.h"


ArbolRB::ArbolRB(void)
{
}


ArbolRB::~ArbolRB(void)
{
}

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
