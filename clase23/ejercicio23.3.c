/*E20.Se debe hacer un programa que mediante un
menú de opciones, nos permita realizar las siguientes
acciones:
a)Ingresar la clave y el nombre y apellido de los cinco
mejores alumnos.
b)Mostrar los en el orden que fueron ingresados.
c)Fin del programa.
NOTA:
Las opciones del menú deben ser en minúsculas.
La clave y el nombre y apellido,debenservalidados:La
clave debe tener 4 dígitos numéricos o decaracteres,
y
el nombre y apellido,nomas30caracteres.*/

#include "../headers/clase23.h"

#define ALU 5

void ejercicio23_3(){
	char clave [ALU][10];
	char datos [ALU][50];
	char respuesta;
	int tam;
	int cargados = 0;
	do{
		printf ("a) Cargar datos \n");
		printf("b) Mostrar datos \n");
		printf ("c) Salir \n");
		scanf("%c",&respuesta);
		respuesta = tolower(respuesta);
		switch(respuesta){
		case 'a':
			if (cargados < ALU){
				do{
					printf("Ingrese la clave del alumno, 4 digitos numericos o caracteres \n");
					fflush(stdin);
					gets(clave[cargados]);
					fflush(stdin);
					tam = (int)strlen (clave[cargados]);
				}while(tam > 4);

				do{
					printf("Ingrese el nombre y apellido del alumno , no mayor a 30 caracteres \n");
					fflush(stdin);
					gets(datos[cargados]);
					fflush(stdin);
					tam = (int)strlen (datos[cargados]);
				}while(tam > 30);

				cargados++;
			}else{
				printf ("Se alcanzo el limite de alumnos cargados que es %d \n",ALU);
			}

		break;
		case 'b':
			for(int i=0;i<cargados;i++){
				printf("Clave: %s Nombre y apellido: %s \n",clave[i],datos[i]);
			}
		break;

		}
	}while(respuesta != 'c');
}


