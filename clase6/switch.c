#include "../headers/clase6.h"

/*
 Ejemplo: Ingresar la nota de un alumno e informar
Desaprobado si es 1,2 � 3 Aprobado si la nota es 4 y 5
y Muy Bueno si es 6 y 7, Distinguido 8 y 9, Sobresaliente si
es 10.
Si la nota no esta entre 1 y 10 no imprimir nada

 */
void desaprobado(){
	printf ("Desaprobado \n");
}

void aprobado(){
	printf ("Aprobado \n");
}

void muyBueno(){
	printf ("Muy Bueno \n");
}

void distinguido(){
	printf ("Muy Bueno \n");
}

void sobresaliente(){
	printf ("Sobresaliente \n");
}

void ejecutarSwitch(){
	unsigned int nota;
	printf ("Ingresar la nota de un alumno \n");
	scanf ("%d",&nota);

	switch(nota){
		case 1:
			desaprobado();
		break;
		case 2:
			desaprobado();
		break;
		case 3:
			desaprobado();
		break;
		case 4:
			aprobado();
		break;
		case 5:
			aprobado();
		break;
		case 6:
			muyBueno();
		break;
		case 7:
			muyBueno();
		break;
		case 8:
			distinguido();
		break;
		case 9:
			distinguido();
		break;
		case 10:
			sobresaliente();
		break;
	}
}




