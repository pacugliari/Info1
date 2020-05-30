#include "../headers/clase3.h"

/*
Ejercicio para resolver:
03.05 – variante: Leer 1000 datos, hallar la suma e imprimir el resultado y los datos ingresados con la estructura de iteración «hacer»
 */

#define CANT_DATOS 3

void ejercicio3_7(){
	int dato;
	int suma=0;
	int cursor = 0;
	int datos[CANT_DATOS];

	while (cursor < CANT_DATOS){

		printf ("Ingrese el %d° dato \n",cursor+1);
		scanf ("%d",&dato);
		suma += dato;
		datos[cursor]=dato;
		cursor++;
	}

	printf ("La suma de los datos ingresados es: %d \n",suma);

	//IMPRIMIR DATOS INGRESADOS
	cursor=0;
	printf ("Los datos ingresados son: \n");
	while (cursor < CANT_DATOS-1){
		printf ("%d-",datos[cursor]);
		cursor++;
	}
	printf ("%d \n",datos[CANT_DATOS-1]);

}
