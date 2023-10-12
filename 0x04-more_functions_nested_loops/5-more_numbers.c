#include "main.h"

/**
 * more_numbers - Prints the numbers 0-14 ten times.
 */
void more_numbers(void)
{
	int digit, count;

	for (count = 0; count <= 9; count++)
	{
		for (digit = 0; digit <= 14; digit++)
		{
			if (digit > 9)
				_putchar((digit / 10) + '0');
			_putchar((digit % 10) + '0');
		}
		_putchar('\n');
	}
}
