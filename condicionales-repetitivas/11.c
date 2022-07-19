/*
 * 
 * 
 */


#include <stdio.h>

int main()
{
	int num1, num2, result = 0;
	
	printf ("Introduzca primer numero a dividir: ");
	scanf ("%d", &num1);
	
	printf ("Introduzca segundo numero a dividir: ");
	scanf ("%d", &num2);
	
		while (num2 <= num1) {
			num1 = num1 - num2;
			result = result + 1;
			
			}
		printf ("El resultado es: %d", result);


	return 0;
}

