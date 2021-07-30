#ifndef establecimiento_h
#define establecimiento_h

#include "Horario.h"

class Establecimiento{
	protected:
	int aforo;
	string nombre, direccion;
	Horario labor;
	public:
	Establecimiento(string _nombre, string _direccion, Horario _labor, int _aforo);
	virtual void reporte()=0;
	friend ostream& operator<<(ostream& os, Establecimiento &e);
	virtual ~Establecimiento();
	
};
#endif 