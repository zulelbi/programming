/* 
 */
#define MAX_LEN 10
#include <stdio.h>
#include <stdlib.h>

int * randomArray() {
	static int arr[MAX_LEN];
	int  i;
	
	for (i = 0; i <= MAX_LEN -1; i++) {
		arr[i] = rand() % (MAX_LEN) + 1;
	}
	return arr;
}

void printArray(int* arr){
	int i;
	for(i = 0; i <= MAX_LEN - 1; i++){
		printf(i == MAX_LEN - 1 ? "%d\n" : "%d,  ", arr[i]);
	}
}

int main()
{
	printArray(randomArray());
	
	return 0;
}

