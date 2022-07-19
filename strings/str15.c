/*
 */

#define MAX 100
#include <stdio.h>
#include <string.h>
#define START_LOWER 96
#define END_LOWER 122
#define START_CAPITAL 64
#define END_CAPITAL 90


int isLowercase(char character) {
	return (character >= 97 && character <= 122);
}

int isCapitaletter(char character) {
	return (character >= 65 && character <= 90);
}

int isLetter(char character) {
	return isLowercase(character) || isCapitaletter(character);
}

int main()
{
	char str[MAX];
	int i, cNumber, cNumber2, rest, start, end;
	
	printf("Ingrese una palabra a cifrar: ");
	fgets(str, sizeof(str), stdin);
	
	printf("Ingrese numero de encriptación: ");
	scanf("%d", &cNumber);
	
	for (i = 0; i <= strlen(str) - 1; i++) {
		if (isLetter(str[i])) {
			start = isLowercase(str[i]) ? START_LOWER : START_CAPITAL;
			end = isLowercase(str[i]) ? END_LOWER : END_CAPITAL;
			
			if ((str[i] + cNumber) <= end) {
				str[i] = str[i] + cNumber;
			} else {
				rest = end - str[i];
				cNumber2 = cNumber - rest;
				str[i] = start + cNumber2;
			}
		}
	}
	
	printf("%s", str);
	
	
	return 0;
}
