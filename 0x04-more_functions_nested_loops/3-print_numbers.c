#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9.
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar((num % 9) + '0');
	}
	_putchar('\n');
}
