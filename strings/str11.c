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
	
	for (i = 0; str[i] != '\0'; i++) { // recorre cada caracter
		if (str[i]== ' ' && str[i-1]== ' ') { // es un espacio extra
			for (j=i; str[j] != '\0'; j++) { // consigue el proximo caracter diferente de espacio
				if (str[j] != ' ') {
					for (k=i; j <= strlen(str); k++, j++) { // rueda caracteres a la izquierda
						str[k]= str[j];
						}
					 break;
					}
					
				}
			}
		}
	
		
	printf ("%s", str);
	
	return 0;
}

