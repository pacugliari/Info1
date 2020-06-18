#include "../headers/clase10.h"
/*
10.02 –Leer 1000 datos, hallar la suma e imprimir el resultado y los datos ingresados.
 */

#define DATOS 3//cambiar por 1000

void ejercicio10_3(){
	int datos [DATOS];
	int suma=0;

	printf ("Ingrese los datos a sumar: \n");
	for (int i=0;i<DATOS;i++){
		scanf ("%d",&(datos[i]));
		suma += datos[i];
	}

	printf ("Los datos ingresados fueron : ");
	for (int i=0;i<DATOS;i++){
		printf ("%d ",datos[i]);
	}


	printf ("\nLa suma es: %d \n",suma);
}
