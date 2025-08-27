#include "librerias.h"
#include "Instructor.h"
#include "Medicion.h"
#include "Rutina.h"

class Cliente {
private:
	//cédula de identidad, nombre completo, teléfono de contacto, correo electrónico, fecha de nacimiento, sexo, fecha de inscripción
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