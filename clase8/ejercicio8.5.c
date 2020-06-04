#include "../headers/clase8.h"

/*
	8.5 leer 3 variables enteras e informar la mayor (suponiendo que hay una sola)
 */


void ejercicio8_5(){
	int a,b,c;
	printf("Ingrese 3 numeros enteros: \n");
	scanf("%d%d%d",&a,&b,&c);

	int mayor;

	if(a > b && a > c){
		mayor=a;
	}else if (b > a && b > c){
		mayor=b;
	}else{
		mayor=c;
	}

	printf("El numero mayor es: %d \n",mayor);
}


