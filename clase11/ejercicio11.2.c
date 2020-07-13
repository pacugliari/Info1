#include "../headers/clase11.h"
/*
Ejercicio:
11.02 –Se ingresan 35 fichas que contienen cada una de ellas el Número de Legajo y la Nota obtenida por ese alumno .
Se pide imprimir el listado de notas ordenado de mayor a menor acompañado de su número de legajo.
 */

#define FICHAS 5

void ejercicio11_2(){
	int legajos[FICHAS];
	int notas[FICHAS];
	int auxLegajo,auxNota;


	for(int i=0;i<FICHAS;i++){
		printf("Ingrese el legajo %d° \n",i+1);
		scanf(" %d",&(legajos[i]));
		printf ("Ingrese la nota: \n");
		scanf (" %d",&(notas[i]));
	}

	for(int i=0;i<FICHAS-1;i++){
		for(int j=i+1;j<FICHAS;j++){
			if (notas[i] < notas[j]){
				auxNota = notas[i];
				auxLegajo = legajos[i];
				notas[i] = notas[j];
				legajos[i] = legajos[j];
				notas[j] = auxNota;
				legajos[j] = auxLegajo;
			}
		}
	}

	for(int i=0;i<FICHAS;i++){
		printf("Nota: %d  Legajo: %d \n",notas[i],legajos[i]);
	}


}
