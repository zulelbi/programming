/*
 * 
 * 
 */


#include <stdio.h>

int isMultiple(int a, int b) {
	
	int is_result;
	
	if (a % b == 0) {
	is_result = 1;	
	} else {
		is_result = 0;
		}
	
	return is_result;
}

int main()
{
	int n1, n2;
	
	printf ("Ingrese numero 1: ");
	scanf( "%d", &n1);
	
	printf ("Ingrese numero 1: ");
	scanf( "%d", &n2);
	
	if (isMultiple(n1, n2) == 1) {
		printf ("Es multiplo %%");
	} else {
		printf ("No es multiplo");
		}
	
	return 0;
}

