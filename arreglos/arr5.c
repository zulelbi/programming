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

int main()
{
	int array[] = {1, 2, 3, 4, 5, 6};
	int i = 3;
	
	deleteElement(array, i);
	
	printArray(array);	
	
	return 0;
}

