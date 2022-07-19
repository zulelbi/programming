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

int secondiagonalMatrix(int m[MAX_ROW][MAX_COL]){
	
	int i, j = MAX_ROW - 1, result = 0;
	
	for(i = 0 ; i <= MAX_ROW - 1; i++, j--){
		result += m[i][j];
	}
	
	return result;
}


int main(int argc, char **argv)
{
	int matrix[MAX_ROW][MAX_COL] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	
	printf("%d", secondiagonalMatrix(matrix));
	
	return 0;
}
