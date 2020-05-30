#include "../headers/clase6.h"

/*
06.05. Aplicar la Selección múltiple y Validación de datos en el ejercicio 05.06
05.06 –Se tiene una bolsa con bolillas azules, amarillas y verdes. Se pide:
a) Ingresar las bolillas de a uno indicando el color (opción 1:se puede tomar el valor “az” para azules, “am” para
amarillas y “ve” para verde; opción 2: se puede leer un 1 para azules, 2 para amarillas y 3 para verdes; a criterio del
programador)
b. Calcular: Cuántas hay de cada color. De qué color hay mayor cantidad. Si la cantidad de bolillas azules son pares.
 */


void ejercicio6_5(){
	int bolita;
	int azules=0;
	int amarillas=0;
	int verdes=0;

	do{
		printf ("Ingresar las bolillas de a uno indicando el color,1 para azules, 2 para amarillas y 3 para verdes,-1 para salir\n");
		scanf ("%d",&bolita);
		switch (bolita){
			case 1:
				azules++;
			break;
			case 2:
				amarillas++;
			break;
			case 3:
				verdes++;
			break;
			case -1:
			break;
			default:
				printf ("Opcion invalida, vuelva a ingresar una opcion valida de bolita \n ");
			break;
		}
	}while (bolita != -1);

	printf ("Hay %d bolitas azules, %d bolitas amarillas, %d bolitas verdes \n",azules,amarillas,verdes);
	if (azules > amarillas && azules > verdes){
		printf ("Hay mayor cantidad de bolitas azules \n");
	}else if (amarillas > azules && amarillas > verdes){
		printf ("Hay mayor cantidad de bolitas amarillas \n");
	}else if (verdes > amarillas && verdes > azules){
		printf ("Hay mayor cantidad de bolitas verdes \n");
	}else{
		printf ("No hay un color de bolitas de mayor cantidad \n");
	}


	if (azules%2 == 0){
		printf ("Las bolitas azules son pares \n");
	}else{
		printf ("Las bolitas azules son impares \n");
	}
}
