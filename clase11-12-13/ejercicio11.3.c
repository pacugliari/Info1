#include "../headers/clase11.h"
/*
Ejercicio:
11.03 - Una empresa de venta de zapatillas nos pide realizar un programa que les permita:
a. Ingresar el número de artículo (tipo de zapatilla) y stock inicial de cada uno de los 20 tipos de zapatillas (na, sti). Por cada una de estas fichas se ingresan las ventas, leyendo el número de artículo y cada una de las ventas asociadas a ese tipo de zapatilla (nar, v). No se conoce la cantidad de ventas que hubo por cada artículo
b. Calcular:
i.Stock restante de cada tipo de zapatilla ordenado de mayor a menor
ii.Promedio de ventas de cada tipo de zapatilla
iii.Promedio de ventas total
iv.Artículo más vendido
(ver ejercicio 05.07, resolver por vectores)
 */

#define ZAP 3

void ejercicio11_3(){
	int articulo[ZAP];
	int stock[ZAP];
	float ventas[ZAP];
	int numeroArticulo;
	int seguir;
	int auxArticulo,auxStock,auxVentas,auxCant;
	float venta;
	int cantVentas[ZAP];
	float sumaVentas = 0;
	int sumaCantidad = 0;

	for (int i=0;i<ZAP;i++){
		printf("Ingrese el numero de articulo \n");
		scanf(" %d",&(articulo[i]));
		printf ("Ingrese el stock inicial del articulo: \n");
		scanf (" %d",&(stock[i]));
		ventas[i] = 0; //INICIALIZO EL VECTOR DE VENTAS
		cantVentas[i] =0;
	}

	printf ("Ingrese las ventas: \n");
	do{
		printf ("Ingrese el articulo vendido \n");
		scanf  (" %d",&numeroArticulo);

		for (int i=0;i<ZAP;i++){
			if (numeroArticulo == articulo[i]){//BUSCO EL ARTICULO
				if (stock[i] > 0){//ME ASEGURO QUE HAYA STOCK
					stock[i]--;
					printf ("Ingrese el valor de la venta \n");
					scanf (" %f",&venta);
					ventas[i] += venta;
					cantVentas[i]++;
				}
			}
		}

		printf ("Desea seguir agregando ventas?\n1)PARA SEGUIR\nOTRA TECLA PARA SALIR\n");
		scanf (" %d",&seguir);
	}while (seguir == 1);

	//ORDENO VECTOR DE STOCK
	for(int i=0;i<ZAP-1;i++){
		for(int j=i+1;j<ZAP;j++){
			if (stock[i] < stock[j]){
				auxStock = stock[i];
				auxVentas = ventas[i];
				auxArticulo = articulo[i];
				auxCant = cantVentas[i];

				stock[i] = stock[j];
				ventas[i] = ventas[j];
				articulo[i] = articulo[j];
				cantVentas[i] = cantVentas[j];

				stock[j] = auxStock;
				ventas[j] = auxVentas;
				articulo[j] = auxArticulo;
				cantVentas[j] = auxCant;
			}
		}
	}

	printf ("Stock restante: \n");
	for(int i=0;i<ZAP;i++){
		printf("Numero de articulo: %d Stock: %d \n",articulo[i],stock[i]);

	}

	float promedio;
	printf ("Promedio ventas por tipo de zapatilla: \n");
	for(int i=0;i<ZAP;i++){
		promedio = 0;
		if (cantVentas[i] > 0){
			promedio = ventas[i]/cantVentas[i];
		}
		printf("Numero de articulo: %d promedio: %f \n",articulo[i],promedio);
		sumaVentas += ventas[i];
		sumaCantidad += cantVentas[i];

	}

	promedio = 0;
	if (sumaCantidad > 0){
		promedio = sumaVentas/sumaCantidad;
	}
	printf ("Promedio de ventas en general: %f \n",promedio);

	int masVendido = 0;
	for(int i=0;i<ZAP;i++){
		if (cantVentas[masVendido] < cantVentas[i]){
			masVendido = i;
		}

	}
	printf ("El articulo mas vendido es: %d con %d ventas \n",articulo[masVendido],cantVentas[masVendido]);

}
