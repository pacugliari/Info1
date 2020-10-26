/*
 1) Escribir solo las líneas de código en C que realizan la transposición de una matriz (p ej.
3x3). Si fuese posible realizar de forma genérica para una matriz de NxM (siendo N
cantidad de filas y M cantidad de columnas).
 */
#include "../headers/tp3.h"

#define FIL 3
#define COL 3

void ejercicio1(){

	int matriz [FIL][COL];
	int contador=1;

	printf("Matriz original \n");

	for(int i=0;i<FIL;i++){
		for(int j=0;j<COL;j++){
			matriz[i][j]=contador;
			printf(" %d ",matriz[i][j]);
			contador++;
		}
		printf("\n");
	}

	printf("-------------------\n");
	printf("Matriz transpuesta \n");

	int matrizT [COL][FIL];

	for(int i=0;i<COL;i++){
		for(int j=0;j<FIL;j++){
			matrizT[i][j]=matriz[j][i];
		}
	}

	for(int i=0;i<COL;i++){
		for(int j=0;j<FIL;j++){
			printf(" %d ",matrizT[i][j]);
		}
		printf("\n");
	}

}


