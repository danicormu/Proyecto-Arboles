#pragma once
#include "stdafx.h"
class NodoA
{
private:
	int dato;
	NodoA * izq;
	NodoA * der;
public:
	NodoA(void);
	~NodoA(void);

	NodoA(int);
	int getDato();
	void setDato(int);

	NodoA *&getIzq();
	void setIzq(NodoA *);

	NodoA *&getDer();
	void setDer(NodoA *);
};

