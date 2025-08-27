#include "Ejercicio.h"

Ejercicio::Ejercicio()
{
	nombre = "sin nombre"; 
	edad = 0; 
}

Ejercicio::Ejercicio(string nombre, int area)
{
	this->nombre = nombre; 
	this->area = area; 
}

string Ejercicio::toString()
{
	stringstream s;
	s << "Nombre del ejercicio" << nombre << " Area del ejercicio" << area; 
	return ss.str();
}
