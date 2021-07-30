#include "Menu.h"

Menu::Menu(vector<Clinica*>_sedeClinica, vector<Laboratorio*>_sedeLaboratorio,
	vector<Farmacia*>_sedeFarmacia, vector<string>_contacto):sedeClinica(_sedeClinica), sedeLaboratorio(_sedeLaboratorio), sedeFarmacia(_sedeFarmacia), contacto(_contacto){

	for(int i=0; i<sedeClinica.size(); i++){
		vector<Doctor>doctor_temp = sedeClinica[i]->getDoctores();
		for(int i=0; i<doctor_temp.size(); i++){
			total_doctores.push_back(doctor_temp[i]);
		}
	}
}



void Menu::verCitas(){
	if(!citaFarmacia.size()&&!citaLaboratorio.size()&&!citaClinica.size()) cout<<"No hay citas creadas"<<endl;
	else{
		for(int i =0;i<citaFarmacia.size(); i++){
			citaFarmacia[i].reportarA(cout);
		}
		for(int i = 0; i<citaLaboratorio.size(); i++){
			citaLaboratorio[i].reportarA(cout);
		}
		for(int i = 0; i<citaClinica.size(); i++){
			citaClinica[i].reportarA(cout);
		}

		cout<<"Deseas imprimir tus citas? (Ingrese 'si' si desea): ";
		string confirmacion;
		cin>>confirmacion;
		if(confirmacion=="si"){
			ofstream constancia("constancia.txt");
			for(int i =0;i<citaFarmacia.size(); i++){
				citaFarmacia[i].reportarA(constancia);
			}
			for(int i = 0; i<citaLaboratorio.size(); i++){
				citaLaboratorio[i].reportarA(constancia);
			}
			for(int i = 0; i<citaClinica.size(); i++){
				citaClinica[i].reportarA(constancia);
			}
			constancia.close();
		}
	}

}
void Menu::crearCitas(){
	string _h, _f;
  	Paciente _p;
	
	int tipo;
	cout<<"\nElija el tipo de establecimiento a asistir"<<endl;
	cout<<"1. Clinica\n2. Laboratorio\n3. Farmacia\n";
	cout<<"Entrada: ";
	do{cin>>tipo;}while(tipo<1||tipo>4);
	cout<<"\nElija la opcion de los siguientes establecimientos\n";
	int opcion;
	Establecimiento *_es;
	Doctor docCita;
	Ensayo enCita;
	string farCita;
	if(tipo==1){
		for(int i=0; i<sedeClinica.size(); i++){
			cout<<"\nOpcion "<<i<<": "<<endl;
			sedeClinica[i]->reporte();
		}
		do{
			cout<<"\nIngrese opcion: ";
			cin>>opcion;
		}while(opcion<0||opcion>sedeClinica.size()-1);
			Clinica obj = *sedeClinica[opcion];
		_es = sedeClinica[opcion];
		vector<Doctor> objDocs = obj.getDoctores();
		cout<<"Elija una de los doctores a atenderse:\n";
		for(int i=0; i<objDocs.size(); i++){
			cout<<"\nOpcion "<<i<<": "<<endl;
			objDocs[i].reporte();
		}
		int indiceDoctor;
		do{
			cout<<"\nIngrese opcion: ";
			cin>>indiceDoctor;
		}while(indiceDoctor<0||indiceDoctor>objDocs.size());
		docCita = objDocs[indiceDoctor];
	}
	else if(tipo==2){
		for(int i=0; i<sedeLaboratorio.size(); i++){
			cout<<"\nOpcion "<<i<<": "<<endl;
			sedeLaboratorio[i]->reporte();
		}
		do{
			cout<<"\nIngrese opcion: ";
			cin>>opcion;
		}while(opcion<0||opcion>sedeLaboratorio.size()-1);
		Laboratorio labObj =  *sedeLaboratorio[opcion];
		_es = sedeLaboratorio[opcion];
		vector<Ensayo> objEns = labObj.getEnsayos();

		cout<<"Elija una de los ensayos a someterse:\n";
		int indiceEnsayo;
		for(int i=0; i<objEns.size(); i++){
			cout<<"\nOpcion "<<i<<": "<<endl;
			cout<<objEns[i];
		}
		do{
			cout<<"\nIngrese opcion: ";
			cin>>indiceEnsayo;
		}while(indiceEnsayo<0||indiceEnsayo>objEns.size());

		enCita = objEns[indiceEnsayo];
	}
	else if(tipo==3){
		for(int i=0; i<sedeFarmacia.size(); i++){
			cout<<"\nOpcion "<<i<<": "<<endl;
			sedeFarmacia[i]->reporte();
		}
		do{
			cout<<"\nIngrese opcion: ";
			cin>>opcion;
		}while(opcion<0||opcion>sedeFarmacia.size()-1);
		
		Farmacia farObj = *sedeFarmacia[opcion];
		_es = sedeFarmacia[opcion];
		vector<string>farmacos = farObj.getMedicamentos();
		cout<<"Elija uno de los siguientes farmacos:\n";
		
		int indiceFarmaco;
		for(int i=0; i<farmacos.size(); i++){
			cout<<"\nOpcion "<<i<<": "<<endl;
			cout<<farmacos[i];
		}
		do{
			cout<<"\nIngrese opcion: ";
			cin>>indiceFarmaco;
		}while(indiceFarmaco<0||indiceFarmaco>farmacos.size());
		farCita = farmacos[indiceFarmaco];
	}


	cout<< "Ingrese su hora de asistencia[HH:mm]: ";
	cin>>_h;
	cout<<"Ingrese el dia de su asistencia[DD/MM/AA]: ";
	cin>>_f;
	vector<string>_mot;
	cout<<"Ingrese los motivos de su asistencia (caracter 'e' es para culminar)"<<endl;
	string _m;
	cin.ignore();
	while(true){
		cout<<"Motivo: ";
		getline(cin, _m);
		if(_m=="e") break;
		else _mot.push_back(_m);
	}

	if (tipo==1){
		Cita<Doctor> _newCita1(_p, _f, _h, _mot, _es, docCita);
		citaClinica.push_back(_newCita1);
	}
	else if(tipo==2){
  		Cita<Ensayo> _newCita2(_p, _f, _h, _mot, _es, enCita);
  		citaLaboratorio.push_back(_newCita2);
	}
  	else if(tipo==3){
    		Cita<string> _newCita3(_p, _f, _h, _mot, _es, farCita);
    		citaFarmacia.push_back(_newCita3);
  	}
	
}
void Menu::verDoctores(){
	for(int i=0 ;i<total_doctores.size(); i++){
		total_doctores[i].reporte();
	}
	cout<<"\n\n";
}
void Menu::verSedes(){
	for(int i =0; i<sedeClinica.size(); i++){
		sedeClinica[i]->reporte();
		cout<<endl;
	}
	for(int i =0; i<sedeLaboratorio.size(); i++){
		sedeLaboratorio[i]->reporte();
		cout<<endl;
	}
	for(int i =0; i<sedeFarmacia.size(); i++){
		sedeFarmacia[i]->reporte();
		cout<<endl;
	}
}
void Menu::verContacto(){
	cout<<"Datos de la central"<<endl;
	cout<<"Numero telefonico: "<<contacto[0]<<endl;
	cout<<"Correo electronico: "<<contacto[1]<<endl;
}

Menu::~Menu(){}

void Menu::MenuPrincipal(){
	while(true){
		string temp;
		cout<<"Bienvenida a la red de salud Nassa"<<endl;
		cout<<"Ingrese una de las siguientes 	opciones:"<<endl;
		int opcion;
		cout<<"1. Ver sedes"<<endl;
		cout<<"2. Nuestros doctores"<<endl;
		cout<<"3. Crear cita"<<endl;
		cout<<"4. Ver citas creadas"<<endl;
		cout<<"5. Contacto de la central"<< endl;
		cout<<"6. Salir"<<endl;
		do{
			cout << "Ingrese opcion[1-5]: ";
			cin>>opcion;
		}while (opcion<1 || opcion>6);
		if(opcion==1) {
			system("clear");
			verSedes();
			cout<<"Ingrese cualquier tecla para continuar";
			cin>>temp;
			system("clear");
		}
		else if(opcion==2){ 
			system("clear");
			verDoctores();
			cout<<"Ingrese cualquier tecla para continuar";
			cin>>temp;
			system("clear");
		}
		else if(opcion==3) crearCitas();
		else if(opcion ==4) {
			system("clear");
			verCitas();
			cout<<"Ingrese cualquier tecla para continuar";
			cin>>temp;
			system("clear");
		}
		else if(opcion==5) {
			system("clear");
			verContacto();
			cout<<"Ingrese cualquier tecla para continuar";
			cin>>temp;
			system("clear");
		}
		else break;
	}
}