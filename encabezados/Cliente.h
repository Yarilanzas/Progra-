#include "librerias.h"
#include "Instructor.h"
#include "Medicion.h"
#include "Rutina.h"
#include "ClaseGrupal.h"

const int MAX_CLASES = 3;
const int MAX_MEDI = 10;

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
	
	Instructor* instructor;
	Rutina* rutina;

	Medicion** medicion;
	int canmedi;

	ClaseGrupal** clases;
	int canclas;
	

public:
	Cliente(string = "sin def", string = "sin def",
		int = 0, string = "sin def", string = "sin def",
		string = "sin def", char = '-');
	~Cliente();

	//set
	void setCedula(string);
	void setNombre(string);
	void setTelefono(int);
	void setCorreo(string);
	void setFechanac(string);
	void setFechains(string);
	void setSexo(char);

	//get
	string getCedula();
	string getNombre();
	int getTelefono();
	string getCorreo();
	string getnacimiento();
	string getinscripcion();
	char getSexo();
	
	Instructor* getInstructor();
	Rutina* getRutina();


	string toString();

};