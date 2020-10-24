/*
 14.04. Una Competencia de Tiro donde compiten 8 participantes
Las reglas de esta competencia es la siguiente:.Cada participante tiene 3 tiros totales,
La primera ronda el participante realiza un tiro sumando un puntaje de 0 a 5.
Al final de cada ronda se mostrará el numero de participante que ganó la ronda y quien
está primero en la competencia en ese momento.
Al finalizar mostrar fue el ganador el promedio de puntaje de cada participante,
 */

#include "../headers/clase14.h"

#define PAR 3
#define RONDA 3

void ejercicio14_4(){
	int vector[PAR];
	int puntaje;
	int puntajeMayor;
	int posMayor=0;
	float promedio;
	float proMayor;
	int posProMayor;
	int contadorEmpate=0;

	for(int i=0;i<PAR;i++){
		vector[i]=0;
	}

	for(int i=0;i<RONDA;i++){
		contadorEmpate=0;
		printf("***%d° RONDA***\n",i+1);
		puntajeMayor = 0;
		for(int j=0;j<PAR;j++){
			do{
				printf("Ingrese el puntaje del parcipante %d° del 1 a 5 \n",j+1);
				scanf("%d",&puntaje);

			}while (puntaje < 1 || puntaje > 5);
			if ( puntajeMayor < puntaje){
				puntajeMayor = puntaje;
				posMayor = j;
				contadorEmpate=0;
			}else if (puntajeMayor == puntaje)
				contadorEmpate++;
			vector[j]+=puntaje;

		}
		if (!contadorEmpate)
			printf ("El ganador de la ronda %d es el participante %d° con %d de puntaje \n",i+1,posMayor+1,puntajeMayor);
		else
			printf("En la ronda %d no hay ganador, fue empate \n",i+1);
		//CALCULO PROMEDIO C/ PARTICIPANTE Y BUSCO EL MAYOR
		proMayor=vector[0]/(float)(i+1);
		posProMayor=0;
		contadorEmpate=0;

		for(int j=0;j<PAR;j++){
			promedio = vector[j]/(float)(i+1);
			if (proMayor < promedio){
				proMayor = promedio;
				posProMayor= j;
				contadorEmpate=0;
			}else if (promedio == proMayor){
				contadorEmpate++;
			}
		}

		if (!contadorEmpate)
			if (i<RONDA-1)
					printf ("El primero en la competencia es el participante %d° \n",posProMayor+1);
			else
					printf ("El ganador de la competencia es el participante %d° \n",posProMayor+1);
		else
			printf ("Hay empate \n");
	}

	for(int j=0;j<PAR;j++){
		promedio = vector[j]/(float)RONDA;
		printf("Participante %d promedio puntaje: %0.2f\n",j+1,promedio);
	}
}


