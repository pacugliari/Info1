#include "../headers/clase4.h"
/*
Ejercicio para resolver:
04.08 –Leer fichas que contienen cada una dos datos, «número de legajo « y «altura» de los 40 alumnos de un curso de Informática.
Se pide hallar la mayor altura y a que alumno corresponde. Suponer que son todas distintas.
 */

#define CANT_ALUMNOS 5

typedef struct{
	int legajo;
	float altura;
}alumno;

void ejercicio4_8(){

	alumno alumnoIngresado;
	alumno alumnoAlturaMax;

	alumnoAlturaMax.altura=0;
	alumnoAlturaMax.legajo=0;

	for (int i=0;i<CANT_ALUMNOS;i++){
		printf("Ingrese el legajo y la altura \n");
		scanf ("%d %f",&(alumnoIngresado.legajo),&(alumnoIngresado.altura));

		if ( alumnoIngresado.altura > alumnoAlturaMax.altura ){
			alumnoAlturaMax = alumnoIngresado;
		}
	}

	printf ("La mayor altura es: %f y corresponde al alumno: %d \n",alumnoAlturaMax.altura,alumnoAlturaMax.legajo);

}
