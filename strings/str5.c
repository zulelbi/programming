/*
 * 
 * 
 */


#include <stdio.h>
#include <string.h>

int main()
{
	char str1[100], str2[100];
	int i, j = 0;
	
	printf ("Ingrese su palabra: ");
	fgets (str1, sizeof(str1), stdin);
	
	i = strlen (str1) - 2;
	
	while (i <= strlen (str1) - 2) {
		str2[j] = str1[i];
		i--;
		j++;
		}
		
	printf ("Su palabra al reves es: %s", str2);
	
	return 0;
}

