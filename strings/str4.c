/*
 * 
 * 
 */


#include <stdio.h>
#include <string.h>


int main()
{
	char str[500];
	int i, is_caracter, count_words = 0;
	
	printf ("Ingrese una oracion: ");
	fgets (str, sizeof(str), stdin);
	
	for (i = 0; str[i] != '\0'; i++) {
		if  ((str[i] >= 65 && str[i] <= 90) ||  (str[i] >= 97 && str[i] <= 122)){
			is_caracter = 1;
			} else if (str[i] == ' ' || str[i] == '\n') {
				is_caracter = 0;
				count_words ++;
				}
		}
	printf ("Cantidad de palabras: %d", count_words);      
	
	return 0;
}

