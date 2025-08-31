#pragma once
#include "librerias.h"
#include "Ejercicio.h"

class Rutina {
private: 
	Ejercicio** ejercicios; 
	int tiempo, tam, can; 
	string sexo;
public: 
	Rutina();
	Rutina(int, int, int, string);
	~Rutina(); 

	void agregarEjercicio(Ejercicio*);
	//string generarRutina();
	string mostrarRutina(); 
};