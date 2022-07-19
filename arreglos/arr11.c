/*
 * 
 */


#include <stdio.h>
#define MAX_LEN 6

void printArray(int* arr){
	int i;
	for(i = 0; i <= MAX_LEN - 1; i++){
		printf(i == MAX_LEN - 1 ? "%d\n" : "%d,  ", arr[i]);
	}
}

int * productArray(int * array){
	
	int i, j, product = 1;
	static int array_product[MAX_LEN];
	
	for(i = 0; i <= MAX_LEN - 1; i++){
		product *= array[i];
	}
	array_product[0] = product;
	
	for(j = 1; j <= MAX_LEN - 1; j++){
		array_product[j] = product / array[j];
	}
	return array_product;
}

int main()
{
	int array[] = {1, 2, 3, 4, 5, 6};
	
	printArray(productArray(array));
	
	return 0;
}

