#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line.
 *
 * Return (0) Success
 */
void print_alphabet(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		_putchar(alphabets);
	}

	_putchar('\n');


}
