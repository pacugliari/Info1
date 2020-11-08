/*
 26.3-Utilizando struct realizar una agenda.
 1. Se cargaran los siguientes datos (en un arreglo del
 100 elementos): Nombre, Apellido, Direccion fecha, todas cadena
 de char y codigo entero

 Luego de la carga se podra consultar la agenda
 colocando una parte del apellido y mostrara todos los datos
 que concuerden con parte del apellido
 */
#include "../headers/clase25.h"

typedef struct{
	char nombre[60];
	char apellido[30];
	char direccion[60];
	char fecha[11]; //formato 7/11/2020
	int codigo;
}datos_t;

#define CANT 3//REEMPLAZAR POR 100

void ejercicio25_3(){
	datos_t vector[CANT];
	char respuesta;
	char busqueda[30];

	for(int i=0;i<CANT;i++){
		printf("Ingrese los datos de la  %d° persona \n",i+1);
		printf("Ingrese el nombre \n");
		gets(vector[i].nombre);
		fflush(stdin);
		printf("Ingrese el apellido \n");
		gets(vector[i].apellido);
		fflush(stdin);
		printf("Ingrese la direccion \n");
		gets(vector[i].direccion);
		fflush(stdin);
		printf("Ingrese la fecha \n");
		gets(vector[i].fecha);
		fflush(stdin);
		printf("Ingrese el codigo\n");
		scanf("%d",&vector[i].codigo);
		fflush(stdin);
	}

	do{
		printf("1) Buscar en la agenda \n");
		printf("S) Salir \n");
		scanf("%c",&respuesta);
		fflush(stdin);
		switch(respuesta){
			case '1':
				do{
					printf("Ingrese la palabra a buscar \n");
					gets(busqueda);
					fflush(stdin);
					printf("NOMBRE\t\tAPELLIDO\t\tCODIGO\t\tFECHA\t\tDIRECCION\n");
					for(int i=0;i<CANT;i++){
						if(0==strncmp(vector[i].apellido,busqueda,strlen(busqueda))){
							printf("%-15s %-15s         %-6d          %-11s     %-30s\n",vector[i].nombre,vector[i].apellido,
									vector[i].codigo,vector[i].fecha,vector[i].direccion);
						}
					}
					printf("\n1) Seguir \n");
					printf("S) Salir \n");
					scanf("%c",&respuesta);
					fflush(stdin);
				}while(respuesta!='S' && respuesta!='s');
			break;
		}
	}while(respuesta!='S' && respuesta!='s');

}
