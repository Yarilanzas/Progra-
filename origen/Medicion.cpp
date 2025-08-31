#include "Medicion.h"

Medicion::Medicion()
{
	fecha = "Sin fecha";
	peso = 0;
	porcGrasa = 0;
	porcMuscu = 0; 
}

Medicion::Medicion(string fecha, float peso, float estatura, float pG, float pM , float eM, float pGV, float Mc, float mCad, float mPe, float mMus)
{
	this->fecha = fecha; 
	this->peso = peso;// en kg
	this->estatura = estatura;// en  m 
	this->porcGrasa = pG;
	this->porcMuscu = pM;
	this->edadMeta = eM;
	this->porcGraVis = pGV; 
	this->medCin = Mc;
	this->medCad = mCad;
	this->medPe = mPe;
	this->medMus = mMus;
}

float Medicion::calcularIMC()
{
	float imc = 0;
	imc = peso / (estatura * estatura);
	return imc;
}

void Medicion::clasificarIMC() {
	float imc = calcularIMC(); //revisar 
	if (imc < 16, 00) {
		cout<<"Delgadez severa"
	}
	else if (imc >= 16,01 && imc <= 16,99) {
		cout << "Delgadez moderada"
		}
	else if (imc >= 17,00 && imc <= 18,49) {
		cout << "Delgadez Leve"
	}
	else if (imc >= 18,5 && imc <= 24,99) {
		cout << "Normal"
	}
	else if (imc >= 25,00 && imc <= 29,99) {
		cout << "Pre-obesidad"
	}
	else if (imc >= 30,00 && imc <= 34, 99) {
		cout << "Obesidad leve"
	}
	else if (imc >= 35,00 && imc <= 39,99) {
		cout << "Obesidad media, paciente de alto riesgo";
	}
	else if (imc >40,00) {
		cout << "Obesidad mórbida, paciente de alto riesgo";
	}

}
void Medicion:: calPro(Cliente* c1) {
	if (*c1->getSexo == 'M') {
		cout << "Usted debe de consumir de 1.7 kg  a 2.5 kg de proteína";
	}
	else if (*c1->getSexo == 'F') {
		cout << "Usted debe de consumir de 1.6 kg a 1.8 kg de proteína";
		}
}
float Medicion:: calAgua() {
	float vasosAgua;
	vasosAgua = peso / 7; 
	return vasosAgua; 
}

string Medicion::toString() {
	stringstream s;
	for (int i = 0; i < can < i++) {
		s << "Fecha: " << fecha << endl();
		s << "Peso: " << peso << endl();
		s << "Estaura: " << estatura << endl();
		s << "Porcentaje de Grasa: " << porcGrasa << endl();
		s << "Porcentaje Muscular: " << porcMuscu << endl();
		s << "Edad metabólica: " << edadMeta << endl();
		s << "Porcentaje de grasa viceral: " << porcGraVis << endl();
		s << "Medida de la cintura: " << medCin << endl();
		s << "Medida de la cadera: " << medCad << endl();		
		s << "Medida de pecho: " << medPe << endl();
		s << "Medida del muslo: " << medMus << endl();
	}
	return ss.str();
}
