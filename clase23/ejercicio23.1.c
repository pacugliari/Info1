/*
 * ejercicio23.1.c
 *
 *  Created on: 26 oct. 2020
 *      Author: PACugliari
 */

#include "../headers/clase23.h"

void ejercicio23_1(){
	char palabra1[80];
	char palabra2[30];
	strcpy(palabra1,"BUENAS NOCHES");
	strcpy(palabra2,"ALUMNOS");
	printf("\nLa palabra1 tiene una longitud de %2d y\ncontiene<%s>",(int)strlen(palabra1), palabra1);
	strcat(palabra1, " "); /*Le sumamos un espacio a las estructuras de datos palabra1*/
	printf("\nLa palabra1 tiene una longitud de %2d y\ncontiene<%s>", (int)strlen(palabra1), palabra1);
	strcat(palabra1, palabra2); /*Le sumamos a palabra1 lo que contenga palabra2*/
	printf("\nLa palabra1 tiene una longitud de %2d y\ncontiene<%s>",(int) strlen(palabra1), palabra1);
	strcat(palabra1, " DE INGENIERIA");/*Le sumamos a palabra1 la cadena de caracteres
	DE INGENIERIA"*/
	printf("\nLa palabra1 tiene una longitud de %2d y\ncontiene<%s>", (int)strlen(palabra1), palabra1);
	printf("\n");
	system("pause");
}
