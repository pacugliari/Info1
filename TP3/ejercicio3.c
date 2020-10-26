/*
 3) Elegir la opción correcta: ¿El determinante de una matriz y el de su traspuesta, tienen
algo en común?
a)No
b) Si, son múltiplos
c) Si, son iguales (SON IGUALES)
d) Si, uno es positivo y el otro es negativo

 */

#include "../headers/tp3.h"

#define FIL 3
#define COL 3

void ejercicio3(){

	int matrizValores [FIL][COL] = {{3,2,-3},{7,-1,0},{2,-4,5}};
	int matrizT [COL][FIL];
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

		//**********************************************************************

		printf("-------------------\n");
		printf("Matriz transpuesta \n");

		for(int i=0;i<COL;i++){
			for(int j=0;j<FIL;j++){
				matrizT[i][j]=matrizValores[j][i];
			}
		}

		for(int i=0;i<FIL;i++){
			for(int j=0;j<COL;j++){
				printf(" %d ",matrizT[i][j]);
				contador++;
			}
			printf("\n");
		}

		printf("-------------------\n");

		determinanteTotal = ((matrizT[0][0]*matrizT[1][1]*matrizT[2][2])+
							(matrizT[1][0]*matrizT[2][1]*matrizT[0][2])+
							(matrizT[2][0]*matrizT[0][1]*matrizT[1][2]))-
							((matrizT[0][2]*matrizT[1][1]*matrizT[2][0])+
							(matrizT[1][2]*matrizT[2][1]*matrizT[0][0])+
							(matrizT[2][2]*matrizT[0][1]*matrizT[1][0]));

		printf("El determinante de la matriz es : %d \n",determinanteTotal);

}

