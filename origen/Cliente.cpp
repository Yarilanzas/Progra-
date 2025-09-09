#include "librerias.h"
#include "Cliente.h"

Cliente::Cliente(string ced, string nom, int tel, string cor,
	string nac, string ins, char sex) {
	ced = ced;
	nombre = nom;
	telefono = tel;
	correo = cor;
	fechanac = nac;
	fechains = ins;
	sexo = sex;

	instructor = nullptr;
	rutina = nullptr;
	
	canMedi = 0;
	medicion = new Medicion * [MAX_MEDI];
	for (int i = 0; i < MAX_MEDI; i++) {
		medicion[i] = nullptr;
	}

	canClas = 0;
	clases = new ClaseGrupal * [MAX_CLASES];
	for (int i = 0; i < MAX_CLASES; i++) {
		clases[i] = nullptr;
	}
}

	//destructor
	Cliente::~Cliente() {
		for (int i = 0; i < canMedi; i++) {
			delete medicion[i];
		}
		delete[]medicion;
		delete[]clases;
	}

	//set
	void Cliente::setCedula (string ce) {
		ced = ce;
	}

	void Cliente::setNombre (string no) {
		nombre = no;
	}

	void Cliente::setTelefono (int te) {
		telefono = te;
	}

	void Cliente::setCorreo (string co) {
		correo = co;
	}

	void Cliente::setFechanac (string na) {
		fechanac = na;
	}

	void Cliente::setFechains (string in) {
		fechains = in;
	}

	void Cliente::setSexo (char se) {
		sexo = se;
	}

	//set de instructor y rutina
	void Cliente::setInstructor(Instructor* i) {
		instructor = i;
	}

	void Cliente::setRutina(Rutina* r) {
		rutina = r;
	}

	//get
	string Cliente::getCedula() {
		return ced;
	}

	string Cliente::getNombre() {
		return nombre;
	}

	int Cliente::getTelefono() {
		return telefono;
	}

	string Cliente::getCorreo() {
		return correo;
	}

	string Cliente::getnacimiento() {
		return fechanac;
	}

	string Cliente::getinscripcion() {
		return fechains;
	}

	char Cliente::getSexo() {
		return sexo;
	}

	//get de instructor y rutina
	Instructor* Cliente::getInstructor() {
		return instructor;
	}

	Rutina* Cliente::getRutina() {
		return rutina;
	}

	Medicion* Cliente::getMedicion(int pos) {
		if (pos >= 0 && pos < canMedi) {
			return medicion[pos];
		}
		return nullptr;
	}

	ClaseGrupal* Cliente::getClase(int pos) {
		if (pos >= 0 && pos < canClas) {
			return clases[pos];
		}
		return nullptr;
	}

	int Cliente::getcanMedi() {
		return canMedi;
	}

	int Cliente::getcanClases() {
		return canClas;
	}

	void Cliente::agregarMedicion(Medicion* med) {
		if (canMedi < MAX_MEDI) {
			medicion[canMedi] = med;
			canMedi++;
		}
		else {
			cout << "No se permite agregar mas mediciones";
		}
	}

	void Cliente::MatriculaClase(ClaseGrupal* cg) {
		if (canClas < MAX_CLASES) {
			clases[canClas] = cg;
			canClas++;
		}
		else {
			cout << "No se permite matricular mas clases";
		}
	}

	//tostring
	string Cliente::toString() {
		stringstream s;
		s << "\tCedula: " << ced << endl;
		s << "\tNombre: " << nombre << endl;
		s << "\tTelefono: " << telefono << endl;
		s << "\tCorreo: " << correo << endl;
		s << "\tFecha de Nacimiento: " << fechanac << endl;
		s << "\tFecha de inscripcion: " << fechains << endl;
		s << "\tSexo: " << sexo << endl;

		if (instructor != nullptr) {
			Sucursal* suc = instructor->getSucursal();
			if (suc != nullptr) {
				s << "Sucursal: " << suc->getProvincia() << " - " << suc->getCanton() << endl;
			}
			else {
				s << "Sucursal: No asignada " << endl;
			}
			s << "Instructor: " << instructor->getNombre() << endl;
		}
		else {
			s << "Sucursal: No asignada " << endl;
			s << "Instructor: No asignado " << endl;
		}

		return s.str();
	}