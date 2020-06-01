#include "../headers/clase5.h"

/*
Ejercicio:
05.01 –Se ingresan 100 datos. Se
pide averiguar cuantos son
mayores, cuantos iguales y
cuantos menores de cero.
Resolver.
a) Con el uso de 3 «si»
b) Con el uso de 2 «si»
 */

#define CANT_DATOS 5

void ejercicio5_1_1(){
	int mayoresCero=0;
	int menoresCero=0;
	int igualesCero=0;
	int dato;

	printf("Ingrese los datos a continuacion: \n");

	for(int i=0;i<CANT_DATOS;i++){
		scanf ("%d",&dato);
		if(dato > 0){
			mayoresCero++;
		}else if (dato == 0){
			igualesCero++;
		}else if (dato < 0){
			menoresCero++;
		}
	}

	printf ("Cantidad mayores a cero: %d iguales a cero: %d menores a cero: %d \n",mayoresCero,igualesCero,menoresCero);
}

void ejercicio5_1_2(){
	int mayoresCero=0;
	int menoresCero=0;
	int igualesCero=0;
	int dato;

	printf("Ingrese los datos a continuacion: \n");

	for(int i=0;i<CANT_DATOS;i++){
		scanf ("%d",&dato);
		if(dato > 0){
			mayoresCero++;
		}else if (dato == 0){
			igualesCero++;
		}else{
			menoresCero++;
		}
	}

	printf ("Cantidad mayores a cero: %d iguales a cero: %d menores a cero: %d \n",mayoresCero,igualesCero,menoresCero);
}
