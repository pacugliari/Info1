#include "../headers/clase4.h"

/*
Ejercicios para resolver:
04.01 –Leer las edades de los 40 alumnos de un curso de Informática I. Se pide hallar el promedio de edad del curso.
(resolver con todas las estructuras de iteración que sea posible).
 */

#define CANT_ALUMNOS 5

//FOR
void ejercicio1_1(){

	unsigned int sumaEdades =0;
	int edad;

	printf ("Ingrese las edades de los alumnos: \n");
	for (int i=0;i<CANT_ALUMNOS;i++){
		scanf ("%d",&edad);
		sumaEdades += edad;
	}

	printf ("Promedio de edades: %d \n",sumaEdades/CANT_ALUMNOS);


}

//WHILE
void ejercicio1_2(){

	unsigned int sumaEdades =0;
	int edad;
	int cursor =0;

	printf ("Ingrese las edades de los alumnos: \n");
	while (cursor <CANT_ALUMNOS){
		scanf ("%d",&edad);
		sumaEdades += edad;
		cursor++;
	}



	printf ("Promedio de edades: %d \n",sumaEdades/CANT_ALUMNOS);
}

//DO WHILE
void ejercicio1_3(){

	unsigned int sumaEdades =0;
	int edad;
	int cursor =0;

	printf ("Ingrese las edades de los alumnos: \n");

	do{
		scanf ("%d",&edad);
		sumaEdades += edad;
		cursor++;
	}while (cursor <CANT_ALUMNOS);


	printf ("Promedio de edades: %d \n",sumaEdades/CANT_ALUMNOS);
}


