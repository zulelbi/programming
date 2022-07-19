/*
 * Ejercicio 1 
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int departaments;
	int totalgain;
	int employeebonus;
	printf("Indique cantidad de departamentos: ");
	scanf("%d", &departaments);
	printf("Introduzca ganancia total anual: ");
	scanf("%d", &totalgain);
	
	employeebonus= (totalgain*0.05) - (departaments*10);
	printf("Bono por empleado= %d", employeebonus);
	
	return 0;
}

