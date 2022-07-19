/*
 * 
 * 
 */


#include <stdio.h>

int main()
{
	int person =1 , i = 1;
	float weight_before, weight, sum = 0, prom, dif;
	
	while (person <= 5) {
		printf ("Introduzca peso anterior de la persona #%d: ", person);
		scanf ("%f", &weight_before);
		while (i <=10) {
			printf ("Introduzca peso báscula #%d: ", i);
			scanf ("%f", &weight);
			sum = sum + weight;
			i++;
			}
			prom = sum/10;
			dif = prom - weight_before;
		if (dif < 0) {
			printf ("BAJO\n");
			printf ("Los kilos perdidos son: %2.f\n", dif);
			}
			else { 
				printf ("SUBIO\n");
				printf ("Los kilos ganados son: %2.f\n", dif);
				}
			person++;
		}
	
	return 0;
}

