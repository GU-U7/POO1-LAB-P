//
// Created by cielx on 26/07/2021.
//

#include "Horario.h"
Horario::Horario(){}
// Constructor por asigancion.
Horario::Horario(int _he, int _me, int _hs, int _ms, vector<string> _ds){
    this->hora_entrada = _he;
    this->minuto_entrada = _me;
    this->hora_salida = _hs;
    this->minuto_salida = _ms;
    this-> dias = _ds;
};
// Destructor.
Horario:: ~Horario(){};
// Getters.
int Horario::get_hora_entrada(){return hora_entrada;};
int Horario::get_minuto_entrada(){return minuto_entrada;};
int Horario::get_hora_salida(){return hora_salida;};
int Horario::get_minuto_salida(){return minuto_salida;};
vector<string> Horario::get_dias(){return dias;};
// Metodos.
void Horario::horario(){
    cout << "HORARIO:\n";
    //cout << "--------\n" ;
    cout << "Dias: ";
    for (int i=0; i < dias.size()-1; i++){
        cout << dias[i] << ", ";
    }
    cout << dias[dias.size()-1] << endl;
    cout << "Hora: " << "- ";
    if (hora_entrada < 10 && minuto_entrada < 10){cout<<"0"<<hora_entrada<<":0"<<minuto_entrada;}
    else if (hora_entrada < 10){cout<<"0"<<hora_entrada<<":"<<minuto_entrada;}
    else if (minuto_entrada < 10){cout<<hora_entrada<<":0"<<minuto_entrada;}
    else {cout<<hora_entrada<<":"<<minuto_entrada;}
    cout <<" a ";
    if (hora_salida < 10 && minuto_salida < 10){cout<<"0"<<hora_salida<<":0"<<minuto_salida;}
    else if (hora_salida < 10){cout<<"0"<<hora_salida<<":"<<minuto_salida;}
    else if (minuto_salida < 10){cout<<hora_salida<<":0"<<minuto_salida;}
    else {cout<<hora_salida<<":"<<minuto_salida;}
};

void Horario::modificar(){};   // Para que?