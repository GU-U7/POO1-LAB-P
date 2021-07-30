//
// Created by cielx on 26/07/2021.
//

#ifndef PROYECTO_FINAL_FINAL_PACIENTE_H
#define PROYECTO_FINAL_FINAL_PACIENTE_H

#include "Persona.h"

class Paciente: public Persona{
private:
    int edad;       // Edad del paciente
    string DNI;     // DNI del paciente.
    string seguro="";  // Nombre del seguro del paciente.
public:
    Paciente();
    // Constructor por asignacion.
    Paciente(str nombre, str apellido, int edad, str DNI, str seguro);
    // Destructor.
    virtual ~Paciente();
    // Getters.
    int get_edad();     // Retorna la edad del paciente.
    str get_DNI();      // Retorna el número de DNI del paciente.
    str get_seguro();   // Retorna el nombre del seguro del paciente.
    // --> Metodos.
    virtual void reporte() override;                        // Entrega un reporte del paciente.
    friend ostream& operator<<(ostream &os, Paciente&p1);   // Entrega nombre y apellido.
};

#endif //PROYECTO_FINAL_FINAL_PACIENTE_H
