#include "Farmacia.h"

Farmacia::Farmacia(string _nombre, string _direccion, Horario _labor, vector<string>_medicamentos, int _aforo): Establecimiento(_nombre, _direccion, _labor, _aforo), medicamentos(_medicamentos){}

Farmacia::~Farmacia(){}

void Farmacia::reporte(){
	cout<<nombre<<endl;
	cout<<"Direccion: "<<direccion<<endl;
	cout<<"Aforo: "<<aforo<<endl;
	labor.horario();
	cout<<"\nMedicamentos en venta:"<<endl;
	for(int i=0; i<medicamentos.size(); i++){
		cout<<"\t- "<<medicamentos[i]<<endl;
	}
}

vector<string> Farmacia::getMedicamentos(){return medicamentos;}