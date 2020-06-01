#include "../headers/clase5.h"

/*
05.07 - Una empresa de venta de zapatillas nos pide realizar un programa que les permita:
a. Ingresar el número de artículo (tipo de zapatilla) y stock inicial de cada uno de los 20 tipos de zapatillas (na, sti).
Por cada una de estas fichas se ingresan las ventas, leyendo el número de artículo y cada una de las ventas
asociadas a ese tipo de zapatilla (nar, v). No se conoce la cantidad de ventas que hubo por cada artículo
b. Calcular:
i. Stock restante de cada tipo de zapatilla
ii. Promedio de ventas de cada tipo de zapatilla
iii. Promedio de ventas total
iv. Artículo más vendido
 */

#define TIPOS_ZAP 3

typedef enum {
	true=1,
	false=0,
	error=-1
}booleano;

typedef struct{
	int numArticulo;
	unsigned stock;
	unsigned cantVentas;
	float ventas;
}zapatilla;

void agregarVenta(int articulo,zapatilla zapatillas[TIPOS_ZAP],float venta){
	for(int i=0;i<TIPOS_ZAP;i++){
		if (zapatillas[i].numArticulo == articulo){
			if (zapatillas[i].stock > 0){
				zapatillas[i].cantVentas++;
				zapatillas[i].ventas+=venta;
			}else
				printf("Se vendieron todas las zapatillas de este producto \n");
		}
	}
}

void stock(zapatilla zapatillas[TIPOS_ZAP]){
	printf ("Stock de zapatillas: \n");
	for(int i=0;i<TIPOS_ZAP;i++){
		printf ("Articulo: %d Stock: %u \n",zapatillas[i].numArticulo,zapatillas[i].stock-zapatillas[i].cantVentas);
	}
}

void promedioVentasTipo(zapatilla zapatillas[TIPOS_ZAP]){
	float promedio=0;
	for(int i=0;i<TIPOS_ZAP;i++){
		if (zapatillas[i].cantVentas > 0)
			promedio = zapatillas[i].ventas/zapatillas[i].cantVentas;
		else
			promedio = 0;
		printf ("Articulo: %d Promedio de ventas: %0.2f \n",zapatillas[i].numArticulo,promedio);
	}
}

void promedioVentasTotal(zapatilla zapatillas[TIPOS_ZAP]){
	float ventasTotal=0;
	unsigned cantTotal=0;
	for(int i=0;i<TIPOS_ZAP;i++){
		ventasTotal += zapatillas[i].ventas;
		cantTotal += zapatillas[i].cantVentas;
	}

	printf("Promedio de ventas total: %0.2f \n",ventasTotal/cantTotal);
}

void masVendido(zapatilla zapatillas[TIPOS_ZAP]){
	zapatilla zapatillaMasVendida={0,0,0,0};
	booleano ventaRepetida = false;
	int posicionMasVendido=0;
	for(int i=0;i<TIPOS_ZAP;i++){
		if (zapatillas[i].cantVentas > zapatillaMasVendida.cantVentas){
			zapatillaMasVendida = zapatillas[i];
			posicionMasVendido=i;
		}
	}

	//MISMA CANTIDAD DE VENTAS
	for(int i=0;i<TIPOS_ZAP;i++){
		if (zapatillas[i].cantVentas == zapatillaMasVendida.cantVentas && posicionMasVendido != i)
				ventaRepetida=true;
	}

	if (ventaRepetida == true){
		printf ("No hay una zapatilla mas vendida \n");
	}else{
		printf ("La zapatilla mas vendida es: %d con: %u ventas \n",zapatillaMasVendida.numArticulo,zapatillaMasVendida.cantVentas);
	}

}


void ejercicio5_7(){
	zapatilla zapatillas[TIPOS_ZAP];
	int articuloVenta;
	int respuesta;
	float venta=0;

	for  (int i=0;i<TIPOS_ZAP;i++){
		printf("Ingrese el numero de articulo y el stock del articulo \n");
		scanf ("%d %u",&(zapatillas[i].numArticulo),&(zapatillas[i].stock));
		zapatillas[i].cantVentas=0;
		zapatillas[i].ventas=0;
	}


	do{
		printf("Ingrese una venta con el numero de articulo y el valor de la venta\n");
		scanf("%d %f",&articuloVenta,&venta);
		agregarVenta(articuloVenta,zapatillas,venta);
		do{
			printf ("Desea agregar otra venta ? 1) SI 2) NO \n");
			scanf ("%d",&respuesta);
			switch(respuesta){
			case 1:
				respuesta=true;
			break;
			case 2:
				respuesta=false;
			break;
			default:
				printf("Respuesta erronea \n");
				respuesta=error;
			}
		}while (respuesta==error);

	}while (respuesta==true);

	stock(zapatillas);
	promedioVentasTipo(zapatillas);
	promedioVentasTotal(zapatillas);
	masVendido(zapatillas);
}

