/*
 * 
 */


#include <stdio.h>

int MCD(int n, int d) {
	
	int divider;
	while (d!=0) {
		divider = n % d;
		n = d;
		d = divider;
	}
	return n;
}

void simplifyFraction(int n, int d) {
	
	int divider, numerator, divider_final;
	
	divider = MCD(n, d);
	numerator = n/divider;
	divider_final = d/divider;
	
	printf ("%d/%d", numerator, divider_final);
}


int main(int argc, char **argv)
{
	int n1, d1;
	
	printf("Ingrese numerador 1: ");
	scanf("%d", &n1);
			
	printf("Ingrese denominador 1: ");
	scanf("%d", &d1);
	
	printf("%d", MCD(n1, d1));
	
	return 0;
}
// int divider;
	//while (d !=0) {
	//	divider = d;
	//	d = n % d;
	//	n = divider;
	//}
	//return n;
