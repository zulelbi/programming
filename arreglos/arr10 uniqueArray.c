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

int * uniqueArray(int * array){
	
	int i, j;
	
	for(i = 0; i <= MAX_LEN - 1; i++){
		for(j = MAX_LEN - 1; j > i; j--){
			if(array[i] == array[j]){
				printf("borrando el elemento %d en la posicion %d \n", array[j], j);
				deleteElement(array, j);
				deleteElement(array, i);
			}
		}
	}
	
	return array;
}



int main(int argc, char **argv)
{
	int array[] = {2,3,1,3,4};
	
	printArray(uniqueArray(array));
	
	return 0;
}

