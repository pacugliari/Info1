/*
7.6.Ingresarncantidaddenúmerosyaveriguarcualeselnúmeromayory
elmenor.Mostrarlos.
 */

#include "../headers/clase7.h"

void ejercicio7_6(){

	int respuesta;
	int minimo;
	int maximo;
	int numero;

	printf("Ingrese numero \n");
	scanf ("%d",&numero);
	minimo = maximo = numero;
	printf("Desea seguir ingresando numeros ? 1)SI 2)NO \n");
	scanf("%d",&respuesta);
	while(respuesta == 1){
		printf("Ingrese numero \n");
		scanf ("%d",&numero);
		if ( numero > maximo){
			maximo = numero;
		}else if (numero < minimo){
			minimo = numero;
		}
		printf("Desea seguir ingresando numeros ? 1)SI 2)NO \n");
		scanf("%d",&respuesta);
	}

	printf("El maximo es : %d \n",maximo);
	printf("El minimo es : %d \n",minimo);

}

