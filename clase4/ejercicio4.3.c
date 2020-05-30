#include "../headers/clase4.h"

/*
Ejercicios para resolver:
04.03 a b –Leer dos datos «a» y «b». Se pide imprimir el mayor de los dos (considerar que son distintos)
 */


void ejercicio4_3(){
	int a;
	int b;

	printf ("Ingrese el valor de A:\n");
	scanf("%d",&a);
	printf ("Ingrese el valor de B:\n");
	scanf("%d",&b);

	if(a > b){
		printf ("A es mayor: %d \n",a);
	}else{
		printf ("B es mayor: %d \n",b);
	}

}
