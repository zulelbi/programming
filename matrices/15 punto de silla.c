/*
 * 
 */


#include <stdio.h>
#include <stdlib.h>
#define MAX_COL 3
#define MAX_ROW 3

int* chairPoint(int m[MAX_ROW][MAX_COL]){
	int i, j, x, is_max, is_min;
	int* result = malloc(2 * sizeof(int));
	
	result[0] = -1;
	result[1] = -1;
	
	for(i = 0; i <= MAX_ROW - 1; i++){
		for(j = 0; j <= MAX_COL -1; j++){
			// cada posicion de la matriz [i][j]
			is_max = 1;//true
			is_min = 1;
			
			for(x = 0; x <= MAX_COL -1 && is_max; x++){
				if(j != x && m[i][j] < m[i][x]) {
					is_max = 0;
				}
			}
			
			// verificar si es el minimo de su columna
			for(x = 0; is_max && x <= MAX_ROW -1 && is_min; x++){
				if(i != x && m[i][j] > m[x][j]){
					is_min = 0;
				}
			}
		
			if(is_max && is_min) {
				result[0] = i;
				result[1] = j;
				return result;
			}
			
		}
	}
	
	return result;
}

int main(int argc, char **argv)
{
	int m[MAX_ROW][MAX_COL]  = {{7, 14, 20}, {12, 10, 8}, {11, 6, 13}};
	int* r;
	
	r = chairPoint(m);
	
	printf("El punto de silla m[%d][%d] = %d", r[0], r[1], m[r[0]][r[1]]);
	
	return 0;
}

