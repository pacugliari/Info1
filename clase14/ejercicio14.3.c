/*
14.03. Realizar un programa que ingrese las notas de N alumnos siendo N un número menor de 40,
sabiendo que las calificaciones varían de 1 a 10 y que pueden se fraccionaria (ejemplo: 8,50)
1. Calcular la media de las notas ingresadas.
2. Presentar la nota de los alumnos cuya nota es mayor al promedio
 */

#include "../headers/clase14.h"

#define TAM 5

void ejercicio14_3(){
	float vector[TAM];
	float nota;
	float suma=0;
	float promedio;

	for(int i=0;i<TAM;i++){
		do{
			printf("Ingrese la nota de 1 a 10 \n");
			scanf("%f",&nota);
			suma += nota;
			vector[i]=nota;
		}while(nota > 10 || nota < 1);
	}

	promedio = suma/TAM;

	printf("Promedio %0.2f \n",promedio);

	for(int i=0;i<TAM;i++){
		if (vector[i] > promedio){
			printf ("Alumno %d promedio %0.2f \n",i+1,vector[i]);
		}
	}

}
