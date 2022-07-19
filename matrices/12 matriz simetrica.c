/*
 * 
 */

#include <stdio.h>
#define MAX_COL 3
#define MAX_ROW 3


int symmetricMatrix(int m[MAX_ROW][MAX_COL]){
	
	int i, j;
	
	for(i = 0 ; i <= MAX_ROW - 1; i++){
		for(j = 0; j<= MAX_COL - 1; j++){
			if(m[i][j] != m[j][i]){
				return 0;
			}
		}
	}
	return 1;
}


int main(int argc, char **argv)
{
	int matrix[MAX_ROW][MAX_COL] = {{1, 2, 3}, {2, 4, 5}, {3, 5, 8}};
	
	if(symmetricMatrix(matrix)){
		printf("Es simetrica");
	} else {
		printf("No es simetrica");
	}
	
	return 0;
}

