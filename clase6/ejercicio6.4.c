#include "../headers/clase6.h"

/*
06.04. Ingresar 5 números sumarlos,
validando que sean menores de 100 usar un
para.
 */


void ejercicio6_4(){
	int numero;
	int sumatoria = 0;
	int repetir = 1;

	printf ("Ingrese los numeros a continuacion \n");
	for (int i=0;i<5;i++){
		for (int j=0;j<repetir;j++){
			printf ("Ingrese el %d º numero\n",i+1);
			scanf ("%d",&numero);
			if (numero > 100){
				printf ("El numero ingresado debe ser menor a 100 \n");
				repetir++;
			}
		}
		repetir=1;
		sumatoria += numero;
	}
	printf ("La sumatoria de los numeros ingresados es: %d\n",sumatoria);
}
