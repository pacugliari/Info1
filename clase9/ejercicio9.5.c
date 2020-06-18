#include "../headers/clase9.h"

/*
9.05. Se Quiere saber de 30 días registrados cual fue su temperatura máxima y mínima.
 */

#define DIAS 5

void ejercicio9_5(){
	float tempMax,tempMin;
	float tempIng;

	printf ("A continuacion ingrese la temperatura del dia numero 1 \n");
	scanf ("%f",&tempIng);
	tempMax = tempMin = tempIng;

	for (int i=2;i<DIAS+1;i++){
		printf ("A continuacion ingrese la temperatura del dia numero %d \n",i);
		scanf ("%f",&tempIng);
		if (tempIng > tempMax){
			tempMax = tempIng;
		}
		if (tempIng < tempMin){
			tempMin = tempIng;
		}
	}

	printf ("La temperatura del dia mas caluroso fue : %0.2f y la temperatura del dia mas frio fue: %0.2f de los ultimos %d dias\n",tempMax,tempMin,DIAS);
}
