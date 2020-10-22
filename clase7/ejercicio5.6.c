#include "../headers/clase7.h"

/*
Ejercicios para resolver:
05.06 –Se tiene una bolsa con bolillas azules, amarillas y verdes. Se pide:
a) Ingresar las bolillas de a uno indicando el color (opción 1:se puede tomar el valor “az” para azules, “am” para
amarillas y “ve” para verde; opción 2: se puede leer un 1 para azules, 2 para amarillas y 3 para verdes; a criterio del
programador)
b. Calcular: Cuántas hay de cada color. De qué color hay mayor cantidad. Si la cantidad de bolillas azules son pares.
 */

enum {
	true=1,
	false=0,
	error=-1
};

void ejercicio5_6(){
	int bolitasVerdes=0;
	int bolitasAzules=0;
	int bolitasAmarillas=0;
	int bolitaIngresada;
	int respuesta;

	do{
		do{
			printf ("Ingrese la bolita 1) Verde 2) Azul 3)Amarilla \n");
			scanf("%d",&bolitaIngresada);

			switch(bolitaIngresada){
				case 1:
					bolitasVerdes++;
				break;
				case 2:
					bolitasAzules++;
				break;
				case 3:
					bolitasAmarillas++;
				break;
				default:
					printf ("Error bolita ingresada \n");
					bolitaIngresada=error;
				break;
			}
		}while(bolitaIngresada==error);

		do{
			printf ("Desea seguir ingresando valores ? 1) SI 2) NO \n");
			scanf ("%d",&respuesta);
			switch (respuesta){
				case 1:
					respuesta=true;
				break;
				case 2:
					respuesta=false;
				break;
				default:
					printf ("Respuesta erronea \n");
					respuesta=error;
				break;
			}
		}while (respuesta == error);

	}while(respuesta==true);

	printf("Cantidad de bolitas verdes: %d \nCantidad de bolitas azules: %d \nCantidad de bolitas amarillas: %d \n",bolitasVerdes,
			bolitasAzules,bolitasAmarillas);

	if (bolitasVerdes > bolitasAzules && bolitasVerdes > bolitasAmarillas){
		printf("Hay mas cantidad de bolitas verdes\n");
	}else if (bolitasAzules> bolitasVerdes && bolitasAzules > bolitasAmarillas){
		printf("Hay mas cantidad de bolitas azules\n");
	}else if (bolitasAmarillas > bolitasVerdes && bolitasAmarillas > bolitasAzules){
		printf("Hay mas cantidad de bolitas amarillas\n");
	}else{
		printf("No hay una cantidad mayor que todas\n");
	}

	if (bolitasAzules > 0){
		if (!(bolitasAzules % 2)){
			printf("Las bolitas azules son PARES \n");
		}else{
			printf("Las bolitas azules son IMPARES \n");
		}
	}

}
