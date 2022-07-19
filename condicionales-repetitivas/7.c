/*
 * 
 *
 * 
 */


#include <stdio.h>

int main()
{
	int num, hor, min, seg;
	
	printf ("Ingrese numero de segundos: ");
	scanf ("%d", &num);
	
		hor = (num / 3600);
		num = num % 3600;
		min = num / 60;
		seg = (num % 60);
		
	printf ("%dh %dm %ds", hor, min, seg);

	return 0;
}

