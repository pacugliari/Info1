#include "../headers/clase3.h"

/*
Ejercicio para resolver:
03.04 – variante: Leer 1000 datos, hallar la suma e imprimir el resultado y los datos ingresados con la estructura de iteración «mientras».
 */


#define CANT_DATOS 3

void ejercicio6(){
	int dato;
	int suma=0;
	int cursor = 0;

	while (cursor < CANT_DATOS){

		printf ("Ingrese el %d° dato \n",cursor+1);
		scanf ("%d",&dato);
		suma += dato;
		cursor++;
	}

	printf ("La suma de los datos ingresados es: %d \n",suma);


}

