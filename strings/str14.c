/*
 * 
 * 
 */


#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	int i, mayus = 0, minus = 0, especial = 0, num = 0;
	
	printf ("Contraseña: ");
	fgets (str, sizeof(str), stdin);
	
	if (strlen(str) >= 7) {
		
		for (i = 0; i <= strlen(str) - 1; i++) {
			if (str[i] >= 65 && str[i] <= 90){
				mayus++;
				} else if (str[i] >= 97 && str[i] <= 122) {
					minus++;
					} else if ((str[i] >= 33 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 64)) {
						especial++;
						} else if (str[i] >= 48 && str[i] <= 57){
							num++;
							}
		}
			if (mayus >= 1 && minus >= 1 && especial == 1 && num == 1){
				printf ("contraseña fuerte");
			} else {
				printf ("contraseña no cumple");
				}
	} else {
		printf ("contraseña no cumple");
		}
	
	return 0;
}

