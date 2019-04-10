#pragma once
#include <iostream>
#include <sstream>
#include <Windows.h>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

class Persona
{
public:
	Persona();

	//Metodos set:

	void setId(string id);
	void setNombre(string nombre);

	//Metodos get:

	string getId();
	string getNombre()
	string getNombre();string 
	//Estoy escribiendo algo xd
	//Otros metodos:

	string toString();
	virtual ~Persona();
private:
	string id;
	string nombre;
};

