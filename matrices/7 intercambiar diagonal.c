/*
 * 
 */

#include <stdio.h>
#define MAX_COL 4
#define MAX_ROW 4

void printMatrix(int m[MAX_ROW][MAX_COL]){
	
	int i, j;
	for (i = 0; i <= MAX_ROW - 1; i++){
		for(j = 0; j<= MAX_COL - 1; j++){
			printf("%d ", m[i][j]);	
		}
		printf("\n");
	}
}

void chanceDiagonal(int m[MAX_ROW][MAX_COL]){
	
	int i, j = MAX_ROW - 1, next_value;
	
	for(i = 0 ; i <= MAX_ROW - 1; i++, j--){
		next_value = m[i][i];
		m[i][i] = m[i][j];
		m[i][j] = next_value;
	}
}


int main(int argc, char **argv)
{
	int matrix[MAX_ROW][MAX_COL] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
	
	chanceDiagonal(matrix);
	
	printMatrix(matrix);
	
	return 0;
}
