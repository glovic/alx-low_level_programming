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

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}

	char upper ='A';

	while (lower <= 'Z')
	{
		putchar(upper);
		upper++;
	}

	putchar("\n");

	return (0);
}
