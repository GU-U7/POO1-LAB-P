//
// Created by cielx on 26/07/2021.
//

#ifndef PROYECTO_FINAL_FINAL_CITA_H
#define PROYECTO_FINAL_FINAL_CITA_H

#include "Paciente.h"
#include "Establecimiento.h"

template <typename EDI>

class Cita {
private:
    Paciente sujeto;
    Establecimiento *lugar;
    string fecha;
    string hora;
    vector<string> motivos;
    EDI necesidad;
public:
    // Constructor por asignacion.
    	Cita(Paciente _sujeto, str _fecha, str _hora, vector<str> _motivos, Establecimiento *_lugar,EDI _necesidad):sujeto(_sujeto), fecha(_fecha), hora(_hora), motivos(_motivos), lugar(_lugar), necesidad(_necesidad){}
    // Destructor.
    virtual ~Cita(){}
    // Getters.
    Paciente get_paciente(){return sujeto;}
    string get_fecha(){return fecha;}
    string get_hora(){return hora;};
    vector<string> get_motivos(){return motivos;};
    Establecimiento* get_establecimiento(){return lugar;}
    // --> Metodos.

    void reportarA(ostream &os){
	    os << "\n     DETALLES CITA\n";
    	os << "      -------------\n";
    	os << sujeto;
    	os << "Fecha y Hora:\n";
    	os << "  Fecha: " << get_fecha() << endl;
    	os << "  Hora:  -  " << get_hora() << endl;
    	os << *lugar;
	os<<"\n"<<necesidad;
    	os << "\nMotivo:\n";
    	for (int i=0; i < motivos.size(); i++){
        	os << "    -" << motivos[i] << endl;
    	}
	
    }
    
    
    //friend ostream& operator<<(ostream &os, const Cita<EDI> &c1);// Entrega los datos de la cita.
    //void modificar_fecha(str fecha);
    //void modificar_hora(str hora);
    //void modificar(str fecha, str hora);
};

/*
template <typename EDI>
ostream& operator<<(ostream &os, const Cita<EDI> &c1){
    os << "\n     DETALLES CITA\n";
    os << "      -------------\n";
    os << c1.sujeto;
    os << "Fecha y Hora:\n";
    os << "  Fecha: " << c1.get_fecha() << endl;
    os << "  Hora:  -  " << c1.get_hora() << endl;
    os << *c1.lugar;
    os << "\nMotivo:\n";
    for (int i=0; i < c1.motivos.size(); i++){
        os << "    -" << c1.motivos[i] << endl;
    }
    return os;
};
*/

#endif //PROYECTO_FINAL_FINAL_CITA_H
