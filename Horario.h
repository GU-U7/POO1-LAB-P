//
// Created by cielx on 26/07/2021.
//

#ifndef PROYECTO_FINAL_FINAL_HORARIO_H
#define PROYECTO_FINAL_FINAL_HORARIO_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Horario {
private:
    int hora_entrada;
    int minuto_entrada;
    int hora_salida;
    int minuto_salida;
    vector<string> dias;
public:
    // Constructor por asigancion.
    Horario();
    Horario(int _he, int _me, int _hs, int _ms, vector<string> _ds);
    // Destructor.
    virtual ~Horario();
    // Getters.
    int get_hora_entrada();
    int get_minuto_entrada();
    int get_hora_salida();
    int get_minuto_salida();
    vector<string> get_dias();
    // Metodos.
    void horario();     // Imprime la hora de entrada y salida.
    void modificar();   // Para que?
};


#endif //PROYECTO_FINAL_FINAL_HORARIO_H
