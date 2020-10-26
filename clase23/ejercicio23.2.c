
 /*E19. Se leen dos cadenas de menos de 30 letras, se
debe indicar si están ordenadas
 */

#include "../headers/clase23.h"

void ejercicio23_2(){
	char palabra1 [30];
	char palabra2 [30];
	int comparacion;

	printf ("Ingrese la palabra 1 \n");
	fflush(stdin);
	gets(palabra1);
	printf ("Ingrese la palabra 2 \n");
	fflush (stdin);
	gets(palabra2);

	comparacion = strcmp (palabra1,palabra2);

	if (comparacion < 0){
		printf("Ordenado \n");
	}else if (comparacion == 0){
		printf("Palabras iguales \n");
	}else
		printf("Desordenado \n");
}
