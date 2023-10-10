#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 *
 * @n: The value to determine the times table to be printed
 */
void print_times_table(int n)
{
	int num, multi, produ;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');

			for (multi = 1; multi <= n; multi++)
			{
				_putchar(',');
				_putchar(' ');

				produ = num * multi;

				if (produ <= 99)
				{
					_putchar(' ');
				}
				if (produ <= 9)
				{
					_putchar(' ');
				}
				if (produ >= 100)
				{
					_putchar((produ / 100) + '0');
					_putchar((produ / 10) % 10 + '0');
				}
				else if (produ <= 99 && produ >= 10)
				{
					_putchar((produ / 10) + '0');
				}
				_putchar((produ % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
