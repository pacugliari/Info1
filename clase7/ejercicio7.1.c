/*
 7.1.Sedeben ingresar dos números enteros cualquiera para realizar las cuatro
operaciones matemáticas básicas. Mostrar los resultados correspondientes.
 */

#include "../headers/clase7.h"

void ejercicio7_1(){
	int numero1;
	int numero2;

	printf("Ingresar 1 numero \n");
	scanf ("%d",&numero1);
	printf("Ingresar 2 numero \n");
	scanf ("%d",&numero2);

	printf("Suma: %d \n",numero1+numero2);
	printf("Resta: %d \n",numero1-numero2);
	printf("Multiplicacion: %d \n",numero1*numero2);

	if (numero2 != 0){
		printf("Division: %f \n",numero1/(float)numero2);
	}else{
		printf("No se puede dividir por cero \n");
	}

}

