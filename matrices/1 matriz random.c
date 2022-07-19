/*
 * 
 */


#include <stdio.h>
#include <stdlib.h>
#define MAX_COL 3
#define MAX_ROW 3

void printMatrix(int m[MAX_ROW][MAX_COL]){
	
	int i, j;
	for (i = 0; i <= MAX_ROW - 1; i++){
		for(j = 0; j<= MAX_COL - 1; j++){
			printf("%d ", m[i][j]);	
		}
		printf("\n");
	}
}

void randomMatrix(int matrix[MAX_ROW][MAX_COL]){
	
	int i, j;
	
	for (i = 0; i <= MAX_ROW - 1; i++){
		for(j = 0; j<= MAX_COL - 1; j++){
			matrix[i][j] = rand() % (MAX_ROW) + 1;
		}
	}
}



int main(int argc, char **argv)
{
	int matrix[MAX_ROW][MAX_COL] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	
	randomMatrix(matrix);
	
	printMatrix(matrix);
	
	return 0;
}

