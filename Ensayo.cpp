#include "Ensayo.h"

Ensayo::Ensayo(){};

Ensayo::Ensayo(string _nombre, vector<string> _requisitos):nombre(_nombre), requisitos(_requisitos){

}

ostream& operator<<(ostream& os, Ensayo &e){
	os<<"Nombre de ensayo: "<<e.nombre;
	os<<"\nPautas: \n";
	for(int i=0; i<e.requisitos.size(); i++){
		os<<"\t- "<<e.requisitos[i]<<"\n";
	}
	return os;
}

Ensayo::~Ensayo(){

}

string Ensayo::getNombre(){return nombre;}