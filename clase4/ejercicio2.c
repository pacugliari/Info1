#include "../headers/clase4.h"

/*
04.02 –Leer las edades de los alumnos de un curso de Informática I. Se pide hallar el promedio de edad del curso.
Indicar cuantos alumnos hay en ese curso.
(resolver con todas las estructuras de iteración que sea posible).
 */



//COMO NO SE SABE QUE CANTIDAD DE ALUMNOS HAY SOLO SE PUEDE RESOLVER CON WHILE O DO WHILE

//WHILE
void ejercicio2_1(){

	unsigned int sumaEdades =0;
	int edad=0;
	int contador =0;

	printf ("Ingrese las edades de los alumnos, para salir del ingreso de edades -1 \n");
	while (edad != -1){
		scanf ("%d",&edad);
		sumaEdades += edad;
		contador++;
	}

	contador--; //RESTO EL CONTEO DEL -1
	printf ("Promedio de edades: %d \n",sumaEdades/contador);
	printf ("Cantidad de alumnos es: %d \n",contador);
}


//DO WHILE
void ejercicio2_2(){

	unsigned int sumaEdades =0;
	int edad;
	int contador =0;

	printf ("Ingrese las edades de los alumnos: \n");

	do{
		scanf ("%d",&edad);
		sumaEdades += edad;
		contador++;
	}while (edad != -1);


	contador--; //RESTO EL CONTEO DEL -1
	printf ("Promedio de edades: %d \n",sumaEdades/contador);
	printf ("Cantidad de alumnos es: %d \n",contador);
}


