/*
2) Escribir la (o las) línea (s) de código que calcula el determinante de una matriz de 3x3
siendo "matrizValores" el nombre de variable de la matriz y "determinanteTotal" el
nombre de variable del determinante.
 */

#include "../headers/tp3.h"

#define FIL 3
#define COL 3

void ejercicio2(){
	//PARA EL CALCULO DE UN DETERMINANTE DE 3X3 APLICO LA REGLA DE SARRUS
	//1		2		3		det = [(0,0)*(1,1)*(2,2) + (1,0)*(2,1)*(0,2) + (2,0)*(0,1)*(1,2)] -
	//4		5		6			  [(0,2)*(1,1)*(2,0) + (1,2)*(2,1)*(0,0) + (2,2)*(0,1)*(1,0)]
	//7		8		9
	//1		2		3
	//4		5		6
	int matrizValores [FIL][COL] = {{3,2,-3},{7,-1,0},{2,-4,5}};
	int contador = 1;
	int determinanteTotal;

		printf("Matriz original \n");

		for(int i=0;i<FIL;i++){
			for(int j=0;j<COL;j++){
				printf(" %d ",matrizValores[i][j]);
				contador++;
			}
			printf("\n");
		}

		printf("-------------------\n");

		determinanteTotal = ((matrizValores[0][0]*matrizValores[1][1]*matrizValores[2][2])+
							(matrizValores[1][0]*matrizValores[2][1]*matrizValores[0][2])+
							(matrizValores[2][0]*matrizValores[0][1]*matrizValores[1][2]))-
							((matrizValores[0][2]*matrizValores[1][1]*matrizValores[2][0])+
							(matrizValores[1][2]*matrizValores[2][1]*matrizValores[0][0])+
							(matrizValores[2][2]*matrizValores[0][1]*matrizValores[1][0]));

		printf("El determinante de la matriz es : %d \n",determinanteTotal);


}


