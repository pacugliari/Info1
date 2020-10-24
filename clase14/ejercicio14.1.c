/*
14.01. Ingrese un vector de tipo entero de 5 elementos positivos y menores a 1000
Luego del ingreso el usuario ingresará una posición y el programa mostrara el contenido, el usuario
podrá realizar todas las consulta que quiera.
 */

#include "../headers/clase14.h"

#define TAM 5

void ejercicio14_1(){
	int vector[TAM];
	int valor;

	for(int i=0;i<TAM;i++){
		do{
			printf("Ingrese el valor del %d° elemento, debe ser positivo menor a 1000 \n",i+1);
					scanf("%d",&valor);
		}while(valor < 0 || valor>=1000);
		vector[i]=valor;
	}

	do{
		do{
			printf("Ingrese la posicion que desea mostrar su valor del 1 a %d \n",TAM);
			scanf("%d",&valor);
		}while(valor < 1 || valor > TAM);

		printf("El valor de la posicion %d es: %d \n",valor,vector[valor-1]);
		printf("Desea seguir consultando ? 1)SI 2)NO \n");
		scanf("%d",&valor);
	}while(valor==1);
}
