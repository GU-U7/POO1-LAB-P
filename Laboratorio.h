#ifndef laboratorio_h
#define laboratorio_h
#include "Establecimiento.h"
#include "Ensayo.h"
#include <vector>
using namespace std;
class Laboratorio: public Establecimiento{
	private:
	vector<Ensayo>ensayos;
	public:
	virtual void reporte() override;
	Laboratorio(string _nombre, string _direccion, Horario _labor, vector<Ensayo>_ensayos, int _aforo);
	virtual ~Laboratorio();
	vector<Ensayo>getEnsayos();
};
#endif