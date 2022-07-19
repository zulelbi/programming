/*
 * STRINGS
 * */


#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	int i, j, vowals_count = 0, consonants_count = 0;
	
	printf("Ingrese sus caracteres: \n");
	fgets(str, sizeof(str), stdin); // ejemplo -> str = [h, o, l, a, \n, \0]
	
	// para reasignar un valor a una cadena de caracteres
	// strcpy(str, "nuevo valor"); 
	
	for(j = 0; str[j] != '\0'; j++); // existe una funcion para obtener el lenght(tamanño) de un string -> strlen(str);
	printf("El tamanño de su cadena de caracteres es: %d \n", j);
	/*
	*  Nota que si el usuario ingreso "hola" el tamanño de la cadena sera 5, esto se da porque al usuario presionar enter, 
	*  esta ingresando tambien un salto de linea (\n) que esta siendo contado como un caracter mas.
	*/
	
	//Contar la cantidad de vocales y consonantes
	for(i = 0; str[i] != '\0'; i++){
		if((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)) { // si es una letra del abecedario, minuscula o mayuscula
			switch(str[i]){
				case 97://a
				case 101://e
				case 105://i
				case 111://o
				case 117://u
					vowals_count++;
					break;
				default://si no es una de las anteriores (es una consonante)
					consonants_count++;
					break;
			}
		}
	}
	
	printf("El numero de vocales es %d y el numero de consonantes es %d", vowals_count, consonants_count);
	
	return 0;
}

