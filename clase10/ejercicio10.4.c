#include "../headers/clase10.h"

/*
10.03 –Hacer el ejercicio 04.01a con vectores
(Leer las edades de los 40 alumnos de un curso de Informática I. Se pide hallar el promedio de edad del curso).
 */


#define CANT_ALUMNOS 5

void ejercicio10_4(){

	unsigned int sumaEdades =0;
	int edad[CANT_ALUMNOS];

	printf ("Ingrese las edades de los alumnos: \n");
	for (int i=0;i<CANT_ALUMNOS;i++){
		scanf ("%d",&edad[i]);
		sumaEdades += edad[i];
	}

	printf ("Promedio de edades: %d \n",sumaEdades/CANT_ALUMNOS);
}
