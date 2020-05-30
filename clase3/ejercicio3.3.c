#include "../headers/clase3.h"

/*
Ejercicio para resolver:
03.01 - Leer 1000 datos, hallar la suma e imprimir el resultado.
 */

#define CANT_DATOS 3

void ejercicio3_3(){
	int dato;
	int suma=0;

	for (int i=0;i<CANT_DATOS;i++){

		printf ("Ingrese el %d° dato \n",i+1);
		scanf ("%d",&dato);

		suma += dato;
	}

	printf ("La suma de los datos ingresados es: %d \n",suma);
}


