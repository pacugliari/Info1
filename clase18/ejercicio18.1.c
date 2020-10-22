/*
Ejercicio:
18.01- Hacer por matrices el ejercicio
11.02 resuelto anteriormente por
Vectores
Se ingresan 35 fichas que contienen
–
cada una de ellas el Número de
Legajo (1 a 35) y la Nota (1 a 100 y
distintas) obtenida por ese alumno .
Se pide imprimir el listado de notas
ordenado de mayor a menor
acompañado de su número de legajo

idea
		alumno1		alumno2		alumno3	...	alumnoN
legajo
nota
 */

#include "../headers/clase18.h"

#define FICHAS 5 //REEMPLAZAR POR 35

void ejercicio18_1(){
	int matriz[FICHAS][2]; // 0: LEGAJO , 1:NOTA
	int legajo;
	int nota;

	//CARGO DATOS

	for(int i=0;i<FICHAS;i++){
		printf("Ingrese el legajo del alumno %d \n",i+1);
		scanf("%d",&legajo);
		matriz[i][0]= legajo;
		do{
			printf("Ingrese la nota del alumno %d  de 1 a 10\n",i+1);
			scanf("%d",&nota);
		}while (nota > 10 || nota < 1);
		matriz[i][1]=nota;
	}

	//REALIZO ORDENAMIENTO
	int notaAux;
	int legajoAux;

	for(int i=0;i<FICHAS-1;i++){
		for(int j=i;j<FICHAS;j++){
			if (matriz[i][1] < matriz[j][1]){
				notaAux = matriz[i][1];
				legajoAux = matriz[i][0];
				matriz[i][1]=matriz[j][1];
				matriz[i][0]=matriz[j][0];
				matriz[j][1]=notaAux;
				matriz[j][0]=legajoAux;
			}
		}
	}

	//REALIZO LA IMPRESION
	printf("NOTAS: ");
	for(int i=0;i<FICHAS;i++){
		printf("%d ",matriz[i][1]);
	}
	printf("\nLEGAJOS: ");
	for(int i=0;i<FICHAS;i++){
		printf("%d ",matriz[i][0]);
	}
	printf("\n");

}
