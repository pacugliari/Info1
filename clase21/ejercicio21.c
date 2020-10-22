/*
 Ejemplos
● Imprimir en formato hexadecimal, octal y binario de una variable de 8bits
cuyo valor es 124.
● Imprimir en formato hexadecimal, octal y binario de una variable de 16bits
cuyo valor es 25678.
● Obtener los valores negativos de los ejercicios anteriores aplicando el
complemento a 2
● Leer un numero e imprimir si el bit 5 esta en uno
● Leer un numero y colocar en 1 el bit 8 si esta en cero.
● Leer un numero e invertir los bits 1 , 5 y 8.
 */

#include "../headers/clase21.h"

void ejercicio21_1(){
	int numero;

	printf("-----------------------------------------------------\n");
	char valorUno = 124;
	printf("Hexadecimal: 0x%X\nOctal: 0%o\nBinario: 0b",valorUno,valorUno);
	for(int i=7;i>=0;i--){
		(valorUno & (1 << i))?printf("1"):printf("0");
	}
	printf("\n\n");

	int valorDos = 25678;
	printf("Hexadecimal: 0x%X\nOctal: 0%o\nBinario: 0b",valorDos,valorDos);
	for(int i=15;i>=0;i--){
		(valorDos & (1 << i))?printf("1"):printf("0");
	}
	printf("\n\n");
	printf("-----------------------------------------------------\n");
	printf("Aplico complemento A2 \n\n");

	char valorTres = (~124)+1;
	printf("Hexadecimal: 0x%X\nOctal: 0%o\nBinario: 0b",valorTres,valorTres);
	for(int i=7;i>=0;i--){
		(valorTres & (1 << i))?printf("1"):printf("0");
	}
	printf("\n\n");

	int valorCuatro = (~25678)+1;
	printf("Hexadecimal: 0x%X\nOctal: 0%o\nBinario: 0b",valorCuatro,valorCuatro);
	for(int i=15;i>=0;i--){
		(valorCuatro & (1 << i))?printf("1"):printf("0");
	}
	printf("\n\n");

	printf("-----------------------------------------------------\n");

	printf("Ingrese un numero \n");
	scanf("%d",&numero);

	(numero & (1 << 5))?printf("Bit 5 encendido \n"):printf("Bit 5 apagado \n");

	if(!(numero & (1 << 8)))
		numero = numero^(1<<8);

	printf("Numero ingresado con el bit 8 invertido: %d \n",numero);

	numero = numero^(1<<8);
	numero = numero^(1<<5);
	numero = numero^(1<<1);

	printf("Numero ingresado con el bit 8,5,1 invertido: %d \n",numero);



}
