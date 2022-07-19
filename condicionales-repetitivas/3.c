/*
 
 */


#include <stdio.h>

int main()
{
	float dolar_value, pesos_value, dolars;
	
	printf ("Indique cantidad de pesos a cambiar: ");
	scanf ("%f", &pesos_value);

	printf ("Indique valor del dolar blue hoy: ");
	scanf ("%f", &dolar_value);
	
	dolars = pesos_value/dolar_value;
	
	printf ("Tus pesos en dolares son: %.2f", dolars);
	
	return 0;
}

