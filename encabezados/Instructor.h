#include "librerias.h"
#include "Sucursal.h"
#include "Rutina.h"
#include "Medicion.h"
#include "Cliente.h"
using namespace std;

const int MAX_ESPECIALIDADES = 8;

class Instructor {
private:
	string cedula;
	string nombre;
	int telefono;
	string correo;
	string fechanac;

	string esp[MAX_ESPECIALIDADES];
	int canEsp;

	Sucursal* sucursal;

public:
	Instructor(string = "sin def", string = "sin def", int = 0,
		string = "sin def", string = "sin def");

	void setCedula(string);
	void setNombre(string);
	void setTelefono(int);

	

};

