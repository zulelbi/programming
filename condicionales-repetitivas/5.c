/*
 * 
 */


#include <stdio.h>

int main()
{
	float invesment1, invesment2, invesment3, sum;
	
	printf("Ingrese importe de inversor 1: ");
	scanf("%f", &invesment1);
	
	printf("Ingrese importe de inversor 2: ");
	scanf("%f", &invesment2);
	
	printf("Ingrese importe de inversor 3: ");
	scanf("%f", &invesment3);
	
	sum = invesment1 + invesment2 + invesment3;
	
	printf ("Porcentaje de inversor 1: %.2f\n", (100*invesment1)/sum);
	
	printf ("Porcentaje de inversor 2: %.2f\n", (100*invesment2)/sum);
	
	printf ("Porcentaje de inversor 3: %.2f\n", (100*invesment3)/sum);
	
	return 0;
}

