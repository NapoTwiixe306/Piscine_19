#include <stdio.h>

/*
 * Pointeur => Variable contenant l'adresse d'une aurte variable
 *
 * [Variable]
 * 		maVariable => valeurs de la variable
 * 		&maVariable => adresse de la variable pointee
 * 	
 * 	[Pointeurs]
 * 		monPointeiur => adresse de la variable pointee
 * 		*monPointeur => valeurs de la viariable pointee
 * 		&monPointeur => adresse du pointeur
 *
 */

int swap_number(int *nombreA, int *nombreB)
{
	int tempo = 0; //B

	tempo = *nombreB;
	*nombreB = *nombreA;
	*nombreA = tempo;

	return 0;
}

int main(void)
{
	int nombreA = 15;
	int nombreB = 28;

	printf("Avant : A = %d et B = %d\n", nombreA ,nombreB);
	swap_number(&nombreA, &nombreB);
	printf("Apres : A = %d et B = %d\n", nombreA, nombreB);
	return (0);
}
