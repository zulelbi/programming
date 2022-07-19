/*

 */


#include <stdio.h>

int main(int argc, char **argv)
{
	float provider_price, public_price;
	
	printf("Ingrese precio de proveedor: ");
	scanf("%f", &provider_price);
	
	public_price = provider_price*1.30;
	
	printf("Precio con ganancia incluida: %.2f", public_price);
	
	return 0;
}

