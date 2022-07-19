/*
 * 
 */

#include <stdio.h>
#define MAX_COL 4
#define MAX_ROW 4


int lowtriangularMatrix(int m[MAX_ROW][MAX_COL]){
	
	int i, j;
	
	for(i = 0 ; i <= MAX_ROW - 1; i++){
		for(j = 0; j<= MAX_COL - 1; j++){
			if(i < j && m[i][j] != 0){
				return 0;
			}
		}
	}
	return 1;
}


int main(int argc, char **argv)
{
	int matrix[MAX_ROW][MAX_COL] = {{1, 0, 0, 0}, {5, 6, 0, 0}, {9, 10, 11, 0}, {13, 14, 15, 16}};
	
	lowtriangularMatrix(matrix);
	
	if(lowtriangularMatrix(matrix)){
		printf("Es triangular");
	} else {
		printf("No es triangular");
	}
	
	return 0;
}

