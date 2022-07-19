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
	
	printf ("Ingrese caracter a encontrar: ");
	scanf ( "%c", &letter);
	
	
	for (i = strlen(str); i  >= 0 ; i--) {
		if (str[i] == letter) {
			break;
			}
		}
	if (i != 0) {
		printf ("Indice del caracter: %d", i);
		} else {
			printf ("-1");
			}
	
	
	
	return 0;
}

