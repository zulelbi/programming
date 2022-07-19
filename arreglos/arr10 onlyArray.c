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

void deleteElement(int* array, int i) {
	
	int j;
	
	for(j = i; j < MAX_LEN - 1; j++, i++){
		array[j] = array [i + 1];	
	}
	array[j] = 0;
}

int * onlyArray(int * array){
	
	int i, j;
	
	for(i = 0; i <= MAX_LEN - 1; i++){
		for(j = MAX_LEN - 1; j > i; j--){
			if(array[i] == array[j]){
				printf("borrando el elemento %d en la posicion %d \n", array[j], j);
				deleteElement(array, j);
			}
		}
	}
	
	return array;
}


int main()
{
	int array[] = {3, 4, 1, 3, 3, 3};
	
	printArray(onlyArray(array));
	
	return 0;
}
