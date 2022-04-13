#include "Persona.h"


Persona::Persona() {
	this->altura = 1.80;
	this->nombre = "Alejandro";
}

void Persona::show() {
	cout << "Nombre: " << nombre << ", altura: " << altura;
}