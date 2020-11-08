/*
26.1 Leer dos numeros. Complejos como coordenadas cartesianas y
realizar la suma y el producto de los mismos
 */


#include "../headers/clase25.h"

typedef struct{
	float real;
	float imaginaria;
}complejo_t;

void ejercicio25_1(){
	complejo_t c1,c2;
	printf("Ingrese la parte real del primero numero complejo \n");
	scanf("%f",&c1.real);
	printf("Ingrese la parte imaginaria del primero numero complejo \n");
	scanf("%f",&c1.imaginaria);
	printf("Ingrese la parte real del segundo numero complejo \n");
	scanf("%f",&c2.real);
	printf("Ingrese la parte imaginaria del segundo numero complejo \n");
	scanf("%f",&c2.imaginaria);

	printf("La suma es: %0.2f + i %0.2f \n",c1.real+c2.real,c1.imaginaria+c2.imaginaria);
	//PRODUCTO A+iB * C+iD = AC + AiD + CiB - BD
	printf("El producto es: %0.2f + i %0.2f \n",c1.real*c2.real - c1.imaginaria*c2.imaginaria ,c1.real*c2.imaginaria + c2.real*c1.imaginaria);
}
