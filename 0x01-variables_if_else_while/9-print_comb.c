#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int digit = 0;

	while (digit < 9)
	{
		putchar(digit + '0');
		putchar(',');
		putchar(' ');
		digit++;
	}
	putchar('9');
	putchar('\n');

	return (0);
}
