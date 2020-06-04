#include "../headers/clase8.h"

/*
	8.8- Ingresar 100 valores numéricos e informar su promedio, cual fue el valor mas alto
		y cual fue el menor valor ingresado.
 */

#define CANT_NUM 5 //CAMBIAR A 100

void ejercicio8_8(){
	float promedio;
	int mayor;
	int menor;
	int ingreso;
	int sumatoria=0;

	printf ("Ingrese %d valores enteros: \n",CANT_NUM);
	scanf("%d",&ingreso);

	mayor = ingreso;
	menor = ingreso;
	sumatoria += ingreso;

	for(int i=0;i<CANT_NUM-1;i++){
		scanf("%d",&ingreso);
		sumatoria += ingreso;
		if (ingreso > mayor){
			mayor = ingreso;
		}else if (ingreso < menor){
			menor = ingreso;
		}
	}

	promedio = sumatoria / (float)CANT_NUM;

	printf("El promedio es: %f \n",promedio);
	printf("El valor mas alto es: %d \n",mayor);
	printf("El valor mas bajo es: %d \n",menor);
}


