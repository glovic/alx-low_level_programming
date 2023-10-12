#include <stdio.h>

/**
 * main - Prints numbers from 1 to 100, replacing multiples of 3 with "Fizz,
 *	" multiples of 5 with "Buzz," and both with "FizzBuzz."
 *
 * Return: Always 0.
 */
int main(void)
{
	int digit;

	for (digit = 1; digit <= 100; digit++)
	{
		if ((digit % 3) == 0 && (digit % 5) == 0)
			printf("FizzBuzz");

		else if ((digit % 3) == 0)
			printf("Fizz");

		else if ((digit % 5) == 0)
			printf("Buzz");

		else
			printf("%d", digit);

		if (digit == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}
