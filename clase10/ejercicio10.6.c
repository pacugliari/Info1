#include "../headers/clase10.h"

/*
Ejercicio:
10.05 –Hacer el ejercicio 04.08 con vectores
(Leer fichas que contienen cada una dos datos, «número de legajo « y «altura» de los 40 alumnos de un curso de Informática.
Se pide hallar la mayor altura y a que alumno corresponde. Suponer que son todas distintas.
Se deberán armar dos vectores, uno con los números de legajo y otro con las alturas
 */

#define CANT_ALUMNOS 5//reemplazar por 40

void ejercicio10_6(){

	int alumnosLegajos[CANT_ALUMNOS];
	float alumnosAlturas[CANT_ALUMNOS];


	for (int i=0;i<CANT_ALUMNOS;i++){
		printf("Ingrese el legajo y la altura \n");
		scanf ("%d %f",&(alumnosLegajos[i]),&(alumnosAlturas[i]));
	}

	int posicionMax = 0;
	for (int i=0;i<CANT_ALUMNOS;i++){
		if (alumnosAlturas[i] > alumnosAlturas[posicionMax]){
			posicionMax = i;
		}
	}

	printf ("La mayor altura es: %0.2f y corresponde al alumno: %d \n",alumnosAlturas[posicionMax],alumnosLegajos[posicionMax]);

}
