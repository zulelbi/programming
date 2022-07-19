/*
 * 
 * 
 */


#include <stdio.h>
#include <string.h>

int main()
{
	char str[100], letter;
	int i, is_found;
	
	printf ("Ingrese oracion: ");
	fgets (str, sizeof(str), stdin);
	
	printf ("Ingrese caracter a encontrar: ");
	scanf ( "%c", &letter);
	
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] == letter) {
			is_found = 1;
			break;
			} else {
				is_found = 0;
				} 
		}
	if (is_found == 1) {
		printf ("Indice del caracter: %d", i);
		} else {
			printf ("-1");
			}
	
	return 0;
}

