#include "../headers/clase9.h"

/*
9.01 Sumar los 10 primeros números enteros usando las 3 estructuras repetitivas.
 */

#define NUM 10

//FOR
void ejercicio9_1_1(){
	int suma=0;
	for (int i=1;i<=NUM;i++){
		suma += i;
	}
	printf ("Con FOR: \n");
	printf ("La suma de los primeros %d numeros enteros es: %d \n",NUM,suma);
}

//WHILE
void ejercicio9_1_2(){
	int suma=0;
	int contador=1;
	while(contador <=NUM){
		suma += contador;
		contador++;
	}
	printf ("Con WHILE: \n");
	printf ("La suma de los primeros %d numeros enteros es: %d \n",NUM,suma);
}

//DO WHILE
void ejercicio9_1_3(){
	int suma=0;
	int contador=1;
	do{
		suma += contador;
		contador++;
	}while(contador <= NUM);

	printf ("Con DO WHILE: \n");
	printf ("La suma de los primeros %d numeros enteros es: %d \n",NUM,suma);
}


