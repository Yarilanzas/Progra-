#pragma once
#include "librerias.h"
#include "Cliente.h"

class Medicion {
private:
	string fecha; 
	float peso, estatura, porcGrasa, porcMuscu, edadMeta, porcGraVis, medCin, medCad, medPe, medMus;
public:
	Medicion();
	Medicion(string,float, float, float, float, float, float, float, float, float, float);
	float calcularIMC();
	void clasificarIMC();
	void calPro(Cliente*);
	float calAgua();

	string toString();
};