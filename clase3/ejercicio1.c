#include "../headers/clase3.h"


/*
 Ejercicio:
- Leer 2 datos (a y b), hallar la suma e imprimir el resultado
*/

void ejercicio1 (){
	int a;
	int b;

	printf ("Ingrese valor A \n");
	scanf ("%d",&a);
	printf ("Ingrese valor B \n");
	scanf ("%d",&b);

	int suma = a + b;

	printf ("La suma de a+b es: %d \n",suma);

}
