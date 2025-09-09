#include "Instructor.h"
using namespace std;

Instructor::Instructor(string ced, string nom, int tel, string cor, string fecha) {
	cedula = ced;
	nombre = nom;
	telefono = tel;
	correo = cor;
	fechanac = fecha;

	canEsp = 0;
	for (int i = 0; i < MAX_ESPECIALIDADES; i++) {
		esp[i] = "";
	}

	sucursal = nullptr;
}

void Sucursal::setCedula(string ced) {
	cedula = ced;
}

void Sucursal::setNombre(string nom) {
	nombre = nom;
}

void Sucursal::setTelefono(int tel) {
	telefono = tel;
}

void Sucursal::setCorreo(string cor) {
	correo = cor;
}

void Sucursal::setFechanac(string ced) {
	cedula = ced;
}

void Sucursal::setSucursal(Sucursal* s) {
	sucursal = s;
}

string Instructor::getCedula() {
	return cedula;
}

string Instructor::getNombre() {
	return nombre;
}

int Instructor::getTelefono() {
	return telefono;
}

string Instructor::getCorreo() {
	return correo;
}

string Instructor::getFechanac() {
	return fechanac;
}

Sucursal* Instructor::getSucursal() {
	return sucursal;
}


void Instructor::agregarEspecialidad(string esp) {
	if (canEsp < MAX_ESPECIALIDADES) {
		esp[canEsp++] = esp;
	}
	else {
		cout << "No se permite agregar mas especialidades" << endl;
	}
}

string Instructor::getEspecialidad(int pos) {
	if (pos >= 0 && pos < canEsp) {
		return esp[pos];
	}
	return "No existe";
}

int Instructor::getCanEspecialidad() {
	return canEsp;
}

Rutina*