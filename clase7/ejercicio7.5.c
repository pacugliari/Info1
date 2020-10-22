/*
7.5.Leer10números,sumarlosymostrarelresultado.
 */

#include "../headers/clase7.h"

void ejercicio7_5(){

	int suma = 0;
	int numero;

	for (int i=0;i<10;i++){
		printf("Ingrese el %d° numero \n",i+1);
		scanf("%d",&numero);
		suma  += numero;
	}

	printf("La suma de los numeros es: %d \n",suma);

}


