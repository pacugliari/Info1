#include "../headers/clase10.h"

/*
Ejercicio:
10.00 –Leer 3 datos, hallar la suma e imprimir el resultado
 */

#define DATOS 3

void ejercicio10_1(){
	int datos [DATOS];
	printf ("Ingrese los datos a sumar: \n");
	for (int i=0;i<DATOS;i++){
		scanf ("%d",&(datos[i]));
	}

	int suma=0;
	for (int i=0;i<DATOS;i++){
		suma += datos[i];
	}

	printf ("La suma es: %d \n",suma);
}
