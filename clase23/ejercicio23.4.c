/*
 Se ingresan 4 cadenas, hacer un
menúde
opciones que muestre:
a-todas las cadena en el orden que se ingresaron,
b-juntas dentro de una sola cadena,
c-en orden
alfabético,
d-la longitud de cada una y
e-salir con un anuncio de fin de programa
 */

#include "../headers/clase23.h"

#define CAD 4
#define TAM 30

void ejercicio23_4(){
	char cadenas [CAD][20];
	char unir [(CAD+1)*TAM];
	char respuesta;
	int tam;
	char orden [2][CAD][TAM];
	char auxDato [TAM];
	char auxPos[TAM];
	int cursor=0;


	for(int i=0;i<CAD;i++){
		do{
			printf("Ingrese la %d° cadena tamanio maximo %d \n",i+1,TAM-10);
			fflush(stdin);
			gets(cadenas[i]);
			fflush(stdin);
			tam = (int)strlen (cadenas[i]);
		}while (tam > TAM-10);

	}

	do{
		printf("a) todas las cadena en el orden que se ingresaron \n");
		printf("b) juntas dentro de una sola cadena \n");
		printf("c) en orden alfabético \n");
		printf("d) la longitud de cada una \n");
		printf("e) salir \n");
		fflush(stdin);
		scanf ("%c",&respuesta);
		fflush(stdin);
		respuesta = tolower(respuesta);
		switch (respuesta){
		case 'a':
			for(int i=0;i<CAD;i++){
				printf("%d° Cadena: %s \n",i+1,cadenas[i]);
			}
		break;
		case 'b':
			strcpy(unir,"");
			strcat(unir,cadenas[0]);
			strcat(unir,"-");
			strcat(unir,cadenas[1]);
			strcat(unir,"-");
			strcat(unir,cadenas[2]);
			strcat(unir,"-");
			strcat(unir,cadenas[3]);
			printf("Union: %s \n",unir);
		break;
		case 'c':
			//ALMACENO EN UNA MATRIZ AUX PARA NO PERDER EL ORDEN DE LA CARGA INICIAL
			for(int i=0;i<CAD;i++){
				strcpy(orden[0][i],cadenas[i]);//POSICION 0 EL DATO
				itoa(i,orden[1][i],10);//POSICION 1 LA POSICION EN FORMATO STRING
			}

			//REALIZO EL ORDENAMIENTO DE LA NUEVA MATRIZ
			for(int i=0;i<CAD-1;i++){
				for(int j=i;j<CAD;j++){
					if(strcmp(orden[0][i],orden[0][j]) > 0){
						strcpy(auxDato,orden[0][i]);
						strcpy(auxPos,orden[1][i]);
						strncpy(orden[0][i],orden[0][j],TAM);
						strncpy(orden[1][i],orden[1][j],TAM);
						strcpy(orden[0][j],auxDato);
						strcpy(orden[1][j],auxPos);
					}
				}
			}

			for(int i=0;i<CAD;i++){
				cursor = atoi(orden[1][i]);
				printf("%d° Cadena: %s \n",cursor+1,cadenas[cursor]);
			}
		break;
		case 'd':
			for(int i=0;i<CAD;i++){
				printf("\nTamaño de %d° Cadena es: %d \n",i+1,(int)strlen(cadenas[i]));
			}
		break;
		case 'e':
			printf("Saliendo... \n");
		break;
		}
	}while(respuesta != 'e');
}


