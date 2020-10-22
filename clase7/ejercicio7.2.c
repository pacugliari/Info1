/*
7.2.Ingresarunnúmeropositivo(debesermayora0)ymostrarel
mensajesilacondiciónesverdadera,“ElnúmeroNºespositivo”.
 */

#include "../headers/clase7.h"

void ejercicio7_2(){

	int numero;

	printf("Ingrese el numero \n");
	scanf ("%d",&numero);

	if (numero>0){
		printf("El numero es positivo \n");
	}else
		printf("El numero es negativo \n");
}


