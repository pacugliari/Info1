#include "../headers/clase15.h"

/*
Ejercicio 15.02:
- Leer una matriz cuadrada de
orden 4 y hallar la suma de los
elementos de la diagonal
principal y la productoria de
los elementos de la diagonal
secundaria..
 */

#define FIL 4
#define COL 4

void ejercicio15_2(){
	int matriz[FIL][COL];
	int suma=0,productoria=1;

	//LECTURA
	for(int i=0;i<FIL;i++){
		for(int j=0;j<COL;j++){
			printf ("Ingrese el valor de la matriz en la posicion (%d,%d)\n",i+1,j+1);
			scanf("%d",&(matriz[i][j]));
			if (i==j){
				suma += matriz[i][j];
			}else if (i+j==3){
				productoria = productoria*matriz[i][j];
			}
		}
	}

	//IMPRESION
	printf ("_____________________\n");
	printf("|");
	for(int i=0;i<FIL;i++){
		for(int j=0;j<COL;j++){
			printf ("%4d|",matriz[i][j]);
		}
		if (i<FIL-1)
			printf("\n|");
	}
	printf ("\n_____________________\n");

	printf ("Sumatoria: %d \n",suma);
	printf ("Productoria: %d \n",productoria);
}
