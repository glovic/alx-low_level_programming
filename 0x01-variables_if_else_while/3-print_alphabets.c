#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints the alphabet in lowercase,
 *              followed by the alphabet in uppercase, and then a new line.
 *
 * Return: Always 0 (success)
 */
int main (void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		letter++;
	}

	while (lower <= 'Z')
	{
		putchar(upper);
		letter++;
	}

	putchar("\n");

	return (0);
}
