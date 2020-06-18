#include "../headers/clase9.h"

/*
 	 9.03 . Ingresar sucesivamente 30 números enteros y hallar el máximo
 */

#define NUM 5 //reemplazar por 30

void ejercicio9_3(){
	int maximo;//COMO LOS NUMEROS ENTEROS VAN DE -INFINITO A +INFINITO ,NO TENGO UN LIMITE ASIQUE SE HACE UNA LECTURA PREVIA
	int numero;
	printf ("Ingrese a continuacion los %d numeros: \n",NUM);
	scanf (" %d",&numero);
	maximo = numero;

	for (int i=0;i<NUM-1;i++){
		scanf (" %d",&numero);
		if (numero > maximo){
			maximo = numero;
		}
	}

	printf ("El maximo de los numeros ingresados es: %d \n",maximo);
}

