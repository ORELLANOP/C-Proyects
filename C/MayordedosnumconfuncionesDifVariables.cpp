#include<stdio.h>
#include<conio.h>


int mayor(int x, int y);
main(){
	
	int a, b, may;
	a=0;
	b=0;
	may=0;
	printf ("Este programa calcula el mayor de dos numeros distintos usando funciones\n");
	printf ("Ingrse el primer numero:\n");
	scanf ("%d", &a);
	printf ("Ingrese el segundo numero:\n");
	scanf ("%d", &b);
	printf ("Los numeros ingresados son: %d, %d\n",a, b);
	printf ("El mayor de los numeros ingresados es: %d", mayor(a, b));
	return 0;
}

int mayor(int x, int y){
	int may=0;
	if(x<y)
	may=y;
	else
	may=x;
	return(may);
	
}
