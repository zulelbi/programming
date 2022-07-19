/*
 * 
 */

#include <stdio.h>
#define MAX_ROW 3
#define MAX_COL 4


void sumRowColMatrix(int m[MAX_ROW][MAX_COL]){
	
	int i, j, sum_row;
	int arr[MAX_COL];
	
	for(i = 0; i <= MAX_COL; arr[i++] = 0); // inicializa arr en 0s
	
	for(i = 0 ; i <= MAX_ROW - 1; i++){
		sum_row = 0;
		for(j = 0; j<= MAX_COL - 1; j++){
			sum_row += m[i][j]; // suma todas las posiciones por fila
			arr[j] += m[i][j]; // almacena en un array la sumatoria de cada columna 
		}
		printf("suma de la fila %d : %d \n", i, sum_row);
	}
	for(i = 0; i <= MAX_COL - 1; i++){
		printf("suma de la columna %d : %d \n", i, arr[i]);
	}
}


int main(int argc, char **argv)
{
	int matrix[MAX_ROW][MAX_COL] = {{2, 5, 7, 8}, {1, 3, 1, 9}, {4, 6, 2, 3}};
	
	sumRowColMatrix(matrix);
	
	return 0;
}

