#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10.
 *
 * Return void
 */
void print_alphabet_x10(void)
{
	int alph_count = 0;
	char alphabets;

	while (alph_count <= 9)
	{
		for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		{
			_putchar(alphabets);
		}
		_putchar('\n');
		alph_count++;
	}
}
