#include "../headers/clase9.h"

/*
9.06. Armar una tabla de conversión de Grados Fahrenheit a Grados Centígrados. La formula es C=5/9 * (F-32)
 */

#define TEMP_MIN -10
#define TEMP_MAX 10

void ejercicio9_6(){
	printf ("-------------------------\n");
	printf ("|\tF\tC\t|\n");
	printf ("-------------------------\n");
	for (int i=TEMP_MIN;i<=TEMP_MAX;i++){
		float C = (float)5/9 * (i-32);
		printf ("|\t%d\t%0.2f\t|\n",i,C);
		printf ("-------------------------\n");
	}
}
