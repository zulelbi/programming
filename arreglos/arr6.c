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


void inverseElement(int * array){
	
	int i, j = MAX_LEN - 1, new_value;
	
	for (i = 0; i <= j; i++, j--){
		new_value = array[i];
		array[i] = array [j];
		array[j] = new_value;
	}
}



int main()
{
	int array[] = {1, 2, 3, 4, 5};
	
	inverseElement(array);
	
	printArray(array);

	return 0;
}

