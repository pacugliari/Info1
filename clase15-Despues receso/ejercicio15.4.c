#include "../headers/clase15.h"

/*
15.04- Hacer por matrices el
ejercicio 10.05 que se hubiera
resuelto por vectores (y
anteriormente con variables
escalares en el ejercicio 04.08)

Ejercicio:
10.05 –Hacer el ejercicio 04.08 con vectores
(Leer fichas que contienen cada una dos datos, «número de legajo « y «altura» de los 40 alumnos de un curso de Informática.
Se pide hallar la mayor altura y a que alumno corresponde. Suponer que son todas distintas.
Se deberán armar dos vectores, uno con los números de legajo y otro con las alturas
 */

#define FIL 3//REEMPLAZAR POR 40
#define COL 2

void ejercicio15_4(){
	float matriz[FIL][COL];
	float mayor=0;
	int posi=0;
	int j;


	//LECTURA
	for(int i=0;i<FIL;i++){
		j=0;
		printf ("Ingrese el valor del legajo del alumno numero %d \n",i+1);
		scanf("%f",&(matriz[i][j]));
		j++;
		printf ("Ingrese el valor de la altura del alumno numero %d \n",i+1);
		scanf("%f",&(matriz[i][j]));
		if ((i == 0) || (matriz[i][j] > mayor)){
				mayor = matriz[i][j];
				posi = i;
		}
	}

	//IMPRESION
	printf ("___________\n");
	printf("|");
	for(int i=0;i<FIL;i++){
		j=0;
		printf ("%4d|",(int)matriz[i][j]);
		j++;
		printf ("%4.2f|",matriz[i][j]);
		if (i<FIL-1)
			printf("\n|");
	}
	printf ("\n___________\n");

	printf ("La altura maxima es: %1.2f mts del alumno: %d\n",mayor,(int)matriz[posi][0]);
}


