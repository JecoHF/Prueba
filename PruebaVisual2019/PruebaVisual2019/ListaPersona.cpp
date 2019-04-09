#include "ListaPersona.h"



ListaPersona::ListaPersona()
{
	raiz = NULL;
}

void ListaPersona::agregarPersona(Persona* persona) {
	raiz = new NodoPersona(persona, raiz);
}

string ListaPersona::verListaPersona() {

	NodoPersona* temp = raiz;
	
	stringstream v;

	v << "Lista de personas: " << endl << endl; 
	while (temp) {
		v<<temp->getPersona()->toString()<<endl;
		temp = temp->getSiguientePersona();
	}

	return v.str();

}


ListaPersona::~ListaPersona()
{
}
