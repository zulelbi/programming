/*
 * 
 */


#include <stdio.h>
#define MAX_LEN 5

void printArray(int* arr){
	int i;
	for(i = 0; i <= MAX_LEN - 1; i++){
		printf(i == MAX_LEN - 1 ? "%d\n" : "%d,  ", arr[i]);
	}
}

void rotateArray(int * array, int n){
	
	int i, j, k, array_aux[n];
	
	for(j = 0; j < n; j++){
		array_aux[j] = array[j];
	}
	for(i = n; i <= MAX_LEN - 1; i++){
		array[i - n] = array[i];
	}
	j = 0;
	for(k = i - n; k <= MAX_LEN - 1; k++, j++){
		array[k] = array_aux[j];
	}
}

int main()
{
	int array[] = {4, 1, 6, 7, 8};
	int n = 2;
	
	rotateArray(array, n);
	
	printArray(array);

	return 0;
}
