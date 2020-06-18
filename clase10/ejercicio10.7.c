#include "../headers/clase10.h"

/*
Ejercicio:
10.06 –Ingresar las edades de los 30 alumnos de un curso, armar un vector con aquellas que superen los 18 años.
(Notar que no se sabe cuantas posiciones tendrá el vector, a lo sumo 30 si todos fueran mayores a 18.
El proceso será ingresar el vector de edades, luego ir comparando cada una de ellas con 18, si se encuentra una mayor a 18,
se incrementa un contador que se usa como subíndice del otro vector. Finalmente se imprime el nuevo vector pero tener precaución cuando se utilice
el «para» quién indicará hasta cuanto tiene que llegar).
 */


#define CANT_ALUMNOS 5 //REEMPLAZAR POR 30

void ejercicio10_7(){
	int edades[CANT_ALUMNOS];
	int mayores[CANT_ALUMNOS];
	int contador=0;

	printf ("Ingrese las edades de los alumnos: \n");
	for(int i=0;i<CANT_ALUMNOS;i++){
		printf ("Ingrese la edad del alumno numero %d\n",i+1);
		scanf (" %d",&(edades[i]));
	}

	//BUSCO LOS MAYORES A 18
	for(int i=0;i<CANT_ALUMNOS;i++){
		if (edades[i] > 18){
			mayores[contador] = edades[i];
			contador++;
		}
	}

	printf("Las edades mayores de 18 son:");
	for(int i=0;i<contador;i++){
		printf (" %d ",mayores[i]);
	}
}
