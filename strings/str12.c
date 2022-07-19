/*
 * 
 * 
 */


#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	int i, count_words = 1;
	
	printf ("Ingrese string: ");
	fgets (str, sizeof(str), stdin);
	
	for (i = 1; i <= strlen(str)-1; i++) {
		if ((str[i] != ' ') && (str[i] >= 65 && str[i] <= 90) && (str[i+1] >= 97 && str[i+1] <= 122)) {
			count_words ++;
		}
	}
	
	printf ("%d palabras", count_words);
	
	return 0;
}

