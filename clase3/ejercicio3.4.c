#include "../headers/clase3.h"

/*
Ejercicio para resolver:
03.02 – variante: Leer 1000 datos, hallar la suma e imprimir el resultado y los datos ingresados. Utilizar el «para».
 */

#define CANT_DATOS 3

void ejercicio3_4(){
	int dato;
	int suma=0;
	int datos[CANT_DATOS];

	for (int i=0;i<CANT_DATOS;i++){

		printf ("Ingrese el %d° dato \n",i+1);
		scanf ("%d",&dato);
		datos[i]=dato;
		suma += dato;
	}



	printf ("La suma de los datos ingresados es: %d \n",suma);
	printf ("Los datos ingresados fueron: \n");


	//IMPRIMIR LOS DATOS
	for (int i=0;i<CANT_DATOS-1;i++){
		printf ("%d-",datos[i]);
	}
	printf ("%d",datos[CANT_DATOS-1]);


}


