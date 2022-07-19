/*
 * 
 * 
 */


#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	int i, k;
	
	printf ("Ingrese oracion: ");
	fgets (str, sizeof(str), stdin);
	
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i]== ' ' && str[i-1]== ' ') {
			for (k = i; k <= strlen(str); k++) {
						str[k]= str[k + 1];
						}
					}
				}
	
	printf ("%s", str);
	
	return 0;
}

