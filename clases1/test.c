/*
 * lo que sea
 * 
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int investment;
	int monts;
	int gain;
	int result;
	int totalgain;
	printf("Indique el monto de su inversion: ");
	scanf("%d", &investment);
	printf("Indique cantidad de meses a invertir: ");
	scanf("%d", &monts);
	
	gain= investment * 0.02;
	totalgain= monts*gain;
	result= totalgain + investment;
	printf("Tu ganancia total es: %d", result);
	return 0;
}

