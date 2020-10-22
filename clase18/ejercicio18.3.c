/*
Ejercicio propuesto:
18.03: Se ingresan fichas conteniendo el numero de alumno (1 a 20), el número de materia (1 a 5) y una de las notas
de ese alumno en esa materia. Cada alumno puede tener más de una nota por materia (por lo menos tiene una nota).
Se pide imprimir un cuadro conteniendo el número de alumno, el número de materia, el promedio de cada alumno en
cada materia y el promedio general de cada alumno en todas las materias ordenado de mayor a menor por el
promedio de notas por alumno.
( ver resolución del ejercicio 15.05 donde se agrega columna para número de alumno, fila para número de materia y el ordenamiento
respecto de los promedios)

idea : misma resolucion que el ejercicio 18.2 pero con el agregado de promedio por nota

 */

#include "../headers/clase18.h"

#define ALUM 20
#define MAT 5

void ejercicio18_3(){
	float matriz [ALUM][MAT+1];// UNA COLUMNA MAS PARA EL PROMEDIO GENERAL
	int alumno;
	int materia;
	int nota;
	int respuesta;
	int contadorNotas[ALUM][MAT];

	//INICIALIZO DONDE VOY A HACER LA SUMA DE LAS MATERIAS

	for(int i=0;i<ALUM;i++){
		for(int j=0;j<MAT+1;j++){
			matriz[i][j]=0;
		}
	}

	for(int i=0;i<ALUM;i++){
		for(int j=0;j<MAT;j++){
			contadorNotas[i][j]=0;
		}
	}

	//INGRESO DATOS
	do{
		do{
			printf("Ingrese el numero de alumno del 1 al 20 \n");
			scanf("%d",&alumno);
		}while(alumno>20 || alumno<1);

		do{
			printf("Ingrese el numero de materia del 1 al 5 \n");
			scanf("%d",&materia);
		}while(materia>5 || materia< 1);

		do{
			printf("Ingrese la nota del 1 al 10 \n");
			scanf("%d",&nota);
		}while(nota > 10 || nota < 1);

		alumno--;
		materia--;
		matriz[alumno][materia]+=nota;
		matriz[alumno][5]+=nota;
		contadorNotas[alumno][materia]++;

		printf("Desea seguir cargando alumnos ? 1)SI  2)NO \n");
		scanf("%d",&respuesta);
	}while(respuesta == 1);

	//CALCULO EL PROMEDIO
	for(int i=0;i<ALUM;i++){
		matriz[i][5] = matriz[i][5]/MAT;
		for(int j=0;j<MAT;j++){
			if(contadorNotas[i][j] != 0)
				matriz[i][j] = matriz[i][j]/contadorNotas[i][j];
		}
	}




	//HAGO EL ORDENAMIENTO
	float orden[ALUM][2];
	int auxPro;
	int auxPos;

	//ALMACENO EN UNA MATRIZ EL PROMEDIO Y EL INDICE ACTUAL
	for(int i=0;i<ALUM;i++){
		orden[i][0]=matriz[i][5];
		orden[i][1]=i;
	}

	//REALIZO EL ORDENAMIENTO DE LA NUEVA MATRIZ
	for(int i=0;i<ALUM-1;i++){
		for(int j=i;j<ALUM;j++){
			if(orden[i][0] < orden[j][0]){
				auxPro = orden[i][0];
				auxPos = orden[i][1];
				orden[i][0] = orden[j][0];
				orden[i][1] = orden[j][1];
				orden[j][0] = auxPro;
				orden[j][1] = auxPos;
			}
		}
	}


	//LISTADO UTILIZANDO LA MATRIZ NUEVA COMO CURSOR PARA VER LOS PROMEDIOS ORDENADOS
		int cursor;
		printf("	 	 Promedio	Promedio	Promedio	Promedio	Promedio\n");
		printf("	 	 Materia 1	Materia 2	Materia 3	Materia 4	Materia 5	Prom.Total\n");
		for (int i=0;i<ALUM;i++){
			cursor = orden[i][1];
			printf("Alumno %d",cursor+1);
			for(int j=0;j<MAT+1;j++){
				printf(" 	 %0.1f 	",matriz[cursor][j]);
			}
			printf("\n");
		}
}


