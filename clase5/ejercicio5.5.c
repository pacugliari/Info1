#include "../headers/clase5.h"

/*
Ejercicio:
05.05 –Se ingresan fichas con
valores “a” y “b”, imprimir en
cuántas el valor de “a” es mayor
que “b” y además se cumple que
“b” es múltiplo de 3
 */
enum {
	true=1,
	false=0,
	error=2
};

void ejercicio5_5(){
	int a;
	int b;
	int aMayorB=0;
	int bMultiploTres=0;
	int respuesta;


	do{
		printf ("Ingrese los valores de A y B \n");
		scanf("%d %d",&a,&b);
		if (a > b){
			aMayorB++;
		}
		if (!(b % 3)){
			bMultiploTres++;
		}
		do{
			printf ("Desea seguir ingresando valores ? 1) SI 2) NO \n");
			scanf ("%d",&respuesta);
			switch (respuesta){
			case 1:
				respuesta=true;
			break;
			case 2:
				respuesta=false;
			break;
			default:
				printf ("Respuesta erronea \n");
				respuesta=error;
			break;
			}
		}while (respuesta == error);
	}while(respuesta==true);

	printf ("El valor de A es mayor a B : %d veces \n",aMayorB);
	printf ("El valor de B es multiplo de 3 : %d veces \n",bMultiploTres);
}
