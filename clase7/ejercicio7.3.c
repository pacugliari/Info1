/*
	7.3.Hacer un algoritmo que calcule el total apagar por la compra de camisas.Si se
compran tres camisas o más se aplica un descuento del 20% sobre el total de la compra
y si son menos de tres camisas un descuento del 10%.
 */


#include "../headers/clase7.h"

void ejercicio7_3(){

	int cantCamisas;
	int precio = 10;
	float total;

	printf("Ingrese el numero camisas a comprar \n");
	scanf ("%d",&cantCamisas);

	if (cantCamisas >= 3){
		total = (precio*cantCamisas)*0.8;
	}else
		total = (precio*cantCamisas)*0.9;

	printf("Precio total %0.2f \n",total);
}
