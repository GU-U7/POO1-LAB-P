#ifndef clinica_h
#define clinica_h

#include "Establecimiento.h"
#include "Doctor.h"
#include <vector>
#include <set>
#include <iostream>

using namespace std;

class Clinica: public Establecimiento{
	private:
	vector<Doctor>doctores;
	set<string>especialidades;
	public:
	Clinica(string _nombre, string _direccion, Horario _labor, vector<Doctor>_doctores, int _aforo);
	virtual void reporte() override;
	vector<Doctor> getDoctores();
	virtual ~Clinica();
};

#endif