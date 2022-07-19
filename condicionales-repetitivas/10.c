/*
 * 
 * 
 */


#include <stdio.h>

int main()
{
	int num1, num2, i, result = 0;
	
	printf ("Introduzca primer numero a multiplicar: ");
	scanf ("%d", &num1);
	
	printf ("Introduzca segundo numero a multiplicar: ");
	scanf ("%d", &num2);
	

	for (i = 1; i <= num2; i++) {
	
	result = result + num1; // result =+ num1
	}
		printf ("El resultado es: %d", result);
	
	return 0;
}

