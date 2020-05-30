#include "../headers/clase3.h"

/*
Ejercicio para resolver:
03.03 – variante: Leer 1000 datos, hallar la suma e imprimir el resultado, los datos ingresados y
el valor del índice del «para». Indicar que valor imprime en el índice del «para».
 */

#define CANT_DATOS 3

void ejercicio5(){
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


	//IMPRIMIR LOS DATOS
	printf ("Los datos ingresados fueron: \n");
	for (int i=0;i<CANT_DATOS-1;i++){
		printf ("%d-",datos[i]);
	}
	printf ("%d \n",datos[CANT_DATOS-1]);

	//IMPRIMIR INDICE DEL PARA
	printf ("Indice del para con su respectivo valor: \n");
	for (int i=0;i<CANT_DATOS;i++){
		printf ("Indice: %d Valor:%d \n",i,datos[i]);
	}

}


