#include "../headers/clase8.h"

/*
	8.9 Ingresar valores numéricos para las variables A, B, C, D, e informar si su
		promedio es mayor que o igual a 10.
 */



void ejercicio8_9(){
	int A,B,C,D;
	float promedio;

	printf("Ingrese los valores para A,B,C,D \n");
	scanf("%d%d%d%d",&A,&B,&C,&D);

	promedio = (A+B+C+D)/(float)4;

	if(promedio >= 10){
		printf("El promedio es mayor o igual a 10 \n");
	}else{
		printf("El promedio es menor a 10");
	}
}



