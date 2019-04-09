#include "NodoPersona.h"



NodoPersona::NodoPersona()
{
}

NodoPersona::NodoPersona(Persona *persona, NodoPersona *siguientePersona) {
	this->persona = persona;
	this->siguientePersona = siguientePersona;
}

//Metodos set:

void NodoPersona::setPersona(Persona* persona) {
	this->persona = persona;
}

void NodoPersona::setSiguientePersona(NodoPersona* siguientePersona) {
	this->siguientePersona = siguientePersona;
}

//Metodos get:

Persona* NodoPersona::getPersona() {
	return persona;
}

NodoPersona* NodoPersona::getSiguientePersona() {
	return siguientePersona;
}

NodoPersona::~NodoPersona()
{
}
