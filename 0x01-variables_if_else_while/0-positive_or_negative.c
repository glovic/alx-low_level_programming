#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function generates a random number, stores it in the
 * variable 'n', and prints whether 'n' is positive, zero, or negative.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0)); /* Seed the random number generator */
	n = rand() - RAND_MAX / 2; /* Generate a random number */

	printf("%d is ", n);

	if (n > 0)
	{
		printf("positive");
	}
	else if (n == 0)
	{
		printf("zero");
	}
	else
	{
		printf("negative");
	}

	printf("\n"); /* Print a newline */
	return (0);
}
