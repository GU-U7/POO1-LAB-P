#ifndef ensayo_h
#define ensayo_h

#include<string>
#include<iostream>
#include<vector>
using namespace std;

class Ensayo{
	private:
	string nombre;
	vector<string> requisitos;
	public:
  Ensayo();
	Ensayo(string _nombre, vector<string> _requisitos);
	friend ostream& operator<<(ostream& os, Ensayo &e);
	string getNombre();
	virtual ~Ensayo();
};

#endif