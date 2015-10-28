#include "NodoA.h"


NodoA::NodoA(void)
{
	setDato(0);
	setIzq(NULL);
	setDer(NULL);
}


NodoA::~NodoA(void)
{
}

NodoA::NodoA(int _dato){
	
	setDato(_dato);
	setIzq(NULL);
	setDer(NULL);
}
int NodoA::getDato(){
		return this ->dato;
	}
void NodoA::setDato(int _dato){
	this ->dato = _dato;

}

NodoA *&NodoA::getIzq(){
	return this -> izq;
}
void NodoA::setIzq(NodoA * _ptr){
		this ->izq = _ptr;
}

NodoA *&NodoA::getDer(){
		return this -> der;
}
void NodoA::setDer(NodoA * _ptr){
		this->der = _ptr;
}
