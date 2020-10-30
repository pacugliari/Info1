/*
 1) Escribir solo las líneas de código en C que realizan la transposición de una matriz (p ej.
3x3). Si fuese posible realizar de forma genérica para una matriz de NxM (siendo N
cantidad de filas y M cantidad de columnas).
 */
#include "../headers/tp3.h"

#define N 3
#define M 3

void ejercicio1(){

	int matriz [N][M];
	int contador=1;

	printf("Matriz original \n");

	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			matriz[i][j]=contador;
			printf(" %d ",matriz[i][j]);
			contador++;
		}
		printf("\n");
	}

	printf("-------------------\n");
	printf("Matriz transpuesta \n");

	int matrizTranspuesta [M][N];

	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			matrizTranspuesta[i][j]=matriz[j][i];
		}
	}

	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			printf(" %d ",matrizTranspuesta[i][j]);
		}
		printf("\n");
	}

}


