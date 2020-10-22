/*
Una empresa requiere el siguiente programa,el siguiente menu de
opciones
1) cargar datos
2) modificar stock
3) mostrar los datos ordenados por valor o stock segun
requiera el usuario
4) salir

la informacion de carga es :
numero articulo del 1 a 10 entero
descripcion (cadena)
stock entero
valor (numero flotante positivo)
 */

#define ART 10



#include "../headers/clase19.h"

void ejercicio19_1(){
	float matriz [ART][2];//ALMACENA NUM,STOCK,Y VALOR
	char descripcion [ART][10];
	int respuesta;
	int articulo;
	int stock;
	float valor;
	//PARA ORDENAMIENTO
	float orden[ART][2];
	int auxDato;
	int auxPos;
	int cursor;

	for(int i=0;i<ART;i++){
		matriz[i][0]=matriz[i][1]=0;
		strcpy(descripcion[i],"N/A");
	}

	do{
		printf("***MENU***\n");
		printf("1) Cargar datos \n");
		printf("2) Modificar stock \n");
		printf("3) Mostrar datos ordenados: \n");
		printf("4) Salir \n");
		scanf("%d",&respuesta);
		switch(respuesta){
			case 1:
				do{
					printf("Ingrese el numero de articulo de 1 a 10 \n");
					scanf ("%d",&articulo);
				}while(articulo > 10 || articulo < 1);

				articulo--;
				fflush(stdin);
				printf("Ingrese la descripcion del articulo \n");
				gets(descripcion[articulo]);
				fflush(stdin);

				do{
					printf("Ingrese el stock, valor entero \n");
					scanf ("%d",&stock);
				}while(stock <0);

				matriz[articulo][0]=stock;

				do{
					printf("Ingrese el valor, valor positivo \n");
					scanf ("%f",&valor);
				}while(valor <0);

				matriz[articulo][1]=valor;
			break;
			case 2:
				do{
					printf("Ingrese el numero de articulo de 1 a 10 a modificar \n");
					scanf ("%d",&articulo);
				}while(articulo > 10 || articulo < 1);
				articulo--;

				do{
					printf("Ingrese el nuevo stock, valor entero \n");
					scanf ("%d",&stock);
				}while(stock <0);

				matriz[articulo][0]=stock;
			break;
			case 3:
				printf("1) Ordenar por stock \n");
				printf("2) Ordenar por valor \n");
				do{
					scanf("%d",&respuesta);
				}while(respuesta != 1 && respuesta != 2);

				respuesta--;

				//ALMACENO EN UNA MATRIZ EL PROMEDIO Y EL INDICE ACTUAL
				for(int i=0;i<ART;i++){
					orden[i][0]=matriz[i][respuesta];
					orden[i][1]=i;
				}

				//REALIZO EL ORDENAMIENTO DE LA NUEVA MATRIZ
				for(int i=0;i<ART-1;i++){
					for(int j=i;j<ART;j++){
						if(orden[i][0] < orden[j][0]){
							auxDato = orden[i][0];
							auxPos = orden[i][1];
							orden[i][0] = orden[j][0];
							orden[i][1] = orden[j][1];
							orden[j][0] = auxDato;
							orden[j][1] = auxPos;
						}
					}
				}
				printf("ARTICULO	DESCRIPCION		STOCK		VALOR\n");
				for(int i=0;i<ART;i++){
					cursor = orden[i][1];
					printf("%-d		%-10s		%-d		%0.2f\n",cursor+1,descripcion[cursor],(int)matriz[cursor][0],matriz[cursor][1]);
				}
			break;
		}
	}while(respuesta !=4);



}
