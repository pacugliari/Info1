#include "../headers/clase5.h"

/*
Ejercicio:
05.03 –Se ingresa un valor.
Indicar si es par o impar
 */

void ejercicio5_3(){
	int valor;

	printf("Ingrese el valor: \n");
	scanf ("%d",&valor);

	if (!(valor%2)){
		printf ("El valor es PAR \n");
	}else{
		printf ("El valor es IMPAR \n");
	}
}
