#ifndef menu_h
#define menu_h

#include "Cita.h"
#include "Clinica.h"
#include "Farmacia.h"
#include "Laboratorio.h"


#include <vector>
#include <fstream>
#include <cstdlib>
#include <algorithm>
#include<iostream>
using namespace std;

class Menu{
	private:
	vector<Clinica*>sedeClinica;
	vector<Laboratorio*>sedeLaboratorio;
	vector<Farmacia*>sedeFarmacia;
	vector<string>contacto;
	vector<Cita<Doctor>>citaClinica;
	vector<Cita<Ensayo>>citaLaboratorio;
	vector<Cita<string>>citaFarmacia;
	vector<Doctor>total_doctores;
	
	public:
	Menu(vector<Clinica*>_sedeClinica, vector<Laboratorio*>_sedeLaboratorio,
	vector<Farmacia*>_sedeFarmacia, vector<string>_contacto);

	void MenuPrincipal();
	void verCitas();
	void crearCitas();
	void verDoctores();
	void verSedes();
	void verContacto();
	~Menu();
};

#endif