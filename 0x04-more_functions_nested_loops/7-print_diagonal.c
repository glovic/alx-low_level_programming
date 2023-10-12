#include "main.h"

/**
 * print_diagonal - Prints a diagonal line using the backslash (\) character.
 * @n: The number of backslash (\) characters to be printed.
 */
void print_diagonal(int n)
{
	int line, dash;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			for (dash = 0; dash < line; dash++)
				_putchar(' ');
			_putchar('\\');

			if (line == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
