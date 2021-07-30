#include "Clinica.h"

Clinica::Clinica(string _nombre, string _direccion, Horario _labor, vector<Doctor>_doctores, int _aforo):Establecimiento(_nombre, _direccion, _labor, _aforo), doctores(_doctores){
	for(int i =0; i<doctores.size(); i++){
		especialidades.insert(doctores[i].getEspecialidad());
		doctores[i].setLugarTrabajo(nombre);
	}
}

void Clinica::reporte(){
	cout<<nombre<<endl;
	cout<<"Direccion: "<<direccion<<endl;
	cout<<"Aforo: "<<aforo<<endl;
	labor.horario();
	cout<<"\nEspecialidades: "<<endl;
	for(set<string>::iterator i = especialidades.begin(); i!=especialidades.end(); i++){
		cout<<"\t- "<<*i<<endl;
	}
}

Clinica::~Clinica(){}

vector<Doctor> Clinica::getDoctores(){return doctores;}