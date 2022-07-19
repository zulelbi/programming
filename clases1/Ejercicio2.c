/*
 * Ejercicio 2
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	float distance;
	float time;
	printf("Indique distancia de recorrido: ");
	scanf("%f", &distance);
	printf("Indique tiempo requerido de entrega: ");
	scanf("%f", &time);
	printf("Velocidad necesaria: %.2f Km/h", distance/time);
	return 0;
}

