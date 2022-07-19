/*
 * 
 */


#include <stdio.h>
#define MAX_ROW 3
#define MAX_COL 3

void totalUpperLowerMatrix(int m[MAX_ROW][MAX_COL]){
	
	int i, j, sum_up = 0, sum_low = 0;
	
	for(i = 0; i <= MAX_ROW - 1; i++){
		for(j = 0; j <= MAX_COL - 1; j++){
			if(i < j){
				sum_up += m[i][j];
			} else if(i > j){
				sum_low += m[i][j];
			}
		}
	}
	
	printf("Total de elementos superiores: %d\n", sum_up);
	
	printf("Total de elementos inferiores: %d", sum_low);
	
}

int main(int argc, char **argv)
{
	int matrix[MAX_ROW][MAX_COL] = {{5, 2, 4}, {3, 5, 1}, {7, 6, 2}};
	
	totalUpperLowerMatrix(matrix);
	
	return 0;
}

