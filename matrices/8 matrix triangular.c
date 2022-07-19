/*
 * 
 */

#include <stdio.h>
#define MAX_COL 4
#define MAX_ROW 4


int triangularMatrix(int m[MAX_ROW][MAX_COL]){
	
	int i, j;
	
	for(i = 0 ; i <= MAX_ROW - 1; i++){
		for(j = 0; j<= MAX_COL - 1; j++){
			if(i > j && m[i][j] != 0){
				return 0;
			}
		}
	}
	return 1;
}


int main(int argc, char **argv)
{
	int matrix[MAX_ROW][MAX_COL] = {{1, 2, 3, 4}, {0, 6, 7, 8}, {0, 0, 11, 12}, {0, 3, 0, 16}};
	
	triangularMatrix(matrix);
	
	if(triangularMatrix(matrix)){
		printf("Es triangular");
	} else {
		printf("No es triangular");
	}
	
	return 0;
}

