/*

 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	
	srand (time (NULL));
	int random_number = rand() % (100+1-1)+1;
	float value_buy, sale;
	
	printf ("Ingrese el valor de su compra: ");
	scanf("%f", &value_buy);

	printf("Su numero de promoción es: %d\n", random_number);
	
	if (random_number<74) {
		sale = value_buy*0.15;
		printf("Tu descuento es de: %.2f", sale);
	} else {
		sale = value_buy*0.20;
		printf("Tu descuento es de: %.2f", sale);
	}
	
	return 0;
}
