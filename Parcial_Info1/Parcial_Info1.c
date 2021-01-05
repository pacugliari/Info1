/*

 */

#include <stdio.h>
#include <stdlib.h>

#define CANT 1000


int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);//AGREGADO PARA EVITAR BUG CONSOLA ECLIPSE

	int Nc [CANT];//1XXX DE 1000 A 1999
	char nombre [CANT][30];
	float vac[CANT];
	float cp;
	float sp[CANT];
	int indice[CANT];
	char respuesta;
	int cliente;
	int contador=0;//CUENTA LOS CLIENTES CARGADOS
	int i,j;
	int encontrado = 0;//PARA SABER SI EL CLIENTE ESTA DADO DE ALTA
	int posicion; // POSICION EN EL VECTOR DEL CLIENTE
	int aux;

	for(i=0;i<CANT;i++){
		indice[i] = i;
	}


	do{
		printf("1) Ingresar datos \n");
		printf("2) Mostrar datos \n");
		printf("S) Salir \n");
		scanf("%c",&respuesta);
		fflush(stdin);
		switch(respuesta){
			case '1':
				encontrado =0;
				do{
					printf("Ingrese el numero de cliente (1000...1999)\n");
					scanf("%d",&cliente);
					fflush(stdin);
				}while(cliente >1999 || cliente < 1000);

				//BUSCO SI YA EXISTE EL CLIENTE
				for(i=0;i<CANT;i++){
					if(Nc[i]==cliente){//CLIENTE ENCOTNRADO, YA ESTA DADO DE ALTA
						encontrado = 1;
						posicion = i;
						break;
					}
				}
				if (!encontrado){//SI NO ESTA EL CLIENTE LO DOY DE ALTA
					Nc[contador] = cliente;
					printf("Ingrese el nombre de cliente \n");
				    gets(nombre[contador]);
				    fflush(stdin);

				    printf("Ingrese el valor del auto comprado \n");
				    scanf("%f",&vac[contador]);
				    fflush(stdin);

				    do{
					    printf("Ingrese el saldo pendiente \n");
					    scanf("%f",&sp[contador]);
					    fflush(stdin);
				    }while(sp[contador] > vac[contador]);

				    do{
				    	printf("Ingrese la cuota a pagar (debe ser mayor a cero y menor al saldo pendiente) \n");
				    	scanf("%f",&cp);
				    	fflush(stdin);
				    }while(cp < 0 || cp > sp[contador]);

				    sp[contador]-=cp; // RESTO EL VALOR DE LA CUOTA PAGADA
					contador++;

				}else{
					//EN CASO QUE EL CLIENTE YA ESTA DADO DE ALTO, SOLO SE CARGA EL VALOR DE LA CUOTA PARA RESTARLO AL SALDO FALTANTE
				    if(sp[posicion] > 0){
						do{
					    	printf("Ingrese la cuota a pagar (debe ser mayor a cero y menor al saldo pendiente) \n");
					    	scanf("%f",&cp);
					    	fflush(stdin);
					    }while(cp < 0 || cp > sp[posicion]);
					    sp[posicion]-=cp; // RESTO EL VALOR DE LA CUOTA PAGADA
				    }else{
				    	printf("Este cliente ya pago su saldo \n");
				    }
				}
			break;
			case '2':
				//HAGO ORDENAMIENTO
				for(i=0;i<contador-1;i++){
					for(j=i+1;j<contador;j++){
						if(sp[indice[i]] < sp[indice[j]]){
							aux = indice[i];
							indice[i] = indice[j];
							indice[j] = aux;
						}
					}
				}

				//HAGO EL LISTADO
				printf("CLIENTE     	NOMBRE     	VALOR DE AUTO     SALDO\n");
				for(i=0;i<contador;i++){
					printf("%d		%s		%0.2f		  %0.2f \n",Nc[indice[i]],nombre[indice[i]],vac[indice[i]],sp[indice[i]]);
				}
			break;
		}

	}while(respuesta!='s' && respuesta!='S');


	return 0;
}
