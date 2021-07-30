//
// Created by cielx on 26/07/2021.
//

#include "Persona.h"

Persona::Persona(){};
// Constructor por asignacion.
Persona::Persona(string nombre, string apellido){
    this->nombre = nombre;      // Definimos el nombre de la persona.
    this->apellido = apellido;  // Definimos el apellido de la persona.
};
// Destructor.
Persona:: ~Persona(){
    // Nada por el momento.
};
// Getters.
string Persona::get_nombre(){return nombre;};      // Retorna el nombre de la persona.
string Persona::get_apellido(){return apellido;};  // Retorna el apellido de la persona.
// --> Metodos.
//virtual void Persona::reporte()=0;   // Funcion virtual pura.
// -ESPACIO-