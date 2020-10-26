/*
 Una empresa tiene 3 fabricas, en cada una hay 3 sectores, cada uno de
 estos producen 4 productos distintos

 se pide realizar el siguiente menu de opciones

 1) Ingreso de stock: se agrega al stock de un producto ingresado los
 siguientes datos
 	 - nro fabrica
 	 -nro sector
 	 -nro producto
 	 -stock a agregar

 2) ingresando el nro de fabrica mostrar por pantalla el siguiente
 listado ordenado de menor a mayor por total de producto

 fabrica 9

 	 	 	 sector 1	sector 2	sector 3	total
 prod 1
 prod 2
 prod 3
 prod 4
 total
 */

#define FAB 3
#define SEC 3
#define PRO 4

#include "../headers/clase22.h"

void ejercicio22_1(){
	int fab;
	int sec;
	int pro;
	int stock;
	int respuesta;
	int matriz [FAB][PRO+1][SEC+1];//+1 PARA TENER EL TOTAL
	int orden [PRO][2];
	int auxDato;
	int auxPos;
	int cursor;

	//INICIALIZO
	for(int i=0;i<FAB;i++){
		for(int j=0;j<PRO+1;j++){
			for ( int k=0;k<SEC+1;k++){
				matriz[i][j][k] = 0;
			}
		}
	}

	do{
		printf("1) Ingresar stock \n");
		printf("2) Mostrar listado \n");
		printf("3) Salir\n");
		scanf("%d",&respuesta);
		switch (respuesta){
			case 1:
				do{
					printf("Ingrese el numero de fabrica del 1 a %d \n",FAB);
					scanf("%d",&fab);
				}while(fab > FAB || fab < 1);

				do{
					printf("Ingrese el numero de sector del 1 a %d \n",SEC);
					scanf("%d",&sec);
				}while (sec > SEC || sec < 1);

				do{
					printf("Ingrese el producto del 1 a %d \n",PRO);
					scanf("%d",&pro);
				}while (pro > PRO || pro < 1);

				printf("Ingrese el stock \n");
				scanf("%d",&stock);

				if ( matriz[fab-1][pro-1][sec-1] > 0){
					matriz[fab-1][PRO][sec-1]-=matriz[fab-1][pro-1][sec-1];
					matriz[fab-1][pro-1][SEC]-=matriz[fab-1][pro-1][sec-1];
				}
				matriz[fab-1][pro-1][sec-1]=stock;
				matriz[fab-1][PRO][sec-1]+=stock;
				matriz[fab-1][pro-1][SEC]+=stock;
			break;
			case 2:
				do{
					printf("Ingrese el numero de fabrica del 1 a %d \n",FAB);
					scanf("%d",&fab);
				}while(fab > FAB || fab < 1);

				//ALMACENO EN UNA MATRIZ EL PROMEDIO Y EL INDICE ACTUAL
				for(int i=0;i<PRO;i++){
					orden[i][0]=matriz[fab-1][i][SEC];
					orden[i][1]=i;
				}

				//REALIZO EL ORDENAMIENTO DE LA NUEVA MATRIZ
				for(int i=0;i<PRO-1;i++){
					for(int j=i;j<PRO;j++){
						if(orden[i][0] > orden[j][0]){
							auxDato = orden[i][0];
							auxPos = orden[i][1];
							orden[i][0] = orden[j][0];
							orden[i][1] = orden[j][1];
							orden[j][0] = auxDato;
							orden[j][1] = auxPos;
						}
					}
				}

				printf ("FABRICA %d \n",fab);
				for (int x=0;x<SEC+1;x++)
					(x==SEC)?printf ("		TOTAL"):printf ("		SECTOR %d",x+1);
				printf("\n");
				for(int j=0;j<PRO+1;j++){
					if (j < PRO){
						cursor = orden[j][1];
						printf ("PRODUCTO %d	",cursor+1);
					}else{
						printf ("TOTAL		");
					}
					for ( int k=0;k<SEC+1;k++){
						if (k == SEC && j == PRO)
							printf ("-		");
						else if (j==PRO){
							printf ("%-8d		",matriz[fab-1][PRO][k]);
						}else
							printf ("%-8d		",matriz[fab-1][cursor][k]);
					}
					printf("\n");
				}
				printf("\n");

			break;
			case 4:
				for(int i=0;i<FAB;i++){
					printf ("FABRICA %d \n",i+1);
					for (int x=0;x<SEC+1;x++)
						(x==SEC)?printf ("		TOTAL"):printf ("		SECTOR %d",x+1);
					printf("\n");
					for(int j=0;j<PRO+1;j++){
							(j==PRO)?printf ("TOTAL		"):printf ("PRODUCTO %d	",j+1);
						for ( int k=0;k<SEC+1;k++){

							printf ("%-8d		",matriz[i][j][k]);
						}
						printf("\n");
					}
					printf("\n");
				}
			break;
		}
	}while(respuesta != 3);
}
