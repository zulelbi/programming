/*
 * 
 */


#include <stdio.h>
#define MAX_COL 3
#define MAX_ROW 3
#define TRUE 1
#define FALSE 0

void printMatrix(int m[MAX_ROW][MAX_COL]){
	
	int i, j;
	for (i = 0; i <= MAX_ROW - 1; i++){
		for(j = 0; j<= MAX_COL - 1; j++){
			printf("%d ", m[i][j]);	
		}
		printf("\n");
	}
}

int isMatrixEqual(int a[MAX_ROW][MAX_COL], int b[MAX_ROW][MAX_COL]){
	
	int i, j;
	
	for (i = 0; i <= MAX_ROW - 1; i++){
		for(j = 0; j<= MAX_COL - 1; j++){
			if(a[i][j] != b[i][j]){
				return FALSE;
			}
		}
	}
	return TRUE;
}


int main(int argc, char **argv)
{
	int a[MAX_ROW][MAX_COL] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int b[MAX_ROW][MAX_COL] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	
	if (isMatrixEqual(a, b)){
		printf("MATRICES IGUALES");
	} else {
		printf("NO SON IGUALES");
	}
	
	return 0;
}

