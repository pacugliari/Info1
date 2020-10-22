/*
Ejercicio:
18.02: Se ingresan fichas conteniendo
el numero de alumno (1 a 20), el
número de materia (1 a 5) y la nota de
ese alumno en esa materia.
Se pide imprimir un cuadro
conteniendo el número de alumno, el
número de materia, la nota de cada
alumno en cada materia y el promedio
de cada alumno ordenado de mayor a
menor por el promedio de notas por
alumno.

			materia1		materia2 		materia3 		materia4 		materia5	promedio
																						(suma notas / cant mat)
alumno1
alumno2
alumno3
..
alumnoN
 */

#include "../headers/clase18.h"

#define ALUM 20
#define MAT 5


void ejercicio18_2(){
	float matriz [ALUM][MAT+1];
	int alumno;
	int materia;
	int nota;
	int respuesta;

	//INICIALIZO DONDE VOY A HACER LA SUMA DE LAS MATERIAS

	for(int i=0;i<ALUM;i++){
		for(int j=0;j<MAT+1;j++){
			matriz[i][j]=0;
		}
	}

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
		matriz[alumno][materia]=nota;
		matriz[alumno][5]+=nota;

		printf("Desea seguir cargando alumnos ? 1)SI  2)NO \n");
		scanf("%d",&respuesta);
	}while(respuesta == 1);

	//CALCULO EL PROMEDIO
	for(int i=0;i<ALUM;i++){
		matriz[i][5] = matriz[i][5]/MAT;
	}

	//HAGO EL ORDENAMIENTO
	int orden[ALUM][2];
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
		printf(" 	 	 Materia 1	Materia 2	Materia 3	Materia 4	Materia 5	Promedio\n");
		for (int i=0;i<ALUM;i++){
			cursor = orden[i][1];
			printf("Alumno %d",cursor+1);
			for(int j=0;j<MAT+1;j++){
				(j==5)?printf(" 	 %0.1f 	",matriz[cursor][j]):printf(" 	 %d 	",(int)matriz[cursor][j]);
			}
			printf("\n");
		}
}

