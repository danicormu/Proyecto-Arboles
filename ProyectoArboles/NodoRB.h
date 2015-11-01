#pragma once
class NodoRB
{
private:
	char color;
	int dato;
	NodoRB * Izq;
	NodoRB * Der;

public:
	NodoRB(void);
	~NodoRB(void);

	NodoRB(char, int);

	char getColor(); //R = Rojo, N = Negro
	void setColor(char);

	int getDato();
	void setDato(int);

	NodoRB *&getIzq();
	void setIzq(NodoRB *);

	NodoRB *&getDer();
	void setDer(NodoRB *);

};

