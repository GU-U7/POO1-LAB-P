//
// Created by cielx on 26/07/2021.
//

#include "Paciente.h"

Paciente::Paciente(){
	cout<<"Ingrese su primer nombre y apellido: ";
	cin>>nombre>>apellido;
	cout<<"Ingrese su edad: ";
	cin>>edad;
	cout<<"Ingrese su DNI: ";
	cin>>DNI;
	cout<<"Ingrese su seguro (Solo Pimax o Atlantico, en todo caso solo ingresar 'e'): ";
	do{
	cin>>seguro;
	}while(seguro!="Pimax"&&seguro!="Atlantico"&&seguro!="e");
}
// Constructor por asignacion.

Paciente::Paciente(str nombre, str apellido, int edad, str DNI, str seguro): Persona(nombre, apellido){
    this->edad = edad;      // Definimos la edad de la persona.
    this->DNI = DNI;        // Definimos el número de DNI de la persona.
    this->seguro = seguro;  // Definimos el nombre del seguro de la persona.
};
// Destructor.
Paciente:: ~Paciente(){};
// Getters.
int Paciente::get_edad(){return edad;};     // Retorna la edad del paciente.
str Paciente::get_DNI(){return DNI;};      // Retorna el número de DNI del paciente.
str Paciente::get_seguro(){return seguro;};   // Retorna el nombre del seguro del paciente.
// --> Metodos.
void Paciente::reporte(){
    cout << "\nREPORTE\n";
    //cout << "-------\n";
    cout << "Nombre:   " << nombre << endl;
    cout << "Apellido: " << apellido << endl;
    cout << "Edad:     " << edad << endl;
    cout << "DNI:      " << DNI << endl;
    cout << "Seguro:   " << "seguro - " << seguro << endl;
};  // Entrega un reporte del paciente.

ostream& operator<<(ostream &os, Paciente &C){
    os << "PACIENTE:\n";
    os << "     Nombre:   " << C.get_nombre() << "\n";
    os << "     Apellido: " << C.get_apellido() << "\n";
    os << "     DNI:      " << C.get_DNI() << endl;
    return os;
};
