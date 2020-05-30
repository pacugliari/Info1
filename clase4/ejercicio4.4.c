#include "../headers/clase4.h"

/*
Ejercicio para resolver:
04.04 –Leer dos datos «a» y «b». Se pide imprimirlos ordenados de mayor a menor (considerar que son distintos)
 */

void ejercicio4_4(){
	int a;
	int b;

	printf ("Ingrese el valor de A:\n");
	scanf("%d",&a);
	printf ("Ingrese el valor de B:\n");
	scanf("%d",&b);

	if(a > b){
		printf ("A es mayor: %d \n",a);
		printf ("Orden mayor a menor: %d-%d",a,b);
	}else{
		printf ("B es mayor: %d \n",b);
		printf ("Orden mayor a menor: %d-%d",b,a);
	}

}
