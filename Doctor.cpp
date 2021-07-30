#include "Doctor.h"

Doctor::Doctor():labor(Horario()){}

Doctor::Doctor(string _nombre, string _apellido, string _especialidad, Horario _labor):Persona(_nombre, _apellido), especialidad(_especialidad), labor(_labor){}



Doctor::~Doctor(){}

ostream& operator<<(ostream &os, Doctor &d){
	os<<"\nArea: "<<d.especialidad<<endl;
	os<<"Doctor: "<<d.nombre<<" "<<d.apellido<<"\n";
	return os;
}

void Doctor::reporte(){
	cout<<"\nDoctor: "<<nombre<<" "<<apellido<<"\n";
	cout<<"Especialidad: "<<especialidad<<endl;
	labor.horario();
	cout<<endl;
}

void Doctor::setLugarTrabajo(string _nombreLugar){
	lugarTrabajo=_nombreLugar;
}

string Doctor::getEspecialidad(){return especialidad;}