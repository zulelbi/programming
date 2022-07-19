/*
 *
 * 
 */


#include <stdio.h>

int main()
{
	float time_sleep, time_sit, calories_sleep = 1.08, calories_sit = 1.66;
	char option;

	printf ("Ingrese actividad realizada UNO (1) para dormir o un DOS (2) para sentado: ");
	scanf("%c", &option);
	
	switch(option) {
	 
	 case '1':
	 printf ("Ingrese tiempo dormido en min: ");
	 scanf("%f", &time_sleep);
	 
	 printf ("Total de calorias consumidas: %f", time_sleep*calories_sleep);
		break;
	 
	 case '2':
		printf ("Ingrese tiempo sentado en min: ");
	    scanf("%f", &time_sit);
		
	 printf ("Total de calorias consumidas: %f", time_sit*calories_sit);
		break;
	 default:
	 	printf ("Opcion invalida");

	}
	
	return 0;
}

