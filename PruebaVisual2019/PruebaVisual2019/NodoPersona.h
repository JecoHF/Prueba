#pragma once
#include "Persona.h"

class NodoPersona
{
public:
	NodoPersona();
	NodoPersona(Persona *persona, NodoPersona *siguientePersona);

	//Metodos set:

	void setPersona(Persona* persona);
	void setSiguientePersona(NodoPersona* siguientePersona);

	//Metodos get:

	Persona *getPersona();
	NodoPersona *getSiguientePersona();

	virtual ~NodoPersona();

private:

	Persona *persona;
	NodoPersona* siguientePersona;
};

