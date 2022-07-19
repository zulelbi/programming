/*
 * 
 * 
 */


#include <stdio.h>
#include <string.h>

int isLetter(char character) {
	return (character >= 65 && character <= 90) || (character >= 97 && character <= 122);
}

int main()
{
	char str[100];
	int i, j, k;
	
	printf ("Email: ");
	fgets (str, sizeof (str), stdin);
	
	if (strlen(str) >= 10) {
		for (i = 0; i <= strlen(str) - 1; i++) {
			if (str[i] == '@'){
				break;
			}
		}
		if (i >= 3 && str[i] == '@') {

			for (j = i + 1;	j <= strlen(str) - 1; j++) {
				if (!isLetter(str[j])){
					break;
				}
			}
			if (str[j] == '.' && j - i >= 2) {
					for (k = j+1; k <= strlen(str) - 1; k++) {
						if (!isLetter(str[k])) {
							break;
						}
					}
					if ((k == strlen(str) - 1) && (strlen(str) - (j+1) >= 3)) {   // si lo que hay despues del punto son 2 caracteres o mas
							printf ("correo valido");
						} else {
							printf ("correo no valido %d %d %lu", k, j, strlen(str));
						}
				} else {
					printf ("correo no valido");
				}
			}  else {
				printf ("correo no valido");
			}
			
		}  else {
			printf ("correo no valido");
		}
	return 0;
}

