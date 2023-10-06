#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function generates a random number, stores it in the
 * variable 'n', and prints the last digit of 'n' along with a description.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0)); /* Seed the random number generator */
	n = rand() - RAND_MAX / 2; /* Generate a random number */

	printf("Last digit of %d is ", n);

	/* Use modulo operator (%) to get the last digit */
	lastDigit = n % 10;

	printf("%d and is ", lastDigit);

	if (lastDigit > 5)
	{
		printf("greater than 5\n");
	}
	else if (lastDigit == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}

	return (0);
}
