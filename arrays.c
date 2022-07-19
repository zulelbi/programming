#include <stdio.h>
#include <string.h>
#define MAX_LEN 5
// ARREGLOS
// [1, 2, 5, 101, 4] -> 

void printArray(int* arr){
	int i;
	for(i = 0; i <= MAX_LEN - 1; i++){
		printf("%d,  ", arr[i]);
	}
	printf("\n");
}

int sum(int * arr) {
	int i, sum = 0;
	for(i = 0; i <= MAX_LEN -1; sum += arr[i], i++);
	return sum;
}

float average(int * arr){
	return sum(arr) / MAX_LEN;
}

int maximum(int * arr){
	int i, max = arr[0];
	for(i = 1; i <= MAX_LEN -1;  i++){
		max = arr[i] > max ? arr[i] : max;
	}
	return max;
}

int * myFunction(){
   static int arr[] = {1,2,3,4};
   // code ....
   return arr;
}

int main(int argc, char **argv)
{	
	int scores[MAX_LEN];
	int i, n;
	
	for(i = 0; i <= MAX_LEN - 1; i++){
		printf("Ingrese la nota del estudiante %d: ", i + 1);
		scanf("%d", &scores[i]);
	}
	
	printArray(scores);
	
	// printf("La mayor nota fue: %d", maximum(scores));
	
	printf("Ingrese el numero de almno: ");
	scanf("%d", &n);
	printf("El alumno %d se saco un: %d", n, scores[n - 1]);

	
	return 0;
}

