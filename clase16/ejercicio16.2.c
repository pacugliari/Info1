/*
	Mismo ejercicio 16.1 pero con matrices

		Del registro de partes meteorologico por cada dia de una semana
	se registra en forma secuencial la temperatura maxima y temperatura
	minima. finalizada la carga de datos se pide informar:

	-el dia mas frio y cual fue esa temperatura (se supone unico)
	-el dia mas calido y cual fue esa temperatura (se supone unica)
	-el promedio de las temperaturas maximas del mes
	-el promedio de las temperaturas minimas del mes
	-imprimir los datos cargados
 */

#include "../headers/clase16.h"

#define DIAS 7

void ejercicio16_2(){
	float temperaturas [2][DIAS];//0; MAX - 1: MIN
	int diaActual=0;
	int respuesta;

	do{
		printf("Ingrese la temperatua maxima del dia %d \n",diaActual+1);
		scanf("%f",&(temperaturas[0][diaActual]));
		printf("Ingrese la temperatura minima del dia %d \n",diaActual+1);
		scanf("%f",&(temperaturas[1][diaActual]));
		printf("Desea seguir cargando temperaturas ? 1) SI 0) NO \n");
		scanf("%d",&respuesta);
		diaActual++;
		if(diaActual >= DIAS){
			printf("Se ah alcanzado el limite maximo de dias del mes \n");
		}
	}while(respuesta==1 && diaActual < DIAS);

	int diaMin=0,diaMax=0;
	float sumaMax=0,sumaMin=0;

	for(int i=0;i<diaActual+1;i++){
		if(temperaturas[0][diaMax] < temperaturas[0][i]){
			diaMax = i;
		}
		if (temperaturas[1][diaMin] > temperaturas[1][i]){
			diaMin = i;
		}
		sumaMax += temperaturas[0][i];
		sumaMin += temperaturas[1][i];
	}

	printf("La temperatura max es %f del dia %d \n",temperaturas[0][diaMax],diaMax+1);
	printf("La temperatura min es %f del dia %d \n",temperaturas[1][diaMin],diaMin+1);
	printf("El promedio de temperaturas maximas es %f \n",sumaMax/diaActual);
	printf("El promedio de temperaturas minimas es %f \n",sumaMin/diaActual);


}


