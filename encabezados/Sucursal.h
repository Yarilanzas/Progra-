#include "librerias.h"
#include "Instructor.h"
#include "ClaseGrupal.h"
#include "Cliente.h"

//constantes
const int MAX_CLASES = 8;
const int MAX_INSTRUCTORES = 20;
const int MAX_CLIENTES = 100;

class Sucursal {
private:
	string codigo;
	string provincia;
	string canton;
	string correo;
	int telefono;

	Instructor** instructores;
	int canInstru;

	ClaseGrupal** clases;
	int canClas;

	Cliente** clientes;
	int canClien;

public:
	Sucursal(string = "sin def", string = "sin def", string = "sin def",
		string = "sin def", int = 0);
	~Sucursal();

	//set
	void setCodigo(string);
	void setProvincia(string);
	void setCanton(string);
	void setCorreo(string);
	void setTelefono(int);

	//get
	string getCodigo();
	string getProvincia();
	string getCanton();
	string getCorreo();
	int getTelefono();


	Instructor* getInstructor(int);
	ClaseGrupal* getClase(int pos);
	Cliente* getCliente(int pos);

	int getcanInstru();
	int getcanClas();
	int getcanClien();

	void agregarInstructor(Instructor*);
	void agregarClase(ClaseGrupal*);
	void agregarCliente(Cliente*);
	string toString();

};