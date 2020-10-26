/*
 Hacer un programa para ingresar su nombre,carrera de ingeniería y la edad de los 500
alumnos que cursan primer año en la facultad.
Mostrar todos los datos.Se debe validar
el nombre y la carrera no pueden tener mas de 30 caracteres,y la edad que debe ser
mayor a cero.
 */

#include "../headers/clase23.h"

#define DATOS 1 //REEMPLAZAR POR 500
#define TAM 40
void ejercicio23_5(){
	char matriz [DATOS][3][TAM];//0 nombre y apellido,1 carrera, 2 edad
	char nombre[TAM];
	char carrera[TAM];
	char edad[TAM];
	int edadIngresada;
	int tam;
	int cargados=0;

	for(int i=0;i<DATOS;i++){
		do{
			printf("Ingrese el nombre y apellido del %d° alumno, debe ser menor a %d caracteres en total \n",i+1,TAM-10);
			fflush(stdin);
			gets(nombre);
			fflush(stdin);
			tam = (int)strlen (nombre);
		}while(tam > 30);

		do{
			printf("Ingrese la carrera del %d° alumno, debe ser menor a %d caracteres en total \n",i+1,TAM-10);
			fflush(stdin);
			gets(carrera);
			fflush(stdin);
			tam = (int)strlen (carrera);
		}while(tam > 30);

		do{
			printf("Ingrese la edad del %d° alumno, debe ser mayor a cero \n",i+1);
			scanf("%d",&edadIngresada);
		}while(edadIngresada <= 0);

		itoa(edadIngresada,edad,10);//CONVERTIR INT A CADENA
		strcpy(matriz[i][0],nombre);
		strcpy(matriz[i][1],carrera);
		strcpy(matriz[i][2],edad);
		cargados++;
	}

	for(int i=0;i<cargados;i++){
		printf("Nombre y apellido: %s Carrera: %s Edad: %s \n",matriz[i][0],matriz[i][1],matriz[i][2]);
	}
}

