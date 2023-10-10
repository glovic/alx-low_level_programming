#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	unsigned long int fib1 = 1, fib2 = 2, next;

	printf("%lu, %lu", fib1, fib2);

	for (i = 2; i < 98; i++)
	{
		next = fib1 + fib2;
		fib1 = fib2;
		fib2 = next;

		printf(", %lu", next);
	}

	printf("\n");

	return (0);
}
