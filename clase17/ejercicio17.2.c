/*
	Se quiere implementar un programa en el cual se analiza las
	aptitudes de alumnos de ingenieria de las siguientes especialidades
	Civil(c),electronica(r) y quimica (q)
	Por tal motivo se cargar los mejores promedios de las notas de
	los 5 alumnos de cada especialidad, sabiendo que no guardan
	ningun orden, junto con su legajo

	Luego de la carga se pide:
	1) promedio total
	2) promedio de nota por especialidad
	3) legajo del alumno de mayor promedio y cual es su especialidad
	(sabiendo que hay uno solo)
	4) que especialidad tiene mejor promedio

			civil		electronica		quimica
alumno1
alumno2
alumno3
alumno4
alumno5
prom espe

			civil		electronica		quimica
legajo1
legajo2
legajo3
legajo4
legajo5
prom espe


promedio total = suma 15 promedios / 15;
 */

#include "../headers/clase17.h"


#define FIL 6
#define COL 3


void ejercicio17_2(){
	// FIL, 0 A 4 ALUMNOS Y EL 5 PARA SUMAR LOS PROMEDIOS DE ESA ESPECIALIDAD
	// COL, 0 A 2 , REPRESENTA LAS ESPECIALIDAD CIVIL, ELECTRONICA, QUIMICA
	// 0: PROMEDIOS , 1: LEGAJOS
	float matriz [FIL][COL][2];
	float promedioTotal=0;
	float promedio;
	char especialidad;
	int legajo;
	int posEsp=0;
	int cursorC =0,cursorE=0,cursorQ=0;
	float promedioMax;
	int legajoMax;
	char especialidadMax;

	//INICIALIZO SECTORES DONDE SE VAN A SUMAR DATOS
	matriz[5][1][0]=0;
	matriz[5][2][0]=0;
	matriz[5][3][0]=0;

	//CARGO LOS 15 ALUMNOS
	for(int i=0;i<(FIL-1)*(COL);i++){

		do{
			printf("Ingrese la letra de la especialidad: (c) Civil, (r)Electronica, (q)Quimica\n");
			fflush(stdin);
			scanf("%c",&especialidad);
			fflush(stdin);
			if (cursorC == (FIL-1) && especialidad == 'c'){
				printf("Ya se cargaron todos los promedios de Civil \n");
			}else if (cursorE == (FIL-1) && especialidad == 'r'){
				printf("Ya se cargaron todos los promedios de Electronica \n");
			}else if (cursorQ == (FIL-1) && especialidad == 'q'){
				printf("Ya se cargaron todos los promedios de Quimica \n");
			}
		}while((especialidad!='c' && especialidad!='r' && especialidad!='q') || ((cursorC == (FIL-1) &&
				especialidad == 'c') || (cursorE == (FIL-1) && especialidad == 'r') || (cursorQ == (FIL-1) &&
						especialidad == 'q')) );

		printf("Ingrese el legajo \n");
		scanf("%d",&legajo);

		printf("Ingrese el promedio \n");
		scanf("%f",&promedio);

		switch(especialidad){
			case 'c':
				posEsp = 0;
				matriz[cursorC][posEsp][1]=legajo;
				matriz[cursorC][posEsp][0]=promedio;
				cursorC++;
			break;
			case 'r':
				posEsp = 1;
				matriz[cursorE][posEsp][1]=legajo;
				matriz[cursorE][posEsp][0]=promedio;
				cursorE++;
			break;
			case 'q':
				posEsp = 2;
				matriz[cursorQ][posEsp][1]=legajo;
				matriz[cursorQ][posEsp][0]=promedio;
				cursorQ++;
			break;
		}
		//VOY SUMANDO LOS PROMEDIOS INGRESADOS
		matriz[5][posEsp][0]+=promedio;
		promedioTotal += promedio;
	}

	//BUSCO EL ALUMNO DE MEJOR PROMEDIO
	promedioMax = matriz[0][0][0];
	legajoMax = matriz[0][0][1];
	especialidadMax = 'C';

	for(int i=0;i<(FIL-1);i++){
		for (int j=0;j<COL;j++){
			if (promedioMax < matriz[i][j][0]){
				promedioMax = matriz[i][j][0];
				legajoMax = matriz[i][j][1];
				switch (j){
					case 0:
						especialidadMax = 'C';
					break;
					case 1:
						especialidadMax = 'R';
					break;
					case 2:
						especialidadMax = 'Q';
					break;
				}
			}
		}
	}

	//BUSCO LA ESPECIALIDAD DE MEJOR PROMEDIO
	float espePromedioMax = matriz[5][0][0];
	char espeTipoMax = 'C';
	for(int i=0;i<COL;i++){
		if (espePromedioMax < matriz[5][i][0]){
			espePromedioMax = matriz[5][i][0];
			switch (i){
				case 0:
					espeTipoMax = 'C';
				break;
				case 1:
					espeTipoMax = 'R';
				break;
				case 2:
					espeTipoMax = 'Q';
				break;
			}
		}
	}

	//IMPRIMO LOS RESULTADOS

	printf("El promedio total es: %f \n",promedioTotal/((FIL-1)*COL));
	printf("El promedio nota total por especialidad es: \n");
	printf("\tCivil:%f\n\tElectronica:%f\n\tQuimica:%f\n",matriz[5][0][0]/(FIL-1),matriz[5][1][0]/(FIL-1),
			matriz[5][2][0]/(FIL-1));
	printf("El alumno de mayor promedio es:\n\tPromedio:%f\n\tLegajo:%d\n\tEspecialidad:%c\t\n",promedioMax,
			legajoMax,especialidadMax);
	printf("La especialidad que tiene mejor promedio es: %c",espeTipoMax);

}

