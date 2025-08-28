#include "Historial.h"

Historial::Historial()
{
	tam = 0;
	can = 0;

	for (int i = 0; i < can; i++) {
		mediciones[i] = new Ejercicio(NULL);
	}
}

Historial::Historial(int can, int tam)
{
	this->can = can;
	this->tam = tam;
}
