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

	void agregarEjercicio(Ejercicio*);
	string mostrarRutina(); 





};