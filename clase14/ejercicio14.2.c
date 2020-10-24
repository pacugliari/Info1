/*
14.02. Una Empresa de transporte público tiene 40 Vehículos, se ingresan fichas (no se saben cuantas
son y puede haber más de una ficha por vehículo) con la siguiente información:
Numero de Vehículo (de 1 a 40)
Recaudación
Se pide:
A. ¿Qué Vehículo recaudó más en una sola ficha?
B. Listado de recaudación.
 */

#include "../headers/clase14.h"

#define TAM 40

void ejercicio14_2(){
	int vector[TAM];
	int valor;
	int recaudacion;
	int posMayor=0;

	for(int i=0;i<TAM;i++){
		vector[i]=0;
	}

	do{
		do{
			printf("Ingrese el numero de vehiculo de 1 a %d \n",TAM);
			scanf("%d",&valor);
		}while(valor < 1 || valor > TAM);

		printf("Ingrese el valor de la recaudacion \n");
		scanf("%d",&recaudacion);

		vector[valor-1]+=recaudacion;

		//BUSCO MAYOR
		if(vector[posMayor] < vector[valor-1]){
			posMayor=valor-1;
		}

		printf("Desea seguir ingresando valores ? 1)SI 2)NO \n");
		scanf("%d",&valor);
	}while(valor==1);

	printf("El auto que mas recaudo fue %d con %d \n\n",posMayor+1,vector[posMayor]);

	printf("		RECAUDACION\n");
	for(int i=0;i<TAM;i++){
		printf("Auto %2d:	%d\n",i+1,vector[i]);
	}
}


