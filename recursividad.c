#include <stdio.h>
#include <string.h>

/*
 * 3 ^ 4 = 3 * 3 * 3 * 3 -> 3 * 3^3
 * 3 ^ 1 = 3
 * */

int exponencial(int a, int b) {
	if (b == 1) return a;
	
	return a * exponencial(a, b - 1);
}

/*
 * !5 = 5 * 4 * 3 * 2 * 1
 * */


unsigned long int factorial(int n){
	if (n == 1) return 1; // condicion de parada
	
	return n * factorial(n - 1); 
}

/*
 * fibo(0) -> 0
 * fibo(1) -> 1
 * fibo(n) -> fibo(n-1) + fibo(n-2)
 * 
 * */
 
int fibo(int n) {
	if(n <= 1) return n;
	
	return fibo(n -1) + fibo(n - 2);
}


int main(int argc, char **argv)
{	
	int n, m;
	int result;
	printf("Porfavor ingrese el numero: ");
	scanf("%d", &n);
	
	printf("Porfavor ingrese el numero: ");
	scanf("%d", &m);
	
	result = exponencial(n, m);
	printf("%d^%d = %d", n, m, result);
	
	return 0;
}

