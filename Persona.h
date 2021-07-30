//
// Created by cielx on 26/07/2021.
//

#ifndef PROYECTO_FINAL_FINAL_PERSONA_H
#define PROYECTO_FINAL_FINAL_PERSONA_H

#include <iostream>
#include <string>
#include <vector> 

using namespace std;

typedef string str;

class Persona {
private:
protected:
    string nombre;      // Nombre de la persona.
    string apellido;    // Apellido de la persona.
public:
    Persona();
    // Constructor por asignacion.
    Persona(string nombre, string apellido);
    // Destructor.
    virtual ~Persona();
    // Getters.
    string get_nombre();    // Retorna el nombre de la persona.
    string get_apellido();  // Retorna el apellido de la persona.
    // --> Metodos.
    virtual void reporte()=0;   // Funcion virtual pura.
    // -ESPACIO-
};


#endif //PROYECTO_FINAL_FINAL_PERSONA_H
