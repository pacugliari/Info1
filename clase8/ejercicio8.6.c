#include "../headers/clase8.h"

/*
	8.6 Desarrollar un algoritmo que se ingrese el radio y muestre el perímetro, área y
		volumen.
 */

#define PI 3.14

void ejercicio8_6(){
	float radio,altura;
	printf("Ingrese el radio y la altura \n");
	scanf("%f%f",&radio,&altura);

	printf("El perimetro es: %f \n",2*PI*radio);
	float area = PI*radio*radio;
	printf("El area es: %f \n",area);
	printf("El volumen es: %f \n",area*altura);
}


