#include "../headers/clase10.h"

/*
Ejercicio:
10.04 –Hacer el ejercicio 04.02a con vectores (Leer las edades de los alumnos de un curso de Informática I.
Se pide hallar el promedio de edad del curso. Indicar cuantos alumnos hay en ese curso).
Considerar que se necesitará un «mientras» o un «hacer» para ingresar los datos y cargarlos en un vector para luego hacer la suma y
 finalmente el promedio dado que no se conoce de antemano cuantos son.
 */

#define CANT_MAX_ALUM 100

void ejercicio10_5(){
	unsigned int sumaEdades =0;
	int edad[CANT_MAX_ALUM];
	int contador =0;
	int respuesta;

	do{
		printf ("Ingrese las edades de los alumnos\n");
		scanf ("%d",&edad[contador]);
		sumaEdades += edad[contador];
		contador++;

		printf ("Desea seugir ingresando alumnos ? 1) Para seguir, presione otra tecla para salir \n");
		scanf ("%d",&respuesta);
	}while (respuesta == 1);

	printf ("Promedio de edades: %d \n",sumaEdades/contador);
	printf ("Cantidad de alumnos es: %d \n",contador);
}
