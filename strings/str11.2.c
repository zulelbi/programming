/*
 * 
 * 
 */


#include <stdio.h>
#include <string.h>

int main()
{
	char str[500];
	int i, j, k;
	
	printf ("Ingrese oracion: ");
	fgets (str, sizeof(str), stdin);
	
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i]== ' ' && str[i-1]== ' ') {
			for (j=i; str[j] != '\0' && str[j] == ' '; j++); // encontrar proximo caracter diferente a espacio
			for(k = i; j <= strlen(str); str[k] = str[j], k++, j++);
		}
	}
	
		
	printf ("%s", str);
	
	return 0;
}
