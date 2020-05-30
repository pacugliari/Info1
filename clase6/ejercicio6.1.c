#include "../headers/clase6.h"

/*

Ejercicio 06.01. para resolver: Ingresar por teclado un valor
correspondiente al día de la semana: 1 para el lunes, 2 para el martes,
etc.
Imprimir en pantalla el día correspondiente por ejemplo si se ingresó
el 1, se imprimirá “Lunes”. Si el valor no corresponde a un día de la
semana imprimir “No es un día de la semana”.
Utilizar selección múltiple. En otro algoritmo realizarlo con selección
simple [si()].



*/

void ejercicio6_1(){
	int dia;
	printf ("Ingresar por teclado un valor correspondiente al día de la semana: 1 para el lunes, 2 para el martes,etc.\n" );
	scanf ("%d",&dia);
	switch (dia){
		case 1:
			printf ("Lunes \n");
		break;
		case 2:
			printf ("Martes \n");
		break;
		case 3:
			printf ("Miercoles \n");
		break;
		case 4:
			printf ("Jueves \n");
		break;
		case 5:
			printf ("Viernes \n");
		break;
		case 6:
			printf ("Sabado \n");
		break;
		case 7:
			printf ("Domingo \n");
		break;
	}

}

void ejercicio6_1_2(){
	int dia;
	printf ("Ingresar por teclado un valor correspondiente al día de la semana: 1 para el lunes, 2 para el martes,etc.\n" );
	scanf ("%d",&dia);

	if (dia == 1){
		printf ("Lunes \n");
	}else if (dia==2){
		printf ("Martes \n");
	}else if (dia==3){
		printf ("Miercoles \n");
	}else if (dia==4){
		printf ("Jueves \n");
	}else if (dia==5){
		printf ("Viernes \n");
	}else if (dia==6){
		printf ("Sabado \n");
	}else if (dia==7){
		printf ("Domingo \n");
	}
}
