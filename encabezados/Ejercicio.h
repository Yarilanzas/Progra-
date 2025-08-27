#pragma once
#include "librerias.h"
class Ejercicio {
private:
	string nombre;
	int area; //poner menu en interfaz por eso el int de opciones
public:
	Ejercicio();
	Ejercicio(string, int);
	string toString(); 

};