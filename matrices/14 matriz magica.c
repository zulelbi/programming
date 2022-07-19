/*
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX_COL 3
#define MAX_ROW 3

int isMagicMatrix(int m[MAX_ROW][MAX_COL]){
	
	int i, j, sum_row, sum_col, main_diago = 0, second_diago = 0;
	int last_value[MAX_ROW];
	
	for(i = 0 ; i <= MAX_ROW - 1; i++){
		sum_row = 0;
		sum_col = 0;
		for(j = 0; j<= MAX_COL - 1; j++){
			sum_row += m[i][j];
			sum_col += m[j][i];
			if (i == j){
				main_diago += m[i][j]; // suma la diagonal principal cuando i y j son iguales
			}
			if (j == ((MAX_COL - 1)- i)){
				second_diago += m[i][j]; // suma la diagonal secundaria
			}
			}
			if(sum_row != sum_col){
				return 0;
			} else {
				last_value[i] = sum_row;
			}
			if(i > 0){
				if(last_value[i-1] != sum_col){ // compara las sum de col con el valor anterior de filas y/o columnas, solo a partir de la segunda iteracion
					return 0;
				}
			}
		}
	return (last_value[i-1] == main_diago && last_value[i-1] == second_diago); // compara el ultimo valor de sum columnas con la sum de la diagonal principal y secundaria
}

int main(int argc, char **argv)
{
	int matrix[MAX_ROW][MAX_COL] = {{7, 14, 9}, {12, 10, 8}, {11, 6, 13}};
	
	if(isMagicMatrix(matrix)){
		printf("Es una matriz magica");
	} else {
		printf("No es una matriz magica");
	}

	return 0;
}

