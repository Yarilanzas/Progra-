#include "librerias.h"
#include "Instructor.h"
#include "Medicion.h"
#include "Rutina.h"

class Cliente {
private:
	//c�dula de identidad, nombre completo, tel�fono de contacto, correo electr�nico, fecha de nacimiento, sexo, fecha de inscripci�n
	string ced;
	string nombre;
	int telefono;
	string correo;
	string fechanac;
	string fechains;
	char sexo;
	
	Instructor* vins;
	Rutina* vrut;

	Medicion** vmed;
	int tam;
	int can;



public:

};