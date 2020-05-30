#include "../headers/clase3.h"

/*
Ejercicio:
- Leer 3 datos (a , b y c), hallar la suma e imprimir el resultado
 */


void ejercicio2 (){
	int a;
	int b;
	int c;

	printf ("Ingrese valor A \n");
	scanf ("%d",&a);
	printf ("Ingrese valor B \n");
	scanf ("%d",&b);
	printf ("Ingrese valor C \n");
	scanf ("%d",&c);

	int suma = a + b + c;

	printf ("La suma de a+b+c es: %d \n",suma);
}
