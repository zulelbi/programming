/*
 * [2, 5, 8, 9, 0]
 */


#include <stdio.h>
#define MAX_LEN 5

int findElement(int * arr, int n) {
	
	int i;
	
	for (i = 0; i <= MAX_LEN - 1; i++) {
		if (arr[i] == n){
			return i;
		}
	}
	return -1;
}

int main()
{
	int arr[MAX_LEN];
	int i, n;
	
	for(i = 0; i <= MAX_LEN - 1; i++){
		printf("Ingrese la secuencia de numero %d: ", i + 1);
		scanf("%d", &arr[i]);
	}
	
	printf ("Ingrese elemento a encontrar: ");
	scanf( "%d", &n);
	
	printf("El elemento se encuentra en la posicion: %d", findElement(arr, n));
	
	
	
	return 0;
}

