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

void sumMatrix(int a[MAX_ROW][MAX_COL], int b[MAX_ROW][MAX_COL], int s[MAX_ROW][MAX_COL]){
	
	int i, j;
	
	for (i = 0; i <= MAX_ROW - 1; i++){
		for(j = 0; j<= MAX_COL - 1; j++){
			s[i][j] = a[i][j] + b[i][j];
		}
	}
}


int main(int argc, char **argv)
{
	int a[MAX_ROW][MAX_COL] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int b[MAX_ROW][MAX_COL] = { {9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
	int s[MAX_ROW][MAX_COL];
	
	sumMatrix(a,b,s);
	
	printMatrix(s);
	 
	return 0;
}

