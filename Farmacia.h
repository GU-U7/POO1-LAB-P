#ifndef farmacia_h
#define farmacia_h

#include "Establecimiento.h"
#include<vector>
#include<string>
using namespace std;
class Farmacia: public Establecimiento{
	private:
	vector<string>medicamentos;
	public:
	Farmacia(string _nombre, string _direccion, Horario _labor, vector<string>_medicamentos, int _aforo);
	virtual ~Farmacia();
	virtual void reporte() override;
	vector<string>getMedicamentos();
};

#endif