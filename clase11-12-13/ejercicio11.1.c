#include "../headers/clase11.h"

/*
 * ejercicio11.1.c
Ejercicio:
10.06 –Ingresar los 100 legajos de los alumnos de Informática I e imprimirlos ordenados de menor a mayor.
 */

#define LEGAJOS 5//CAMBIAR POR 100

void ejercicio11_1(){
	int legajos[LEGAJOS];
	int aux;

	for(int i=0;i<LEGAJOS;i++){
		printf("Ingrese el legajo %d°",i+1);
		scanf(" %d",&(legajos[i]));
	}


	for(int i=0;i<LEGAJOS-1;i++){
		for(int j=i+1;j<LEGAJOS;j++){
			if (legajos[i] > legajos[j]){
				aux = legajos[i];
				legajos[i] = legajos [j];
				legajos[j] = aux;
			}
		}
	}

	printf("Legajos: \n");
	for(int i=0;i<LEGAJOS;i++){
		printf("%d-",legajos[i]);
	}

}
