#include "ListaPersona.h"

int main() {

	Persona *p1 = new Persona();
	Persona* p2 = new Persona();
	ListaPersona *list = new ListaPersona();

	p1->setId("1");
	p1->setNombre("Jefferson");
	p2->setId("3");
	p2->setNombre("Bryan");

	list->agregarPersona(p1);
	list->agregarPersona(p2);

	cout << list->verListaPersona();
	system("pause");
}