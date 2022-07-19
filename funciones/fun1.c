/* 
 * 
 */


#include <stdio.h>
#include <string.h>

void printCenter (char* str) {
	
	int i, j;
	char spaces [100], lines[100];

	for (i=0; i <= 40 - (strlen(str) / 2); i++) {
		spaces[i] = ' ';
	}
	for (j=0; j<= strlen(str)-2; j++){
		lines[j] = '=';
	}
	printf( "%s%s", spaces, str);
	printf( "%s%s", spaces, lines);

}

int main()
{
	
	char str[100];
	
	printf ("Ingrese palabra: ");
	fgets (str, sizeof(str), stdin);
	
	printCenter(str);
	
	
	return 0;
}

