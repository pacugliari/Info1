#include "../headers/clase6.h"

/*
 06.03. Ingresar 5 números sumarlos, validando
que sean menores de 100.Usar un mientras()
 */


void ejercicio6_3(){
	int numero;
	int sumatoria = 0;
	int bool = 1; //TRUE

	printf ("Ingrese los numeros a continuacion \n");
	for (int i=0;i<5;i++){
		while (bool){
			printf ("Ingrese el %d º numero\n",i+1);
			scanf ("%d",&numero);
			if (numero > 100)
				printf ("El numero ingresado debe ser menor a 100 \n");
			else
				bool=0;//FALSE PARA SALIR DEL WHILE
		}
		sumatoria += numero;
		bool=1; //PARA QUE VUELVA A ENTRAR AL WHILE EN LA NUEVA ITERACION DEL FOR

	}
	printf ("La sumatoria de los numeros ingresados es: %d\n",sumatoria);
}
