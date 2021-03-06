//Programa para repartir y barajar cartas

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//Prototipos
void baraja(int wMazo[][13]);
void reparte(const int wMazo[][13], const char *wCara[], const char *wPalo[]);

int main(){
	
	//Inicializa el arreglo Palo
	const char *palo[4]={"Corazones", "Diamantes", "Treboles", "Espadas"};
	//Inicializa el arreglo Cara
	const char *cara[13]={"As", "Dos", "Tres", "Cuatro", "Cinco", "Seis", "Siete", "Ocho", "Nueve", "Diez", "Joto", "Quina", "Rey"};
	//Inicializa el arreglo Mazo
	int mazo[4][13]={0};
	
	
srand(time(0));

baraja (mazo);
reparte(mazo, cara, palo);
return 0;
}


//Baraja las cartas del mazo
void baraja(int wMazo[][13]){
	int fila;
	int columna;
	int carta;
	for(carta=1; carta <= 52; carta++){
		do{
			fila= rand() %4;
			columna=rand() %13;
			
		}while(wMazo[fila][columna]!=0);
		
		wMazo[fila][columna]=carta;
		}
	}
	
	//Reparte las cartas del mazo
void reparte(const int wMazo[][13], const char *wCara[], const char *wPalo[]){
	int fila;
	int columna;
	int carta;
	for(carta=1; carta <= 52; carta++){
	
		for(fila=0; fila<=3; fila++){
			
				for(columna=0; columna<=12; columna++){
					
					if(wMazo[fila][columna]==carta){
						printf("%6s de %-9s%c", wCara[columna], wPalo[fila], carta % 2 ==0  ?'\n' :'\t');
					}
				}
		}
	}
}

