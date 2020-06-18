#include "../headers/clase9.h"

/*
9.04 . Leer el legajo y el peso de un alumno informar el legajo del alumno de mayor peso.
 */


void ejercicio9_4(){
	int mayorPeso,mayorLegajo;
	int legajoIng,pesoIng;
	int respuesta;

	printf ("A continuacion ingrese el legajo y el peso del alumno: \n");
	scanf (" %d %d",&legajoIng,&pesoIng);
	mayorPeso = pesoIng;
	mayorLegajo = legajoIng;
	printf ("Desea seguir ingresando alumnos ? 1) Para seguir, presione otra tecla para salir \n");
	scanf (" %d",&respuesta);

	while(respuesta == 1){
		printf ("A continuacion ingrese el legajo y el peso del alumno: \n");
		scanf (" %d %d",&legajoIng,&pesoIng);
		if (pesoIng > mayorPeso){
			mayorPeso = pesoIng;
			mayorLegajo = legajoIng;
		}

		printf ("Desea seguir ingresando alumnos ? 1) Para seguir, presione otra tecla para salir \n");
		scanf (" %d",&respuesta);
	}

	printf ("El legajo del alumno de mayor peso es: %d \n",mayorLegajo);
}
