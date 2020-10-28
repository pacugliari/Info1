#include "../headers/clase15.h"
/*
Ejercicio 15.03:
- Leer una matriz de
«rfilas y«r»s» columnas. Se pide«s»
averiguar el mayor elemento
de la matriz y la posición en
que se encuentra dentro de la
misma
 */

#define FIL 100
#define COL 100

void ejercicio15_3(){
	int filas,columnas,matriz[FIL][COL];
	int mayor=0,posi=0,posj=0;
	do{
		printf ("Ingrese el valor de la cantidad de filas no mayor a 100\n");
		scanf ("%d",&filas);
		printf ("Ingrese el valor de la cantidad de columnas no mayor a 100 \n");
		scanf ("%d",&columnas);
	}while (filas > 100 || columnas > 100 || filas < 1 || columnas < 1);
	//LECTURA
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			printf ("Ingrese el valor de la matriz en la posicion (%d,%d)\n",i+1,j+1);
			scanf("%d",&(matriz[i][j]));
			if ((i == 0 && j==0) || (matriz[i][j] > mayor)){
				mayor = matriz[i][j];
				posi = i+1;
				posj = j+1;
			}
		}
	}
	//IMPRESION
	printf ("_____________________\n");
	printf("|");
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			printf ("%4d|",matriz[i][j]);
		}
		if (i<filas-1)
			printf("\n|");
	}
	printf ("\n_____________________\n");

	printf ("El valor maximo ingresado es: %d en la posicion: (%d,%d)\n",mayor,posi,posj);
}
