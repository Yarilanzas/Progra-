#include "Rutina.h"

Rutina::Rutina()
{
	tiempo = 0;
	can = 0;
	tam = 0; 
	sexo = "sin sexo";

	for (int i = 0; i < can; i++) {
		ejercicios[i] = new Ejercicio(NULL); 
	}

}

Rutina::Rutina(int, int, int, int)
{
	this->tiempo = tiempo;
	this->can = can; 
	this->tam = tam; 
	this->sexo = sexo; 
}

void Rutina::agregarEjercicio(Ejercicio* ejerNuevo )
{
	if (can < tam) {
		for (int i = 0; i < can; i++) {
			ejercicios[can] = *this->ejerNuevo; 
			can++;
		}

	}
	
}

//string Rutina::generarRutina()
//{

	//return string();
//}


string Rutina::mostrarRutina(){
	stringstream s; 
	for (int i = 0; i < can < i++) {
		s << "Ejercicio numero #" << i + 1 << *this->ejercicios[i]->toString()
	}
	return ss.str();
}

