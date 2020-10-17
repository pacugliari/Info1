/*
	Del registro de partes meteorologico por cada dia de una semana
	se registra en forma secuencial la temperatura maxima y temperatura
	minima. finalizada la carga de datos se pide informar:

	-el dia mas frio y cual fue esa temperatura (se supone unico)
	-el dia mas calido y cual fue esa temperatura (se supone unica)
	-el promedio de las temperaturas maximas del mes
	-el promedio de las temperaturas minimas del mes
	-imprimir los datos cargados
 * */

#include "../headers/clase16.h"

#define DIAS 7

void ejercicio16_1(){
	float temperaturaMax [DIAS];
	float temperaturaMin [DIAS];
	int diaActual=0;
	int respuesta;

	do{
		printf("Ingrese la temperatua maxima del dia %d \n",diaActual+1);
		scanf("%f",&(temperaturaMax[diaActual]));
		printf("Ingrese la temperatura minima del dia %d \n",diaActual+1);
		scanf("%f",&(temperaturaMin[diaActual]));
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
		if(temperaturaMax[diaMax] < temperaturaMax[i]){
			diaMax = i;
		}
		if (temperaturaMin[diaMin] > temperaturaMin[i]){
			diaMin = i;
		}
		sumaMax += temperaturaMax[i];
		sumaMin += temperaturaMin[i];
	}

	printf("La temperatura max es %f del dia %d \n",temperaturaMax[diaMax],diaMax+1);
	printf("La temperatura min es %f del dia %d \n",temperaturaMin[diaMin],diaMin+1);
	printf("El promedio de temperaturas maximas es %f \n",sumaMax/diaActual);
	printf("El promedio de temperaturas minimas es %f \n",sumaMin/diaActual);


}
