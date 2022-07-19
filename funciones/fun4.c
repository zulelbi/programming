/* 
 */


#include <stdio.h>
#include <string.h>

void printfraction(int n, int d) {
	if (d == 1) {
			printf("%d", n);
	} else {
		printf ("%d/%d", n, d);
	}
}

int maximunDiviser2(int n, int d) {
	int minor = n > d ? d : n;
	int i;
	for(i = minor; i >= 1; i--){
		if(n % i == 0 && d % i == 0) break;
	}
	return i;
}

int maximunDiviser(int n, int d) {
	
	int divider;
	while (d!=0) {
		divider = n % d;
		n = d;
		d = divider;
	}
	return n;
}

void printSimplifiedFraction(int n, int d) {
	
	int maximun, numerator, divider_final;
	
	maximun = maximunDiviser(n, d);
	numerator = n/maximun;
	divider_final = d/maximun;
	
	printfraction(numerator, divider_final);
}

void addFraction(int n1, int d1, int n2, int d2) { 
	
	int num, div;
	
	num = n1 * d2 + n2 * d1;
	div = d1 * d2;
	
	printSimplifiedFraction(num, div);
}

void subtractFraction(int n1, int d1, int n2, int d2) {
	
	int num, div;
	
	num = n1 * d2 - n2 * d1;
	div = d1 * d2;
	
	printSimplifiedFraction(num, div);
}

void multiplyFraction(int n1, int d1, int n2, int d2) {

	int num, div;
	
	num = n1 * n2;
	div = d1 * d2;
	
	printSimplifiedFraction(num, div);
}

void divideFraction(int n1, int d1, int n2, int d2) {
	
	int num, div;
	
	num = n1 * d2;
	div = d1 * n2;
	
	printSimplifiedFraction(num, div);
}

int main()
{
	int n1, n2, d1, d2, option;
	
	printf ("Ingrese UNO (1) si desea sumar, DOS (2) restar, TRES (3) multiplicar, CUATRO (4) dividir ó CERO (0) para salir: ");
	scanf ("%d", &option);
	
	printf("Ingrese numerador 1: ");
	scanf("%d", &n1);
			
	printf("Ingrese denominador 1: ");
	scanf("%d", &d1);
			
	printf("Ingrese numerador 2: ");
	scanf("%d", &n2);
			
	printf("Ingrese denominador 2: ");
	scanf("%d", &d2);	
	
	switch (option) {
		case 1:
			addFraction(n1, d1, n2, d2);
			break;
		case 2:
			subtractFraction(n1, d1, n2, d2);
			break;
		case 3:
			multiplyFraction(n1, d1, n2, d2);
			break;
		case 4:
			divideFraction(n1, d1, n2, d2);
			break;
		case 0:
			printf ("Fin del programa");
			break;
		default:
			printf ("Opcion invalida");
	}
	
	
	
	return 0;
}

