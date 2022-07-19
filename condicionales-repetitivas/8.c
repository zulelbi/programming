/*
 * 
 * 
 */


#include <stdio.h>

int main()
{
	int hor, seg, min;
	
	printf ("Introduzca las horas: ");
	scanf ("%dh", &hor);
	
	printf ("Introduzca los minutos: ");
	scanf ("%dm", &min);
	
	printf ("Introduzca los segundos: ");
	scanf ("%ds", &seg);
	
	if  ( seg + 1 < 60 ) {
		seg++; // sumar a los segundos 
	} else {
			seg = 0; // sumar a los minutos si puedo, y poner seg en 0 
		
		if ( min + 1 < 60) { 
			min++; // sumar a los minutos
		
		} else {
				min = 0; // sumar a las horas si puedo, y poner los min en 0
			if ( hor + 1 < 13) {
				hor++; // sumar a las horas
			} else {
					hor = 1; // la hora sera 01 00 00
					}
			 }
		}
	 printf ("Tiempo en un segundo: %dh %dm %ds", hor, min, seg); // imprimir horas y min seg
	
	
	
	return 0;
}

