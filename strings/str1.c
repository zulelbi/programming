/*
 * 
 * 
 */


#include <stdio.h>
#include <string.h>

int main()
{
	char str[100], str_copy[100];
	int i;
	
	printf ("Ingrese sus caracteres: \n");
	fgets (str, sizeof(str), stdin);
	
	for (i = 0; str[i] != '\0'; i++) {
		str_copy[i] = str[i];
		}
		printf ("%s", str_copy);
		
	return 0;
}

