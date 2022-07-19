/*
 * 
 * 
 */


#include <stdio.h>
#include <string.h>

int main()
{
	char str[100], letter;
	int i, count_char = 0;
	
	printf ("Ingrese oracion: ");
	fgets (str, sizeof(str), stdin);
	
	printf ("Ingrese caracter a encontrar: ");
	scanf ( "%c", &letter);
	
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] == letter) {
			count_char = count_char + 1;
			} 
		}
	
	printf ("Indice del caracter: %d", count_char);
		
	
	return 0;
}

