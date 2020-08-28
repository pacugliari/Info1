#include "../headers/clase15.h"

/*
Ejercicio:
15.05- Se ingresan fichas conteniendo
el numero de alumno (1 a 20), el
número de materia (1 a 5) y la nota de
ese alumno en esa materia.
Se pide hallar el promedio de notas por
alumno y el promedio de notas por
materia.
 */


#define FIL 100
#define COL 3

void ejercicio15_5(){
	int matriz[FIL][COL];
	int suma=0;
	int contador=0;
	float promedio=0;
	int numero;
	int filas;

	printf ("Ingrese la cantidad de fichas que va a cargar \n");
	scanf ("%d",&filas);

	//LECTURA
	for(int i=0;i<filas;i++){
		for (int j=0;j<COL;j++){
			switch (j){
				case 0:
					do{
						printf ("Ingrese el numero del  %d° alumno debe ser del 1 a 20\n",i+1);
						scanf("%d",&numero);
					}while (numero < 1 || numero >20 );
					matriz[i][j]= numero;
				break;
				case 1:
					do{
						printf ("Ingrese el numero de materia del %d° alumno debe ser de 1 a 5 \n",i+1);
						scanf("%d",&numero);
					}while (numero < 1 || numero > 5);
					matriz[i][j] = numero;
				break;
				case 2:
					do{
						printf ("Ingrese la nota del %d° alumno de 1 a 10\n",i+1);
						scanf("%d",&numero);
					}while  (numero < 1 || numero > 10);
					matriz[i][j] = numero;
				break;
			}
		}
	}

	//SUMA NOTAS POR ALUMNO
	int indice = 1;
	while (indice <=20){
		contador=0;
		suma=0;
		for(int i=0;i<filas;i++){
			if (matriz[i][0]==indice){
				contador++;
				suma += matriz[i][2];
			}
		}
		if (contador != 0){
			promedio = (float)suma/contador;
			printf ("Promedio del alumno cuyo numero es: %d es: %2.2f \n",indice,promedio);
		}
		indice++;
	}

	//SUMA NOTAS POR MATERIA
	indice = 1;
	while (indice <= 5){
		suma = 0;
		contador =0;
		for (int i=0;i<filas;i++){
			if (matriz[i][1]==indice){
				contador++;
				suma += matriz[i][2];
			}
		}
		if (contador != 0){
			promedio = (float)suma/contador;
			printf ("Promedio de notas de la materia numero: %d es: %2.2f \n",indice,promedio);
		}
		indice++;
	}


	//IMPRESION
	printf ("_______________________________\n");
	printf("|N°Alumno |N°Materia|Nota     |\n");
	printf ("_______________________________\n");
	printf ("|");
	for(int i=0;i<filas;i++){
		for (int j=0;j<COL;j++){
			printf ("%9d|",matriz[i][j]);
		}
		if (i<filas-1)
			printf("\n|");
	}
	printf ("\n_______________________________\n");

}
