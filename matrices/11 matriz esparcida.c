/*
 * 
 */

#include <stdio.h>
#define MAX_COL 4
#define MAX_ROW 4


int sparseMatrix(int m[MAX_ROW][MAX_COL]){
	
	int i, j, count_zero = 0;
	
	for(i = 0 ; i <= MAX_ROW - 1; i++){
		for(j = 0; j<= MAX_COL - 1; j++){
			if(m[i][j] == 0){
				count_zero += 1;
			}
		}
	}
	return count_zero >= ((MAX_ROW * MAX_COL)/2);
}


int main(int argc, char **argv)
{
	int matrix[MAX_ROW][MAX_COL] = {{1, 0, 0, 0}, {5, 6, 0, 0}, {9, 10, 0, 0}, {13, 14, 15, 16}};
	
	if(sparseMatrix(matrix)){
		printf("Es esparcida");
	} else {
		printf("No es esparcida");
	}
	
	return 0;
}


