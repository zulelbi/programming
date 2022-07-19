/*
 * [2, 5, 8, 9, 11]
 */


#include <stdio.h>
#define MAX_LEN 5


int finElementesortedArray(int * arr, int n) {
	
	int i;
	
	for (i = 0; i <= MAX_LEN - 1; i++) {
		if (arr[i] > n) {
			return -1;
		} else if (arr[i] == n) {
			return i;
		}
	}
	return -1;
}


int main(int argc, char **argv)
{
	int arr[MAX_LEN];
	int i, n;
	
	for(i = 0; i <= MAX_LEN - 1; i++){
		printf("Ingrese la secuencia de numero %d: ", i + 1);
		scanf("%d", &arr[i]);
	}
	
	printf ("Ingrese elemento a encontrar: ");
	scanf( "%d", &n);
	
	printf("El elemento se encuentra en la posicion: %d", finElementesortedArray(arr, n));
	
	return 0;
}

