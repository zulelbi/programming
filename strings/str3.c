/*
 * 
 * 
 */


#include <stdio.h>
#include <string.h>

int main()
{
	char str1[100], str2[100];
	int i = 0;
	
	printf ("Ingrese primera palabra: ");
	fgets (str1, sizeof(str1), stdin);
	
	printf ("Ingrese segunda palabra: ");
	fgets (str2, sizeof(str2), stdin);
	
	if (strlen(str1) == strlen(str2)) {
		
		while (str1[i] == str2[i] && str1[i] != '\0') {
			i++;
		}
		if (str1[i] == '\0') {
			printf ("IGUALES\n");
		}
		else {
			printf ("NO SON IGUALES\n");	
		} 
	} else {
		printf ("NO SON IGUALES\n");	
	} 
	
		
		
	return 0;
}

