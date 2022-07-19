/*
 * 
 * 
 */


#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	int i, j, is_palindrome;
	
	printf ("Ingrese palabra: ");
	fgets (str, sizeof(str), stdin);
	
	j = strlen(str) - 2;
	
	for (i = 0; i <= j; i++, j--) {
		if (str[i] == str[j]) {
			is_palindrome = 1;
			} else {
				is_palindrome = 0;
				break;
				}
		}
	
	if (is_palindrome == 1) {
		printf ("ES Palindromo");
		} else {
			printf ("NO es Palindromo");
			}
	
	return 0;
}

