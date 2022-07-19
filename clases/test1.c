/*
 
 */

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	int i = 1; // variable de control
	int score; 
	float sum = 0, students;
	float average;
	printf("Ingresa la cantidad de alumnos: ");
	scanf("%f", &students);
	
	while(i <= students) {
		printf("Ingresa la nota del alumno #%d: ", i);
		scanf("%d", &score);
		sum = sum + score;	// sum += score;	
		i++; // i = i + 1;
	}
	
	printf("El promedio del salon es: %.2f", average = sum / students);
	
	
	
	return 0;
}

