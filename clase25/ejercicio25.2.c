/*
 26.2 Dados dos puntos en el plano x e y, calcular la distancia entre ambos
 */

#include "../headers/clase25.h"

typedef struct{
	double x;
	double y;
}punto_t;

void ejercicio25_2(){
	punto_t p1,p2;
	double distancia;

	printf("Ingrese el primer punto en el plano \n");
	scanf("%lf %lf",&p1.x,&p1.y);
	fflush(stdin);
	printf("Ingrese el segundo punto en el plano \n");
	scanf("%lf %lf",&p2.x,&p2.y);
	fflush(stdin);

	distancia = sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2));

	printf("Distancia es : %0.2f \n",distancia);

}
