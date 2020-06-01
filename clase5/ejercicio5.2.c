#include "../headers/clase5.h"

/*
Ejercicio:
05.02 - Se ingresan 20 fichas que
contienen los resultados de un
concurso de belleza. Cada una de
ellas contiene el número de
participante, el puntaje en
inteligencia, el puntaje en belleza
y el puntaje en simpatía. Se pide
calcular:
a) el promedio de
puntaje en inteligencia,
b) el
mayor puntaje en belleza y
c)
cuantos participantes tuvieron
más de 8 puntos en simpatía
 */

#define CANT_FICHAS 3

typedef struct{
	unsigned numParticipante;
	unsigned puntInteligencia;
	unsigned puntBelleza;
	unsigned puntSimpatia;
}ficha;

void ejercicio5_2(){
	float sumaInteligencia=0;
	unsigned mayorPuntBelleza =0;
	unsigned contadorSimpatia=0;
	ficha fichaIngresada = {0,0,0,0};

	for (int i=0;i<CANT_FICHAS;i++){
		printf("Ingrese la ficha: \n");
		scanf("%u %u %u %u",&(fichaIngresada.numParticipante),&(fichaIngresada.puntInteligencia),
				&(fichaIngresada.puntBelleza),&(fichaIngresada.puntSimpatia));
		sumaInteligencia += fichaIngresada.puntInteligencia;
		if (fichaIngresada.puntBelleza > mayorPuntBelleza){
			mayorPuntBelleza = fichaIngresada.puntBelleza;
		}
		if (fichaIngresada.puntSimpatia > 8)
			contadorSimpatia ++;
	}

	printf ("Promedio puntaje de inteligencia: %f \n",sumaInteligencia/CANT_FICHAS);
	printf ("El mayor puntaje de belleza: %d \n",mayorPuntBelleza);
	printf ("Cantidad de participantes con mas de 8 puntos de simpatia: %d \n",contadorSimpatia);




}
