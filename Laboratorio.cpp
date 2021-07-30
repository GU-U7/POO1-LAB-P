#include "Laboratorio.h"

Laboratorio::Laboratorio(string _nombre, string _direccion, Horario _labor, vector<Ensayo>_ensayos, int _aforo): Establecimiento(_nombre, _direccion, _labor, _aforo), ensayos(_ensayos){}

void Laboratorio::reporte(){
	cout<<nombre<<endl;
	cout<<"Direccion: "<<direccion<<endl;
	cout<<"Aforo: "<<aforo<<endl;
	labor.horario();
	cout<<"\nEnsayos disponibles:"<<endl;
	for(int i=0; i<ensayos.size(); i++){
		cout<<"\t- "<<ensayos[i].getNombre()<<endl;
	}
}

Laboratorio::~Laboratorio(){}

vector<Ensayo> Laboratorio::getEnsayos(){return ensayos;}