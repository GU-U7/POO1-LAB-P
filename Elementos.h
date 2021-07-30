#ifndef elementos_h
#define elementos_h
#include "Ensayo.h"
#include "Establecimiento.h"
#include "Laboratorio.h"
#include "Horario.h"
#include "Paciente.h"
#include "Cita.h"
#include "Doctor.h"
#include "Clinica.h"
#include "Menu.h"

#include <vector>
#include <string>

using namespace std;

//CLINICA
vector<string> v1 = {"Lunes", "Miercoles", "Viernes"};
vector<string> v2 = {"Martes", "Jueves", "Sabado"};
vector<string> v3 = {"Lunes", "Martes", "Miercoles", "Jueves"};
vector<string> v4 = {"Martes", "Jueves", "Viernes"};
vector<string> v5 = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado"};
vector<string> v6 = {"Sabado", "Domingo", "Lunes"};

Horario h1(7, 30, 16, 30, v1);
Horario h2(8, 30, 17, 30, v2);
Horario h3(12, 00, 17, 30, v1);
Horario h4(14, 00, 21, 45, v2);
Horario h5(12, 00, 21, 45, v3);
Horario h6(16, 00, 22, 45, v6);
Horario h7(12, 15, 21, 45, v5);
Horario h8(18, 45, 23, 45, v6);

Doctor d1("Augusto", "Leguia", "Cirujia", h1);
Doctor d2("Enrique", "Bustamante", "Neurologia", h2);
Doctor d3("Julio", "Zamora", "Otorrinolaringología", h3);
Doctor d4("Rafael", "Ramos", "Pediatria general", h4);
Doctor d5("Carlos", "Burga", "Medicina general", h7);
Doctor d6("Alipio", "Ponce", "Cardiologia", h5);
Doctor d7("Manuel", "Rivera", "Gastroenterologia", h1);
Doctor d8("Marcelo", "Arce", "Oftalmologia", h5);
Doctor d9("Gianluca", "Farfan", "Neurologia", h1);
Doctor d10("Juan", "Lopez", "Pediatria general", h6);
Doctor d11("Diego", "Munos", "Psiquiatria", h8);
Doctor d12("Joaquin", "Ramirez", "Cardiologia", h7);

//Laboratorio
vector<string>r1{"Ir en ayunas", "No portar condiciones gestantes"};
vector<string>r2{"Presentar compania durante el procedimiento", "No ingerir alimentos o farmacos 3 horas antes", "Abstener vista a pantallas digitales"};
vector<string>r3{"No tomar bebidas alcholicas una semana antes", "Presentar la orden medica"};
vector<string>r4{"Presentarse durante las 14:00 horas", "Se permite ingerir alimentos y bebidas","Evitar ingerir paracetamol o ivermectina", "No haberse sometido a anestesia general en los ultimos 2 meses"};
vector<string>r5{"No llevar objetos metálicos", "Si tiene alguna protecis metálica o algún objeto de metal implantado en el cuerpo, llene un formulario en el Laboratorio"};

Ensayo e1("Analisis de alcohol", r3);
Ensayo e2("Analisis de sangre", r1);
Ensayo e3("Revision de la vista", r2);
Ensayo e4("Prueba-COVID19", r4);
Ensayo e5("Resonancia", r5);
Ensayo e6("Endocopia", r3);

//Farmacia
vector<string>m1{"Paracetamol", "Ibuprofeno", "Hirudoid", "Hisaler", "Vacuna-COVID19 Moderna"};
vector<string>m2{"Glicolax", "Anestesia topica", "Amoxicilina","Penicilina"};


//HORARIOS PARA SEDES
vector<string> dias_c={"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};
vector<string> dias_l={"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado"};
vector<string>dias_f={"Lunes",  "Miercoles", "Viernes", "Sabado"};
Horario hc(6, 00, 3, 45, dias_c);
Horario hl(8, 30, 18, 45, dias_l);
Horario hf(10, 30, 11, 00, dias_f);


//CREACION DE objetos
Clinica *c1 = new Clinica("Clinica NASSA - MADRIANDORRA", "AV Los Fruteros 455", hc ,vector<Doctor>{d1,d2,d3,d4} ,150);
Clinica *c2 = new Clinica("Clinica NASSA - INTERNACIONAL", "Av. Izquierda 789", hc,vector<Doctor>{d9,d10,d11,d12}, 400);
Clinica *c3 = new Clinica("Clinica NASSA - PERUANO JAPONESA", "AV Los Constructores 198", hc, vector<Doctor>{d5,d6,d7,d8}, 200);

Laboratorio *l1 = new Laboratorio("Laboratorio Farmagedon", "Jiron San Bolivar 23", hl, vector<Ensayo>{e1,e3,e5,e6}, 40);
Laboratorio *l2 = new Laboratorio("Laboratorio Mengele", "Urb Castilla de la Paz 873", hl, vector<Ensayo>{e4,e5,e1}, 40);

Farmacia *f1 = new Farmacia("Farmacia Arcangel", "Av. Los guindales 666", hf, m1, 15);
Farmacia *f2 = new Farmacia("Farmacia Megatron", "Av. Corintos 4522",hf, m2, 20);
Farmacia *f3 = new Farmacia("Farmacia Asmael", "Av. Esequiel 432", hf, m1, 10);

//VECTOREs MENU
vector<Clinica*>clinicas{c1,c2,c3};
vector<Laboratorio*> laboratorios{l1,l2};
vector<Farmacia*>farmacias{f1,f2,f3};

vector<string> contacto = {"980943923", "nassa@gmail.com"};
#endif