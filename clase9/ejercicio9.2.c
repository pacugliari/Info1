#include "../headers/clase9.h"

/*
 9.02 . Ingresar sucesivamente 30 números enteros positivos y hallar el máximo

 */

#define NUM 5 //reemplazar por 30

void ejercicio9_2(){
	int maximo =0; //COMO LOS NUMEROS SON ENTEROS POSITIVOS EL MINIMO ES CERO
	int numero;
	printf ("Ingrese a continuacion los %d numeros: \n",NUM);

	for (int i=0;i<NUM;i++){
		scanf (" %d",&numero);
		if (numero > maximo){
			maximo = numero;
		}
	}

	printf ("El maximo de los numeros ingresados es: %d \n",maximo);
}
