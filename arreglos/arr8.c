/*
 * 
 */


#include <stdio.h>
#define MAX_LEN 4

void printArray(int* arr){
	int i;
	for(i = 0; i <= MAX_LEN - 1; i++){
		printf(i == MAX_LEN - 1 ? "%d\n" : "%d,  ", arr[i]);
	}
}

int* intersectionArray(int* array1, int* array2){
		
	static int intersection_array[MAX_LEN];
	int i, j;
	
	for(i = 0; i <= MAX_LEN - 1; i++){
		for(j = 0; j <= MAX_LEN - 1; j++){
			if(array1[i] == array2[j]){
			intersection_array[i] = array2[j];
			break;
			}
		}
	}
	return intersection_array;
}

int main()
{
	int array1[] = {2, 1, 5, 4};
	int array2[] = {5, 3, 2, 6};
	
	printArray(intersectionArray(array1, array2));
	
	return 0;
}

