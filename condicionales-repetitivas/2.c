/*
 * 
 */


#include <stdio.h>

int main()
{
	float score, final_exam, final_work, parcial_sum = 0, parcial_score, total_score;
	
	int i = 1;
	while (i<=3) {
		printf("Indique calificacion de parcial #%d:", i);
		scanf("%f", &score);
		parcial_sum += score;
		i++;
	}
	
	parcial_score = (parcial_sum/3);
	
	printf("Indique calificacion examen final: ");
	scanf("%f", &final_exam);
	 
	printf("Indique calificacion de trabajo final: ");
	scanf("%f", &final_work);
	
	total_score = (parcial_score*0.55) + (final_exam*0.30) + (final_work*0.15);
	
	printf("Tu calificación final es: %.2f", total_score);
	
	return 0;
}

