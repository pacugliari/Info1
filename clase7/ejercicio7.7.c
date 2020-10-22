/*
  7.7.Ingresar10númerosysacarelpromedioymostrarelresultado.
 */



#include "../headers/clase7.h"

void ejercicio7_7(){
	int suma = 0;
	int numero;

		for (int i=0;i<10;i++){
			printf("Ingrese el %d° numero \n",i+1);
			scanf("%d",&numero);
			suma  += numero;
		}

		printf("La promedio de los numeros es: %0.2f \n",suma/(float)10);

}
