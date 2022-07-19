/*
 *  agrega un elemento en el array
 */


#include <stdio.h>
#define MAX_LEN 6

void printArray(int* arr){
	int i;
	for(i = 0; i <= MAX_LEN - 1; i++){
		printf(i == MAX_LEN - 1 ? "%d\n" : "%d,  ", arr[i]);
	}
}

void addElement(int* array, int index, int n) {
	
	int i, nextvalue1 = n, nextvalue2;
	
	for (i = index ; i <= MAX_LEN - 1; i++) {
		nextvalue2 = array[i];	
		array[i] = nextvalue1;
		nextvalue1 = nextvalue2;
	}
	printArray(array);
}

int main(int argc, char **argv)
{
	
	int array [] = {1, 2, 3, 4, 5};
	int i = 2, n = 5;
	
	addElement(array, i, n);
	
	return 0;
}
