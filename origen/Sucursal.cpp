#include "Sucursal.h"

Sucursal::Sucursal(string cod, string prov,string can, string cor, int tel) {
	this->codigo = cod;
	this->provincia = prov;
	this->canton = can;
	this->correo = cor;
	this->telefono = tel;

	this->canInstru = 0;
	this->instructores = new Instructor * [MAX_INSTRUCTORES];
	for (int i = 0; i < MAX_INSTRUCTORES; i++) {
		this->Instructor[i] = nullptr;
	}

	this->canClas = 0;
	this->clases = new ClaseGrupal * [MAX_CLASES];
	for (int i = 0; i < MAX_CLASES; i++) {
		this->ClaseGrupal[i] = nullptr;
	}

	this->canClie = 0;
	this->clientes = new Cliente * [MAX_CLIENTES];
	for (int i = 0; i < MAX_CLIENTES; i++) {
		this->Cliente[i] = nullptr;
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

int Sucursal::getcanInstru() {
	return canInstru;
}

int Sucursal::getcanClas() {
	return canClas;
}

int Sucursal::getcanClien() {
	return clientes;
}

void Sucursal::IngresarSucursal() {

}
