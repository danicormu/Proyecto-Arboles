#include "NodoRB.h"
#include "stdafx.h"

NodoRB::NodoRB(void)
{
	setDato(0);
	setColor(NULL);
	setIzq(NULL);
	setDer(NULL);
}

NodoRB::~NodoRB(void)
{

}

NodoRB::NodoRB(char _color, int _dato){
	setColor(_color);
	setDato(_dato);
	setIzq(NULL);
	setDer(NULL);
}

char NodoRB::getColor(){ //R = Rojo, N = Negro
	return this->color;
}

void NodoRB::setColor(char _color){
	this->color = _color;
}

int NodoRB::getDato(){
	return this->dato;
}

void NodoRB::setDato(int _dato){
	this->dato = _dato;
}

NodoRB *&NodoRB::getIzq(){
	return this->Izq;
}

void NodoRB::setIzq(NodoRB * _ptr){
	this->Izq = _ptr;
}

NodoRB *&NodoRB::getDer(){
	return this-> Der;
}

void NodoRB::setDer(NodoRB * _ptr){
	this->Der = _ptr;
}

NodoRB *&NodoRB::getPar(){
	return this-> Par;
}

void NodoRB::setPar(NodoRB * _ptr){
	this->Par = _ptr;
}
