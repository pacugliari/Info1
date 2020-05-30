#include "../headers/clase4.h"

/*
Ejercicio para resolver:
04.05 –Leer tres datos «a» , «b» y «c». Se pide imprimirlos ordenados de mayor a menor (considerar que son distintos).
Notar la complejidad y cantidad de instrucciones que se necesitan para resolverlo con las variables escalares que estamos usando hasta ahora.
Más adelante cuando se vean variables Estructuradas o subindicadas se resolverá en forma mucho más sencilla áun cuando hubieran muchos más datos.
 */

void imprimirOrdenMayor(int mayor,int medio,int menor){
	printf ("Orden de mayor a menor: %d-%d-%d \n",mayor,medio,menor);
}

void ejercicio4_5(){
	int a,b,c;

	printf ("Ingrese los valores A,B,C \n");
	scanf ("%d %d %d",&a,&b,&c);


	//LO RESUELVO CON IF, MUCHO MAS FACIL CON UN ARRAY,PERO COMO EL EJERCICIO PIDE CON IF
	if (a > b && a > c){
		if(b > c){
			imprimirOrdenMayor(a,b,c);
		}else{
			imprimirOrdenMayor(a,c,b);
		}
	}else if (b >a && b>c){
		if (a > c){
			imprimirOrdenMayor(b,a,c);
		}else{
			imprimirOrdenMayor(b,c,a);
		}
	}else{
		if (a >b){
			imprimirOrdenMayor(c,a,b);
		}else{
			imprimirOrdenMayor(c,b,a);
		}
	}
}
