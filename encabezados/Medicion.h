#pragma once
#include "librerias.h"

class Medicion {
private:
	string fecha, telefono; 
	float peso, porcGrasa, porcMuscu;
public:
	Medicion();
	Medicion(string, string, float, float, float);

};