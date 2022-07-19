/*
 * 
 */


#include <stdio.h>
#define MAX_LEN 7

int minimunArray(int * array){
	
	int j, minimun = 0;
	
	for(j = MAX_LEN - 1; j >= 0; j--){
			if(array[0] < array [j]){	
				minimun = array[j+1];
				break;
			}
		}
	
	return minimun;
}




int main(int argc, char **argv)
{
	int array[] = {3, 4, 5, 6, 7, 8, 9, 2};
	
	printf("%d", minimunArray(array));

	return 0;
}

