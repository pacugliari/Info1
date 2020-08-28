#include "../headers/clase15.h"

/*
Ejercicio propuesto:
15.06- Se ingresan fichas conteniendo el numero de alumno (1 a 20), el número de materia (1 a 5) y una de las notas
de ese alumno en esa materia. Cada alumno puede tener más de una nota por materia (por lo menos tiene una nota).
Se pide hallar el promedio de notas de cada alumno en cada materia, el promedio general por alumno en todas las
materias y el promedio de notas por materia.

En el ejercicio 17:05 cada alumno en cada materia tenía una nota, en este caso cada alumno en cada materia puede tener más de una nota,
sin saber cuantas son. Por lo menos tiene una. Por lo tanto, cada posición de la matriz será un sumador para sumar todas las notas que tenga
cada alumno en cada materia. Ahora bien, necesitamos saber también cuantas notas tiene cada alumno en cada materia, por lo que habra
que contar cuantas notas se suman. Para esto se podrá generar una matriz que contenga las cantidades de notas (o sea cuando sumo una
nota en la matriz de suma de notas, en la otra matriz de cantidades de notas sumo un uno en la misma fila y columna. Luego, se dividen las
marices posición a posición y se obtienen los promedios de cada alumno en cada materia. Luego se procede igual que antes.
Considerar que para ingresar los datos, éstos vienen desordenados y no se sabe cuantos son, por lo que habrá que usar una estructura de
iteración que no podrá ser un «para». Se animan a hacerlo?

 */


#define FIL 100
#define COL 3

void ejercicio15_6(){
	int matriz[FIL][COL];
	int numero;
	int filas;
	int indice;
	float promedio;

	printf ("Ingrese la cantidad de fichas que va a cargar \n");
	scanf ("%d",&filas);

	//LECTURA
	for(int i=0;i<filas;i++){
		for (int j=0;j<COL;j++){
			switch (j){
				case 0:
					do{
						printf ("Ingrese el numero del  %d° alumno debe ser del 1 a 20\n",i+1);
						scanf("%d",&numero);
					}while (numero < 1 || numero >20 );
					matriz[i][j]= numero;
				break;
				case 1:
					do{
						printf ("Ingrese el numero de materia del %d° alumno debe ser de 1 a 5 \n",i+1);
						scanf("%d",&numero);
					}while (numero < 1 || numero > 5);
					matriz[i][j] = numero;
				break;
				case 2:
					do{
						printf ("Ingrese la nota del %d° alumno de 1 a 10\n",i+1);
						scanf("%d",&numero);
					}while  (numero < 1 || numero > 10);
					matriz[i][j] = numero;
				break;
			}
		}
	}

	//CALCULO PROMEDIO DE NOTAS DE CADA ALUMNO EN CADA MATERIA
	int sumaNotasMaterias [20][5];
	int contadorNotasMaterias [20][5];

	for (int i=0;i<20;i++){
		for (int j=0;j<5;j++){
			sumaNotasMaterias[i][j]=0;
			contadorNotasMaterias[i][j]=0;
		}
	}
	for (int i=0;i<filas;i++){
		if (matriz[i][2] > 0){
			sumaNotasMaterias[matriz[i][0]-1][matriz[i][1]-1]+=matriz[i][2];
			contadorNotasMaterias[matriz[i][0]-1][matriz[i][1]-1]++;
		}
	}
/*
	for (int i=0;i<20;i++){
		for (int j=0;j<5;j++){
			printf ("Alumno: %d Suma: %d - Contador: %d \n",i,sumaNotasMaterias[i][j],contadorNotasMaterias[i][j]);
		}
	}*/


	int flag=0;
	for (int i=0;i<20;i++){
		for (int j=0;j<5;j++){
			if (contadorNotasMaterias[i][j] > 0){
				if (flag==0){
					printf("El promedio del alumno numero %d: \n",i+1);
					flag++;
				}
				printf("	Materia numero %d: %2.2f \n",j+1,(float)sumaNotasMaterias[i][j]/contadorNotasMaterias[i][j]);
			}
		}
		flag = 0;
	}

	//CALCULO PROMEDIO EN TODAS LAS MATERIAS, SUMA DE TODAS LAS NOTAS DIVIDO LA CANTIDAD DE NOTAS

	int suma =0;
	int contador =0;
	for(int i=0;i<20;i++){
		for(int j=0;j<5;j++){
			suma += sumaNotasMaterias[i][j];
			contador += contadorNotasMaterias[i][j];
		}
		if (contador > 0)
			printf ("El promedio general de todas las materias del alumno numero %d: %2.2f \n",i+1,(float)suma/contador);
		suma =0;
		contador=0;
	}

	//SUMA NOTAS POR MATERIA
	indice = 1;
	while (indice <= 5){
		suma = 0;
		contador =0;
		for (int i=0;i<filas;i++){
			if (matriz[i][1]==indice){
				contador++;
				suma += matriz[i][2];
			}
		}
		if (contador != 0){
			promedio = (float)suma/contador;
			printf ("Promedio de notas de la materia numero: %d es: %2.2f \n",indice,promedio);
		}
		indice++;
	}


	//IMPRESION
	printf ("_______________________________\n");
	printf("|N°Alumno |N°Materia|Nota     |\n");
	printf ("_______________________________\n");
	printf ("|");
	for(int i=0;i<filas;i++){
		for (int j=0;j<COL;j++){
			printf ("%9d|",matriz[i][j]);
		}
		if (i<filas-1)
			printf("\n|");
	}
	printf ("\n_______________________________\n");

}
