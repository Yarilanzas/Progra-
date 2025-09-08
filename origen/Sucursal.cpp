#include "Sucursal.h"
using namespace std;

Sucursal::Sucursal(string cod, string prov,string can, string cor, int tel) {
	codigo = cod;
	provincia = prov;
	canton = can;
	correo = cor;
	telefono = tel;

	canInstru = 0;
	instructores = new Instructor * [MAX_INSTRUCTORES];
	for (int i = 0; i < MAX_INSTRUCTORES; i++) {
		Instructor[i] = nullptr;
	}

	canClas = 0;
	clases = new ClaseGrupal * [MAX_CLASES];
	for (int i = 0; i < MAX_CLASES; i++) {
		ClaseGrupal[i] = nullptr;
	}

	canClie = 0;
	clientes = new Cliente * [MAX_CLIENTES];
	for (int i = 0; i < MAX_CLIENTES; i++) {
		Cliente[i] = nullptr;
	}
}

Sucursal::~Sucursal() {
	delete[] instructores;
	delete[] clases;
	delete[] clientes;
}

//set
void Sucursal::setCodigo(string cod) {
	codigo = cod;
}

void Sucursal::setProvincia(string prov) {
	provincia = prov;
}

void Sucursal::setCanton(string can) {
	canton = can;
}

void Sucursal::setCorreo(string cor) {
	correo = cor;
}

void Sucursal::setTelefono(string tel) {
	telefono = tel;
}

//get 
string Sucursal::getCodigo() {
	return codigo;
}

string Sucursal::getProvincia() {
	return provincia;
}

string Sucursal::getCanton() {
	return canton;
}

string Sucursal::getCorreo() {
	return correo;
}

int Sucursal::getTelefono() {
	return telefono;
}

//get instructores, clases, clientes
int Sucursal::getcanInstru() {
	return canInstru;
}

int Sucursal::getcanClas() {
	return canClas;
}

int Sucursal::getcanClien() {
	return canClien;
}

Cliente* Sucursal::getInstructor(int pos) {
	if (pos >= 0 && pos < canInstru) {
		return instructores[pos];
	}
	return nullptr;
}

ClaseGrupal* Sucursal::getClase(int pos) {
	if (pos >= 0 && pos < canInstru) {
		return clases[pos];
	}
	return nullptr;
}

Cliente* Sucursal::getCliente(int pos) {
	if (pos >= 0 && pos < canClas) {
		return clientes[pos];
	}
	return nullptr;
}

//agregar instructores
void Sucursal::agregarInstructor(Instructor* instru) {
	if (canInstru < MAX_INSTRUCTORES) {
		instructores[canInstru++] = instru;
		instru->setSucursal(this);
	}
	else {
		cout << "Limite de instructores permitidos " << endl;
	}
}

void Sucursal::agregarClase(ClaseGrupal* clas) {
	if (canClas < MAX_CLASES) {
		Instructor* inst = clas->getInstructor();
		bool valido = false;

		if (inst != NULL) {
			for (int i = 0; i < canInstru; i++) {
				if (instructores[i] == inst) {
					valido = true;
					break;
				}
			}
		}

		if (!valido) {
			cout << "El instructor asignado no pertenece a la sucursal" << endl;
			return;
		}

		clases[canClas++] = clas;
	}
	else {
		cout << "Limite de clases grupales alcanzada" << endl;
	}
}

void Sucursal::agregarCliente(Cliente* clie) {
	if (canClien < MAX_CLIENTES) {
		Instructor* inst = clie->getInstructor();
		bool valido = false;

		if (inst != NULL) {
			for (int i = 0; i < canInstru; i++) {
				if (instructores[i] == inst) {
					valido = true;
					break;
				}
			}
		}

		if (!valido) {
			cout << "El instructor asignado no pertenece a la sucursal" << endl;
			return;
		}

		clientes[canClien++] = clie;
	}
	else {
		cout << "Limite de clientes alcanzado" << endl;
	}
}

string Sucursal::toString() {
	stringstream s;
	s << "Sucursal: " << provincia << " - " << canton << endl;
	s << "Codigo: " << codigo << endl;
	s << "Correo: " << correo << endl;
	s << "Telefono: " << telefono << endl;
	s << "Instructores registrados: " << canInstru << endl;
	s << "Clientes registrados: " << canClien << endl;
	s << "Clases grupales registradas: " << canClas << endl;
	return s.str();
}

