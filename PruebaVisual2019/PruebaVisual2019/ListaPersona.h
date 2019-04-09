#pragma once
#include "NodoPersona.h"

class ListaPersona
{
public:
	ListaPersona();

	void agregarPersona(Persona *persona);
	string verListaPersona();

	virtual ~ListaPersona();

private: 

	NodoPersona* raiz;
};

