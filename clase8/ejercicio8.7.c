#include "../headers/clase8.h"

/*
	8.7 De un alumno del curso de ingreso a la UTN se ingresan las notas obtenidas en
	los exámenes de las 3 materias que lo forman. Calcular el promedio del alumno y
	mostrarlo por pantalla.
 */


void ejercicio8_7(){
	int n1,n2,n3;
	printf("Ingrese las 3 notas: \n");
	scanf(" %d",&n1);
	scanf(" %d",&n2);
	scanf(" %d",&n3);

	float promedio = ((n1+n2+n3)/(float)3);

	printf("El promedio es: %f \n",promedio);
}


