/*
 Se desea realizar un algoritmo que permita mostrar la clasificacion para
una carrera automovilistica. donde cada competidor dara 3 vueltas de clasificacion
y el mejor tiempo se colocara en primer lugar en la largada.
se pide un menu con las siguientes opciones
-ingresar los datos (10 competidores)
	-numero de auto (validar)
	-nombre del conductor
	-tiempo de cada vuelta clasificatoria
-imprimir las posiciones de largada
-salir (fin de programa)

ademas agregar opcion para mostrar numero y mejor vuelta soliciando
n primeras letras del nombre
-agregar la opcion de cargar datos de forma invididual
-agregar la opcion del listado con la peor vuelta de cada competidor


 */

#include "../headers/clase24.h"

#define COM 10
#define VUELTA 3

void ejercicio24_1(){
	char respuesta;
	int numero[COM];
	char nombre[COM][50];
	float tiempo[COM][2];// en 0 guardo la mejor vuelta y en 2 la peor vuelta
	int cargados=0;
	float mejorTiempo;
	int indice[COM];//ORDENAMIENTO
	int aux;
	char palabra[50];
	int encontrado =0;

	for(int i=0;i<COM;i++){
		indice[i]=i;
		tiempo[i][0] = 0;
		tiempo[i][1] = 0;
	}

	do{
		printf("1) Ingresar los datos \n");
		printf("2) Imprimir las posiciones de largada \n");
		printf("3) Buscar conductor \n");
		printf("4) Modificar datos conductor \n");
		printf("5) Listado de la peor vuelta de los conductores \n");
		printf("S) Salir \n");
		scanf("%c",&respuesta);
		fflush(stdin);
		switch(respuesta){
			case '1':
				do{
					printf("Ingrese el numero de auto, debe ser mayor a cero \n");
					scanf("%d",&numero[cargados]);
					fflush(stdin);
				}while(numero[cargados] <= 0);

				printf("Ingrese el nombre del conductor \n");
				gets(nombre[cargados]);
				fflush(stdin);


				for(int i=0;i<VUELTA;i++){
					do{
						printf("Ingrese el tiempo de la %d° vuelta \n",i+1);
						scanf("%f",&mejorTiempo);
						fflush(stdin);
					}while (mejorTiempo <= 0);
					if (i==0){
						tiempo[cargados][0] = mejorTiempo;
						tiempo[cargados][1] = mejorTiempo;
					}
					if (tiempo[cargados][0] > mejorTiempo){
						tiempo[cargados][0] = mejorTiempo;
					}
					if (tiempo[cargados][1] < mejorTiempo){
						tiempo[cargados][1] = mejorTiempo;
					}
				}

				cargados++;
			break;
			case '2':
				for(int i=0;i<cargados-1;i++){
					for(int j=i;j<cargados;j++){
						if (tiempo[indice[i]][0] > tiempo[indice[j]][0]){
							aux = indice[i];
							indice[i] = indice[j];
							indice[j] = aux;
						}
					}
				}
				printf("POSICION\t\tNUMERO AUTO\t\tNOMBRE\t\t\tTIEMPO\n");
				for(int i=0;i<COM;i++){
					if (tiempo[indice[i]][0] > 0){
						printf("%d\t\t\t%-4d\t\t\t%-15s\t\t%2.2f\n",i+1,numero[indice[i]],nombre[indice[i]],tiempo[indice[i]][0]);
					}
				}
			break;

			case '3':
				printf("Ingrese N letras a buscar \n");
				gets(palabra);
				fflush(stdin);
				encontrado =0 ;
				for(int i=0;i<cargados;i++){
					if (0 == strncmp(nombre[i],palabra,strlen(palabra))){
						encontrado = 1;
						printf("NUMERO\t\tMEJOR TIEMPO\n");
						printf("%-4d\t\t%2.2f\n",numero[i],tiempo[i][0]);
					}
				}
				if (!encontrado)
					printf("Conductor no encontrado \n");
			break;

			case '4':
				encontrado=0;
				printf("Ingrese el numero de conductor \n");
				scanf("%d",&aux);
				fflush(stdin);
				for(int i=0;i<cargados;i++){
					if (aux == numero[i]){
						encontrado = 1;
						printf("Ingrese el nombre del conductor \n");
						gets(nombre[i]);
						fflush(stdin);

						for(int i=0;i<VUELTA;i++){
							do{
								printf("Ingrese el tiempo de la %d° vuelta \n",i+1);
								scanf("%f",&mejorTiempo);
								fflush(stdin);
							}while (mejorTiempo <= 0);
							if (i==0){
								tiempo[i][0] = mejorTiempo;
								tiempo[i][1] = mejorTiempo;
							}
							if (tiempo[i][0] > mejorTiempo){
								tiempo[i][0] = mejorTiempo;
							}
							if (tiempo[i][1] < mejorTiempo){
								tiempo[i][1] = mejorTiempo;
							}
						}
					}
				}
				if (!encontrado)
					printf ("Conductor no encontrado \n");
			break;
			case '5':
				printf("NUMERO AUTO\t\tNOMBRE\t\t\tPEOR TIEMPO\n");
				for(int i=0;i<cargados;i++){
					if (tiempo[i][1] > 0){
						printf("%-4d\t\t\t%-15s\t\t%2.2f\n",numero[i],nombre[i],tiempo[i][1]);
					}
				}
			break;
			case 's':
			case 'S':
				break;

			default:
				printf("Ingrese una opcion valida \n");
			break;
		}
	}while (respuesta != 'S' && respuesta!= 's');
}
