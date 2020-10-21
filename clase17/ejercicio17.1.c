/*
Realizar un programa que , se ingresan fichas de la siguiente forma
(no se sabe cuantas son):
	nro de dia (1 a 7 )
	cantidad producidad

	luego del ingreso se pide
	1) mostrar todos los datos
	2) cual es la produccion los fines de semana (6 y 7)
	3) total de produccion

idea de la matriz:
				dia 1	dia 2	dia 3	dia 4	dia 5	dia 6	dia 7	total producidad
producidad
total dia
 */

#include "../headers/clase17.h"

#define TAM 8

void ejercicio17_1(){
	int vector [TAM];
	int dia;
	int producidad;
	int respuesta;

	for(int i=0;i<TAM;i++){
		vector[i] = 0;
	}

	do{
		do{
			printf("Ingrese el numero de dia del 1 a 7 \n");
			scanf("%d",&dia);
		}while(dia > 7 || dia < 1);

		dia--;

		printf("Ingrese la producidad del dia \n");
		scanf ("%d",&producidad);

		vector[dia]+=producidad;
		vector[7]+=producidad;

		printf("Desea seguir ingresando fichas ? 1)SI  2)NO \n");
		scanf("%d",&respuesta);

	}while(respuesta == 1);

	//LISTADO
		printf("Lunes     	Martes    	Miercoles 	Jueves    	Viernes   	Sabado    	Domingo   	Total\n");

		for(int i=0;i<TAM;i++){
			printf("%-10d	",vector[i]);
		}
		printf("\n");

		printf("\nLa produccion los fines de semana es:\n\tSabados:%d\n\tDomingos:%d\n",vector[5],vector[6]);
		printf("El total de la produccion es: %d \n",vector[7]);
}
