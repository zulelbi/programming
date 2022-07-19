/*
 * 
 * 
 */


#include <stdio.h>
#include <string.h>

int main()
{
	char str[100], letter;
	int i;
	
	printf ("Ingrese oracion: ");
	fgets (str, sizeof(str), stdin);
	
	printf ("Ingrese caracter a borrar: ");
	scanf ( "%c", &letter);
	
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] == letter) {
			for (; i < strlen(str); str[i] = str[i+1], i++);
			break;
			}
		}
	
	printf ("%s", str);
	
	return 0;
}

