#include "main.h"

/**
 * times_table - Prints the 9 times table.
 *
 * Description: This function prints the multiplication table for the number 9,
 * starting from 0 and displaying the result in a specific format.
 * Each row contains the results for a specific multiplier from 0 to 9.
 * The format is adjusted to align columns properly.
 */
void times_table(void)
{
	int num, multi, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (multi = 1; multi <= 9; multi++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * multi;

			if (prod <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((prod / 10) + '0');
			}

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
