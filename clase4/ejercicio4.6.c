#include "../headers/clase4.h"
/*
Ejercicio para resolver:
04.06 –Leer las alturas de los alumnos de un curso de Informática (suponer que son todas distintas). Se pide hallar la mayor y en que posición se encuentra.
 */


void ejercicio4_6(){

	float altura;
	float alturaMayor=0;
	int posicion=0;
	int contador=1;
	printf ("Ingrese la altura de los alumnos, para salir ingrese -1 \n");

	do{
		scanf ("%f",&altura);
		if (altura > alturaMayor){
			alturaMayor=altura;
			posicion=contador;
		}
		contador++;

	} while (altura != -1);

	printf ("La altura mayor es: %f y la posicion es: %d",alturaMayor,posicion);
}
