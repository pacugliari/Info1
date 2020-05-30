#include "../headers/clase4.h"

/*
Ejercicio para resolver:
04.07 –Leer las alturas de los alumnos de un curso de Informática (suponer que alguna/s se pueden repetir).
 Se pide hallar la mayor altura y cuantos alumnos tienen la misma altura.
 */

//SUPONGO QUE LA CANT DE ALUMNOS QUE TIENEN MISMA ALTURA ES DE LA ALTURA MAX
void ejercicio4_7(){

	float altura;
	float alturaMayor=0;
	int contador=0;
	printf ("Ingrese la altura de los alumnos, para salir ingrese -1 \n");

	do{
		scanf ("%f",&altura);
		if (altura > alturaMayor){
			alturaMayor=altura;
			contador=0;
		}
		if (altura == alturaMayor){
			contador++;
		}

	} while (altura != -1);

	printf ("La altura mayor es: %f y cantidad alumnos con la altura maxima: %d",alturaMayor,contador);
}
