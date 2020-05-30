#include "../headers/clase6.h"

/*
06.02. Ingresar 5 números sumarlos,
validando que sean menores de 101.
 */


int numeroOK(int numero){
	if (numero > 101){
		printf ("El numero debe ser menor a 101 \n");
		return 0; //FALSE
	}else
		return 1; //TRUE
}

void ejercicio6_2(){
	int numero;
	int sumatoria=0;
	printf ("Ingrese los numeros a continuacion \n");
	for (int i=0;i<5;i++){
		do{
			printf ("Ingrese el %d º numero\n",i+1);
			scanf ("%d",&numero);
		}while (!numeroOK(numero));
		sumatoria += numero;

	}
	printf ("La sumatoria de los numeros ingresados es: %d\n",sumatoria);

}

