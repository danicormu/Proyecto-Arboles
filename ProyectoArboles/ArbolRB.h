#pragma once
#include "NodoRB.h"
#include "stdafx.h"
class ArbolRB
{
private:
	NodoRB * raiz;
	NodoRB * nil;

	void leftRotate(NodoRB *);
	void rightRotate(NodoRB *);
	void RightRotate(NodoRB *);
	void TreeInsertHelp(NodoRB *);
	void TreePrintHelper(NodoRB *);
	void FixUpMaxHigh(NodoRB *);
	void DeleteFixUp(NodoRB *);

public:
	ArbolRB(void);
	~ArbolRB(void);

	NodoRB * insert(ArbolRB *);
	NodoRB * search(int key);
	ArbolRB * deleteNode(NodoRB *);
	NodoRB * GetPredecessorOf(NodoRB *) const;
	NodoRB * GetSuccessorOf(NodoRB *) const;	
};

