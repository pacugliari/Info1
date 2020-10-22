/*
7.4.Ingresar2númerosyrealizarunmenúdeopcionesparaquelossume,resteolos
muestre
 */

#include "../headers/clase7.h"

void ejercicio7_4(){

	int numero1;
	int numero2;
	int respuesta;

	printf("Ingresar 1 numero \n");
	scanf ("%d",&numero1);
	printf("Ingresar 2 numero \n");
	scanf ("%d",&numero2);

	printf ("1)Sumar\n2)Restar\n3)Mostrar\n");
	scanf("%d",&respuesta);

	switch (respuesta){
		case 1:
			printf("Suma: %d \n",numero1+numero2);
		break;
		case 2:
			printf("Resta: %d \n",numero1-numero2);
		break;
		case 3:
			printf("Numero1: %d Numero2: %d\n",numero1,numero2);
		break;
		default:
			printf("Opcion erronea \n");
		break;
	}

}



