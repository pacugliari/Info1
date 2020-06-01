#include "../headers/clase5.h"

/*
Ejercicio
05.04 – Se ingresa un valor. Indicar si es
múltiplo de 5.
 */


void ejercicio5_4(){
	int valor;

	printf("Ingrese el valor: \n");
	scanf ("%d",&valor);

	if (!(valor%5)){
		printf ("El valor es multiplo de 5 \n");
	}else{
		printf ("El valor no es multiplo de 5 \n");
	}
}
