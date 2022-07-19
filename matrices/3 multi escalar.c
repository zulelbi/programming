/*
 * 
 */


#include <stdio.h>
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

void escalarMatrix(int m[MAX_ROW][MAX_COL], int n){
		
	int i, j;
	
	for (i = 0; i <= MAX_ROW - 1; i++){
		for(j = 0; j<= MAX_COL - 1; j++){
			m[i][j] = m[i][j] * n; // puedo hacer *= n
		}
	}
}


int main(int argc, char **argv)
{
	int matrix[MAX_ROW][MAX_COL] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int n = 2;
	
	escalarMatrix(matrix, n);
	
	printMatrix(matrix);
	
	
	return 0;
}

