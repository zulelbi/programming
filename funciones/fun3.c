/* 
 */


#include <stdio.h>

void secondtohours (int num) {
	
	int hor, min, seg;
	
	hor = (num / 3600);
	num = num % 3600;
	min = num / 60;
	seg = (num % 60);
		
	printf ("%dh %dm %ds", hor, min, seg);
}

void hourstosecond (int hor, int min, int seg) {
	
	int result;
	
	result = (hor * 3600) + (min * 60) + seg;
	
	printf ("%d segundos", result);
	
}

int main()
{
	int segtotal, hor, min, seg, option;
	
	printf ("Ingrese UNO (1) si desea convertir de segundos a horas, DOS (2) de horas a segundos, CERO (0) para salir: ");
	scanf ("%d", &option);
	
	switch (option) {
		case 1:
			printf("Ingrese los segundos: ");
			scanf("%d", &segtotal);
			secondtohours(segtotal);
			break;
		case 2:
			printf ("Introduzca las horas: ");
			scanf ("%dh", &hor);
	
			printf ("Introduzca los minutos: ");
			scanf ("%dm", &min);
	
			printf ("Introduzca los segundos: ");
			scanf ("%ds", &seg);
		
			hourstosecond(hor, min, seg);
			break;
		case 0:
			printf ("Fin del programa");
			break;
		default:
			printf ("Opcion invalida");
	}
	
	return 0;
}

