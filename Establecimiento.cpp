#include "Establecimiento.h"

ostream& operator<<(ostream& os, Establecimiento&e){
	os<<"\nEstablecimiento: "<<e.nombre;
	os<<"\nDireccion: "<<e.direccion;
	return os;
}

Establecimiento::Establecimiento(string _nombre, string _direccion, Horario _labor, int _aforo):nombre(_nombre), direccion(_direccion), labor(_labor), aforo(_aforo){

}

Establecimiento::~Establecimiento(){
  
}