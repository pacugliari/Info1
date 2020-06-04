#include "../headers/clase8.h"

/*
	8.4 leer de de teclado un numero flotante e informar si es menor a 5 o mayor/igual a 5
 */


void ejercicio8_4(){
	float flotante;

	printf("Ingrese un numero flotante: \n");
	scanf ("%f",&flotante);

	if (flotante < 5){
		printf("El numero es menor a 5 \n");
	}else{
		printf("El numero es mayor o igual a 5 \n");
	}
}


