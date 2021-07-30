#include <fstream>
#include "Ensayo.h"
#include "Elementos.h"
#include "Establecimiento.h"
#include "Laboratorio.h"
#include "Horario.h"
#include "Paciente.h"
#include "Cita.h"
#include "Doctor.h"
#include "Clinica.h"
#include "Menu.h"

int main() {


	Menu principal(clinicas,laboratorios,farmacias,contacto);
  	principal.MenuPrincipal();

	system("clear");
	
	return 0;
}