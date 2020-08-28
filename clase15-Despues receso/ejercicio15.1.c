#include "../headers/clase15.h"

/*
Ejercicio 15.01:
- Leer una matriz de 3 filas y 5 columnas por filas enteras e imprimirla por columnas enteras.
 */

#define FIL 3
#define COL 5

void ejercicio15_1(){
	int matriz[FIL][COL];

	//LECTURA
	for(int i=0;i<FIL;i++){
		for(int j=0;j<COL;j++){
			printf ("Ingrese el valor de la matriz en la posicion (%d,%d)\n",i+1,j+1);
			scanf("%d",&(matriz[i][j]));
		}
	}

	//IMPRESION
	for(int i=0;i<FIL;i++){
		for(int j=0;j<COL;j++){
			printf ("El valor de la matriz en la posicion (%d,%d) es : %d\n",i+1,j+1,matriz[i][j]);
		}
	}
}
