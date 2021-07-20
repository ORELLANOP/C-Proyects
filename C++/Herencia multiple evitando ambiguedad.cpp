//Herencia Multiple para evitar ambiguedad.

#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

class ClaseA{
	public:
		ClaseA(int a=10): datoA(a){cout<< "Constructor de A" << endl;}
		int Leer(){ return datoA;}
	protected:
			int datoA;
};


class ClaseB{
	public:
		ClaseB(int b=20) : datoB(b){cout<< "Constructor de B"<< endl;}
		int Leer(){ return datoB; }
	protected:
			int datoB;
};


class ClaseC: public ClaseB, public ClaseA{
	public:
		ClaseC(int a=10, int b=20, int c=30): ClaseA(a), ClaseB(b), datoC(c){cout<< "Constructor de C" << endl;}
		int Leer(){ return datoC;}
	protected:
			int datoC;
};

int main(){
	ClaseC objeto1;
	cout<< "datoA= " << objeto1.ClaseA::Leer() << ", datoB="<< objeto1.ClaseB::Leer()<< ", datoC="<< objeto1.ClaseC::Leer()<< endl;
	ClaseC objeto2 (100, 200, 300);
	cout<< "datoA= " << objeto2.ClaseA::Leer() << ", datoB= "<< objeto2.ClaseB::Leer() <<", datoC="<< objeto2.ClaseC::Leer()<< endl;
	return 0;
}

