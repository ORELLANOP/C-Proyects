#include<iostream>
#include<iomanip>//Biblioteca para manipuladores

using namespace std;

int main(){
	int dia=7, mes=4, anio=5;
	
	cout<< setfill('0') << "Fecha:" << setw(2) << dia << "/" << setw(2)<< mes <<"/"<< setw(2)<< anio<< endl;
	return 0;
}
