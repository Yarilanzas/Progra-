#include "Medicion.h"

Medicion::Medicion()
{
	fecha = "sin fecha";
	telefono = "Sin telefono";
	peso = 0;
	porcGrasa = 0;
	porcMuscu = 0; 
}

Medicion::Medicion(string fecha, string tel, float peso, float pG, float PM)
{
	this->fecha = fecha; 
	this->telefono = tel;
	this->peso = peso; 
	this->porcGrasa = pG; 
	this->porcMuscu = PM; 
}
