/*
 * 
 * 
 */


#include <stdio.h>
#include <string.h>


int main()
{
	char str1[100], str2[100], str[100];
	int i, j;
	
	printf ("Ingrese primera palabra: ");
	fgets (str1, sizeof(str1), stdin);
	
	printf ("Ingrese segunda palabra: ");
	fgets (str2, sizeof(str2), stdin);
	
	for (i = 0; i < strlen(str1) - 1; i++) {
		str[i] = str1 [i];
		}
	
	for (j = 0; j <= strlen(str2); j++, i++) {
		str[i] = str2 [j];
		}
	
	printf ("Su palabra concatenada es: %s", str);
	
	return 0;
}

