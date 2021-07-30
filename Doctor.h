#ifndef doctor_h
#define doctor_h

#include "Persona.h"
#include "Horario.h"

class Doctor:public Persona{
	private:
	string especialidad, lugarTrabajo;
	Horario labor;
	public:
	Doctor();
	Doctor(string _nombre, string _apellido, string _especialidad, Horario _labor);
	virtual ~Doctor();
	friend ostream& operator<<(ostream &os, Doctor &d);
	void reporte() override;
	void setLugarTrabajo(string _nombreLugar);
	string getEspecialidad();
};

#endif