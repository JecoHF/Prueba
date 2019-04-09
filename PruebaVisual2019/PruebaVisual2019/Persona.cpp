#include "Persona.h"



Persona::Persona()
{
	id = "";
	nombre = "";
}


//Metodos set:

void Persona::setId(string id) {
	this->id = id;
}

void Persona::setNombre(string nombre) {
	this->nombre = nombre;
}

string Persona::getId() {
	return id;
}

string Persona::getNombre() {
	return nombre;
}

//Otros metodos:

string Persona::toString() {

	stringstream p;

	p << "----------------------------" << endl;
	p << "Datos de la persona: " << endl;
	p << "Id: " << getId() << endl;
	p << "Nombre: " << getNombre() << endl;
	p << "----------------------------" << endl;

	return p.str();
}
Persona::~Persona()
{
}
