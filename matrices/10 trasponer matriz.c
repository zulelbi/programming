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

void transposeMatrix(int m[MAX_ROW][MAX_COL]){
	
	int i, j = MAX_ROW - 1, next_value;
	
	for (i = 0; i <= MAX_ROW - 1; i++){
		for(j = 0; j<= MAX_COL - 1; j++){
			if(i != j && i > j){ // solo considerar triangular inferior para el cambio
				next_value = m[i][j];
				m[i][j] = m[j][i];
				m[j][i] = next_value;
			}
		}
	}
}


int main(int argc, char **argv)
{
	int matrix[MAX_ROW][MAX_COL] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	
	transposeMatrix(matrix);
	
	printMatrix(matrix);
	
	return 0;
}
