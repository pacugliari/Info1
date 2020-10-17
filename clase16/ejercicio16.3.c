/*
 Una empresa comercializa 5 articulos en 3 fabricas, se debe realizar
 un programa que:
 -permita carga de datos: se registrara el n° de artiuclo , el n° de
 fabrica y cantidad (no se saben la cantidad de cargas)
 - que fabrica realiza mayor cantidad de productos
 - que fabrica realizo menor cantidad de productos
 -imprimir un listado total de stock de cada producto

idea de la matriz

 	 	 	 articulo1		articulo2		articulo3		articulo4		articulo5		total
 fabrica 1
 fabrica 2
 fabrica 3
 total
 */

#include "../headers/clase16.h"

#define FIL 4
#define COL 6

void ejercicio16_3(){
	int matriz[FIL][COL];
	int respuesta;
	int fabrica;
	int articulo;
	int cantidad;
	int fabMax,fabMin;

	for(int i=0;i<FIL;i++){
		for(int j=0;j<COL;j++){
			matriz[i][j]=0;
		}
	}

	do{
		do{
			printf("Ingrese el N° de articulo (1 a 5)\n");
			scanf("%d",&articulo);
		}while(articulo >5 || articulo < 1);

		do{
			printf("Ingrese el N° de fabrica (1 a 3)\n");
			scanf("%d",&fabrica);
		}while(fabrica > 3 || fabrica < 1);

		articulo--;
		fabrica--;

		printf("Ingrese la cantidad\n");
		scanf("%d",&cantidad);

		matriz[fabrica][articulo]+=cantidad;
		matriz[fabrica][5]+=cantidad;
		matriz[3][articulo]+=cantidad;

		printf("Desea seguir ingresando ? 1) SI 0)NO \n");
		scanf("%d",&respuesta);
	}while(respuesta==1);

	fabMax = fabMin = 0;
	for(int i=0;i<FIL-1;i++){
		if (matriz[fabMin][5] > matriz[i][5]){
			fabMin = i;
		}
		if (matriz[fabMax][5] < matriz[i][5]){
			fabMax = i;
		}
	}

//LISTADO
	printf(" 	 	 Articulo 1	Articulo 2	Articulo 3	Articulo 4	Articulo 5	Total\n");
	for(int i=0;i<FIL;i++){
		(i==FIL-1)?printf("Total	"):printf("Fabrica %d",i+1);
		for(int j=0;j<COL;j++){
			printf(" 	 %d 	",matriz[i][j]);
		}
		printf("\n");
	}

	printf("La fabrica con mayor cantidad de productos es %d con %d productos \n",fabMax+1,matriz[fabMax][5]);
	printf("La fabrica con menor cantidad de productos es %d con %d productos \n",fabMin+1,matriz[fabMin][5]);

}


