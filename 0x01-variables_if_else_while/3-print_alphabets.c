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
	char letter = 'a';

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	char letter ='A';

	for (letter ='z'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}

	putchar("\n");

	return (0);
}
